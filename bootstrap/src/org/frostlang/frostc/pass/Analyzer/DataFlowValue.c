#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim(org$frostlang$frostc$pass$Analyzer$DataFlowValue* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(p0, ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$class_type org$frostlang$frostc$pass$Analyzer$DataFlowValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup, org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue, org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_invert$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue} };

typedef frost$core$Bit (*$fn40)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn93)(frost$core$Object*);
typedef frost$core$String* (*$fn102)(frost$core$Object*);
typedef frost$core$String* (*$fn110)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65", 48, -1850376038430266952, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, 5284793279823497104, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, 5284793279823497104, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:25
// begin inline call to method org.frostlang.frostc.Type.Invalid():org.frostlang.frostc.Type from Analyzer.frost:25:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:555:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp4 = &(&local1)->$rawValue;
*$tmp4 = $tmp3;
org$frostlang$frostc$Type$Kind $tmp5 = *(&local1);
*(&local0) = $tmp5;
org$frostlang$frostc$Type$Kind $tmp6 = *(&local0);
org$frostlang$frostc$Position $tmp7 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2, &$s9, $tmp6, $tmp7, $tmp8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Type** $tmp10 = &param0->type;
org$frostlang$frostc$Type* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlang$frostc$Type** $tmp12 = &param0->type;
*$tmp12 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp13 = &param0->type;
org$frostlang$frostc$Type* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$Type** $tmp15 = &param0->type;
*$tmp15 = param1;
return;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp16 = &param0->type;
org$frostlang$frostc$Type* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlang$frostc$Type** $tmp18 = &param0->type;
*$tmp18 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp19 = &param0->nonNullImplications;
frost$collections$ListView* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$collections$ListView** $tmp21 = &param0->nonNullImplications;
*$tmp21 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:39
org$frostlang$frostc$Type** $tmp22 = &param0->type;
org$frostlang$frostc$Type* $tmp23 = *$tmp22;
org$frostlang$frostc$Type** $tmp24 = &param1->type;
org$frostlang$frostc$Type* $tmp25 = *$tmp24;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:39:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp26 = &((org$frostlang$frostc$Symbol*) $tmp23)->name;
frost$core$String* $tmp27 = *$tmp26;
frost$core$String** $tmp28 = &((org$frostlang$frostc$Symbol*) $tmp25)->name;
frost$core$String* $tmp29 = *$tmp28;
frost$core$Bit $tmp30 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp27, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp32 = &$tmp23->typeKind;
org$frostlang$frostc$Type$Kind $tmp33 = *$tmp32;
org$frostlang$frostc$Type$Kind$wrapper* $tmp34;
$tmp34 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp34->value = $tmp33;
org$frostlang$frostc$Type$Kind* $tmp35 = &$tmp25->typeKind;
org$frostlang$frostc$Type$Kind $tmp36 = *$tmp35;
org$frostlang$frostc$Type$Kind$wrapper* $tmp37;
$tmp37 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp37->value = $tmp36;
ITable* $tmp38 = ((frost$core$Equatable*) $tmp34)->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$core$Bit $tmp41 = $tmp39(((frost$core$Equatable*) $tmp34), ((frost$core$Equatable*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp37)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp34)));
*(&local0) = $tmp41;
goto block4;
block3:;
*(&local0) = $tmp30;
goto block4;
block4:;
frost$core$Bit $tmp42 = *(&local0);
return $tmp42;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param2) {

org$frostlang$frostc$Type* local0 = NULL;
frost$collections$Array* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:43
org$frostlang$frostc$Type** $tmp43 = &param0->type;
org$frostlang$frostc$Type* $tmp44 = *$tmp43;
org$frostlang$frostc$Type** $tmp45 = &param2->type;
org$frostlang$frostc$Type* $tmp46 = *$tmp45;
org$frostlang$frostc$Type* $tmp47 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp44, param1, $tmp46);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
org$frostlang$frostc$Type* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = $tmp47;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:44
frost$collections$ListView** $tmp49 = &param0->nonNullImplications;
frost$collections$ListView* $tmp50 = *$tmp49;
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit($tmp50 != NULL);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:45
frost$collections$ListView** $tmp53 = &param2->nonNullImplications;
frost$collections$ListView* $tmp54 = *$tmp53;
frost$core$Bit $tmp55 = frost$core$Bit$init$builtin_bit($tmp54 != NULL);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp57 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp58 = &param0->nonNullImplications;
frost$collections$ListView* $tmp59 = *$tmp58;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp57, ((frost$collections$CollectionView*) $tmp59));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$collections$Array* $tmp60 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local1) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:48
frost$collections$Array* $tmp61 = *(&local1);
frost$collections$ListView** $tmp62 = &param2->nonNullImplications;
frost$collections$ListView* $tmp63 = *$tmp62;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp61, ((frost$collections$CollectionView*) $tmp63));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:49
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp64 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp65 = *(&local0);
frost$collections$Array* $tmp66 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp64, $tmp65, ((frost$collections$ListView*) $tmp66));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$collections$Array* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp64;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:51
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp69 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp70 = *(&local0);
frost$collections$ListView** $tmp71 = &param0->nonNullImplications;
frost$collections$ListView* $tmp72 = *$tmp71;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp69, $tmp70, $tmp72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$Type* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp69;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:53
frost$collections$ListView** $tmp74 = &param2->nonNullImplications;
frost$collections$ListView* $tmp75 = *$tmp74;
frost$core$Bit $tmp76 = frost$core$Bit$init$builtin_bit($tmp75 != NULL);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:54
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp78 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp79 = *(&local0);
frost$collections$ListView** $tmp80 = &param2->nonNullImplications;
frost$collections$ListView* $tmp81 = *$tmp80;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp78, $tmp79, $tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
org$frostlang$frostc$Type* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp78;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:56
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp83 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp84 = *(&local0);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp83, $tmp84);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
org$frostlang$frostc$Type* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp83;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_invert$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:62
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:67
frost$collections$ListView** $tmp86 = &param0->nonNullImplications;
frost$collections$ListView* $tmp87 = *$tmp86;
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:68
org$frostlang$frostc$Type** $tmp90 = &param0->type;
org$frostlang$frostc$Type* $tmp91 = *$tmp90;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:68:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn93 $tmp92 = ($fn93) ((frost$core$Object*) $tmp91)->$class->vtable[0];
frost$core$String* $tmp94 = $tmp92(((frost$core$Object*) $tmp91));
frost$core$String* $tmp95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s96, $tmp94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$String* $tmp97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp95, &$s98);
frost$collections$ListView** $tmp99 = &param0->nonNullImplications;
frost$collections$ListView* $tmp100 = *$tmp99;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:68:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn102 $tmp101 = ($fn102) ((frost$core$Object*) $tmp100)->$class->vtable[0];
frost$core$String* $tmp103 = $tmp101(((frost$core$Object*) $tmp100));
frost$core$String* $tmp104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp97, $tmp103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$String* $tmp105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp104, &$s106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
return $tmp105;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:70
org$frostlang$frostc$Type** $tmp107 = &param0->type;
org$frostlang$frostc$Type* $tmp108 = *$tmp107;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:70:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn110 $tmp109 = ($fn110) ((frost$core$Object*) $tmp108)->$class->vtable[0];
frost$core$String* $tmp111 = $tmp109(((frost$core$Object*) $tmp108));
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s113, $tmp111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$String* $tmp114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp112, &$s115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
return $tmp114;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp116 = &param0->type;
org$frostlang$frostc$Type* $tmp117 = *$tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$collections$ListView** $tmp118 = &param0->nonNullImplications;
frost$collections$ListView* $tmp119 = *$tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
return;

}

