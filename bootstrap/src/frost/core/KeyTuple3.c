#include "frost/core/KeyTuple3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim(frost$core$KeyTuple3* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(p0, ((frost$core$KeyTuple3*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$KeyTuple3$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$KeyTuple3$get_hash$R$frost$core$Int64} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$KeyTuple3$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$KeyTuple3$_frost$collections$Key, { frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$KeyTuple3$class_type frost$core$KeyTuple3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$KeyTuple3$_frost$core$Equatable, { frost$core$KeyTuple3$get_asString$R$frost$core$String, frost$core$KeyTuple3$cleanup, frost$core$KeyTuple3$$IDX$frost$core$Int64$R$frost$core$Object$Q, frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim, frost$core$KeyTuple3$get_hash$R$frost$core$Int64} };

typedef frost$core$Bit (*$fn47)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn57)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn67)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn78)(frost$collections$Key*);
typedef frost$core$Int64 (*$fn86)(frost$collections$Key*);
typedef frost$core$Int64 (*$fn94)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33", 20, 1512875416750556906, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 15, 1061071222286200027, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 96, 5231629575972066282, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$KeyTuple3$init$frost$core$KeyTuple3$T0$frost$core$KeyTuple3$T1$frost$core$KeyTuple3$T2(frost$core$KeyTuple3* param0, frost$collections$Key* param1, frost$collections$Key* param2, frost$collections$Key* param3) {

// line 8
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Key** $tmp2 = &param0->f0;
frost$collections$Key* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$Key** $tmp4 = &param0->f0;
*$tmp4 = param1;
// line 9
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$Key** $tmp5 = &param0->f1;
frost$collections$Key* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Key** $tmp7 = &param0->f1;
*$tmp7 = param2;
// line 10
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$collections$Key** $tmp8 = &param0->f2;
frost$collections$Key* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Key** $tmp10 = &param0->f2;
*$tmp10 = param3;
return;

}
frost$core$Object* frost$core$KeyTuple3$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$KeyTuple3* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
int64_t $tmp12 = param1.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {3};
int64_t $tmp18 = param1.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 < $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {14};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 15
frost$core$Int64 $tmp26 = (frost$core$Int64) {0};
frost$core$Bit $tmp27 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp26);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block5; else goto block6;
block5:;
// line 16
frost$collections$Key** $tmp29 = &param0->f0;
frost$collections$Key* $tmp30 = *$tmp29;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
return ((frost$core$Object*) $tmp30);
block6:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block7; else goto block8;
block7:;
// line 17
frost$collections$Key** $tmp34 = &param0->f1;
frost$collections$Key* $tmp35 = *$tmp34;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
return ((frost$core$Object*) $tmp35);
block8:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {2};
frost$core$Bit $tmp37 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block9; else goto block4;
block9:;
// line 18
frost$collections$Key** $tmp39 = &param0->f2;
frost$collections$Key* $tmp40 = *$tmp39;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return ((frost$core$Object*) $tmp40);
block4:;
// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(frost$core$KeyTuple3* param0, frost$core$KeyTuple3* param1) {

