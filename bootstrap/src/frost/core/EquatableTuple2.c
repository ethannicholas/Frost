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
frost$core$EquatableTuple2$class_type frost$core$EquatableTuple2$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$EquatableTuple2$_frost$core$Equatable, { frost$core$EquatableTuple2$get_asString$R$frost$core$String, frost$core$EquatableTuple2$cleanup, frost$core$EquatableTuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q, frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit$shim} };

typedef frost$core$Bit (*$fn39)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65\x32", 26, -1619652964326885388, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 21, -364322884410477315, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 102, -7186850776878469828, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$EquatableTuple2$init$frost$core$EquatableTuple2$T0$frost$core$EquatableTuple2$T1(frost$core$EquatableTuple2* param0, frost$core$Equatable* param1, frost$core$Equatable* param2) {

// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Equatable** $tmp2 = &param0->f0;
frost$core$Equatable* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Equatable** $tmp4 = &param0->f0;
*$tmp4 = param1;
// line 8
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Equatable** $tmp5 = &param0->f1;
frost$core$Equatable* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$Equatable** $tmp7 = &param0->f1;
*$tmp7 = param2;
return;

}
frost$core$Object* frost$core$EquatableTuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$EquatableTuple2* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
int64_t $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 < $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {12};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// line 13
frost$core$Int64 $tmp23 = (frost$core$Int64) {0};
frost$core$Bit $tmp24 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block6;
block5:;
// line 14
frost$core$Equatable** $tmp26 = &param0->f0;
frost$core$Equatable* $tmp27 = *$tmp26;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
return ((frost$core$Object*) $tmp27);
block6:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
frost$core$Bit $tmp29 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block7; else goto block4;
block7:;
// line 15
frost$core$Equatable** $tmp31 = &param0->f1;
frost$core$Equatable* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
return ((frost$core$Object*) $tmp32);
block4:;
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit(frost$core$EquatableTuple2* param0, frost$core$EquatableTuple2* param1) {

// line 22
frost$core$Equatable** $tmp33 = &param0->f0;
frost$core$Equatable* $tmp34 = *$tmp33;
frost$core$Equatable** $tmp35 = &param1->f0;
frost$core$Equatable* $tmp36 = *$tmp35;
ITable* $tmp37 = $tmp34->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[1];
frost$core$Bit $tmp40 = $tmp38($tmp34, $tmp36);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// line 22
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(false);
return $tmp42;
block2:;
// line 23
frost$core$Equatable** $tmp43 = &param0->f1;
frost$core$Equatable* $tmp44 = *$tmp43;
frost$core$Equatable** $tmp45 = &param1->f1;
frost$core$Equatable* $tmp46 = *$tmp45;
ITable* $tmp47 = $tmp44->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[1];
frost$core$Bit $tmp50 = $tmp48($tmp44, $tmp46);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block3; else goto block4;
block3:;
// line 23
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit(false);
return $tmp52;
block4:;
// line 24
frost$core$Bit $tmp53 = frost$core$Bit$init$builtin_bit(true);
return $tmp53;

}
frost$core$String* frost$core$EquatableTuple2$get_asString$R$frost$core$String(frost$core$EquatableTuple2* param0) {

// line 28
frost$core$Equatable** $tmp54 = &param0->f0;
frost$core$Equatable* $tmp55 = *$tmp54;
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s57, ((frost$core$Object*) $tmp55));
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp56, &$s59);
frost$core$Equatable** $tmp60 = &param0->f1;
frost$core$Equatable* $tmp61 = *$tmp60;
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp58, ((frost$core$Object*) $tmp61));
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, &$s64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
return $tmp63;

}
void frost$core$EquatableTuple2$cleanup(frost$core$EquatableTuple2* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Equatable** $tmp65 = &param0->f0;
frost$core$Equatable* $tmp66 = *$tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Equatable** $tmp67 = &param0->f1;
frost$core$Equatable* $tmp68 = *$tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
return;

}






