#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/collections/Array.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Stack.h"
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
#include "org/pandalanguage/pandac/ClassDecl.h"
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
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Int32.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt64.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char16.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

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
typedef panda$collections$Iterator* (*$fn371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn383)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn390)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn396)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn402)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn456)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn462)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn468)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn479)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn485)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn491)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn497)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn503)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn509)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn517)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn523)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn529)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn614)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn620)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn626)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn706)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn726)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn732)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn738)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn764)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn770)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn776)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn825)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn831)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn837)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn846)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn863)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn893)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn901)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn907)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn913)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn925)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn931)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn937)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn968)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn974)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn980)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1019)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1025)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1031)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1044)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1050)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1056)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1071)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1077)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1083)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1099)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1111)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1125)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1131)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1137)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1162)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1207)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1213)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1219)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1226)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1232)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1238)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1283)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1287)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1297)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn1362)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1406)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1434)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1439)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1457)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1506)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1512)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1554)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1560)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1566)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1593)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1599)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1605)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1637)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1646)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1732)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1736)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1739)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1756)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1762)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1768)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1854)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1860)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1866)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1881)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1886)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn1898)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn1917)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn1928)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn1933)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn1960)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn1965)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn1985)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2004)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2030)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2038)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2052)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2058)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2064)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2078)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2086)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2099)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2120)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2126)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2130)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2154)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2160)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2191)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2201)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2206)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2224)(panda$core$Formattable*, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn2238)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2240)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2246)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2248)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2261)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2267)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2273)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2290)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2300)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2302)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2308)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2317)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2336)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2342)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2352)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2363)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2399)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2421)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2443)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2460)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2466)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2472)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2488)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2506)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2513)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2608)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2626)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn2659)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2667)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2671)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2674)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2679)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2684)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2689)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2695)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2700)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2713)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2717)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2721)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2727)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2747)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2754)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn2757)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2771)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2781)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2793)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2824)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2830)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2836)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn2838)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2846)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2851)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2867)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2873)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2878)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2891)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2899)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2907)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2910)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2928)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2936)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2947)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2953)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2971)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn2984)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2988)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn2992)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3002)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3007)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3010)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3039)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3062)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3068)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3074)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3434)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3436)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3441)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3443)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3453)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3457)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3462)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3464)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3471)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3481)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3485)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3488)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3492)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3496)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3500)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3548)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3559)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3561)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3564)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3589)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3593)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3602)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3608)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3614)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3618)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3627)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3633)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3652)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3657)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3670)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3679)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3681)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3686)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3690)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3692)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3699)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3706)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3710)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3714)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3734)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3740)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3746)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn3760)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3765)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3790)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3797)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3803)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3824)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3828)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3832)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3859)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3873)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn3880)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3882)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3912)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3917)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3923)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3940)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3946)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3952)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn3995)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4000)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4003)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4006)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4012)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4017)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4020)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4023)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4034)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn4048)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4054)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4060)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn4092)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4097)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4102)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4110)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4147)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4166)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn4181)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn4197)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4203)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4209)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn4266)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4313)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4322)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn4424)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4430)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4436)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn4522)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4550)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4552)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4556)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4559)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4563)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4567)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4570)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4575)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4578)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4591)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4595)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4603)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4615)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4631)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4646)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4670)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4683)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4692)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4698)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn4703)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4720)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4725)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4733)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn4738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4744)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4750)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn4778)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4782)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4827)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4848)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn4872)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4878)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4884)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4911)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4917)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4923)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4987)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4993)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4999)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn5017)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn5076)(panda$core$Formattable*, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn5133)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn5145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5157)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5217)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn5241)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn5250)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn5259)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5271)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5289)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5295)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5301)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5367)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5373)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5379)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5398)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5404)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5421)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5433)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn5444)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn5509)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn5520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5532)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn5543)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn5553)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5559)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5565)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5706)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5712)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5718)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5732)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5738)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5744)(panda$collections$Iterator*);
typedef void (*$fn5776)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, panda$collections$ImmutableArray*);
typedef void (*$fn5779)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn5783)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5789)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5795)(panda$collections$Iterator*);
typedef void (*$fn5800)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5803)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5808)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5812)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5818)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5824)(panda$collections$Iterator*);
typedef void (*$fn5828)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5844)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5850)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5856)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5865)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5871)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5877)(panda$collections$Iterator*);
typedef void (*$fn5894)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x65\x78\x74\x65\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6f\x66\x20\x63\x6c\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6f\x72\x65\x20\x61\x6e\x79\x20\x73\x75\x70\x65\x72\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6d\x6f\x72\x65\x20\x74\x68\x61\x6e\x20\x6f\x6e\x65\x20\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6e\x6f\x74\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6f\x72\x20\x61\x6d\x62\x69\x67\x75\x6f\x75\x73\x20\x6d\x61\x74\x63\x68\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x63\x6c\x61\x73\x73\x20\x6e\x61\x6d\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x66\x69\x6c\x65\x20\x6e\x61\x6d\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20\x61\x6e\x79\x20\x69\x6d\x70\x6f\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x30", 13, 2997537454666094288, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 15, -6693247693629641489, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20", 39, 8969777087809625471, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s4175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s4193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s4241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s4271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s4476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s4488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s4490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s4504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s4626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s4658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s4663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s4672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 44, -3829894589988660148, NULL };
static panda$core$String $s4781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s4895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20\x27", 34, 2522153630228324859, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20\x27", 34, 2522153630228324859, NULL };
static panda$core$String $s4939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s5062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s5068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s5073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s5079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s5135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 22, 417303976175476333, NULL };
static panda$core$String $s5189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s5235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s5239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s5887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s5890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    self->reusedValueCount = ((panda$core$Int64) { 0 });
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
    panda$core$Int64 $match$261_13276;
    org$pandalanguage$pandac$ClassDecl* resolved278;
    org$pandalanguage$pandac$Type* result280;
    org$pandalanguage$pandac$Symbol* s284;
    panda$core$Int64 $match$275_25286;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp291;
    panda$collections$Array* subtypes305;
    org$pandalanguage$pandac$Type* sub308;
    panda$collections$Array* subtypes319;
    org$pandalanguage$pandac$Type* base322;
    panda$core$MutableString* name325;
    panda$core$Char8 $tmp329;
    panda$core$String* separator330;
    panda$core$Range$LTpanda$core$Int64$GT $tmp332;
    org$pandalanguage$pandac$Type* resolved347;
    panda$core$Char8 $tmp357;
    org$pandalanguage$pandac$Type* result358;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    {
        $match$261_13276 = p_type->typeKind;
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261_13276, ((panda$core$Int64) { 10 }));
        if ($tmp277.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp279 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved278 = $tmp279;
            if (((panda$core$Bit) { resolved278 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp281 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved278);
                result280 = $tmp281;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp282 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved278, result280);
                    panda$core$Bit $tmp283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp282);
                    if ($tmp283.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result280;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp285 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s284 = $tmp285;
            if (((panda$core$Bit) { s284 != NULL }).value) {
            {
                {
                    $match$275_25286 = s284->kind;
                    panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$275_25286, ((panda$core$Int64) { 200 }));
                    if ($tmp287.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp288 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp288->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp288->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp288, ((org$pandalanguage$pandac$Alias*) s284)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp288;
                    }
                    }
                    else {
                    panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$275_25286, ((panda$core$Int64) { 203 }));
                    if ($tmp290.value) {
                    {
                        gp291 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s284);
                        org$pandalanguage$pandac$ClassDecl* $tmp292 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp291->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp292);
                        org$pandalanguage$pandac$Type* $tmp293 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp293->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp293->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp293, gp291);
                        return $tmp293;
                    }
                    }
                    else {
                    panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$275_25286, ((panda$core$Int64) { 207 }));
                    if ($tmp295.value) {
                    {
                        return ((org$pandalanguage$pandac$Type*) s284);
                    }
                    }
                    else {
                    panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$275_25286, ((panda$core$Int64) { 201 }));
                    if ($tmp296.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp297 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s284));
                        return $tmp297;
                    }
                    }
                    }
                    }
                    }
                }
            }
            }
            panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s298, ((panda$core$Object*) p_type));
            panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, &$s300);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp301);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261_13276, ((panda$core$Int64) { 11 }));
        if ($tmp302.value) {
        {
            panda$core$Int64 $tmp303 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp303, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp304.value);
            panda$collections$Array* $tmp306 = (panda$collections$Array*) malloc(40);
            $tmp306->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp306->refCount.value = 1;
            panda$collections$Array$init($tmp306);
            subtypes305 = $tmp306;
            panda$core$Object* $tmp309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp310 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp309));
            sub308 = $tmp310;
            if (((panda$core$Bit) { sub308 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes305, ((panda$core$Object*) sub308));
            org$pandalanguage$pandac$Type* $tmp311 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp311->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp311->refCount.value = 1;
            panda$core$Object* $tmp313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes305, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp313))->name, &$s314);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp311, $tmp315, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes305), ((panda$core$Bit) { true }));
            return $tmp311;
        }
        }
        else {
        panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261_13276, ((panda$core$Int64) { 21 }));
        if ($tmp316.value) {
        {
            panda$core$Int64 $tmp317 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp318 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp317, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp318.value);
            panda$collections$Array* $tmp320 = (panda$collections$Array*) malloc(40);
            $tmp320->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp320->refCount.value = 1;
            panda$collections$Array$init($tmp320);
            subtypes319 = $tmp320;
            panda$core$Object* $tmp323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp324 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp323), ((panda$core$Bit) { false }));
            base322 = $tmp324;
            if (((panda$core$Bit) { base322 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes319, ((panda$core$Object*) base322));
            panda$core$MutableString* $tmp326 = (panda$core$MutableString*) malloc(48);
            $tmp326->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp326->refCount.value = 1;
            panda$core$Object* $tmp328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes319, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp326, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp328))->name);
            name325 = $tmp326;
            panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name325, $tmp329);
            separator330 = &$s331;
            panda$core$Int64 $tmp333 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp332, ((panda$core$Int64) { 1 }), $tmp333, ((panda$core$Bit) { false }));
            int64_t $tmp335 = $tmp332.min.value;
            panda$core$Int64 i334 = { $tmp335 };
            int64_t $tmp337 = $tmp332.max.value;
            bool $tmp338 = $tmp332.inclusive.value;
            if ($tmp338) goto $l345; else goto $l346;
            $l345:;
            if ($tmp335 <= $tmp337) goto $l339; else goto $l341;
            $l346:;
            if ($tmp335 < $tmp337) goto $l339; else goto $l341;
            $l339:;
            {
                panda$core$Object* $tmp348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i334);
                org$pandalanguage$pandac$Type* $tmp349 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp348));
                resolved347 = $tmp349;
                if (((panda$core$Bit) { resolved347 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes319, ((panda$core$Object*) resolved347));
                panda$core$MutableString$append$panda$core$String(name325, separator330);
                panda$core$MutableString$append$panda$core$String(name325, ((org$pandalanguage$pandac$Symbol*) resolved347)->name);
                separator330 = &$s350;
            }
            $l342:;
            int64_t $tmp352 = $tmp337 - i334.value;
            if ($tmp338) goto $l353; else goto $l354;
            $l353:;
            if ((uint64_t) $tmp352 >= 1) goto $l351; else goto $l341;
            $l354:;
            if ((uint64_t) $tmp352 > 1) goto $l351; else goto $l341;
            $l351:;
            i334.value += 1;
            goto $l339;
            $l341:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp357, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name325, $tmp357);
            org$pandalanguage$pandac$Type* $tmp359 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp359->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp359->refCount.value = 1;
            panda$core$String* $tmp361 = panda$core$MutableString$finish$R$panda$core$String(name325);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp359, $tmp361, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes319), ((panda$core$Bit) { true }));
            result358 = $tmp359;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result358->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp363 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp362));
                panda$core$Bit $tmp364 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp363, result358);
                panda$core$Bit $tmp365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp364);
                if ($tmp365.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result358;
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp366 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp366;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old367;
    panda$collections$Iterator* p$Iter368;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p380;
    org$pandalanguage$pandac$Type* resolved385;
    panda$collections$Iterator* rawS$Iter387;
    org$pandalanguage$pandac$Type* rawS399;
    org$pandalanguage$pandac$Type* s404;
    org$pandalanguage$pandac$ClassDecl* sClass406;
    panda$collections$Iterator* m$Iter453;
    org$pandalanguage$pandac$MethodDecl* m465;
    panda$collections$Iterator* intf$Iter476;
    org$pandalanguage$pandac$Type* intf488;
    panda$collections$Iterator* p$Iter494;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p506;
    org$pandalanguage$pandac$ClassDecl* cl511;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old367 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp369 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp369 = $tmp369->next;
        }
        $fn371 $tmp370 = $tmp369->methods[0];
        panda$collections$Iterator* $tmp372 = $tmp370(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter368 = $tmp372;
        $l373:;
        ITable* $tmp375 = p$Iter368->$class->itable;
        while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp375 = $tmp375->next;
        }
        $fn377 $tmp376 = $tmp375->methods[0];
        panda$core$Bit $tmp378 = $tmp376(p$Iter368);
        panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
        if (!$tmp379.value) goto $l374;
        {
            ITable* $tmp381 = p$Iter368->$class->itable;
            while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp381 = $tmp381->next;
            }
            $fn383 $tmp382 = $tmp381->methods[1];
            panda$core$Object* $tmp384 = $tmp382(p$Iter368);
            p380 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp384);
            org$pandalanguage$pandac$Type* $tmp386 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p380->bound, ((panda$core$Bit) { false }));
            resolved385 = $tmp386;
            if (((panda$core$Bit) { resolved385 != NULL }).value) {
            {
                p380->bound = resolved385;
            }
            }
        }
        goto $l373;
        $l374:;
    }
    {
        ITable* $tmp388 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp388->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp388 = $tmp388->next;
        }
        $fn390 $tmp389 = $tmp388->methods[0];
        panda$collections$Iterator* $tmp391 = $tmp389(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter387 = $tmp391;
        $l392:;
        ITable* $tmp394 = rawS$Iter387->$class->itable;
        while ($tmp394->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp394 = $tmp394->next;
        }
        $fn396 $tmp395 = $tmp394->methods[0];
        panda$core$Bit $tmp397 = $tmp395(rawS$Iter387);
        panda$core$Bit $tmp398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp397);
        if (!$tmp398.value) goto $l393;
        {
            ITable* $tmp400 = rawS$Iter387->$class->itable;
            while ($tmp400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp400 = $tmp400->next;
            }
            $fn402 $tmp401 = $tmp400->methods[1];
            panda$core$Object* $tmp403 = $tmp401(rawS$Iter387);
            rawS399 = ((org$pandalanguage$pandac$Type*) $tmp403);
            org$pandalanguage$pandac$Type* $tmp405 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS399, ((panda$core$Bit) { false }));
            s404 = $tmp405;
            if (((panda$core$Bit) { s404 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp407 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s404);
                sClass406 = $tmp407;
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, sClass406);
                if (((panda$core$Bit) { sClass406 != NULL }).value) {
                {
                    panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass406->classKind.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp408.value) {
                    {
                        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind.$rawValue, ((panda$core$Int64) { 1 }));
                        if ($tmp409.value) {
                        {
                            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s410, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s412);
                            panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s414, ((org$pandalanguage$pandac$Symbol*) s404)->name);
                            panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
                            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, $tmp417);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s404)->position, $tmp418);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s404;
                            panda$core$Int64 $tmp419 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp420 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp419, ((panda$core$Int64) { 0 }));
                            if ($tmp420.value) {
                            {
                                panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s421, ((panda$core$Object*) s404));
                                panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s423);
                                panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s426);
                                panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, &$s428);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s404)->position, $tmp429);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s430, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp431, &$s432);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s404)->position, $tmp433);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass406->classKind.$rawValue, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp434.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s404));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l392;
        $l393:;
    }
    bool $tmp435 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp435) goto $l436;
    panda$core$Bit $tmp438 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s437);
    $tmp435 = $tmp438.value;
    $l436:;
    panda$core$Bit $tmp439 = { $tmp435 };
    if ($tmp439.value) {
    {
        org$pandalanguage$pandac$Type* $tmp440 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp440;
    }
    }
    bool $tmp442 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp442) goto $l443;
    panda$core$Bit $tmp444 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp445 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp444);
    $tmp442 = $tmp445.value;
    $l443:;
    panda$core$Bit $tmp446 = { $tmp442 };
    bool $tmp441 = $tmp446.value;
    if (!$tmp441) goto $l447;
    panda$core$Bit $tmp449 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s448);
    $tmp441 = $tmp449.value;
    $l447:;
    panda$core$Bit $tmp450 = { $tmp441 };
    if ($tmp450.value) {
    {
        panda$core$Int64 $tmp451 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp452 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp451);
        p_cl->annotations->flags = $tmp452;
        {
            ITable* $tmp454 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp454 = $tmp454->next;
            }
            $fn456 $tmp455 = $tmp454->methods[0];
            panda$collections$Iterator* $tmp457 = $tmp455(((panda$collections$Iterable*) p_cl->methods));
            m$Iter453 = $tmp457;
            $l458:;
            ITable* $tmp460 = m$Iter453->$class->itable;
            while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp460 = $tmp460->next;
            }
            $fn462 $tmp461 = $tmp460->methods[0];
            panda$core$Bit $tmp463 = $tmp461(m$Iter453);
            panda$core$Bit $tmp464 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp463);
            if (!$tmp464.value) goto $l459;
            {
                ITable* $tmp466 = m$Iter453->$class->itable;
                while ($tmp466->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp466 = $tmp466->next;
                }
                $fn468 $tmp467 = $tmp466->methods[1];
                panda$core$Object* $tmp469 = $tmp467(m$Iter453);
                m465 = ((org$pandalanguage$pandac$MethodDecl*) $tmp469);
                panda$core$Int64 $tmp470 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp471 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m465->annotations->flags, $tmp470);
                m465->annotations->flags = $tmp471;
                panda$core$Bit $tmp472 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self->scanner, m465->annotations, m465->body);
                if ($tmp472.value) {
                {
                    panda$core$Int64 $tmp473 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp474 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m465->annotations->flags, $tmp473);
                    m465->annotations->flags = $tmp474;
                }
                }
            }
            goto $l458;
            $l459:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp475 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp475, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp477 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp477->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp477 = $tmp477->next;
        }
        $fn479 $tmp478 = $tmp477->methods[0];
        panda$collections$Iterator* $tmp480 = $tmp478(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter476 = $tmp480;
        $l481:;
        ITable* $tmp483 = intf$Iter476->$class->itable;
        while ($tmp483->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp483 = $tmp483->next;
        }
        $fn485 $tmp484 = $tmp483->methods[0];
        panda$core$Bit $tmp486 = $tmp484(intf$Iter476);
        panda$core$Bit $tmp487 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp486);
        if (!$tmp487.value) goto $l482;
        {
            ITable* $tmp489 = intf$Iter476->$class->itable;
            while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp489 = $tmp489->next;
            }
            $fn491 $tmp490 = $tmp489->methods[1];
            panda$core$Object* $tmp492 = $tmp490(intf$Iter476);
            intf488 = ((org$pandalanguage$pandac$Type*) $tmp492);
            org$pandalanguage$pandac$ClassDecl* $tmp493 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf488);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp493, intf488);
        }
        goto $l481;
        $l482:;
    }
    {
        ITable* $tmp495 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp495->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp495 = $tmp495->next;
        }
        $fn497 $tmp496 = $tmp495->methods[0];
        panda$collections$Iterator* $tmp498 = $tmp496(((panda$collections$Iterable*) p_cl->parameters));
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
            p506 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp510);
            org$pandalanguage$pandac$ClassDecl* $tmp512 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p506->bound);
            cl511 = $tmp512;
            if (((panda$core$Bit) { cl511 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl511)->position, cl511, p506->bound);
            }
            }
        }
        goto $l499;
        $l500:;
    }
    self->symbolTable = old367;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old513;
    panda$collections$Iterator* p$Iter514;
    org$pandalanguage$pandac$MethodDecl$Parameter* p526;
    org$pandalanguage$pandac$MethodDecl* overridden534;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old513 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp515 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp515->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp515 = $tmp515->next;
        }
        $fn517 $tmp516 = $tmp515->methods[0];
        panda$collections$Iterator* $tmp518 = $tmp516(((panda$collections$Iterable*) p_m->parameters));
        p$Iter514 = $tmp518;
        $l519:;
        ITable* $tmp521 = p$Iter514->$class->itable;
        while ($tmp521->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp521 = $tmp521->next;
        }
        $fn523 $tmp522 = $tmp521->methods[0];
        panda$core$Bit $tmp524 = $tmp522(p$Iter514);
        panda$core$Bit $tmp525 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp524);
        if (!$tmp525.value) goto $l520;
        {
            ITable* $tmp527 = p$Iter514->$class->itable;
            while ($tmp527->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp527 = $tmp527->next;
            }
            $fn529 $tmp528 = $tmp527->methods[1];
            panda$core$Object* $tmp530 = $tmp528(p$Iter514);
            p526 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp530);
            org$pandalanguage$pandac$Type* $tmp531 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p526->type);
            p526->type = $tmp531;
        }
        goto $l519;
        $l520:;
    }
    org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp532;
    p_m->resolved = ((panda$core$Bit) { true });
    panda$core$Bit $tmp533 = panda$core$Bit$$NOT$R$panda$core$Bit(p_m->owner->external);
    if ($tmp533.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp535 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
        overridden534 = $tmp535;
        if (((panda$core$Bit) { overridden534 != NULL }).value) {
        {
            panda$core$Bit $tmp536 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
            panda$core$Bit $tmp537 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp536);
            if ($tmp537.value) {
            {
                panda$core$String* $tmp538 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp539 = panda$core$String$convert$R$panda$core$String($tmp538);
                panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, &$s540);
                panda$core$String* $tmp542 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden534);
                panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, $tmp542);
                panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s544);
                panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s546);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp547);
            }
            }
            panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            bool $tmp548 = $tmp549.value;
            if (!$tmp548) goto $l550;
            panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden534->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
            $tmp548 = $tmp551.value;
            $l550:;
            panda$core$Bit $tmp552 = { $tmp548 };
            if ($tmp552.value) {
            {
                panda$core$String* $tmp553 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp554 = panda$core$String$convert$R$panda$core$String($tmp553);
                panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
                panda$core$String* $tmp557 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden534);
                panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, $tmp557);
                panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
                panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp562);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp563 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        if ($tmp563.value) {
        {
            panda$core$String* $tmp564 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp565 = panda$core$String$convert$R$panda$core$String($tmp564);
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s566);
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s568);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp569);
        }
        }
        }
    }
    }
    self->symbolTable = old513;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old570;
    org$pandalanguage$pandac$Type* resolved573;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old570 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp571 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp572 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp571);
    if ($tmp572.value) {
    {
        org$pandalanguage$pandac$Type* $tmp574 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved573 = $tmp574;
        if (((panda$core$Bit) { resolved573 != NULL }).value) {
        {
            p_f->type = resolved573;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp575 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp576 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp575, p_f->type);
                p_f->value = $tmp576;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old570;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s577);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old570;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp578 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp578;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old570;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp579 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp579;
    org$pandalanguage$pandac$IRNode* $tmp580 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp580;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old570;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ChoiceEntry* p_c) {
    org$pandalanguage$pandac$SymbolTable* old583;
    panda$core$Range$LTpanda$core$Int64$GT $tmp584;
    if (p_c->resolved.value) {
    {
        return;
    }
    }
    p_c->resolved = ((panda$core$Bit) { true });
    panda$core$Int64 $tmp581 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp581, ((panda$core$Int64) { 0 }));
    if ($tmp582.value) {
    {
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_c->owner));
    old583 = self->symbolTable;
    self->symbolTable = p_c->owner->symbolTable;
    panda$core$Int64 $tmp585 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp584, ((panda$core$Int64) { 0 }), $tmp585, ((panda$core$Bit) { false }));
    int64_t $tmp587 = $tmp584.min.value;
    panda$core$Int64 i586 = { $tmp587 };
    int64_t $tmp589 = $tmp584.max.value;
    bool $tmp590 = $tmp584.inclusive.value;
    if ($tmp590) goto $l597; else goto $l598;
    $l597:;
    if ($tmp587 <= $tmp589) goto $l591; else goto $l593;
    $l598:;
    if ($tmp587 < $tmp589) goto $l591; else goto $l593;
    $l591:;
    {
        panda$core$Object* $tmp599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_c->fields, i586);
        org$pandalanguage$pandac$Type* $tmp600 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp599));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_c->fields, i586, ((panda$core$Object*) $tmp600));
    }
    $l594:;
    int64_t $tmp602 = $tmp589 - i586.value;
    if ($tmp590) goto $l603; else goto $l604;
    $l603:;
    if ((uint64_t) $tmp602 >= 1) goto $l601; else goto $l593;
    $l604:;
    if ((uint64_t) $tmp602 > 1) goto $l601; else goto $l593;
    $l601:;
    i586.value += 1;
    goto $l591;
    $l593:;
    self->symbolTable = old583;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_callTarget, panda$collections$ImmutableArray* p_methods, panda$collections$ImmutableArray* p_args, org$pandalanguage$pandac$Type* p_targetType) {
    panda$collections$Array* best607;
    panda$core$Int64$nullable bestCost610;
    panda$collections$Iterator* m$Iter611;
    org$pandalanguage$pandac$MethodRef* m623;
    panda$core$Int64$nullable cost628;
    org$pandalanguage$pandac$IRNode* result638;
    panda$collections$Array* $tmp608 = (panda$collections$Array*) malloc(40);
    $tmp608->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp608->refCount.value = 1;
    panda$collections$Array$init($tmp608);
    best607 = $tmp608;
    bestCost610 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp612 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp612 = $tmp612->next;
        }
        $fn614 $tmp613 = $tmp612->methods[0];
        panda$collections$Iterator* $tmp615 = $tmp613(((panda$collections$Iterable*) p_methods));
        m$Iter611 = $tmp615;
        $l616:;
        ITable* $tmp618 = m$Iter611->$class->itable;
        while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp618 = $tmp618->next;
        }
        $fn620 $tmp619 = $tmp618->methods[0];
        panda$core$Bit $tmp621 = $tmp619(m$Iter611);
        panda$core$Bit $tmp622 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp621);
        if (!$tmp622.value) goto $l617;
        {
            ITable* $tmp624 = m$Iter611->$class->itable;
            while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp624 = $tmp624->next;
            }
            $fn626 $tmp625 = $tmp624->methods[1];
            panda$core$Object* $tmp627 = $tmp625(m$Iter611);
            m623 = ((org$pandalanguage$pandac$MethodRef*) $tmp627);
            panda$core$Int64$nullable $tmp629 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m623, ((panda$collections$ListView*) p_args), p_targetType);
            cost628 = $tmp629;
            if (((panda$core$Bit) { !cost628.nonnull }).value) {
            {
                goto $l616;
            }
            }
            if (((panda$core$Bit) { !bestCost610.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best607, ((panda$core$Object*) m623));
                bestCost610 = cost628;
                goto $l616;
            }
            }
            panda$core$Bit $tmp630 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost628.value), ((panda$core$Int64) bestCost610.value));
            if ($tmp630.value) {
            {
                panda$collections$Array$clear(best607);
                bestCost610 = cost628;
            }
            }
            panda$core$Bit $tmp634;
            if (((panda$core$Bit) { cost628.nonnull }).value) goto $l631; else goto $l632;
            $l631:;
            panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost628.value), ((panda$core$Int64) bestCost610.value));
            $tmp634 = $tmp635;
            goto $l633;
            $l632:;
            $tmp634 = ((panda$core$Bit) { false });
            goto $l633;
            $l633:;
            if ($tmp634.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best607, ((panda$core$Object*) m623));
            }
            }
        }
        goto $l616;
        $l617:;
    }
    panda$core$Int64 $tmp636 = panda$collections$Array$get_count$R$panda$core$Int64(best607);
    panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp636, ((panda$core$Int64) { 1 }));
    if ($tmp637.value) {
    {
        panda$core$Object* $tmp639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best607, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp640 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_callTarget, ((org$pandalanguage$pandac$MethodRef*) $tmp639), ((panda$collections$ListView*) p_args));
        result638 = $tmp640;
        if (((panda$core$Bit) { p_targetType != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp641 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result638, p_targetType);
            result638 = $tmp641;
        }
        }
        return result638;
    }
    }
    org$pandalanguage$pandac$Position$wrapper* $tmp643;
    $tmp643 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
    $tmp643->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp643->refCount = 1;
    $tmp643->value = p_position;
    panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s642, ((panda$core$Object*) $tmp643));
    panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s645);
    panda$core$Object* $tmp647 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_methods, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp647)->value)->name);
    panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, &$s649);
    panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp650, ((panda$core$Object*) best607));
    panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp651, &$s652);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp653));
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$IRNode* $match$539_9654;
    org$pandalanguage$pandac$Position position656;
    org$pandalanguage$pandac$Position position660;
    org$pandalanguage$pandac$IRNode* callTarget662;
    panda$collections$ImmutableArray* methods664;
    panda$collections$ImmutableArray* args666;
    org$pandalanguage$pandac$Position position670;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$539_9654 = p_expr;
        panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_9654->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp655.value) {
        {
            org$pandalanguage$pandac$Position* $tmp657 = ((org$pandalanguage$pandac$Position*) ((char*) $match$539_9654->$data + 0));
            position656 = *$tmp657;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position656, &$s658);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_9654->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$Position* $tmp661 = ((org$pandalanguage$pandac$Position*) ((char*) $match$539_9654->$data + 0));
            position660 = *$tmp661;
            org$pandalanguage$pandac$IRNode** $tmp663 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$539_9654->$data + 24));
            callTarget662 = *$tmp663;
            panda$collections$ImmutableArray** $tmp665 = ((panda$collections$ImmutableArray**) ((char*) $match$539_9654->$data + 32));
            methods664 = *$tmp665;
            panda$collections$ImmutableArray** $tmp667 = ((panda$collections$ImmutableArray**) ((char*) $match$539_9654->$data + 40));
            args666 = *$tmp667;
            org$pandalanguage$pandac$IRNode* $tmp668 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position660, callTarget662, methods664, args666, NULL);
            return $tmp668;
        }
        }
        else {
        panda$core$Bit $tmp669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_9654->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp669.value) {
        {
            org$pandalanguage$pandac$Position* $tmp671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$539_9654->$data + 0));
            position670 = *$tmp671;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position670, &$s672);
            return NULL;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp673 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp674 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp673);
            return $tmp674;
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp675 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp675) goto $l676;
    panda$core$Bit $tmp678 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s677);
    $tmp675 = $tmp678.value;
    $l676:;
    panda$core$Bit $tmp679 = { $tmp675 };
    return $tmp679;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result680;
    org$pandalanguage$pandac$ClassDecl* s688;
    panda$collections$Iterator* f$Iter691;
    org$pandalanguage$pandac$FieldDecl* f703;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp681 = (panda$collections$Array*) malloc(40);
    $tmp681->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp681->refCount.value = 1;
    panda$collections$Array$init($tmp681);
    result680 = $tmp681;
    panda$core$Bit $tmp684 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp684);
    bool $tmp683 = $tmp685.value;
    if (!$tmp683) goto $l686;
    $tmp683 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l686:;
    panda$core$Bit $tmp687 = { $tmp683 };
    if ($tmp687.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp689 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s688 = $tmp689;
        if (((panda$core$Bit) { s688 != NULL }).value) {
        {
            panda$collections$ListView* $tmp690 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s688);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result680, ((panda$collections$CollectionView*) $tmp690));
        }
        }
    }
    }
    {
        ITable* $tmp692 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp692 = $tmp692->next;
        }
        $fn694 $tmp693 = $tmp692->methods[0];
        panda$collections$Iterator* $tmp695 = $tmp693(((panda$collections$Iterable*) p_cl->fields));
        f$Iter691 = $tmp695;
        $l696:;
        ITable* $tmp698 = f$Iter691->$class->itable;
        while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp698 = $tmp698->next;
        }
        $fn700 $tmp699 = $tmp698->methods[0];
        panda$core$Bit $tmp701 = $tmp699(f$Iter691);
        panda$core$Bit $tmp702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp701);
        if (!$tmp702.value) goto $l697;
        {
            ITable* $tmp704 = f$Iter691->$class->itable;
            while ($tmp704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp704 = $tmp704->next;
            }
            $fn706 $tmp705 = $tmp704->methods[1];
            panda$core$Object* $tmp707 = $tmp705(f$Iter691);
            f703 = ((org$pandalanguage$pandac$FieldDecl*) $tmp707);
            panda$core$Bit $tmp708 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f703->annotations);
            panda$core$Bit $tmp709 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp708);
            if ($tmp709.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result680, ((panda$core$Object*) f703));
            }
            }
        }
        goto $l696;
        $l697:;
    }
    return ((panda$collections$ListView*) result680);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result710;
    panda$core$Bit $tmp712;
    panda$core$Object* $tmp711 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result710 = ($tmp711 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp711)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result710.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp712, p_f);
        result710 = ((panda$core$Bit$nullable) { $tmp712, true });
        panda$core$Bit$wrapper* $tmp713;
        $tmp713 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp713->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp713->refCount = 1;
        $tmp713->value = ((panda$core$Bit) result710.value);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) $tmp713));
    }
    }
    return ((panda$core$Bit) result710.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result714;
    panda$core$String* suffix716;
    panda$core$Bit found722;
    panda$collections$Iterator* dir$Iter723;
    panda$io$File* dir735;
    panda$io$File* f740;
    panda$core$String$Index$nullable index744;
    org$pandalanguage$pandac$ClassDecl* parent747;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp748;
    panda$core$Object* $tmp715 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result714 = ((org$pandalanguage$pandac$ClassDecl*) $tmp715);
    if (((panda$core$Bit) { result714 == NULL }).value) {
    {
        panda$core$String* $tmp719 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s717, &$s718);
        panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp719, &$s720);
        suffix716 = $tmp721;
        found722 = ((panda$core$Bit) { false });
        {
            ITable* $tmp724 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp724 = $tmp724->next;
            }
            $fn726 $tmp725 = $tmp724->methods[0];
            panda$collections$Iterator* $tmp727 = $tmp725(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter723 = $tmp727;
            $l728:;
            ITable* $tmp730 = dir$Iter723->$class->itable;
            while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp730 = $tmp730->next;
            }
            $fn732 $tmp731 = $tmp730->methods[0];
            panda$core$Bit $tmp733 = $tmp731(dir$Iter723);
            panda$core$Bit $tmp734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp733);
            if (!$tmp734.value) goto $l729;
            {
                ITable* $tmp736 = dir$Iter723->$class->itable;
                while ($tmp736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp736 = $tmp736->next;
                }
                $fn738 $tmp737 = $tmp736->methods[1];
                panda$core$Object* $tmp739 = $tmp737(dir$Iter723);
                dir735 = ((panda$io$File*) $tmp739);
                panda$io$File* $tmp741 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir735, suffix716);
                f740 = $tmp741;
                panda$core$Bit $tmp742 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f740);
                if ($tmp742.value) {
                {
                    found722 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f740);
                    panda$core$Object* $tmp743 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result714 = ((org$pandalanguage$pandac$ClassDecl*) $tmp743);
                }
                }
            }
            goto $l728;
            $l729:;
        }
    }
    }
    if (((panda$core$Bit) { result714 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp746 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s745);
        index744 = $tmp746;
        if (((panda$core$Bit) { index744.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp748, ((panda$core$String$Index$nullable) { .nonnull = false }), index744, ((panda$core$Bit) { false }));
            panda$core$String* $tmp749 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp748);
            org$pandalanguage$pandac$ClassDecl* $tmp750 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp749);
            parent747 = $tmp750;
            if (((panda$core$Bit) { parent747 != NULL }).value) {
            {
                panda$core$Object* $tmp751 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result714 = ((org$pandalanguage$pandac$ClassDecl*) $tmp751);
            }
            }
        }
        }
    }
    }
    return result714;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result752;
    panda$core$String* suffix754;
    panda$core$Bit found760;
    panda$collections$Iterator* dir$Iter761;
    panda$io$File* dir773;
    panda$io$File* f778;
    panda$core$Int64 oldErrorCount781;
    org$pandalanguage$pandac$Position $tmp787;
    panda$core$Object* $tmp753 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result752 = ((org$pandalanguage$pandac$ClassDecl*) $tmp753);
    if (((panda$core$Bit) { result752 == NULL }).value) {
    {
        panda$core$String* $tmp757 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s755, &$s756);
        panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, &$s758);
        suffix754 = $tmp759;
        found760 = ((panda$core$Bit) { false });
        {
            ITable* $tmp762 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp762->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp762 = $tmp762->next;
            }
            $fn764 $tmp763 = $tmp762->methods[0];
            panda$collections$Iterator* $tmp765 = $tmp763(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter761 = $tmp765;
            $l766:;
            ITable* $tmp768 = dir$Iter761->$class->itable;
            while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp768 = $tmp768->next;
            }
            $fn770 $tmp769 = $tmp768->methods[0];
            panda$core$Bit $tmp771 = $tmp769(dir$Iter761);
            panda$core$Bit $tmp772 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp771);
            if (!$tmp772.value) goto $l767;
            {
                ITable* $tmp774 = dir$Iter761->$class->itable;
                while ($tmp774->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp774 = $tmp774->next;
                }
                $fn776 $tmp775 = $tmp774->methods[1];
                panda$core$Object* $tmp777 = $tmp775(dir$Iter761);
                dir773 = ((panda$io$File*) $tmp777);
                panda$io$File* $tmp779 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir773, suffix754);
                f778 = $tmp779;
                panda$core$Bit $tmp780 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f778);
                if ($tmp780.value) {
                {
                    found760 = ((panda$core$Bit) { true });
                    oldErrorCount781 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f778);
                    panda$core$Object* $tmp782 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result752 = ((org$pandalanguage$pandac$ClassDecl*) $tmp782);
                    bool $tmp783 = ((panda$core$Bit) { result752 == NULL }).value;
                    if (!$tmp783) goto $l784;
                    panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount781);
                    $tmp783 = $tmp785.value;
                    $l784:;
                    panda$core$Bit $tmp786 = { $tmp783 };
                    if ($tmp786.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp787, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s788, ((panda$core$Object*) f778));
                        panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp789, &$s790);
                        panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, p_fullName);
                        panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp792, &$s793);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f778, $tmp787, $tmp794);
                    }
                    }
                }
                }
            }
            goto $l766;
            $l767:;
        }
        panda$core$Bit $tmp795 = panda$core$Bit$$NOT$R$panda$core$Bit(found760);
        if ($tmp795.value) {
        {
            panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s796, suffix754);
            panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s798);
            panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp799, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, &$s801);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp802);
        }
        }
    }
    }
    return result752;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type803;
    org$pandalanguage$pandac$ClassDecl* result810;
    org$pandalanguage$pandac$Annotations* annotations812;
    panda$collections$Array* supertypes818;
    panda$collections$Iterator* intf$Iter822;
    org$pandalanguage$pandac$Type* intf834;
    panda$collections$HashMap* aliases840;
    panda$core$Range$LTpanda$core$Int64$GT $tmp843;
    panda$collections$Iterator* m$Iter878;
    org$pandalanguage$pandac$MethodDecl* m890;
    panda$collections$Array* parameters895;
    panda$collections$Iterator* p$Iter898;
    org$pandalanguage$pandac$MethodDecl$Parameter* p910;
    org$pandalanguage$pandac$MethodDecl* clone918;
    panda$collections$Iterator* f$Iter922;
    org$pandalanguage$pandac$FieldDecl* f934;
    org$pandalanguage$pandac$FieldDecl* clone939;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    org$pandalanguage$pandac$Type* $tmp804 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type803 = $tmp804;
    panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type803->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp805.value) {
    {
        panda$core$Object* $tmp806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type803->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp807 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp806));
        return $tmp807;
    }
    }
    panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type803->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp808.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type803->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp809.value);
    panda$core$Object* $tmp811 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type803)->name));
    result810 = ((org$pandalanguage$pandac$ClassDecl*) $tmp811);
    if (((panda$core$Bit) { result810 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp813 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp813->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp813->refCount.value = 1;
        panda$core$Int64 $tmp815 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp816 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp815);
        panda$core$Int64 $tmp817 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp816);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp813, $tmp817);
        annotations812 = $tmp813;
        panda$collections$Array* $tmp819 = (panda$collections$Array*) malloc(40);
        $tmp819->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp819->refCount.value = 1;
        panda$collections$Array$init($tmp819);
        supertypes818 = $tmp819;
        org$pandalanguage$pandac$Type* $tmp821 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type803, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes818, ((panda$core$Object*) $tmp821));
        {
            ITable* $tmp823 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp823 = $tmp823->next;
            }
            $fn825 $tmp824 = $tmp823->methods[0];
            panda$collections$Iterator* $tmp826 = $tmp824(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter822 = $tmp826;
            $l827:;
            ITable* $tmp829 = intf$Iter822->$class->itable;
            while ($tmp829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp829 = $tmp829->next;
            }
            $fn831 $tmp830 = $tmp829->methods[0];
            panda$core$Bit $tmp832 = $tmp830(intf$Iter822);
            panda$core$Bit $tmp833 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp832);
            if (!$tmp833.value) goto $l828;
            {
                ITable* $tmp835 = intf$Iter822->$class->itable;
                while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp835 = $tmp835->next;
                }
                $fn837 $tmp836 = $tmp835->methods[1];
                panda$core$Object* $tmp838 = $tmp836(intf$Iter822);
                intf834 = ((org$pandalanguage$pandac$Type*) $tmp838);
                org$pandalanguage$pandac$Type* $tmp839 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type803, intf834);
                panda$collections$Array$add$panda$collections$Array$T(supertypes818, ((panda$core$Object*) $tmp839));
            }
            goto $l827;
            $l828:;
        }
        panda$collections$HashMap* $tmp841 = (panda$collections$HashMap*) malloc(56);
        $tmp841->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp841->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp841, p_cl->aliases);
        aliases840 = $tmp841;
        ITable* $tmp844 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp844->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp844 = $tmp844->next;
        }
        $fn846 $tmp845 = $tmp844->methods[0];
        panda$core$Int64 $tmp847 = $tmp845(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp843, ((panda$core$Int64) { 0 }), $tmp847, ((panda$core$Bit) { false }));
        int64_t $tmp849 = $tmp843.min.value;
        panda$core$Int64 i848 = { $tmp849 };
        int64_t $tmp851 = $tmp843.max.value;
        bool $tmp852 = $tmp843.inclusive.value;
        if ($tmp852) goto $l859; else goto $l860;
        $l859:;
        if ($tmp849 <= $tmp851) goto $l853; else goto $l855;
        $l860:;
        if ($tmp849 < $tmp851) goto $l853; else goto $l855;
        $l853:;
        {
            ITable* $tmp861 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp861->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp861 = $tmp861->next;
            }
            $fn863 $tmp862 = $tmp861->methods[0];
            panda$core$Object* $tmp864 = $tmp862(((panda$collections$ListView*) p_cl->parameters), i848);
            panda$core$Int64 $tmp865 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i848, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp866 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type803->subtypes, $tmp865);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases840, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp864))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp866))->name));
        }
        $l856:;
        int64_t $tmp868 = $tmp851 - i848.value;
        if ($tmp852) goto $l869; else goto $l870;
        $l869:;
        if ((uint64_t) $tmp868 >= 1) goto $l867; else goto $l855;
        $l870:;
        if ((uint64_t) $tmp868 > 1) goto $l867; else goto $l855;
        $l867:;
        i848.value += 1;
        goto $l853;
        $l855:;
        org$pandalanguage$pandac$ClassDecl* $tmp873 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
        $tmp873->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp873->refCount.value = 1;
        panda$collections$Array* $tmp875 = (panda$collections$Array*) malloc(40);
        $tmp875->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp875->refCount.value = 1;
        panda$collections$Array$init($tmp875);
        panda$core$Object* $tmp877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp873, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases840), p_cl->doccomment, annotations812, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type803)->name, ((panda$collections$ListView*) supertypes818), $tmp875, ((org$pandalanguage$pandac$SymbolTable*) $tmp877));
        result810 = $tmp873;
        result810->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp879 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp879 = $tmp879->next;
            }
            $fn881 $tmp880 = $tmp879->methods[0];
            panda$collections$Iterator* $tmp882 = $tmp880(((panda$collections$Iterable*) p_cl->methods));
            m$Iter878 = $tmp882;
            $l883:;
            ITable* $tmp885 = m$Iter878->$class->itable;
            while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp885 = $tmp885->next;
            }
            $fn887 $tmp886 = $tmp885->methods[0];
            panda$core$Bit $tmp888 = $tmp886(m$Iter878);
            panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
            if (!$tmp889.value) goto $l884;
            {
                ITable* $tmp891 = m$Iter878->$class->itable;
                while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp891 = $tmp891->next;
                }
                $fn893 $tmp892 = $tmp891->methods[1];
                panda$core$Object* $tmp894 = $tmp892(m$Iter878);
                m890 = ((org$pandalanguage$pandac$MethodDecl*) $tmp894);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m890);
                panda$collections$Array* $tmp896 = (panda$collections$Array*) malloc(40);
                $tmp896->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp896->refCount.value = 1;
                panda$collections$Array$init($tmp896);
                parameters895 = $tmp896;
                {
                    ITable* $tmp899 = ((panda$collections$Iterable*) m890->parameters)->$class->itable;
                    while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp899 = $tmp899->next;
                    }
                    $fn901 $tmp900 = $tmp899->methods[0];
                    panda$collections$Iterator* $tmp902 = $tmp900(((panda$collections$Iterable*) m890->parameters));
                    p$Iter898 = $tmp902;
                    $l903:;
                    ITable* $tmp905 = p$Iter898->$class->itable;
                    while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp905 = $tmp905->next;
                    }
                    $fn907 $tmp906 = $tmp905->methods[0];
                    panda$core$Bit $tmp908 = $tmp906(p$Iter898);
                    panda$core$Bit $tmp909 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp908);
                    if (!$tmp909.value) goto $l904;
                    {
                        ITable* $tmp911 = p$Iter898->$class->itable;
                        while ($tmp911->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp911 = $tmp911->next;
                        }
                        $fn913 $tmp912 = $tmp911->methods[1];
                        panda$core$Object* $tmp914 = $tmp912(p$Iter898);
                        p910 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp914);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp915 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp915->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp915->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type803, p910->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp915, p910->name, $tmp917);
                        panda$collections$Array$add$panda$collections$Array$T(parameters895, ((panda$core$Object*) $tmp915));
                    }
                    goto $l903;
                    $l904:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp919 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp919->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp919->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp921 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type803, m890->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp919, result810, ((org$pandalanguage$pandac$Symbol*) m890)->position, m890->doccomment, m890->annotations, m890->methodKind, ((org$pandalanguage$pandac$Symbol*) m890)->name, parameters895, $tmp921, m890->body);
                clone918 = $tmp919;
                panda$collections$Array$add$panda$collections$Array$T(result810->methods, ((panda$core$Object*) clone918));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result810->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone918));
            }
            goto $l883;
            $l884:;
        }
        {
            ITable* $tmp923 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp923->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp923 = $tmp923->next;
            }
            $fn925 $tmp924 = $tmp923->methods[0];
            panda$collections$Iterator* $tmp926 = $tmp924(((panda$collections$Iterable*) p_cl->fields));
            f$Iter922 = $tmp926;
            $l927:;
            ITable* $tmp929 = f$Iter922->$class->itable;
            while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp929 = $tmp929->next;
            }
            $fn931 $tmp930 = $tmp929->methods[0];
            panda$core$Bit $tmp932 = $tmp930(f$Iter922);
            panda$core$Bit $tmp933 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp932);
            if (!$tmp933.value) goto $l928;
            {
                ITable* $tmp935 = f$Iter922->$class->itable;
                while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp935 = $tmp935->next;
                }
                $fn937 $tmp936 = $tmp935->methods[1];
                panda$core$Object* $tmp938 = $tmp936(f$Iter922);
                f934 = ((org$pandalanguage$pandac$FieldDecl*) $tmp938);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f934);
                org$pandalanguage$pandac$FieldDecl* $tmp940 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp940->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp940->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp942 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type803, f934->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp940, result810, ((org$pandalanguage$pandac$Symbol*) f934)->position, f934->doccomment, f934->annotations, f934->fieldKind, ((org$pandalanguage$pandac$Symbol*) f934)->name, $tmp942, f934->rawValue);
                clone939 = $tmp940;
                panda$collections$Array$add$panda$collections$Array$T(result810->fields, ((panda$core$Object*) clone939));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result810->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone939));
            }
            goto $l927;
            $l928:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result810)->name), ((panda$core$Object*) result810));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result810));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result810);
    }
    }
    return result810;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result943;
    panda$core$Int64 $match$696_13944;
    PANDA_ASSERT(p_type->resolved.value);
    {
        $match$696_13944 = p_type->typeKind;
        panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_13944, ((panda$core$Int64) { 10 }));
        if ($tmp945.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp946 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result943 = $tmp946;
        }
        }
        else {
        panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_13944, ((panda$core$Int64) { 11 }));
        bool $tmp947 = $tmp948.value;
        if ($tmp947) goto $l949;
        panda$core$Bit $tmp950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_13944, ((panda$core$Int64) { 21 }));
        $tmp947 = $tmp950.value;
        $l949:;
        panda$core$Bit $tmp951 = { $tmp947 };
        if ($tmp951.value) {
        {
            panda$core$Object* $tmp952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp953 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp952));
            result943 = $tmp953;
        }
        }
        else {
        panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$696_13944, ((panda$core$Int64) { 22 }));
        if ($tmp954.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp955 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp955;
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
    panda$core$Bit $tmp956 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result943->annotations);
    if ($tmp956.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp957 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result943, p_type);
        result943 = $tmp957;
    }
    }
    return result943;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl958;
    panda$collections$Set* result960;
    panda$collections$Iterator* intf$Iter965;
    org$pandalanguage$pandac$Type* intf977;
    org$pandalanguage$pandac$ClassDecl* $tmp959 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl958 = $tmp959;
    PANDA_ASSERT(((panda$core$Bit) { cl958 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl958);
    panda$collections$Set* $tmp961 = (panda$collections$Set*) malloc(24);
    $tmp961->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp961->refCount.value = 1;
    panda$collections$Set$init($tmp961);
    result960 = $tmp961;
    if (((panda$core$Bit) { cl958->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp963 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl958->rawSuper);
        panda$collections$Set* $tmp964 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp963);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result960, ((panda$collections$CollectionView*) $tmp964));
    }
    }
    {
        ITable* $tmp966 = ((panda$collections$Iterable*) cl958->rawInterfaces)->$class->itable;
        while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp966 = $tmp966->next;
        }
        $fn968 $tmp967 = $tmp966->methods[0];
        panda$collections$Iterator* $tmp969 = $tmp967(((panda$collections$Iterable*) cl958->rawInterfaces));
        intf$Iter965 = $tmp969;
        $l970:;
        ITable* $tmp972 = intf$Iter965->$class->itable;
        while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp972 = $tmp972->next;
        }
        $fn974 $tmp973 = $tmp972->methods[0];
        panda$core$Bit $tmp975 = $tmp973(intf$Iter965);
        panda$core$Bit $tmp976 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp975);
        if (!$tmp976.value) goto $l971;
        {
            ITable* $tmp978 = intf$Iter965->$class->itable;
            while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp978 = $tmp978->next;
            }
            $fn980 $tmp979 = $tmp978->methods[1];
            panda$core$Object* $tmp981 = $tmp979(intf$Iter965);
            intf977 = ((org$pandalanguage$pandac$Type*) $tmp981);
            org$pandalanguage$pandac$Type* $tmp982 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf977);
            panda$collections$Set* $tmp983 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp982);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result960, ((panda$collections$CollectionView*) $tmp983));
        }
        goto $l970;
        $l971:;
    }
    panda$core$Bit $tmp984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl958->classKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp984.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result960, ((panda$collections$Key*) p_t));
    }
    }
    return result960;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp990;
    panda$core$Bit $tmp985 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp985.value);
    panda$core$Bit $tmp986 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp986.value);
    panda$core$Int64 $tmp987 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp988 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp989 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp987, $tmp988);
    if ($tmp989.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp991 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp990, ((panda$core$Int64) { 0 }), $tmp991, ((panda$core$Bit) { false }));
    int64_t $tmp993 = $tmp990.min.value;
    panda$core$Int64 i992 = { $tmp993 };
    int64_t $tmp995 = $tmp990.max.value;
    bool $tmp996 = $tmp990.inclusive.value;
    if ($tmp996) goto $l1003; else goto $l1004;
    $l1003:;
    if ($tmp993 <= $tmp995) goto $l997; else goto $l999;
    $l1004:;
    if ($tmp993 < $tmp995) goto $l997; else goto $l999;
    $l997:;
    {
        panda$core$Object* $tmp1005 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i992);
        panda$core$Object* $tmp1006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i992);
        panda$core$Bit $tmp1007 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1005), ((org$pandalanguage$pandac$Type*) $tmp1006));
        if ($tmp1007.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l1000:;
    int64_t $tmp1009 = $tmp995 - i992.value;
    if ($tmp996) goto $l1010; else goto $l1011;
    $l1010:;
    if ((uint64_t) $tmp1009 >= 1) goto $l1008; else goto $l999;
    $l1011:;
    if ((uint64_t) $tmp1009 > 1) goto $l1008; else goto $l999;
    $l1008:;
    i992.value += 1;
    goto $l997;
    $l999:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl1014;
    panda$collections$Iterator* test$Iter1016;
    org$pandalanguage$pandac$MethodDecl* test1028;
    panda$collections$Iterator* raw$Iter1041;
    org$pandalanguage$pandac$Type* raw1053;
    org$pandalanguage$pandac$MethodDecl* result1058;
    org$pandalanguage$pandac$ClassDecl* $tmp1015 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl1014 = $tmp1015;
    PANDA_ASSERT(((panda$core$Bit) { cl1014 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1014);
    {
        ITable* $tmp1017 = ((panda$collections$Iterable*) cl1014->methods)->$class->itable;
        while ($tmp1017->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1017 = $tmp1017->next;
        }
        $fn1019 $tmp1018 = $tmp1017->methods[0];
        panda$collections$Iterator* $tmp1020 = $tmp1018(((panda$collections$Iterable*) cl1014->methods));
        test$Iter1016 = $tmp1020;
        $l1021:;
        ITable* $tmp1023 = test$Iter1016->$class->itable;
        while ($tmp1023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1023 = $tmp1023->next;
        }
        $fn1025 $tmp1024 = $tmp1023->methods[0];
        panda$core$Bit $tmp1026 = $tmp1024(test$Iter1016);
        panda$core$Bit $tmp1027 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1026);
        if (!$tmp1027.value) goto $l1022;
        {
            ITable* $tmp1029 = test$Iter1016->$class->itable;
            while ($tmp1029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1029 = $tmp1029->next;
            }
            $fn1031 $tmp1030 = $tmp1029->methods[1];
            panda$core$Object* $tmp1032 = $tmp1030(test$Iter1016);
            test1028 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1032);
            panda$core$Bit $tmp1033 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test1028)->name, p_name);
            if ($tmp1033.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test1028);
                org$pandalanguage$pandac$Type* $tmp1034 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test1028);
                org$pandalanguage$pandac$Type* $tmp1035 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp1034);
                panda$core$Bit $tmp1036 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1035, p_methodType);
                if ($tmp1036.value) {
                {
                    return test1028;
                }
                }
            }
            }
        }
        goto $l1021;
        $l1022:;
    }
    bool $tmp1037 = p_checkInterfaces.value;
    if ($tmp1037) goto $l1038;
    panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl1014->classKind.$rawValue, ((panda$core$Int64) { 1 }));
    $tmp1037 = $tmp1039.value;
    $l1038:;
    panda$core$Bit $tmp1040 = { $tmp1037 };
    if ($tmp1040.value) {
    {
        {
            ITable* $tmp1042 = ((panda$collections$Iterable*) cl1014->rawInterfaces)->$class->itable;
            while ($tmp1042->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1042 = $tmp1042->next;
            }
            $fn1044 $tmp1043 = $tmp1042->methods[0];
            panda$collections$Iterator* $tmp1045 = $tmp1043(((panda$collections$Iterable*) cl1014->rawInterfaces));
            raw$Iter1041 = $tmp1045;
            $l1046:;
            ITable* $tmp1048 = raw$Iter1041->$class->itable;
            while ($tmp1048->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1048 = $tmp1048->next;
            }
            $fn1050 $tmp1049 = $tmp1048->methods[0];
            panda$core$Bit $tmp1051 = $tmp1049(raw$Iter1041);
            panda$core$Bit $tmp1052 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1051);
            if (!$tmp1052.value) goto $l1047;
            {
                ITable* $tmp1054 = raw$Iter1041->$class->itable;
                while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1054 = $tmp1054->next;
                }
                $fn1056 $tmp1055 = $tmp1054->methods[1];
                panda$core$Object* $tmp1057 = $tmp1055(raw$Iter1041);
                raw1053 = ((org$pandalanguage$pandac$Type*) $tmp1057);
                org$pandalanguage$pandac$Type* $tmp1059 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1053);
                org$pandalanguage$pandac$MethodDecl* $tmp1060 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1059, p_name, p_methodType, p_checkInterfaces);
                result1058 = $tmp1060;
                if (((panda$core$Bit) { result1058 != NULL }).value) {
                {
                    return result1058;
                }
                }
            }
            goto $l1046;
            $l1047:;
        }
    }
    }
    if (((panda$core$Bit) { cl1014->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1061 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl1014->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1062 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1061, p_name, p_methodType, p_checkInterfaces);
        return $tmp1062;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1064;
    org$pandalanguage$pandac$Type* owner1066;
    panda$collections$Iterator* raw$Iter1068;
    org$pandalanguage$pandac$Type* raw1080;
    org$pandalanguage$pandac$MethodDecl* result1085;
    org$pandalanguage$pandac$MethodDecl* result1088;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1063.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1065 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1064 = $tmp1065;
    org$pandalanguage$pandac$Type* $tmp1067 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1066 = $tmp1067;
    {
        ITable* $tmp1069 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1069->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1069 = $tmp1069->next;
        }
        $fn1071 $tmp1070 = $tmp1069->methods[0];
        panda$collections$Iterator* $tmp1072 = $tmp1070(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1068 = $tmp1072;
        $l1073:;
        ITable* $tmp1075 = raw$Iter1068->$class->itable;
        while ($tmp1075->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1075 = $tmp1075->next;
        }
        $fn1077 $tmp1076 = $tmp1075->methods[0];
        panda$core$Bit $tmp1078 = $tmp1076(raw$Iter1068);
        panda$core$Bit $tmp1079 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1078);
        if (!$tmp1079.value) goto $l1074;
        {
            ITable* $tmp1081 = raw$Iter1068->$class->itable;
            while ($tmp1081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1081 = $tmp1081->next;
            }
            $fn1083 $tmp1082 = $tmp1081->methods[1];
            panda$core$Object* $tmp1084 = $tmp1082(raw$Iter1068);
            raw1080 = ((org$pandalanguage$pandac$Type*) $tmp1084);
            org$pandalanguage$pandac$Type* $tmp1086 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1066, raw1080);
            org$pandalanguage$pandac$MethodDecl* $tmp1087 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1086, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1064, ((panda$core$Bit) { true }));
            result1085 = $tmp1087;
            if (((panda$core$Bit) { result1085 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1085;
                return result1085;
            }
            }
        }
        goto $l1073;
        $l1074:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1089 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1066, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1090 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1089, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1064, ((panda$core$Bit) { true }));
        result1088 = $tmp1090;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1088;
        return result1088;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1091;
    panda$collections$Array* result1093;
    panda$collections$Iterator* m$Iter1096;
    org$pandalanguage$pandac$MethodDecl* m1108;
    org$pandalanguage$pandac$MethodDecl* found1113;
    org$pandalanguage$pandac$ClassDecl* $tmp1092 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1091 = $tmp1092;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1091 != NULL }).value);
    panda$collections$Array* $tmp1094 = (panda$collections$Array*) malloc(40);
    $tmp1094->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1094->refCount.value = 1;
    panda$collections$Array$init($tmp1094);
    result1093 = $tmp1094;
    {
        ITable* $tmp1097 = ((panda$collections$Iterable*) intfClass1091->methods)->$class->itable;
        while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1097 = $tmp1097->next;
        }
        $fn1099 $tmp1098 = $tmp1097->methods[0];
        panda$collections$Iterator* $tmp1100 = $tmp1098(((panda$collections$Iterable*) intfClass1091->methods));
        m$Iter1096 = $tmp1100;
        $l1101:;
        ITable* $tmp1103 = m$Iter1096->$class->itable;
        while ($tmp1103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1103 = $tmp1103->next;
        }
        $fn1105 $tmp1104 = $tmp1103->methods[0];
        panda$core$Bit $tmp1106 = $tmp1104(m$Iter1096);
        panda$core$Bit $tmp1107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1106);
        if (!$tmp1107.value) goto $l1102;
        {
            ITable* $tmp1109 = m$Iter1096->$class->itable;
            while ($tmp1109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1109 = $tmp1109->next;
            }
            $fn1111 $tmp1110 = $tmp1109->methods[1];
            panda$core$Object* $tmp1112 = $tmp1110(m$Iter1096);
            m1108 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1112);
            org$pandalanguage$pandac$Type* $tmp1114 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1115 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1108);
            org$pandalanguage$pandac$Type* $tmp1116 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1115);
            org$pandalanguage$pandac$MethodDecl* $tmp1117 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1114, ((org$pandalanguage$pandac$Symbol*) m1108)->name, $tmp1116, ((panda$core$Bit) { false }));
            found1113 = $tmp1117;
            PANDA_ASSERT(((panda$core$Bit) { found1113 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1093, ((panda$core$Object*) found1113));
        }
        goto $l1101;
        $l1102:;
    }
    return ((panda$collections$ListView*) result1093);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1119;
    panda$collections$Iterator* rawIntf$Iter1122;
    org$pandalanguage$pandac$Type* rawIntf1134;
    org$pandalanguage$pandac$ClassDecl* intf1139;
    panda$core$Bit $tmp1118 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1118.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1120 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1119 = $tmp1120;
            if (((panda$core$Bit) { superCl1119 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1121 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1119);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1121));
            }
            }
        }
        }
        {
            ITable* $tmp1123 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1123 = $tmp1123->next;
            }
            $fn1125 $tmp1124 = $tmp1123->methods[0];
            panda$collections$Iterator* $tmp1126 = $tmp1124(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1122 = $tmp1126;
            $l1127:;
            ITable* $tmp1129 = rawIntf$Iter1122->$class->itable;
            while ($tmp1129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1129 = $tmp1129->next;
            }
            $fn1131 $tmp1130 = $tmp1129->methods[0];
            panda$core$Bit $tmp1132 = $tmp1130(rawIntf$Iter1122);
            panda$core$Bit $tmp1133 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1132);
            if (!$tmp1133.value) goto $l1128;
            {
                ITable* $tmp1135 = rawIntf$Iter1122->$class->itable;
                while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1135 = $tmp1135->next;
                }
                $fn1137 $tmp1136 = $tmp1135->methods[1];
                panda$core$Object* $tmp1138 = $tmp1136(rawIntf$Iter1122);
                rawIntf1134 = ((org$pandalanguage$pandac$Type*) $tmp1138);
                org$pandalanguage$pandac$ClassDecl* $tmp1140 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1134);
                intf1139 = $tmp1140;
                if (((panda$core$Bit) { intf1139 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1141 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1139);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1141));
                }
                }
            }
            goto $l1127;
            $l1128:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1144;
    panda$collections$Iterator* derived$Iter1147;
    org$pandalanguage$pandac$MethodDecl* derived1159;
    panda$core$Bit found1169;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1170;
    org$pandalanguage$pandac$MethodDecl* base1185;
    panda$core$Int64 $tmp1142 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1142, ((panda$core$Int64) { 0 }));
    if ($tmp1143.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1145 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1144 = $tmp1145;
            if (((panda$core$Bit) { superCl1144 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1146 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1144);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1146));
        }
        }
        {
            ITable* $tmp1148 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1148 = $tmp1148->next;
            }
            $fn1150 $tmp1149 = $tmp1148->methods[0];
            panda$collections$Iterator* $tmp1151 = $tmp1149(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1147 = $tmp1151;
            $l1152:;
            ITable* $tmp1154 = derived$Iter1147->$class->itable;
            while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1154 = $tmp1154->next;
            }
            $fn1156 $tmp1155 = $tmp1154->methods[0];
            panda$core$Bit $tmp1157 = $tmp1155(derived$Iter1147);
            panda$core$Bit $tmp1158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1157);
            if (!$tmp1158.value) goto $l1153;
            {
                ITable* $tmp1160 = derived$Iter1147->$class->itable;
                while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1160 = $tmp1160->next;
                }
                $fn1162 $tmp1161 = $tmp1160->methods[1];
                panda$core$Object* $tmp1163 = $tmp1161(derived$Iter1147);
                derived1159 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1163);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1159);
                panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1159->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1164 = $tmp1165.value;
                if ($tmp1164) goto $l1166;
                panda$core$Bit $tmp1167 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1159->annotations);
                $tmp1164 = $tmp1167.value;
                $l1166:;
                panda$core$Bit $tmp1168 = { $tmp1164 };
                if ($tmp1168.value) {
                {
                    goto $l1152;
                }
                }
                found1169 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1171 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1170, ((panda$core$Int64) { 0 }), $tmp1171, ((panda$core$Bit) { false }));
                int64_t $tmp1173 = $tmp1170.min.value;
                panda$core$Int64 i1172 = { $tmp1173 };
                int64_t $tmp1175 = $tmp1170.max.value;
                bool $tmp1176 = $tmp1170.inclusive.value;
                if ($tmp1176) goto $l1183; else goto $l1184;
                $l1183:;
                if ($tmp1173 <= $tmp1175) goto $l1177; else goto $l1179;
                $l1184:;
                if ($tmp1173 < $tmp1175) goto $l1177; else goto $l1179;
                $l1177:;
                {
                    panda$core$Object* $tmp1186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1172);
                    base1185 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1186);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1185);
                    panda$core$Bit $tmp1187 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1159, base1185);
                    if ($tmp1187.value) {
                    {
                        found1169 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1172, ((panda$core$Object*) derived1159));
                        goto $l1179;
                    }
                    }
                }
                $l1180:;
                int64_t $tmp1189 = $tmp1175 - i1172.value;
                if ($tmp1176) goto $l1190; else goto $l1191;
                $l1190:;
                if ((uint64_t) $tmp1189 >= 1) goto $l1188; else goto $l1179;
                $l1191:;
                if ((uint64_t) $tmp1189 > 1) goto $l1188; else goto $l1179;
                $l1188:;
                i1172.value += 1;
                goto $l1177;
                $l1179:;
                panda$core$Bit $tmp1194 = panda$core$Bit$$NOT$R$panda$core$Bit(found1169);
                if ($tmp1194.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1159));
                }
                }
            }
            goto $l1152;
            $l1153:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1195;
    org$pandalanguage$pandac$Symbol* s1198;
    panda$collections$Iterator* m$Iter1204;
    org$pandalanguage$pandac$MethodDecl* m1216;
    panda$collections$Iterator* p$Iter1223;
    org$pandalanguage$pandac$SymbolTable* p1235;
    panda$collections$Array* $tmp1196 = (panda$collections$Array*) malloc(40);
    $tmp1196->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1196->refCount.value = 1;
    panda$collections$Array$init($tmp1196);
    methods1195 = $tmp1196;
    org$pandalanguage$pandac$Symbol* $tmp1199 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1198 = $tmp1199;
    PANDA_ASSERT(((panda$core$Bit) { s1198 != NULL }).value);
    panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1198->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1200.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1198));
        org$pandalanguage$pandac$MethodRef* $tmp1201 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1201->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1201->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1201, ((org$pandalanguage$pandac$MethodDecl*) s1198), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1195, ((panda$core$Object*) $tmp1201));
    }
    }
    else {
    {
        panda$core$Bit $tmp1203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1198->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1203.value);
        {
            ITable* $tmp1205 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1198)->methods)->$class->itable;
            while ($tmp1205->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1205 = $tmp1205->next;
            }
            $fn1207 $tmp1206 = $tmp1205->methods[0];
            panda$collections$Iterator* $tmp1208 = $tmp1206(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1198)->methods));
            m$Iter1204 = $tmp1208;
            $l1209:;
            ITable* $tmp1211 = m$Iter1204->$class->itable;
            while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1211 = $tmp1211->next;
            }
            $fn1213 $tmp1212 = $tmp1211->methods[0];
            panda$core$Bit $tmp1214 = $tmp1212(m$Iter1204);
            panda$core$Bit $tmp1215 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1214);
            if (!$tmp1215.value) goto $l1210;
            {
                ITable* $tmp1217 = m$Iter1204->$class->itable;
                while ($tmp1217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1217 = $tmp1217->next;
                }
                $fn1219 $tmp1218 = $tmp1217->methods[1];
                panda$core$Object* $tmp1220 = $tmp1218(m$Iter1204);
                m1216 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1220);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1216);
                org$pandalanguage$pandac$MethodRef* $tmp1221 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1221->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1221->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1221, m1216, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1195, ((panda$core$Object*) $tmp1221));
            }
            goto $l1209;
            $l1210:;
        }
    }
    }
    {
        ITable* $tmp1224 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1224->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1224 = $tmp1224->next;
        }
        $fn1226 $tmp1225 = $tmp1224->methods[0];
        panda$collections$Iterator* $tmp1227 = $tmp1225(((panda$collections$Iterable*) p_st->parents));
        p$Iter1223 = $tmp1227;
        $l1228:;
        ITable* $tmp1230 = p$Iter1223->$class->itable;
        while ($tmp1230->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1230 = $tmp1230->next;
        }
        $fn1232 $tmp1231 = $tmp1230->methods[0];
        panda$core$Bit $tmp1233 = $tmp1231(p$Iter1223);
        panda$core$Bit $tmp1234 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1233);
        if (!$tmp1234.value) goto $l1229;
        {
            ITable* $tmp1236 = p$Iter1223->$class->itable;
            while ($tmp1236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1236 = $tmp1236->next;
            }
            $fn1238 $tmp1237 = $tmp1236->methods[1];
            panda$core$Object* $tmp1239 = $tmp1237(p$Iter1223);
            p1235 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1239);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1235, p_name, methods1195, p_types);
        }
        goto $l1228;
        $l1229:;
    }
    panda$core$Int64 $tmp1240 = panda$collections$Array$get_count$R$panda$core$Int64(methods1195);
    panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1240, ((panda$core$Int64) { 1 }));
    if ($tmp1241.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1242 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1242->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1242->refCount.value = 1;
        panda$core$Object* $tmp1244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1195, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$MethodRef($tmp1242, ((panda$core$Int64) { 21 }), p_position, p_target, ((org$pandalanguage$pandac$MethodRef*) $tmp1244));
        return $tmp1242;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp1245 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1245->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1247 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(methods1195);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT($tmp1245, ((panda$core$Int64) { 38 }), p_position, p_target, $tmp1247);
        return $tmp1245;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    panda$core$Int64 $match$900_131248;
    org$pandalanguage$pandac$ClassDecl* cl1250;
    org$pandalanguage$pandac$FieldDecl* f1272;
    panda$collections$Array* children1275;
    org$pandalanguage$pandac$Type* effectiveType1286;
    org$pandalanguage$pandac$IRNode* finalTarget1290;
    org$pandalanguage$pandac$IRNode* result1294;
    org$pandalanguage$pandac$IRNode* finalTarget1301;
    {
        $match$900_131248 = p_s->kind;
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$900_131248, ((panda$core$Int64) { 200 }));
        if ($tmp1249.value) {
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1251 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1250 = $tmp1251;
            if (((panda$core$Bit) { cl1250 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1250);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1250, $tmp1252);
                org$pandalanguage$pandac$IRNode* $tmp1253 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1253->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1253->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1255 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1250);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1253, ((panda$core$Int64) { 34 }), p_position, $tmp1255);
                return $tmp1253;
            }
            }
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$900_131248, ((panda$core$Int64) { 201 }));
        if ($tmp1256.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1257 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1257);
            org$pandalanguage$pandac$IRNode* $tmp1258 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1258->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1258->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1260 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1258, ((panda$core$Int64) { 34 }), p_position, $tmp1260);
            return $tmp1258;
        }
        }
        else {
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$900_131248, ((panda$core$Int64) { 204 }));
        bool $tmp1261 = $tmp1262.value;
        if ($tmp1261) goto $l1263;
        panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$900_131248, ((panda$core$Int64) { 205 }));
        $tmp1261 = $tmp1264.value;
        $l1263:;
        panda$core$Bit $tmp1265 = { $tmp1261 };
        if ($tmp1265.value) {
        {
            panda$collections$ListView* $tmp1266 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1267 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1266);
            return $tmp1267;
        }
        }
        else {
        panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$900_131248, ((panda$core$Int64) { 208 }));
        if ($tmp1268.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1269 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1269->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp1269, ((panda$core$Int64) { 41 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1269;
        }
        }
        else {
        panda$core$Bit $tmp1271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$900_131248, ((panda$core$Int64) { 202 }));
        if ($tmp1271.value) {
        {
            f1272 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1272);
            org$pandalanguage$pandac$Type* $tmp1273 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1274 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1272->type, $tmp1273);
            if ($tmp1274.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1276 = (panda$collections$Array*) malloc(40);
            $tmp1276->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1276->refCount.value = 1;
            panda$collections$Array$init($tmp1276);
            children1275 = $tmp1276;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1281;
                if (((panda$core$Bit) { p_target != NULL }).value) goto $l1278; else goto $l1279;
                $l1278:;
                panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->$rawValue, ((panda$core$Int64) { 32 }));
                $tmp1281 = $tmp1282;
                goto $l1280;
                $l1279:;
                $tmp1281 = ((panda$core$Bit) { false });
                goto $l1280;
                $l1280:;
                if ($tmp1281.value) {
                {
                    org$pandalanguage$pandac$Position $tmp1284 = (($fn1283) p_target->$class->vtable[3])(p_target);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp1284, &$s1285);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1288 = (($fn1287) p_target->$class->vtable[2])(p_target);
                org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1288, f1272->type);
                effectiveType1286 = $tmp1289;
                panda$core$Bit $tmp1291 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1272->annotations);
                if ($tmp1291.value) {
                {
                    finalTarget1290 = p_target;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1292 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1272->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1293 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1292);
                    finalTarget1290 = $tmp1293;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1295 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1295->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1295->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp1295, ((panda$core$Int64) { 14 }), p_position, f1272->type, finalTarget1290, ((org$pandalanguage$pandac$FieldDecl*) p_s));
                result1294 = $tmp1295;
                org$pandalanguage$pandac$Type* $tmp1298 = (($fn1297) result1294->$class->vtable[2])(result1294);
                panda$core$Bit $tmp1299 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1286, $tmp1298);
                if ($tmp1299.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1300 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1294, p_position, ((panda$core$Bit) { false }), effectiveType1286);
                    result1294 = $tmp1300;
                }
                }
                return result1294;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1302 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1302->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1302->refCount.value = 1;
                panda$core$Object* $tmp1304 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1304));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1302, ((panda$core$Int64) { 30 }), p_position, $tmp1305);
                finalTarget1301 = $tmp1302;
                org$pandalanguage$pandac$IRNode* $tmp1306 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1306->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1306->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp1306, ((panda$core$Int64) { 14 }), p_position, f1272->type, finalTarget1301, f1272);
                return $tmp1306;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$900_131248, ((panda$core$Int64) { 209 }));
        if ($tmp1308.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1309 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1309->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1309->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry($tmp1309, ((panda$core$Int64) { 7 }), p_position, ((org$pandalanguage$pandac$ChoiceEntry*) p_s));
            return $tmp1309;
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$core$Int64 $match$956_131311;
    panda$core$Int64 $match$961_131325;
    panda$collections$HashMap* typeMap1335;
    org$pandalanguage$pandac$Type* base1338;
    org$pandalanguage$pandac$ClassDecl* cl1340;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1342;
    {
        $match$956_131311 = p_raw->typeKind;
        panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$956_131311, ((panda$core$Int64) { 10 }));
        bool $tmp1314 = $tmp1315.value;
        if ($tmp1314) goto $l1316;
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$956_131311, ((panda$core$Int64) { 12 }));
        $tmp1314 = $tmp1317.value;
        $l1316:;
        panda$core$Bit $tmp1318 = { $tmp1314 };
        bool $tmp1313 = $tmp1318.value;
        if ($tmp1313) goto $l1319;
        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$956_131311, ((panda$core$Int64) { 13 }));
        $tmp1313 = $tmp1320.value;
        $l1319:;
        panda$core$Bit $tmp1321 = { $tmp1313 };
        bool $tmp1312 = $tmp1321.value;
        if ($tmp1312) goto $l1322;
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$956_131311, ((panda$core$Int64) { 19 }));
        $tmp1312 = $tmp1323.value;
        $l1322:;
        panda$core$Bit $tmp1324 = { $tmp1312 };
        if ($tmp1324.value) {
        {
            return p_raw;
        }
        }
    }
    {
        $match$961_131325 = p_context->typeKind;
        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$961_131325, ((panda$core$Int64) { 10 }));
        if ($tmp1326.value) {
        {
            return p_raw;
        }
        }
        else {
        panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$961_131325, ((panda$core$Int64) { 11 }));
        if ($tmp1327.value) {
        {
            panda$core$Int64 $tmp1328 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1328, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1329.value);
            panda$core$Object* $tmp1330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1330), p_raw);
            return $tmp1331;
        }
        }
        else {
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$961_131325, ((panda$core$Int64) { 21 }));
        if ($tmp1332.value) {
        {
            panda$core$Int64 $tmp1333 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1334 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1333, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1334.value);
            panda$collections$HashMap* $tmp1336 = (panda$collections$HashMap*) malloc(56);
            $tmp1336->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1336->refCount.value = 1;
            panda$collections$HashMap$init($tmp1336);
            typeMap1335 = $tmp1336;
            panda$core$Object* $tmp1339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1338 = ((org$pandalanguage$pandac$Type*) $tmp1339);
            org$pandalanguage$pandac$ClassDecl* $tmp1341 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1338)->name);
            cl1340 = $tmp1341;
            PANDA_ASSERT(((panda$core$Bit) { cl1340 != NULL }).value);
            panda$core$Int64 $tmp1343 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1342, ((panda$core$Int64) { 1 }), $tmp1343, ((panda$core$Bit) { false }));
            int64_t $tmp1345 = $tmp1342.min.value;
            panda$core$Int64 i1344 = { $tmp1345 };
            int64_t $tmp1347 = $tmp1342.max.value;
            bool $tmp1348 = $tmp1342.inclusive.value;
            if ($tmp1348) goto $l1355; else goto $l1356;
            $l1355:;
            if ($tmp1345 <= $tmp1347) goto $l1349; else goto $l1351;
            $l1356:;
            if ($tmp1345 < $tmp1347) goto $l1349; else goto $l1351;
            $l1349:;
            {
                panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1340)->name, &$s1357);
                panda$core$Int64 $tmp1359 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1344, ((panda$core$Int64) { 1 }));
                ITable* $tmp1360 = ((panda$collections$ListView*) cl1340->parameters)->$class->itable;
                while ($tmp1360->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1360 = $tmp1360->next;
                }
                $fn1362 $tmp1361 = $tmp1360->methods[0];
                panda$core$Object* $tmp1363 = $tmp1361(((panda$collections$ListView*) cl1340->parameters), $tmp1359);
                panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1363))->name);
                panda$core$Object* $tmp1365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1344);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1335, ((panda$collections$Key*) $tmp1364), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1365)));
            }
            $l1352:;
            int64_t $tmp1367 = $tmp1347 - i1344.value;
            if ($tmp1348) goto $l1368; else goto $l1369;
            $l1368:;
            if ((uint64_t) $tmp1367 >= 1) goto $l1366; else goto $l1351;
            $l1369:;
            if ((uint64_t) $tmp1367 > 1) goto $l1366; else goto $l1351;
            $l1366:;
            i1344.value += 1;
            goto $l1349;
            $l1351:;
            org$pandalanguage$pandac$Type* $tmp1372 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1335);
            return $tmp1372;
        }
        }
        else {
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$961_131325, ((panda$core$Int64) { 22 }));
        if ($tmp1373.value) {
        {
            return p_raw;
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp1374.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1375 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1375;
    }
    }
    panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 26 }));
    if ($tmp1376.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
        return $tmp1377;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1378 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1379 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1378);
    if ($tmp1379.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1380;
    }
    }
    panda$core$Bit $tmp1381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1381.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1382;
    }
    }
    return p_type;
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char) {
    org$pandalanguage$pandac$IRNode* $match$1004_91383;
    panda$core$String* str1385;
    panda$core$Int32 c1389;
    {
        $match$1004_91383 = p_char;
        panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1004_91383->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1384.value) {
        {
            panda$core$String** $tmp1386 = ((panda$core$String**) ((char*) $match$1004_91383->$data + 16));
            str1385 = *$tmp1386;
            panda$core$Int64 $tmp1387 = panda$core$String$length$R$panda$core$Int64(str1385);
            panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1387, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1388.value);
            panda$core$Char32 $tmp1390 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(str1385, ((panda$core$Int64) { 0 }));
            panda$core$Int32 $tmp1391 = panda$core$Char32$convert$R$panda$core$Int32($tmp1390);
            c1389 = $tmp1391;
            panda$core$Bit $tmp1392 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1389, ((panda$core$Int32) { 255 }));
            if ($tmp1392.value) {
            {
                return ((panda$core$Int64) { 8 });
            }
            }
            panda$core$Bit $tmp1393 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1389, ((panda$core$Int32) { 65535 }));
            if ($tmp1393.value) {
            {
                return ((panda$core$Int64) { 16 });
            }
            }
            return ((panda$core$Int64) { 32 });
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node) {
    org$pandalanguage$pandac$IRNode* $match$1021_91394;
    panda$core$String* str1396;
    {
        $match$1021_91394 = p_node;
        panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1021_91394->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1395.value) {
        {
            panda$core$String** $tmp1397 = ((panda$core$String**) ((char*) $match$1021_91394->$data + 16));
            str1396 = *$tmp1397;
            panda$core$Int64 $tmp1398 = panda$core$String$length$R$panda$core$Int64(str1396);
            panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1398, ((panda$core$Int64) { 1 }));
            return $tmp1399;
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char, org$pandalanguage$pandac$IRNode* p_other) {
    panda$core$Int64 result1400;
    org$pandalanguage$pandac$Type* $match$1039_91405;
    panda$core$Int64 $match$1044_131414;
    panda$core$Int64 $tmp1401 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_char);
    result1400 = $tmp1401;
    panda$core$Bit $tmp1402 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_other);
    if ($tmp1402.value) {
    {
        panda$core$Int64 $tmp1403 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_other);
        panda$core$Int64 $tmp1404 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1400, $tmp1403);
        result1400 = $tmp1404;
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp1407 = (($fn1406) p_other->$class->vtable[2])(p_other);
        $match$1039_91405 = $tmp1407;
        org$pandalanguage$pandac$Type* $tmp1408 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1409 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1039_91405, $tmp1408);
        if ($tmp1409.value) {
        {
            panda$core$Int64 $tmp1410 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1400, ((panda$core$Int64) { 16 }));
            result1400 = $tmp1410;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp1411 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1412 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1039_91405, $tmp1411);
        if ($tmp1412.value) {
        {
            panda$core$Int64 $tmp1413 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1400, ((panda$core$Int64) { 32 }));
            result1400 = $tmp1413;
        }
        }
        }
    }
    {
        $match$1044_131414 = result1400;
        panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1044_131414, ((panda$core$Int64) { 8 }));
        if ($tmp1415.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            return $tmp1416;
        }
        }
        else {
        panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1044_131414, ((panda$core$Int64) { 16 }));
        if ($tmp1417.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            return $tmp1418;
        }
        }
        else {
        panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1044_131414, ((panda$core$Int64) { 32 }));
        if ($tmp1419.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            return $tmp1420;
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$IRNode* $match$1057_91421;
    org$pandalanguage$pandac$IRNode* start1423;
    org$pandalanguage$pandac$IRNode* end1425;
    panda$core$Bit inclusive1427;
    org$pandalanguage$pandac$IRNode* step1429;
    org$pandalanguage$pandac$Type* startType1431;
    org$pandalanguage$pandac$Type* endType1436;
    org$pandalanguage$pandac$Type* stepType1456;
    org$pandalanguage$pandac$Type* union1469;
    org$pandalanguage$pandac$Type* union1479;
    org$pandalanguage$pandac$Type* union1492;
    org$pandalanguage$pandac$IRNode* base1498;
    panda$collections$ImmutableArray* args1500;
    org$pandalanguage$pandac$IRNode* c1502;
    org$pandalanguage$pandac$ChoiceEntry* ce1509;
    {
        $match$1057_91421 = p_expr;
        panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1057_91421->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1057_91421->$data + 16));
            start1423 = *$tmp1424;
            org$pandalanguage$pandac$IRNode** $tmp1426 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1057_91421->$data + 24));
            end1425 = *$tmp1426;
            panda$core$Bit* $tmp1428 = ((panda$core$Bit*) ((char*) $match$1057_91421->$data + 32));
            inclusive1427 = *$tmp1428;
            org$pandalanguage$pandac$IRNode** $tmp1430 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1057_91421->$data + 33));
            step1429 = *$tmp1430;
            panda$core$Bit $tmp1432 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, start1423);
            if ($tmp1432.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1433 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, start1423, end1425);
                startType1431 = $tmp1433;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp1435 = (($fn1434) start1423->$class->vtable[2])(start1423);
                startType1431 = $tmp1435;
            }
            }
            panda$core$Bit $tmp1437 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, end1425);
            if ($tmp1437.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, end1425, start1423);
                endType1436 = $tmp1438;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp1440 = (($fn1439) end1425->$class->vtable[2])(end1425);
                endType1436 = $tmp1440;
            }
            }
            if (((panda$core$Bit) { step1429 == NULL }).value) {
            {
                panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1423->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp1441.value) {
                {
                    panda$core$Bit $tmp1442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(end1425->$rawValue, ((panda$core$Int64) { 23 }));
                    if ($tmp1442.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1443);
                        org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1444);
                        return $tmp1445;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1446 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, endType1436);
                    org$pandalanguage$pandac$Type* $tmp1447 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1446);
                    org$pandalanguage$pandac$Type* $tmp1448 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1447);
                    return $tmp1448;
                }
                }
                panda$core$Bit $tmp1449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(end1425->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp1449.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1450 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, startType1431);
                    org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1450);
                    org$pandalanguage$pandac$Type* $tmp1452 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1451);
                    return $tmp1452;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(startType1431, self, endType1436);
                org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1453);
                org$pandalanguage$pandac$Type* $tmp1455 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1454);
                return $tmp1455;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1458 = (($fn1457) step1429->$class->vtable[2])(step1429);
            org$pandalanguage$pandac$Type* $tmp1459 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp1458);
            stepType1456 = $tmp1459;
            panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1423->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1460.value) {
            {
                panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(end1425->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp1461.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1462 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, stepType1456);
                    org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1462);
                    org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1463);
                    return $tmp1464;
                }
                }
                panda$core$Bit $tmp1465 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, end1425);
                if ($tmp1465.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, endType1436);
                    org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1466);
                    org$pandalanguage$pandac$Type* $tmp1468 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1467);
                    return $tmp1468;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1470 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(endType1436, self, stepType1456);
                union1469 = $tmp1470;
                org$pandalanguage$pandac$Type* $tmp1471 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, union1469);
                org$pandalanguage$pandac$Type* $tmp1472 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1471);
                org$pandalanguage$pandac$Type* $tmp1473 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1472);
                return $tmp1473;
            }
            }
            panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(end1425->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1474.value) {
            {
                panda$core$Bit $tmp1475 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, start1423);
                if ($tmp1475.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1476 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, startType1431);
                    org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1476);
                    org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1477);
                    return $tmp1478;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1480 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(startType1431, self, stepType1456);
                union1479 = $tmp1480;
                org$pandalanguage$pandac$Type* $tmp1481 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, union1479);
                org$pandalanguage$pandac$Type* $tmp1482 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1481);
                org$pandalanguage$pandac$Type* $tmp1483 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1482);
                return $tmp1483;
            }
            }
            panda$core$Bit $tmp1485 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, start1423);
            bool $tmp1484 = $tmp1485.value;
            if (!$tmp1484) goto $l1486;
            panda$core$Bit $tmp1487 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, end1425);
            $tmp1484 = $tmp1487.value;
            $l1486:;
            panda$core$Bit $tmp1488 = { $tmp1484 };
            if ($tmp1488.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1489 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(startType1431, self, endType1436);
                org$pandalanguage$pandac$Type* $tmp1490 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1489);
                org$pandalanguage$pandac$Type* $tmp1491 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1490);
                return $tmp1491;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1493 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(startType1431, self, endType1436);
            org$pandalanguage$pandac$Type* $tmp1494 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1493, self, stepType1456);
            union1492 = $tmp1494;
            org$pandalanguage$pandac$Type* $tmp1495 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, union1492);
            org$pandalanguage$pandac$Type* $tmp1496 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1495);
            return $tmp1496;
        }
        }
        else {
        panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1057_91421->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1497.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1499 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1057_91421->$data + 24));
            base1498 = *$tmp1499;
            panda$collections$ImmutableArray** $tmp1501 = ((panda$collections$ImmutableArray**) ((char*) $match$1057_91421->$data + 32));
            args1500 = *$tmp1501;
            org$pandalanguage$pandac$IRNode* $tmp1504 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base1498, &$s1503, ((panda$collections$ListView*) args1500));
            c1502 = $tmp1504;
            if (((panda$core$Bit) { c1502 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1505 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1505;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1507 = (($fn1506) c1502->$class->vtable[2])(c1502);
            return $tmp1507;
        }
        }
        else {
        panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1057_91421->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1508.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1510 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1057_91421->$data + 16));
            ce1509 = *$tmp1510;
            org$pandalanguage$pandac$Type* $tmp1511 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(ce1509->owner);
            return $tmp1511;
        }
        }
        }
        }
    }
    org$pandalanguage$pandac$Type* $tmp1513 = (($fn1512) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$Type* $tmp1514 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1513);
    return $tmp1514;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1525;
    panda$core$Int64 $match$1143_131529;
    panda$core$Int64$nullable result1531;
    panda$core$Int64 $match$1159_131545;
    panda$core$Int64$nullable best1550;
    panda$collections$Iterator* t$Iter1551;
    org$pandalanguage$pandac$Type* t1563;
    panda$core$Int64$nullable cost1568;
    org$pandalanguage$pandac$ClassDecl* cl1583;
    panda$core$Int64$nullable cost1585;
    panda$collections$Iterator* intf$Iter1590;
    org$pandalanguage$pandac$Type* intf1602;
    panda$core$Int64$nullable cost1607;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1515 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1515.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1516 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1517 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1516);
    if ($tmp1517.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1518.value) {
    {
        panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1519.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1520 = $tmp1521.value;
    if (!$tmp1520) goto $l1522;
    panda$core$Bit $tmp1523 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1520 = $tmp1523.value;
    $l1522:;
    panda$core$Bit $tmp1524 = { $tmp1520 };
    if ($tmp1524.value) {
    {
        panda$core$Object* $tmp1526 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1527 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1526), p_target);
        result1525 = $tmp1527;
        if (((panda$core$Bit) { !result1525.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1528 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1525.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1528, true });
    }
    }
    {
        $match$1143_131529 = p_target->typeKind;
        panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1143_131529, ((panda$core$Int64) { 11 }));
        if ($tmp1530.value) {
        {
            panda$core$Object* $tmp1532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1533 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1532));
            result1531 = $tmp1533;
            if (((panda$core$Bit) { !result1531.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1534 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1531.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1534, true });
        }
        }
        else {
        panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1143_131529, ((panda$core$Int64) { 22 }));
        if ($tmp1535.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1143_131529, ((panda$core$Int64) { 12 }));
        bool $tmp1536 = $tmp1537.value;
        if ($tmp1536) goto $l1538;
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1143_131529, ((panda$core$Int64) { 13 }));
        $tmp1536 = $tmp1539.value;
        $l1538:;
        panda$core$Bit $tmp1540 = { $tmp1536 };
        if ($tmp1540.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1143_131529, ((panda$core$Int64) { 10 }));
        if ($tmp1541.value) {
        {
            panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1542.value) {
            {
                panda$core$Object* $tmp1543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1544 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1543), p_target);
                return $tmp1544;
            }
            }
        }
        }
        }
        }
        }
    }
    {
        $match$1159_131545 = p_type->typeKind;
        panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1159_131545, ((panda$core$Int64) { 19 }));
        if ($tmp1546.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1547 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1548 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1547, p_target);
            return $tmp1548;
        }
        }
        else {
        panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1159_131545, ((panda$core$Int64) { 17 }));
        if ($tmp1549.value) {
        {
            best1550 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1552 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1552->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1552 = $tmp1552->next;
                }
                $fn1554 $tmp1553 = $tmp1552->methods[0];
                panda$collections$Iterator* $tmp1555 = $tmp1553(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1551 = $tmp1555;
                $l1556:;
                ITable* $tmp1558 = t$Iter1551->$class->itable;
                while ($tmp1558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1558 = $tmp1558->next;
                }
                $fn1560 $tmp1559 = $tmp1558->methods[0];
                panda$core$Bit $tmp1561 = $tmp1559(t$Iter1551);
                panda$core$Bit $tmp1562 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1561);
                if (!$tmp1562.value) goto $l1557;
                {
                    ITable* $tmp1564 = t$Iter1551->$class->itable;
                    while ($tmp1564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1564 = $tmp1564->next;
                    }
                    $fn1566 $tmp1565 = $tmp1564->methods[1];
                    panda$core$Object* $tmp1567 = $tmp1565(t$Iter1551);
                    t1563 = ((org$pandalanguage$pandac$Type*) $tmp1567);
                    panda$core$Int64$nullable $tmp1569 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1563, p_target);
                    cost1568 = $tmp1569;
                    bool $tmp1570 = ((panda$core$Bit) { cost1568.nonnull }).value;
                    if (!$tmp1570) goto $l1571;
                    bool $tmp1572 = ((panda$core$Bit) { !best1550.nonnull }).value;
                    if ($tmp1572) goto $l1573;
                    panda$core$Bit $tmp1574 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1568.value), ((panda$core$Int64) best1550.value));
                    $tmp1572 = $tmp1574.value;
                    $l1573:;
                    panda$core$Bit $tmp1575 = { $tmp1572 };
                    $tmp1570 = $tmp1575.value;
                    $l1571:;
                    panda$core$Bit $tmp1576 = { $tmp1570 };
                    if ($tmp1576.value) {
                    {
                        best1550 = cost1568;
                    }
                    }
                }
                goto $l1556;
                $l1557:;
            }
            return best1550;
        }
        }
        else {
        panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1159_131545, ((panda$core$Int64) { 22 }));
        if ($tmp1577.value) {
        {
            panda$core$Int64$nullable $tmp1578 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1578;
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1579 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1580 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1579);
    if ($tmp1580.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1581 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1582 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1581);
    if ($tmp1582.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1584 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1583 = $tmp1584;
    PANDA_ASSERT(((panda$core$Bit) { cl1583 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1583);
    if (((panda$core$Bit) { cl1583->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1586 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1583->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1587 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1586);
        panda$core$Int64$nullable $tmp1588 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1587, p_target);
        cost1585 = $tmp1588;
        if (((panda$core$Bit) { cost1585.nonnull }).value) {
        {
            panda$core$Int64 $tmp1589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1585.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1589, true });
        }
        }
    }
    }
    {
        ITable* $tmp1591 = ((panda$collections$Iterable*) cl1583->rawInterfaces)->$class->itable;
        while ($tmp1591->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1591 = $tmp1591->next;
        }
        $fn1593 $tmp1592 = $tmp1591->methods[0];
        panda$collections$Iterator* $tmp1594 = $tmp1592(((panda$collections$Iterable*) cl1583->rawInterfaces));
        intf$Iter1590 = $tmp1594;
        $l1595:;
        ITable* $tmp1597 = intf$Iter1590->$class->itable;
        while ($tmp1597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1597 = $tmp1597->next;
        }
        $fn1599 $tmp1598 = $tmp1597->methods[0];
        panda$core$Bit $tmp1600 = $tmp1598(intf$Iter1590);
        panda$core$Bit $tmp1601 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1600);
        if (!$tmp1601.value) goto $l1596;
        {
            ITable* $tmp1603 = intf$Iter1590->$class->itable;
            while ($tmp1603->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1603 = $tmp1603->next;
            }
            $fn1605 $tmp1604 = $tmp1603->methods[1];
            panda$core$Object* $tmp1606 = $tmp1604(intf$Iter1590);
            intf1602 = ((org$pandalanguage$pandac$Type*) $tmp1606);
            org$pandalanguage$pandac$Type* $tmp1608 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1602);
            org$pandalanguage$pandac$Type* $tmp1609 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1608);
            panda$core$Int64$nullable $tmp1610 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1609, p_target);
            cost1607 = $tmp1610;
            if (((panda$core$Bit) { cost1607.nonnull }).value) {
            {
                panda$core$Int64 $tmp1611 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1607.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1611, true });
            }
            }
        }
        goto $l1595;
        $l1596:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1613 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1612 = $tmp1613.value;
    if (!$tmp1612) goto $l1614;
    panda$core$Bit $tmp1615 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1612 = $tmp1615.value;
    $l1614:;
    panda$core$Bit $tmp1616 = { $tmp1612 };
    if ($tmp1616.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1618 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1617 = $tmp1618.value;
    if (!$tmp1617) goto $l1619;
    panda$core$Bit $tmp1620 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1617 = $tmp1620.value;
    $l1619:;
    panda$core$Bit $tmp1621 = { $tmp1617 };
    if ($tmp1621.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1623 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1622 = $tmp1623.value;
    if (!$tmp1622) goto $l1624;
    panda$core$Bit $tmp1625 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1622 = $tmp1625.value;
    $l1624:;
    panda$core$Bit $tmp1626 = { $tmp1622 };
    if ($tmp1626.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1627 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1627.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1628 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1628.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1629 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1629.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1630;
    panda$core$Int64 $match$1233_131640;
    panda$core$Int64$nullable cost1643;
    org$pandalanguage$pandac$IRNode* $match$1249_91655;
    panda$core$UInt64 int1662;
    panda$core$UInt64 int1689;
    panda$core$String* str1714;
    panda$collections$Iterator* utf161728;
    panda$collections$ImmutableArray* methods1748;
    panda$collections$ImmutableArray* args1750;
    panda$core$Int64$nullable bestCost1752;
    panda$collections$Iterator* m$Iter1753;
    org$pandalanguage$pandac$MethodRef* m1765;
    panda$core$Int64$nullable cost1770;
    org$pandalanguage$pandac$IRNode* start1777;
    org$pandalanguage$pandac$IRNode* end1779;
    panda$core$Bit inclusive1781;
    org$pandalanguage$pandac$IRNode* step1783;
    panda$core$Int64$nullable cost11798;
    panda$core$Int64$nullable cost21801;
    panda$core$Int64 cost1807;
    panda$core$Int64$nullable cost11819;
    panda$core$Int64$nullable cost21822;
    panda$core$Int64$nullable cost31826;
    org$pandalanguage$pandac$IRNode* value1834;
    panda$collections$ImmutableArray* args1836;
    org$pandalanguage$pandac$ChoiceEntry* ce1843;
    org$pandalanguage$pandac$ClassDecl* targetClass1849;
    panda$collections$Iterator* m$Iter1851;
    org$pandalanguage$pandac$MethodDecl* m1863;
    panda$core$Int64$nullable cost1875;
    panda$core$Int64$nullable cost1880;
    base1630 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1632 = org$pandalanguage$pandac$Compiler$isSingleChar$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    bool $tmp1631 = $tmp1632.value;
    if (!$tmp1631) goto $l1633;
    panda$core$Bit $tmp1634 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1634);
    $tmp1631 = $tmp1635.value;
    $l1633:;
    panda$core$Bit $tmp1636 = { $tmp1631 };
    if ($tmp1636.value) {
    {
        base1630 = ((panda$core$Int64) { 3 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1638 = (($fn1637) p_expr->$class->vtable[2])(p_expr);
    panda$core$Bit $tmp1639 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1638, p_target);
    if ($tmp1639.value) {
    {
        return ((panda$core$Int64$nullable) { base1630, true });
    }
    }
    {
        $match$1233_131640 = p_target->typeKind;
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1233_131640, ((panda$core$Int64) { 11 }));
        if ($tmp1641.value) {
        {
            panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1642.value) {
            {
                return ((panda$core$Int64$nullable) { base1630, true });
            }
            }
            panda$core$Object* $tmp1644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1645 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1644));
            cost1643 = $tmp1645;
            if (((panda$core$Bit) { !cost1643.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1647 = (($fn1646) p_expr->$class->vtable[2])(p_expr);
            panda$core$Bit $tmp1648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1647->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1648.value) {
            {
                panda$core$Int64 $tmp1649 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) cost1643.value));
                return ((panda$core$Int64$nullable) { $tmp1649, true });
            }
            }
            panda$core$Int64 $tmp1650 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) cost1643.value));
            panda$core$Int64 $tmp1651 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1650, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1651, true });
        }
        }
        else {
        panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1233_131640, ((panda$core$Int64) { 22 }));
        if ($tmp1652.value) {
        {
            panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1630, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1653.value);
            panda$core$Int64$nullable $tmp1654 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1654;
        }
        }
        }
    }
    {
        $match$1249_91655 = p_expr;
        panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1656.value) {
        {
            panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1657.value) {
            {
                return ((panda$core$Int64$nullable) { base1630, true });
            }
            }
            panda$core$Bit $tmp1658 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1658.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1659 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1660 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1659, p_target);
                return $tmp1660;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1661.value) {
        {
            panda$core$UInt64* $tmp1663 = ((panda$core$UInt64*) ((char*) $match$1249_91655->$data + 24));
            int1662 = *$tmp1663;
            panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1665 = $tmp1666.value;
            if (!$tmp1665) goto $l1667;
            panda$core$Int64 $tmp1668 = panda$core$UInt64$convert$R$panda$core$Int64(int1662);
            panda$core$Int64 $tmp1669 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1668);
            panda$core$Int64 $tmp1670 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1671 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1669, $tmp1670);
            $tmp1665 = $tmp1671.value;
            $l1667:;
            panda$core$Bit $tmp1672 = { $tmp1665 };
            bool $tmp1664 = $tmp1672.value;
            if ($tmp1664) goto $l1673;
            panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1674 = $tmp1675.value;
            if (!$tmp1674) goto $l1676;
            panda$core$Int64 $tmp1677 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, int1662);
            panda$core$Int64 $tmp1678 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1679 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1677, $tmp1678);
            $tmp1674 = $tmp1679.value;
            $l1676:;
            panda$core$Bit $tmp1680 = { $tmp1674 };
            $tmp1664 = $tmp1680.value;
            $l1673:;
            panda$core$Bit $tmp1681 = { $tmp1664 };
            if ($tmp1681.value) {
            {
                return ((panda$core$Int64$nullable) { base1630, true });
            }
            }
            panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1682.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1683 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1684 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1683);
            if ($tmp1684.value) {
            {
                panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1630, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1685.value);
                org$pandalanguage$pandac$Type* $tmp1686 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1687 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1686, p_target);
                return $tmp1687;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1688.value) {
        {
            panda$core$UInt64* $tmp1690 = ((panda$core$UInt64*) ((char*) $match$1249_91655->$data + 24));
            int1689 = *$tmp1690;
            panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1691 = $tmp1692.value;
            if (!$tmp1691) goto $l1693;
            panda$core$Int64 $tmp1694 = panda$core$UInt64$convert$R$panda$core$Int64(int1689);
            panda$core$Int64 $tmp1695 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1694);
            panda$core$Int64 $tmp1696 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1695);
            panda$core$Int64 $tmp1697 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1698 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1696, $tmp1697);
            $tmp1691 = $tmp1698.value;
            $l1693:;
            panda$core$Bit $tmp1699 = { $tmp1691 };
            if ($tmp1699.value) {
            {
                return ((panda$core$Int64$nullable) { base1630, true });
            }
            }
            panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1700.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1701 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1701);
            if ($tmp1702.value) {
            {
                panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1630, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1703.value);
                org$pandalanguage$pandac$Type* $tmp1704 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1705 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1704, p_target);
                return $tmp1705;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1706.value) {
        {
            panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1707.value) {
            {
                return ((panda$core$Int64$nullable) { base1630, true });
            }
            }
            panda$core$Bit $tmp1708 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1709 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1708);
            if ($tmp1709.value) {
            {
                panda$core$Bit $tmp1710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1630, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1710.value);
                org$pandalanguage$pandac$Type* $tmp1711 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1712 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1711, p_target);
                return $tmp1712;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1713.value) {
        {
            panda$core$String** $tmp1715 = ((panda$core$String**) ((char*) $match$1249_91655->$data + 16));
            str1714 = *$tmp1715;
            org$pandalanguage$pandac$Type* $tmp1716 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1717 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1716);
            if ($tmp1717.value) {
            {
                panda$core$Int64 $tmp1719 = panda$core$String$length$R$panda$core$Int64(str1714);
                panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1719, ((panda$core$Int64) { 1 }));
                bool $tmp1718 = $tmp1720.value;
                if (!$tmp1718) goto $l1721;
                panda$core$Char32 $tmp1722 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(str1714, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1723 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1722);
                panda$core$Bit $tmp1724 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1723, ((panda$core$UInt32) { 255 }));
                $tmp1718 = $tmp1724.value;
                $l1721:;
                panda$core$Bit $tmp1725 = { $tmp1718 };
                if ($tmp1725.value) {
                {
                    return ((panda$core$Int64$nullable) { base1630, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1726 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1727 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1726);
            if ($tmp1727.value) {
            {
                panda$collections$Iterator* $tmp1729 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(str1714);
                utf161728 = $tmp1729;
                ITable* $tmp1730 = utf161728->$class->itable;
                while ($tmp1730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1730 = $tmp1730->next;
                }
                $fn1732 $tmp1731 = $tmp1730->methods[0];
                panda$core$Bit $tmp1733 = $tmp1731(utf161728);
                if ($tmp1733.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1734 = utf161728->$class->itable;
                while ($tmp1734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1734 = $tmp1734->next;
                }
                $fn1736 $tmp1735 = $tmp1734->methods[1];
                $tmp1735(utf161728);
                ITable* $tmp1737 = utf161728->$class->itable;
                while ($tmp1737->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1737 = $tmp1737->next;
                }
                $fn1739 $tmp1738 = $tmp1737->methods[0];
                panda$core$Bit $tmp1740 = $tmp1738(utf161728);
                if ($tmp1740.value) {
                {
                    panda$core$Int64 $tmp1741 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1741, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1742 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1743 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1742);
            if ($tmp1743.value) {
            {
                panda$core$Int64 $tmp1744 = panda$core$String$length$R$panda$core$Int64(str1714);
                panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1744, ((panda$core$Int64) { 1 }));
                if ($tmp1745.value) {
                {
                    panda$core$Int64 $tmp1746 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1746, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1747.value) {
        {
            panda$collections$ImmutableArray** $tmp1749 = ((panda$collections$ImmutableArray**) ((char*) $match$1249_91655->$data + 32));
            methods1748 = *$tmp1749;
            panda$collections$ImmutableArray** $tmp1751 = ((panda$collections$ImmutableArray**) ((char*) $match$1249_91655->$data + 40));
            args1750 = *$tmp1751;
            bestCost1752 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1754 = ((panda$collections$Iterable*) methods1748)->$class->itable;
                while ($tmp1754->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1754 = $tmp1754->next;
                }
                $fn1756 $tmp1755 = $tmp1754->methods[0];
                panda$collections$Iterator* $tmp1757 = $tmp1755(((panda$collections$Iterable*) methods1748));
                m$Iter1753 = $tmp1757;
                $l1758:;
                ITable* $tmp1760 = m$Iter1753->$class->itable;
                while ($tmp1760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1760 = $tmp1760->next;
                }
                $fn1762 $tmp1761 = $tmp1760->methods[0];
                panda$core$Bit $tmp1763 = $tmp1761(m$Iter1753);
                panda$core$Bit $tmp1764 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1763);
                if (!$tmp1764.value) goto $l1759;
                {
                    ITable* $tmp1766 = m$Iter1753->$class->itable;
                    while ($tmp1766->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1766 = $tmp1766->next;
                    }
                    $fn1768 $tmp1767 = $tmp1766->methods[1];
                    panda$core$Object* $tmp1769 = $tmp1767(m$Iter1753);
                    m1765 = ((org$pandalanguage$pandac$MethodRef*) $tmp1769);
                    panda$core$Int64$nullable $tmp1771 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1765, ((panda$collections$ListView*) args1750), p_target);
                    cost1770 = $tmp1771;
                    if (((panda$core$Bit) { !cost1770.nonnull }).value) {
                    {
                        goto $l1758;
                    }
                    }
                    bool $tmp1772 = ((panda$core$Bit) { !bestCost1752.nonnull }).value;
                    if ($tmp1772) goto $l1773;
                    panda$core$Bit $tmp1774 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1770.value), ((panda$core$Int64) bestCost1752.value));
                    $tmp1772 = $tmp1774.value;
                    $l1773:;
                    panda$core$Bit $tmp1775 = { $tmp1772 };
                    if ($tmp1775.value) {
                    {
                        bestCost1752 = cost1770;
                    }
                    }
                }
                goto $l1758;
                $l1759:;
            }
            return bestCost1752;
        }
        }
        else {
        panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1776.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1778 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1249_91655->$data + 16));
            start1777 = *$tmp1778;
            org$pandalanguage$pandac$IRNode** $tmp1780 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1249_91655->$data + 24));
            end1779 = *$tmp1780;
            panda$core$Bit* $tmp1782 = ((panda$core$Bit*) ((char*) $match$1249_91655->$data + 32));
            inclusive1781 = *$tmp1782;
            org$pandalanguage$pandac$IRNode** $tmp1784 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1249_91655->$data + 33));
            step1783 = *$tmp1784;
            panda$core$Bit $tmp1785 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1785.value) {
            {
                if (((panda$core$Bit) { step1783 != NULL }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1777->$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp1786 = $tmp1787.value;
                if (!$tmp1786) goto $l1788;
                panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(end1779->$rawValue, ((panda$core$Int64) { 23 }));
                $tmp1786 = $tmp1789.value;
                $l1788:;
                panda$core$Bit $tmp1790 = { $tmp1786 };
                if ($tmp1790.value) {
                {
                    panda$core$Object* $tmp1791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1791)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1792.value) {
                    {
                        panda$core$Object* $tmp1793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1793)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1795 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1794));
                        if ($tmp1795.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1630, true });
                        }
                        }
                        panda$core$Int64 $tmp1796 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1796, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1797.value);
                panda$core$Object* $tmp1799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1800 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, start1777, ((org$pandalanguage$pandac$Type*) $tmp1799));
                cost11798 = $tmp1800;
                if (((panda$core$Bit) { !cost11798.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1802 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1803 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, end1779, ((org$pandalanguage$pandac$Type*) $tmp1802));
                cost21801 = $tmp1803;
                if (((panda$core$Bit) { !cost21801.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1804 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) cost11798.value));
                panda$core$Int64 $tmp1805 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1804, ((panda$core$Int64) cost21801.value));
                return ((panda$core$Int64$nullable) { $tmp1805, true });
            }
            }
            panda$core$Bit $tmp1806 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1806.value) {
            {
                if (((panda$core$Bit) { step1783 == NULL }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1777->$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp1808 = $tmp1809.value;
                if (!$tmp1808) goto $l1810;
                panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(end1779->$rawValue, ((panda$core$Int64) { 23 }));
                $tmp1808 = $tmp1811.value;
                $l1810:;
                panda$core$Bit $tmp1812 = { $tmp1808 };
                if ($tmp1812.value) {
                {
                    panda$core$Object* $tmp1813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1813)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1814.value) {
                    {
                        panda$core$Object* $tmp1815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1816 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1815)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1817 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1816));
                        if ($tmp1817.value) {
                        {
                            cost1807 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1807 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1818.value);
                    panda$core$Object* $tmp1820 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1821 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, start1777, ((org$pandalanguage$pandac$Type*) $tmp1820));
                    cost11819 = $tmp1821;
                    if (((panda$core$Bit) { !cost11819.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1824 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, end1779, ((org$pandalanguage$pandac$Type*) $tmp1823));
                    cost21822 = $tmp1824;
                    if (((panda$core$Bit) { !cost21822.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1825 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11819.value), ((panda$core$Int64) cost21822.value));
                    cost1807 = $tmp1825;
                }
                }
                panda$core$Object* $tmp1827 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1828 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, step1783, ((org$pandalanguage$pandac$Type*) $tmp1827));
                cost31826 = $tmp1828;
                if (((panda$core$Bit) { !cost31826.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1829 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, cost1807);
                panda$core$Int64 $tmp1830 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1829, ((panda$core$Int64) cost31826.value));
                return ((panda$core$Int64$nullable) { $tmp1830, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1831 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1832 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1831, p_target);
            return $tmp1832;
        }
        }
        else {
        panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1833.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1835 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1249_91655->$data + 24));
            value1834 = *$tmp1835;
            panda$collections$ImmutableArray** $tmp1837 = ((panda$collections$ImmutableArray**) ((char*) $match$1249_91655->$data + 32));
            args1836 = *$tmp1837;
            panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1630, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1838.value);
            org$pandalanguage$pandac$IRNode* $tmp1840 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, value1834, &$s1839, ((panda$collections$ListView*) args1836));
            panda$core$Int64$nullable $tmp1841 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1840, p_target);
            return $tmp1841;
        }
        }
        else {
        panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_91655->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1842.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1844 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1249_91655->$data + 16));
            ce1843 = *$tmp1844;
            org$pandalanguage$pandac$Type* $tmp1845 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(ce1843->owner);
            panda$core$Int64$nullable $tmp1846 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1845, p_target);
            return $tmp1846;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1847 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1847);
    if ($tmp1848.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1849 = $tmp1850;
    if (((panda$core$Bit) { targetClass1849 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1852 = ((panda$collections$Iterable*) targetClass1849->methods)->$class->itable;
        while ($tmp1852->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1852 = $tmp1852->next;
        }
        $fn1854 $tmp1853 = $tmp1852->methods[0];
        panda$collections$Iterator* $tmp1855 = $tmp1853(((panda$collections$Iterable*) targetClass1849->methods));
        m$Iter1851 = $tmp1855;
        $l1856:;
        ITable* $tmp1858 = m$Iter1851->$class->itable;
        while ($tmp1858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1858 = $tmp1858->next;
        }
        $fn1860 $tmp1859 = $tmp1858->methods[0];
        panda$core$Bit $tmp1861 = $tmp1859(m$Iter1851);
        panda$core$Bit $tmp1862 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1861);
        if (!$tmp1862.value) goto $l1857;
        {
            ITable* $tmp1864 = m$Iter1851->$class->itable;
            while ($tmp1864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1864 = $tmp1864->next;
            }
            $fn1866 $tmp1865 = $tmp1864->methods[1];
            panda$core$Object* $tmp1867 = $tmp1865(m$Iter1851);
            m1863 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1867);
            panda$core$Bit $tmp1868 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1863->annotations);
            if ($tmp1868.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1863);
                panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1863->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1869 = $tmp1870.value;
                if (!$tmp1869) goto $l1871;
                panda$core$Int64 $tmp1872 = panda$collections$Array$get_count$R$panda$core$Int64(m1863->parameters);
                panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1872, ((panda$core$Int64) { 1 }));
                $tmp1869 = $tmp1873.value;
                $l1871:;
                panda$core$Bit $tmp1874 = { $tmp1869 };
                if ($tmp1874.value) {
                {
                    panda$core$Object* $tmp1876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1863->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1877 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1876)->type);
                    cost1875 = $tmp1877;
                    if (((panda$core$Bit) { cost1875.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1878 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) cost1875.value));
                        panda$core$Int64 $tmp1879 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1878, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1879, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1856;
        $l1857:;
    }
    org$pandalanguage$pandac$Type* $tmp1882 = (($fn1881) p_expr->$class->vtable[2])(p_expr);
    panda$core$Int64$nullable $tmp1883 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1882, p_target);
    cost1880 = $tmp1883;
    if (((panda$core$Bit) { cost1880.nonnull }).value) {
    {
        panda$core$Int64 $tmp1884 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1630, ((panda$core$Int64) cost1880.value));
        return ((panda$core$Int64$nullable) { $tmp1884, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$Type* src1885;
    org$pandalanguage$pandac$IRNode* intermediate1900;
    org$pandalanguage$pandac$IRNode* $match$1437_91904;
    panda$core$UInt64 int1906;
    org$pandalanguage$pandac$IRNode* coerced1942;
    panda$core$UInt64 int1947;
    org$pandalanguage$pandac$IRNode* coerced1975;
    panda$core$Real64 real1980;
    org$pandalanguage$pandac$IRNode* coerced1993;
    panda$core$Bit bit1998;
    org$pandalanguage$pandac$IRNode* varType2012;
    panda$core$String* str2017;
    panda$collections$Array* args2025;
    org$pandalanguage$pandac$IRNode* target2035;
    panda$collections$Array* args2047;
    org$pandalanguage$pandac$IRNode* target2061;
    panda$collections$Array* args2073;
    org$pandalanguage$pandac$IRNode* target2083;
    org$pandalanguage$pandac$IRNode* start2090;
    org$pandalanguage$pandac$IRNode* end2092;
    panda$core$Bit inclusive2094;
    org$pandalanguage$pandac$IRNode* step2096;
    org$pandalanguage$pandac$Type* param2109;
    org$pandalanguage$pandac$IRNode* finalStart2111;
    org$pandalanguage$pandac$IRNode* finalEnd2113;
    panda$collections$Array* args2115;
    org$pandalanguage$pandac$IRNode* target2123;
    org$pandalanguage$pandac$Type* endPoint2140;
    org$pandalanguage$pandac$IRNode* finalStart2142;
    org$pandalanguage$pandac$IRNode* finalEnd2144;
    org$pandalanguage$pandac$IRNode* finalStep2146;
    panda$collections$Array* args2149;
    org$pandalanguage$pandac$IRNode* target2157;
    org$pandalanguage$pandac$Position position2166;
    org$pandalanguage$pandac$IRNode* callTarget2168;
    panda$collections$ImmutableArray* methods2170;
    panda$collections$ImmutableArray* args2172;
    org$pandalanguage$pandac$IRNode* base2176;
    panda$collections$ImmutableArray* args2178;
    org$pandalanguage$pandac$ChoiceEntry* ce2184;
    org$pandalanguage$pandac$IRNode* owner2188;
    panda$collections$Array* args2194;
    panda$core$UInt64 value2197;
    org$pandalanguage$pandac$IRNode* intermediate2251;
    org$pandalanguage$pandac$ClassDecl* cl2256;
    panda$collections$Iterator* m$Iter2258;
    org$pandalanguage$pandac$MethodDecl* m2270;
    org$pandalanguage$pandac$IRNode* type2287;
    panda$collections$Array* args2293;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1887 = (($fn1886) p_expr->$class->vtable[2])(p_expr);
    src1885 = $tmp1887;
    PANDA_ASSERT(src1885->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1888 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(src1885, p_target);
    if ($tmp1888.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(src1885->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1889 = $tmp1890.value;
    if (!$tmp1889) goto $l1891;
    panda$core$Bit $tmp1892 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1889 = $tmp1892.value;
    $l1891:;
    panda$core$Bit $tmp1893 = { $tmp1889 };
    if ($tmp1893.value) {
    {
        panda$core$Object* $tmp1894 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(src1885->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1895 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1894), p_target);
        if ($tmp1895.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1896 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1896->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1896->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp1899 = (($fn1898) p_expr->$class->vtable[3])(p_expr);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1896, ((panda$core$Int64) { 6 }), $tmp1899, p_expr, p_target, ((panda$core$Bit) { false }));
            return $tmp1896;
        }
        }
        panda$core$Object* $tmp1901 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(src1885->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1902 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1901));
        intermediate1900 = $tmp1902;
        org$pandalanguage$pandac$IRNode* $tmp1903 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1900, p_target);
        return $tmp1903;
    }
    }
    {
        $match$1437_91904 = p_expr;
        panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1905.value) {
        {
            panda$core$UInt64* $tmp1907 = ((panda$core$UInt64*) ((char*) $match$1437_91904->$data + 24));
            int1906 = *$tmp1907;
            panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1908 = $tmp1909.value;
            if (!$tmp1908) goto $l1910;
            panda$core$Int64 $tmp1911 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, int1906);
            panda$core$Int64 $tmp1912 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1913 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1911, $tmp1912);
            $tmp1908 = $tmp1913.value;
            $l1910:;
            panda$core$Bit $tmp1914 = { $tmp1908 };
            if ($tmp1914.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1915 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1915->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1915->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1918 = (($fn1917) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1915, ((panda$core$Int64) { 16 }), $tmp1918, p_target, int1906);
                return $tmp1915;
            }
            }
            else {
            panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1919 = $tmp1920.value;
            if (!$tmp1919) goto $l1921;
            panda$core$Int64 $tmp1922 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, int1906);
            panda$core$Int64 $tmp1923 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1924 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1922, $tmp1923);
            $tmp1919 = $tmp1924.value;
            $l1921:;
            panda$core$Bit $tmp1925 = { $tmp1919 };
            if ($tmp1925.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1926 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1926->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1926->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1929 = (($fn1928) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1926, ((panda$core$Int64) { 16 }), $tmp1929, p_target, int1906);
                return $tmp1926;
            }
            }
            else {
            panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1930.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1931 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1931->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1934 = (($fn1933) p_expr->$class->vtable[3])(p_expr);
                panda$core$Real64 $tmp1935 = panda$core$UInt64$convert$R$panda$core$Real64(int1906);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1931, ((panda$core$Int64) { 26 }), $tmp1934, p_target, $tmp1935);
                return $tmp1931;
            }
            }
            }
            }
            panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1936 = $tmp1937.value;
            if (!$tmp1936) goto $l1938;
            panda$core$Bit $tmp1939 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1940 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1939);
            $tmp1936 = $tmp1940.value;
            $l1938:;
            panda$core$Bit $tmp1941 = { $tmp1936 };
            if ($tmp1941.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1943 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1944 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1943);
                coerced1942 = $tmp1944;
                if (((panda$core$Bit) { coerced1942 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1945 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1942, p_target);
                return $tmp1945;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1946.value) {
        {
            panda$core$UInt64* $tmp1948 = ((panda$core$UInt64*) ((char*) $match$1437_91904->$data + 24));
            int1947 = *$tmp1948;
            panda$core$Bit $tmp1950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1949 = $tmp1950.value;
            if (!$tmp1949) goto $l1951;
            panda$core$Int64 $tmp1952 = panda$core$UInt64$convert$R$panda$core$Int64(int1947);
            panda$core$Int64 $tmp1953 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1952);
            panda$core$Int64 $tmp1954 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1953);
            panda$core$Int64 $tmp1955 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1956 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1954, $tmp1955);
            $tmp1949 = $tmp1956.value;
            $l1951:;
            panda$core$Bit $tmp1957 = { $tmp1949 };
            if ($tmp1957.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1958 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1958->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1958->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1961 = (($fn1960) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1958, ((panda$core$Int64) { 22 }), $tmp1961, p_target, int1947);
                return $tmp1958;
            }
            }
            else {
            panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1962.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1963 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1963->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1963->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1966 = (($fn1965) p_expr->$class->vtable[3])(p_expr);
                panda$core$Real64 $tmp1967 = panda$core$UInt64$convert$R$panda$core$Real64(int1947);
                panda$core$Real64 $tmp1968 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1967);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1963, ((panda$core$Int64) { 26 }), $tmp1966, p_target, $tmp1968);
                return $tmp1963;
            }
            }
            }
            panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1969 = $tmp1970.value;
            if (!$tmp1969) goto $l1971;
            panda$core$Bit $tmp1972 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1973 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1972);
            $tmp1969 = $tmp1973.value;
            $l1971:;
            panda$core$Bit $tmp1974 = { $tmp1969 };
            if ($tmp1974.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1976 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1977 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1976);
                coerced1975 = $tmp1977;
                if (((panda$core$Bit) { coerced1975 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1978 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1975, p_target);
                return $tmp1978;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1979.value) {
        {
            panda$core$Real64* $tmp1981 = ((panda$core$Real64*) ((char*) $match$1437_91904->$data + 24));
            real1980 = *$tmp1981;
            panda$core$Bit $tmp1982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1982.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1983 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1983->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1983->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1986 = (($fn1985) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1983, ((panda$core$Int64) { 26 }), $tmp1986, p_target, real1980);
                return $tmp1983;
            }
            }
            panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1987 = $tmp1988.value;
            if (!$tmp1987) goto $l1989;
            panda$core$Bit $tmp1990 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1991 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1990);
            $tmp1987 = $tmp1991.value;
            $l1989:;
            panda$core$Bit $tmp1992 = { $tmp1987 };
            if ($tmp1992.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1994 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1995 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1994);
                coerced1993 = $tmp1995;
                if (((panda$core$Bit) { coerced1993 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1996 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1993, p_target);
                return $tmp1996;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1997.value) {
        {
            panda$core$Bit* $tmp1999 = ((panda$core$Bit*) ((char*) $match$1437_91904->$data + 24));
            bit1998 = *$tmp1999;
            org$pandalanguage$pandac$Type* $tmp2000 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2001 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2000);
            if ($tmp2001.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2002 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2002->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2002->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2005 = (($fn2004) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2002, ((panda$core$Int64) { 2 }), $tmp2005, p_target, bit1998);
                return $tmp2002;
            }
            }
            panda$core$Bit $tmp2007 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp2006 = $tmp2007.value;
            if (!$tmp2006) goto $l2008;
            org$pandalanguage$pandac$Type* $tmp2009 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2010 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2009);
            $tmp2006 = $tmp2010.value;
            $l2008:;
            panda$core$Bit $tmp2011 = { $tmp2006 };
            if ($tmp2011.value) {
            {
                org$pandalanguage$pandac$Type* $tmp2013 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2014 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp2013);
                varType2012 = $tmp2014;
                if (((panda$core$Bit) { varType2012 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp2015 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType2012, p_target);
                    return $tmp2015;
                }
                }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2016.value) {
        {
            panda$core$String** $tmp2018 = ((panda$core$String**) ((char*) $match$1437_91904->$data + 16));
            str2017 = *$tmp2018;
            org$pandalanguage$pandac$Type* $tmp2020 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2021 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2020);
            bool $tmp2019 = $tmp2021.value;
            if (!$tmp2019) goto $l2022;
            panda$core$Int64$nullable $tmp2023 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp2019 = ((panda$core$Bit) { $tmp2023.nonnull }).value;
            $l2022:;
            panda$core$Bit $tmp2024 = { $tmp2019 };
            if ($tmp2024.value) {
            {
                panda$collections$Array* $tmp2026 = (panda$collections$Array*) malloc(40);
                $tmp2026->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2026->refCount.value = 1;
                panda$collections$Array$init($tmp2026);
                args2025 = $tmp2026;
                org$pandalanguage$pandac$IRNode* $tmp2028 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2028->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2031 = (($fn2030) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$Type* $tmp2032 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp2033 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(str2017, ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp2034 = panda$core$Char32$convert$R$panda$core$UInt64($tmp2033);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2028, ((panda$core$Int64) { 16 }), $tmp2031, $tmp2032, $tmp2034);
                panda$collections$Array$add$panda$collections$Array$T(args2025, ((panda$core$Object*) $tmp2028));
                org$pandalanguage$pandac$IRNode* $tmp2036 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2036->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2036->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2039 = (($fn2038) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2036, ((panda$core$Int64) { 34 }), $tmp2039, p_target);
                target2035 = $tmp2036;
                org$pandalanguage$pandac$IRNode* $tmp2040 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2035, ((panda$collections$ListView*) args2025));
                return $tmp2040;
            }
            }
            org$pandalanguage$pandac$Type* $tmp2042 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2043 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2042);
            bool $tmp2041 = $tmp2043.value;
            if (!$tmp2041) goto $l2044;
            panda$core$Int64$nullable $tmp2045 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp2041 = ((panda$core$Bit) { $tmp2045.nonnull }).value;
            $l2044:;
            panda$core$Bit $tmp2046 = { $tmp2041 };
            if ($tmp2046.value) {
            {
                panda$collections$Array* $tmp2048 = (panda$collections$Array*) malloc(40);
                $tmp2048->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2048->refCount.value = 1;
                panda$collections$Array$init($tmp2048);
                args2047 = $tmp2048;
                org$pandalanguage$pandac$IRNode* $tmp2050 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2050->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2050->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2053 = (($fn2052) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$Type* $tmp2054 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp2055 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(str2017);
                ITable* $tmp2056 = $tmp2055->$class->itable;
                while ($tmp2056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2056 = $tmp2056->next;
                }
                $fn2058 $tmp2057 = $tmp2056->methods[1];
                panda$core$Object* $tmp2059 = $tmp2057($tmp2055);
                panda$core$UInt64 $tmp2060 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp2059)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2050, ((panda$core$Int64) { 16 }), $tmp2053, $tmp2054, $tmp2060);
                panda$collections$Array$add$panda$collections$Array$T(args2047, ((panda$core$Object*) $tmp2050));
                org$pandalanguage$pandac$IRNode* $tmp2062 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2062->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2065 = (($fn2064) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2062, ((panda$core$Int64) { 34 }), $tmp2065, p_target);
                target2061 = $tmp2062;
                org$pandalanguage$pandac$IRNode* $tmp2066 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2061, ((panda$collections$ListView*) args2047));
                return $tmp2066;
            }
            }
            org$pandalanguage$pandac$Type* $tmp2068 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2069 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2068);
            bool $tmp2067 = $tmp2069.value;
            if (!$tmp2067) goto $l2070;
            panda$core$Int64$nullable $tmp2071 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp2067 = ((panda$core$Bit) { $tmp2071.nonnull }).value;
            $l2070:;
            panda$core$Bit $tmp2072 = { $tmp2067 };
            if ($tmp2072.value) {
            {
                panda$collections$Array* $tmp2074 = (panda$collections$Array*) malloc(40);
                $tmp2074->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2074->refCount.value = 1;
                panda$collections$Array$init($tmp2074);
                args2073 = $tmp2074;
                org$pandalanguage$pandac$IRNode* $tmp2076 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2076->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2076->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2079 = (($fn2078) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$Type* $tmp2080 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp2081 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(str2017, ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp2082 = panda$core$Char32$convert$R$panda$core$UInt64($tmp2081);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2076, ((panda$core$Int64) { 16 }), $tmp2079, $tmp2080, $tmp2082);
                panda$collections$Array$add$panda$collections$Array$T(args2073, ((panda$core$Object*) $tmp2076));
                org$pandalanguage$pandac$IRNode* $tmp2084 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2084->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2084->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2087 = (($fn2086) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2084, ((panda$core$Int64) { 34 }), $tmp2087, p_target);
                target2083 = $tmp2084;
                org$pandalanguage$pandac$IRNode* $tmp2088 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2083, ((panda$collections$ListView*) args2073));
                return $tmp2088;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2089.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2091 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1437_91904->$data + 16));
            start2090 = *$tmp2091;
            org$pandalanguage$pandac$IRNode** $tmp2093 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1437_91904->$data + 24));
            end2092 = *$tmp2093;
            panda$core$Bit* $tmp2095 = ((panda$core$Bit*) ((char*) $match$1437_91904->$data + 32));
            inclusive2094 = *$tmp2095;
            org$pandalanguage$pandac$IRNode** $tmp2097 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1437_91904->$data + 33));
            step2096 = *$tmp2097;
            panda$core$Bit $tmp2098 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp2098.value) {
            {
                if (((panda$core$Bit) { step2096 != NULL }).value) {
                {
                    org$pandalanguage$pandac$Position $tmp2100 = (($fn2099) p_expr->$class->vtable[3])(p_expr);
                    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2101, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, &$s2103);
                    panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2104, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2105, &$s2106);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2100, $tmp2107);
                    return NULL;
                }
                }
                panda$core$Bit $tmp2108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp2108.value);
                panda$core$Object* $tmp2110 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param2109 = ((org$pandalanguage$pandac$Type*) $tmp2110);
                org$pandalanguage$pandac$IRNode* $tmp2112 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, start2090, param2109);
                finalStart2111 = $tmp2112;
                if (((panda$core$Bit) { finalStart2111 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp2114 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, end2092, param2109);
                finalEnd2113 = $tmp2114;
                if (((panda$core$Bit) { finalEnd2113 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp2116 = (panda$collections$Array*) malloc(40);
                $tmp2116->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2116->refCount.value = 1;
                panda$collections$Array$init($tmp2116);
                args2115 = $tmp2116;
                panda$collections$Array$add$panda$collections$Array$T(args2115, ((panda$core$Object*) finalStart2111));
                panda$collections$Array$add$panda$collections$Array$T(args2115, ((panda$core$Object*) finalEnd2113));
                org$pandalanguage$pandac$IRNode* $tmp2118 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2118->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2118->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2121 = (($fn2120) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$Type* $tmp2122 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2118, ((panda$core$Int64) { 2 }), $tmp2121, $tmp2122, inclusive2094);
                panda$collections$Array$add$panda$collections$Array$T(args2115, ((panda$core$Object*) $tmp2118));
                org$pandalanguage$pandac$IRNode* $tmp2124 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2124->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2124->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2127 = (($fn2126) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2124, ((panda$core$Int64) { 34 }), $tmp2127, p_target);
                target2123 = $tmp2124;
                org$pandalanguage$pandac$IRNode* $tmp2128 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2123, ((panda$collections$ListView*) args2115));
                return $tmp2128;
            }
            }
            else {
            panda$core$Bit $tmp2129 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp2129.value) {
            {
                if (((panda$core$Bit) { step2096 == NULL }).value) {
                {
                    org$pandalanguage$pandac$Position $tmp2131 = (($fn2130) p_expr->$class->vtable[3])(p_expr);
                    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2132, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
                    panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2135, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2136, &$s2137);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2131, $tmp2138);
                    return NULL;
                }
                }
                panda$core$Bit $tmp2139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp2139.value);
                panda$core$Object* $tmp2141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint2140 = ((org$pandalanguage$pandac$Type*) $tmp2141);
                org$pandalanguage$pandac$IRNode* $tmp2143 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, start2090, endPoint2140);
                finalStart2142 = $tmp2143;
                if (((panda$core$Bit) { finalStart2142 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp2145 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, end2092, endPoint2140);
                finalEnd2144 = $tmp2145;
                if (((panda$core$Bit) { finalEnd2144 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp2148 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, step2096, ((org$pandalanguage$pandac$Type*) $tmp2147));
                finalStep2146 = $tmp2148;
                if (((panda$core$Bit) { finalStep2146 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp2150 = (panda$collections$Array*) malloc(40);
                $tmp2150->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2150->refCount.value = 1;
                panda$collections$Array$init($tmp2150);
                args2149 = $tmp2150;
                panda$collections$Array$add$panda$collections$Array$T(args2149, ((panda$core$Object*) start2090));
                panda$collections$Array$add$panda$collections$Array$T(args2149, ((panda$core$Object*) end2092));
                panda$collections$Array$add$panda$collections$Array$T(args2149, ((panda$core$Object*) step2096));
                org$pandalanguage$pandac$IRNode* $tmp2152 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2152->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2152->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2155 = (($fn2154) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$Type* $tmp2156 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2152, ((panda$core$Int64) { 2 }), $tmp2155, $tmp2156, inclusive2094);
                panda$collections$Array$add$panda$collections$Array$T(args2149, ((panda$core$Object*) $tmp2152));
                org$pandalanguage$pandac$IRNode* $tmp2158 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2158->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2161 = (($fn2160) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2158, ((panda$core$Int64) { 34 }), $tmp2161, p_target);
                target2157 = $tmp2158;
                org$pandalanguage$pandac$IRNode* $tmp2162 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2157, ((panda$collections$ListView*) args2149));
                return $tmp2162;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp2163 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2164 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2163, p_target);
                return $tmp2164;
            }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2165.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2167 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1437_91904->$data + 0));
            position2166 = *$tmp2167;
            org$pandalanguage$pandac$IRNode** $tmp2169 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1437_91904->$data + 24));
            callTarget2168 = *$tmp2169;
            panda$collections$ImmutableArray** $tmp2171 = ((panda$collections$ImmutableArray**) ((char*) $match$1437_91904->$data + 32));
            methods2170 = *$tmp2171;
            panda$collections$ImmutableArray** $tmp2173 = ((panda$collections$ImmutableArray**) ((char*) $match$1437_91904->$data + 40));
            args2172 = *$tmp2173;
            org$pandalanguage$pandac$IRNode* $tmp2174 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position2166, callTarget2168, methods2170, args2172, p_target);
            return $tmp2174;
        }
        }
        else {
        panda$core$Bit $tmp2175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2175.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2177 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1437_91904->$data + 24));
            base2176 = *$tmp2177;
            panda$collections$ImmutableArray** $tmp2179 = ((panda$collections$ImmutableArray**) ((char*) $match$1437_91904->$data + 32));
            args2178 = *$tmp2179;
            org$pandalanguage$pandac$IRNode* $tmp2181 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2176, &$s2180, ((panda$collections$ListView*) args2178), p_target);
            org$pandalanguage$pandac$IRNode* $tmp2182 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2181, p_target);
            return $tmp2182;
        }
        }
        else {
        panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_91904->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp2183.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp2185 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1437_91904->$data + 16));
            ce2184 = *$tmp2185;
            panda$core$Int64 $tmp2186 = panda$collections$Array$get_count$R$panda$core$Int64(ce2184->fields);
            panda$core$Bit $tmp2187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2186, ((panda$core$Int64) { 0 }));
            if ($tmp2187.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2189 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2189->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2189->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2192 = (($fn2191) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$Type* $tmp2193 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(ce2184->owner);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2189, ((panda$core$Int64) { 34 }), $tmp2192, $tmp2193);
                owner2188 = $tmp2189;
                panda$collections$Array* $tmp2195 = (panda$collections$Array*) malloc(40);
                $tmp2195->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2195->refCount.value = 1;
                panda$collections$Array$init($tmp2195);
                args2194 = $tmp2195;
                panda$core$UInt64 $tmp2198 = panda$core$Int64$convert$R$panda$core$UInt64(ce2184->rawValue);
                value2197 = $tmp2198;
                org$pandalanguage$pandac$IRNode* $tmp2199 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2199->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp2202 = (($fn2201) p_expr->$class->vtable[3])(p_expr);
                org$pandalanguage$pandac$Type* $tmp2203 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2197);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2199, ((panda$core$Int64) { 16 }), $tmp2202, $tmp2203, value2197);
                panda$collections$Array$add$panda$collections$Array$T(args2194, ((panda$core$Object*) $tmp2199));
                org$pandalanguage$pandac$IRNode* $tmp2204 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2188, ((panda$collections$ListView*) args2194));
                org$pandalanguage$pandac$IRNode* $tmp2205 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2204, p_target);
                return $tmp2205;
            }
            }
            org$pandalanguage$pandac$Position $tmp2207 = (($fn2206) p_expr->$class->vtable[3])(p_expr);
            panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2208, ((panda$core$Object*) p_expr));
            panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
            panda$core$Int64 $tmp2212 = panda$collections$Array$get_count$R$panda$core$Int64(ce2184->fields);
            panda$core$Int64$wrapper* $tmp2213;
            $tmp2213 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp2213->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2213->refCount = 1;
            $tmp2213->value = $tmp2212;
            panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2211, ((panda$core$Object*) $tmp2213));
            panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
            panda$core$Int64 $tmp2218 = panda$collections$Array$get_count$R$panda$core$Int64(ce2184->fields);
            panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2218, ((panda$core$Int64) { 1 }));
            panda$core$Bit$wrapper* $tmp2220;
            $tmp2220 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp2220->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp2220->refCount = 1;
            $tmp2220->value = $tmp2219;
            ITable* $tmp2222 = ((panda$core$Formattable*) $tmp2220)->$class->itable;
            while ($tmp2222->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2222 = $tmp2222->next;
            }
            $fn2224 $tmp2223 = $tmp2222->methods[0];
            panda$core$String* $tmp2225 = $tmp2223(((panda$core$Formattable*) $tmp2220), &$s2221);
            panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2217, $tmp2225);
            panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2227);
            panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, $tmp2228);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2207, $tmp2229);
            return NULL;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2230.value) {
    {
        panda$core$Bit $tmp2234;
        if (((panda$core$Bit) { p_expr != NULL }).value) goto $l2231; else goto $l2232;
        $l2231:;
        panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->$rawValue, ((panda$core$Int64) { 23 }));
        $tmp2234 = $tmp2235;
        goto $l2233;
        $l2232:;
        $tmp2234 = ((panda$core$Bit) { false });
        goto $l2233;
        $l2233:;
        if ($tmp2234.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2236 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2236->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2236->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2239 = (($fn2238) p_expr->$class->vtable[3])(p_expr);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2236, ((panda$core$Int64) { 23 }), $tmp2239, p_target);
            return $tmp2236;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2241 = (($fn2240) p_expr->$class->vtable[2])(p_expr);
        panda$core$Object* $tmp2242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2243 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2241, ((org$pandalanguage$pandac$Type*) $tmp2242));
        if ($tmp2243.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2244 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2244->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2244->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2247 = (($fn2246) p_expr->$class->vtable[3])(p_expr);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2244, ((panda$core$Int64) { 6 }), $tmp2247, p_expr, p_target, ((panda$core$Bit) { false }));
            return $tmp2244;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2249 = (($fn2248) p_expr->$class->vtable[2])(p_expr);
        panda$core$Bit $tmp2250 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2249->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2250.value) {
        {
            panda$core$Object* $tmp2252 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2253 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2252));
            intermediate2251 = $tmp2253;
            org$pandalanguage$pandac$IRNode* $tmp2254 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2251, p_target);
            return $tmp2254;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2255 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2255.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2257 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2256 = $tmp2257;
        if (((panda$core$Bit) { cl2256 != NULL }).value) {
        {
            {
                ITable* $tmp2259 = ((panda$collections$Iterable*) cl2256->methods)->$class->itable;
                while ($tmp2259->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2259 = $tmp2259->next;
                }
                $fn2261 $tmp2260 = $tmp2259->methods[0];
                panda$collections$Iterator* $tmp2262 = $tmp2260(((panda$collections$Iterable*) cl2256->methods));
                m$Iter2258 = $tmp2262;
                $l2263:;
                ITable* $tmp2265 = m$Iter2258->$class->itable;
                while ($tmp2265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2265 = $tmp2265->next;
                }
                $fn2267 $tmp2266 = $tmp2265->methods[0];
                panda$core$Bit $tmp2268 = $tmp2266(m$Iter2258);
                panda$core$Bit $tmp2269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2268);
                if (!$tmp2269.value) goto $l2264;
                {
                    ITable* $tmp2271 = m$Iter2258->$class->itable;
                    while ($tmp2271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2271 = $tmp2271->next;
                    }
                    $fn2273 $tmp2272 = $tmp2271->methods[1];
                    panda$core$Object* $tmp2274 = $tmp2272(m$Iter2258);
                    m2270 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2274);
                    panda$core$Bit $tmp2275 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2270->annotations);
                    if ($tmp2275.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2270);
                        panda$core$Bit $tmp2278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2270->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        bool $tmp2277 = $tmp2278.value;
                        if (!$tmp2277) goto $l2279;
                        panda$core$Int64 $tmp2280 = panda$collections$Array$get_count$R$panda$core$Int64(m2270->parameters);
                        panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2280, ((panda$core$Int64) { 1 }));
                        $tmp2277 = $tmp2281.value;
                        $l2279:;
                        panda$core$Bit $tmp2282 = { $tmp2277 };
                        bool $tmp2276 = $tmp2282.value;
                        if (!$tmp2276) goto $l2283;
                        panda$core$Object* $tmp2284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2270->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2285 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2284)->type);
                        $tmp2276 = ((panda$core$Bit) { $tmp2285.nonnull }).value;
                        $l2283:;
                        panda$core$Bit $tmp2286 = { $tmp2276 };
                        if ($tmp2286.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2288 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2288->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2288->refCount.value = 1;
                            org$pandalanguage$pandac$Position $tmp2291 = (($fn2290) p_expr->$class->vtable[3])(p_expr);
                            org$pandalanguage$pandac$Type* $tmp2292 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2256);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2288, ((panda$core$Int64) { 34 }), $tmp2291, $tmp2292);
                            type2287 = $tmp2288;
                            panda$collections$Array* $tmp2294 = (panda$collections$Array*) malloc(40);
                            $tmp2294->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2294->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2294, ((panda$core$Int64) { 1 }));
                            args2293 = $tmp2294;
                            panda$collections$Array$add$panda$collections$Array$T(args2293, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2296 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2287, ((panda$collections$ListView*) args2293));
                            org$pandalanguage$pandac$IRNode* $tmp2297 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2296, p_target);
                            return $tmp2297;
                        }
                        }
                    }
                    }
                }
                goto $l2263;
                $l2264:;
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2298 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2298->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2298->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp2301 = (($fn2300) p_expr->$class->vtable[3])(p_expr);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2298, ((panda$core$Int64) { 6 }), $tmp2301, p_expr, p_target, ((panda$core$Bit) { false }));
        return $tmp2298;
    }
    }
    org$pandalanguage$pandac$Position $tmp2303 = (($fn2302) p_expr->$class->vtable[3])(p_expr);
    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2304, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2306);
    org$pandalanguage$pandac$Type* $tmp2309 = (($fn2308) p_expr->$class->vtable[2])(p_expr);
    panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2307, ((panda$core$Object*) $tmp2309));
    panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, &$s2311);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2303, $tmp2312);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2313;
    org$pandalanguage$pandac$IRNode* $tmp2314 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2313 = $tmp2314;
    bool $tmp2315 = ((panda$core$Bit) { result2313 == NULL }).value;
    if ($tmp2315) goto $l2316;
    org$pandalanguage$pandac$Type* $tmp2318 = (($fn2317) result2313->$class->vtable[2])(result2313);
    panda$core$Bit $tmp2319 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2318, p_target);
    $tmp2315 = $tmp2319.value;
    $l2316:;
    panda$core$Bit $tmp2320 = { $tmp2315 };
    PANDA_ASSERT($tmp2320.value);
    return result2313;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2322 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2321 = $tmp2322.value;
    if (!$tmp2321) goto $l2323;
    panda$core$Bit $tmp2324 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2321 = $tmp2324.value;
    $l2323:;
    panda$core$Bit $tmp2325 = { $tmp2321 };
    if ($tmp2325.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2326 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2326.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2328 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2327 = $tmp2328.value;
    if (!$tmp2327) goto $l2329;
    panda$core$Bit $tmp2330 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2327 = $tmp2330.value;
    $l2329:;
    panda$core$Bit $tmp2331 = { $tmp2327 };
    if ($tmp2331.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2332.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2333 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2333.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2335;
    org$pandalanguage$pandac$IRNode* resolved2346;
    panda$core$Int64$nullable $tmp2334 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2334.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp2337 = (($fn2336) p_node->$class->vtable[2])(p_node);
    panda$core$Bit $tmp2338 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp2337, p_target);
    result2335 = $tmp2338;
    panda$core$Bit $tmp2340 = panda$core$Bit$$NOT$R$panda$core$Bit(result2335);
    bool $tmp2339 = $tmp2340.value;
    if (!$tmp2339) goto $l2341;
    org$pandalanguage$pandac$Type* $tmp2343 = (($fn2342) p_node->$class->vtable[2])(p_node);
    panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2343->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2339 = $tmp2344.value;
    $l2341:;
    panda$core$Bit $tmp2345 = { $tmp2339 };
    if ($tmp2345.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2347 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2346 = $tmp2347;
        bool $tmp2348 = ((panda$core$Bit) { resolved2346 != NULL }).value;
        if (!$tmp2348) goto $l2349;
        $tmp2348 = ((panda$core$Bit) { ((panda$core$Object*) resolved2346) != ((panda$core$Object*) p_node) }).value;
        $l2349:;
        panda$core$Bit $tmp2350 = { $tmp2348 };
        if ($tmp2350.value) {
        {
            panda$core$Bit $tmp2351 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2346, p_target);
            result2335 = $tmp2351;
        }
        }
    }
    }
    return result2335;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* $match$1665_92373;
    org$pandalanguage$pandac$IRNode* resolved2391;
    org$pandalanguage$pandac$Type* $tmp2353 = (($fn2352) p_node->$class->vtable[2])(p_node);
    panda$core$Bit $tmp2354 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2353, p_target);
    if ($tmp2354.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2355 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2356 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2355);
    PANDA_ASSERT($tmp2356.value);
    bool $tmp2357 = p_isExplicit.value;
    if (!$tmp2357) goto $l2358;
    panda$core$Bit $tmp2359 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2359);
    $tmp2357 = $tmp2360.value;
    $l2358:;
    panda$core$Bit $tmp2361 = { $tmp2357 };
    if ($tmp2361.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2364 = (($fn2363) p_node->$class->vtable[2])(p_node);
        panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2362, ((panda$core$Object*) $tmp2364));
        panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2366);
        panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2368, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, &$s2370);
        panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, $tmp2371);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2372);
    }
    }
    {
        $match$1665_92373 = p_node;
        panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1665_92373->$rawValue, ((panda$core$Int64) { 16 }));
        bool $tmp2375 = $tmp2376.value;
        if ($tmp2375) goto $l2377;
        panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1665_92373->$rawValue, ((panda$core$Int64) { 22 }));
        $tmp2375 = $tmp2378.value;
        $l2377:;
        panda$core$Bit $tmp2379 = { $tmp2375 };
        bool $tmp2374 = $tmp2379.value;
        if ($tmp2374) goto $l2380;
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1665_92373->$rawValue, ((panda$core$Int64) { 2 }));
        $tmp2374 = $tmp2381.value;
        $l2380:;
        panda$core$Bit $tmp2382 = { $tmp2374 };
        if ($tmp2382.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2383 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2383;
        }
        }
        else {
        panda$core$Bit $tmp2385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1665_92373->$rawValue, ((panda$core$Int64) { 37 }));
        bool $tmp2384 = $tmp2385.value;
        if ($tmp2384) goto $l2386;
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1665_92373->$rawValue, ((panda$core$Int64) { 36 }));
        $tmp2384 = $tmp2387.value;
        $l2386:;
        panda$core$Bit $tmp2388 = { $tmp2384 };
        if ($tmp2388.value) {
        {
            panda$core$Int64$nullable $tmp2389 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2389.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2390 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2390;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2392 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2391 = $tmp2392;
            if (((panda$core$Bit) { resolved2391 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2393 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2391, p_position, p_isExplicit, p_target);
                return $tmp2393;
            }
            }
        }
        }
        }
    }
    org$pandalanguage$pandac$IRNode* $tmp2394 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2394->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2394, ((panda$core$Int64) { 6 }), p_position, p_node, p_target, p_isExplicit);
    return $tmp2394;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2402;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2403;
    panda$core$Int64$nullable cost2418;
    panda$core$Int64$nullable cost2432;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2396 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2397 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2397->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2397 = $tmp2397->next;
    }
    $fn2399 $tmp2398 = $tmp2397->methods[0];
    panda$core$Int64 $tmp2400 = $tmp2398(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2401 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2396, $tmp2400);
    if ($tmp2401.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2402 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2404 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2403, ((panda$core$Int64) { 0 }), $tmp2404, ((panda$core$Bit) { false }));
    int64_t $tmp2406 = $tmp2403.min.value;
    panda$core$Int64 i2405 = { $tmp2406 };
    int64_t $tmp2408 = $tmp2403.max.value;
    bool $tmp2409 = $tmp2403.inclusive.value;
    if ($tmp2409) goto $l2416; else goto $l2417;
    $l2416:;
    if ($tmp2406 <= $tmp2408) goto $l2410; else goto $l2412;
    $l2417:;
    if ($tmp2406 < $tmp2408) goto $l2410; else goto $l2412;
    $l2410:;
    {
        ITable* $tmp2419 = p_args->$class->itable;
        while ($tmp2419->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2419 = $tmp2419->next;
        }
        $fn2421 $tmp2420 = $tmp2419->methods[0];
        panda$core$Object* $tmp2422 = $tmp2420(p_args, i2405);
        org$pandalanguage$pandac$Type* $tmp2423 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2405);
        panda$core$Int64$nullable $tmp2424 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2422), $tmp2423);
        cost2418 = $tmp2424;
        if (((panda$core$Bit) { !cost2418.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2425 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2402, ((panda$core$Int64) cost2418.value));
        result2402 = $tmp2425;
    }
    $l2413:;
    int64_t $tmp2427 = $tmp2408 - i2405.value;
    if ($tmp2409) goto $l2428; else goto $l2429;
    $l2428:;
    if ((uint64_t) $tmp2427 >= 1) goto $l2426; else goto $l2412;
    $l2429:;
    if ((uint64_t) $tmp2427 > 1) goto $l2426; else goto $l2412;
    $l2426:;
    i2405.value += 1;
    goto $l2410;
    $l2412:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2433 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2434 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2433, p_expectedReturn);
        cost2432 = $tmp2434;
        if (((panda$core$Bit) { !cost2432.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2435 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2402, ((panda$core$Int64) cost2432.value));
        result2402 = $tmp2435;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2438 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2439 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2438);
    bool $tmp2437 = $tmp2439.value;
    if (!$tmp2437) goto $l2440;
    ITable* $tmp2441 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2441->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2441 = $tmp2441->next;
    }
    $fn2443 $tmp2442 = $tmp2441->methods[0];
    panda$core$Int64 $tmp2444 = $tmp2442(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2444, ((panda$core$Int64) { 1 }));
    $tmp2437 = $tmp2445.value;
    $l2440:;
    panda$core$Bit $tmp2446 = { $tmp2437 };
    bool $tmp2436 = $tmp2446.value;
    if (!$tmp2436) goto $l2447;
    panda$core$Object* $tmp2448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2449 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2450 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2448)->type, $tmp2449);
    $tmp2436 = $tmp2450.value;
    $l2447:;
    panda$core$Bit $tmp2451 = { $tmp2436 };
    if ($tmp2451.value) {
    {
        panda$core$Int64 $tmp2452 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2402, ((panda$core$Int64) { 1 }));
        result2402 = $tmp2452;
    }
    }
    return ((panda$core$Int64$nullable) { result2402, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2453;
    panda$core$Int64$nullable best2456;
    panda$collections$Iterator* m$Iter2457;
    org$pandalanguage$pandac$MethodRef* m2469;
    panda$core$Int64$nullable cost2474;
    panda$collections$Array* $tmp2454 = (panda$collections$Array*) malloc(40);
    $tmp2454->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2454->refCount.value = 1;
    panda$collections$Array$init($tmp2454);
    result2453 = $tmp2454;
    best2456 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2458 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2458->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2458 = $tmp2458->next;
        }
        $fn2460 $tmp2459 = $tmp2458->methods[0];
        panda$collections$Iterator* $tmp2461 = $tmp2459(((panda$collections$Iterable*) p_methods));
        m$Iter2457 = $tmp2461;
        $l2462:;
        ITable* $tmp2464 = m$Iter2457->$class->itable;
        while ($tmp2464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2464 = $tmp2464->next;
        }
        $fn2466 $tmp2465 = $tmp2464->methods[0];
        panda$core$Bit $tmp2467 = $tmp2465(m$Iter2457);
        panda$core$Bit $tmp2468 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2467);
        if (!$tmp2468.value) goto $l2463;
        {
            ITable* $tmp2470 = m$Iter2457->$class->itable;
            while ($tmp2470->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2470 = $tmp2470->next;
            }
            $fn2472 $tmp2471 = $tmp2470->methods[1];
            panda$core$Object* $tmp2473 = $tmp2471(m$Iter2457);
            m2469 = ((org$pandalanguage$pandac$MethodRef*) $tmp2473);
            panda$core$Int64$nullable $tmp2475 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2469, p_args, p_expectedReturn);
            cost2474 = $tmp2475;
            if (((panda$core$Bit) { !cost2474.nonnull }).value) {
            {
                goto $l2462;
            }
            }
            bool $tmp2476 = ((panda$core$Bit) { !best2456.nonnull }).value;
            if ($tmp2476) goto $l2477;
            panda$core$Bit $tmp2478 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2474.value), ((panda$core$Int64) best2456.value));
            $tmp2476 = $tmp2478.value;
            $l2477:;
            panda$core$Bit $tmp2479 = { $tmp2476 };
            if ($tmp2479.value) {
            {
                panda$collections$Array$clear(result2453);
                best2456 = cost2474;
            }
            }
            panda$core$Bit $tmp2483;
            if (((panda$core$Bit) { cost2474.nonnull }).value) goto $l2480; else goto $l2481;
            $l2480:;
            panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2474.value), ((panda$core$Int64) best2456.value));
            $tmp2483 = $tmp2484;
            goto $l2482;
            $l2481:;
            $tmp2483 = ((panda$core$Bit) { false });
            goto $l2482;
            $l2482:;
            if ($tmp2483.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2453, ((panda$core$Object*) m2469));
            }
            }
        }
        goto $l2462;
        $l2463:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2453));
    return best2456;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2520;
    org$pandalanguage$pandac$IRNode* selfNode2572;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2605;
    org$pandalanguage$pandac$IRNode* coerced2623;
    org$pandalanguage$pandac$IRNode* result2638;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2485 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2486 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2486->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2486 = $tmp2486->next;
    }
    $fn2488 $tmp2487 = $tmp2486->methods[0];
    panda$core$Int64 $tmp2489 = $tmp2487(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2490 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2485, $tmp2489);
    if ($tmp2490.value) {
    {
        panda$core$String* $tmp2491 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2492 = panda$core$String$convert$R$panda$core$String($tmp2491);
        panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, &$s2493);
        panda$core$Int64 $tmp2495 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Int64$wrapper* $tmp2496;
        $tmp2496 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2496->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2496->refCount = 1;
        $tmp2496->value = $tmp2495;
        panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2494, ((panda$core$Object*) $tmp2496));
        panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2498);
        panda$core$Int64 $tmp2500 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2500, ((panda$core$Int64) { 1 }));
        panda$core$Bit$wrapper* $tmp2502;
        $tmp2502 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp2502->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp2502->refCount = 1;
        $tmp2502->value = $tmp2501;
        ITable* $tmp2504 = ((panda$core$Formattable*) $tmp2502)->$class->itable;
        while ($tmp2504->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp2504 = $tmp2504->next;
        }
        $fn2506 $tmp2505 = $tmp2504->methods[0];
        panda$core$String* $tmp2507 = $tmp2505(((panda$core$Formattable*) $tmp2502), &$s2503);
        panda$core$String* $tmp2508 = panda$core$String$convert$R$panda$core$String($tmp2507);
        panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, &$s2509);
        ITable* $tmp2511 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2511->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2511 = $tmp2511->next;
        }
        $fn2513 $tmp2512 = $tmp2511->methods[0];
        panda$core$Int64 $tmp2514 = $tmp2512(((panda$collections$CollectionView*) p_args));
        panda$core$Int64$wrapper* $tmp2515;
        $tmp2515 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2515->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2515->refCount = 1;
        $tmp2515->value = $tmp2514;
        panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2510, ((panda$core$Object*) $tmp2515));
        panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, &$s2517);
        panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, $tmp2518);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2519);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2521 = (panda$collections$Array*) malloc(40);
    $tmp2521->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2521->refCount.value = 1;
    panda$collections$Array$init($tmp2521);
    finalArgs2520 = $tmp2521;
    bool $tmp2524 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2524) goto $l2525;
    panda$core$Bit $tmp2529;
    if (((panda$core$Bit) { p_target != NULL }).value) goto $l2526; else goto $l2527;
    $l2526:;
    panda$core$Bit $tmp2530 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->$rawValue, ((panda$core$Int64) { 10 }));
    $tmp2529 = $tmp2530;
    goto $l2528;
    $l2527:;
    $tmp2529 = ((panda$core$Bit) { true });
    goto $l2528;
    $l2528:;
    $tmp2524 = $tmp2529.value;
    $l2525:;
    panda$core$Bit $tmp2531 = { $tmp2524 };
    bool $tmp2523 = $tmp2531.value;
    if (!$tmp2523) goto $l2532;
    panda$core$Bit $tmp2533 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2534 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2533);
    $tmp2523 = $tmp2534.value;
    $l2532:;
    panda$core$Bit $tmp2535 = { $tmp2523 };
    if ($tmp2535.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2536 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2537 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2536);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2520, ((panda$core$Object*) $tmp2537));
    }
    }
    panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp2538.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2539 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2539)->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2540.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2541 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2541->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2541->refCount.value = 1;
                panda$core$Object* $tmp2543 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2544 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2543));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2541, ((panda$core$Int64) { 30 }), p_position, $tmp2544);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2520, ((panda$core$Object*) $tmp2541));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2545);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2551;
        if (((panda$core$Bit) { p_target != NULL }).value) goto $l2548; else goto $l2549;
        $l2548:;
        panda$core$Bit $tmp2552 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->$rawValue, ((panda$core$Int64) { 30 }));
        $tmp2551 = $tmp2552;
        goto $l2550;
        $l2549:;
        $tmp2551 = ((panda$core$Bit) { true });
        goto $l2550;
        $l2550:;
        bool $tmp2547 = $tmp2551.value;
        if (!$tmp2547) goto $l2553;
        panda$core$Bit $tmp2557;
        if (((panda$core$Bit) { p_target != NULL }).value) goto $l2554; else goto $l2555;
        $l2554:;
        panda$core$Bit $tmp2558 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->$rawValue, ((panda$core$Int64) { 32 }));
        $tmp2557 = $tmp2558;
        goto $l2556;
        $l2555:;
        $tmp2557 = ((panda$core$Bit) { true });
        goto $l2556;
        $l2556:;
        $tmp2547 = $tmp2557.value;
        $l2553:;
        panda$core$Bit $tmp2559 = { $tmp2547 };
        bool $tmp2546 = $tmp2559.value;
        if (!$tmp2546) goto $l2560;
        panda$core$Bit $tmp2564;
        if (((panda$core$Bit) { p_target != NULL }).value) goto $l2561; else goto $l2562;
        $l2561:;
        panda$core$Bit $tmp2565 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->$rawValue, ((panda$core$Int64) { 10 }));
        $tmp2564 = $tmp2565;
        goto $l2563;
        $l2562:;
        $tmp2564 = ((panda$core$Bit) { true });
        goto $l2563;
        $l2563:;
        $tmp2546 = $tmp2564.value;
        $l2560:;
        panda$core$Bit $tmp2566 = { $tmp2546 };
        if ($tmp2566.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2567);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2569 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2568 = $tmp2569.value;
    if (!$tmp2568) goto $l2570;
    $tmp2568 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2570:;
    panda$core$Bit $tmp2571 = { $tmp2568 };
    if ($tmp2571.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2573 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2573->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2573->refCount.value = 1;
        panda$core$Object* $tmp2575 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2576 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2575));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2573, ((panda$core$Int64) { 30 }), p_position, $tmp2576);
        selfNode2572 = $tmp2573;
        org$pandalanguage$pandac$Type* $tmp2577 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2578 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2572, $tmp2577);
        selfNode2572 = $tmp2578;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2572 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2520, ((panda$core$Object*) selfNode2572));
        panda$core$Object* $tmp2579 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2580 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2579));
        panda$core$Bit $tmp2581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2580);
        if ($tmp2581.value) {
        {
            panda$core$String* $tmp2583 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2582, $tmp2583);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2586);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2589 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2590 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2589);
    bool $tmp2588 = $tmp2590.value;
    if (!$tmp2588) goto $l2591;
    $tmp2588 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2591:;
    panda$core$Bit $tmp2592 = { $tmp2588 };
    bool $tmp2587 = $tmp2592.value;
    if (!$tmp2587) goto $l2593;
    panda$core$Bit $tmp2597;
    if (((panda$core$Bit) { p_target != NULL }).value) goto $l2594; else goto $l2595;
    $l2594:;
    panda$core$Bit $tmp2598 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->$rawValue, ((panda$core$Int64) { 34 }));
    $tmp2597 = $tmp2598;
    goto $l2596;
    $l2595:;
    $tmp2597 = ((panda$core$Bit) { true });
    goto $l2596;
    $l2596:;
    $tmp2587 = $tmp2597.value;
    $l2593:;
    panda$core$Bit $tmp2599 = { $tmp2587 };
    if ($tmp2599.value) {
    {
        panda$core$String* $tmp2601 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2600, $tmp2601);
        panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2604);
    }
    }
    }
    }
    ITable* $tmp2606 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2606->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2606 = $tmp2606->next;
    }
    $fn2608 $tmp2607 = $tmp2606->methods[0];
    panda$core$Int64 $tmp2609 = $tmp2607(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2605, ((panda$core$Int64) { 0 }), $tmp2609, ((panda$core$Bit) { false }));
    int64_t $tmp2611 = $tmp2605.min.value;
    panda$core$Int64 i2610 = { $tmp2611 };
    int64_t $tmp2613 = $tmp2605.max.value;
    bool $tmp2614 = $tmp2605.inclusive.value;
    if ($tmp2614) goto $l2621; else goto $l2622;
    $l2621:;
    if ($tmp2611 <= $tmp2613) goto $l2615; else goto $l2617;
    $l2622:;
    if ($tmp2611 < $tmp2613) goto $l2615; else goto $l2617;
    $l2615:;
    {
        ITable* $tmp2624 = p_args->$class->itable;
        while ($tmp2624->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2624 = $tmp2624->next;
        }
        $fn2626 $tmp2625 = $tmp2624->methods[0];
        panda$core$Object* $tmp2627 = $tmp2625(p_args, i2610);
        org$pandalanguage$pandac$Type* $tmp2628 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2610);
        org$pandalanguage$pandac$IRNode* $tmp2629 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2627), $tmp2628);
        coerced2623 = $tmp2629;
        if (((panda$core$Bit) { coerced2623 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2610);
        org$pandalanguage$pandac$IRNode* $tmp2631 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2623, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2630)->type);
        coerced2623 = $tmp2631;
        if (((panda$core$Bit) { coerced2623 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2520, ((panda$core$Object*) coerced2623));
    }
    $l2618:;
    int64_t $tmp2633 = $tmp2613 - i2610.value;
    if ($tmp2614) goto $l2634; else goto $l2635;
    $l2634:;
    if ((uint64_t) $tmp2633 >= 1) goto $l2632; else goto $l2617;
    $l2635:;
    if ((uint64_t) $tmp2633 > 1) goto $l2632; else goto $l2617;
    $l2632:;
    i2610.value += 1;
    goto $l2615;
    $l2617:;
    panda$core$Bit $tmp2640 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2639);
    if ($tmp2640.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2641 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2641->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2641->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2643 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$collections$ImmutableArray* $tmp2644 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(finalArgs2520);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2641, ((panda$core$Int64) { 5 }), p_position, $tmp2643, p_m, $tmp2644);
        result2638 = $tmp2641;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2645 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2645->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2645->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp2647 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(finalArgs2520);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2645, ((panda$core$Int64) { 5 }), p_position, p_m->value->returnType, p_m, $tmp2647);
        result2638 = $tmp2645;
        org$pandalanguage$pandac$Type* $tmp2648 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2649 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2638, p_position, ((panda$core$Bit) { false }), $tmp2648);
        result2638 = $tmp2649;
    }
    }
    return result2638;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2650 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2650;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$String* p_name, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2651;
    org$pandalanguage$pandac$IRNode* $match$1797_92654;
    org$pandalanguage$pandac$ChoiceEntry* rightEntry2656;
    org$pandalanguage$pandac$IRNode* leftValue2658;
    panda$core$UInt64 rightValue2663;
    org$pandalanguage$pandac$IRNode* leftValue2678;
    org$pandalanguage$pandac$IRNode* rightValue2683;
    panda$collections$Array* $tmp2652 = (panda$collections$Array*) malloc(40);
    $tmp2652->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2652->refCount.value = 1;
    panda$collections$Array$init($tmp2652);
    args2651 = $tmp2652;
    {
        $match$1797_92654 = p_right;
        panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1797_92654->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp2655.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp2657 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1797_92654->$data + 16));
            rightEntry2656 = *$tmp2657;
            org$pandalanguage$pandac$Position $tmp2660 = (($fn2659) p_left->$class->vtable[3])(p_left);
            org$pandalanguage$pandac$IRNode* $tmp2662 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2660, p_left, &$s2661);
            leftValue2658 = $tmp2662;
            panda$core$UInt64 $tmp2664 = panda$core$Int64$convert$R$panda$core$UInt64(rightEntry2656->rawValue);
            rightValue2663 = $tmp2664;
            org$pandalanguage$pandac$IRNode* $tmp2665 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2665->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2665->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2668 = (($fn2667) p_right->$class->vtable[3])(p_right);
            org$pandalanguage$pandac$Type* $tmp2669 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(rightValue2663);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2665, ((panda$core$Int64) { 16 }), $tmp2668, $tmp2669, rightValue2663);
            panda$collections$Array$add$panda$collections$Array$T(args2651, ((panda$core$Object*) $tmp2665));
            org$pandalanguage$pandac$IRNode* $tmp2670 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2658, p_name, ((panda$collections$ListView*) args2651));
            return $tmp2670;
        }
        }
        else {
        {
        }
        }
    }
    org$pandalanguage$pandac$Type* $tmp2672 = (($fn2671) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp2673 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp2672);
    org$pandalanguage$pandac$Type* $tmp2675 = (($fn2674) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp2676 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp2675);
    panda$core$Bit $tmp2677 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2673, $tmp2676);
    if ($tmp2677.value) {
    {
        org$pandalanguage$pandac$Position $tmp2680 = (($fn2679) p_left->$class->vtable[3])(p_left);
        org$pandalanguage$pandac$IRNode* $tmp2682 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2680, p_left, &$s2681);
        leftValue2678 = $tmp2682;
        PANDA_ASSERT(((panda$core$Bit) { leftValue2678 != NULL }).value);
        org$pandalanguage$pandac$Position $tmp2685 = (($fn2684) p_right->$class->vtable[3])(p_right);
        org$pandalanguage$pandac$IRNode* $tmp2687 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2685, p_right, &$s2686);
        rightValue2683 = $tmp2687;
        PANDA_ASSERT(((panda$core$Bit) { rightValue2683 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(args2651, ((panda$core$Object*) rightValue2683));
        org$pandalanguage$pandac$IRNode* $tmp2688 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2678, p_name, ((panda$collections$ListView*) args2651));
        return $tmp2688;
    }
    }
    org$pandalanguage$pandac$Position $tmp2690 = (($fn2689) p_left->$class->vtable[3])(p_left);
    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2691, p_name);
    panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, &$s2693);
    org$pandalanguage$pandac$Type* $tmp2696 = (($fn2695) p_left->$class->vtable[2])(p_left);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2694, ((panda$core$Object*) $tmp2696));
    panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
    org$pandalanguage$pandac$Type* $tmp2701 = (($fn2700) p_right->$class->vtable[2])(p_right);
    panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2699, ((panda$core$Object*) $tmp2701));
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2703);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2690, $tmp2704);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2705;
    org$pandalanguage$pandac$ClassDecl* cl2707;
    org$pandalanguage$pandac$IRNode* $match$1824_92708;
    org$pandalanguage$pandac$Type* type2710;
    org$pandalanguage$pandac$Symbol* s2730;
    org$pandalanguage$pandac$IRNode* ref2780;
    org$pandalanguage$pandac$IRNode* $tmp2706 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2705 = $tmp2706;
    if (((panda$core$Bit) { resolved2705 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$1824_92708 = resolved2705;
        panda$core$Bit $tmp2709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1824_92708->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2709.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2711 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1824_92708->$data + 16));
            type2710 = *$tmp2711;
            org$pandalanguage$pandac$ClassDecl* $tmp2712 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, type2710);
            cl2707 = $tmp2712;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2714 = (($fn2713) resolved2705->$class->vtable[2])(resolved2705);
            panda$core$Bit $tmp2715 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit($tmp2714);
            panda$core$Bit $tmp2716 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2715);
            if ($tmp2716.value) {
            {
                org$pandalanguage$pandac$Position $tmp2718 = (($fn2717) p_target->$class->vtable[3])(p_target);
                org$pandalanguage$pandac$Type* $tmp2722 = (($fn2721) resolved2705->$class->vtable[2])(resolved2705);
                panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2720, ((panda$core$Object*) $tmp2722));
                panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
                panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2719, $tmp2725);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2718, $tmp2726);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Type* $tmp2728 = (($fn2727) resolved2705->$class->vtable[2])(resolved2705);
            org$pandalanguage$pandac$ClassDecl* $tmp2729 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp2728);
            cl2707 = $tmp2729;
        }
        }
    }
    if (((panda$core$Bit) { cl2707 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2731 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2707);
    org$pandalanguage$pandac$Symbol* $tmp2732 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2731, p_name);
    s2730 = $tmp2732;
    if (((panda$core$Bit) { s2730 == NULL }).value) {
    {
        panda$core$Bit $tmp2735 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2734);
        bool $tmp2733 = $tmp2735.value;
        if ($tmp2733) goto $l2736;
        panda$core$Bit $tmp2740 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2739);
        bool $tmp2738 = $tmp2740.value;
        if (!$tmp2738) goto $l2741;
        panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl2707->classKind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp2738 = $tmp2742.value;
        $l2741:;
        panda$core$Bit $tmp2743 = { $tmp2738 };
        bool $tmp2737 = $tmp2743.value;
        if (!$tmp2737) goto $l2744;
        ITable* $tmp2745 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2745->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2745 = $tmp2745->next;
        }
        $fn2747 $tmp2746 = $tmp2745->methods[0];
        panda$core$Int64 $tmp2748 = $tmp2746(((panda$collections$CollectionView*) p_args));
        panda$core$Bit $tmp2749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2748, ((panda$core$Int64) { 1 }));
        $tmp2737 = $tmp2749.value;
        $l2744:;
        panda$core$Bit $tmp2750 = { $tmp2737 };
        $tmp2733 = $tmp2750.value;
        $l2736:;
        panda$core$Bit $tmp2751 = { $tmp2733 };
        if ($tmp2751.value) {
        {
            ITable* $tmp2752 = p_args->$class->itable;
            while ($tmp2752->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2752 = $tmp2752->next;
            }
            $fn2754 $tmp2753 = $tmp2752->methods[0];
            panda$core$Object* $tmp2755 = $tmp2753(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2756 = org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, resolved2705, p_name, ((org$pandalanguage$pandac$IRNode*) $tmp2755));
            return $tmp2756;
        }
        }
        org$pandalanguage$pandac$Position $tmp2758 = (($fn2757) resolved2705->$class->vtable[3])(resolved2705);
        panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2759, ((org$pandalanguage$pandac$Symbol*) cl2707)->name);
        panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, &$s2761);
        panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2762, p_name);
        panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2758, $tmp2765);
        return NULL;
    }
    }
    panda$core$Bit $tmp2767 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2730->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2766 = $tmp2767.value;
    if (!$tmp2766) goto $l2768;
    panda$core$Bit $tmp2769 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2730->kind, ((panda$core$Int64) { 205 }));
    $tmp2766 = $tmp2769.value;
    $l2768:;
    panda$core$Bit $tmp2770 = { $tmp2766 };
    if ($tmp2770.value) {
    {
        org$pandalanguage$pandac$Position $tmp2772 = (($fn2771) resolved2705->$class->vtable[3])(resolved2705);
        panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2773, ((org$pandalanguage$pandac$Symbol*) cl2707)->name);
        panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2775);
        panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, p_name);
        panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2772, $tmp2779);
        return NULL;
    }
    }
    org$pandalanguage$pandac$Position $tmp2782 = (($fn2781) resolved2705->$class->vtable[3])(resolved2705);
    org$pandalanguage$pandac$SymbolTable* $tmp2783 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2707);
    org$pandalanguage$pandac$IRNode* $tmp2784 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2782, resolved2705, s2730, $tmp2783);
    ref2780 = $tmp2784;
    if (((panda$core$Bit) { ref2780 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2785 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2780, p_args, p_expectedType);
    return $tmp2785;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2786 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2786;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* $match$1863_92787;
    org$pandalanguage$pandac$IRNode* target2789;
    org$pandalanguage$pandac$MethodRef* mref2791;
    org$pandalanguage$pandac$IRNode* target2797;
    panda$collections$ImmutableArray* mrefs2799;
    panda$collections$Array* methods2801;
    org$pandalanguage$pandac$MethodDecl* first2806;
    panda$core$MutableString* msg2808;
    panda$core$String* separator2819;
    panda$collections$Iterator* a$Iter2821;
    org$pandalanguage$pandac$IRNode* a2833;
    panda$collections$Array* types2855;
    panda$collections$Iterator* m$Iter2858;
    org$pandalanguage$pandac$MethodRef* m2870;
    org$pandalanguage$pandac$Type* type2886;
    org$pandalanguage$pandac$IRNode* target2888;
    org$pandalanguage$pandac$IRNode* initCall2893;
    org$pandalanguage$pandac$ChoiceEntry* ce2902;
    panda$collections$Array* finalArgs2940;
    panda$core$UInt64 value2943;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2950;
    org$pandalanguage$pandac$IRNode* arg2968;
    org$pandalanguage$pandac$IRNode* owner2981;
    org$pandalanguage$pandac$IRNode* initCall2987;
    org$pandalanguage$pandac$IRNode* resolved3005;
    {
        $match$1863_92787 = p_m;
        panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1863_92787->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp2788.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1863_92787->$data + 16));
            target2789 = *$tmp2790;
            org$pandalanguage$pandac$MethodRef** $tmp2792 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1863_92787->$data + 24));
            mref2791 = *$tmp2792;
            org$pandalanguage$pandac$Position $tmp2794 = (($fn2793) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$IRNode* $tmp2795 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2794, target2789, mref2791, p_args);
            return $tmp2795;
        }
        }
        else {
        panda$core$Bit $tmp2796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1863_92787->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2796.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2798 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1863_92787->$data + 16));
            target2797 = *$tmp2798;
            panda$collections$ImmutableArray** $tmp2800 = ((panda$collections$ImmutableArray**) ((char*) $match$1863_92787->$data + 24));
            mrefs2799 = *$tmp2800;
            panda$collections$Array* $tmp2802 = (panda$collections$Array*) malloc(40);
            $tmp2802->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2802->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2802, ((panda$collections$ListView*) mrefs2799));
            methods2801 = $tmp2802;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2801, p_args, p_expectedType);
            panda$core$Int64 $tmp2804 = panda$collections$Array$get_count$R$panda$core$Int64(methods2801);
            panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2804, ((panda$core$Int64) { 0 }));
            if ($tmp2805.value) {
            {
                panda$core$Object* $tmp2807 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(mrefs2799, ((panda$core$Int64) { 0 }));
                first2806 = ((org$pandalanguage$pandac$MethodRef*) $tmp2807)->value;
                panda$core$MutableString* $tmp2809 = (panda$core$MutableString*) malloc(48);
                $tmp2809->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2809->refCount.value = 1;
                panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2811, ((org$pandalanguage$pandac$Symbol*) first2806->owner)->name);
                panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2813);
                panda$core$String* $tmp2815 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2806)->name);
                panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
                panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, $tmp2817);
                panda$core$MutableString$init$panda$core$String($tmp2809, $tmp2818);
                msg2808 = $tmp2809;
                separator2819 = &$s2820;
                {
                    ITable* $tmp2822 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2822->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2822 = $tmp2822->next;
                    }
                    $fn2824 $tmp2823 = $tmp2822->methods[0];
                    panda$collections$Iterator* $tmp2825 = $tmp2823(((panda$collections$Iterable*) p_args));
                    a$Iter2821 = $tmp2825;
                    $l2826:;
                    ITable* $tmp2828 = a$Iter2821->$class->itable;
                    while ($tmp2828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2828 = $tmp2828->next;
                    }
                    $fn2830 $tmp2829 = $tmp2828->methods[0];
                    panda$core$Bit $tmp2831 = $tmp2829(a$Iter2821);
                    panda$core$Bit $tmp2832 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2831);
                    if (!$tmp2832.value) goto $l2827;
                    {
                        ITable* $tmp2834 = a$Iter2821->$class->itable;
                        while ($tmp2834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2834 = $tmp2834->next;
                        }
                        $fn2836 $tmp2835 = $tmp2834->methods[1];
                        panda$core$Object* $tmp2837 = $tmp2835(a$Iter2821);
                        a2833 = ((org$pandalanguage$pandac$IRNode*) $tmp2837);
                        panda$core$MutableString$append$panda$core$String(msg2808, separator2819);
                        org$pandalanguage$pandac$Type* $tmp2839 = (($fn2838) a2833->$class->vtable[2])(a2833);
                        panda$core$MutableString$append$panda$core$Object(msg2808, ((panda$core$Object*) $tmp2839));
                        separator2819 = &$s2840;
                    }
                    goto $l2826;
                    $l2827:;
                }
                panda$core$MutableString$append$panda$core$String(msg2808, &$s2841);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2842, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, &$s2844);
                    panda$core$MutableString$append$panda$core$String(msg2808, $tmp2845);
                }
                }
                org$pandalanguage$pandac$Position $tmp2847 = (($fn2846) p_m->$class->vtable[3])(p_m);
                panda$core$String* $tmp2848 = panda$core$MutableString$finish$R$panda$core$String(msg2808);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2847, $tmp2848);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2849 = panda$collections$Array$get_count$R$panda$core$Int64(methods2801);
            panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2849, ((panda$core$Int64) { 1 }));
            if ($tmp2850.value) {
            {
                org$pandalanguage$pandac$Position $tmp2852 = (($fn2851) p_m->$class->vtable[3])(p_m);
                panda$core$Object* $tmp2853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2801, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2854 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2852, target2797, ((org$pandalanguage$pandac$MethodRef*) $tmp2853), p_args);
                return $tmp2854;
            }
            }
            panda$collections$Array* $tmp2856 = (panda$collections$Array*) malloc(40);
            $tmp2856->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2856->refCount.value = 1;
            panda$collections$Array$init($tmp2856);
            types2855 = $tmp2856;
            {
                ITable* $tmp2859 = ((panda$collections$Iterable*) methods2801)->$class->itable;
                while ($tmp2859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2859 = $tmp2859->next;
                }
                $fn2861 $tmp2860 = $tmp2859->methods[0];
                panda$collections$Iterator* $tmp2862 = $tmp2860(((panda$collections$Iterable*) methods2801));
                m$Iter2858 = $tmp2862;
                $l2863:;
                ITable* $tmp2865 = m$Iter2858->$class->itable;
                while ($tmp2865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2865 = $tmp2865->next;
                }
                $fn2867 $tmp2866 = $tmp2865->methods[0];
                panda$core$Bit $tmp2868 = $tmp2866(m$Iter2858);
                panda$core$Bit $tmp2869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2868);
                if (!$tmp2869.value) goto $l2864;
                {
                    ITable* $tmp2871 = m$Iter2858->$class->itable;
                    while ($tmp2871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2871 = $tmp2871->next;
                    }
                    $fn2873 $tmp2872 = $tmp2871->methods[1];
                    panda$core$Object* $tmp2874 = $tmp2872(m$Iter2858);
                    m2870 = ((org$pandalanguage$pandac$MethodRef*) $tmp2874);
                    org$pandalanguage$pandac$Type* $tmp2875 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2870);
                    panda$collections$Array$add$panda$collections$Array$T(types2855, ((panda$core$Object*) $tmp2875));
                }
                goto $l2863;
                $l2864:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2876 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2876->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2876->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2879 = (($fn2878) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$Type* $tmp2880 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2880->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2880->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2880, ((panda$collections$ListView*) types2855));
            panda$collections$ImmutableArray* $tmp2882 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(methods2801);
            panda$collections$ImmutableArray* $tmp2883 = (panda$collections$ImmutableArray*) malloc(40);
            $tmp2883->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
            $tmp2883->refCount.value = 1;
            panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp2883, p_args);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2876, ((panda$core$Int64) { 37 }), $tmp2879, $tmp2880, target2797, $tmp2882, $tmp2883);
            return $tmp2876;
        }
        }
        else {
        panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1863_92787->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2885.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2887 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1863_92787->$data + 16));
            type2886 = *$tmp2887;
            org$pandalanguage$pandac$IRNode* $tmp2889 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2889->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2889->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2892 = (($fn2891) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2889, ((panda$core$Int64) { 10 }), $tmp2892, type2886);
            target2888 = $tmp2889;
            org$pandalanguage$pandac$IRNode* $tmp2895 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2888, &$s2894, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2896 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2895);
            initCall2893 = $tmp2896;
            if (((panda$core$Bit) { initCall2893 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2897 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2897->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2897->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2900 = (($fn2899) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode($tmp2897, ((panda$core$Int64) { 9 }), $tmp2900, type2886, initCall2893);
            return $tmp2897;
        }
        }
        else {
        panda$core$Bit $tmp2901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1863_92787->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp2901.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp2903 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1863_92787->$data + 16));
            ce2902 = *$tmp2903;
            panda$core$Int64 $tmp2904 = panda$collections$Array$get_count$R$panda$core$Int64(ce2902->fields);
            ITable* $tmp2905 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2905->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2905 = $tmp2905->next;
            }
            $fn2907 $tmp2906 = $tmp2905->methods[0];
            panda$core$Int64 $tmp2908 = $tmp2906(((panda$collections$CollectionView*) p_args));
            panda$core$Bit $tmp2909 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2904, $tmp2908);
            if ($tmp2909.value) {
            {
                org$pandalanguage$pandac$Position $tmp2911 = (($fn2910) p_m->$class->vtable[3])(p_m);
                panda$core$String* $tmp2913 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2912, ((panda$core$Object*) p_m));
                panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, &$s2914);
                panda$core$Int64 $tmp2916 = panda$collections$Array$get_count$R$panda$core$Int64(ce2902->fields);
                panda$core$Int64$wrapper* $tmp2917;
                $tmp2917 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2917->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2917->refCount = 1;
                $tmp2917->value = $tmp2916;
                panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2915, ((panda$core$Object*) $tmp2917));
                panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
                panda$core$Int64 $tmp2922 = panda$collections$Array$get_count$R$panda$core$Int64(ce2902->fields);
                panda$core$Bit $tmp2923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2922, ((panda$core$Int64) { 1 }));
                panda$core$Bit$wrapper* $tmp2924;
                $tmp2924 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp2924->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp2924->refCount = 1;
                $tmp2924->value = $tmp2923;
                ITable* $tmp2926 = ((panda$core$Formattable*) $tmp2924)->$class->itable;
                while ($tmp2926->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                    $tmp2926 = $tmp2926->next;
                }
                $fn2928 $tmp2927 = $tmp2926->methods[0];
                panda$core$String* $tmp2929 = $tmp2927(((panda$core$Formattable*) $tmp2924), &$s2925);
                panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2921, $tmp2929);
                panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
                panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, $tmp2932);
                ITable* $tmp2934 = ((panda$collections$CollectionView*) p_args)->$class->itable;
                while ($tmp2934->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2934 = $tmp2934->next;
                }
                $fn2936 $tmp2935 = $tmp2934->methods[0];
                panda$core$Int64 $tmp2937 = $tmp2935(((panda$collections$CollectionView*) p_args));
                panda$core$Int64$wrapper* $tmp2938;
                $tmp2938 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2938->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2938->refCount = 1;
                $tmp2938->value = $tmp2937;
                panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2933, ((panda$core$Object*) $tmp2938));
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp2911, $tmp2939);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, ce2902);
            panda$collections$Array* $tmp2941 = (panda$collections$Array*) malloc(40);
            $tmp2941->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2941->refCount.value = 1;
            panda$collections$Array$init($tmp2941);
            finalArgs2940 = $tmp2941;
            panda$core$UInt64 $tmp2944 = panda$core$Int64$convert$R$panda$core$UInt64(ce2902->rawValue);
            value2943 = $tmp2944;
            org$pandalanguage$pandac$IRNode* $tmp2945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2945->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2948 = (($fn2947) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$Type* $tmp2949 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2943);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2945, ((panda$core$Int64) { 16 }), $tmp2948, $tmp2949, value2943);
            panda$collections$Array$add$panda$collections$Array$T(finalArgs2940, ((panda$core$Object*) $tmp2945));
            ITable* $tmp2951 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2951->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2951 = $tmp2951->next;
            }
            $fn2953 $tmp2952 = $tmp2951->methods[0];
            panda$core$Int64 $tmp2954 = $tmp2952(((panda$collections$CollectionView*) p_args));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2950, ((panda$core$Int64) { 0 }), $tmp2954, ((panda$core$Bit) { false }));
            int64_t $tmp2956 = $tmp2950.min.value;
            panda$core$Int64 i2955 = { $tmp2956 };
            int64_t $tmp2958 = $tmp2950.max.value;
            bool $tmp2959 = $tmp2950.inclusive.value;
            if ($tmp2959) goto $l2966; else goto $l2967;
            $l2966:;
            if ($tmp2956 <= $tmp2958) goto $l2960; else goto $l2962;
            $l2967:;
            if ($tmp2956 < $tmp2958) goto $l2960; else goto $l2962;
            $l2960:;
            {
                ITable* $tmp2969 = p_args->$class->itable;
                while ($tmp2969->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2969 = $tmp2969->next;
                }
                $fn2971 $tmp2970 = $tmp2969->methods[0];
                panda$core$Object* $tmp2972 = $tmp2970(p_args, i2955);
                panda$core$Object* $tmp2973 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce2902->fields, i2955);
                org$pandalanguage$pandac$IRNode* $tmp2974 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2972), ((org$pandalanguage$pandac$Type*) $tmp2973));
                arg2968 = $tmp2974;
                if (((panda$core$Bit) { arg2968 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2940, ((panda$core$Object*) arg2968));
            }
            $l2963:;
            int64_t $tmp2976 = $tmp2958 - i2955.value;
            if ($tmp2959) goto $l2977; else goto $l2978;
            $l2977:;
            if ((uint64_t) $tmp2976 >= 1) goto $l2975; else goto $l2962;
            $l2978:;
            if ((uint64_t) $tmp2976 > 1) goto $l2975; else goto $l2962;
            $l2975:;
            i2955.value += 1;
            goto $l2960;
            $l2962:;
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ce2902->initMethod);
            org$pandalanguage$pandac$IRNode* $tmp2982 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2982->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2982->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2985 = (($fn2984) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$Type* $tmp2986 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(ce2902->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2982, ((panda$core$Int64) { 34 }), $tmp2985, $tmp2986);
            owner2981 = $tmp2982;
            org$pandalanguage$pandac$Position $tmp2989 = (($fn2988) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$IRNode* $tmp2990 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2990->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2990->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp2993 = (($fn2992) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$Type* $tmp2994 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(ce2902->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2990, ((panda$core$Int64) { 10 }), $tmp2993, $tmp2994);
            org$pandalanguage$pandac$MethodRef* $tmp2995 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
            $tmp2995->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
            $tmp2995->refCount.value = 1;
            panda$collections$Array* $tmp2997 = (panda$collections$Array*) malloc(40);
            $tmp2997->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2997->refCount.value = 1;
            panda$collections$Array$init($tmp2997);
            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2995, ce2902->initMethod, ((panda$collections$ListView*) $tmp2997));
            org$pandalanguage$pandac$IRNode* $tmp2999 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2989, $tmp2990, $tmp2995, ((panda$collections$ListView*) finalArgs2940));
            initCall2987 = $tmp2999;
            org$pandalanguage$pandac$IRNode* $tmp3000 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3000->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3000->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp3003 = (($fn3002) p_m->$class->vtable[3])(p_m);
            org$pandalanguage$pandac$Type* $tmp3004 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(ce2902->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode($tmp3000, ((panda$core$Int64) { 9 }), $tmp3003, $tmp3004, initCall2987);
            return $tmp3000;
        }
        }
        else {
        {
            org$pandalanguage$pandac$IRNode* $tmp3006 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved3005 = $tmp3006;
            if (((panda$core$Bit) { resolved3005 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$Position $tmp3008 = (($fn3007) resolved3005->$class->vtable[3])(resolved3005);
            org$pandalanguage$pandac$Type* $tmp3011 = (($fn3010) resolved3005->$class->vtable[2])(resolved3005);
            panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3009, ((panda$core$Object*) $tmp3011));
            panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp3008, $tmp3014);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes3015;
    panda$core$MutableString* typeName3018;
    panda$core$String* separator3022;
    panda$collections$Iterator* p$Iter3024;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3036;
    panda$core$Int64 kind3042;
    panda$core$Char8 $tmp3048;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp3016 = (panda$collections$Array*) malloc(40);
    $tmp3016->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3016->refCount.value = 1;
    panda$collections$Array$init($tmp3016);
    subtypes3015 = $tmp3016;
    panda$core$MutableString* $tmp3019 = (panda$core$MutableString*) malloc(48);
    $tmp3019->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp3019->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp3019, &$s3021);
    typeName3018 = $tmp3019;
    separator3022 = &$s3023;
    {
        ITable* $tmp3025 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3025 = $tmp3025->next;
        }
        $fn3027 $tmp3026 = $tmp3025->methods[0];
        panda$collections$Iterator* $tmp3028 = $tmp3026(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3024 = $tmp3028;
        $l3029:;
        ITable* $tmp3031 = p$Iter3024->$class->itable;
        while ($tmp3031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3031 = $tmp3031->next;
        }
        $fn3033 $tmp3032 = $tmp3031->methods[0];
        panda$core$Bit $tmp3034 = $tmp3032(p$Iter3024);
        panda$core$Bit $tmp3035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3034);
        if (!$tmp3035.value) goto $l3030;
        {
            ITable* $tmp3037 = p$Iter3024->$class->itable;
            while ($tmp3037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3037 = $tmp3037->next;
            }
            $fn3039 $tmp3038 = $tmp3037->methods[1];
            panda$core$Object* $tmp3040 = $tmp3038(p$Iter3024);
            p3036 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3040);
            panda$core$MutableString$append$panda$core$String(typeName3018, separator3022);
            panda$core$MutableString$append$panda$core$String(typeName3018, ((org$pandalanguage$pandac$Symbol*) p3036->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes3015, ((panda$core$Object*) p3036->type));
            separator3022 = &$s3041;
        }
        goto $l3029;
        $l3030:;
    }
    panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp3043.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName3018, &$s3044);
        kind3042 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName3018, &$s3045);
        kind3042 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes3015, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp3046 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3047 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp3046);
    if ($tmp3047.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName3018, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp3048, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName3018, $tmp3048);
    org$pandalanguage$pandac$Type* $tmp3049 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3049->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3049->refCount.value = 1;
    panda$core$String* $tmp3051 = panda$core$MutableString$finish$R$panda$core$String(typeName3018);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3049, $tmp3051, kind3042, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes3015), ((panda$core$Bit) { true }));
    return $tmp3049;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes3052;
    panda$core$MutableString* typeName3055;
    panda$collections$Iterator* p$Iter3059;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3071;
    panda$core$Int64 kind3077;
    panda$core$Char8 $tmp3083;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp3053 = (panda$collections$Array*) malloc(40);
    $tmp3053->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3053->refCount.value = 1;
    panda$collections$Array$init($tmp3053);
    subtypes3052 = $tmp3053;
    panda$core$MutableString* $tmp3056 = (panda$core$MutableString*) malloc(48);
    $tmp3056->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp3056->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp3056, &$s3058);
    typeName3055 = $tmp3056;
    panda$core$MutableString$append$panda$core$String(typeName3055, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes3052, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp3060 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3060->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3060 = $tmp3060->next;
        }
        $fn3062 $tmp3061 = $tmp3060->methods[0];
        panda$collections$Iterator* $tmp3063 = $tmp3061(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3059 = $tmp3063;
        $l3064:;
        ITable* $tmp3066 = p$Iter3059->$class->itable;
        while ($tmp3066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3066 = $tmp3066->next;
        }
        $fn3068 $tmp3067 = $tmp3066->methods[0];
        panda$core$Bit $tmp3069 = $tmp3067(p$Iter3059);
        panda$core$Bit $tmp3070 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3069);
        if (!$tmp3070.value) goto $l3065;
        {
            ITable* $tmp3072 = p$Iter3059->$class->itable;
            while ($tmp3072->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3072 = $tmp3072->next;
            }
            $fn3074 $tmp3073 = $tmp3072->methods[1];
            panda$core$Object* $tmp3075 = $tmp3073(p$Iter3059);
            p3071 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3075);
            panda$core$MutableString$append$panda$core$String(typeName3055, &$s3076);
            panda$core$MutableString$append$panda$core$String(typeName3055, ((org$pandalanguage$pandac$Symbol*) p3071->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes3052, ((panda$core$Object*) p3071->type));
        }
        goto $l3064;
        $l3065:;
    }
    panda$core$Bit $tmp3078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp3078.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName3055, &$s3079);
        kind3077 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName3055, &$s3080);
        kind3077 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes3052, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp3081 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3082 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp3081);
    if ($tmp3082.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName3055, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp3083, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName3055, $tmp3083);
    org$pandalanguage$pandac$Type* $tmp3084 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3084->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3084->refCount.value = 1;
    panda$core$String* $tmp3086 = panda$core$MutableString$finish$R$panda$core$String(typeName3055);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3084, $tmp3086, kind3077, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes3052), ((panda$core$Bit) { true }));
    return $tmp3084;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited3087;
    org$pandalanguage$pandac$MethodDecl* $tmp3088 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited3087 = $tmp3088;
    if (((panda$core$Bit) { inherited3087 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp3089 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp3089;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3090 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited3087);
    return $tmp3090;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp3091 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp3092 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp3091);
    return $tmp3092;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited3093;
    org$pandalanguage$pandac$MethodDecl* $tmp3094 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited3093 = $tmp3094;
    if (((panda$core$Bit) { inherited3093 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp3095 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp3095;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3096 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited3093, p_selfType);
    return $tmp3096;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(org$pandalanguage$pandac$parser$Token$Kind p_op) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2014_93097;
    {
        $match$2014_93097 = p_op;
        panda$core$Bit $tmp3098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp3098.value) {
        {
            return &$s3099;
        }
        }
        else {
        panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp3100.value) {
        {
            return &$s3101;
        }
        }
        else {
        panda$core$Bit $tmp3102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp3102.value) {
        {
            return &$s3103;
        }
        }
        else {
        panda$core$Bit $tmp3104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp3104.value) {
        {
            return &$s3105;
        }
        }
        else {
        panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp3106.value) {
        {
            return &$s3107;
        }
        }
        else {
        panda$core$Bit $tmp3108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp3108.value) {
        {
            return &$s3109;
        }
        }
        else {
        panda$core$Bit $tmp3110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 57 }));
        if ($tmp3110.value) {
        {
            return &$s3111;
        }
        }
        else {
        panda$core$Bit $tmp3112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp3112.value) {
        {
            return &$s3113;
        }
        }
        else {
        panda$core$Bit $tmp3114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp3114.value) {
        {
            return &$s3115;
        }
        }
        else {
        panda$core$Bit $tmp3116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp3116.value) {
        {
            return &$s3117;
        }
        }
        else {
        panda$core$Bit $tmp3118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp3118.value) {
        {
            return &$s3119;
        }
        }
        else {
        panda$core$Bit $tmp3120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp3120.value) {
        {
            return &$s3121;
        }
        }
        else {
        panda$core$Bit $tmp3122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp3122.value) {
        {
            return &$s3123;
        }
        }
        else {
        panda$core$Bit $tmp3124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp3124.value) {
        {
            return &$s3125;
        }
        }
        else {
        panda$core$Bit $tmp3126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp3126.value) {
        {
            return &$s3127;
        }
        }
        else {
        panda$core$Bit $tmp3128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp3128.value) {
        {
            return &$s3129;
        }
        }
        else {
        panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp3130.value) {
        {
            return &$s3131;
        }
        }
        else {
        panda$core$Bit $tmp3132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 70 }));
        if ($tmp3132.value) {
        {
            return &$s3133;
        }
        }
        else {
        panda$core$Bit $tmp3134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 71 }));
        if ($tmp3134.value) {
        {
            return &$s3135;
        }
        }
        else {
        panda$core$Bit $tmp3136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp3136.value) {
        {
            return &$s3137;
        }
        }
        else {
        panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp3138.value) {
        {
            return &$s3139;
        }
        }
        else {
        panda$core$Bit $tmp3140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp3140.value) {
        {
            return &$s3141;
        }
        }
        else {
        panda$core$Bit $tmp3142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3142.value) {
        {
            return &$s3143;
        }
        }
        else {
        panda$core$Bit $tmp3144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp3144.value) {
        {
            return &$s3145;
        }
        }
        else {
        panda$core$Bit $tmp3146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 73 }));
        if ($tmp3146.value) {
        {
            return &$s3147;
        }
        }
        else {
        panda$core$Bit $tmp3148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp3148.value) {
        {
            return &$s3149;
        }
        }
        else {
        panda$core$Bit $tmp3150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp3150.value) {
        {
            return &$s3151;
        }
        }
        else {
        panda$core$Bit $tmp3152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2014_93097.$rawValue, ((panda$core$Int64) { 89 }));
        if ($tmp3152.value) {
        {
            return &$s3153;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$2050_93154;
    {
        $match$2050_93154 = p_op;
        panda$core$Bit $tmp3169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 74 }));
        bool $tmp3168 = $tmp3169.value;
        if ($tmp3168) goto $l3170;
        panda$core$Bit $tmp3171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp3168 = $tmp3171.value;
        $l3170:;
        panda$core$Bit $tmp3172 = { $tmp3168 };
        bool $tmp3167 = $tmp3172.value;
        if ($tmp3167) goto $l3173;
        panda$core$Bit $tmp3174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp3167 = $tmp3174.value;
        $l3173:;
        panda$core$Bit $tmp3175 = { $tmp3167 };
        bool $tmp3166 = $tmp3175.value;
        if ($tmp3166) goto $l3176;
        panda$core$Bit $tmp3177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp3166 = $tmp3177.value;
        $l3176:;
        panda$core$Bit $tmp3178 = { $tmp3166 };
        bool $tmp3165 = $tmp3178.value;
        if ($tmp3165) goto $l3179;
        panda$core$Bit $tmp3180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp3165 = $tmp3180.value;
        $l3179:;
        panda$core$Bit $tmp3181 = { $tmp3165 };
        bool $tmp3164 = $tmp3181.value;
        if ($tmp3164) goto $l3182;
        panda$core$Bit $tmp3183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp3164 = $tmp3183.value;
        $l3182:;
        panda$core$Bit $tmp3184 = { $tmp3164 };
        bool $tmp3163 = $tmp3184.value;
        if ($tmp3163) goto $l3185;
        panda$core$Bit $tmp3186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp3163 = $tmp3186.value;
        $l3185:;
        panda$core$Bit $tmp3187 = { $tmp3163 };
        bool $tmp3162 = $tmp3187.value;
        if ($tmp3162) goto $l3188;
        panda$core$Bit $tmp3189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp3162 = $tmp3189.value;
        $l3188:;
        panda$core$Bit $tmp3190 = { $tmp3162 };
        bool $tmp3161 = $tmp3190.value;
        if ($tmp3161) goto $l3191;
        panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp3161 = $tmp3192.value;
        $l3191:;
        panda$core$Bit $tmp3193 = { $tmp3161 };
        bool $tmp3160 = $tmp3193.value;
        if ($tmp3160) goto $l3194;
        panda$core$Bit $tmp3195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp3160 = $tmp3195.value;
        $l3194:;
        panda$core$Bit $tmp3196 = { $tmp3160 };
        bool $tmp3159 = $tmp3196.value;
        if ($tmp3159) goto $l3197;
        panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp3159 = $tmp3198.value;
        $l3197:;
        panda$core$Bit $tmp3199 = { $tmp3159 };
        bool $tmp3158 = $tmp3199.value;
        if ($tmp3158) goto $l3200;
        panda$core$Bit $tmp3201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp3158 = $tmp3201.value;
        $l3200:;
        panda$core$Bit $tmp3202 = { $tmp3158 };
        bool $tmp3157 = $tmp3202.value;
        if ($tmp3157) goto $l3203;
        panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp3157 = $tmp3204.value;
        $l3203:;
        panda$core$Bit $tmp3205 = { $tmp3157 };
        bool $tmp3156 = $tmp3205.value;
        if ($tmp3156) goto $l3206;
        panda$core$Bit $tmp3207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp3156 = $tmp3207.value;
        $l3206:;
        panda$core$Bit $tmp3208 = { $tmp3156 };
        bool $tmp3155 = $tmp3208.value;
        if ($tmp3155) goto $l3209;
        panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2050_93154.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp3155 = $tmp3210.value;
        $l3209:;
        panda$core$Bit $tmp3211 = { $tmp3155 };
        if ($tmp3211.value) {
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
    org$pandalanguage$pandac$parser$Token$Kind $match$2064_93212;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3214;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3216;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3218;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3220;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3222;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3224;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3226;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3228;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3230;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3232;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3234;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3236;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3238;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3240;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3242;
    {
        $match$2064_93212 = p_op;
        panda$core$Bit $tmp3213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 74 }));
        if ($tmp3213.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3214, ((panda$core$Int64) { 51 }));
            return $tmp3214;
        }
        }
        else {
        panda$core$Bit $tmp3215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 75 }));
        if ($tmp3215.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3216, ((panda$core$Int64) { 52 }));
            return $tmp3216;
        }
        }
        else {
        panda$core$Bit $tmp3217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 76 }));
        if ($tmp3217.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3218, ((panda$core$Int64) { 53 }));
            return $tmp3218;
        }
        }
        else {
        panda$core$Bit $tmp3219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 77 }));
        if ($tmp3219.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3220, ((panda$core$Int64) { 54 }));
            return $tmp3220;
        }
        }
        else {
        panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 79 }));
        if ($tmp3221.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3222, ((panda$core$Int64) { 55 }));
            return $tmp3222;
        }
        }
        else {
        panda$core$Bit $tmp3223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 78 }));
        if ($tmp3223.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3224, ((panda$core$Int64) { 56 }));
            return $tmp3224;
        }
        }
        else {
        panda$core$Bit $tmp3225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 80 }));
        if ($tmp3225.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3226, ((panda$core$Int64) { 57 }));
            return $tmp3226;
        }
        }
        else {
        panda$core$Bit $tmp3227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 81 }));
        if ($tmp3227.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3228, ((panda$core$Int64) { 68 }));
            return $tmp3228;
        }
        }
        else {
        panda$core$Bit $tmp3229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 82 }));
        if ($tmp3229.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3230, ((panda$core$Int64) { 69 }));
            return $tmp3230;
        }
        }
        else {
        panda$core$Bit $tmp3231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 83 }));
        if ($tmp3231.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3232, ((panda$core$Int64) { 66 }));
            return $tmp3232;
        }
        }
        else {
        panda$core$Bit $tmp3233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 84 }));
        if ($tmp3233.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3234, ((panda$core$Int64) { 67 }));
            return $tmp3234;
        }
        }
        else {
        panda$core$Bit $tmp3235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 85 }));
        if ($tmp3235.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3236, ((panda$core$Int64) { 70 }));
            return $tmp3236;
        }
        }
        else {
        panda$core$Bit $tmp3237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 86 }));
        if ($tmp3237.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3238, ((panda$core$Int64) { 71 }));
            return $tmp3238;
        }
        }
        else {
        panda$core$Bit $tmp3239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 87 }));
        if ($tmp3239.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3240, ((panda$core$Int64) { 72 }));
            return $tmp3240;
        }
        }
        else {
        panda$core$Bit $tmp3241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2064_93212.$rawValue, ((panda$core$Int64) { 88 }));
        if ($tmp3241.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3242, ((panda$core$Int64) { 1 }));
            return $tmp3242;
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
    org$pandalanguage$pandac$IRNode* $match$2086_93243;
    org$pandalanguage$pandac$IRNode* value3245;
    panda$core$Bit explicit3247;
    org$pandalanguage$pandac$IRNode* value3261;
    {
        $match$2086_93243 = p_expr;
        panda$core$Bit $tmp3244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2086_93243->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3244.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3246 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$2086_93243->$data + 16));
            value3245 = *$tmp3246;
            panda$core$Bit* $tmp3248 = ((panda$core$Bit*) ((char*) $match$2086_93243->$data + 32));
            explicit3247 = *$tmp3248;
            panda$core$Bit $tmp3249 = panda$core$Bit$$NOT$R$panda$core$Bit(explicit3247);
            if ($tmp3249.value) {
            {
                panda$core$Bit $tmp3250 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, value3245);
                return $tmp3250;
            }
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp3253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2086_93243->$rawValue, ((panda$core$Int64) { 14 }));
        bool $tmp3252 = $tmp3253.value;
        if ($tmp3252) goto $l3254;
        panda$core$Bit $tmp3255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2086_93243->$rawValue, ((panda$core$Int64) { 41 }));
        $tmp3252 = $tmp3255.value;
        $l3254:;
        panda$core$Bit $tmp3256 = { $tmp3252 };
        bool $tmp3251 = $tmp3256.value;
        if ($tmp3251) goto $l3257;
        panda$core$Bit $tmp3258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2086_93243->$rawValue, ((panda$core$Int64) { 8 }));
        $tmp3251 = $tmp3258.value;
        $l3257:;
        panda$core$Bit $tmp3259 = { $tmp3251 };
        if ($tmp3259.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp3260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2086_93243->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3260.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3262 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$2086_93243->$data + 0));
            value3261 = *$tmp3262;
            panda$core$Bit $tmp3263 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, value3261);
            return $tmp3263;
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
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l3264;
    panda$core$Int64 r3265;
    org$pandalanguage$pandac$IRNode* $match$2106_93266;
    panda$core$UInt64 int3268;
    panda$core$UInt64 int3274;
    org$pandalanguage$pandac$IRNode* $match$2117_93277;
    panda$core$UInt64 int3279;
    panda$core$UInt64 int3285;
    org$pandalanguage$pandac$parser$Token$Kind $match$2128_93288;
    panda$core$UInt64 v3290;
    panda$core$UInt64 v3297;
    panda$core$UInt64 v3304;
    panda$core$UInt64 v3311;
    panda$core$UInt64 v3318;
    panda$core$UInt64 v3355;
    panda$core$UInt64 v3362;
    panda$core$UInt64 v3369;
    panda$core$UInt64 v3376;
    panda$core$UInt64 v3383;
    {
        $match$2106_93266 = p_left;
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2106_93266->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3267.value) {
        {
            panda$core$UInt64* $tmp3269 = ((panda$core$UInt64*) ((char*) $match$2106_93266->$data + 24));
            int3268 = *$tmp3269;
            panda$core$UInt64 $tmp3270 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
            panda$core$Bit $tmp3271 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(int3268, $tmp3270);
            if ($tmp3271.value) {
            {
                return NULL;
            }
            }
            panda$core$Int64 $tmp3272 = panda$core$UInt64$convert$R$panda$core$Int64(int3268);
            l3264 = $tmp3272;
        }
        }
        else {
        panda$core$Bit $tmp3273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2106_93266->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3273.value) {
        {
            panda$core$UInt64* $tmp3275 = ((panda$core$UInt64*) ((char*) $match$2106_93266->$data + 24));
            int3274 = *$tmp3275;
            panda$core$Int64 $tmp3276 = panda$core$UInt64$convert$R$panda$core$Int64(int3274);
            l3264 = $tmp3276;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
    }
    {
        $match$2117_93277 = p_right;
        panda$core$Bit $tmp3278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2117_93277->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3278.value) {
        {
            panda$core$UInt64* $tmp3280 = ((panda$core$UInt64*) ((char*) $match$2117_93277->$data + 24));
            int3279 = *$tmp3280;
            panda$core$UInt64 $tmp3281 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
            panda$core$Bit $tmp3282 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(int3279, $tmp3281);
            if ($tmp3282.value) {
            {
                return NULL;
            }
            }
            panda$core$Int64 $tmp3283 = panda$core$UInt64$convert$R$panda$core$Int64(int3279);
            r3265 = $tmp3283;
        }
        }
        else {
        panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2117_93277->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3284.value) {
        {
            panda$core$UInt64* $tmp3286 = ((panda$core$UInt64*) ((char*) $match$2117_93277->$data + 24));
            int3285 = *$tmp3286;
            panda$core$Int64 $tmp3287 = panda$core$UInt64$convert$R$panda$core$Int64(int3285);
            r3265 = $tmp3287;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
    }
    {
        $match$2128_93288 = p_op;
        panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp3289.value) {
        {
            panda$core$Int64 $tmp3291 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3292 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3291);
            v3290 = $tmp3292;
            org$pandalanguage$pandac$IRNode* $tmp3293 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3293->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3293->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3295 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3290);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3293, ((panda$core$Int64) { 16 }), p_position, $tmp3295, v3290);
            return $tmp3293;
        }
        }
        else {
        panda$core$Bit $tmp3296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp3296.value) {
        {
            panda$core$Int64 $tmp3298 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3299 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3298);
            v3297 = $tmp3299;
            org$pandalanguage$pandac$IRNode* $tmp3300 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3300->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3300->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3302 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3297);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3300, ((panda$core$Int64) { 16 }), p_position, $tmp3302, v3297);
            return $tmp3300;
        }
        }
        else {
        panda$core$Bit $tmp3303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp3303.value) {
        {
            panda$core$Int64 $tmp3305 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3306 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3305);
            v3304 = $tmp3306;
            org$pandalanguage$pandac$IRNode* $tmp3307 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3307->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3309 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3304);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3307, ((panda$core$Int64) { 16 }), p_position, $tmp3309, v3304);
            return $tmp3307;
        }
        }
        else {
        panda$core$Bit $tmp3310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp3310.value) {
        {
            panda$core$Int64 $tmp3312 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3313 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3312);
            v3311 = $tmp3313;
            org$pandalanguage$pandac$IRNode* $tmp3314 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3314->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3314->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3316 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3311);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3314, ((panda$core$Int64) { 16 }), p_position, $tmp3316, v3311);
            return $tmp3314;
        }
        }
        else {
        panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp3317.value) {
        {
            panda$core$Int64 $tmp3319 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3320 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3319);
            v3318 = $tmp3320;
            org$pandalanguage$pandac$IRNode* $tmp3321 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3321->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3321->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3323 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3318);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3321, ((panda$core$Int64) { 16 }), p_position, $tmp3323, v3318);
            return $tmp3321;
        }
        }
        else {
        panda$core$Bit $tmp3324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp3324.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3325 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3325->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3325->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3327 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l3264, r3265);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3325, ((panda$core$Int64) { 2 }), p_position, $tmp3327, $tmp3328);
            return $tmp3325;
        }
        }
        else {
        panda$core$Bit $tmp3329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp3329.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3330 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3330->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3330->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3332 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3333 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l3264, r3265);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3330, ((panda$core$Int64) { 2 }), p_position, $tmp3332, $tmp3333);
            return $tmp3330;
        }
        }
        else {
        panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp3334.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3335 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3335->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3335->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3337 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3338 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l3264, r3265);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3335, ((panda$core$Int64) { 2 }), p_position, $tmp3337, $tmp3338);
            return $tmp3335;
        }
        }
        else {
        panda$core$Bit $tmp3339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp3339.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3340 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3340->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3342 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3343 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l3264, r3265);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3340, ((panda$core$Int64) { 2 }), p_position, $tmp3342, $tmp3343);
            return $tmp3340;
        }
        }
        else {
        panda$core$Bit $tmp3344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp3344.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3345->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3347 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3348 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l3264, r3265);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3345, ((panda$core$Int64) { 2 }), p_position, $tmp3347, $tmp3348);
            return $tmp3345;
        }
        }
        else {
        panda$core$Bit $tmp3349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp3349.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3350 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3350->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3350->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3352 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3353 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l3264, r3265);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3350, ((panda$core$Int64) { 2 }), p_position, $tmp3352, $tmp3353);
            return $tmp3350;
        }
        }
        else {
        panda$core$Bit $tmp3354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp3354.value) {
        {
            panda$core$Int64 $tmp3356 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3357 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3356);
            v3355 = $tmp3357;
            org$pandalanguage$pandac$IRNode* $tmp3358 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3358->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3358->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3360 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3355);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3358, ((panda$core$Int64) { 16 }), p_position, $tmp3360, v3355);
            return $tmp3358;
        }
        }
        else {
        panda$core$Bit $tmp3361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp3361.value) {
        {
            panda$core$Int64 $tmp3363 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3364 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3363);
            v3362 = $tmp3364;
            org$pandalanguage$pandac$IRNode* $tmp3365 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3365->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3365->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3367 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3362);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3365, ((panda$core$Int64) { 16 }), p_position, $tmp3367, v3362);
            return $tmp3365;
        }
        }
        else {
        panda$core$Bit $tmp3368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 71 }));
        if ($tmp3368.value) {
        {
            panda$core$Int64 $tmp3370 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3371 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3370);
            v3369 = $tmp3371;
            org$pandalanguage$pandac$IRNode* $tmp3372 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3372->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3372->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3374 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3369);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3372, ((panda$core$Int64) { 16 }), p_position, $tmp3374, v3369);
            return $tmp3372;
        }
        }
        else {
        panda$core$Bit $tmp3375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp3375.value) {
        {
            panda$core$Int64 $tmp3377 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3378 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3377);
            v3376 = $tmp3378;
            org$pandalanguage$pandac$IRNode* $tmp3379 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3379->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3379->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3381 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3376);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3379, ((panda$core$Int64) { 16 }), p_position, $tmp3381, v3376);
            return $tmp3379;
        }
        }
        else {
        panda$core$Bit $tmp3382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2128_93288.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3382.value) {
        {
            panda$core$Int64 $tmp3384 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l3264, r3265);
            panda$core$UInt64 $tmp3385 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3384);
            v3383 = $tmp3385;
            org$pandalanguage$pandac$IRNode* $tmp3386 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3386->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3386->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3388 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3383);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3386, ((panda$core$Int64) { 16 }), p_position, $tmp3388, v3383);
            return $tmp3386;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s3389);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$IRNode* $match$2177_93390;
    org$pandalanguage$pandac$IRNode* base3392;
    {
        $match$2177_93390 = p_expr;
        panda$core$Bit $tmp3391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2177_93390->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3391.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3393 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$2177_93390->$data + 16));
            base3392 = *$tmp3393;
            return base3392;
        }
        }
        else {
        {
            return p_expr;
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right) {
    org$pandalanguage$pandac$IRNode* $match$2187_93394;
    org$pandalanguage$pandac$IRNode* base3396;
    panda$collections$ImmutableArray* args3398;
    panda$collections$Array* callArgs3401;
    org$pandalanguage$pandac$IRNode* resolved3409;
    org$pandalanguage$pandac$IRNode* $match$2205_173412;
    panda$collections$ImmutableArray* resolvedArgs3414;
    panda$core$Int64 baseId3419;
    org$pandalanguage$pandac$IRNode* base3420;
    panda$core$Int64 indexId3426;
    org$pandalanguage$pandac$IRNode* index3427;
    org$pandalanguage$pandac$IRNode* baseRef3431;
    org$pandalanguage$pandac$IRNode* indexRef3438;
    org$pandalanguage$pandac$IRNode* rhsIndex3445;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3446;
    org$pandalanguage$pandac$IRNode* value3448;
    panda$collections$Array* callArgs3474;
    {
        $match$2187_93394 = p_left;
        panda$core$Bit $tmp3395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2187_93394->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp3395.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3397 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$2187_93394->$data + 24));
            base3396 = *$tmp3397;
            panda$collections$ImmutableArray** $tmp3399 = ((panda$collections$ImmutableArray**) ((char*) $match$2187_93394->$data + 32));
            args3398 = *$tmp3399;
            panda$core$Bit $tmp3400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 73 }));
            if ($tmp3400.value) {
            {
                panda$collections$Array* $tmp3402 = (panda$collections$Array*) malloc(40);
                $tmp3402->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3402->refCount.value = 1;
                panda$collections$Array$init($tmp3402);
                callArgs3401 = $tmp3402;
                panda$core$Int64 $tmp3404 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args3398);
                panda$core$Bit $tmp3405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3404, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3405.value);
                panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(callArgs3401, ((panda$collections$CollectionView*) args3398));
                panda$collections$Array$add$panda$collections$Array$T(callArgs3401, ((panda$core$Object*) p_right));
                org$pandalanguage$pandac$IRNode* $tmp3407 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base3396, &$s3406, ((panda$collections$ListView*) callArgs3401));
                return $tmp3407;
            }
            }
            panda$core$Bit $tmp3408 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(p_op);
            PANDA_ASSERT($tmp3408.value);
            org$pandalanguage$pandac$IRNode* $tmp3410 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
            resolved3409 = $tmp3410;
            if (((panda$core$Bit) { resolved3409 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3411 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved3409);
            resolved3409 = $tmp3411;
            {
                $match$2205_173412 = resolved3409;
                panda$core$Bit $tmp3413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2205_173412->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp3413.value) {
                {
                    panda$collections$ImmutableArray** $tmp3415 = ((panda$collections$ImmutableArray**) ((char*) $match$2205_173412->$data + 32));
                    resolvedArgs3414 = *$tmp3415;
                    panda$core$Int64 $tmp3416 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolvedArgs3414);
                    panda$core$Bit $tmp3417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3416, ((panda$core$Int64) { 2 }));
                    PANDA_ASSERT($tmp3417.value);
                    panda$core$Int64 $tmp3418 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->reusedValueCount, ((panda$core$Int64) { 1 }));
                    self->reusedValueCount = $tmp3418;
                    baseId3419 = self->reusedValueCount;
                    org$pandalanguage$pandac$IRNode* $tmp3421 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3421->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3421->refCount.value = 1;
                    panda$core$Object* $tmp3423 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolvedArgs3414, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$IRNode* $tmp3424 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp3423));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp3421, ((panda$core$Int64) { 29 }), $tmp3424, baseId3419);
                    base3420 = $tmp3421;
                    panda$core$Int64 $tmp3425 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->reusedValueCount, ((panda$core$Int64) { 1 }));
                    self->reusedValueCount = $tmp3425;
                    indexId3426 = self->reusedValueCount;
                    org$pandalanguage$pandac$IRNode* $tmp3428 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3428->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3428->refCount.value = 1;
                    panda$core$Object* $tmp3430 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolvedArgs3414, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp3428, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$IRNode*) $tmp3430), indexId3426);
                    index3427 = $tmp3428;
                    org$pandalanguage$pandac$IRNode* $tmp3432 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3432->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3432->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp3435 = (($fn3434) base3420->$class->vtable[3])(base3420);
                    org$pandalanguage$pandac$Type* $tmp3437 = (($fn3436) base3420->$class->vtable[2])(base3420);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64($tmp3432, ((panda$core$Int64) { 28 }), $tmp3435, $tmp3437, baseId3419);
                    baseRef3431 = $tmp3432;
                    org$pandalanguage$pandac$IRNode* $tmp3439 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3439->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3439->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp3442 = (($fn3441) index3427->$class->vtable[3])(index3427);
                    org$pandalanguage$pandac$Type* $tmp3444 = (($fn3443) index3427->$class->vtable[2])(index3427);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64($tmp3439, ((panda$core$Int64) { 28 }), $tmp3442, $tmp3444, indexId3426);
                    indexRef3438 = $tmp3439;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3446, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$IRNode* $tmp3447 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef3431, $tmp3446, indexRef3438);
                    rhsIndex3445 = $tmp3447;
                    if (((panda$core$Bit) { rhsIndex3445 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$parser$Token$Kind $tmp3449 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(p_op);
                    org$pandalanguage$pandac$IRNode* $tmp3450 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex3445, $tmp3449, p_right);
                    value3448 = $tmp3450;
                    if (((panda$core$Bit) { value3448 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp3454 = (($fn3453) rhsIndex3445->$class->vtable[2])(rhsIndex3445);
                    panda$core$Bit $tmp3455 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp3454);
                    bool $tmp3452 = $tmp3455.value;
                    if (!$tmp3452) goto $l3456;
                    org$pandalanguage$pandac$Type* $tmp3458 = (($fn3457) p_right->$class->vtable[2])(p_right);
                    panda$core$Bit $tmp3459 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp3458);
                    $tmp3452 = $tmp3459.value;
                    $l3456:;
                    panda$core$Bit $tmp3460 = { $tmp3452 };
                    bool $tmp3451 = $tmp3460.value;
                    if (!$tmp3451) goto $l3461;
                    org$pandalanguage$pandac$Type* $tmp3463 = (($fn3462) rhsIndex3445->$class->vtable[2])(rhsIndex3445);
                    org$pandalanguage$pandac$Type* $tmp3465 = (($fn3464) value3448->$class->vtable[2])(value3448);
                    panda$core$Bit $tmp3466 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3463, $tmp3465);
                    $tmp3451 = $tmp3466.value;
                    $l3461:;
                    panda$core$Bit $tmp3467 = { $tmp3451 };
                    if ($tmp3467.value) {
                    {
                        panda$collections$Array* $tmp3469 = (panda$collections$Array*) malloc(40);
                        $tmp3469->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3469->refCount.value = 1;
                        panda$collections$Array$init($tmp3469);
                        org$pandalanguage$pandac$Type* $tmp3472 = (($fn3471) resolved3409->$class->vtable[2])(resolved3409);
                        org$pandalanguage$pandac$IRNode* $tmp3473 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3448, &$s3468, ((panda$collections$ListView*) $tmp3469), $tmp3472);
                        value3448 = $tmp3473;
                        if (((panda$core$Bit) { value3448 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                    }
                    }
                    panda$collections$Array* $tmp3475 = (panda$collections$Array*) malloc(40);
                    $tmp3475->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3475->refCount.value = 1;
                    panda$collections$Array$init($tmp3475);
                    callArgs3474 = $tmp3475;
                    panda$collections$Array$add$panda$collections$Array$T(callArgs3474, ((panda$core$Object*) index3427));
                    panda$collections$Array$add$panda$collections$Array$T(callArgs3474, ((panda$core$Object*) value3448));
                    org$pandalanguage$pandac$IRNode* $tmp3478 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base3420, &$s3477, ((panda$collections$ListView*) callArgs3474));
                    return $tmp3478;
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
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3479;
    org$pandalanguage$pandac$IRNode* right3480;
    panda$core$Int64 kind3516;
    org$pandalanguage$pandac$IRNode* resolved3518;
    org$pandalanguage$pandac$IRNode* resolved3530;
    org$pandalanguage$pandac$IRNode* reusedLeft3556;
    org$pandalanguage$pandac$IRNode* toNonNullable3563;
    org$pandalanguage$pandac$IRNode* comparison3568;
    org$pandalanguage$pandac$IRNode* nullCheck3570;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3571;
    org$pandalanguage$pandac$ClassDecl* cl3592;
    org$pandalanguage$pandac$ClassDecl* cl3617;
    org$pandalanguage$pandac$IRNode* finalLeft3639;
    org$pandalanguage$pandac$IRNode* finalRight3642;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3663;
    org$pandalanguage$pandac$IRNode* reusedLeft3676;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3702;
    org$pandalanguage$pandac$ClassDecl* cl3709;
    panda$collections$ListView* parameters3713;
    org$pandalanguage$pandac$Symbol* methods3717;
    org$pandalanguage$pandac$Type* type3721;
    panda$collections$Array* types3722;
    org$pandalanguage$pandac$MethodDecl* m3726;
    panda$collections$Iterator* m$Iter3731;
    org$pandalanguage$pandac$MethodDecl* m3743;
    panda$collections$Array* args3754;
    org$pandalanguage$pandac$Type* resultType3835;
    org$pandalanguage$pandac$parser$Token$Kind $match$2452_133836;
    panda$collections$Array* args3863;
    org$pandalanguage$pandac$IRNode* result3866;
    org$pandalanguage$pandac$IRNode* resolved3869;
    org$pandalanguage$pandac$IRNode* target3877;
    left3479 = p_rawLeft;
    right3480 = p_rawRight;
    org$pandalanguage$pandac$Type* $tmp3482 = (($fn3481) left3479->$class->vtable[2])(left3479);
    panda$core$Bit $tmp3483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3482->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp3483.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3480);
        right3480 = $tmp3484;
        if (((panda$core$Bit) { right3480 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3486 = (($fn3485) right3480->$class->vtable[2])(right3480);
        panda$core$Int64$nullable $tmp3487 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left3479, $tmp3486);
        if (((panda$core$Bit) { $tmp3487.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3489 = (($fn3488) right3480->$class->vtable[2])(right3480);
            org$pandalanguage$pandac$IRNode* $tmp3490 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3479, $tmp3489);
            left3479 = $tmp3490;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3493 = (($fn3492) right3480->$class->vtable[2])(right3480);
    panda$core$Bit $tmp3494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3493->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp3491 = $tmp3494.value;
    if (!$tmp3491) goto $l3495;
    org$pandalanguage$pandac$Type* $tmp3497 = (($fn3496) left3479->$class->vtable[2])(left3479);
    panda$core$Int64$nullable $tmp3498 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3480, $tmp3497);
    $tmp3491 = ((panda$core$Bit) { $tmp3498.nonnull }).value;
    $l3495:;
    panda$core$Bit $tmp3499 = { $tmp3491 };
    if ($tmp3499.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3501 = (($fn3500) left3479->$class->vtable[2])(left3479);
        org$pandalanguage$pandac$IRNode* $tmp3502 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3480, $tmp3501);
        right3480 = $tmp3502;
    }
    }
    panda$core$Bit $tmp3506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
    bool $tmp3505 = $tmp3506.value;
    if ($tmp3505) goto $l3507;
    panda$core$Bit $tmp3508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
    $tmp3505 = $tmp3508.value;
    $l3507:;
    panda$core$Bit $tmp3509 = { $tmp3505 };
    bool $tmp3504 = $tmp3509.value;
    if ($tmp3504) goto $l3510;
    panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 60 }));
    $tmp3504 = $tmp3511.value;
    $l3510:;
    panda$core$Bit $tmp3512 = { $tmp3504 };
    bool $tmp3503 = $tmp3512.value;
    if ($tmp3503) goto $l3513;
    panda$core$Bit $tmp3514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 61 }));
    $tmp3503 = $tmp3514.value;
    $l3513:;
    panda$core$Bit $tmp3515 = { $tmp3503 };
    if ($tmp3515.value) {
    {
        panda$core$Bit $tmp3517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3479->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp3517.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3519 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3480);
            resolved3518 = $tmp3519;
            if (((panda$core$Bit) { resolved3518 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp3520 = $tmp3521.value;
            if ($tmp3520) goto $l3522;
            panda$core$Bit $tmp3523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp3520 = $tmp3523.value;
            $l3522:;
            panda$core$Bit $tmp3524 = { $tmp3520 };
            if ($tmp3524.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3525 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3525->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3525->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp3525, ((panda$core$Int64) { 18 }), p_position, resolved3518);
                return $tmp3525;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp3527 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3527->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3527->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp3527, ((panda$core$Int64) { 17 }), p_position, resolved3518);
                return $tmp3527;
            }
            }
        }
        }
        panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3480->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp3529.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3531 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3479);
            resolved3530 = $tmp3531;
            if (((panda$core$Bit) { resolved3530 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp3532 = $tmp3533.value;
            if ($tmp3532) goto $l3534;
            panda$core$Bit $tmp3535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp3532 = $tmp3535.value;
            $l3534:;
            panda$core$Bit $tmp3536 = { $tmp3532 };
            if ($tmp3536.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3537 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3537->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3537->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp3537, ((panda$core$Int64) { 18 }), p_position, resolved3530);
                return $tmp3537;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp3539 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3539->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3539->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp3539, ((panda$core$Int64) { 17 }), p_position, resolved3530);
                return $tmp3539;
            }
            }
        }
        }
    }
    }
    panda$core$Bit $tmp3543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
    bool $tmp3542 = $tmp3543.value;
    if ($tmp3542) goto $l3544;
    panda$core$Bit $tmp3545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
    $tmp3542 = $tmp3545.value;
    $l3544:;
    panda$core$Bit $tmp3546 = { $tmp3542 };
    bool $tmp3541 = $tmp3546.value;
    if (!$tmp3541) goto $l3547;
    org$pandalanguage$pandac$Type* $tmp3549 = (($fn3548) left3479->$class->vtable[2])(left3479);
    panda$core$Bit $tmp3550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3549->typeKind, ((panda$core$Int64) { 11 }));
    $tmp3541 = $tmp3550.value;
    $l3547:;
    panda$core$Bit $tmp3551 = { $tmp3541 };
    if ($tmp3551.value) {
    {
        panda$core$Bit $tmp3552 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right3480->$rawValue, ((panda$core$Int64) { 23 }));
        PANDA_ASSERT($tmp3552.value);
        panda$core$Int64 $tmp3553 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->reusedValueCount, ((panda$core$Int64) { 1 }));
        self->reusedValueCount = $tmp3553;
        org$pandalanguage$pandac$IRNode* $tmp3554 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3554->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3554->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp3554, ((panda$core$Int64) { 29 }), left3479, self->reusedValueCount);
        left3479 = $tmp3554;
        org$pandalanguage$pandac$IRNode* $tmp3557 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3557->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3557->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp3560 = (($fn3559) left3479->$class->vtable[3])(left3479);
        org$pandalanguage$pandac$Type* $tmp3562 = (($fn3561) left3479->$class->vtable[2])(left3479);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64($tmp3557, ((panda$core$Int64) { 28 }), $tmp3560, $tmp3562, self->reusedValueCount);
        reusedLeft3556 = $tmp3557;
        org$pandalanguage$pandac$Type* $tmp3565 = (($fn3564) left3479->$class->vtable[2])(left3479);
        panda$core$Object* $tmp3566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3565->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft3556, ((org$pandalanguage$pandac$Type*) $tmp3566));
        toNonNullable3563 = $tmp3567;
        org$pandalanguage$pandac$IRNode* $tmp3569 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable3563, p_op, right3480);
        comparison3568 = $tmp3569;
        if (((panda$core$Bit) { comparison3568 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3571, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode* $tmp3572 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3572->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3572->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3574 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3572, ((panda$core$Int64) { 23 }), p_position, $tmp3574);
        org$pandalanguage$pandac$IRNode* $tmp3575 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3479, $tmp3571, $tmp3572);
        nullCheck3570 = $tmp3575;
        if (((panda$core$Bit) { nullCheck3570 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3576->refCount.value = 1;
        org$pandalanguage$pandac$IRNode* $tmp3578 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3578->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3578->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3580 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3578, ((panda$core$Int64) { 2 }), p_position, $tmp3580, $tmp3581);
        org$pandalanguage$pandac$Type* $tmp3582 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3583 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3578, $tmp3582);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp3576, ((panda$core$Int64) { 33 }), p_position, nullCheck3570, comparison3568, $tmp3583);
        return $tmp3576;
    }
    }
    panda$core$Bit $tmp3585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 60 }));
    bool $tmp3584 = $tmp3585.value;
    if ($tmp3584) goto $l3586;
    panda$core$Bit $tmp3587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 61 }));
    $tmp3584 = $tmp3587.value;
    $l3586:;
    panda$core$Bit $tmp3588 = { $tmp3584 };
    if ($tmp3588.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3590 = (($fn3589) left3479->$class->vtable[2])(left3479);
        panda$core$Bit $tmp3591 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit($tmp3590);
        if ($tmp3591.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3594 = (($fn3593) left3479->$class->vtable[2])(left3479);
            org$pandalanguage$pandac$ClassDecl* $tmp3595 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3594);
            cl3592 = $tmp3595;
            if (((panda$core$Bit) { cl3592 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3596 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3592);
            if ($tmp3596.value) {
            {
                panda$core$String* $tmp3598 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
                panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3597, $tmp3598);
                panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, &$s3600);
                org$pandalanguage$pandac$Type* $tmp3603 = (($fn3602) left3479->$class->vtable[2])(left3479);
                panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3601, ((panda$core$Object*) $tmp3603));
                panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
                org$pandalanguage$pandac$Type* $tmp3609 = (($fn3608) right3480->$class->vtable[2])(right3480);
                panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3607, ((panda$core$Object*) $tmp3609));
                panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, &$s3611);
                panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, $tmp3612);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3613);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3615 = (($fn3614) right3480->$class->vtable[2])(right3480);
        panda$core$Bit $tmp3616 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit($tmp3615);
        if ($tmp3616.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3619 = (($fn3618) right3480->$class->vtable[2])(right3480);
            org$pandalanguage$pandac$ClassDecl* $tmp3620 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3619);
            cl3617 = $tmp3620;
            if (((panda$core$Bit) { cl3617 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3621 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3617);
            if ($tmp3621.value) {
            {
                panda$core$String* $tmp3623 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
                panda$core$String* $tmp3624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3622, $tmp3623);
                panda$core$String* $tmp3626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3624, &$s3625);
                org$pandalanguage$pandac$Type* $tmp3628 = (($fn3627) left3479->$class->vtable[2])(left3479);
                panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3626, ((panda$core$Object*) $tmp3628));
                panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3630);
                org$pandalanguage$pandac$Type* $tmp3634 = (($fn3633) right3480->$class->vtable[2])(right3480);
                panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3632, ((panda$core$Object*) $tmp3634));
                panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, &$s3636);
                panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, $tmp3637);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3638);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3640 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3641 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3479, $tmp3640);
        finalLeft3639 = $tmp3641;
        if (((panda$core$Bit) { finalLeft3639 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3643 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3644 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3480, $tmp3643);
        finalRight3642 = $tmp3644;
        if (((panda$core$Bit) { finalRight3642 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3645 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3645->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3645->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3647 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp3645, ((panda$core$Int64) { 1 }), p_position, $tmp3647, finalLeft3639, p_op, finalRight3642);
        return $tmp3645;
    }
    }
    panda$core$Bit $tmp3648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 73 }));
    if ($tmp3648.value) {
    {
        panda$core$Bit $tmp3649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3479->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp3649.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3650 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3479, p_op, right3480);
            return $tmp3650;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3651 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3479);
        left3479 = $tmp3651;
        if (((panda$core$Bit) { left3479 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3653 = (($fn3652) left3479->$class->vtable[2])(left3479);
        org$pandalanguage$pandac$IRNode* $tmp3654 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3480, $tmp3653);
        right3480 = $tmp3654;
        if (((panda$core$Bit) { right3480 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3655 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3479);
        panda$core$Bit $tmp3656 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3655);
        if ($tmp3656.value) {
        {
            org$pandalanguage$pandac$Position $tmp3658 = (($fn3657) left3479->$class->vtable[3])(left3479);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp3658, &$s3659);
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3660 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3660->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3662 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3663, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp3660, ((panda$core$Int64) { 1 }), p_position, $tmp3662, left3479, $tmp3663, right3480);
        return $tmp3660;
    }
    }
    panda$core$Bit $tmp3664 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(p_op);
    if ($tmp3664.value) {
    {
        panda$core$Bit $tmp3665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3479->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp3665.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3666 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3479, p_op, right3480);
            return $tmp3666;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3667 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3479);
        left3479 = $tmp3667;
        if (((panda$core$Bit) { left3479 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3668 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3479);
        panda$core$Bit $tmp3669 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3668);
        if ($tmp3669.value) {
        {
            org$pandalanguage$pandac$Position $tmp3671 = (($fn3670) left3479->$class->vtable[3])(left3479);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp3671, &$s3672);
            return NULL;
        }
        }
        panda$core$Int64 $tmp3673 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->reusedValueCount, ((panda$core$Int64) { 1 }));
        self->reusedValueCount = $tmp3673;
        org$pandalanguage$pandac$IRNode* $tmp3674 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3674->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3674->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp3674, ((panda$core$Int64) { 29 }), left3479, self->reusedValueCount);
        left3479 = $tmp3674;
        org$pandalanguage$pandac$IRNode* $tmp3677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3677->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp3680 = (($fn3679) left3479->$class->vtable[3])(left3479);
        org$pandalanguage$pandac$Type* $tmp3682 = (($fn3681) left3479->$class->vtable[2])(left3479);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64($tmp3677, ((panda$core$Int64) { 28 }), $tmp3680, $tmp3682, self->reusedValueCount);
        reusedLeft3676 = $tmp3677;
        org$pandalanguage$pandac$parser$Token$Kind $tmp3683 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(p_op);
        org$pandalanguage$pandac$IRNode* $tmp3684 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft3676, $tmp3683, right3480);
        right3480 = $tmp3684;
        if (((panda$core$Bit) { right3480 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3687 = (($fn3686) left3479->$class->vtable[2])(left3479);
        panda$core$Bit $tmp3688 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp3687);
        bool $tmp3685 = $tmp3688.value;
        if (!$tmp3685) goto $l3689;
        org$pandalanguage$pandac$Type* $tmp3691 = (($fn3690) left3479->$class->vtable[2])(left3479);
        org$pandalanguage$pandac$Type* $tmp3693 = (($fn3692) right3480->$class->vtable[2])(right3480);
        panda$core$Bit $tmp3694 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3691, $tmp3693);
        $tmp3685 = $tmp3694.value;
        $l3689:;
        panda$core$Bit $tmp3695 = { $tmp3685 };
        if ($tmp3695.value) {
        {
            panda$collections$Array* $tmp3697 = (panda$collections$Array*) malloc(40);
            $tmp3697->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3697->refCount.value = 1;
            panda$collections$Array$init($tmp3697);
            org$pandalanguage$pandac$Type* $tmp3700 = (($fn3699) left3479->$class->vtable[2])(left3479);
            org$pandalanguage$pandac$IRNode* $tmp3701 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3480, &$s3696, ((panda$collections$ListView*) $tmp3697), $tmp3700);
            right3480 = $tmp3701;
            if (((panda$core$Bit) { right3480 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3702, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$IRNode* $tmp3703 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3479, $tmp3702, right3480);
        return $tmp3703;
    }
    }
    panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 101 }));
    if ($tmp3704.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3705 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3479);
        left3479 = $tmp3705;
        if (((panda$core$Bit) { left3479 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3707 = (($fn3706) left3479->$class->vtable[2])(left3479);
        panda$core$Bit $tmp3708 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit($tmp3707);
        if ($tmp3708.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3711 = (($fn3710) left3479->$class->vtable[2])(left3479);
            org$pandalanguage$pandac$ClassDecl* $tmp3712 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3711);
            cl3709 = $tmp3712;
            if (((panda$core$Bit) { cl3709 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$Type* $tmp3715 = (($fn3714) left3479->$class->vtable[2])(left3479);
            panda$collections$ListView* $tmp3716 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, $tmp3715);
            parameters3713 = $tmp3716;
            org$pandalanguage$pandac$SymbolTable* $tmp3718 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3709);
            org$pandalanguage$pandac$Symbol* $tmp3720 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3718, &$s3719);
            methods3717 = $tmp3720;
            if (((panda$core$Bit) { methods3717 != NULL }).value) {
            {
                panda$collections$Array* $tmp3723 = (panda$collections$Array*) malloc(40);
                $tmp3723->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3723->refCount.value = 1;
                panda$collections$Array$init($tmp3723);
                types3722 = $tmp3723;
                panda$core$Bit $tmp3725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3717->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3725.value) {
                {
                    m3726 = ((org$pandalanguage$pandac$MethodDecl*) methods3717);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3726);
                    org$pandalanguage$pandac$MethodRef* $tmp3727 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3727->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3727->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3727, m3726, parameters3713);
                    org$pandalanguage$pandac$Type* $tmp3729 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3727);
                    panda$collections$Array$add$panda$collections$Array$T(types3722, ((panda$core$Object*) $tmp3729));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3717->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3730.value);
                    {
                        ITable* $tmp3732 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3717)->methods)->$class->itable;
                        while ($tmp3732->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3732 = $tmp3732->next;
                        }
                        $fn3734 $tmp3733 = $tmp3732->methods[0];
                        panda$collections$Iterator* $tmp3735 = $tmp3733(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3717)->methods));
                        m$Iter3731 = $tmp3735;
                        $l3736:;
                        ITable* $tmp3738 = m$Iter3731->$class->itable;
                        while ($tmp3738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3738 = $tmp3738->next;
                        }
                        $fn3740 $tmp3739 = $tmp3738->methods[0];
                        panda$core$Bit $tmp3741 = $tmp3739(m$Iter3731);
                        panda$core$Bit $tmp3742 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3741);
                        if (!$tmp3742.value) goto $l3737;
                        {
                            ITable* $tmp3744 = m$Iter3731->$class->itable;
                            while ($tmp3744->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3744 = $tmp3744->next;
                            }
                            $fn3746 $tmp3745 = $tmp3744->methods[1];
                            panda$core$Object* $tmp3747 = $tmp3745(m$Iter3731);
                            m3743 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3747);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3743);
                            org$pandalanguage$pandac$MethodRef* $tmp3748 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3748->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3748->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3748, m3743, parameters3713);
                            org$pandalanguage$pandac$Type* $tmp3750 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3748);
                            panda$collections$Array$add$panda$collections$Array$T(types3722, ((panda$core$Object*) $tmp3750));
                        }
                        goto $l3736;
                        $l3737:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3751 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3751->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3751->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3751, ((panda$collections$ListView*) types3722));
                type3721 = $tmp3751;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3753 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3721 = $tmp3753;
            }
            }
            panda$collections$Array* $tmp3755 = (panda$collections$Array*) malloc(40);
            $tmp3755->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3755->refCount.value = 1;
            panda$collections$Array$init($tmp3755);
            args3754 = $tmp3755;
            panda$collections$Array$add$panda$collections$Array$T(args3754, ((panda$core$Object*) right3480));
            org$pandalanguage$pandac$IRNode* $tmp3757 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3757->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3757->refCount.value = 1;
            panda$collections$ImmutableArray* $tmp3759 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3754);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp3757, ((panda$core$Int64) { 36 }), p_position, type3721, left3479, $tmp3759);
            return $tmp3757;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3761 = (($fn3760) left3479->$class->vtable[2])(left3479);
    org$pandalanguage$pandac$Type* $tmp3762 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3763 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3761, $tmp3762);
    if ($tmp3763.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3766 = (($fn3765) right3480->$class->vtable[2])(right3480);
        org$pandalanguage$pandac$Type* $tmp3767 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3768 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3766, $tmp3767);
        bool $tmp3764 = $tmp3768.value;
        if (!$tmp3764) goto $l3769;
        panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 66 }));
        bool $tmp3773 = $tmp3774.value;
        if ($tmp3773) goto $l3775;
        panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp3773 = $tmp3776.value;
        $l3775:;
        panda$core$Bit $tmp3777 = { $tmp3773 };
        bool $tmp3772 = $tmp3777.value;
        if ($tmp3772) goto $l3778;
        panda$core$Bit $tmp3779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp3772 = $tmp3779.value;
        $l3778:;
        panda$core$Bit $tmp3780 = { $tmp3772 };
        bool $tmp3771 = $tmp3780.value;
        if ($tmp3771) goto $l3781;
        panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp3771 = $tmp3782.value;
        $l3781:;
        panda$core$Bit $tmp3783 = { $tmp3771 };
        bool $tmp3770 = $tmp3783.value;
        if ($tmp3770) goto $l3784;
        panda$core$Bit $tmp3785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp3770 = $tmp3785.value;
        $l3784:;
        panda$core$Bit $tmp3786 = { $tmp3770 };
        $tmp3764 = $tmp3786.value;
        $l3769:;
        panda$core$Bit $tmp3787 = { $tmp3764 };
        if ($tmp3787.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3788 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3788->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3788->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3791 = (($fn3790) left3479->$class->vtable[2])(left3479);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp3788, ((panda$core$Int64) { 1 }), p_position, $tmp3791, left3479, p_op, right3480);
            return $tmp3788;
        }
        }
        panda$core$String* $tmp3793 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
        panda$core$String* $tmp3794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3792, $tmp3793);
        panda$core$String* $tmp3796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3794, &$s3795);
        org$pandalanguage$pandac$Type* $tmp3798 = (($fn3797) left3479->$class->vtable[2])(left3479);
        panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3796, ((panda$core$Object*) $tmp3798));
        panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3800);
        org$pandalanguage$pandac$Type* $tmp3804 = (($fn3803) right3480->$class->vtable[2])(right3480);
        panda$core$String* $tmp3805 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3802, ((panda$core$Object*) $tmp3804));
        panda$core$String* $tmp3807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3805, &$s3806);
        panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, $tmp3807);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3808);
        return NULL;
    }
    }
    panda$core$Bit $tmp3811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3479->$rawValue, ((panda$core$Int64) { 16 }));
    bool $tmp3810 = $tmp3811.value;
    if ($tmp3810) goto $l3812;
    panda$core$Bit $tmp3813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3479->$rawValue, ((panda$core$Int64) { 22 }));
    $tmp3810 = $tmp3813.value;
    $l3812:;
    panda$core$Bit $tmp3814 = { $tmp3810 };
    bool $tmp3809 = $tmp3814.value;
    if (!$tmp3809) goto $l3815;
    panda$core$Bit $tmp3817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3480->$rawValue, ((panda$core$Int64) { 16 }));
    bool $tmp3816 = $tmp3817.value;
    if ($tmp3816) goto $l3818;
    panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3480->$rawValue, ((panda$core$Int64) { 22 }));
    $tmp3816 = $tmp3819.value;
    $l3818:;
    panda$core$Bit $tmp3820 = { $tmp3816 };
    $tmp3809 = $tmp3820.value;
    $l3815:;
    panda$core$Bit $tmp3821 = { $tmp3809 };
    if ($tmp3821.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3822 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3479, p_op, right3480);
        return $tmp3822;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3825 = (($fn3824) left3479->$class->vtable[2])(left3479);
    panda$core$Bit $tmp3826 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit($tmp3825);
    bool $tmp3823 = $tmp3826.value;
    if (!$tmp3823) goto $l3827;
    org$pandalanguage$pandac$Type* $tmp3829 = (($fn3828) left3479->$class->vtable[2])(left3479);
    panda$core$Int64$nullable $tmp3830 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3480, $tmp3829);
    $tmp3823 = ((panda$core$Bit) { $tmp3830.nonnull }).value;
    $l3827:;
    panda$core$Bit $tmp3831 = { $tmp3823 };
    if ($tmp3831.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3833 = (($fn3832) left3479->$class->vtable[2])(left3479);
        org$pandalanguage$pandac$IRNode* $tmp3834 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3480, $tmp3833);
        right3480 = $tmp3834;
        PANDA_ASSERT(((panda$core$Bit) { right3480 != NULL }).value);
        {
            $match$2452_133836 = p_op;
            panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_133836.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp3841 = $tmp3842.value;
            if ($tmp3841) goto $l3843;
            panda$core$Bit $tmp3844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_133836.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp3841 = $tmp3844.value;
            $l3843:;
            panda$core$Bit $tmp3845 = { $tmp3841 };
            bool $tmp3840 = $tmp3845.value;
            if ($tmp3840) goto $l3846;
            panda$core$Bit $tmp3847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_133836.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp3840 = $tmp3847.value;
            $l3846:;
            panda$core$Bit $tmp3848 = { $tmp3840 };
            bool $tmp3839 = $tmp3848.value;
            if ($tmp3839) goto $l3849;
            panda$core$Bit $tmp3850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_133836.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp3839 = $tmp3850.value;
            $l3849:;
            panda$core$Bit $tmp3851 = { $tmp3839 };
            bool $tmp3838 = $tmp3851.value;
            if ($tmp3838) goto $l3852;
            panda$core$Bit $tmp3853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_133836.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp3838 = $tmp3853.value;
            $l3852:;
            panda$core$Bit $tmp3854 = { $tmp3838 };
            bool $tmp3837 = $tmp3854.value;
            if ($tmp3837) goto $l3855;
            panda$core$Bit $tmp3856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_133836.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp3837 = $tmp3856.value;
            $l3855:;
            panda$core$Bit $tmp3857 = { $tmp3837 };
            if ($tmp3857.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3858 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3835 = $tmp3858;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3860 = (($fn3859) left3479->$class->vtable[2])(left3479);
                resultType3835 = $tmp3860;
            }
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3861 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3861->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3861->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp3861, ((panda$core$Int64) { 1 }), p_position, resultType3835, left3479, p_op, right3480);
        return $tmp3861;
    }
    }
    panda$collections$Array* $tmp3864 = (panda$collections$Array*) malloc(40);
    $tmp3864->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3864->refCount.value = 1;
    panda$collections$Array$init($tmp3864);
    args3863 = $tmp3864;
    panda$collections$Array$add$panda$collections$Array$T(args3863, ((panda$core$Object*) right3480));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3867 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3868 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left3479, $tmp3867, ((panda$collections$ListView*) args3863));
    result3866 = $tmp3868;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3866 == NULL }).value) {
    {
        panda$collections$Array$clear(args3863);
        panda$collections$Array$add$panda$collections$Array$T(args3863, ((panda$core$Object*) left3479));
        org$pandalanguage$pandac$IRNode* $tmp3870 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3480);
        resolved3869 = $tmp3870;
        bool $tmp3871 = ((panda$core$Bit) { resolved3869 != NULL }).value;
        if (!$tmp3871) goto $l3872;
        org$pandalanguage$pandac$Type* $tmp3874 = (($fn3873) resolved3869->$class->vtable[2])(resolved3869);
        panda$core$Bit $tmp3875 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit($tmp3874);
        $tmp3871 = $tmp3875.value;
        $l3872:;
        panda$core$Bit $tmp3876 = { $tmp3871 };
        if ($tmp3876.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(args3863, ((panda$core$Object*) resolved3869));
            org$pandalanguage$pandac$IRNode* $tmp3878 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3878->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3878->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp3881 = (($fn3880) resolved3869->$class->vtable[3])(resolved3869);
            org$pandalanguage$pandac$Type* $tmp3883 = (($fn3882) resolved3869->$class->vtable[2])(resolved3869);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3878, ((panda$core$Int64) { 34 }), $tmp3881, $tmp3883);
            target3877 = $tmp3878;
            panda$core$String* $tmp3884 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3885 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3877, $tmp3884, ((panda$collections$ListView*) args3863));
            result3866 = $tmp3885;
        }
        }
    }
    }
    return result3866;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawLeft, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3889;
    org$pandalanguage$pandac$IRNode* right3891;
    panda$core$Bit $tmp3886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 89 }));
    if ($tmp3886.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3887 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_rawRight);
        org$pandalanguage$pandac$IRNode* $tmp3888 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_rawLeft, $tmp3887);
        return $tmp3888;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3890 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawLeft);
    left3889 = $tmp3890;
    if (((panda$core$Bit) { left3889 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3892 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawRight);
    right3891 = $tmp3892;
    if (((panda$core$Bit) { right3891 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3893 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3889, p_op, right3891);
    return $tmp3893;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 $match$2498_133894;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3900;
    {
        $match$2498_133894 = p_type->typeKind;
        panda$core$Bit $tmp3895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2498_133894, ((panda$core$Int64) { 22 }));
        if ($tmp3895.value) {
        {
            panda$collections$ListView* $tmp3896 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3896;
        }
        }
        else {
        panda$core$Bit $tmp3897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2498_133894, ((panda$core$Int64) { 21 }));
        if ($tmp3897.value) {
        {
            panda$core$Int64 $tmp3898 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3899 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3898, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3899.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3900, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3901 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3900);
            return ((panda$collections$ListView*) $tmp3901);
        }
        }
        else {
        panda$core$Bit $tmp3902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2498_133894, ((panda$core$Int64) { 11 }));
        if ($tmp3902.value) {
        {
            panda$core$Object* $tmp3903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3904 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3903));
            return $tmp3904;
        }
        }
        else {
        {
            panda$collections$Array* $tmp3905 = (panda$collections$Array*) malloc(40);
            $tmp3905->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3905->refCount.value = 1;
            panda$collections$Array$init($tmp3905);
            return ((panda$collections$ListView*) $tmp3905);
        }
        }
        }
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$IRNode* $match$2512_133907;
    org$pandalanguage$pandac$Type* type3909;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        {
            $match$2512_133907 = p_target;
            panda$core$Bit $tmp3908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2512_133907->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp3908.value) {
            {
                org$pandalanguage$pandac$Type** $tmp3910 = ((org$pandalanguage$pandac$Type**) ((char*) $match$2512_133907->$data + 16));
                type3909 = *$tmp3910;
                panda$collections$ListView* $tmp3911 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, type3909);
                return $tmp3911;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3913 = (($fn3912) p_target->$class->vtable[2])(p_target);
                panda$collections$ListView* $tmp3914 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, $tmp3913);
                return $tmp3914;
            }
            }
        }
    }
    }
    panda$collections$Array* $tmp3915 = (panda$collections$Array*) malloc(40);
    $tmp3915->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3915->refCount.value = 1;
    panda$collections$Array$init($tmp3915);
    return ((panda$collections$ListView*) $tmp3915);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base) {
    panda$core$String* name3920;
    org$pandalanguage$pandac$ClassDecl* cl3922;
    org$pandalanguage$pandac$Symbol* s3926;
    org$pandalanguage$pandac$MethodDecl* m3929;
    panda$core$Int64 $match$2533_213930;
    panda$collections$Iterator* test$Iter3937;
    org$pandalanguage$pandac$MethodDecl* test3949;
    org$pandalanguage$pandac$MethodRef* ref3961;
    org$pandalanguage$pandac$IRNode* methodRef3965;
    panda$collections$Array* args3968;
    org$pandalanguage$pandac$parser$Token$Kind $match$2556_93972;
    org$pandalanguage$pandac$IRNode* $match$2558_173974;
    panda$core$UInt64 int3976;
    panda$core$UInt64 int3982;
    panda$core$Real64 real3988;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4002;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4019;
    org$pandalanguage$pandac$IRNode* coerced4029;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4036;
    org$pandalanguage$pandac$Type* $tmp3918 = (($fn3917) p_base->$class->vtable[2])(p_base);
    panda$core$Bit $tmp3919 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit($tmp3918);
    if ($tmp3919.value) {
    {
        panda$core$String* $tmp3921 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
        name3920 = $tmp3921;
        org$pandalanguage$pandac$Type* $tmp3924 = (($fn3923) p_base->$class->vtable[2])(p_base);
        org$pandalanguage$pandac$ClassDecl* $tmp3925 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3924);
        cl3922 = $tmp3925;
        if (((panda$core$Bit) { cl3922 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3927 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3922);
        org$pandalanguage$pandac$Symbol* $tmp3928 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3927, name3920);
        s3926 = $tmp3928;
        if (((panda$core$Bit) { s3926 != NULL }).value) {
        {
            m3929 = NULL;
            {
                $match$2533_213930 = s3926->kind;
                panda$core$Bit $tmp3931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2533_213930, ((panda$core$Int64) { 204 }));
                if ($tmp3931.value) {
                {
                    m3929 = ((org$pandalanguage$pandac$MethodDecl*) s3926);
                    panda$core$Int64 $tmp3932 = panda$collections$Array$get_count$R$panda$core$Int64(m3929->parameters);
                    panda$core$Bit $tmp3933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3932, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3933.value);
                    panda$core$Bit $tmp3934 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3929->annotations);
                    panda$core$Bit $tmp3935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3934);
                    PANDA_ASSERT($tmp3935.value);
                }
                }
                else {
                panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2533_213930, ((panda$core$Int64) { 205 }));
                if ($tmp3936.value) {
                {
                    {
                        ITable* $tmp3938 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3926)->methods)->$class->itable;
                        while ($tmp3938->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3938 = $tmp3938->next;
                        }
                        $fn3940 $tmp3939 = $tmp3938->methods[0];
                        panda$collections$Iterator* $tmp3941 = $tmp3939(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3926)->methods));
                        test$Iter3937 = $tmp3941;
                        $l3942:;
                        ITable* $tmp3944 = test$Iter3937->$class->itable;
                        while ($tmp3944->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3944 = $tmp3944->next;
                        }
                        $fn3946 $tmp3945 = $tmp3944->methods[0];
                        panda$core$Bit $tmp3947 = $tmp3945(test$Iter3937);
                        panda$core$Bit $tmp3948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3947);
                        if (!$tmp3948.value) goto $l3943;
                        {
                            ITable* $tmp3950 = test$Iter3937->$class->itable;
                            while ($tmp3950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3950 = $tmp3950->next;
                            }
                            $fn3952 $tmp3951 = $tmp3950->methods[1];
                            panda$core$Object* $tmp3953 = $tmp3951(test$Iter3937);
                            test3949 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3953);
                            panda$core$Bit $tmp3955 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3949->annotations);
                            panda$core$Bit $tmp3956 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3955);
                            bool $tmp3954 = $tmp3956.value;
                            if (!$tmp3954) goto $l3957;
                            panda$core$Int64 $tmp3958 = panda$collections$Array$get_count$R$panda$core$Int64(test3949->parameters);
                            panda$core$Bit $tmp3959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3958, ((panda$core$Int64) { 0 }));
                            $tmp3954 = $tmp3959.value;
                            $l3957:;
                            panda$core$Bit $tmp3960 = { $tmp3954 };
                            if ($tmp3960.value) {
                            {
                                m3929 = test3949;
                                goto $l3943;
                            }
                            }
                        }
                        goto $l3942;
                        $l3943:;
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
                }
            }
            if (((panda$core$Bit) { m3929 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3929);
                org$pandalanguage$pandac$MethodRef* $tmp3962 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3962->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3962->refCount.value = 1;
                panda$collections$ListView* $tmp3964 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3962, m3929, $tmp3964);
                ref3961 = $tmp3962;
                org$pandalanguage$pandac$IRNode* $tmp3966 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3966->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3966->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$MethodRef($tmp3966, ((panda$core$Int64) { 21 }), p_position, p_base, ref3961);
                methodRef3965 = $tmp3966;
                panda$collections$Array* $tmp3969 = (panda$collections$Array*) malloc(40);
                $tmp3969->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3969->refCount.value = 1;
                panda$collections$Array$init($tmp3969);
                args3968 = $tmp3969;
                org$pandalanguage$pandac$IRNode* $tmp3971 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3965, ((panda$collections$ListView*) args3968));
                return $tmp3971;
            }
            }
        }
        }
    }
    }
    {
        $match$2556_93972 = p_op;
        panda$core$Bit $tmp3973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2556_93972.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp3973.value) {
        {
            {
                $match$2558_173974 = p_base;
                panda$core$Bit $tmp3975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2558_173974->$rawValue, ((panda$core$Int64) { 16 }));
                if ($tmp3975.value) {
                {
                    panda$core$UInt64* $tmp3977 = ((panda$core$UInt64*) ((char*) $match$2558_173974->$data + 24));
                    int3976 = *$tmp3977;
                    org$pandalanguage$pandac$IRNode* $tmp3978 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3978->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3978->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3980 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(int3976);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3978, ((panda$core$Int64) { 22 }), p_position, $tmp3980, int3976);
                    return $tmp3978;
                }
                }
                else {
                panda$core$Bit $tmp3981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2558_173974->$rawValue, ((panda$core$Int64) { 22 }));
                if ($tmp3981.value) {
                {
                    panda$core$UInt64* $tmp3983 = ((panda$core$UInt64*) ((char*) $match$2558_173974->$data + 24));
                    int3982 = *$tmp3983;
                    org$pandalanguage$pandac$IRNode* $tmp3984 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3984->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3984->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3986 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(int3982);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3984, ((panda$core$Int64) { 16 }), p_position, $tmp3986, int3982);
                    return $tmp3984;
                }
                }
                else {
                panda$core$Bit $tmp3987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2558_173974->$rawValue, ((panda$core$Int64) { 26 }));
                if ($tmp3987.value) {
                {
                    panda$core$Real64* $tmp3989 = ((panda$core$Real64*) ((char*) $match$2558_173974->$data + 24));
                    real3988 = *$tmp3989;
                    org$pandalanguage$pandac$IRNode* $tmp3990 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3990->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3990->refCount.value = 1;
                    panda$core$Real64 $tmp3992 = panda$core$Real64$$SUB$R$panda$core$Real64(real3988);
                    org$pandalanguage$pandac$Type* $tmp3993 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3992);
                    panda$core$Real64 $tmp3994 = panda$core$Real64$$SUB$R$panda$core$Real64(real3988);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3990, ((panda$core$Int64) { 26 }), p_position, $tmp3993, $tmp3994);
                    return $tmp3990;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp3996 = (($fn3995) p_base->$class->vtable[2])(p_base);
                    panda$core$Bit $tmp3997 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit($tmp3996);
                    if ($tmp3997.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp3998 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3998->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3998->refCount.value = 1;
                        org$pandalanguage$pandac$Position $tmp4001 = (($fn4000) p_base->$class->vtable[3])(p_base);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4002, ((panda$core$Int64) { 52 }));
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp3998, ((panda$core$Int64) { 24 }), $tmp4001, $tmp4002, p_base);
                        return $tmp3998;
                    }
                    }
                }
                }
                }
                }
            }
            org$pandalanguage$pandac$Position $tmp4004 = (($fn4003) p_base->$class->vtable[3])(p_base);
            org$pandalanguage$pandac$Type* $tmp4007 = (($fn4006) p_base->$class->vtable[2])(p_base);
            panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4005, ((panda$core$Object*) $tmp4007));
            panda$core$String* $tmp4010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, &$s4009);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4004, $tmp4010);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp4011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2556_93972.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp4011.value) {
        {
            org$pandalanguage$pandac$Type* $tmp4013 = (($fn4012) p_base->$class->vtable[2])(p_base);
            panda$core$Bit $tmp4014 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit($tmp4013);
            if ($tmp4014.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4015 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4015->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp4018 = (($fn4017) p_base->$class->vtable[3])(p_base);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4019, ((panda$core$Int64) { 50 }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp4015, ((panda$core$Int64) { 24 }), $tmp4018, $tmp4019, p_base);
                return $tmp4015;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Position $tmp4021 = (($fn4020) p_base->$class->vtable[3])(p_base);
                org$pandalanguage$pandac$Type* $tmp4024 = (($fn4023) p_base->$class->vtable[2])(p_base);
                panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4022, ((org$pandalanguage$pandac$Symbol*) $tmp4024)->name);
                panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4021, $tmp4027);
                return NULL;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp4028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2556_93972.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp4028.value) {
        {
            org$pandalanguage$pandac$Type* $tmp4030 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp4031 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp4030);
            coerced4029 = $tmp4031;
            if (((panda$core$Bit) { coerced4029 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4032 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4032->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4032->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4035 = (($fn4034) p_base->$class->vtable[3])(p_base);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4036, ((panda$core$Int64) { 49 }));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp4032, ((panda$core$Int64) { 24 }), $tmp4035, $tmp4036, coerced4029);
            return $tmp4032;
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
    org$pandalanguage$pandac$IRNode* base4037;
    org$pandalanguage$pandac$IRNode* $tmp4038 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawBase);
    base4037 = $tmp4038;
    if (((panda$core$Bit) { base4037 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4039 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_op, base4037);
    return $tmp4039;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawTarget, panda$collections$ImmutableArray* p_rawArgs) {
    org$pandalanguage$pandac$IRNode* target4040;
    panda$collections$Array* args4042;
    panda$collections$Iterator* arg$Iter4045;
    org$pandalanguage$pandac$ASTNode* arg4057;
    org$pandalanguage$pandac$IRNode* compiled4062;
    org$pandalanguage$pandac$IRNode* $tmp4041 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTarget);
    target4040 = $tmp4041;
    if (((panda$core$Bit) { target4040 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4043 = (panda$collections$Array*) malloc(40);
    $tmp4043->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4043->refCount.value = 1;
    panda$collections$Array$init($tmp4043);
    args4042 = $tmp4043;
    {
        ITable* $tmp4046 = ((panda$collections$Iterable*) p_rawArgs)->$class->itable;
        while ($tmp4046->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4046 = $tmp4046->next;
        }
        $fn4048 $tmp4047 = $tmp4046->methods[0];
        panda$collections$Iterator* $tmp4049 = $tmp4047(((panda$collections$Iterable*) p_rawArgs));
        arg$Iter4045 = $tmp4049;
        $l4050:;
        ITable* $tmp4052 = arg$Iter4045->$class->itable;
        while ($tmp4052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4052 = $tmp4052->next;
        }
        $fn4054 $tmp4053 = $tmp4052->methods[0];
        panda$core$Bit $tmp4055 = $tmp4053(arg$Iter4045);
        panda$core$Bit $tmp4056 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4055);
        if (!$tmp4056.value) goto $l4051;
        {
            ITable* $tmp4058 = arg$Iter4045->$class->itable;
            while ($tmp4058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4058 = $tmp4058->next;
            }
            $fn4060 $tmp4059 = $tmp4058->methods[1];
            panda$core$Object* $tmp4061 = $tmp4059(arg$Iter4045);
            arg4057 = ((org$pandalanguage$pandac$ASTNode*) $tmp4061);
            org$pandalanguage$pandac$IRNode* $tmp4063 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, arg4057);
            compiled4062 = $tmp4063;
            if (((panda$core$Bit) { compiled4062 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args4042, ((panda$core$Object*) compiled4062));
        }
        goto $l4050;
        $l4051:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4064 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4040, ((panda$collections$ListView*) args4042));
    return $tmp4064;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl4065;
    org$pandalanguage$pandac$IRNode* $match$2619_94066;
    org$pandalanguage$pandac$Type* type4068;
    panda$core$String* baseName4072;
    panda$core$String* fullName4074;
    org$pandalanguage$pandac$ClassDecl* cl4081;
    org$pandalanguage$pandac$SymbolTable* st4105;
    org$pandalanguage$pandac$Symbol* s4107;
    {
        $match$2619_94066 = p_base;
        panda$core$Bit $tmp4067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2619_94066->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp4067.value) {
        {
            org$pandalanguage$pandac$Type** $tmp4069 = ((org$pandalanguage$pandac$Type**) ((char*) $match$2619_94066->$data + 16));
            type4068 = *$tmp4069;
            org$pandalanguage$pandac$ClassDecl* $tmp4070 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, type4068);
            cl4065 = $tmp4070;
        }
        }
        else {
        panda$core$Bit $tmp4071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2619_94066->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp4071.value) {
        {
            panda$core$String** $tmp4073 = ((panda$core$String**) ((char*) $match$2619_94066->$data + 16));
            baseName4072 = *$tmp4073;
            panda$core$String* $tmp4075 = panda$core$String$convert$R$panda$core$String(baseName4072);
            panda$core$String* $tmp4077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4075, &$s4076);
            panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4077, p_name);
            panda$core$String* $tmp4080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4078, &$s4079);
            fullName4074 = $tmp4080;
            org$pandalanguage$pandac$ClassDecl* $tmp4082 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, fullName4074);
            cl4081 = $tmp4082;
            if (((panda$core$Bit) { cl4081 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4083 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4083->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4083->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp4085 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl4081);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4083, ((panda$core$Int64) { 34 }), p_position, $tmp4085);
                return $tmp4083;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4086 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4086->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4086->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4086, ((panda$core$Int64) { 35 }), p_position, fullName4074);
            return $tmp4086;
        }
        }
        else {
        panda$core$Bit $tmp4088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2619_94066->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp4088.value) {
        {
            panda$core$Object* $tmp4089 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4089));
            panda$core$Object* $tmp4090 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp4091 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4090)->rawSuper);
            cl4065 = $tmp4091;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp4093 = (($fn4092) p_base->$class->vtable[2])(p_base);
            panda$core$Bit $tmp4094 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit($tmp4093);
            panda$core$Bit $tmp4095 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4094);
            if ($tmp4095.value) {
            {
                org$pandalanguage$pandac$Type* $tmp4098 = (($fn4097) p_base->$class->vtable[2])(p_base);
                panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4096, ((panda$core$Object*) $tmp4098));
                panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, &$s4100);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4101);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Type* $tmp4103 = (($fn4102) p_base->$class->vtable[2])(p_base);
            org$pandalanguage$pandac$ClassDecl* $tmp4104 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4103);
            cl4065 = $tmp4104;
        }
        }
        }
        }
    }
    if (((panda$core$Bit) { cl4065 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4106 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl4065);
    st4105 = $tmp4106;
    org$pandalanguage$pandac$Symbol* $tmp4108 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st4105, p_name);
    s4107 = $tmp4108;
    if (((panda$core$Bit) { s4107 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp4111 = (($fn4110) p_base->$class->vtable[2])(p_base);
        panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4109, ((panda$core$Object*) $tmp4111));
        panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4113);
        panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, p_name);
        panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, &$s4116);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4117);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4118 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s4107, st4105);
    return $tmp4118;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawBase, panda$core$String* p_field) {
    org$pandalanguage$pandac$IRNode* base4119;
    org$pandalanguage$pandac$IRNode* $tmp4120 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawBase);
    base4119 = $tmp4120;
    if (((panda$core$Bit) { base4119 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4125;
    if (((panda$core$Bit) { base4119 != NULL }).value) goto $l4122; else goto $l4123;
    $l4122:;
    panda$core$Bit $tmp4126 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base4119->$rawValue, ((panda$core$Int64) { 35 }));
    $tmp4125 = $tmp4126;
    goto $l4124;
    $l4123:;
    $tmp4125 = ((panda$core$Bit) { true });
    goto $l4124;
    $l4124:;
    bool $tmp4121 = $tmp4125.value;
    if (!$tmp4121) goto $l4127;
    panda$core$Bit $tmp4131;
    if (((panda$core$Bit) { base4119 != NULL }).value) goto $l4128; else goto $l4129;
    $l4128:;
    panda$core$Bit $tmp4132 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base4119->$rawValue, ((panda$core$Int64) { 32 }));
    $tmp4131 = $tmp4132;
    goto $l4130;
    $l4129:;
    $tmp4131 = ((panda$core$Bit) { true });
    goto $l4130;
    $l4130:;
    $tmp4121 = $tmp4131.value;
    $l4127:;
    panda$core$Bit $tmp4133 = { $tmp4121 };
    if ($tmp4133.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4134 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base4119);
        base4119 = $tmp4134;
    }
    }
    if (((panda$core$Bit) { base4119 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4135 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base4119, p_field);
    return $tmp4135;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* s4136;
    org$pandalanguage$pandac$Symbol* $tmp4137 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, p_name);
    s4136 = $tmp4137;
    if (((panda$core$Bit) { s4136 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp4138 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
        s4136 = ((org$pandalanguage$pandac$Symbol*) $tmp4138);
    }
    }
    if (((panda$core$Bit) { s4136 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4139 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, NULL, s4136, self->symbolTable);
        return $tmp4139;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4140 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4140->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4140->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4140, ((panda$core$Int64) { 35 }), p_position, p_name);
    return $tmp4140;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$Type* resolved4142;
    org$pandalanguage$pandac$Type* $tmp4143 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_type);
    org$pandalanguage$pandac$Type* $tmp4144 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4143);
    resolved4142 = $tmp4144;
    if (((panda$core$Bit) { resolved4142 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4145 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4145->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp4148 = (($fn4147) p_type->$class->vtable[2])(p_type);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4145, ((panda$core$Int64) { 34 }), $tmp4148, resolved4142);
    return $tmp4145;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawStart, org$pandalanguage$pandac$ASTNode* p_rawEnd, panda$core$Bit p_inclusive, org$pandalanguage$pandac$ASTNode* p_rawStep) {
    org$pandalanguage$pandac$IRNode* start4149;
    org$pandalanguage$pandac$IRNode* end4154;
    org$pandalanguage$pandac$IRNode* step4159;
    if (((panda$core$Bit) { p_rawStart != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4150 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawStart);
        start4149 = $tmp4150;
        if (((panda$core$Bit) { start4149 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4151 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4151->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4151->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp4153 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4151, ((panda$core$Int64) { 23 }), p_position, $tmp4153);
        start4149 = $tmp4151;
    }
    }
    if (((panda$core$Bit) { p_rawEnd != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4155 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawEnd);
        end4154 = $tmp4155;
        if (((panda$core$Bit) { end4154 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4156 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4156->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4156->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp4158 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4156, ((panda$core$Int64) { 23 }), p_position, $tmp4158);
        end4154 = $tmp4156;
    }
    }
    if (((panda$core$Bit) { p_rawStep != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4160 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawStep);
        step4159 = $tmp4160;
        if (((panda$core$Bit) { step4159 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp4164;
        if (((panda$core$Bit) { step4159 != NULL }).value) goto $l4161; else goto $l4162;
        $l4161:;
        panda$core$Bit $tmp4165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step4159->$rawValue, ((panda$core$Int64) { 23 }));
        $tmp4164 = $tmp4165;
        goto $l4163;
        $l4162:;
        $tmp4164 = ((panda$core$Bit) { false });
        goto $l4163;
        $l4163:;
        if ($tmp4164.value) {
        {
            org$pandalanguage$pandac$Position $tmp4167 = (($fn4166) step4159->$class->vtable[3])(step4159);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4167, &$s4168);
            return NULL;
        }
        }
    }
    }
    else {
    {
        step4159 = NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4169 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4169->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4169->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode($tmp4169, ((panda$core$Int64) { 39 }), p_position, start4149, end4154, p_inclusive, step4159);
    return $tmp4169;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp4171 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4171->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4171->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4171, ((panda$core$Int64) { 31 }), p_position, p_s);
    return $tmp4171;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$Type* type4176;
    org$pandalanguage$pandac$ClassDecl* cl4177;
    panda$collections$Array* subtypes4184;
    panda$core$MutableString* name4188;
    panda$core$Char8 $tmp4191;
    panda$core$String* separator4192;
    panda$collections$Iterator* p$Iter4194;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p4206;
    panda$collections$Array* pType4211;
    panda$core$String* pName4214;
    panda$core$Char8 $tmp4224;
    panda$core$Object* $tmp4173 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp4174 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4173)->annotations);
    if ($tmp4174.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4175);
        return NULL;
    }
    }
    panda$core$Object* $tmp4178 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl4177 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4178);
    ITable* $tmp4179 = ((panda$collections$CollectionView*) cl4177->parameters)->$class->itable;
    while ($tmp4179->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4179 = $tmp4179->next;
    }
    $fn4181 $tmp4180 = $tmp4179->methods[0];
    panda$core$Int64 $tmp4182 = $tmp4180(((panda$collections$CollectionView*) cl4177->parameters));
    panda$core$Bit $tmp4183 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4182, ((panda$core$Int64) { 0 }));
    if ($tmp4183.value) {
    {
        panda$collections$Array* $tmp4185 = (panda$collections$Array*) malloc(40);
        $tmp4185->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4185->refCount.value = 1;
        panda$collections$Array$init($tmp4185);
        subtypes4184 = $tmp4185;
        org$pandalanguage$pandac$Type* $tmp4187 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl4177);
        panda$collections$Array$add$panda$collections$Array$T(subtypes4184, ((panda$core$Object*) $tmp4187));
        panda$core$MutableString* $tmp4189 = (panda$core$MutableString*) malloc(48);
        $tmp4189->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp4189->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp4189, ((org$pandalanguage$pandac$Symbol*) cl4177)->name);
        name4188 = $tmp4189;
        panda$core$Char8$init$panda$core$UInt8(&$tmp4191, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name4188, $tmp4191);
        separator4192 = &$s4193;
        {
            ITable* $tmp4195 = ((panda$collections$Iterable*) cl4177->parameters)->$class->itable;
            while ($tmp4195->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4195 = $tmp4195->next;
            }
            $fn4197 $tmp4196 = $tmp4195->methods[0];
            panda$collections$Iterator* $tmp4198 = $tmp4196(((panda$collections$Iterable*) cl4177->parameters));
            p$Iter4194 = $tmp4198;
            $l4199:;
            ITable* $tmp4201 = p$Iter4194->$class->itable;
            while ($tmp4201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4201 = $tmp4201->next;
            }
            $fn4203 $tmp4202 = $tmp4201->methods[0];
            panda$core$Bit $tmp4204 = $tmp4202(p$Iter4194);
            panda$core$Bit $tmp4205 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4204);
            if (!$tmp4205.value) goto $l4200;
            {
                ITable* $tmp4207 = p$Iter4194->$class->itable;
                while ($tmp4207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4207 = $tmp4207->next;
                }
                $fn4209 $tmp4208 = $tmp4207->methods[1];
                panda$core$Object* $tmp4210 = $tmp4208(p$Iter4194);
                p4206 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp4210);
                panda$collections$Array* $tmp4212 = (panda$collections$Array*) malloc(40);
                $tmp4212->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4212->refCount.value = 1;
                panda$collections$Array$init($tmp4212);
                pType4211 = $tmp4212;
                panda$collections$Array$add$panda$collections$Array$T(pType4211, ((panda$core$Object*) p4206->bound));
                panda$core$String* $tmp4215 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl4177)->name);
                panda$core$String* $tmp4217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4215, &$s4216);
                panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4217, ((org$pandalanguage$pandac$Symbol*) p4206)->name);
                panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, &$s4219);
                pName4214 = $tmp4220;
                panda$core$MutableString$append$panda$core$String(name4188, separator4192);
                panda$core$MutableString$append$panda$core$String(name4188, pName4214);
                org$pandalanguage$pandac$Type* $tmp4221 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp4221->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp4221->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp4221, p4206);
                panda$collections$Array$add$panda$collections$Array$T(subtypes4184, ((panda$core$Object*) $tmp4221));
                separator4192 = &$s4223;
            }
            goto $l4199;
            $l4200:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp4224, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name4188, $tmp4224);
        org$pandalanguage$pandac$Type* $tmp4225 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp4225->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp4225->refCount.value = 1;
        panda$core$String* $tmp4227 = panda$core$MutableString$finish$R$panda$core$String(name4188);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp4225, $tmp4227, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes4184), ((panda$core$Bit) { true }));
        type4176 = $tmp4225;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4228 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl4177);
        type4176 = $tmp4228;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4229 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4229->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4229, ((panda$core$Int64) { 30 }), p_position, type4176);
    return $tmp4229;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$ClassDecl* cl4234;
    panda$core$Object* $tmp4231 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp4232 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4231)->annotations);
    if ($tmp4232.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4233);
        return NULL;
    }
    }
    panda$core$Object* $tmp4235 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl4234 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4235);
    PANDA_ASSERT(cl4234->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp4236 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4236->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4236->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4236, ((panda$core$Int64) { 32 }), p_position, cl4234->rawSuper);
    return $tmp4236;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value4238;
    panda$core$String$Index$nullable index4240;
    org$pandalanguage$pandac$Type* type4247;
    org$pandalanguage$pandac$IRNode* base4249;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp4252;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp4255;
    org$pandalanguage$pandac$Type* type4259;
    org$pandalanguage$pandac$IRNode* $tmp4239 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value4238 = $tmp4239;
    if (((panda$core$Bit) { value4238 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp4242 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s4241);
    index4240 = $tmp4242;
    panda$core$Bit $tmp4244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp4243 = $tmp4244.value;
    if (!$tmp4243) goto $l4245;
    $tmp4243 = ((panda$core$Bit) { index4240.nonnull }).value;
    $l4245:;
    panda$core$Bit $tmp4246 = { $tmp4243 };
    if ($tmp4246.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp4248 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type4247 = $tmp4248;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type4247 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp4250 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp4250->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp4250->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp4252, ((panda$core$String$Index$nullable) { .nonnull = false }), index4240, ((panda$core$Bit) { false }));
            panda$core$String* $tmp4253 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp4252);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4250, $tmp4253, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp4254 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp4250);
            base4249 = $tmp4254;
            if (((panda$core$Bit) { base4249 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp4256 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index4240.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp4255, ((panda$core$String$Index$nullable) { $tmp4256, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp4257 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp4255);
            org$pandalanguage$pandac$IRNode* $tmp4258 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base4249, $tmp4257);
            return $tmp4258;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp4260 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type4259 = $tmp4260;
    if (((panda$core$Bit) { type4259 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp4261 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value4238, type4259);
    if (((panda$core$Bit) { $tmp4261.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4262 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4238, type4259);
        return $tmp4262;
    }
    }
    panda$core$Bit $tmp4263 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value4238, type4259);
    if ($tmp4263.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4264 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value4238, p_position, ((panda$core$Bit) { true }), type4259);
        return $tmp4264;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4267 = (($fn4266) value4238->$class->vtable[2])(value4238);
        panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4265, ((panda$core$Object*) $tmp4267));
        panda$core$String* $tmp4270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, &$s4269);
        panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4271, ((panda$core$Object*) type4259));
        panda$core$String* $tmp4274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4272, &$s4273);
        panda$core$String* $tmp4275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4270, $tmp4274);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4275);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$IRNode* $tmp4276 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4276->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4276->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4278 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4276, ((panda$core$Int64) { 23 }), p_position, $tmp4278);
    return $tmp4276;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawBase, org$pandalanguage$pandac$ChoiceEntry* p_ce, panda$core$Int64 p_field) {
    org$pandalanguage$pandac$IRNode* base4279;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, p_ce);
    org$pandalanguage$pandac$IRNode* $tmp4280 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawBase);
    base4279 = $tmp4280;
    if (((panda$core$Bit) { base4279 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4281 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4281->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4281->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp4281, ((panda$core$Int64) { 8 }), p_position, base4279, p_ce, p_field);
    return $tmp4281;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$ASTNode* $match$2824_94283;
    org$pandalanguage$pandac$Position position4285;
    org$pandalanguage$pandac$ASTNode* left4287;
    org$pandalanguage$pandac$parser$Token$Kind op4289;
    org$pandalanguage$pandac$ASTNode* right4291;
    org$pandalanguage$pandac$Position position4295;
    panda$core$Bit value4297;
    org$pandalanguage$pandac$Position position4303;
    org$pandalanguage$pandac$ASTNode* target4305;
    panda$collections$ImmutableArray* args4307;
    org$pandalanguage$pandac$IRNode* result4309;
    org$pandalanguage$pandac$IRNode* $match$2832_214318;
    org$pandalanguage$pandac$MethodRef* mref4320;
    org$pandalanguage$pandac$Position position4328;
    org$pandalanguage$pandac$ASTNode* base4330;
    panda$core$String* field4332;
    org$pandalanguage$pandac$Position position4336;
    panda$core$String* name4338;
    org$pandalanguage$pandac$Position position4342;
    panda$core$UInt64 value4344;
    org$pandalanguage$pandac$Position position4350;
    panda$core$Real64 value4352;
    org$pandalanguage$pandac$Position position4358;
    org$pandalanguage$pandac$parser$Token$Kind op4360;
    org$pandalanguage$pandac$ASTNode* base4362;
    org$pandalanguage$pandac$Position position4366;
    org$pandalanguage$pandac$ASTNode* start4368;
    org$pandalanguage$pandac$ASTNode* end4370;
    panda$core$Bit inclusive4372;
    org$pandalanguage$pandac$ASTNode* step4374;
    org$pandalanguage$pandac$Position position4378;
    panda$core$String* str4380;
    org$pandalanguage$pandac$Position position4394;
    org$pandalanguage$pandac$Position position4398;
    org$pandalanguage$pandac$Position position4402;
    org$pandalanguage$pandac$Position position4406;
    org$pandalanguage$pandac$ASTNode* base4408;
    org$pandalanguage$pandac$ChoiceEntry* ce4410;
    panda$core$Int64 field4412;
    {
        $match$2824_94283 = p_e;
        panda$core$Bit $tmp4284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp4284.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4286 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4285 = *$tmp4286;
            org$pandalanguage$pandac$ASTNode** $tmp4288 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 16));
            left4287 = *$tmp4288;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp4290 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$2824_94283->$data + 24));
            op4289 = *$tmp4290;
            org$pandalanguage$pandac$ASTNode** $tmp4292 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 32));
            right4291 = *$tmp4292;
            org$pandalanguage$pandac$IRNode* $tmp4293 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position4285, left4287, op4289, right4291);
            return $tmp4293;
        }
        }
        else {
        panda$core$Bit $tmp4294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp4294.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4295 = *$tmp4296;
            panda$core$Bit* $tmp4298 = ((panda$core$Bit*) ((char*) $match$2824_94283->$data + 16));
            value4297 = *$tmp4298;
            org$pandalanguage$pandac$IRNode* $tmp4299 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4299->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4299->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp4301 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp4299, ((panda$core$Int64) { 2 }), position4295, $tmp4301, value4297);
            return $tmp4299;
        }
        }
        else {
        panda$core$Bit $tmp4302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp4302.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4303 = *$tmp4304;
            org$pandalanguage$pandac$ASTNode** $tmp4306 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 16));
            target4305 = *$tmp4306;
            panda$collections$ImmutableArray** $tmp4308 = ((panda$collections$ImmutableArray**) ((char*) $match$2824_94283->$data + 24));
            args4307 = *$tmp4308;
            org$pandalanguage$pandac$IRNode* $tmp4310 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position4303, target4305, args4307);
            result4309 = $tmp4310;
            bool $tmp4311 = ((panda$core$Bit) { result4309 != NULL }).value;
            if (!$tmp4311) goto $l4312;
            org$pandalanguage$pandac$Type* $tmp4314 = (($fn4313) result4309->$class->vtable[2])(result4309);
            org$pandalanguage$pandac$Type* $tmp4315 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp4316 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp4314, $tmp4315);
            $tmp4311 = $tmp4316.value;
            $l4312:;
            panda$core$Bit $tmp4317 = { $tmp4311 };
            if ($tmp4317.value) {
            {
                {
                    $match$2832_214318 = result4309;
                    panda$core$Bit $tmp4319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2832_214318->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp4319.value) {
                    {
                        org$pandalanguage$pandac$MethodRef** $tmp4321 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$2832_214318->$data + 24));
                        mref4320 = *$tmp4321;
                        org$pandalanguage$pandac$Position $tmp4323 = (($fn4322) result4309->$class->vtable[3])(result4309);
                        panda$core$String* $tmp4324 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(mref4320->value);
                        panda$core$String* $tmp4326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4324, &$s4325);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4323, $tmp4326);
                        return NULL;
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
            return result4309;
        }
        }
        else {
        panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp4327.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4329 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4328 = *$tmp4329;
            org$pandalanguage$pandac$ASTNode** $tmp4331 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 16));
            base4330 = *$tmp4331;
            panda$core$String** $tmp4333 = ((panda$core$String**) ((char*) $match$2824_94283->$data + 24));
            field4332 = *$tmp4333;
            org$pandalanguage$pandac$IRNode* $tmp4334 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, position4328, base4330, field4332);
            return $tmp4334;
        }
        }
        else {
        panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp4335.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4336 = *$tmp4337;
            panda$core$String** $tmp4339 = ((panda$core$String**) ((char*) $match$2824_94283->$data + 16));
            name4338 = *$tmp4339;
            org$pandalanguage$pandac$IRNode* $tmp4340 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, position4336, name4338);
            return $tmp4340;
        }
        }
        else {
        panda$core$Bit $tmp4341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp4341.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4343 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4342 = *$tmp4343;
            panda$core$UInt64* $tmp4345 = ((panda$core$UInt64*) ((char*) $match$2824_94283->$data + 16));
            value4344 = *$tmp4345;
            org$pandalanguage$pandac$IRNode* $tmp4346 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4346->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4346->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp4348 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value4344);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp4346, ((panda$core$Int64) { 16 }), position4342, $tmp4348, value4344);
            return $tmp4346;
        }
        }
        else {
        panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp4349.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4351 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4350 = *$tmp4351;
            panda$core$Real64* $tmp4353 = ((panda$core$Real64*) ((char*) $match$2824_94283->$data + 16));
            value4352 = *$tmp4353;
            org$pandalanguage$pandac$IRNode* $tmp4354 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4354->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4354->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp4356 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(value4352);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp4354, ((panda$core$Int64) { 26 }), position4350, $tmp4356, value4352);
            return $tmp4354;
        }
        }
        else {
        panda$core$Bit $tmp4357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp4357.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4359 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4358 = *$tmp4359;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp4361 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$2824_94283->$data + 16));
            op4360 = *$tmp4361;
            org$pandalanguage$pandac$ASTNode** $tmp4363 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 24));
            base4362 = *$tmp4363;
            org$pandalanguage$pandac$IRNode* $tmp4364 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position4358, op4360, base4362);
            return $tmp4364;
        }
        }
        else {
        panda$core$Bit $tmp4365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp4365.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4367 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4366 = *$tmp4367;
            org$pandalanguage$pandac$ASTNode** $tmp4369 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 16));
            start4368 = *$tmp4369;
            org$pandalanguage$pandac$ASTNode** $tmp4371 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 24));
            end4370 = *$tmp4371;
            panda$core$Bit* $tmp4373 = ((panda$core$Bit*) ((char*) $match$2824_94283->$data + 32));
            inclusive4372 = *$tmp4373;
            org$pandalanguage$pandac$ASTNode** $tmp4375 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 33));
            step4374 = *$tmp4375;
            org$pandalanguage$pandac$IRNode* $tmp4376 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position4366, start4368, end4370, inclusive4372, step4374);
            return $tmp4376;
        }
        }
        else {
        panda$core$Bit $tmp4377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp4377.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4379 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4378 = *$tmp4379;
            panda$core$String** $tmp4381 = ((panda$core$String**) ((char*) $match$2824_94283->$data + 16));
            str4380 = *$tmp4381;
            org$pandalanguage$pandac$IRNode* $tmp4382 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, position4378, str4380);
            return $tmp4382;
        }
        }
        else {
        panda$core$Bit $tmp4385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 35 }));
        bool $tmp4384 = $tmp4385.value;
        if ($tmp4384) goto $l4386;
        panda$core$Bit $tmp4387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 17 }));
        $tmp4384 = $tmp4387.value;
        $l4386:;
        panda$core$Bit $tmp4388 = { $tmp4384 };
        bool $tmp4383 = $tmp4388.value;
        if ($tmp4383) goto $l4389;
        panda$core$Bit $tmp4390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 25 }));
        $tmp4383 = $tmp4390.value;
        $l4389:;
        panda$core$Bit $tmp4391 = { $tmp4383 };
        if ($tmp4391.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4392 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp4392;
        }
        }
        else {
        panda$core$Bit $tmp4393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp4393.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4395 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4394 = *$tmp4395;
            org$pandalanguage$pandac$IRNode* $tmp4396 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, position4394);
            return $tmp4396;
        }
        }
        else {
        panda$core$Bit $tmp4397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp4397.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4398 = *$tmp4399;
            org$pandalanguage$pandac$IRNode* $tmp4400 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, position4398);
            return $tmp4400;
        }
        }
        else {
        panda$core$Bit $tmp4401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp4401.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4403 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4402 = *$tmp4403;
            org$pandalanguage$pandac$IRNode* $tmp4404 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode(self, position4402);
            return $tmp4404;
        }
        }
        else {
        panda$core$Bit $tmp4405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2824_94283->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp4405.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2824_94283->$data + 0));
            position4406 = *$tmp4407;
            org$pandalanguage$pandac$ASTNode** $tmp4409 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2824_94283->$data + 16));
            base4408 = *$tmp4409;
            org$pandalanguage$pandac$ChoiceEntry** $tmp4411 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$2824_94283->$data + 24));
            ce4410 = *$tmp4411;
            panda$core$Int64* $tmp4413 = ((panda$core$Int64*) ((char*) $match$2824_94283->$data + 32));
            field4412 = *$tmp4413;
            org$pandalanguage$pandac$IRNode* $tmp4414 = org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, position4406, base4408, ce4410, field4412);
            return $tmp4414;
        }
        }
        }
        }
        }
        }
        }
        }
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
panda$collections$ImmutableArray* org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_statements) {
    org$pandalanguage$pandac$SymbolTable* symbols4415;
    panda$collections$Array* result4418;
    panda$collections$Iterator* stmt$Iter4421;
    org$pandalanguage$pandac$ASTNode* stmt4433;
    org$pandalanguage$pandac$IRNode* compiled4438;
    org$pandalanguage$pandac$SymbolTable* $tmp4416 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4416->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4416->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4416, self->symbolTable);
    symbols4415 = $tmp4416;
    self->symbolTable = symbols4415;
    panda$collections$Array* $tmp4419 = (panda$collections$Array*) malloc(40);
    $tmp4419->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4419->refCount.value = 1;
    panda$collections$Array$init($tmp4419);
    result4418 = $tmp4419;
    {
        ITable* $tmp4422 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp4422->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4422 = $tmp4422->next;
        }
        $fn4424 $tmp4423 = $tmp4422->methods[0];
        panda$collections$Iterator* $tmp4425 = $tmp4423(((panda$collections$Iterable*) p_statements));
        stmt$Iter4421 = $tmp4425;
        $l4426:;
        ITable* $tmp4428 = stmt$Iter4421->$class->itable;
        while ($tmp4428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4428 = $tmp4428->next;
        }
        $fn4430 $tmp4429 = $tmp4428->methods[0];
        panda$core$Bit $tmp4431 = $tmp4429(stmt$Iter4421);
        panda$core$Bit $tmp4432 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4431);
        if (!$tmp4432.value) goto $l4427;
        {
            ITable* $tmp4434 = stmt$Iter4421->$class->itable;
            while ($tmp4434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4434 = $tmp4434->next;
            }
            $fn4436 $tmp4435 = $tmp4434->methods[1];
            panda$core$Object* $tmp4437 = $tmp4435(stmt$Iter4421);
            stmt4433 = ((org$pandalanguage$pandac$ASTNode*) $tmp4437);
            org$pandalanguage$pandac$IRNode* $tmp4439 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt4433);
            compiled4438 = $tmp4439;
            if (((panda$core$Bit) { compiled4438 == NULL }).value) {
            {
                panda$core$Object* $tmp4440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4415->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4440);
                return NULL;
            }
            }
            panda$core$Bit $tmp4444;
            if (((panda$core$Bit) { compiled4438 != NULL }).value) goto $l4441; else goto $l4442;
            $l4441:;
            panda$core$Bit $tmp4445 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled4438->$rawValue, ((panda$core$Int64) { 37 }));
            $tmp4444 = $tmp4445;
            goto $l4443;
            $l4442:;
            $tmp4444 = ((panda$core$Bit) { true });
            goto $l4443;
            $l4443:;
            PANDA_ASSERT($tmp4444.value);
            panda$collections$Array$add$panda$collections$Array$T(result4418, ((panda$core$Object*) compiled4438));
        }
        goto $l4426;
        $l4427:;
    }
    panda$core$Object* $tmp4446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4415->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4446);
    panda$collections$ImmutableArray* $tmp4447 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4418);
    return $tmp4447;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_statements) {
    panda$collections$ImmutableArray* result4448;
    panda$collections$ImmutableArray* $tmp4449 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_position, p_statements);
    result4448 = $tmp4449;
    if (((panda$core$Bit) { result4448 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4450 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4450->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4450->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4450, ((panda$core$Int64) { 3 }), p_position, result4448);
    return $tmp4450;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawTest, panda$collections$ListView* p_rawIfTrue, org$pandalanguage$pandac$ASTNode* p_rawIfFalse) {
    org$pandalanguage$pandac$IRNode* test4452;
    panda$collections$ImmutableArray* ifTrue4456;
    org$pandalanguage$pandac$IRNode* ifFalse4458;
    org$pandalanguage$pandac$IRNode* $tmp4453 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    org$pandalanguage$pandac$Type* $tmp4454 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4455 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4453, $tmp4454);
    test4452 = $tmp4455;
    if (((panda$core$Bit) { test4452 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp4457 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_position, p_rawIfTrue);
    ifTrue4456 = $tmp4457;
    if (((panda$core$Bit) { ifTrue4456 == NULL }).value) {
    {
        return NULL;
    }
    }
    if (((panda$core$Bit) { p_rawIfFalse != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4459 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawIfFalse);
        ifFalse4458 = $tmp4459;
        if (((panda$core$Bit) { ifFalse4458 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        ifFalse4458 = NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4460 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4460->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4460->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp4460, ((panda$core$Int64) { 15 }), p_position, test4452, ifTrue4456, ifFalse4458);
    return $tmp4460;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* type14466;
    org$pandalanguage$pandac$Type* type24469;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4480;
    panda$core$Bit $tmp4462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4462.value) {
    {
        panda$core$Object* $tmp4463 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4464 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp4463));
        return $tmp4464;
    }
    }
    panda$core$Bit $tmp4465 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    if ($tmp4465.value) {
    {
        panda$core$Object* $tmp4467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp4468 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4467));
        type14466 = $tmp4468;
        panda$core$Object* $tmp4470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
        type24469 = ((org$pandalanguage$pandac$Type*) $tmp4470);
        panda$core$Bit $tmp4471 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(type14466, type24469);
        if ($tmp4471.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$Bit $tmp4474 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(type14466);
        bool $tmp4473 = $tmp4474.value;
        if (!$tmp4473) goto $l4475;
        panda$core$Bit $tmp4477 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type24469)->name, &$s4476);
        $tmp4473 = $tmp4477.value;
        $l4475:;
        panda$core$Bit $tmp4478 = { $tmp4473 };
        bool $tmp4472 = $tmp4478.value;
        if (!$tmp4472) goto $l4479;
        panda$core$Int64 $tmp4482 = panda$core$String$length$R$panda$core$Int64(&$s4481);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4480, ((panda$core$Int64$nullable) { $tmp4482, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp4483 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) type24469)->name, $tmp4480);
        panda$core$Bit $tmp4484 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type14466)->name, $tmp4483);
        $tmp4472 = $tmp4484.value;
        $l4479:;
        panda$core$Bit $tmp4485 = { $tmp4472 };
        if ($tmp4485.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$String* $tmp4487 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4486, ((panda$core$Object*) p_type));
        panda$core$String* $tmp4489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4487, &$s4488);
        panda$core$String* $tmp4491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4489, &$s4490);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4491);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, panda$collections$ListView* p_rawBody) {
    org$pandalanguage$pandac$Type* elementType4492;
    org$pandalanguage$pandac$IRNode* list4493;
    org$pandalanguage$pandac$ASTNode* $match$2944_94494;
    org$pandalanguage$pandac$Position position4496;
    org$pandalanguage$pandac$ASTNode* type4498;
    org$pandalanguage$pandac$Type* t4500;
    org$pandalanguage$pandac$IRNode* $match$2955_174514;
    org$pandalanguage$pandac$IRNode* step4516;
    org$pandalanguage$pandac$Type* listType4533;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4583;
    org$pandalanguage$pandac$Variable$Kind $tmp4584;
    panda$collections$ImmutableArray* body4586;
    {
        $match$2944_94494 = p_astTarget;
        panda$core$Bit $tmp4495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2944_94494->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp4495.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4497 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2944_94494->$data + 0));
            position4496 = *$tmp4497;
            org$pandalanguage$pandac$ASTNode** $tmp4499 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2944_94494->$data + 24));
            type4498 = *$tmp4499;
            org$pandalanguage$pandac$Type* $tmp4501 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, type4498);
            org$pandalanguage$pandac$Type* $tmp4502 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4501);
            t4500 = $tmp4502;
            panda$core$Bit $tmp4503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4500->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp4503.value) {
            {
                panda$core$String* $tmp4505 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4504, ((panda$core$Object*) t4500));
                panda$core$String* $tmp4507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4505, &$s4506);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position4496, $tmp4507);
                return NULL;
            }
            }
            panda$core$Bit $tmp4508 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t4500);
            panda$core$Bit $tmp4509 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4508);
            if ($tmp4509.value) {
            {
                panda$core$String* $tmp4511 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4510, ((panda$core$Object*) t4500));
                panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4511, &$s4512);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position4496, $tmp4513);
                return NULL;
            }
            }
            {
                $match$2955_174514 = p_rawList;
                panda$core$Bit $tmp4515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2955_174514->$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp4515.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp4517 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$2955_174514->$data + 33));
                    step4516 = *$tmp4517;
                    if (((panda$core$Bit) { step4516 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp4518 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4500);
                        org$pandalanguage$pandac$IRNode* $tmp4519 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4518);
                        list4493 = $tmp4519;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$Type* $tmp4520 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4500);
                        org$pandalanguage$pandac$IRNode* $tmp4521 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4520);
                        list4493 = $tmp4521;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp4523 = (($fn4522) p_rawList->$class->vtable[2])(p_rawList);
                    panda$core$Bit $tmp4524 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp4523);
                    if ($tmp4524.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp4525 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4500);
                        org$pandalanguage$pandac$IRNode* $tmp4526 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4525);
                        list4493 = $tmp4526;
                    }
                    }
                    else {
                    org$pandalanguage$pandac$Type* $tmp4527 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4500);
                    panda$core$Int64$nullable $tmp4528 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp4527);
                    if (((panda$core$Bit) { $tmp4528.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp4529 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4500);
                        org$pandalanguage$pandac$IRNode* $tmp4530 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4529);
                        list4493 = $tmp4530;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$Type* $tmp4531 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4500);
                        org$pandalanguage$pandac$IRNode* $tmp4532 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4531);
                        list4493 = $tmp4532;
                    }
                    }
                    }
                }
                }
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp4534 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
            listType4533 = $tmp4534;
            panda$core$Bit $tmp4536 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType4533);
            bool $tmp4535 = $tmp4536.value;
            if ($tmp4535) goto $l4537;
            panda$core$Bit $tmp4538 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType4533);
            $tmp4535 = $tmp4538.value;
            $l4537:;
            panda$core$Bit $tmp4539 = { $tmp4535 };
            PANDA_ASSERT($tmp4539.value);
            panda$core$Object* $tmp4540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4533->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp4541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4540)->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp4541.value) {
            {
                panda$core$Bit $tmp4542 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType4533);
                if ($tmp4542.value) {
                {
                    panda$core$Object* $tmp4543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4533->subtypes, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp4544 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4543));
                    org$pandalanguage$pandac$Type* $tmp4545 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp4544);
                    listType4533 = $tmp4545;
                }
                }
                else {
                {
                    panda$core$Object* $tmp4546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4533->subtypes, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp4547 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4546));
                    org$pandalanguage$pandac$Type* $tmp4548 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp4547);
                    listType4533 = $tmp4548;
                }
                }
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4549 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType4533);
            list4493 = $tmp4549;
        }
        }
    }
    if (((panda$core$Bit) { list4493 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Position $tmp4551 = (($fn4550) list4493->$class->vtable[3])(list4493);
    org$pandalanguage$pandac$Type* $tmp4553 = (($fn4552) list4493->$class->vtable[2])(list4493);
    panda$core$Bit $tmp4554 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp4551, $tmp4553);
    panda$core$Bit $tmp4555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4554);
    if ($tmp4555.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4557 = (($fn4556) list4493->$class->vtable[2])(list4493);
    panda$core$Bit $tmp4558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4557->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4558.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4560 = (($fn4559) list4493->$class->vtable[2])(list4493);
        panda$core$Object* $tmp4561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4560->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4561)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp4562.value);
        org$pandalanguage$pandac$Type* $tmp4564 = (($fn4563) list4493->$class->vtable[2])(list4493);
        panda$core$Object* $tmp4565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4564->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp4565)->subtypes, ((panda$core$Int64) { 1 }));
        elementType4492 = ((org$pandalanguage$pandac$Type*) $tmp4566);
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4568 = (($fn4567) list4493->$class->vtable[2])(list4493);
        panda$core$Bit $tmp4569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4568->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp4569.value);
        org$pandalanguage$pandac$Type* $tmp4571 = (($fn4570) list4493->$class->vtable[2])(list4493);
        panda$core$Object* $tmp4572 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4571->subtypes, ((panda$core$Int64) { 1 }));
        elementType4492 = ((org$pandalanguage$pandac$Type*) $tmp4572);
    }
    }
    panda$core$Bit $tmp4573 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType4492);
    panda$core$Bit $tmp4574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4573);
    if ($tmp4574.value) {
    {
        org$pandalanguage$pandac$Position $tmp4576 = (($fn4575) list4493->$class->vtable[3])(list4493);
        org$pandalanguage$pandac$Type* $tmp4579 = (($fn4578) list4493->$class->vtable[2])(list4493);
        panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4577, ((panda$core$Object*) $tmp4579));
        panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4576, $tmp4582);
    }
    }
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4584, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4585 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp4584, NULL, elementType4492);
    target4583 = $tmp4585;
    if (((panda$core$Bit) { target4583 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target4583->value == NULL }).value);
    panda$collections$ImmutableArray* $tmp4587 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_position, p_rawBody);
    body4586 = $tmp4587;
    if (((panda$core$Bit) { body4586 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4588 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4588->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4588->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4588, ((panda$core$Int64) { 25 }), p_position, p_label, target4583->target, list4493, body4586);
    return $tmp4588;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, panda$collections$ListView* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4601;
    org$pandalanguage$pandac$Variable$Kind $tmp4602;
    org$pandalanguage$pandac$IRNode* $match$3030_94607;
    org$pandalanguage$pandac$Variable* targetVar4609;
    panda$collections$Array* subtypes4611;
    org$pandalanguage$pandac$Type* iterType4617;
    org$pandalanguage$pandac$Variable* iter4628;
    org$pandalanguage$pandac$Variable$Kind $tmp4633;
    panda$collections$Array* statements4636;
    panda$collections$Array* varChildren4639;
    org$pandalanguage$pandac$Variable$Kind $tmp4650;
    panda$collections$Array* whileChildren4652;
    org$pandalanguage$pandac$IRNode* done4655;
    org$pandalanguage$pandac$IRNode* notCall4662;
    org$pandalanguage$pandac$IRNode* next4667;
    panda$collections$Array* valueVarChildren4676;
    panda$collections$ImmutableArray* rawBlock4685;
    panda$collections$Array* finalBlock4687;
    org$pandalanguage$pandac$Variable$Kind $tmp4694;
    org$pandalanguage$pandac$Type* $tmp4592 = (($fn4591) p_iterator->$class->vtable[2])(p_iterator);
    panda$core$Bit $tmp4593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4592->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp4590 = $tmp4593.value;
    if (!$tmp4590) goto $l4594;
    org$pandalanguage$pandac$Type* $tmp4596 = (($fn4595) p_iterator->$class->vtable[2])(p_iterator);
    panda$core$Object* $tmp4597 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4596->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4598 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4599 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4597), $tmp4598);
    $tmp4590 = $tmp4599.value;
    $l4594:;
    panda$core$Bit $tmp4600 = { $tmp4590 };
    PANDA_ASSERT($tmp4600.value);
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4602, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp4604 = (($fn4603) p_iterator->$class->vtable[2])(p_iterator);
    panda$core$Object* $tmp4605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4604->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4606 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp4602, NULL, ((org$pandalanguage$pandac$Type*) $tmp4605));
    target4601 = $tmp4606;
    if (((panda$core$Bit) { target4601 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$3030_94607 = target4601->target;
        panda$core$Bit $tmp4608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3030_94607->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp4608.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp4610 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$3030_94607->$data + 16));
            targetVar4609 = *$tmp4610;
            panda$collections$Array* $tmp4612 = (panda$collections$Array*) malloc(40);
            $tmp4612->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4612->refCount.value = 1;
            panda$collections$Array$init($tmp4612);
            subtypes4611 = $tmp4612;
            org$pandalanguage$pandac$Type* $tmp4614 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
            panda$collections$Array$add$panda$collections$Array$T(subtypes4611, ((panda$core$Object*) $tmp4614));
            org$pandalanguage$pandac$Type* $tmp4616 = (($fn4615) target4601->target->$class->vtable[2])(target4601->target);
            panda$collections$Array$add$panda$collections$Array$T(subtypes4611, ((panda$core$Object*) $tmp4616));
            org$pandalanguage$pandac$Type* $tmp4618 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp4618->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp4618->refCount.value = 1;
            panda$core$Object* $tmp4620 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes4611, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4621 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp4620));
            panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, &$s4622);
            panda$core$Object* $tmp4624 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes4611, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4623, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4624)));
            panda$core$String* $tmp4627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4625, &$s4626);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp4618, $tmp4627, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes4611), ((panda$core$Bit) { true }));
            iterType4617 = $tmp4618;
            org$pandalanguage$pandac$Variable* $tmp4629 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4629->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4629->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4632 = (($fn4631) p_iterator->$class->vtable[3])(p_iterator);
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4633, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar4609)->name, &$s4634);
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4629, $tmp4632, $tmp4633, $tmp4635, iterType4617);
            iter4628 = $tmp4629;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter4628));
            panda$collections$Array* $tmp4637 = (panda$collections$Array*) malloc(40);
            $tmp4637->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4637->refCount.value = 1;
            panda$collections$Array$init($tmp4637);
            statements4636 = $tmp4637;
            panda$collections$Array* $tmp4640 = (panda$collections$Array*) malloc(40);
            $tmp4640->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4640->refCount.value = 1;
            panda$collections$Array$init($tmp4640);
            varChildren4639 = $tmp4640;
            org$pandalanguage$pandac$IRNode* $tmp4642 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4642->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4642->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4644 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4644->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4644->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4647 = (($fn4646) p_iterator->$class->vtable[3])(p_iterator);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp4644, ((panda$core$Int64) { 41 }), $tmp4647, iter4628);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4642, ((panda$core$Int64) { 12 }), $tmp4644, p_iterator);
            panda$collections$Array$add$panda$collections$Array$T(varChildren4639, ((panda$core$Object*) $tmp4642));
            org$pandalanguage$pandac$IRNode* $tmp4648 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4648->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4650, ((panda$core$Int64) { 1 }));
            panda$collections$ImmutableArray* $tmp4651 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(varChildren4639);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4648, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$Symbol*) iter4628)->position, $tmp4650, $tmp4651);
            panda$collections$Array$add$panda$collections$Array$T(statements4636, ((panda$core$Object*) $tmp4648));
            panda$collections$Array* $tmp4653 = (panda$collections$Array*) malloc(40);
            $tmp4653->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4653->refCount.value = 1;
            panda$collections$Array$init($tmp4653);
            whileChildren4652 = $tmp4653;
            org$pandalanguage$pandac$IRNode* $tmp4656 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4656->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp4656, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$Symbol*) iter4628)->position, iter4628);
            panda$collections$Array* $tmp4659 = (panda$collections$Array*) malloc(40);
            $tmp4659->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4659->refCount.value = 1;
            panda$collections$Array$init($tmp4659);
            org$pandalanguage$pandac$IRNode* $tmp4661 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4656, &$s4658, ((panda$collections$ListView*) $tmp4659), NULL);
            done4655 = $tmp4661;
            if (((panda$core$Bit) { done4655 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp4664 = (panda$collections$Array*) malloc(40);
            $tmp4664->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4664->refCount.value = 1;
            panda$collections$Array$init($tmp4664);
            org$pandalanguage$pandac$IRNode* $tmp4666 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done4655, &$s4663, ((panda$collections$ListView*) $tmp4664), NULL);
            notCall4662 = $tmp4666;
            if (((panda$core$Bit) { notCall4662 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4668 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4668->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4668->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4671 = (($fn4670) p_iterator->$class->vtable[3])(p_iterator);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp4668, ((panda$core$Int64) { 41 }), $tmp4671, iter4628);
            panda$collections$Array* $tmp4673 = (panda$collections$Array*) malloc(40);
            $tmp4673->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4673->refCount.value = 1;
            panda$collections$Array$init($tmp4673);
            org$pandalanguage$pandac$IRNode* $tmp4675 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4668, &$s4672, ((panda$collections$ListView*) $tmp4673), NULL);
            next4667 = $tmp4675;
            PANDA_ASSERT(((panda$core$Bit) { next4667 != NULL }).value);
            panda$collections$Array* $tmp4677 = (panda$collections$Array*) malloc(40);
            $tmp4677->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4677->refCount.value = 1;
            panda$collections$Array$init($tmp4677);
            valueVarChildren4676 = $tmp4677;
            org$pandalanguage$pandac$IRNode* $tmp4679 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4679->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4679->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4681 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4681->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4681->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4684 = (($fn4683) p_iterator->$class->vtable[3])(p_iterator);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp4681, ((panda$core$Int64) { 41 }), $tmp4684, targetVar4609);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4679, ((panda$core$Int64) { 12 }), $tmp4681, next4667);
            panda$collections$Array$add$panda$collections$Array$T(valueVarChildren4676, ((panda$core$Object*) $tmp4679));
            panda$collections$ImmutableArray* $tmp4686 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_position, p_body);
            rawBlock4685 = $tmp4686;
            if (((panda$core$Bit) { rawBlock4685 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp4688 = (panda$collections$Array*) malloc(40);
            $tmp4688->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4688->refCount.value = 1;
            panda$collections$Array$init($tmp4688);
            finalBlock4687 = $tmp4688;
            org$pandalanguage$pandac$IRNode* $tmp4690 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4690->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4690->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4693 = (($fn4692) p_iterator->$class->vtable[3])(p_iterator);
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4694, ((panda$core$Int64) { 1 }));
            panda$collections$ImmutableArray* $tmp4695 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(valueVarChildren4676);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4690, ((panda$core$Int64) { 40 }), $tmp4693, $tmp4694, $tmp4695);
            panda$collections$Array$add$panda$collections$Array$T(finalBlock4687, ((panda$core$Object*) $tmp4690));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(finalBlock4687, ((panda$collections$CollectionView*) rawBlock4685));
            org$pandalanguage$pandac$IRNode* $tmp4696 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4696->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4696->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4699 = (($fn4698) p_iterator->$class->vtable[3])(p_iterator);
            panda$collections$ImmutableArray* $tmp4700 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(finalBlock4687);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4696, ((panda$core$Int64) { 43 }), $tmp4699, p_label, notCall4662, $tmp4700);
            panda$collections$Array$add$panda$collections$Array$T(statements4636, ((panda$core$Object*) $tmp4696));
            org$pandalanguage$pandac$IRNode* $tmp4701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4701->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp4704 = (($fn4703) p_iterator->$class->vtable[3])(p_iterator);
            panda$collections$ImmutableArray* $tmp4705 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements4636);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4701, ((panda$core$Int64) { 3 }), $tmp4704, $tmp4705);
            return $tmp4701;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_rawTarget, org$pandalanguage$pandac$ASTNode* p_rawList, panda$collections$ListView* p_statements) {
    org$pandalanguage$pandac$IRNode* list4706;
    org$pandalanguage$pandac$SymbolTable* symbols4708;
    org$pandalanguage$pandac$IRNode* result4711;
    panda$core$Bit found4731;
    panda$collections$Iterator* intf$Iter4732;
    org$pandalanguage$pandac$Type* intf4747;
    org$pandalanguage$pandac$IRNode* iterator4759;
    org$pandalanguage$pandac$IRNode* iterable4769;
    org$pandalanguage$pandac$IRNode* iterator4771;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    org$pandalanguage$pandac$IRNode* $tmp4707 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
    list4706 = $tmp4707;
    if (((panda$core$Bit) { list4706 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4709 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4709->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4709->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4709, self->symbolTable);
    symbols4708 = $tmp4709;
    self->symbolTable = symbols4708;
    panda$core$Bit $tmp4717;
    if (((panda$core$Bit) { list4706 != NULL }).value) goto $l4714; else goto $l4715;
    $l4714:;
    panda$core$Bit $tmp4718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4706->$rawValue, ((panda$core$Int64) { 39 }));
    $tmp4717 = $tmp4718;
    goto $l4716;
    $l4715:;
    $tmp4717 = ((panda$core$Bit) { false });
    goto $l4716;
    $l4716:;
    bool $tmp4713 = $tmp4717.value;
    if ($tmp4713) goto $l4719;
    org$pandalanguage$pandac$Type* $tmp4721 = (($fn4720) list4706->$class->vtable[2])(list4706);
    panda$core$Bit $tmp4722 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp4721);
    $tmp4713 = $tmp4722.value;
    $l4719:;
    panda$core$Bit $tmp4723 = { $tmp4713 };
    bool $tmp4712 = $tmp4723.value;
    if ($tmp4712) goto $l4724;
    org$pandalanguage$pandac$Type* $tmp4726 = (($fn4725) list4706->$class->vtable[2])(list4706);
    panda$core$Bit $tmp4727 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp4726);
    $tmp4712 = $tmp4727.value;
    $l4724:;
    panda$core$Bit $tmp4728 = { $tmp4712 };
    if ($tmp4728.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4729 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_label, p_rawTarget, list4706, p_statements);
        result4711 = $tmp4729;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4730 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list4706);
        list4706 = $tmp4730;
        if (((panda$core$Bit) { list4706 == NULL }).value) {
        {
            return NULL;
        }
        }
        found4731 = ((panda$core$Bit) { false });
        {
            org$pandalanguage$pandac$Type* $tmp4734 = (($fn4733) list4706->$class->vtable[2])(list4706);
            panda$collections$Set* $tmp4735 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp4734);
            ITable* $tmp4736 = ((panda$collections$Iterable*) $tmp4735)->$class->itable;
            while ($tmp4736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4736 = $tmp4736->next;
            }
            $fn4738 $tmp4737 = $tmp4736->methods[0];
            panda$collections$Iterator* $tmp4739 = $tmp4737(((panda$collections$Iterable*) $tmp4735));
            intf$Iter4732 = $tmp4739;
            $l4740:;
            ITable* $tmp4742 = intf$Iter4732->$class->itable;
            while ($tmp4742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4742 = $tmp4742->next;
            }
            $fn4744 $tmp4743 = $tmp4742->methods[0];
            panda$core$Bit $tmp4745 = $tmp4743(intf$Iter4732);
            panda$core$Bit $tmp4746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4745);
            if (!$tmp4746.value) goto $l4741;
            {
                ITable* $tmp4748 = intf$Iter4732->$class->itable;
                while ($tmp4748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4748 = $tmp4748->next;
                }
                $fn4750 $tmp4749 = $tmp4748->methods[1];
                panda$core$Object* $tmp4751 = $tmp4749(intf$Iter4732);
                intf4747 = ((org$pandalanguage$pandac$Type*) $tmp4751);
                panda$core$Bit $tmp4753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4747->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4752 = $tmp4753.value;
                if (!$tmp4752) goto $l4754;
                panda$core$Object* $tmp4755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4747->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4756 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4757 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4755), $tmp4756);
                $tmp4752 = $tmp4757.value;
                $l4754:;
                panda$core$Bit $tmp4758 = { $tmp4752 };
                if ($tmp4758.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4760 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4706, intf4747);
                    iterator4759 = $tmp4760;
                    org$pandalanguage$pandac$IRNode* $tmp4761 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_label, p_rawTarget, iterator4759, p_statements);
                    result4711 = $tmp4761;
                    found4731 = ((panda$core$Bit) { true });
                    goto $l4741;
                }
                }
                panda$core$Bit $tmp4763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4747->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4762 = $tmp4763.value;
                if (!$tmp4762) goto $l4764;
                panda$core$Object* $tmp4765 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4747->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4766 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4767 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4765), $tmp4766);
                $tmp4762 = $tmp4767.value;
                $l4764:;
                panda$core$Bit $tmp4768 = { $tmp4762 };
                if ($tmp4768.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4770 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4706, intf4747);
                    iterable4769 = $tmp4770;
                    panda$collections$Array* $tmp4773 = (panda$collections$Array*) malloc(40);
                    $tmp4773->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4773->refCount.value = 1;
                    panda$collections$Array$init($tmp4773);
                    org$pandalanguage$pandac$IRNode* $tmp4775 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable4769, &$s4772, ((panda$collections$ListView*) $tmp4773));
                    iterator4771 = $tmp4775;
                    org$pandalanguage$pandac$IRNode* $tmp4776 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_label, p_rawTarget, iterator4771, p_statements);
                    result4711 = $tmp4776;
                    found4731 = ((panda$core$Bit) { true });
                    goto $l4741;
                }
                }
            }
            goto $l4740;
            $l4741:;
        }
        panda$core$Bit $tmp4777 = panda$core$Bit$$NOT$R$panda$core$Bit(found4731);
        if ($tmp4777.value) {
        {
            org$pandalanguage$pandac$Position $tmp4779 = (($fn4778) list4706->$class->vtable[3])(list4706);
            org$pandalanguage$pandac$Type* $tmp4783 = (($fn4782) list4706->$class->vtable[2])(list4706);
            panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4781, ((panda$core$Object*) $tmp4783));
            panda$core$String* $tmp4786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, &$s4785);
            panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4780, $tmp4786);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4779, $tmp4787);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp4788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4708->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4788);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result4711;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_rawTest, panda$collections$ListView* p_statements) {
    org$pandalanguage$pandac$IRNode* test4789;
    panda$collections$ImmutableArray* block4793;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    org$pandalanguage$pandac$IRNode* $tmp4790 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    org$pandalanguage$pandac$Type* $tmp4791 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4792 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4790, $tmp4791);
    test4789 = $tmp4792;
    if (((panda$core$Bit) { test4789 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp4794 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_position, p_statements);
    block4793 = $tmp4794;
    if (((panda$core$Bit) { block4793 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4795 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4795->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4795->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4795, ((panda$core$Int64) { 43 }), p_position, p_label, test4789, block4793);
    return $tmp4795;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, panda$collections$ListView* p_statements, org$pandalanguage$pandac$ASTNode* p_rawTest) {
    panda$collections$ImmutableArray* block4797;
    org$pandalanguage$pandac$IRNode* test4799;
    panda$collections$Array* children4803;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    panda$collections$ImmutableArray* $tmp4798 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_position, p_statements);
    block4797 = $tmp4798;
    if (((panda$core$Bit) { block4797 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4800 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    org$pandalanguage$pandac$Type* $tmp4801 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4802 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4800, $tmp4801);
    test4799 = $tmp4802;
    if (((panda$core$Bit) { test4799 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4804 = (panda$collections$Array*) malloc(40);
    $tmp4804->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4804->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4804, ((panda$core$Int64) { 2 }));
    children4803 = $tmp4804;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4806 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4806->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4806->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode($tmp4806, ((panda$core$Int64) { 13 }), p_position, p_label, block4797, test4799);
    return $tmp4806;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, panda$collections$ListView* p_statements) {
    panda$collections$ImmutableArray* block4808;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    panda$collections$ImmutableArray* $tmp4809 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_position, p_statements);
    block4808 = $tmp4809;
    if (((panda$core$Bit) { block4808 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4810 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4810->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4810->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp4810, ((panda$core$Int64) { 19 }), p_position, p_label, block4808);
    return $tmp4810;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$Variable$Kind p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value4812;
    org$pandalanguage$pandac$ASTNode* $match$3184_94816;
    org$pandalanguage$pandac$Position position4818;
    panda$core$String* name4820;
    org$pandalanguage$pandac$Type* type4822;
    org$pandalanguage$pandac$Variable* v4830;
    org$pandalanguage$pandac$Position position4838;
    panda$core$String* name4840;
    org$pandalanguage$pandac$ASTNode* rawType4842;
    org$pandalanguage$pandac$Type* type4844;
    org$pandalanguage$pandac$Variable* v4851;
    value4812 = p_rawValue;
    bool $tmp4813 = ((panda$core$Bit) { value4812 == NULL }).value;
    if ($tmp4813) goto $l4814;
    $tmp4813 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l4814:;
    panda$core$Bit $tmp4815 = { $tmp4813 };
    PANDA_ASSERT($tmp4815.value);
    {
        $match$3184_94816 = p_t;
        panda$core$Bit $tmp4817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3184_94816->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp4817.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4819 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3184_94816->$data + 0));
            position4818 = *$tmp4819;
            panda$core$String** $tmp4821 = ((panda$core$String**) ((char*) $match$3184_94816->$data + 16));
            name4820 = *$tmp4821;
            if (((panda$core$Bit) { value4812 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4823 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value4812);
                value4812 = $tmp4823;
                if (((panda$core$Bit) { value4812 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4824 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value4812);
                type4822 = $tmp4824;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type4822 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position4818, &$s4825);
                return NULL;
            }
            }
            }
            if (((panda$core$Bit) { value4812 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4826 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4812, type4822);
                value4812 = $tmp4826;
                if (((panda$core$Bit) { value4812 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4828 = (($fn4827) value4812->$class->vtable[2])(value4812);
                panda$core$Bit $tmp4829 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp4828, type4822);
                PANDA_ASSERT($tmp4829.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4831 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4831->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4831->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4831, position4818, p_kind, name4820, type4822);
            v4830 = $tmp4831;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4830));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4833 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4833->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4833->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4835 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4835->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4835->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp4835, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$Symbol*) v4830)->position, v4830);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4833, $tmp4835, value4812);
            return $tmp4833;
        }
        }
        else {
        panda$core$Bit $tmp4837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3184_94816->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp4837.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4839 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3184_94816->$data + 0));
            position4838 = *$tmp4839;
            panda$core$String** $tmp4841 = ((panda$core$String**) ((char*) $match$3184_94816->$data + 16));
            name4840 = *$tmp4841;
            org$pandalanguage$pandac$ASTNode** $tmp4843 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3184_94816->$data + 24));
            rawType4842 = *$tmp4843;
            org$pandalanguage$pandac$Type* $tmp4845 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, rawType4842);
            org$pandalanguage$pandac$Type* $tmp4846 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4845);
            type4844 = $tmp4846;
            if (((panda$core$Bit) { value4812 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4847 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4812, type4844);
                value4812 = $tmp4847;
                if (((panda$core$Bit) { value4812 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4849 = (($fn4848) value4812->$class->vtable[2])(value4812);
                panda$core$Bit $tmp4850 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp4849, type4844);
                PANDA_ASSERT($tmp4850.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4852 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4852->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4852->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4852, position4838, p_kind, name4840, type4844);
            v4851 = $tmp4852;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4851));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4854 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4854->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4854->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4856 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4856->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4856->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp4856, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$Symbol*) v4851)->position, v4851);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4854, $tmp4856, value4812);
            return $tmp4854;
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
    org$pandalanguage$pandac$IRNode* value4858;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4860;
    org$pandalanguage$pandac$IRNode* $match$3245_134862;
    org$pandalanguage$pandac$Variable* v4864;
    if (((panda$core$Bit) { p_rawValue != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4859 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawValue);
        value4858 = $tmp4859;
        if (((panda$core$Bit) { value4858 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4858 = NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4861 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_target, p_varKind, value4858, NULL);
    target4860 = $tmp4861;
    if (((panda$core$Bit) { target4860 == NULL }).value) {
    {
        return NULL;
    }
    }
    if (((panda$core$Bit) { target4860->value != NULL }).value) {
    {
        {
            $match$3245_134862 = target4860->target;
            panda$core$Bit $tmp4863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3245_134862->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp4863.value) {
            {
                org$pandalanguage$pandac$Variable** $tmp4865 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$3245_134862->$data + 16));
                v4864 = *$tmp4865;
                v4864->initialValue = target4860->value;
                value4858 = target4860->value;
            }
            }
        }
    }
    }
    else {
    {
        value4858 = NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4866 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4866->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4866->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4866, ((panda$core$Int64) { 12 }), target4860->target, target4860->value);
    return $tmp4866;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label) {
    panda$core$Bit found4868;
    panda$collections$Iterator* loopLabel$Iter4869;
    panda$core$String* loopLabel4881;
    if (((panda$core$Bit) { p_label != NULL }).value) {
    {
        found4868 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4870 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4870->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4870 = $tmp4870->next;
            }
            $fn4872 $tmp4871 = $tmp4870->methods[0];
            panda$collections$Iterator* $tmp4873 = $tmp4871(((panda$collections$Iterable*) self->loops));
            loopLabel$Iter4869 = $tmp4873;
            $l4874:;
            ITable* $tmp4876 = loopLabel$Iter4869->$class->itable;
            while ($tmp4876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4876 = $tmp4876->next;
            }
            $fn4878 $tmp4877 = $tmp4876->methods[0];
            panda$core$Bit $tmp4879 = $tmp4877(loopLabel$Iter4869);
            panda$core$Bit $tmp4880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4879);
            if (!$tmp4880.value) goto $l4875;
            {
                ITable* $tmp4882 = loopLabel$Iter4869->$class->itable;
                while ($tmp4882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4882 = $tmp4882->next;
                }
                $fn4884 $tmp4883 = $tmp4882->methods[1];
                panda$core$Object* $tmp4885 = $tmp4883(loopLabel$Iter4869);
                loopLabel4881 = ((panda$core$String*) $tmp4885);
                bool $tmp4886 = ((panda$core$Bit) { loopLabel4881 != NULL }).value;
                if (!$tmp4886) goto $l4887;
                panda$core$Bit $tmp4891;
                if (((panda$core$Bit) { p_label != NULL }).value) goto $l4888; else goto $l4889;
                $l4888:;
                panda$core$Bit $tmp4892 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_label, loopLabel4881);
                $tmp4891 = $tmp4892;
                goto $l4890;
                $l4889:;
                $tmp4891 = ((panda$core$Bit) { false });
                goto $l4890;
                $l4890:;
                $tmp4886 = $tmp4891.value;
                $l4887:;
                panda$core$Bit $tmp4893 = { $tmp4886 };
                if ($tmp4893.value) {
                {
                    found4868 = ((panda$core$Bit) { true });
                    goto $l4875;
                }
                }
            }
            goto $l4874;
            $l4875:;
        }
        panda$core$Bit $tmp4894 = panda$core$Bit$$NOT$R$panda$core$Bit(found4868);
        if ($tmp4894.value) {
        {
            panda$core$String* $tmp4896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4895, p_label);
            panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, &$s4897);
            panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4898, p_label);
            panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, &$s4900);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4901);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4902 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4902, ((panda$core$Int64) { 0 }));
    if ($tmp4903.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4904);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4905 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4905->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4905->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4905, ((panda$core$Int64) { 4 }), p_position, p_label);
    return $tmp4905;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label) {
    panda$core$Bit found4907;
    panda$collections$Iterator* loopLabel$Iter4908;
    panda$core$String* loopLabel4920;
    if (((panda$core$Bit) { p_label != NULL }).value) {
    {
        found4907 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4909 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4909->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4909 = $tmp4909->next;
            }
            $fn4911 $tmp4910 = $tmp4909->methods[0];
            panda$collections$Iterator* $tmp4912 = $tmp4910(((panda$collections$Iterable*) self->loops));
            loopLabel$Iter4908 = $tmp4912;
            $l4913:;
            ITable* $tmp4915 = loopLabel$Iter4908->$class->itable;
            while ($tmp4915->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4915 = $tmp4915->next;
            }
            $fn4917 $tmp4916 = $tmp4915->methods[0];
            panda$core$Bit $tmp4918 = $tmp4916(loopLabel$Iter4908);
            panda$core$Bit $tmp4919 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4918);
            if (!$tmp4919.value) goto $l4914;
            {
                ITable* $tmp4921 = loopLabel$Iter4908->$class->itable;
                while ($tmp4921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4921 = $tmp4921->next;
                }
                $fn4923 $tmp4922 = $tmp4921->methods[1];
                panda$core$Object* $tmp4924 = $tmp4922(loopLabel$Iter4908);
                loopLabel4920 = ((panda$core$String*) $tmp4924);
                bool $tmp4925 = ((panda$core$Bit) { loopLabel4920 != NULL }).value;
                if (!$tmp4925) goto $l4926;
                panda$core$Bit $tmp4930;
                if (((panda$core$Bit) { p_label != NULL }).value) goto $l4927; else goto $l4928;
                $l4927:;
                panda$core$Bit $tmp4931 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_label, loopLabel4920);
                $tmp4930 = $tmp4931;
                goto $l4929;
                $l4928:;
                $tmp4930 = ((panda$core$Bit) { false });
                goto $l4929;
                $l4929:;
                $tmp4925 = $tmp4930.value;
                $l4926:;
                panda$core$Bit $tmp4932 = { $tmp4925 };
                if ($tmp4932.value) {
                {
                    found4907 = ((panda$core$Bit) { true });
                    goto $l4914;
                }
                }
            }
            goto $l4913;
            $l4914:;
        }
        panda$core$Bit $tmp4933 = panda$core$Bit$$NOT$R$panda$core$Bit(found4907);
        if ($tmp4933.value) {
        {
            panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4934, p_label);
            panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4935, &$s4936);
            panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, p_label);
            panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, &$s4939);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4940);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4941 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4941, ((panda$core$Int64) { 0 }));
    if ($tmp4942.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4943);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4944 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4944->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4944->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4944, ((panda$core$Int64) { 11 }), p_position, p_label);
    return $tmp4944;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawValue) {
    org$pandalanguage$pandac$IRNode* value4950;
    if (((panda$core$Bit) { p_rawValue != NULL }).value) {
    {
        panda$core$Object* $tmp4946 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4947 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4948 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4946)->returnType, $tmp4947);
        if ($tmp4948.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4949);
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp4951 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawValue);
        panda$core$Object* $tmp4952 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4953 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4951, ((org$pandalanguage$pandac$MethodDecl*) $tmp4952)->returnType);
        value4950 = $tmp4953;
        if (((panda$core$Bit) { value4950 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp4954 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4954->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4954->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q($tmp4954, ((panda$core$Int64) { 27 }), p_position, value4950);
        return $tmp4954;
    }
    }
    panda$core$Object* $tmp4956 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4957 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4958 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4956)->returnType, $tmp4957);
    if ($tmp4958.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4959);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4960 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4960->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q($tmp4960, ((panda$core$Int64) { 27 }), p_position, NULL);
    return $tmp4960;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawTest, org$pandalanguage$pandac$ASTNode* p_rawMessage) {
    org$pandalanguage$pandac$IRNode* test4962;
    org$pandalanguage$pandac$ClassDecl* bit4966;
    org$pandalanguage$pandac$FieldDecl* value4969;
    org$pandalanguage$pandac$IRNode* message4975;
    org$pandalanguage$pandac$IRNode* $tmp4963 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    test4962 = $tmp4963;
    if (((panda$core$Bit) { test4962 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4964 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4965 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4962, $tmp4964);
    test4962 = $tmp4965;
    if (((panda$core$Bit) { test4962 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4967 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4968 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4967);
    bit4966 = $tmp4968;
    PANDA_ASSERT(((panda$core$Bit) { bit4966 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4971 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4966->symbolTable, &$s4970);
    value4969 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4971);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, value4969);
    org$pandalanguage$pandac$IRNode* $tmp4972 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4972->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4974 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp4972, ((panda$core$Int64) { 14 }), p_position, $tmp4974, test4962, value4969);
    test4962 = $tmp4972;
    if (((panda$core$Bit) { p_rawMessage != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4976 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawMessage);
        message4975 = $tmp4976;
        if (((panda$core$Bit) { message4975 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4977 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4978 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, message4975, $tmp4977);
        message4975 = $tmp4978;
        if (((panda$core$Bit) { message4975 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        message4975 = NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4979 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4979->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4979->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4979, ((panda$core$Int64) { 0 }), p_position, test4962, message4975);
    return $tmp4979;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$collections$ImmutableArray* p_declarations) {
    panda$collections$Array* decls4981;
    panda$collections$Iterator* astDecl$Iter4984;
    org$pandalanguage$pandac$ASTNode* astDecl4996;
    org$pandalanguage$pandac$ASTNode* $match$3349_135001;
    org$pandalanguage$pandac$Position position5003;
    org$pandalanguage$pandac$ASTNode* target5005;
    org$pandalanguage$pandac$ASTNode* rawValue5007;
    org$pandalanguage$pandac$IRNode* decl5009;
    panda$collections$Array* $tmp4982 = (panda$collections$Array*) malloc(40);
    $tmp4982->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4982->refCount.value = 1;
    panda$collections$Array$init($tmp4982);
    decls4981 = $tmp4982;
    {
        ITable* $tmp4985 = ((panda$collections$Iterable*) p_declarations)->$class->itable;
        while ($tmp4985->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4985 = $tmp4985->next;
        }
        $fn4987 $tmp4986 = $tmp4985->methods[0];
        panda$collections$Iterator* $tmp4988 = $tmp4986(((panda$collections$Iterable*) p_declarations));
        astDecl$Iter4984 = $tmp4988;
        $l4989:;
        ITable* $tmp4991 = astDecl$Iter4984->$class->itable;
        while ($tmp4991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4991 = $tmp4991->next;
        }
        $fn4993 $tmp4992 = $tmp4991->methods[0];
        panda$core$Bit $tmp4994 = $tmp4992(astDecl$Iter4984);
        panda$core$Bit $tmp4995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4994);
        if (!$tmp4995.value) goto $l4990;
        {
            ITable* $tmp4997 = astDecl$Iter4984->$class->itable;
            while ($tmp4997->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4997 = $tmp4997->next;
            }
            $fn4999 $tmp4998 = $tmp4997->methods[1];
            panda$core$Object* $tmp5000 = $tmp4998(astDecl$Iter4984);
            astDecl4996 = ((org$pandalanguage$pandac$ASTNode*) $tmp5000);
            {
                $match$3349_135001 = astDecl4996;
                panda$core$Bit $tmp5002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3349_135001->$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp5002.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp5004 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3349_135001->$data + 0));
                    position5003 = *$tmp5004;
                    org$pandalanguage$pandac$ASTNode** $tmp5006 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3349_135001->$data + 16));
                    target5005 = *$tmp5006;
                    org$pandalanguage$pandac$ASTNode** $tmp5008 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3349_135001->$data + 24));
                    rawValue5007 = *$tmp5008;
                    org$pandalanguage$pandac$IRNode* $tmp5010 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(self, position5003, target5005, rawValue5007, p_kind);
                    decl5009 = $tmp5010;
                    if (((panda$core$Bit) { decl5009 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(decls4981, ((panda$core$Object*) decl5009));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l4989;
        $l4990:;
    }
    org$pandalanguage$pandac$IRNode* $tmp5011 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5011->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp5013 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(decls4981);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp5011, ((panda$core$Int64) { 40 }), p_position, p_kind, $tmp5013);
    return $tmp5011;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target5014;
    org$pandalanguage$pandac$IRNode* testValue5019;
    panda$collections$Array* callChildren5021;
    org$pandalanguage$pandac$IRNode* $tmp5015 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5015->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp5018 = (($fn5017) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp5015, ((panda$core$Int64) { 41 }), $tmp5018, p_value);
    target5014 = $tmp5015;
    org$pandalanguage$pandac$IRNode* $tmp5020 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue5019 = $tmp5020;
    if (((panda$core$Bit) { testValue5019 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp5022 = (panda$collections$Array*) malloc(40);
    $tmp5022->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5022->refCount.value = 1;
    panda$collections$Array$init($tmp5022);
    callChildren5021 = $tmp5022;
    panda$collections$Array$add$panda$collections$Array$T(callChildren5021, ((panda$core$Object*) testValue5019));
    org$pandalanguage$pandac$IRNode* $tmp5025 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target5014, &$s5024, ((panda$collections$ListView*) callChildren5021));
    return $tmp5025;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$Position p_position, panda$collections$ImmutableArray* p_tests, panda$collections$ImmutableArray* p_rawStatements) {
    org$pandalanguage$pandac$ASTNode* test5028;
    org$pandalanguage$pandac$ASTNode* $match$3379_175031;
    org$pandalanguage$pandac$Position testPosition5033;
    org$pandalanguage$pandac$ASTNode* rawBase5035;
    panda$collections$ImmutableArray* args5037;
    org$pandalanguage$pandac$ClassDecl* cl5039;
    org$pandalanguage$pandac$IRNode* base5042;
    org$pandalanguage$pandac$IRNode* $match$3387_295044;
    org$pandalanguage$pandac$ChoiceEntry* entry5046;
    panda$collections$Array* callChildren5048;
    org$pandalanguage$pandac$IRNode* target5051;
    org$pandalanguage$pandac$IRNode* check5054;
    panda$core$Int64 requiredCount5057;
    panda$core$Int64 actualCount5059;
    panda$collections$Array* statements5086;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5089;
    org$pandalanguage$pandac$ASTNode* $match$3408_415103;
    org$pandalanguage$pandac$Position position5106;
    panda$core$String* name5108;
    org$pandalanguage$pandac$Variable* variable5112;
    org$pandalanguage$pandac$Variable$Kind $tmp5115;
    panda$collections$Array* decls5117;
    org$pandalanguage$pandac$Variable$Kind $tmp5130;
    panda$collections$Iterator* rawStatement$Iter5142;
    org$pandalanguage$pandac$ASTNode* rawStatement5154;
    org$pandalanguage$pandac$IRNode* statement5159;
    org$pandalanguage$pandac$IRNode* test5165;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5168;
    org$pandalanguage$pandac$IRNode* nextTest5183;
    panda$collections$Array* callChildren5186;
    panda$collections$Array* statements5199;
    panda$collections$Iterator* rawStatement$Iter5202;
    org$pandalanguage$pandac$ASTNode* rawStatement5214;
    org$pandalanguage$pandac$IRNode* statement5219;
    panda$core$Int64 $tmp5026 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_tests);
    panda$core$Bit $tmp5027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5026, ((panda$core$Int64) { 1 }));
    if ($tmp5027.value) {
    {
        panda$core$Object* $tmp5029 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_tests, ((panda$core$Int64) { 0 }));
        test5028 = ((org$pandalanguage$pandac$ASTNode*) $tmp5029);
        panda$core$Bit $tmp5030 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_value->type);
        if ($tmp5030.value) {
        {
            {
                $match$3379_175031 = test5028;
                panda$core$Bit $tmp5032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3379_175031->$rawValue, ((panda$core$Int64) { 6 }));
                if ($tmp5032.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp5034 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3379_175031->$data + 0));
                    testPosition5033 = *$tmp5034;
                    org$pandalanguage$pandac$ASTNode** $tmp5036 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3379_175031->$data + 16));
                    rawBase5035 = *$tmp5036;
                    panda$collections$ImmutableArray** $tmp5038 = ((panda$collections$ImmutableArray**) ((char*) $match$3379_175031->$data + 24));
                    args5037 = *$tmp5038;
                    org$pandalanguage$pandac$ClassDecl* $tmp5040 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_value->type);
                    cl5039 = $tmp5040;
                    panda$core$Bit $tmp5041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl5039->classKind.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp5041.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp5043 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawBase5035);
                        base5042 = $tmp5043;
                        if (((panda$core$Bit) { base5042 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        {
                            $match$3387_295044 = base5042;
                            panda$core$Bit $tmp5045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3387_295044->$rawValue, ((panda$core$Int64) { 7 }));
                            if ($tmp5045.value) {
                            {
                                org$pandalanguage$pandac$ChoiceEntry** $tmp5047 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$3387_295044->$data + 16));
                                entry5046 = *$tmp5047;
                                panda$collections$Array* $tmp5049 = (panda$collections$Array*) malloc(40);
                                $tmp5049->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp5049->refCount.value = 1;
                                panda$collections$Array$init($tmp5049);
                                callChildren5048 = $tmp5049;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren5048, ((panda$core$Object*) base5042));
                                org$pandalanguage$pandac$IRNode* $tmp5052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                $tmp5052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                $tmp5052->refCount.value = 1;
                                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp5052, ((panda$core$Int64) { 41 }), testPosition5033, p_value);
                                target5051 = $tmp5052;
                                org$pandalanguage$pandac$IRNode* $tmp5056 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target5051, &$s5055, ((panda$collections$ListView*) callChildren5048));
                                check5054 = $tmp5056;
                                if (((panda$core$Bit) { check5054 == NULL }).value) {
                                {
                                    return NULL;
                                }
                                }
                                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, entry5046);
                                panda$core$Int64 $tmp5058 = panda$collections$Array$get_count$R$panda$core$Int64(entry5046->fields);
                                requiredCount5057 = $tmp5058;
                                panda$core$Int64 $tmp5060 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args5037);
                                actualCount5059 = $tmp5060;
                                panda$core$Bit $tmp5061 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(actualCount5059, requiredCount5057);
                                if ($tmp5061.value) {
                                {
                                    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5062, ((panda$core$Object*) entry5046));
                                    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
                                    panda$core$Int64$wrapper* $tmp5066;
                                    $tmp5066 = (panda$core$Int64$wrapper*) malloc(24);
                                    $tmp5066->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                                    $tmp5066->refCount = 1;
                                    $tmp5066->value = requiredCount5057;
                                    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5065, ((panda$core$Object*) $tmp5066));
                                    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, &$s5068);
                                    panda$core$Bit $tmp5071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(requiredCount5057, ((panda$core$Int64) { 1 }));
                                    panda$core$Bit$wrapper* $tmp5072;
                                    $tmp5072 = (panda$core$Bit$wrapper*) malloc(13);
                                    $tmp5072->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                                    $tmp5072->refCount = 1;
                                    $tmp5072->value = $tmp5071;
                                    ITable* $tmp5074 = ((panda$core$Formattable*) $tmp5072)->$class->itable;
                                    while ($tmp5074->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                        $tmp5074 = $tmp5074->next;
                                    }
                                    $fn5076 $tmp5075 = $tmp5074->methods[0];
                                    panda$core$String* $tmp5077 = $tmp5075(((panda$core$Formattable*) $tmp5072), &$s5073);
                                    panda$core$String* $tmp5078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5070, $tmp5077);
                                    panda$core$String* $tmp5080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5078, &$s5079);
                                    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, $tmp5080);
                                    panda$core$Int64$wrapper* $tmp5082;
                                    $tmp5082 = (panda$core$Int64$wrapper*) malloc(24);
                                    $tmp5082->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                                    $tmp5082->refCount = 1;
                                    $tmp5082->value = actualCount5059;
                                    panda$core$String* $tmp5083 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5081, ((panda$core$Object*) $tmp5082));
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, testPosition5033, $tmp5083);
                                    return NULL;
                                }
                                }
                                org$pandalanguage$pandac$SymbolTable* $tmp5084 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
                                $tmp5084->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
                                $tmp5084->refCount.value = 1;
                                org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5084, self->symbolTable);
                                self->symbolTable = $tmp5084;
                                panda$collections$Array* $tmp5087 = (panda$collections$Array*) malloc(40);
                                $tmp5087->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp5087->refCount.value = 1;
                                panda$collections$Array$init($tmp5087);
                                statements5086 = $tmp5087;
                                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5089, ((panda$core$Int64) { 0 }), actualCount5059, ((panda$core$Bit) { false }));
                                int64_t $tmp5091 = $tmp5089.min.value;
                                panda$core$Int64 i5090 = { $tmp5091 };
                                int64_t $tmp5093 = $tmp5089.max.value;
                                bool $tmp5094 = $tmp5089.inclusive.value;
                                if ($tmp5094) goto $l5101; else goto $l5102;
                                $l5101:;
                                if ($tmp5091 <= $tmp5093) goto $l5095; else goto $l5097;
                                $l5102:;
                                if ($tmp5091 < $tmp5093) goto $l5095; else goto $l5097;
                                $l5095:;
                                {
                                    {
                                        panda$core$Object* $tmp5104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args5037, i5090);
                                        $match$3408_415103 = ((org$pandalanguage$pandac$ASTNode*) $tmp5104);
                                        panda$core$Bit $tmp5105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3408_415103->$rawValue, ((panda$core$Int64) { 18 }));
                                        if ($tmp5105.value) {
                                        {
                                            org$pandalanguage$pandac$Position* $tmp5107 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3408_415103->$data + 0));
                                            position5106 = *$tmp5107;
                                            panda$core$String** $tmp5109 = ((panda$core$String**) ((char*) $match$3408_415103->$data + 16));
                                            name5108 = *$tmp5109;
                                            panda$core$Bit $tmp5111 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name5108, &$s5110);
                                            if ($tmp5111.value) {
                                            {
                                                goto $l5098;
                                            }
                                            }
                                            org$pandalanguage$pandac$Variable* $tmp5113 = (org$pandalanguage$pandac$Variable*) malloc(88);
                                            $tmp5113->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
                                            $tmp5113->refCount.value = 1;
                                            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp5115, ((panda$core$Int64) { 1 }));
                                            panda$core$Object* $tmp5116 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(entry5046->fields, i5090);
                                            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp5113, position5106, $tmp5115, name5108, ((org$pandalanguage$pandac$Type*) $tmp5116));
                                            variable5112 = $tmp5113;
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) variable5112));
                                            panda$collections$Array* $tmp5118 = (panda$collections$Array*) malloc(40);
                                            $tmp5118->$class = (panda$core$Class*) &panda$collections$Array$class;
                                            $tmp5118->refCount.value = 1;
                                            panda$collections$Array$init($tmp5118);
                                            decls5117 = $tmp5118;
                                            org$pandalanguage$pandac$IRNode* $tmp5120 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                            $tmp5120->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                            $tmp5120->refCount.value = 1;
                                            org$pandalanguage$pandac$IRNode* $tmp5122 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                            $tmp5122->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                            $tmp5122->refCount.value = 1;
                                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp5122, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$Symbol*) variable5112)->position, variable5112);
                                            org$pandalanguage$pandac$IRNode* $tmp5124 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                            $tmp5124->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                            $tmp5124->refCount.value = 1;
                                            org$pandalanguage$pandac$IRNode* $tmp5126 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                            $tmp5126->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                            $tmp5126->refCount.value = 1;
                                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp5126, ((panda$core$Int64) { 41 }), position5106, p_value);
                                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp5124, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) variable5112)->position, $tmp5126, entry5046, i5090);
                                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp5120, ((panda$core$Int64) { 12 }), $tmp5122, $tmp5124);
                                            panda$collections$Array$add$panda$collections$Array$T(decls5117, ((panda$core$Object*) $tmp5120));
                                            org$pandalanguage$pandac$IRNode* $tmp5128 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                            $tmp5128->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                            $tmp5128->refCount.value = 1;
                                            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp5130, ((panda$core$Int64) { 1 }));
                                            panda$collections$ImmutableArray* $tmp5131 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(decls5117);
                                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp5128, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$Symbol*) variable5112)->position, $tmp5130, $tmp5131);
                                            panda$collections$Array$add$panda$collections$Array$T(statements5086, ((panda$core$Object*) $tmp5128));
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Object* $tmp5132 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args5037, i5090);
                                            org$pandalanguage$pandac$Position $tmp5134 = (($fn5133) ((org$pandalanguage$pandac$ASTNode*) $tmp5132)->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp5132));
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp5134, &$s5135);
                                            return NULL;
                                        }
                                        }
                                    }
                                }
                                $l5098:;
                                int64_t $tmp5137 = $tmp5093 - i5090.value;
                                if ($tmp5094) goto $l5138; else goto $l5139;
                                $l5138:;
                                if ((uint64_t) $tmp5137 >= 1) goto $l5136; else goto $l5097;
                                $l5139:;
                                if ((uint64_t) $tmp5137 > 1) goto $l5136; else goto $l5097;
                                $l5136:;
                                i5090.value += 1;
                                goto $l5095;
                                $l5097:;
                                {
                                    ITable* $tmp5143 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
                                    while ($tmp5143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                        $tmp5143 = $tmp5143->next;
                                    }
                                    $fn5145 $tmp5144 = $tmp5143->methods[0];
                                    panda$collections$Iterator* $tmp5146 = $tmp5144(((panda$collections$Iterable*) p_rawStatements));
                                    rawStatement$Iter5142 = $tmp5146;
                                    $l5147:;
                                    ITable* $tmp5149 = rawStatement$Iter5142->$class->itable;
                                    while ($tmp5149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp5149 = $tmp5149->next;
                                    }
                                    $fn5151 $tmp5150 = $tmp5149->methods[0];
                                    panda$core$Bit $tmp5152 = $tmp5150(rawStatement$Iter5142);
                                    panda$core$Bit $tmp5153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5152);
                                    if (!$tmp5153.value) goto $l5148;
                                    {
                                        ITable* $tmp5155 = rawStatement$Iter5142->$class->itable;
                                        while ($tmp5155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp5155 = $tmp5155->next;
                                        }
                                        $fn5157 $tmp5156 = $tmp5155->methods[1];
                                        panda$core$Object* $tmp5158 = $tmp5156(rawStatement$Iter5142);
                                        rawStatement5154 = ((org$pandalanguage$pandac$ASTNode*) $tmp5158);
                                        org$pandalanguage$pandac$IRNode* $tmp5160 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement5154);
                                        statement5159 = $tmp5160;
                                        if (((panda$core$Bit) { statement5159 == NULL }).value) {
                                        {
                                            return NULL;
                                        }
                                        }
                                        panda$collections$Array$add$panda$collections$Array$T(statements5086, ((panda$core$Object*) statement5159));
                                    }
                                    goto $l5147;
                                    $l5148:;
                                }
                                panda$core$Object* $tmp5161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
                                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp5161);
                                org$pandalanguage$pandac$IRNode* $tmp5162 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                $tmp5162->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                $tmp5162->refCount.value = 1;
                                panda$collections$ImmutableArray* $tmp5164 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements5086);
                                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp5162, ((panda$core$Int64) { 15 }), p_position, check5054, $tmp5164, NULL);
                                return $tmp5162;
                            }
                            }
                        }
                    }
                    }
                }
                }
            }
        }
        }
    }
    }
    panda$core$Object* $tmp5166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_tests, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp5167 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp5166));
    test5165 = $tmp5167;
    if (((panda$core$Bit) { test5165 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp5169 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_tests);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5168, ((panda$core$Int64) { 1 }), $tmp5169, ((panda$core$Bit) { false }));
    int64_t $tmp5171 = $tmp5168.min.value;
    panda$core$Int64 i5170 = { $tmp5171 };
    int64_t $tmp5173 = $tmp5168.max.value;
    bool $tmp5174 = $tmp5168.inclusive.value;
    if ($tmp5174) goto $l5181; else goto $l5182;
    $l5181:;
    if ($tmp5171 <= $tmp5173) goto $l5175; else goto $l5177;
    $l5182:;
    if ($tmp5171 < $tmp5173) goto $l5175; else goto $l5177;
    $l5175:;
    {
        panda$core$Object* $tmp5184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_tests, i5170);
        org$pandalanguage$pandac$IRNode* $tmp5185 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp5184));
        nextTest5183 = $tmp5185;
        if (((panda$core$Bit) { nextTest5183 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp5187 = (panda$collections$Array*) malloc(40);
        $tmp5187->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp5187->refCount.value = 1;
        panda$collections$Array$init($tmp5187);
        callChildren5186 = $tmp5187;
        panda$collections$Array$add$panda$collections$Array$T(callChildren5186, ((panda$core$Object*) nextTest5183));
        org$pandalanguage$pandac$IRNode* $tmp5190 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test5165, &$s5189, ((panda$collections$ListView*) callChildren5186));
        test5165 = $tmp5190;
        if (((panda$core$Bit) { test5165 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l5178:;
    int64_t $tmp5192 = $tmp5173 - i5170.value;
    if ($tmp5174) goto $l5193; else goto $l5194;
    $l5193:;
    if ((uint64_t) $tmp5192 >= 1) goto $l5191; else goto $l5177;
    $l5194:;
    if ((uint64_t) $tmp5192 > 1) goto $l5191; else goto $l5177;
    $l5191:;
    i5170.value += 1;
    goto $l5175;
    $l5177:;
    org$pandalanguage$pandac$SymbolTable* $tmp5197 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5197->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5197->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5197, self->symbolTable);
    self->symbolTable = $tmp5197;
    panda$collections$Array* $tmp5200 = (panda$collections$Array*) malloc(40);
    $tmp5200->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5200->refCount.value = 1;
    panda$collections$Array$init($tmp5200);
    statements5199 = $tmp5200;
    {
        ITable* $tmp5203 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
        while ($tmp5203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5203 = $tmp5203->next;
        }
        $fn5205 $tmp5204 = $tmp5203->methods[0];
        panda$collections$Iterator* $tmp5206 = $tmp5204(((panda$collections$Iterable*) p_rawStatements));
        rawStatement$Iter5202 = $tmp5206;
        $l5207:;
        ITable* $tmp5209 = rawStatement$Iter5202->$class->itable;
        while ($tmp5209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5209 = $tmp5209->next;
        }
        $fn5211 $tmp5210 = $tmp5209->methods[0];
        panda$core$Bit $tmp5212 = $tmp5210(rawStatement$Iter5202);
        panda$core$Bit $tmp5213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5212);
        if (!$tmp5213.value) goto $l5208;
        {
            ITable* $tmp5215 = rawStatement$Iter5202->$class->itable;
            while ($tmp5215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5215 = $tmp5215->next;
            }
            $fn5217 $tmp5216 = $tmp5215->methods[1];
            panda$core$Object* $tmp5218 = $tmp5216(rawStatement$Iter5202);
            rawStatement5214 = ((org$pandalanguage$pandac$ASTNode*) $tmp5218);
            org$pandalanguage$pandac$IRNode* $tmp5220 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement5214);
            statement5219 = $tmp5220;
            if (((panda$core$Bit) { statement5219 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements5199, ((panda$core$Object*) statement5219));
        }
        goto $l5207;
        $l5208:;
    }
    panda$core$Object* $tmp5221 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp5221);
    org$pandalanguage$pandac$IRNode* $tmp5222 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5222->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp5224 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements5199);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp5222, ((panda$core$Int64) { 15 }), p_position, test5165, $tmp5224, NULL);
    return $tmp5222;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other) {
    panda$collections$Array* result5225;
    org$pandalanguage$pandac$Variable* valueVar5228;
    org$pandalanguage$pandac$Variable$Kind $tmp5231;
    panda$collections$Array* decls5243;
    org$pandalanguage$pandac$Variable$Kind $tmp5254;
    panda$collections$Iterator* rawWhen$Iter5256;
    org$pandalanguage$pandac$ASTNode* rawWhen5268;
    org$pandalanguage$pandac$ASTNode* $match$3485_135273;
    org$pandalanguage$pandac$Position whenPosition5275;
    panda$collections$ImmutableArray* tests5277;
    panda$collections$ImmutableArray* statements5279;
    org$pandalanguage$pandac$IRNode* w5281;
    panda$collections$Array* statements5283;
    panda$collections$Iterator* raw$Iter5286;
    org$pandalanguage$pandac$ASTNode* raw5298;
    org$pandalanguage$pandac$IRNode* stmt5303;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp5308;
    org$pandalanguage$pandac$IRNode* $match$3508_135329;
    org$pandalanguage$pandac$Position position5333;
    org$pandalanguage$pandac$IRNode* test5335;
    panda$collections$ImmutableArray* ifTrue5337;
    org$pandalanguage$pandac$IRNode* ifFalse5339;
    panda$collections$Array* $tmp5226 = (panda$collections$Array*) malloc(40);
    $tmp5226->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5226->refCount.value = 1;
    panda$collections$Array$init($tmp5226);
    result5225 = $tmp5226;
    org$pandalanguage$pandac$Variable* $tmp5229 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp5229->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp5229->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp5231, ((panda$core$Int64) { 1 }));
    panda$core$Int64$wrapper* $tmp5233;
    $tmp5233 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp5233->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp5233->refCount = 1;
    $tmp5233->value = p_position.line;
    panda$core$String* $tmp5234 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5232, ((panda$core$Object*) $tmp5233));
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5234, &$s5235);
    panda$core$Int64$wrapper* $tmp5237;
    $tmp5237 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp5237->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp5237->refCount = 1;
    $tmp5237->value = p_position.column;
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5236, ((panda$core$Object*) $tmp5237));
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, &$s5239);
    org$pandalanguage$pandac$Type* $tmp5242 = (($fn5241) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp5229, p_position, $tmp5231, $tmp5240, $tmp5242);
    valueVar5228 = $tmp5229;
    panda$collections$Array* $tmp5244 = (panda$collections$Array*) malloc(40);
    $tmp5244->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5244->refCount.value = 1;
    panda$collections$Array$init($tmp5244);
    decls5243 = $tmp5244;
    org$pandalanguage$pandac$IRNode* $tmp5246 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5246->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5246->refCount.value = 1;
    org$pandalanguage$pandac$IRNode* $tmp5248 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5248->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5248->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp5251 = (($fn5250) p_value->$class->vtable[3])(p_value);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp5248, ((panda$core$Int64) { 41 }), $tmp5251, valueVar5228);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp5246, ((panda$core$Int64) { 12 }), $tmp5248, p_value);
    panda$collections$Array$add$panda$collections$Array$T(decls5243, ((panda$core$Object*) $tmp5246));
    org$pandalanguage$pandac$IRNode* $tmp5252 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5252->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5252->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp5254, ((panda$core$Int64) { 1 }));
    panda$collections$ImmutableArray* $tmp5255 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(decls5243);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp5252, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$Symbol*) valueVar5228)->position, $tmp5254, $tmp5255);
    panda$collections$Array$add$panda$collections$Array$T(result5225, ((panda$core$Object*) $tmp5252));
    {
        ITable* $tmp5257 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp5257->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5257 = $tmp5257->next;
        }
        $fn5259 $tmp5258 = $tmp5257->methods[0];
        panda$collections$Iterator* $tmp5260 = $tmp5258(((panda$collections$Iterable*) p_whens));
        rawWhen$Iter5256 = $tmp5260;
        $l5261:;
        ITable* $tmp5263 = rawWhen$Iter5256->$class->itable;
        while ($tmp5263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5263 = $tmp5263->next;
        }
        $fn5265 $tmp5264 = $tmp5263->methods[0];
        panda$core$Bit $tmp5266 = $tmp5264(rawWhen$Iter5256);
        panda$core$Bit $tmp5267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5266);
        if (!$tmp5267.value) goto $l5262;
        {
            ITable* $tmp5269 = rawWhen$Iter5256->$class->itable;
            while ($tmp5269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5269 = $tmp5269->next;
            }
            $fn5271 $tmp5270 = $tmp5269->methods[1];
            panda$core$Object* $tmp5272 = $tmp5270(rawWhen$Iter5256);
            rawWhen5268 = ((org$pandalanguage$pandac$ASTNode*) $tmp5272);
            {
                $match$3485_135273 = rawWhen5268;
                panda$core$Bit $tmp5274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3485_135273->$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp5274.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp5276 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3485_135273->$data + 0));
                    whenPosition5275 = *$tmp5276;
                    panda$collections$ImmutableArray** $tmp5278 = ((panda$collections$ImmutableArray**) ((char*) $match$3485_135273->$data + 16));
                    tests5277 = *$tmp5278;
                    panda$collections$ImmutableArray** $tmp5280 = ((panda$collections$ImmutableArray**) ((char*) $match$3485_135273->$data + 24));
                    statements5279 = *$tmp5280;
                    org$pandalanguage$pandac$IRNode* $tmp5282 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar5228, whenPosition5275, tests5277, statements5279);
                    w5281 = $tmp5282;
                    if (((panda$core$Bit) { w5281 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result5225, ((panda$core$Object*) w5281));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l5261;
        $l5262:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        panda$collections$Array* $tmp5284 = (panda$collections$Array*) malloc(40);
        $tmp5284->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp5284->refCount.value = 1;
        panda$collections$Array$init($tmp5284);
        statements5283 = $tmp5284;
        {
            ITable* $tmp5287 = ((panda$collections$Iterable*) p_other)->$class->itable;
            while ($tmp5287->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp5287 = $tmp5287->next;
            }
            $fn5289 $tmp5288 = $tmp5287->methods[0];
            panda$collections$Iterator* $tmp5290 = $tmp5288(((panda$collections$Iterable*) p_other));
            raw$Iter5286 = $tmp5290;
            $l5291:;
            ITable* $tmp5293 = raw$Iter5286->$class->itable;
            while ($tmp5293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5293 = $tmp5293->next;
            }
            $fn5295 $tmp5294 = $tmp5293->methods[0];
            panda$core$Bit $tmp5296 = $tmp5294(raw$Iter5286);
            panda$core$Bit $tmp5297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5296);
            if (!$tmp5297.value) goto $l5292;
            {
                ITable* $tmp5299 = raw$Iter5286->$class->itable;
                while ($tmp5299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5299 = $tmp5299->next;
                }
                $fn5301 $tmp5300 = $tmp5299->methods[1];
                panda$core$Object* $tmp5302 = $tmp5300(raw$Iter5286);
                raw5298 = ((org$pandalanguage$pandac$ASTNode*) $tmp5302);
                org$pandalanguage$pandac$IRNode* $tmp5304 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, raw5298);
                stmt5303 = $tmp5304;
                if (((panda$core$Bit) { stmt5303 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements5283, ((panda$core$Object*) stmt5303));
            }
            goto $l5291;
            $l5292:;
        }
        org$pandalanguage$pandac$IRNode* $tmp5305 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp5305->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp5305->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp5307 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements5283);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp5305, ((panda$core$Int64) { 3 }), p_position, $tmp5307);
        panda$collections$Array$add$panda$collections$Array$T(result5225, ((panda$core$Object*) $tmp5305));
    }
    }
    panda$core$Int64 $tmp5309 = panda$collections$Array$get_count$R$panda$core$Int64(result5225);
    panda$core$Int64 $tmp5310 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5309, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5308, $tmp5310, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp5312 = $tmp5308.start.value;
    panda$core$Int64 i5311 = { $tmp5312 };
    int64_t $tmp5314 = $tmp5308.end.value;
    int64_t $tmp5315 = $tmp5308.step.value;
    bool $tmp5316 = $tmp5308.inclusive.value;
    bool $tmp5323 = $tmp5315 > 0;
    if ($tmp5323) goto $l5321; else goto $l5322;
    $l5321:;
    if ($tmp5316) goto $l5324; else goto $l5325;
    $l5324:;
    if ($tmp5312 <= $tmp5314) goto $l5317; else goto $l5319;
    $l5325:;
    if ($tmp5312 < $tmp5314) goto $l5317; else goto $l5319;
    $l5322:;
    if ($tmp5316) goto $l5326; else goto $l5327;
    $l5326:;
    if ($tmp5312 >= $tmp5314) goto $l5317; else goto $l5319;
    $l5327:;
    if ($tmp5312 > $tmp5314) goto $l5317; else goto $l5319;
    $l5317:;
    {
        {
            panda$core$Int64 $tmp5330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5311, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result5225, $tmp5330);
            $match$3508_135329 = ((org$pandalanguage$pandac$IRNode*) $tmp5331);
            panda$core$Bit $tmp5332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3508_135329->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp5332.value) {
            {
                org$pandalanguage$pandac$Position* $tmp5334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3508_135329->$data + 0));
                position5333 = *$tmp5334;
                org$pandalanguage$pandac$IRNode** $tmp5336 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$3508_135329->$data + 16));
                test5335 = *$tmp5336;
                panda$collections$ImmutableArray** $tmp5338 = ((panda$collections$ImmutableArray**) ((char*) $match$3508_135329->$data + 24));
                ifTrue5337 = *$tmp5338;
                org$pandalanguage$pandac$IRNode** $tmp5340 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$3508_135329->$data + 32));
                ifFalse5339 = *$tmp5340;
                PANDA_ASSERT(((panda$core$Bit) { ifFalse5339 == NULL }).value);
                panda$core$Int64 $tmp5341 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5311, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp5342 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp5342->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp5342->refCount.value = 1;
                panda$core$Object* $tmp5344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result5225, i5311);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp5342, ((panda$core$Int64) { 15 }), position5333, test5335, ifTrue5337, ((org$pandalanguage$pandac$IRNode*) $tmp5344));
                panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(result5225, $tmp5341, ((panda$core$Object*) $tmp5342));
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        panda$core$Int64 $tmp5345 = panda$collections$Array$get_count$R$panda$core$Int64(result5225);
        panda$core$Int64 $tmp5346 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5345, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(result5225, $tmp5346);
    }
    $l5320:;
    if ($tmp5323) goto $l5348; else goto $l5349;
    $l5348:;
    int64_t $tmp5350 = $tmp5314 - i5311.value;
    if ($tmp5316) goto $l5351; else goto $l5352;
    $l5351:;
    if ((uint64_t) $tmp5350 >= $tmp5315) goto $l5347; else goto $l5319;
    $l5352:;
    if ((uint64_t) $tmp5350 > $tmp5315) goto $l5347; else goto $l5319;
    $l5349:;
    int64_t $tmp5354 = i5311.value - $tmp5314;
    if ($tmp5316) goto $l5355; else goto $l5356;
    $l5355:;
    if ((uint64_t) $tmp5354 >= -$tmp5315) goto $l5347; else goto $l5319;
    $l5356:;
    if ((uint64_t) $tmp5354 > -$tmp5315) goto $l5347; else goto $l5319;
    $l5347:;
    i5311.value += $tmp5315;
    goto $l5317;
    $l5319:;
    org$pandalanguage$pandac$IRNode* $tmp5358 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5358->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5358->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp5360 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result5225);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp5358, ((panda$core$Int64) { 3 }), p_position, $tmp5360);
    return $tmp5358;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Position p_position, panda$collections$ImmutableArray* p_tests, panda$collections$ImmutableArray* p_rawStatements) {
    panda$collections$Array* finalTests5361;
    panda$collections$Iterator* expr$Iter5364;
    org$pandalanguage$pandac$ASTNode* expr5376;
    org$pandalanguage$pandac$IRNode* compiled5381;
    panda$collections$Array* statements5386;
    panda$collections$Iterator* rawStatement$Iter5389;
    org$pandalanguage$pandac$ASTNode* rawStatement5401;
    org$pandalanguage$pandac$IRNode* statement5406;
    panda$collections$Array* $tmp5362 = (panda$collections$Array*) malloc(40);
    $tmp5362->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5362->refCount.value = 1;
    panda$collections$Array$init($tmp5362);
    finalTests5361 = $tmp5362;
    {
        ITable* $tmp5365 = ((panda$collections$Iterable*) p_tests)->$class->itable;
        while ($tmp5365->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5365 = $tmp5365->next;
        }
        $fn5367 $tmp5366 = $tmp5365->methods[0];
        panda$collections$Iterator* $tmp5368 = $tmp5366(((panda$collections$Iterable*) p_tests));
        expr$Iter5364 = $tmp5368;
        $l5369:;
        ITable* $tmp5371 = expr$Iter5364->$class->itable;
        while ($tmp5371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5371 = $tmp5371->next;
        }
        $fn5373 $tmp5372 = $tmp5371->methods[0];
        panda$core$Bit $tmp5374 = $tmp5372(expr$Iter5364);
        panda$core$Bit $tmp5375 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5374);
        if (!$tmp5375.value) goto $l5370;
        {
            ITable* $tmp5377 = expr$Iter5364->$class->itable;
            while ($tmp5377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5377 = $tmp5377->next;
            }
            $fn5379 $tmp5378 = $tmp5377->methods[1];
            panda$core$Object* $tmp5380 = $tmp5378(expr$Iter5364);
            expr5376 = ((org$pandalanguage$pandac$ASTNode*) $tmp5380);
            org$pandalanguage$pandac$IRNode* $tmp5382 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr5376);
            org$pandalanguage$pandac$IRNode* $tmp5383 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5382, p_type);
            compiled5381 = $tmp5383;
            if (((panda$core$Bit) { compiled5381 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(finalTests5361, ((panda$core$Object*) compiled5381));
        }
        goto $l5369;
        $l5370:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp5384 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5384->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5384->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5384, self->symbolTable);
    self->symbolTable = $tmp5384;
    panda$collections$Array* $tmp5387 = (panda$collections$Array*) malloc(40);
    $tmp5387->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5387->refCount.value = 1;
    panda$collections$Array$init($tmp5387);
    statements5386 = $tmp5387;
    {
        ITable* $tmp5390 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
        while ($tmp5390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5390 = $tmp5390->next;
        }
        $fn5392 $tmp5391 = $tmp5390->methods[0];
        panda$collections$Iterator* $tmp5393 = $tmp5391(((panda$collections$Iterable*) p_rawStatements));
        rawStatement$Iter5389 = $tmp5393;
        $l5394:;
        ITable* $tmp5396 = rawStatement$Iter5389->$class->itable;
        while ($tmp5396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5396 = $tmp5396->next;
        }
        $fn5398 $tmp5397 = $tmp5396->methods[0];
        panda$core$Bit $tmp5399 = $tmp5397(rawStatement$Iter5389);
        panda$core$Bit $tmp5400 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5399);
        if (!$tmp5400.value) goto $l5395;
        {
            ITable* $tmp5402 = rawStatement$Iter5389->$class->itable;
            while ($tmp5402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5402 = $tmp5402->next;
            }
            $fn5404 $tmp5403 = $tmp5402->methods[1];
            panda$core$Object* $tmp5405 = $tmp5403(rawStatement$Iter5389);
            rawStatement5401 = ((org$pandalanguage$pandac$ASTNode*) $tmp5405);
            org$pandalanguage$pandac$IRNode* $tmp5407 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement5401);
            statement5406 = $tmp5407;
            if (((panda$core$Bit) { statement5406 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements5386, ((panda$core$Object*) statement5406));
        }
        goto $l5394;
        $l5395:;
    }
    panda$core$Object* $tmp5408 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp5408);
    org$pandalanguage$pandac$IRNode* $tmp5409 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5409->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5409->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp5411 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements5386);
    panda$collections$ImmutableArray* $tmp5412 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements5386);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp5409, ((panda$core$Int64) { 42 }), p_position, $tmp5411, $tmp5412);
    return $tmp5409;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$Compiler$compileOtherwise$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$ImmutableArray* p_rawStatements) {
    panda$collections$Array* statements5415;
    panda$collections$Iterator* rawStatement$Iter5418;
    org$pandalanguage$pandac$ASTNode* rawStatement5430;
    org$pandalanguage$pandac$IRNode* statement5435;
    org$pandalanguage$pandac$SymbolTable* $tmp5413 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5413->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5413->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5413, self->symbolTable);
    self->symbolTable = $tmp5413;
    panda$collections$Array* $tmp5416 = (panda$collections$Array*) malloc(40);
    $tmp5416->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5416->refCount.value = 1;
    panda$collections$Array$init($tmp5416);
    statements5415 = $tmp5416;
    {
        ITable* $tmp5419 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
        while ($tmp5419->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5419 = $tmp5419->next;
        }
        $fn5421 $tmp5420 = $tmp5419->methods[0];
        panda$collections$Iterator* $tmp5422 = $tmp5420(((panda$collections$Iterable*) p_rawStatements));
        rawStatement$Iter5418 = $tmp5422;
        $l5423:;
        ITable* $tmp5425 = rawStatement$Iter5418->$class->itable;
        while ($tmp5425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5425 = $tmp5425->next;
        }
        $fn5427 $tmp5426 = $tmp5425->methods[0];
        panda$core$Bit $tmp5428 = $tmp5426(rawStatement$Iter5418);
        panda$core$Bit $tmp5429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5428);
        if (!$tmp5429.value) goto $l5424;
        {
            ITable* $tmp5431 = rawStatement$Iter5418->$class->itable;
            while ($tmp5431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5431 = $tmp5431->next;
            }
            $fn5433 $tmp5432 = $tmp5431->methods[1];
            panda$core$Object* $tmp5434 = $tmp5432(rawStatement$Iter5418);
            rawStatement5430 = ((org$pandalanguage$pandac$ASTNode*) $tmp5434);
            org$pandalanguage$pandac$IRNode* $tmp5436 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement5430);
            statement5435 = $tmp5436;
            if (((panda$core$Bit) { statement5435 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements5415, ((panda$core$Object*) statement5435));
        }
        goto $l5423;
        $l5424:;
    }
    panda$core$Object* $tmp5437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp5437);
    panda$collections$ImmutableArray* $tmp5438 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements5415);
    return $tmp5438;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$IRNode* $match$3558_95439;
    org$pandalanguage$pandac$IRNode* initCall5442;
    org$pandalanguage$pandac$IRNode* $match$3565_175448;
    panda$collections$ImmutableArray* args5450;
    org$pandalanguage$pandac$FieldDecl* f5457;
    org$pandalanguage$pandac$Variable* v5468;
    {
        $match$3558_95439 = p_expr;
        panda$core$Bit $tmp5440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3558_95439->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp5440.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp5441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3558_95439->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp5441.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp5443 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$3558_95439->$data + 24));
            initCall5442 = *$tmp5443;
            org$pandalanguage$pandac$Type* $tmp5445 = (($fn5444) p_expr->$class->vtable[2])(p_expr);
            panda$core$Bit $tmp5446 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp5445);
            panda$core$Bit $tmp5447 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5446);
            if ($tmp5447.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            {
                $match$3565_175448 = initCall5442;
                panda$core$Bit $tmp5449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3565_175448->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp5449.value) {
                {
                    panda$collections$ImmutableArray** $tmp5451 = ((panda$collections$ImmutableArray**) ((char*) $match$3565_175448->$data + 32));
                    args5450 = *$tmp5451;
                    panda$core$Int64 $tmp5452 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args5450);
                    panda$core$Bit $tmp5453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5452, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp5453.value);
                    panda$core$Object* $tmp5454 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args5450, ((panda$core$Int64) { 0 }));
                    panda$core$Bit $tmp5455 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5454));
                    return $tmp5455;
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
        else {
        panda$core$Bit $tmp5456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3558_95439->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp5456.value) {
        {
            org$pandalanguage$pandac$FieldDecl** $tmp5458 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$3558_95439->$data + 32));
            f5457 = *$tmp5458;
            PANDA_ASSERT(f5457->resolved.value);
            panda$core$Bit $tmp5461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f5457->fieldKind.$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp5460 = $tmp5461.value;
            if (!$tmp5460) goto $l5462;
            $tmp5460 = ((panda$core$Bit) { f5457->value != NULL }).value;
            $l5462:;
            panda$core$Bit $tmp5463 = { $tmp5460 };
            bool $tmp5459 = $tmp5463.value;
            if (!$tmp5459) goto $l5464;
            panda$core$Bit $tmp5465 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f5457->value);
            $tmp5459 = $tmp5465.value;
            $l5464:;
            panda$core$Bit $tmp5466 = { $tmp5459 };
            return $tmp5466;
        }
        }
        else {
        panda$core$Bit $tmp5467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3558_95439->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp5467.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp5469 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$3558_95439->$data + 16));
            v5468 = *$tmp5469;
            panda$core$Bit $tmp5471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v5468->varKind.$rawValue, ((panda$core$Int64) { 1 }));
            bool $tmp5470 = $tmp5471.value;
            if ($tmp5470) goto $l5472;
            panda$core$Bit $tmp5475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v5468->varKind.$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp5474 = $tmp5475.value;
            if (!$tmp5474) goto $l5476;
            $tmp5474 = ((panda$core$Bit) { v5468->initialValue != NULL }).value;
            $l5476:;
            panda$core$Bit $tmp5477 = { $tmp5474 };
            bool $tmp5473 = $tmp5477.value;
            if (!$tmp5473) goto $l5478;
            panda$core$Bit $tmp5479 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v5468->initialValue);
            $tmp5473 = $tmp5479.value;
            $l5478:;
            panda$core$Bit $tmp5480 = { $tmp5473 };
            $tmp5470 = $tmp5480.value;
            $l5472:;
            panda$core$Bit $tmp5481 = { $tmp5470 };
            return $tmp5481;
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
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$IRNode* $match$3586_95483;
    panda$core$UInt64 value5485;
    org$pandalanguage$pandac$IRNode* initCall5488;
    org$pandalanguage$pandac$IRNode* $match$3590_175490;
    panda$collections$ImmutableArray* args5492;
    org$pandalanguage$pandac$FieldDecl* f5499;
    org$pandalanguage$pandac$Variable* v5503;
    panda$core$Bit $tmp5482 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp5482.value);
    {
        $match$3586_95483 = p_expr;
        panda$core$Bit $tmp5484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3586_95483->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp5484.value) {
        {
            panda$core$UInt64* $tmp5486 = ((panda$core$UInt64*) ((char*) $match$3586_95483->$data + 24));
            value5485 = *$tmp5486;
            return value5485;
        }
        }
        else {
        panda$core$Bit $tmp5487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3586_95483->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp5487.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp5489 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$3586_95483->$data + 24));
            initCall5488 = *$tmp5489;
            {
                $match$3590_175490 = initCall5488;
                panda$core$Bit $tmp5491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3590_175490->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp5491.value) {
                {
                    panda$collections$ImmutableArray** $tmp5493 = ((panda$collections$ImmutableArray**) ((char*) $match$3590_175490->$data + 32));
                    args5492 = *$tmp5493;
                    panda$core$Int64 $tmp5494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args5492);
                    panda$core$Bit $tmp5495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5494, ((panda$core$Int64) { 1 }));
                    PANDA_ASSERT($tmp5495.value);
                    panda$core$Object* $tmp5496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args5492, ((panda$core$Int64) { 0 }));
                    panda$core$UInt64 $tmp5497 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp5496));
                    return $tmp5497;
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
        else {
        panda$core$Bit $tmp5498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3586_95483->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp5498.value) {
        {
            org$pandalanguage$pandac$FieldDecl** $tmp5500 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$3586_95483->$data + 32));
            f5499 = *$tmp5500;
            panda$core$UInt64 $tmp5501 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f5499->value);
            return $tmp5501;
        }
        }
        else {
        panda$core$Bit $tmp5502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3586_95483->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp5502.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp5504 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$3586_95483->$data + 16));
            v5503 = *$tmp5504;
            panda$core$UInt64 $tmp5505 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v5503->initialValue);
            return $tmp5505;
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
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other) {
    org$pandalanguage$pandac$IRNode* finalValue5506;
    panda$collections$Array* finalWhens5514;
    panda$collections$Iterator* rawWhen$Iter5517;
    org$pandalanguage$pandac$ASTNode* rawWhen5529;
    org$pandalanguage$pandac$ASTNode* $match$3617_135534;
    org$pandalanguage$pandac$Position position5536;
    panda$collections$ImmutableArray* tests5538;
    panda$collections$ImmutableArray* statements5540;
    org$pandalanguage$pandac$IRNode* w5542;
    org$pandalanguage$pandac$IRNode* $match$3623_215546;
    panda$collections$ImmutableArray* tests5548;
    panda$collections$Iterator* t$Iter5550;
    org$pandalanguage$pandac$IRNode* t5562;
    panda$collections$ImmutableArray* finalOther5570;
    org$pandalanguage$pandac$IRNode* $tmp5507 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value);
    org$pandalanguage$pandac$IRNode* $tmp5508 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5507);
    finalValue5506 = $tmp5508;
    if (((panda$core$Bit) { finalValue5506 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp5510 = (($fn5509) finalValue5506->$class->vtable[2])(finalValue5506);
    panda$core$Bit $tmp5511 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp5510);
    panda$core$Bit $tmp5512 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5511);
    if ($tmp5512.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5513 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, finalValue5506, p_whens, p_other);
        return $tmp5513;
    }
    }
    panda$collections$Array* $tmp5515 = (panda$collections$Array*) malloc(40);
    $tmp5515->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5515->refCount.value = 1;
    panda$collections$Array$init($tmp5515);
    finalWhens5514 = $tmp5515;
    {
        ITable* $tmp5518 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp5518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5518 = $tmp5518->next;
        }
        $fn5520 $tmp5519 = $tmp5518->methods[0];
        panda$collections$Iterator* $tmp5521 = $tmp5519(((panda$collections$Iterable*) p_whens));
        rawWhen$Iter5517 = $tmp5521;
        $l5522:;
        ITable* $tmp5524 = rawWhen$Iter5517->$class->itable;
        while ($tmp5524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5524 = $tmp5524->next;
        }
        $fn5526 $tmp5525 = $tmp5524->methods[0];
        panda$core$Bit $tmp5527 = $tmp5525(rawWhen$Iter5517);
        panda$core$Bit $tmp5528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5527);
        if (!$tmp5528.value) goto $l5523;
        {
            ITable* $tmp5530 = rawWhen$Iter5517->$class->itable;
            while ($tmp5530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5530 = $tmp5530->next;
            }
            $fn5532 $tmp5531 = $tmp5530->methods[1];
            panda$core$Object* $tmp5533 = $tmp5531(rawWhen$Iter5517);
            rawWhen5529 = ((org$pandalanguage$pandac$ASTNode*) $tmp5533);
            {
                $match$3617_135534 = rawWhen5529;
                panda$core$Bit $tmp5535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3617_135534->$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp5535.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp5537 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3617_135534->$data + 0));
                    position5536 = *$tmp5537;
                    panda$collections$ImmutableArray** $tmp5539 = ((panda$collections$ImmutableArray**) ((char*) $match$3617_135534->$data + 16));
                    tests5538 = *$tmp5539;
                    panda$collections$ImmutableArray** $tmp5541 = ((panda$collections$ImmutableArray**) ((char*) $match$3617_135534->$data + 24));
                    statements5540 = *$tmp5541;
                    org$pandalanguage$pandac$Type* $tmp5544 = (($fn5543) finalValue5506->$class->vtable[2])(finalValue5506);
                    org$pandalanguage$pandac$IRNode* $tmp5545 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5544, position5536, tests5538, statements5540);
                    w5542 = $tmp5545;
                    if (((panda$core$Bit) { w5542 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    {
                        $match$3623_215546 = w5542;
                        panda$core$Bit $tmp5547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3623_215546->$rawValue, ((panda$core$Int64) { 42 }));
                        if ($tmp5547.value) {
                        {
                            panda$collections$ImmutableArray** $tmp5549 = ((panda$collections$ImmutableArray**) ((char*) $match$3623_215546->$data + 16));
                            tests5548 = *$tmp5549;
                            {
                                ITable* $tmp5551 = ((panda$collections$Iterable*) tests5548)->$class->itable;
                                while ($tmp5551->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp5551 = $tmp5551->next;
                                }
                                $fn5553 $tmp5552 = $tmp5551->methods[0];
                                panda$collections$Iterator* $tmp5554 = $tmp5552(((panda$collections$Iterable*) tests5548));
                                t$Iter5550 = $tmp5554;
                                $l5555:;
                                ITable* $tmp5557 = t$Iter5550->$class->itable;
                                while ($tmp5557->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp5557 = $tmp5557->next;
                                }
                                $fn5559 $tmp5558 = $tmp5557->methods[0];
                                panda$core$Bit $tmp5560 = $tmp5558(t$Iter5550);
                                panda$core$Bit $tmp5561 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5560);
                                if (!$tmp5561.value) goto $l5556;
                                {
                                    ITable* $tmp5563 = t$Iter5550->$class->itable;
                                    while ($tmp5563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp5563 = $tmp5563->next;
                                    }
                                    $fn5565 $tmp5564 = $tmp5563->methods[1];
                                    panda$core$Object* $tmp5566 = $tmp5564(t$Iter5550);
                                    t5562 = ((org$pandalanguage$pandac$IRNode*) $tmp5566);
                                    panda$core$Bit $tmp5567 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, t5562);
                                    panda$core$Bit $tmp5568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5567);
                                    if ($tmp5568.value) {
                                    {
                                        org$pandalanguage$pandac$IRNode* $tmp5569 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5536, finalValue5506, p_whens, p_other);
                                        return $tmp5569;
                                    }
                                    }
                                }
                                goto $l5555;
                                $l5556:;
                            }
                            panda$collections$Array$add$panda$collections$Array$T(finalWhens5514, ((panda$core$Object*) w5542));
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
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l5522;
        $l5523:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        panda$collections$ImmutableArray* $tmp5571 = org$pandalanguage$pandac$Compiler$compileOtherwise$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_other);
        finalOther5570 = $tmp5571;
        if (((panda$core$Bit) { finalOther5570 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        finalOther5570 = NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp5572 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5572->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5572->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp5574 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(finalWhens5514);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp5572, ((panda$core$Int64) { 20 }), p_position, finalValue5506, $tmp5574, finalOther5570);
    return $tmp5572;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ASTNode* $match$3652_95575;
    org$pandalanguage$pandac$Position position5577;
    org$pandalanguage$pandac$ASTNode* test5579;
    org$pandalanguage$pandac$ASTNode* msg5581;
    org$pandalanguage$pandac$Position position5585;
    org$pandalanguage$pandac$ASTNode* left5587;
    org$pandalanguage$pandac$parser$Token$Kind op5589;
    org$pandalanguage$pandac$ASTNode* right5591;
    org$pandalanguage$pandac$Position position5596;
    panda$collections$ImmutableArray* statements5598;
    org$pandalanguage$pandac$Position position5602;
    org$pandalanguage$pandac$ASTNode* test5604;
    panda$collections$ImmutableArray* ifTrue5606;
    org$pandalanguage$pandac$ASTNode* ifFalse5608;
    org$pandalanguage$pandac$Position position5612;
    panda$core$String* label5614;
    org$pandalanguage$pandac$ASTNode* target5616;
    org$pandalanguage$pandac$ASTNode* list5618;
    panda$collections$ImmutableArray* statements5620;
    org$pandalanguage$pandac$Position position5624;
    panda$core$String* label5626;
    org$pandalanguage$pandac$ASTNode* test5628;
    panda$collections$ImmutableArray* statements5630;
    org$pandalanguage$pandac$Position position5634;
    panda$core$String* label5636;
    panda$collections$ImmutableArray* statements5638;
    org$pandalanguage$pandac$ASTNode* test5640;
    org$pandalanguage$pandac$Position position5644;
    panda$core$String* label5646;
    panda$collections$ImmutableArray* statements5648;
    org$pandalanguage$pandac$Position position5652;
    org$pandalanguage$pandac$ASTNode* value5654;
    panda$collections$ImmutableArray* whens5656;
    panda$collections$ImmutableArray* other5658;
    org$pandalanguage$pandac$Position position5662;
    panda$core$String* label5664;
    org$pandalanguage$pandac$Position position5668;
    panda$core$String* label5670;
    org$pandalanguage$pandac$Position position5674;
    org$pandalanguage$pandac$ASTNode* value5676;
    org$pandalanguage$pandac$Position position5680;
    org$pandalanguage$pandac$ASTNode* target5682;
    panda$collections$ImmutableArray* args5684;
    org$pandalanguage$pandac$IRNode* result5686;
    org$pandalanguage$pandac$Position position5691;
    org$pandalanguage$pandac$Variable$Kind kind5693;
    panda$collections$ImmutableArray* declarations5695;
    {
        $match$3652_95575 = p_s;
        panda$core$Bit $tmp5576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp5576.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5578 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5577 = *$tmp5578;
            org$pandalanguage$pandac$ASTNode** $tmp5580 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 16));
            test5579 = *$tmp5580;
            org$pandalanguage$pandac$ASTNode** $tmp5582 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 24));
            msg5581 = *$tmp5582;
            org$pandalanguage$pandac$IRNode* $tmp5583 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5577, test5579, msg5581);
            return $tmp5583;
        }
        }
        else {
        panda$core$Bit $tmp5584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp5584.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5586 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5585 = *$tmp5586;
            org$pandalanguage$pandac$ASTNode** $tmp5588 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 16));
            left5587 = *$tmp5588;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp5590 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$3652_95575->$data + 24));
            op5589 = *$tmp5590;
            org$pandalanguage$pandac$ASTNode** $tmp5592 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 32));
            right5591 = *$tmp5592;
            org$pandalanguage$pandac$IRNode* $tmp5593 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position5585, left5587, op5589, right5591);
            org$pandalanguage$pandac$IRNode* $tmp5594 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5593);
            return $tmp5594;
        }
        }
        else {
        panda$core$Bit $tmp5595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp5595.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5597 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5596 = *$tmp5597;
            panda$collections$ImmutableArray** $tmp5599 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 16));
            statements5598 = *$tmp5599;
            org$pandalanguage$pandac$IRNode* $tmp5600 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5596, ((panda$collections$ListView*) statements5598));
            return $tmp5600;
        }
        }
        else {
        panda$core$Bit $tmp5601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp5601.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5603 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5602 = *$tmp5603;
            org$pandalanguage$pandac$ASTNode** $tmp5605 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 16));
            test5604 = *$tmp5605;
            panda$collections$ImmutableArray** $tmp5607 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 24));
            ifTrue5606 = *$tmp5607;
            org$pandalanguage$pandac$ASTNode** $tmp5609 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 32));
            ifFalse5608 = *$tmp5609;
            org$pandalanguage$pandac$IRNode* $tmp5610 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5602, test5604, ((panda$collections$ListView*) ifTrue5606), ifFalse5608);
            return $tmp5610;
        }
        }
        else {
        panda$core$Bit $tmp5611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp5611.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5613 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5612 = *$tmp5613;
            panda$core$String** $tmp5615 = ((panda$core$String**) ((char*) $match$3652_95575->$data + 16));
            label5614 = *$tmp5615;
            org$pandalanguage$pandac$ASTNode** $tmp5617 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 24));
            target5616 = *$tmp5617;
            org$pandalanguage$pandac$ASTNode** $tmp5619 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 32));
            list5618 = *$tmp5619;
            panda$collections$ImmutableArray** $tmp5621 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 40));
            statements5620 = *$tmp5621;
            org$pandalanguage$pandac$IRNode* $tmp5622 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5612, label5614, target5616, list5618, ((panda$collections$ListView*) statements5620));
            return $tmp5622;
        }
        }
        else {
        panda$core$Bit $tmp5623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp5623.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5625 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5624 = *$tmp5625;
            panda$core$String** $tmp5627 = ((panda$core$String**) ((char*) $match$3652_95575->$data + 16));
            label5626 = *$tmp5627;
            org$pandalanguage$pandac$ASTNode** $tmp5629 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 24));
            test5628 = *$tmp5629;
            panda$collections$ImmutableArray** $tmp5631 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 32));
            statements5630 = *$tmp5631;
            org$pandalanguage$pandac$IRNode* $tmp5632 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5624, label5626, test5628, ((panda$collections$ListView*) statements5630));
            return $tmp5632;
        }
        }
        else {
        panda$core$Bit $tmp5633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp5633.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5635 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5634 = *$tmp5635;
            panda$core$String** $tmp5637 = ((panda$core$String**) ((char*) $match$3652_95575->$data + 16));
            label5636 = *$tmp5637;
            panda$collections$ImmutableArray** $tmp5639 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 24));
            statements5638 = *$tmp5639;
            org$pandalanguage$pandac$ASTNode** $tmp5641 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 32));
            test5640 = *$tmp5641;
            org$pandalanguage$pandac$IRNode* $tmp5642 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position5634, label5636, ((panda$collections$ListView*) statements5638), test5640);
            return $tmp5642;
        }
        }
        else {
        panda$core$Bit $tmp5643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp5643.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5645 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5644 = *$tmp5645;
            panda$core$String** $tmp5647 = ((panda$core$String**) ((char*) $match$3652_95575->$data + 16));
            label5646 = *$tmp5647;
            panda$collections$ImmutableArray** $tmp5649 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 24));
            statements5648 = *$tmp5649;
            org$pandalanguage$pandac$IRNode* $tmp5650 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5644, label5646, ((panda$collections$ListView*) statements5648));
            return $tmp5650;
        }
        }
        else {
        panda$core$Bit $tmp5651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp5651.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5653 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5652 = *$tmp5653;
            org$pandalanguage$pandac$ASTNode** $tmp5655 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 16));
            value5654 = *$tmp5655;
            panda$collections$ImmutableArray** $tmp5657 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 24));
            whens5656 = *$tmp5657;
            panda$collections$ImmutableArray** $tmp5659 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 32));
            other5658 = *$tmp5659;
            org$pandalanguage$pandac$IRNode* $tmp5660 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5652, value5654, whens5656, other5658);
            return $tmp5660;
        }
        }
        else {
        panda$core$Bit $tmp5661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp5661.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5663 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5662 = *$tmp5663;
            panda$core$String** $tmp5665 = ((panda$core$String**) ((char*) $match$3652_95575->$data + 16));
            label5664 = *$tmp5665;
            org$pandalanguage$pandac$IRNode* $tmp5666 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5662, label5664);
            return $tmp5666;
        }
        }
        else {
        panda$core$Bit $tmp5667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp5667.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5669 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5668 = *$tmp5669;
            panda$core$String** $tmp5671 = ((panda$core$String**) ((char*) $match$3652_95575->$data + 16));
            label5670 = *$tmp5671;
            org$pandalanguage$pandac$IRNode* $tmp5672 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5668, label5670);
            return $tmp5672;
        }
        }
        else {
        panda$core$Bit $tmp5673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp5673.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5675 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5674 = *$tmp5675;
            org$pandalanguage$pandac$ASTNode** $tmp5677 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 16));
            value5676 = *$tmp5677;
            org$pandalanguage$pandac$IRNode* $tmp5678 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5674, value5676);
            return $tmp5678;
        }
        }
        else {
        panda$core$Bit $tmp5679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp5679.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5681 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5680 = *$tmp5681;
            org$pandalanguage$pandac$ASTNode** $tmp5683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3652_95575->$data + 16));
            target5682 = *$tmp5683;
            panda$collections$ImmutableArray** $tmp5685 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 24));
            args5684 = *$tmp5685;
            org$pandalanguage$pandac$IRNode* $tmp5687 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5680, target5682, args5684);
            org$pandalanguage$pandac$IRNode* $tmp5688 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5687);
            result5686 = $tmp5688;
            if (((panda$core$Bit) { result5686 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp5689 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result5686);
                result5686 = $tmp5689;
            }
            }
            return result5686;
        }
        }
        else {
        panda$core$Bit $tmp5690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3652_95575->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp5690.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5692 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3652_95575->$data + 0));
            position5691 = *$tmp5692;
            org$pandalanguage$pandac$Variable$Kind* $tmp5694 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$3652_95575->$data + 16));
            kind5693 = *$tmp5694;
            panda$collections$ImmutableArray** $tmp5696 = ((panda$collections$ImmutableArray**) ((char*) $match$3652_95575->$data + 24));
            declarations5695 = *$tmp5696;
            org$pandalanguage$pandac$IRNode* $tmp5697 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5691, kind5693, declarations5695);
            return $tmp5697;
        }
        }
        }
        }
        }
        }
        }
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
panda$collections$ImmutableArray* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old5698;
    org$pandalanguage$pandac$SymbolTable* symbols5700;
    panda$collections$Iterator* p$Iter5703;
    org$pandalanguage$pandac$MethodDecl$Parameter* p5715;
    org$pandalanguage$pandac$Variable$Kind $tmp5722;
    org$pandalanguage$pandac$Variable$Storage $tmp5723;
    panda$collections$Array* fieldInitializers5724;
    panda$collections$Iterator* f$Iter5728;
    org$pandalanguage$pandac$FieldDecl* f5741;
    org$pandalanguage$pandac$IRNode* fieldRef5751;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5760;
    panda$collections$ImmutableArray* compiled5761;
    panda$collections$Array* finalBody5763;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old5698 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5699 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp5699;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp5701 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5701->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5701->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5701, self->symbolTable);
    symbols5700 = $tmp5701;
    {
        ITable* $tmp5704 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp5704->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5704 = $tmp5704->next;
        }
        $fn5706 $tmp5705 = $tmp5704->methods[0];
        panda$collections$Iterator* $tmp5707 = $tmp5705(((panda$collections$Iterable*) p_m->parameters));
        p$Iter5703 = $tmp5707;
        $l5708:;
        ITable* $tmp5710 = p$Iter5703->$class->itable;
        while ($tmp5710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5710 = $tmp5710->next;
        }
        $fn5712 $tmp5711 = $tmp5710->methods[0];
        panda$core$Bit $tmp5713 = $tmp5711(p$Iter5703);
        panda$core$Bit $tmp5714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5713);
        if (!$tmp5714.value) goto $l5709;
        {
            ITable* $tmp5716 = p$Iter5703->$class->itable;
            while ($tmp5716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5716 = $tmp5716->next;
            }
            $fn5718 $tmp5717 = $tmp5716->methods[1];
            panda$core$Object* $tmp5719 = $tmp5717(p$Iter5703);
            p5715 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5719);
            org$pandalanguage$pandac$Variable* $tmp5720 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp5720->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp5720->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp5722, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(&$tmp5723, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp5720, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5722, p5715->name, p5715->type, $tmp5723);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols5700, ((org$pandalanguage$pandac$Symbol*) $tmp5720));
        }
        goto $l5708;
        $l5709:;
    }
    self->symbolTable = symbols5700;
    fieldInitializers5724 = NULL;
    panda$core$Bit $tmp5725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp5725.value) {
    {
        panda$collections$Array* $tmp5726 = (panda$collections$Array*) malloc(40);
        $tmp5726->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp5726->refCount.value = 1;
        panda$collections$Array$init($tmp5726);
        fieldInitializers5724 = $tmp5726;
        {
            panda$core$Object* $tmp5729 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp5730 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5729)->fields)->$class->itable;
            while ($tmp5730->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp5730 = $tmp5730->next;
            }
            $fn5732 $tmp5731 = $tmp5730->methods[0];
            panda$collections$Iterator* $tmp5733 = $tmp5731(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5729)->fields));
            f$Iter5728 = $tmp5733;
            $l5734:;
            ITable* $tmp5736 = f$Iter5728->$class->itable;
            while ($tmp5736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5736 = $tmp5736->next;
            }
            $fn5738 $tmp5737 = $tmp5736->methods[0];
            panda$core$Bit $tmp5739 = $tmp5737(f$Iter5728);
            panda$core$Bit $tmp5740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5739);
            if (!$tmp5740.value) goto $l5735;
            {
                ITable* $tmp5742 = f$Iter5728->$class->itable;
                while ($tmp5742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5742 = $tmp5742->next;
                }
                $fn5744 $tmp5743 = $tmp5742->methods[1];
                panda$core$Object* $tmp5745 = $tmp5743(f$Iter5728);
                f5741 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5745);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f5741);
                panda$core$Bit $tmp5747 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f5741->annotations);
                panda$core$Bit $tmp5748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5747);
                bool $tmp5746 = $tmp5748.value;
                if (!$tmp5746) goto $l5749;
                $tmp5746 = ((panda$core$Bit) { f5741->value != NULL }).value;
                $l5749:;
                panda$core$Bit $tmp5750 = { $tmp5746 };
                if ($tmp5750.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp5752 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5752->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode* $tmp5754 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5754->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5754->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp5756 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp5754, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5756);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp5752, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f5741->type, $tmp5754, f5741);
                    fieldRef5751 = $tmp5752;
                    org$pandalanguage$pandac$IRNode* $tmp5757 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5757->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5757->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp5759 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5760, ((panda$core$Int64) { 73 }));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp5757, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$Symbol*) f5741)->position, $tmp5759, fieldRef5751, $tmp5760, f5741->value);
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers5724, ((panda$core$Object*) $tmp5757));
                }
                }
            }
            goto $l5734;
            $l5735:;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp5762 = org$pandalanguage$pandac$Compiler$compileBlockStatements$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) p_m->body));
    compiled5761 = $tmp5762;
    if (((panda$core$Bit) { compiled5761 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers5724 != NULL }).value) {
        {
            panda$collections$Array* $tmp5764 = (panda$collections$Array*) malloc(40);
            $tmp5764->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5764->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp5764, ((panda$collections$ListView*) fieldInitializers5724));
            finalBody5763 = $tmp5764;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(finalBody5763, ((panda$collections$CollectionView*) compiled5761));
            panda$collections$ImmutableArray* $tmp5766 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(finalBody5763);
            compiled5761 = $tmp5766;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols5700) }).value);
    self->symbolTable = old5698;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp5767 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp5767.value) {
    {
        p_m->compiledBody = compiled5761;
    }
    }
    return compiled5761;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$ImmutableArray* compiled5768;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        panda$collections$ImmutableArray* $tmp5769 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_m);
        compiled5768 = $tmp5769;
        panda$core$Bit $tmp5771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp5770 = $tmp5771.value;
        if (!$tmp5770) goto $l5772;
        $tmp5770 = ((panda$core$Bit) { compiled5768 != NULL }).value;
        $l5772:;
        panda$core$Bit $tmp5773 = { $tmp5770 };
        if ($tmp5773.value) {
        {
            ITable* $tmp5774 = self->codeGenerator->$class->itable;
            while ($tmp5774->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp5774 = $tmp5774->next;
            }
            $fn5776 $tmp5775 = $tmp5774->methods[3];
            $tmp5775(self->codeGenerator, p_m, compiled5768);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp5777 = self->codeGenerator->$class->itable;
        while ($tmp5777->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5777 = $tmp5777->next;
        }
        $fn5779 $tmp5778 = $tmp5777->methods[2];
        $tmp5778(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter5780;
    org$pandalanguage$pandac$ClassDecl* inner5792;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp5781 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp5781->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5781 = $tmp5781->next;
        }
        $fn5783 $tmp5782 = $tmp5781->methods[0];
        panda$collections$Iterator* $tmp5784 = $tmp5782(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter5780 = $tmp5784;
        $l5785:;
        ITable* $tmp5787 = inner$Iter5780->$class->itable;
        while ($tmp5787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5787 = $tmp5787->next;
        }
        $fn5789 $tmp5788 = $tmp5787->methods[0];
        panda$core$Bit $tmp5790 = $tmp5788(inner$Iter5780);
        panda$core$Bit $tmp5791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5790);
        if (!$tmp5791.value) goto $l5786;
        {
            ITable* $tmp5793 = inner$Iter5780->$class->itable;
            while ($tmp5793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5793 = $tmp5793->next;
            }
            $fn5795 $tmp5794 = $tmp5793->methods[1];
            panda$core$Object* $tmp5796 = $tmp5794(inner$Iter5780);
            inner5792 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5796);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner5792);
        }
        goto $l5785;
        $l5786:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old5804;
    panda$collections$Iterator* m$Iter5809;
    org$pandalanguage$pandac$MethodDecl* m5821;
    org$pandalanguage$pandac$ClassDecl* next5831;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp5797 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp5797.value) {
    {
        ITable* $tmp5798 = self->codeGenerator->$class->itable;
        while ($tmp5798->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5798 = $tmp5798->next;
        }
        $fn5800 $tmp5799 = $tmp5798->methods[1];
        $tmp5799(self->codeGenerator, p_cl);
        ITable* $tmp5801 = self->codeGenerator->$class->itable;
        while ($tmp5801->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5801 = $tmp5801->next;
        }
        $fn5803 $tmp5802 = $tmp5801->methods[4];
        $tmp5802(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old5804 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5805 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp5805;
    ITable* $tmp5806 = self->codeGenerator->$class->itable;
    while ($tmp5806->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5806 = $tmp5806->next;
    }
    $fn5808 $tmp5807 = $tmp5806->methods[1];
    $tmp5807(self->codeGenerator, p_cl);
    {
        ITable* $tmp5810 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp5810->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5810 = $tmp5810->next;
        }
        $fn5812 $tmp5811 = $tmp5810->methods[0];
        panda$collections$Iterator* $tmp5813 = $tmp5811(((panda$collections$Iterable*) p_cl->methods));
        m$Iter5809 = $tmp5813;
        $l5814:;
        ITable* $tmp5816 = m$Iter5809->$class->itable;
        while ($tmp5816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5816 = $tmp5816->next;
        }
        $fn5818 $tmp5817 = $tmp5816->methods[0];
        panda$core$Bit $tmp5819 = $tmp5817(m$Iter5809);
        panda$core$Bit $tmp5820 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5819);
        if (!$tmp5820.value) goto $l5815;
        {
            ITable* $tmp5822 = m$Iter5809->$class->itable;
            while ($tmp5822->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5822 = $tmp5822->next;
            }
            $fn5824 $tmp5823 = $tmp5822->methods[1];
            panda$core$Object* $tmp5825 = $tmp5823(m$Iter5809);
            m5821 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5825);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m5821);
        }
        goto $l5814;
        $l5815:;
    }
    ITable* $tmp5826 = self->codeGenerator->$class->itable;
    while ($tmp5826->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5826 = $tmp5826->next;
    }
    $fn5828 $tmp5827 = $tmp5826->methods[4];
    $tmp5827(self->codeGenerator, p_cl);
    self->symbolTable = old5804;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp5829 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5830 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5829, ((panda$core$Int64) { 0 }));
    if ($tmp5830.value) {
    {
        panda$core$Object* $tmp5832 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next5831 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5832);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next5831);
    }
    }
    panda$core$Int64 $tmp5833 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5833, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5834.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result5835;
    org$pandalanguage$pandac$ASTNode* parsed5838;
    panda$collections$Iterator* cl$Iter5841;
    org$pandalanguage$pandac$ClassDecl* cl5853;
    panda$core$Object* $tmp5836 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result5835 = ((panda$collections$ListView*) $tmp5836);
    if (((panda$core$Bit) { result5835 == NULL }).value) {
    {
        panda$core$String* $tmp5837 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp5837);
        org$pandalanguage$pandac$ASTNode* $tmp5839 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed5838 = $tmp5839;
        if (((panda$core$Bit) { parsed5838 != NULL }).value) {
        {
            panda$collections$ListView* $tmp5840 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed5838);
            result5835 = $tmp5840;
            {
                ITable* $tmp5842 = ((panda$collections$Iterable*) result5835)->$class->itable;
                while ($tmp5842->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp5842 = $tmp5842->next;
                }
                $fn5844 $tmp5843 = $tmp5842->methods[0];
                panda$collections$Iterator* $tmp5845 = $tmp5843(((panda$collections$Iterable*) result5835));
                cl$Iter5841 = $tmp5845;
                $l5846:;
                ITable* $tmp5848 = cl$Iter5841->$class->itable;
                while ($tmp5848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5848 = $tmp5848->next;
                }
                $fn5850 $tmp5849 = $tmp5848->methods[0];
                panda$core$Bit $tmp5851 = $tmp5849(cl$Iter5841);
                panda$core$Bit $tmp5852 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5851);
                if (!$tmp5852.value) goto $l5847;
                {
                    ITable* $tmp5854 = cl$Iter5841->$class->itable;
                    while ($tmp5854->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp5854 = $tmp5854->next;
                    }
                    $fn5856 $tmp5855 = $tmp5854->methods[1];
                    panda$core$Object* $tmp5857 = $tmp5855(cl$Iter5841);
                    cl5853 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5857);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl5853)->name), ((panda$core$Object*) cl5853));
                }
                goto $l5846;
                $l5847:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp5858 = (panda$collections$Array*) malloc(40);
            $tmp5858->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5858->refCount.value = 1;
            panda$collections$Array$init($tmp5858);
            result5835 = ((panda$collections$ListView*) $tmp5858);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result5835));
    }
    }
    return result5835;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes5860;
    panda$collections$Iterator* cl$Iter5862;
    org$pandalanguage$pandac$ClassDecl* cl5874;
    panda$collections$ListView* $tmp5861 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes5860 = $tmp5861;
    {
        ITable* $tmp5863 = ((panda$collections$Iterable*) classes5860)->$class->itable;
        while ($tmp5863->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5863 = $tmp5863->next;
        }
        $fn5865 $tmp5864 = $tmp5863->methods[0];
        panda$collections$Iterator* $tmp5866 = $tmp5864(((panda$collections$Iterable*) classes5860));
        cl$Iter5862 = $tmp5866;
        $l5867:;
        ITable* $tmp5869 = cl$Iter5862->$class->itable;
        while ($tmp5869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5869 = $tmp5869->next;
        }
        $fn5871 $tmp5870 = $tmp5869->methods[0];
        panda$core$Bit $tmp5872 = $tmp5870(cl$Iter5862);
        panda$core$Bit $tmp5873 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5872);
        if (!$tmp5873.value) goto $l5868;
        {
            ITable* $tmp5875 = cl$Iter5862->$class->itable;
            while ($tmp5875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5875 = $tmp5875->next;
            }
            $fn5877 $tmp5876 = $tmp5875->methods[1];
            panda$core$Object* $tmp5878 = $tmp5876(cl$Iter5862);
            cl5874 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5878);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl5874);
        }
        goto $l5867;
        $l5868:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp5879 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp5879)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp5880 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp5880;
        panda$core$String* $tmp5881 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp5882 = panda$core$String$convert$R$panda$core$String($tmp5881);
        panda$core$String* $tmp5884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5882, &$s5883);
        org$pandalanguage$pandac$Position$wrapper* $tmp5885;
        $tmp5885 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
        $tmp5885->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
        $tmp5885->refCount = 1;
        $tmp5885->value = p_pos;
        panda$core$String* $tmp5886 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5884, ((panda$core$Object*) $tmp5885));
        panda$core$String* $tmp5888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5886, &$s5887);
        panda$core$String* $tmp5889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5888, p_msg);
        panda$core$String* $tmp5891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5889, &$s5890);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp5891));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp5892 = self->codeGenerator->$class->itable;
    while ($tmp5892->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5892 = $tmp5892->next;
    }
    $fn5894 $tmp5893 = $tmp5892->methods[5];
    $tmp5893(self->codeGenerator);
}