// line 25
frost$collections$Key** $tmp41 = &param0->f0;
frost$collections$Key* $tmp42 = *$tmp41;
frost$collections$Key** $tmp43 = &param1->f0;
frost$collections$Key* $tmp44 = *$tmp43;
ITable* $tmp45 = ((frost$core$Equatable*) $tmp42)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[1];
frost$core$Bit $tmp48 = $tmp46(((frost$core$Equatable*) $tmp42), ((frost$core$Equatable*) $tmp44));
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 25
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(false);
return $tmp50;
block2:;
// line 26
frost$collections$Key** $tmp51 = &param0->f1;
frost$collections$Key* $tmp52 = *$tmp51;
frost$collections$Key** $tmp53 = &param1->f1;
frost$collections$Key* $tmp54 = *$tmp53;
ITable* $tmp55 = ((frost$core$Equatable*) $tmp52)->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[1];
frost$core$Bit $tmp58 = $tmp56(((frost$core$Equatable*) $tmp52), ((frost$core$Equatable*) $tmp54));
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block3; else goto block4;
block3:;
// line 26
frost$core$Bit $tmp60 = frost$core$Bit$init$builtin_bit(false);
return $tmp60;
block4:;
// line 27
frost$collections$Key** $tmp61 = &param0->f2;
frost$collections$Key* $tmp62 = *$tmp61;
frost$collections$Key** $tmp63 = &param1->f2;
frost$collections$Key* $tmp64 = *$tmp63;
ITable* $tmp65 = ((frost$core$Equatable*) $tmp62)->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[1];
frost$core$Bit $tmp68 = $tmp66(((frost$core$Equatable*) $tmp62), ((frost$core$Equatable*) $tmp64));
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block5; else goto block6;
block5:;
// line 27
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit(false);
return $tmp70;
block6:;
// line 28
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit(true);
return $tmp71;

}
frost$core$Int64 frost$core$KeyTuple3$get_hash$R$frost$core$Int64(frost$core$KeyTuple3* param0) {

frost$core$Int64 local0;
// line 32
frost$core$Int64 $tmp72 = (frost$core$Int64) {0};
*(&local0) = $tmp72;
// line 33
frost$core$Int64 $tmp73 = *(&local0);
frost$collections$Key** $tmp74 = &param0->f0;
frost$collections$Key* $tmp75 = *$tmp74;
ITable* $tmp76 = $tmp75->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[0];
frost$core$Int64 $tmp79 = $tmp77($tmp75);
frost$core$Int64 $tmp80 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp73, $tmp79);
*(&local0) = $tmp80;
// line 34
frost$core$Int64 $tmp81 = *(&local0);
frost$collections$Key** $tmp82 = &param0->f1;
frost$collections$Key* $tmp83 = *$tmp82;
ITable* $tmp84 = $tmp83->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[0];
frost$core$Int64 $tmp87 = $tmp85($tmp83);
frost$core$Int64 $tmp88 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp81, $tmp87);
*(&local0) = $tmp88;
// line 35
frost$core$Int64 $tmp89 = *(&local0);
frost$collections$Key** $tmp90 = &param0->f2;
frost$collections$Key* $tmp91 = *$tmp90;
ITable* $tmp92 = $tmp91->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93($tmp91);
frost$core$Int64 $tmp96 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp89, $tmp95);
*(&local0) = $tmp96;
// line 36
frost$core$Int64 $tmp97 = *(&local0);
return $tmp97;

}
frost$core$String* frost$core$KeyTuple3$get_asString$R$frost$core$String(frost$core$KeyTuple3* param0) {

// line 40
frost$collections$Key** $tmp98 = &param0->f0;
frost$collections$Key* $tmp99 = *$tmp98;
frost$core$String* $tmp100 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s101, ((frost$core$Object*) $tmp99));
frost$core$String* $tmp102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp100, &$s103);
frost$collections$Key** $tmp104 = &param0->f1;
frost$collections$Key* $tmp105 = *$tmp104;
frost$core$String* $tmp106 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp102, ((frost$core$Object*) $tmp105));
frost$core$String* $tmp107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp106, &$s108);
frost$collections$Key** $tmp109 = &param0->f2;
frost$collections$Key* $tmp110 = *$tmp109;
frost$core$String* $tmp111 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp107, ((frost$core$Object*) $tmp110));
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp111, &$s113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
return $tmp112;

}
void frost$core$KeyTuple3$cleanup(frost$core$KeyTuple3* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Key** $tmp114 = &param0->f0;
frost$collections$Key* $tmp115 = *$tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$collections$Key** $tmp116 = &param0->f1;
frost$collections$Key* $tmp117 = *$tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$collections$Key** $tmp118 = &param0->f2;
frost$collections$Key* $tmp119 = *$tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
return;

}






