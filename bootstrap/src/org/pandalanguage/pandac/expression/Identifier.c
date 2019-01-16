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
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x27\x73\x65\x6c\x66\x27\x20\x69\x6e\x20\x73\x79\x6d\x62\x6f\x6c\x74\x61\x62\x6c\x65", 24, -7954212962265123193, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };

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
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp19 = (panda$core$Int64) {16};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block5:;
org$pandalanguage$pandac$IR$Value* $tmp22 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp16);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($37:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp23 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing s
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp22;
block2:;
// line 18
org$pandalanguage$pandac$SymbolTable** $tmp24 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp25 = *$tmp24;
org$pandalanguage$pandac$Symbol* $tmp26 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp25, param2);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$Symbol* $tmp27 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
*(&local1) = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($52:org.pandalanguage.pandac.Symbol?)
// line 19
org$pandalanguage$pandac$Symbol* $tmp28 = *(&local1);
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28 == NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block7; else goto block8;
block7:;
// line 20
org$pandalanguage$pandac$ClassDecl* $tmp31 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param2);
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
org$pandalanguage$pandac$ClassDecl* $tmp32 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
*(&local2) = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($70:org.pandalanguage.pandac.ClassDecl?)
// line 21
org$pandalanguage$pandac$ClassDecl* $tmp33 = *(&local2);
panda$core$Bit $tmp34 = panda$core$Bit$init$builtin_bit($tmp33 != NULL);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block9; else goto block10;
block9:;
// line 22
org$pandalanguage$pandac$ClassDecl* $tmp36 = *(&local2);
panda$core$Bit $tmp37 = panda$core$Bit$init$builtin_bit($tmp36 != NULL);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp39 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s40, $tmp39, &$s41);
abort(); // unreachable
block11:;
org$pandalanguage$pandac$ClassDecl* $tmp42 = *(&local2);
panda$core$Bit $tmp43 = panda$core$Bit$init$builtin_bit($tmp42 != NULL);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp45 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s46, $tmp45, &$s47);
abort(); // unreachable
block13:;
org$pandalanguage$pandac$Type** $tmp48 = &$tmp42->type;
org$pandalanguage$pandac$Type* $tmp49 = *$tmp48;
panda$core$Bit $tmp50 = org$pandalanguage$pandac$Compiler$checkGenericArguments$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param1, $tmp36, $tmp49);
// line 23
org$pandalanguage$pandac$IR$Value* $tmp51 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp52 = (panda$core$Int64) {14};
org$pandalanguage$pandac$ClassDecl* $tmp53 = *(&local2);
panda$core$Bit $tmp54 = panda$core$Bit$init$builtin_bit($tmp53 != NULL);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp56 = (panda$core$Int64) {23};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s57, $tmp56, &$s58);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$Type** $tmp59 = &$tmp53->type;
org$pandalanguage$pandac$Type* $tmp60 = *$tmp59;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp51, $tmp52, $tmp60);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($110:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$ClassDecl* $tmp61 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing cl
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Symbol* $tmp62 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp51;
block10:;
org$pandalanguage$pandac$ClassDecl* $tmp63 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing cl
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block8;
block8:;
// line 26
org$pandalanguage$pandac$Symbol* $tmp64 = *(&local1);
panda$core$Bit $tmp65 = panda$core$Bit$init$builtin_bit($tmp64 != NULL);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block17; else goto block18;
block17:;
// line 27
org$pandalanguage$pandac$Symbol* $tmp67 = *(&local1);
panda$core$Bit $tmp68 = panda$core$Bit$init$builtin_bit($tmp67 != NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp70 = (panda$core$Int64) {27};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block19:;
org$pandalanguage$pandac$IR$Value* $tmp73 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp67);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($163:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp74 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp73;
block18:;
// line 29
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s75);
// line 30
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp76 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
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






