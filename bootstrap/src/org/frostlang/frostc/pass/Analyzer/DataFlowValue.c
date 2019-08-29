#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/pass/Analyzer/Definition.h"
#include "frost/collections/ListView.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim(org$frostlang$frostc$pass$Analyzer$DataFlowValue* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(p0, ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$class_type org$frostlang$frostc$pass$Analyzer$DataFlowValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup, org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue} };

typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn38)(org$frostlang$frostc$pass$Analyzer$Definition*, org$frostlang$frostc$pass$Analyzer$Definition*);
typedef frost$core$String* (*$fn102)(frost$core$Object*);
typedef frost$core$String* (*$fn111)(frost$core$Object*);
typedef frost$core$String* (*$fn119)(frost$core$Object*);
typedef frost$core$String* (*$fn127)(frost$core$Object*);
typedef frost$core$String* (*$fn136)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65", 48, 2806633416286856336, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$pass$Analyzer$Definition* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:144
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(param0, param1, param2, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$pass$Analyzer$Definition* param2, frost$collections$ListView* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:148
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp2 = &param0->type;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->type;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$pass$Analyzer$Definition** $tmp5 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$pass$Analyzer$Definition** $tmp7 = &param0->definition;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$collections$ListView** $tmp8 = &param0->nonNullImplications;
frost$collections$ListView* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$ListView** $tmp10 = &param0->nonNullImplications;
*$tmp10 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:155
org$frostlang$frostc$Type** $tmp11 = &param0->type;
org$frostlang$frostc$Type* $tmp12 = *$tmp11;
org$frostlang$frostc$Type** $tmp13 = &param1->type;
org$frostlang$frostc$Type* $tmp14 = *$tmp13;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:155:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
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
*(&local1) = $tmp30;
goto block4;
block3:;
*(&local1) = $tmp19;
goto block4;
block4:;
frost$core$Bit $tmp31 = *(&local1);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block5; else goto block6;
block5:;
org$frostlang$frostc$pass$Analyzer$Definition** $tmp33 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp34 = *$tmp33;
org$frostlang$frostc$pass$Analyzer$Definition** $tmp35 = &param1->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp36 = *$tmp35;
$fn38 $tmp37 = ($fn38) $tmp34->$class->vtable[2];
frost$core$Bit $tmp39 = $tmp37($tmp34, $tmp36);
*(&local0) = $tmp39;
goto block7;
block6:;
*(&local0) = $tmp31;
goto block7;
block7:;
frost$core$Bit $tmp40 = *(&local0);
return $tmp40;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param2) {

org$frostlang$frostc$Type* local0 = NULL;
frost$collections$Array* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:159
bool $tmp41 = param0 == param2;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:162
org$frostlang$frostc$Type** $tmp44 = &param0->type;
org$frostlang$frostc$Type* $tmp45 = *$tmp44;
org$frostlang$frostc$Type** $tmp46 = &param2->type;
org$frostlang$frostc$Type* $tmp47 = *$tmp46;
org$frostlang$frostc$Type* $tmp48 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp45, param1, $tmp47);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
org$frostlang$frostc$Type* $tmp49 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local0) = $tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:163
frost$collections$ListView** $tmp50 = &param0->nonNullImplications;
frost$collections$ListView* $tmp51 = *$tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51 != NULL};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:164
frost$collections$ListView** $tmp54 = &param2->nonNullImplications;
frost$collections$ListView* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55 != NULL};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:166
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp58 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp59 = &param0->nonNullImplications;
frost$collections$ListView* $tmp60 = *$tmp59;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp58, ((frost$collections$CollectionView*) $tmp60));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$collections$Array* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:167
frost$collections$Array* $tmp62 = *(&local1);
frost$collections$ListView** $tmp63 = &param2->nonNullImplications;
frost$collections$ListView* $tmp64 = *$tmp63;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp62, ((frost$collections$CollectionView*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:168
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp65 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp66 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp67 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp68 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp67, $tmp68);
frost$collections$Array* $tmp69 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp65, $tmp66, $tmp67, ((frost$collections$ListView*) $tmp69));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$collections$Array* $tmp70 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp65;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:170
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp72 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp73 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp74 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp75 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp74, $tmp75);
frost$collections$ListView** $tmp76 = &param0->nonNullImplications;
frost$collections$ListView* $tmp77 = *$tmp76;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp72, $tmp73, $tmp74, $tmp77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Type* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp72;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:172
frost$collections$ListView** $tmp79 = &param2->nonNullImplications;
frost$collections$ListView* $tmp80 = *$tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80 != NULL};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:173
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp83 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp84 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp85 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp86 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp85, $tmp86);
frost$collections$ListView** $tmp87 = &param2->nonNullImplications;
frost$collections$ListView* $tmp88 = *$tmp87;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp83, $tmp84, $tmp85, $tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
org$frostlang$frostc$Type* $tmp89 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp83;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:175
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp90 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp91 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp92 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp93 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp92, $tmp93);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp90, $tmp91, $tmp92);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
org$frostlang$frostc$Type* $tmp94 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp90;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:180
frost$collections$ListView** $tmp95 = &param0->nonNullImplications;
frost$collections$ListView* $tmp96 = *$tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96 != NULL};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:181
org$frostlang$frostc$Type** $tmp99 = &param0->type;
org$frostlang$frostc$Type* $tmp100 = *$tmp99;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn102 $tmp101 = ($fn102) ((frost$core$Object*) $tmp100)->$class->vtable[0];
frost$core$String* $tmp103 = $tmp101(((frost$core$Object*) $tmp100));
frost$core$String* $tmp104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s105, $tmp103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$String* $tmp106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp104, &$s107);
org$frostlang$frostc$pass$Analyzer$Definition** $tmp108 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp109 = *$tmp108;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn111 $tmp110 = ($fn111) ((frost$core$Object*) $tmp109)->$class->vtable[0];
frost$core$String* $tmp112 = $tmp110(((frost$core$Object*) $tmp109));
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp106, $tmp112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$String* $tmp114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp113, &$s115);
frost$collections$ListView** $tmp116 = &param0->nonNullImplications;
frost$collections$ListView* $tmp117 = *$tmp116;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn119 $tmp118 = ($fn119) ((frost$core$Object*) $tmp117)->$class->vtable[0];
frost$core$String* $tmp120 = $tmp118(((frost$core$Object*) $tmp117));
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp114, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
return $tmp122;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:183
org$frostlang$frostc$Type** $tmp124 = &param0->type;
org$frostlang$frostc$Type* $tmp125 = *$tmp124;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:183:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn127 $tmp126 = ($fn127) ((frost$core$Object*) $tmp125)->$class->vtable[0];
frost$core$String* $tmp128 = $tmp126(((frost$core$Object*) $tmp125));
frost$core$String* $tmp129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s130, $tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp129, &$s132);
org$frostlang$frostc$pass$Analyzer$Definition** $tmp133 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp134 = *$tmp133;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:183:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn136 $tmp135 = ($fn136) ((frost$core$Object*) $tmp134)->$class->vtable[0];
frost$core$String* $tmp137 = $tmp135(((frost$core$Object*) $tmp134));
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp131, $tmp137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$String* $tmp139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, &$s140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
return $tmp139;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:99
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp141 = &param0->type;
org$frostlang$frostc$Type* $tmp142 = *$tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$pass$Analyzer$Definition** $tmp143 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp144 = *$tmp143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$collections$ListView** $tmp145 = &param0->nonNullImplications;
frost$collections$ListView* $tmp146 = *$tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
return;

}

