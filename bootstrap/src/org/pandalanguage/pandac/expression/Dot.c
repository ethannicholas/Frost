#include "org/pandalanguage/pandac/expression/Dot.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Scanner.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$Dot$class_type org$pandalanguage$pandac$expression$Dot$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$Dot$cleanup} };

typedef org$pandalanguage$pandac$Type* (*$fn3)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn24)(org$pandalanguage$pandac$IR$Value*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x44\x6f\x74", 39, 985718176122630291, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 1842052165454695200, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 1842052165454695200, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 1842052165454695200, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 1842052165454695200, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$String* param3) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$Symbol* local1 = NULL;
// line 13
$fn3 $tmp2 = ($fn3) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4 = $tmp2(param2);
org$pandalanguage$pandac$ClassDecl* $tmp5 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp4);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
org$pandalanguage$pandac$ClassDecl* $tmp6 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
*(&local0) = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($3:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($2:org.pandalanguage.pandac.Type)
// line 14
org$pandalanguage$pandac$ClassDecl* $tmp7 = *(&local0);
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 == NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 15
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 17
org$pandalanguage$pandac$ClassDecl* $tmp11 = *(&local0);
panda$core$Bit $tmp12 = panda$core$Bit$init$builtin_bit($tmp11 != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {17};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s15, $tmp14, &$s16);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$SymbolTable* $tmp17 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp11);
org$pandalanguage$pandac$Symbol* $tmp18 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp17, param3);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
org$pandalanguage$pandac$Symbol* $tmp19 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
*(&local1) = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($43:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($42:org.pandalanguage.pandac.SymbolTable)
// line 18
org$pandalanguage$pandac$Symbol* $tmp20 = *(&local1);
panda$core$Bit $tmp21 = panda$core$Bit$init$builtin_bit($tmp20 == NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block5; else goto block6;
block5:;
// line 19
$fn24 $tmp23 = ($fn24) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp25 = $tmp23(param2);
panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s27, ((panda$core$Object*) $tmp25));
panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, &$s29);
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, param3);
panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s32);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($70:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($69:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($68:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($67:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($65:org.pandalanguage.pandac.Type)
// line 20
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp33 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing symbol
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp34 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block6:;
// line 22
org$pandalanguage$pandac$Symbol* $tmp35 = *(&local1);
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block7:;
org$pandalanguage$pandac$IR$Value* $tmp41 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp35);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($112:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp42 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing symbol
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp43 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp41;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, panda$core$String* param3) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
// line 27
panda$core$Int64* $tmp44 = &param2->$rawValue;
panda$core$Int64 $tmp45 = *$tmp44;
panda$core$Int64 $tmp46 = (panda$core$Int64) {21};
panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp45, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block2; else goto block1;
block2:;
// line 29
org$pandalanguage$pandac$Scanner** $tmp49 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp50 = *$tmp49;
org$pandalanguage$pandac$Type* $tmp51 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp50, param2);
org$pandalanguage$pandac$Type* $tmp52 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp51);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
org$pandalanguage$pandac$Type* $tmp53 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
*(&local0) = $tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($11:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($10:org.pandalanguage.pandac.Type)
// line 30
org$pandalanguage$pandac$Type* $tmp54 = *(&local0);
panda$core$Bit $tmp55 = panda$core$Bit$init$builtin_bit($tmp54 == NULL);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block3; else goto block4;
block3:;
// line 31
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp57 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing resolved
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 33
org$pandalanguage$pandac$IR$Value* $tmp58 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp59 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp60 = *(&local0);
panda$core$Bit $tmp61 = panda$core$Bit$init$builtin_bit($tmp60 != NULL);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp63 = (panda$core$Int64) {33};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s64, $tmp63, &$s65);
abort(); // unreachable
block5:;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp58, $tmp59, $tmp60);
org$pandalanguage$pandac$IR$Value* $tmp66 = org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp58, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($53:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($41:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp67 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing resolved
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp66;
block1:;
// line 36
org$pandalanguage$pandac$IR$Value* $tmp68 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
org$pandalanguage$pandac$IR$Value* $tmp69 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
*(&local1) = $tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($69:org.pandalanguage.pandac.IR.Value?)
// line 37
org$pandalanguage$pandac$IR$Value* $tmp70 = *(&local1);
panda$core$Bit $tmp71 = panda$core$Bit$init$builtin_bit($tmp70 == NULL);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block7; else goto block8;
block7:;
// line 38
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp73 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing compiledBase
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block8:;
// line 40
org$pandalanguage$pandac$IR$Value* $tmp74 = *(&local1);
panda$core$Bit $tmp75 = panda$core$Bit$init$builtin_bit($tmp74 != NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp77 = (panda$core$Int64) {40};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block9:;
org$pandalanguage$pandac$IR$Value* $tmp80 = org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp74, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($105:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp81 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing compiledBase
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp80;

}
void org$pandalanguage$pandac$expression$Dot$init(org$pandalanguage$pandac$expression$Dot* param0) {

return;

}
void org$pandalanguage$pandac$expression$Dot$cleanup(org$pandalanguage$pandac$expression$Dot* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






