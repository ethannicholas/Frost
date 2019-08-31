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
#include "frost/core/Int.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim(org$frostlang$frostc$pass$Analyzer$DataFlowValue* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(p0, ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$class_type org$frostlang$frostc$pass$Analyzer$DataFlowValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup, org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue} };

typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn38)(org$frostlang$frostc$pass$Analyzer$Definition*, org$frostlang$frostc$pass$Analyzer$Definition*);
typedef frost$core$String* (*$fn112)(frost$core$Object*);
typedef frost$core$String* (*$fn121)(frost$core$Object*);
typedef frost$core$String* (*$fn134)(frost$core$Object*);
typedef frost$core$String* (*$fn142)(frost$core$Object*);
typedef frost$core$String* (*$fn151)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65", 48, 2806633416286856336, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e", 227, 2718415438556847533, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e", 227, 2718415438556847533, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 147, -6238493842772728899, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

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
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60 != NULL};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block8; else goto block9;
block9:;
frost$core$Int $tmp63 = (frost$core$Int) {166u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, $tmp63, &$s65);
abort(); // unreachable
block8:;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp58, ((frost$collections$CollectionView*) $tmp60));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$collections$Array* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local1) = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:167
frost$collections$Array* $tmp67 = *(&local1);
frost$collections$ListView** $tmp68 = &param2->nonNullImplications;
frost$collections$ListView* $tmp69 = *$tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69 != NULL};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block10; else goto block11;
block11:;
frost$core$Int $tmp72 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, $tmp72, &$s74);
abort(); // unreachable
block10:;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp67, ((frost$collections$CollectionView*) $tmp69));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:168
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp75 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp76 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp77 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp78 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp77, $tmp78);
frost$collections$Array* $tmp79 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp75, $tmp76, $tmp77, ((frost$collections$ListView*) $tmp79));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$collections$Array* $tmp80 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp75;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:170
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp82 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp83 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp84 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp85 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp84, $tmp85);
frost$collections$ListView** $tmp86 = &param0->nonNullImplications;
frost$collections$ListView* $tmp87 = *$tmp86;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp82, $tmp83, $tmp84, $tmp87);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$Type* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp82;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:172
frost$collections$ListView** $tmp89 = &param2->nonNullImplications;
frost$collections$ListView* $tmp90 = *$tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90 != NULL};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:173
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp93 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp94 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp95 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp96 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp95, $tmp96);
frost$collections$ListView** $tmp97 = &param2->nonNullImplications;
frost$collections$ListView* $tmp98 = *$tmp97;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q($tmp93, $tmp94, $tmp95, $tmp98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlang$frostc$Type* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp93;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:175
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp100 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type* $tmp101 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$pass$Analyzer$Definition));
org$frostlang$frostc$pass$Analyzer$Definition* $tmp102 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
frost$core$Int $tmp103 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int($tmp102, $tmp103);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition($tmp100, $tmp101, $tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$Type* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp100;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:180
frost$collections$ListView** $tmp105 = &param0->nonNullImplications;
frost$collections$ListView* $tmp106 = *$tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106 != NULL};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:181
org$frostlang$frostc$Type** $tmp109 = &param0->type;
org$frostlang$frostc$Type* $tmp110 = *$tmp109;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn112 $tmp111 = ($fn112) ((frost$core$Object*) $tmp110)->$class->vtable[0];
frost$core$String* $tmp113 = $tmp111(((frost$core$Object*) $tmp110));
frost$core$String* $tmp114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s115, $tmp113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$String* $tmp116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp114, &$s117);
org$frostlang$frostc$pass$Analyzer$Definition** $tmp118 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp119 = *$tmp118;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn121 $tmp120 = ($fn121) ((frost$core$Object*) $tmp119)->$class->vtable[0];
frost$core$String* $tmp122 = $tmp120(((frost$core$Object*) $tmp119));
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp116, $tmp122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$String* $tmp124 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp123, &$s125);
frost$collections$ListView** $tmp126 = &param0->nonNullImplications;
frost$collections$ListView* $tmp127 = *$tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127 != NULL};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block5; else goto block6;
block6:;
frost$core$Int $tmp130 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s131, $tmp130, &$s132);
abort(); // unreachable
block5:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn134 $tmp133 = ($fn134) ((frost$core$Object*) $tmp127)->$class->vtable[0];
frost$core$String* $tmp135 = $tmp133(((frost$core$Object*) $tmp127));
frost$core$String* $tmp136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp124, $tmp135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$String* $tmp137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp136, &$s138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
return $tmp137;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:183
org$frostlang$frostc$Type** $tmp139 = &param0->type;
org$frostlang$frostc$Type* $tmp140 = *$tmp139;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:183:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn142 $tmp141 = ($fn142) ((frost$core$Object*) $tmp140)->$class->vtable[0];
frost$core$String* $tmp143 = $tmp141(((frost$core$Object*) $tmp140));
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s145, $tmp143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp144, &$s147);
org$frostlang$frostc$pass$Analyzer$Definition** $tmp148 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp149 = *$tmp148;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:183:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn151 $tmp150 = ($fn151) ((frost$core$Object*) $tmp149)->$class->vtable[0];
frost$core$String* $tmp152 = $tmp150(((frost$core$Object*) $tmp149));
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp153, &$s155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
return $tmp154;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup(org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:99
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp156 = &param0->type;
org$frostlang$frostc$Type* $tmp157 = *$tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$pass$Analyzer$Definition** $tmp158 = &param0->definition;
org$frostlang$frostc$pass$Analyzer$Definition* $tmp159 = *$tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$collections$ListView** $tmp160 = &param0->nonNullImplications;
frost$collections$ListView* $tmp161 = *$tmp160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
return;

}

