#include "frost/core/KeyTuple2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Bit frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit$shim(frost$core$KeyTuple2* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit(p0, ((frost$core$KeyTuple2*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$KeyTuple2$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$KeyTuple2$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$KeyTuple2$_frost$core$Equatable, { frost$core$KeyTuple2$get_hash$R$frost$core$Int64} };

static frost$core$String $s1;
frost$core$KeyTuple2$class_type frost$core$KeyTuple2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$KeyTuple2$_frost$collections$Key, { frost$core$KeyTuple2$get_asString$R$frost$core$String, frost$core$KeyTuple2$cleanup, frost$core$KeyTuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q, frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit$shim, frost$core$KeyTuple2$get_hash$R$frost$core$Int64} };

typedef frost$core$Bit (*$fn39)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn60)(frost$collections$Key*);
typedef frost$core$Int64 (*$fn68)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x32", 20, 1512875416750556905, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 15, 1061070160766049426, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 96, 1970284239561749169, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$KeyTuple2$init$frost$core$KeyTuple2$T0$frost$core$KeyTuple2$T1(frost$core$KeyTuple2* param0, frost$collections$Key* param1, frost$collections$Key* param2) {

// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Key** $tmp2 = &param0->f0;
frost$collections$Key* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$Key** $tmp4 = &param0->f0;
*$tmp4 = param1;
// line 8
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$Key** $tmp5 = &param0->f1;
frost$collections$Key* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Key** $tmp7 = &param0->f1;
*$tmp7 = param2;
return;

}
frost$core$Object* frost$core$KeyTuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$KeyTuple2* param0, frost$core$Int64 param1) {

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
frost$collections$Key** $tmp26 = &param0->f0;
frost$collections$Key* $tmp27 = *$tmp26;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
return ((frost$core$Object*) $tmp27);
block6:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
frost$core$Bit $tmp29 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block7; else goto block4;
block7:;
// line 15
frost$collections$Key** $tmp31 = &param0->f1;
frost$collections$Key* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
return ((frost$core$Object*) $tmp32);
block4:;
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit(frost$core$KeyTuple2* param0, frost$core$KeyTuple2* param1) {

// line 22
frost$collections$Key** $tmp33 = &param0->f0;
frost$collections$Key* $tmp34 = *$tmp33;
frost$collections$Key** $tmp35 = &param1->f0;
frost$collections$Key* $tmp36 = *$tmp35;
ITable* $tmp37 = ((frost$core$Equatable*) $tmp34)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[1];
frost$core$Bit $tmp40 = $tmp38(((frost$core$Equatable*) $tmp34), ((frost$core$Equatable*) $tmp36));
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// line 22
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(false);
return $tmp42;
block2:;
// line 23
frost$collections$Key** $tmp43 = &param0->f1;
frost$collections$Key* $tmp44 = *$tmp43;
frost$collections$Key** $tmp45 = &param1->f1;
frost$collections$Key* $tmp46 = *$tmp45;
ITable* $tmp47 = ((frost$core$Equatable*) $tmp44)->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[1];
frost$core$Bit $tmp50 = $tmp48(((frost$core$Equatable*) $tmp44), ((frost$core$Equatable*) $tmp46));
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
frost$core$Int64 frost$core$KeyTuple2$get_hash$R$frost$core$Int64(frost$core$KeyTuple2* param0) {

frost$core$Int64 local0;
// line 28
frost$core$Int64 $tmp54 = (frost$core$Int64) {0};
*(&local0) = $tmp54;
// line 29
frost$core$Int64 $tmp55 = *(&local0);
frost$collections$Key** $tmp56 = &param0->f0;
frost$collections$Key* $tmp57 = *$tmp56;
ITable* $tmp58 = $tmp57->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Int64 $tmp61 = $tmp59($tmp57);
frost$core$Int64 $tmp62 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp55, $tmp61);
*(&local0) = $tmp62;
// line 30
frost$core$Int64 $tmp63 = *(&local0);
frost$collections$Key** $tmp64 = &param0->f1;
frost$collections$Key* $tmp65 = *$tmp64;
ITable* $tmp66 = $tmp65->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Int64 $tmp69 = $tmp67($tmp65);
frost$core$Int64 $tmp70 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp63, $tmp69);
*(&local0) = $tmp70;
// line 31
frost$core$Int64 $tmp71 = *(&local0);
return $tmp71;

}
frost$core$String* frost$core$KeyTuple2$get_asString$R$frost$core$String(frost$core$KeyTuple2* param0) {

// line 35
frost$collections$Key** $tmp72 = &param0->f0;
frost$collections$Key* $tmp73 = *$tmp72;
frost$core$String* $tmp74 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s75, ((frost$core$Object*) $tmp73));
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s77);
frost$collections$Key** $tmp78 = &param0->f1;
frost$collections$Key* $tmp79 = *$tmp78;
frost$core$String* $tmp80 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp76, ((frost$core$Object*) $tmp79));
frost$core$String* $tmp81 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp80, &$s82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
return $tmp81;

}
void frost$core$KeyTuple2$cleanup(frost$core$KeyTuple2* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Key** $tmp83 = &param0->f0;
frost$collections$Key* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$collections$Key** $tmp85 = &param0->f1;
frost$collections$Key* $tmp86 = *$tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
return;

}






