#include "org/pandalanguage/pandac/expression/Identifier.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$Identifier$class_type org$pandalanguage$pandac$expression$Identifier$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$Identifier$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 46, 3013918615921417079, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6787389302764549126, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x27\x73\x65\x6c\x66\x27\x20\x69\x6e\x20\x73\x79\x6d\x62\x6f\x6c\x74\x61\x62\x6c\x65", 24, -7954212962265123193, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Identifier$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

org$pandalanguage$pandac$Symbol* local0 = NULL;
org$pandalanguage$pandac$Symbol* local1 = NULL;
org$pandalanguage$pandac$ClassDecl* local2 = NULL;
// line 13
panda$core$Bit $tmp2 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param2, &$s3);
bool $tmp4 = $tmp2.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 14
org$pandalanguage$pandac$SymbolTable** $tmp5 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp6 = *$tmp5;
org$pandalanguage$pandac$Symbol* $tmp7 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp6, &$s8);
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
org$pandalanguage$pandac$Symbol* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($7:org.pandalanguage.pandac.Symbol?)
// line 15
org$pandalanguage$pandac$Symbol* $tmp10 = *(&local0);
panda$core$Bit $tmp11 = panda$core$Bit$init$builtin_bit($tmp10 != NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp13 = (panda$core$Int64) {15};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s14, $tmp13, &$s15);
abort(); // unreachable
block3:;
// line 16
org$pandalanguage$pandac$Symbol* $tmp16 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp17 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp16);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($30:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp18 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing s
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp17;
block2:;
// line 18
org$pandalanguage$pandac$SymbolTable** $tmp19 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp20 = *$tmp19;
org$pandalanguage$pandac$Symbol* $tmp21 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp20, param2);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
org$pandalanguage$pandac$Symbol* $tmp22 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
*(&local1) = $tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($45:org.pandalanguage.pandac.Symbol?)
// line 19
org$pandalanguage$pandac$Symbol* $tmp23 = *(&local1);
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit($tmp23 == NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block6;
block5:;
// line 20
org$pandalanguage$pandac$ClassDecl* $tmp26 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param2);
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$ClassDecl* $tmp27 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
*(&local2) = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($63:org.pandalanguage.pandac.ClassDecl?)
// line 21
org$pandalanguage$pandac$ClassDecl* $tmp28 = *(&local2);
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block7; else goto block8;
block7:;
// line 22
org$pandalanguage$pandac$ClassDecl* $tmp31 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp32 = *(&local2);
org$pandalanguage$pandac$Type** $tmp33 = &$tmp32->type;
org$pandalanguage$pandac$Type* $tmp34 = *$tmp33;
panda$core$Bit $tmp35 = org$pandalanguage$pandac$Compiler$checkGenericArguments$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param1, $tmp31, $tmp34);
// line 23
org$pandalanguage$pandac$IR$Value* $tmp36 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp37 = (panda$core$Int64) {14};
org$pandalanguage$pandac$ClassDecl* $tmp38 = *(&local2);
org$pandalanguage$pandac$Type** $tmp39 = &$tmp38->type;
org$pandalanguage$pandac$Type* $tmp40 = *$tmp39;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp36, $tmp37, $tmp40);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($89:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$ClassDecl* $tmp41 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing cl
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp42 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp36;
block8:;
org$pandalanguage$pandac$ClassDecl* $tmp43 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing cl
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block6;
block6:;
// line 26
org$pandalanguage$pandac$Symbol* $tmp44 = *(&local1);
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit($tmp44 != NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block10;
block9:;
// line 27
org$pandalanguage$pandac$Symbol* $tmp47 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp48 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp47);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($128:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp49 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp48;
block10:;
// line 29
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s50);
// line 30
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp51 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);

}
void org$pandalanguage$pandac$expression$Identifier$init(org$pandalanguage$pandac$expression$Identifier* param0) {

return;

}
void org$pandalanguage$pandac$expression$Identifier$cleanup(org$pandalanguage$pandac$expression$Identifier* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






