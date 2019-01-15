#include "org/frostlanguage/frostc/expression/Identifier.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Type.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$Identifier$class_type org$frostlanguage$frostc$expression$Identifier$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$Identifier$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 46, -8447687133418263957, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6787389301741471968, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x27\x73\x65\x6c\x66\x27\x20\x69\x6e\x20\x73\x79\x6d\x62\x6f\x6c\x74\x61\x62\x6c\x65", 24, -7954212962265123193, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Identifier$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, frost$core$String* param2) {

org$frostlanguage$frostc$Symbol* local0 = NULL;
org$frostlanguage$frostc$Symbol* local1 = NULL;
org$frostlanguage$frostc$ClassDecl* local2 = NULL;
// line 13
frost$core$Bit $tmp2 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param2, &$s3);
bool $tmp4 = $tmp2.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 14
org$frostlanguage$frostc$SymbolTable** $tmp5 = &param0->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp6 = *$tmp5;
org$frostlanguage$frostc$Symbol* $tmp7 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp6, &$s8);
*(&local0) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlanguage$frostc$Symbol* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($7:org.frostlanguage.frostc.Symbol?)
// line 15
org$frostlanguage$frostc$Symbol* $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10 != NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {15};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s14, $tmp13, &$s15);
abort(); // unreachable
block3:;
// line 16
org$frostlanguage$frostc$Symbol* $tmp16 = *(&local0);
org$frostlanguage$frostc$IR$Value* $tmp17 = org$frostlanguage$frostc$Compiler$symbolRef$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Symbol$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, ((org$frostlanguage$frostc$IR$Value*) NULL), $tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($30:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$Symbol* $tmp18 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing s
*(&local0) = ((org$frostlanguage$frostc$Symbol*) NULL);
return $tmp17;
block2:;
// line 18
org$frostlanguage$frostc$SymbolTable** $tmp19 = &param0->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp20 = *$tmp19;
org$frostlanguage$frostc$Symbol* $tmp21 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp20, param2);
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlanguage$frostc$Symbol* $tmp22 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local1) = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($45:org.frostlanguage.frostc.Symbol?)
// line 19
org$frostlanguage$frostc$Symbol* $tmp23 = *(&local1);
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23 == NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block6;
block5:;
// line 20
org$frostlanguage$frostc$ClassDecl* $tmp26 = org$frostlanguage$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlanguage$frostc$ClassDecl$Q(param0, param2);
*(&local2) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlanguage$frostc$ClassDecl* $tmp27 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local2) = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($63:org.frostlanguage.frostc.ClassDecl?)
// line 21
org$frostlanguage$frostc$ClassDecl* $tmp28 = *(&local2);
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block7; else goto block8;
block7:;
// line 22
org$frostlanguage$frostc$ClassDecl* $tmp31 = *(&local2);
org$frostlanguage$frostc$ClassDecl* $tmp32 = *(&local2);
org$frostlanguage$frostc$Type** $tmp33 = &$tmp32->type;
org$frostlanguage$frostc$Type* $tmp34 = *$tmp33;
frost$core$Bit $tmp35 = org$frostlanguage$frostc$Compiler$checkGenericArguments$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, param1, $tmp31, $tmp34);
// line 23
org$frostlanguage$frostc$IR$Value* $tmp36 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp37 = (frost$core$Int64) {14};
org$frostlanguage$frostc$ClassDecl* $tmp38 = *(&local2);
org$frostlanguage$frostc$Type** $tmp39 = &$tmp38->type;
org$frostlanguage$frostc$Type* $tmp40 = *$tmp39;
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp36, $tmp37, $tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// unreffing REF($89:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$ClassDecl* $tmp41 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing cl
*(&local2) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$Symbol* $tmp42 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing s
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
return $tmp36;
block8:;
org$frostlanguage$frostc$ClassDecl* $tmp43 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing cl
*(&local2) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
goto block6;
block6:;
// line 26
org$frostlanguage$frostc$Symbol* $tmp44 = *(&local1);
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit($tmp44 != NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block10;
block9:;
// line 27
org$frostlanguage$frostc$Symbol* $tmp47 = *(&local1);
org$frostlanguage$frostc$IR$Value* $tmp48 = org$frostlanguage$frostc$Compiler$symbolRef$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Symbol$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, ((org$frostlanguage$frostc$IR$Value*) NULL), $tmp47);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($128:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$Symbol* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing s
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
return $tmp48;
block10:;
// line 29
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s50);
// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing s
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);

}
void org$frostlanguage$frostc$expression$Identifier$init(org$frostlanguage$frostc$expression$Identifier* param0) {

return;

}
void org$frostlanguage$frostc$expression$Identifier$cleanup(org$frostlanguage$frostc$expression$Identifier* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






