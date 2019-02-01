#include "org/frostlang/frostc/Analyzer/DataFlowValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$Analyzer$DataFlowValue$R$frost$core$Bit$shim(org$frostlang$frostc$Analyzer$DataFlowValue* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$Analyzer$DataFlowValue$R$frost$core$Bit(p0, ((org$frostlang$frostc$Analyzer$DataFlowValue*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Analyzer$DataFlowValue$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$Analyzer$DataFlowValue$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Analyzer$DataFlowValue$class_type org$frostlang$frostc$Analyzer$DataFlowValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Analyzer$DataFlowValue$_frost$core$Equatable, { org$frostlang$frostc$Analyzer$DataFlowValue$get_asString$R$frost$core$String, org$frostlang$frostc$Analyzer$DataFlowValue$cleanup, org$frostlang$frostc$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$Analyzer$DataFlowValue$R$frost$core$Bit$shim, org$frostlang$frostc$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Analyzer$DataFlowValue$R$org$frostlang$frostc$Analyzer$DataFlowValue, org$frostlang$frostc$Analyzer$DataFlowValue$get_invert$R$org$frostlang$frostc$Analyzer$DataFlowValue} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65", 43, -1699477569137110869, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, 5284793279823497104, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, 5284793279823497104, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$Analyzer$DataFlowValue$init(org$frostlang$frostc$Analyzer$DataFlowValue* param0) {

