#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
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

typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn82)(frost$core$Object*);
typedef frost$core$String* (*$fn91)(frost$core$Object*);
typedef frost$core$String* (*$fn99)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65", 48, 2806633416286856336, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp2 = &param0->type;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->type;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp5 = &param0->type;
org$frostlang$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Type** $tmp7 = &param0->type;
*$tmp7 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp8 = &param0->nonNullImplications;
frost$collections$ListView* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$ListView** $tmp10 = &param0->nonNullImplications;
*$tmp10 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:35
org$frostlang$frostc$Type** $tmp11 = &param0->type;
org$frostlang$frostc$Type* $tmp12 = *$tmp11;
org$frostlang$frostc$Type** $tmp13 = &param1->type;
org$frostlang$frostc$Type* $tmp14 = *$tmp13;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:35:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp15 = &((org$frostlang$frostc$Symbol*) $tmp12)->name;
frost$core$String* $tmp16 = *$tmp15;
frost$core$String** $tmp17 = &((org$frostlang$frostc$Symbol*) $tmp14)->name;
frost$core$String* $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp16, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp21 = &$tmp12->typeKind;
org$frostlang$frostc$Type$Kind $tmp22 = *$tmp21;
org$frostlang$frostc$Type$Kind$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp23->value = $tmp22;
org$frostlang$frostc$Type$Kind* $tmp24 = &$tmp14->typeKind;
org$frostlang$frostc$Type$Kind $tmp25 = *$tmp24;
org$frostlang$frostc$Type$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp26->value = $tmp25;
ITable* $tmp27 = ((frost$core$Equatable*) $tmp23)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Bit $tmp30 = $tmp28(((frost$core$Equatable*) $tmp23), ((frost$core$Equatable*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp26)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp23)));
*(&local0) = $tmp30;
goto block4;
block3:;
*(&local0) = $tmp19;
goto block4;
block4:;
frost$core$Bit $tmp31 = *(&local0);
return $tmp31;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param2) {

org$frostlang$frostc$Type* local0 = NULL;
frost$collections$Array* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:39
org$frostlang$frostc$Type** $tmp32 = &param0->type;
org$frostlang$frostc$Type* $tmp33 = *$tmp32;
org$frostlang$frostc$Type** $tmp34 = &param2->type;
org$frostlang$frostc$Type* $tmp35 = *$tmp34;
org$frostlang$frostc$Type* $tmp36 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp33, param1, $tmp35);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Type* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local0) = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:40
frost$collections$ListView** $tmp38 = &param0->nonNullImplications;
frost$collections$ListView* $tmp39 = *$tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39 != NULL};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:41
frost$collections$ListView** $tmp42 = &param2->nonNullImplications;
frost$collections$ListView* $tmp43 = *$tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43 != NULL};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:43
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp46 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp47 = &param0->nonNullImplications;
frost$collections$ListView* $tmp48 = *$tmp47;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp46, ((frost$collections$CollectionView*) $tmp48));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$collections$Array* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local1) = $tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:44
frost$collections$Array* $tmp50 = *(&local1);
frost$collections$ListView** $tmp51 = &param2->nonNullImplications;
frost$collections$ListView* $tmp52 = *$tmp51;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp50, ((frost$collections$CollectionView*) $tmp52));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:45
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp53 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp54 = *(&local0);
frost$collections$Array* $tmp55 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp53, $tmp54, ((frost$collections$ListView*) $tmp55));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$collections$Array* $tmp56 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp57 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp53;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:47
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp58 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp59 = *(&local0);
frost$collections$ListView** $tmp60 = &param0->nonNullImplications;
frost$collections$ListView* $tmp61 = *$tmp60;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp58, $tmp59, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlang$frostc$Type* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp58;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:49
frost$collections$ListView** $tmp63 = &param2->nonNullImplications;
frost$collections$ListView* $tmp64 = *$tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64 != NULL};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:50
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp67 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp68 = *(&local0);
frost$collections$ListView** $tmp69 = &param2->nonNullImplications;
frost$collections$ListView* $tmp70 = *$tmp69;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q($tmp67, $tmp68, $tmp70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$Type* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp67;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:52
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp72 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp73 = *(&local0);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp72, $tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Type* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp72;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_invert$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:58
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:63
frost$collections$ListView** $tmp75 = &param0->nonNullImplications;
frost$collections$ListView* $tmp76 = *$tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76 != NULL};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:64
org$frostlang$frostc$Type** $tmp79 = &param0->type;
org$frostlang$frostc$Type* $tmp80 = *$tmp79;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:64:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn82 $tmp81 = ($fn82) ((frost$core$Object*) $tmp80)->$class->vtable[0];
frost$core$String* $tmp83 = $tmp81(((frost$core$Object*) $tmp80));
frost$core$String* $tmp84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s85, $tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp84, &$s87);
frost$collections$ListView** $tmp88 = &param0->nonNullImplications;
frost$collections$ListView* $tmp89 = *$tmp88;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:64:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn91 $tmp90 = ($fn91) ((frost$core$Object*) $tmp89)->$class->vtable[0];
frost$core$String* $tmp92 = $tmp90(((frost$core$Object*) $tmp89));
frost$core$String* $tmp93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp86, $tmp92);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$String* $tmp94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp93, &$s95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
return $tmp94;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:66
org$frostlang$frostc$Type** $tmp96 = &param0->type;
org$frostlang$frostc$Type* $tmp97 = *$tmp96;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:66:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn99 $tmp98 = ($fn99) ((frost$core$Object*) $tmp97)->$class->vtable[0];
frost$core$String* $tmp100 = $tmp98(((frost$core$Object*) $tmp97));
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, $tmp100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
return $tmp103;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp105 = &param0->type;
org$frostlang$frostc$Type* $tmp106 = *$tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$collections$ListView** $tmp107 = &param0->nonNullImplications;
frost$collections$ListView* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
return;

}

