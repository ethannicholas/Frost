#include "frost/core/EquatableTuple2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit$shim(frost$core$EquatableTuple2* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit(p0, ((frost$core$EquatableTuple2*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$EquatableTuple2$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$EquatableTuple2$class_type frost$core$EquatableTuple2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$EquatableTuple2$_frost$core$Equatable, { frost$core$EquatableTuple2$get_asString$R$frost$core$String, frost$core$EquatableTuple2$cleanup, frost$core$EquatableTuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q, frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit$shim} };

typedef frost$core$Bit (*$fn45)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn55)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn63)(frost$core$Object*);
typedef frost$core$String* (*$fn72)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65\x32", 26, -2179067522782671800, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 21, 394583888305392835, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 102, 7277437820865537438, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$EquatableTuple2$init$frost$core$EquatableTuple2$T0$frost$core$EquatableTuple2$T1(frost$core$EquatableTuple2* param0, frost$core$Equatable* param1, frost$core$Equatable* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Equatable** $tmp2 = &param0->f0;
frost$core$Equatable* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Equatable** $tmp4 = &param0->f0;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:8
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Equatable** $tmp5 = &param0->f1;
frost$core$Equatable* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$Equatable** $tmp7 = &param0->f1;
*$tmp7 = param2;
return;

}
frost$core$Object* frost$core$EquatableTuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$EquatableTuple2* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp8 = (frost$core$Int64) {0u};
int64_t $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2u};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 < $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {12u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:13
frost$core$Int64 $tmp23 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from EquatableTuple2.frost:14:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp24 = param1.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 == $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:14
frost$core$Equatable** $tmp29 = &param0->f0;
frost$core$Equatable* $tmp30 = *$tmp29;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
return ((frost$core$Object*) $tmp30);
block6:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from EquatableTuple2.frost:15:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp32 = param1.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 == $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block4;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:15
frost$core$Equatable** $tmp37 = &param0->f1;
frost$core$Equatable* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return ((frost$core$Object*) $tmp38);
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit(frost$core$EquatableTuple2* param0, frost$core$EquatableTuple2* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:22
frost$core$Equatable** $tmp39 = &param0->f0;
frost$core$Equatable* $tmp40 = *$tmp39;
frost$core$Equatable** $tmp41 = &param1->f0;
frost$core$Equatable* $tmp42 = *$tmp41;
ITable* $tmp43 = $tmp40->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
frost$core$Bit $tmp46 = $tmp44($tmp40, $tmp42);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:22
frost$core$Bit $tmp48 = (frost$core$Bit) {false};
return $tmp48;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:23
frost$core$Equatable** $tmp49 = &param0->f1;
frost$core$Equatable* $tmp50 = *$tmp49;
frost$core$Equatable** $tmp51 = &param1->f1;
frost$core$Equatable* $tmp52 = *$tmp51;
ITable* $tmp53 = $tmp50->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[1];
frost$core$Bit $tmp56 = $tmp54($tmp50, $tmp52);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:23
frost$core$Bit $tmp58 = (frost$core$Bit) {false};
return $tmp58;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:24
frost$core$Bit $tmp59 = (frost$core$Bit) {true};
return $tmp59;

}
frost$core$String* frost$core$EquatableTuple2$get_asString$R$frost$core$String(frost$core$EquatableTuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:28
frost$core$Equatable** $tmp60 = &param0->f0;
frost$core$Equatable* $tmp61 = *$tmp60;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from EquatableTuple2.frost:28:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn63 $tmp62 = ($fn63) ((frost$core$Object*) $tmp61)->$class->vtable[0];
frost$core$String* $tmp64 = $tmp62(((frost$core$Object*) $tmp61));
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s66, $tmp64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, &$s68);
frost$core$Equatable** $tmp69 = &param0->f1;
frost$core$Equatable* $tmp70 = *$tmp69;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from EquatableTuple2.frost:28:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn72 $tmp71 = ($fn72) ((frost$core$Object*) $tmp70)->$class->vtable[0];
frost$core$String* $tmp73 = $tmp71(((frost$core$Object*) $tmp70));
frost$core$String* $tmp74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp67, $tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s76);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
return $tmp75;

}
void frost$core$EquatableTuple2$cleanup(frost$core$EquatableTuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/EquatableTuple2.frost:2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Equatable** $tmp77 = &param0->f0;
frost$core$Equatable* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Equatable** $tmp79 = &param0->f1;
frost$core$Equatable* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
return;

}