// line 20
org$frostlang$frostc$Type* $tmp2 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Type** $tmp3 = &param0->type;
org$frostlang$frostc$Type* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$frostc$Type** $tmp5 = &param0->type;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
void org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type(org$frostlang$frostc$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1) {

// line 24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp6 = &param0->type;
org$frostlang$frostc$Type* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$Type** $tmp8 = &param0->type;
*$tmp8 = param1;
return;

}
void org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q(org$frostlang$frostc$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1, frost$collections$ListView* param2) {

// line 28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp9 = &param0->type;
org$frostlang$frostc$Type* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$Type** $tmp11 = &param0->type;
*$tmp11 = param1;
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp12 = &param0->nonNullImplications;
frost$collections$ListView* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$ListView** $tmp14 = &param0->nonNullImplications;
*$tmp14 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$Analyzer$DataFlowValue$R$frost$core$Bit(org$frostlang$frostc$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Analyzer$DataFlowValue* param1) {

// line 34
org$frostlang$frostc$Type** $tmp15 = &param0->type;
org$frostlang$frostc$Type* $tmp16 = *$tmp15;
org$frostlang$frostc$Type** $tmp17 = &param1->type;
org$frostlang$frostc$Type* $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp16, $tmp18);
return $tmp19;

}
org$frostlang$frostc$Analyzer$DataFlowValue* org$frostlang$frostc$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Analyzer$DataFlowValue$R$org$frostlang$frostc$Analyzer$DataFlowValue(org$frostlang$frostc$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Analyzer$DataFlowValue* param2) {

org$frostlang$frostc$Type* local0 = NULL;
frost$collections$Array* local1 = NULL;
// line 38
org$frostlang$frostc$Type** $tmp20 = &param0->type;
org$frostlang$frostc$Type* $tmp21 = *$tmp20;
org$frostlang$frostc$Type** $tmp22 = &param2->type;
org$frostlang$frostc$Type* $tmp23 = *$tmp22;
org$frostlang$frostc$Type* $tmp24 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp21, param1, $tmp23);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$Type* $tmp25 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local0) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// line 39
frost$collections$ListView** $tmp26 = &param0->nonNullImplications;
frost$collections$ListView* $tmp27 = *$tmp26;
frost$core$Bit $tmp28 = frost$core$Bit$init$builtin_bit($tmp27 != NULL);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block1; else goto block3;
block1:;
// line 40
frost$collections$ListView** $tmp30 = &param2->nonNullImplications;
frost$collections$ListView* $tmp31 = *$tmp30;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31 != NULL);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block4; else goto block5;
block4:;
// line 42
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp34 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp35 = &param0->nonNullImplications;
frost$collections$ListView* $tmp36 = *$tmp35;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp34, ((frost$collections$CollectionView*) $tmp36));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$collections$Array* $tmp37 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local1) = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// line 43
frost$collections$Array* $tmp38 = *(&local1);
frost$collections$ListView** $tmp39 = &param2->nonNullImplications;
frost$collections$ListView* $tmp40 = *$tmp39;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp38, ((frost$collections$CollectionView*) $tmp40));
// line 44
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Analyzer$DataFlowValue));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp41 = (org$frostlang$frostc$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp42 = *(&local0);
frost$collections$Array* $tmp43 = *(&local1);
org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp41, $tmp42, ((frost$collections$ListView*) $tmp43));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$collections$Array* $tmp44 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp41;
block5:;
// line 46
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Analyzer$DataFlowValue));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp46 = (org$frostlang$frostc$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp47 = *(&local0);
frost$collections$ListView** $tmp48 = &param0->nonNullImplications;
frost$collections$ListView* $tmp49 = *$tmp48;
org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp46, $tmp47, $tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
org$frostlang$frostc$Type* $tmp50 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp46;
block3:;
// line 48
frost$collections$ListView** $tmp51 = &param2->nonNullImplications;
frost$collections$ListView* $tmp52 = *$tmp51;
frost$core$Bit $tmp53 = frost$core$Bit$init$builtin_bit($tmp52 != NULL);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block6; else goto block7;
block6:;
// line 49
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Analyzer$DataFlowValue));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp55 = (org$frostlang$frostc$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp56 = *(&local0);
frost$collections$ListView** $tmp57 = &param2->nonNullImplications;
frost$collections$ListView* $tmp58 = *$tmp57;
org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp55, $tmp56, $tmp58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlang$frostc$Type* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp55;
block7:;
goto block2;
block2:;
// line 51
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Analyzer$DataFlowValue));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp60 = (org$frostlang$frostc$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp61 = *(&local0);
org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp60, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$Type* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp60;

}
org$frostlang$frostc$Analyzer$DataFlowValue* org$frostlang$frostc$Analyzer$DataFlowValue$get_invert$R$org$frostlang$frostc$Analyzer$DataFlowValue(org$frostlang$frostc$Analyzer$DataFlowValue* param0) {

// line 57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
frost$core$String* org$frostlang$frostc$Analyzer$DataFlowValue$get_asString$R$frost$core$String(org$frostlang$frostc$Analyzer$DataFlowValue* param0) {

// line 62
frost$collections$ListView** $tmp63 = &param0->nonNullImplications;
frost$collections$ListView* $tmp64 = *$tmp63;
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit($tmp64 != NULL);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
// line 63
org$frostlang$frostc$Type** $tmp67 = &param0->type;
org$frostlang$frostc$Type* $tmp68 = *$tmp67;
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s70, ((frost$core$Object*) $tmp68));
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, &$s72);
frost$collections$ListView** $tmp73 = &param0->nonNullImplications;
frost$collections$ListView* $tmp74 = *$tmp73;
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp71, ((frost$core$Object*) $tmp74));
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp75, &$s77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
return $tmp76;
block2:;
// line 65
org$frostlang$frostc$Type** $tmp78 = &param0->type;
org$frostlang$frostc$Type* $tmp79 = *$tmp78;
frost$core$String* $tmp80 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s81, ((frost$core$Object*) $tmp79));
frost$core$String* $tmp82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp80, &$s83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
return $tmp82;

}
void org$frostlang$frostc$Analyzer$DataFlowValue$cleanup(org$frostlang$frostc$Analyzer$DataFlowValue* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp84 = &param0->type;
org$frostlang$frostc$Type* $tmp85 = *$tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$ListView** $tmp86 = &param0->nonNullImplications;
frost$collections$ListView* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
return;

}

