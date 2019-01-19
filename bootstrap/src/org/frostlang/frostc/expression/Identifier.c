#include "org/frostlang/frostc/expression/Identifier.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Identifier$class_type org$frostlang$frostc$expression$Identifier$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Identifier$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 42, 3255609381721121201, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x27\x73\x65\x6c\x66\x27\x20\x69\x6e\x20\x73\x79\x6d\x62\x6f\x6c\x74\x61\x62\x6c\x65", 24, -7954212962265123193, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Identifier$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
// line 13
frost$core$Bit $tmp2 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param2, &$s3);
bool $tmp4 = $tmp2.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 14
org$frostlang$frostc$SymbolTable** $tmp5 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp6 = *$tmp5;
org$frostlang$frostc$Symbol* $tmp7 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp6, &$s8);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$Symbol* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($7:org.frostlang.frostc.Symbol?)
// line 15
org$frostlang$frostc$Symbol* $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10 != NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {15};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s14, $tmp13, &$s15);
abort(); // unreachable
block3:;
// line 16
org$frostlang$frostc$Symbol* $tmp16 = *(&local0);
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block5:;
org$frostlang$frostc$IR$Value* $tmp22 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($37:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Symbol* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing s
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp22;
block2:;
// line 18
org$frostlang$frostc$SymbolTable** $tmp24 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp25 = *$tmp24;
org$frostlang$frostc$Symbol* $tmp26 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp25, param2);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$Symbol* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local1) = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($52:org.frostlang.frostc.Symbol?)
// line 19
org$frostlang$frostc$Symbol* $tmp28 = *(&local1);
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28 == NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block7; else goto block8;
block7:;
// line 20
org$frostlang$frostc$ClassDecl* $tmp31 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q(param0, param2);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$frostc$ClassDecl* $tmp32 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local2) = $tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($70:org.frostlang.frostc.ClassDecl?)
// line 21
org$frostlang$frostc$ClassDecl* $tmp33 = *(&local2);
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit($tmp33 != NULL);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block9; else goto block10;
block9:;
// line 22
org$frostlang$frostc$ClassDecl* $tmp36 = *(&local2);
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit($tmp36 != NULL);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s40, $tmp39, &$s41);
abort(); // unreachable
block11:;
org$frostlang$frostc$ClassDecl* $tmp42 = *(&local2);
frost$core$Bit $tmp43 = frost$core$Bit$init$builtin_bit($tmp42 != NULL);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s46, $tmp45, &$s47);
abort(); // unreachable
block13:;
org$frostlang$frostc$Type** $tmp48 = &$tmp42->type;
org$frostlang$frostc$Type* $tmp49 = *$tmp48;
frost$core$Bit $tmp50 = org$frostlang$frostc$Compiler$checkGenericArguments$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp36, $tmp49);
// line 23
org$frostlang$frostc$IR$Value* $tmp51 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp52 = (frost$core$Int64) {14};
org$frostlang$frostc$ClassDecl* $tmp53 = *(&local2);
frost$core$Bit $tmp54 = frost$core$Bit$init$builtin_bit($tmp53 != NULL);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp56 = (frost$core$Int64) {23};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s57, $tmp56, &$s58);
abort(); // unreachable
block15:;
org$frostlang$frostc$Type** $tmp59 = &$tmp53->type;
org$frostlang$frostc$Type* $tmp60 = *$tmp59;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp51, $tmp52, $tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($110:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$ClassDecl* $tmp61 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing cl
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp62 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing s
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp51;
block10:;
org$frostlang$frostc$ClassDecl* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing cl
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block8;
block8:;
// line 26
org$frostlang$frostc$Symbol* $tmp64 = *(&local1);
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit($tmp64 != NULL);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block17; else goto block18;
block17:;
// line 27
org$frostlang$frostc$Symbol* $tmp67 = *(&local1);
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67 != NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block19:;
org$frostlang$frostc$IR$Value* $tmp73 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp67);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($163:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Symbol* $tmp74 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing s
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp73;
block18:;
// line 29
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s75);
// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp76 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing s
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
void org$frostlang$frostc$expression$Identifier$init(org$frostlang$frostc$expression$Identifier* param0) {

return;

}
void org$frostlang$frostc$expression$Identifier$cleanup(org$frostlang$frostc$expression$Identifier* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






