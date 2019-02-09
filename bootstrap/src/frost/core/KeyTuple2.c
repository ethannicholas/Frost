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

typedef frost$core$Bit (*$fn45)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn55)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn66)(frost$collections$Key*);
typedef frost$core$Int64 (*$fn77)(frost$collections$Key*);
typedef frost$core$String* (*$fn87)(frost$core$Object*);
typedef frost$core$String* (*$fn96)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x32", 20, 1512875416750556905, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 15, 1061070160766049426, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 96, 1970284239561749169, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$KeyTuple2$init$frost$core$KeyTuple2$T0$frost$core$KeyTuple2$T1(frost$core$KeyTuple2* param0, frost$collections$Key* param1, frost$collections$Key* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Key** $tmp2 = &param0->f0;
frost$collections$Key* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$Key** $tmp4 = &param0->f0;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:8
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:13
frost$core$Int64 $tmp23 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from KeyTuple2.frost:14:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp24 = param1.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 == $tmp25;
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit($tmp26);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:14
frost$collections$Key** $tmp29 = &param0->f0;
frost$collections$Key* $tmp30 = *$tmp29;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
return ((frost$core$Object*) $tmp30);
block6:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from KeyTuple2.frost:15:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp32 = param1.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 == $tmp33;
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit($tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block4;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:15
frost$collections$Key** $tmp37 = &param0->f1;
frost$collections$Key* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return ((frost$core$Object*) $tmp38);
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit(frost$core$KeyTuple2* param0, frost$core$KeyTuple2* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:22
frost$collections$Key** $tmp39 = &param0->f0;
frost$collections$Key* $tmp40 = *$tmp39;
frost$collections$Key** $tmp41 = &param1->f0;
frost$collections$Key* $tmp42 = *$tmp41;
ITable* $tmp43 = ((frost$core$Equatable*) $tmp40)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
frost$core$Bit $tmp46 = $tmp44(((frost$core$Equatable*) $tmp40), ((frost$core$Equatable*) $tmp42));
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:22
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(false);
return $tmp48;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:23
frost$collections$Key** $tmp49 = &param0->f1;
frost$collections$Key* $tmp50 = *$tmp49;
frost$collections$Key** $tmp51 = &param1->f1;
frost$collections$Key* $tmp52 = *$tmp51;
ITable* $tmp53 = ((frost$core$Equatable*) $tmp50)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[1];
frost$core$Bit $tmp56 = $tmp54(((frost$core$Equatable*) $tmp50), ((frost$core$Equatable*) $tmp52));
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:23
frost$core$Bit $tmp58 = frost$core$Bit$init$builtin_bit(false);
return $tmp58;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:24
frost$core$Bit $tmp59 = frost$core$Bit$init$builtin_bit(true);
return $tmp59;

}
frost$core$Int64 frost$core$KeyTuple2$get_hash$R$frost$core$Int64(frost$core$KeyTuple2* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:28
frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
*(&local0) = $tmp60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:29
frost$core$Int64 $tmp61 = *(&local0);
frost$collections$Key** $tmp62 = &param0->f0;
frost$collections$Key* $tmp63 = *$tmp62;
ITable* $tmp64 = $tmp63->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[0];
frost$core$Int64 $tmp67 = $tmp65($tmp63);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from KeyTuple2.frost:29:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:197
int64_t $tmp68 = $tmp61.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 ^ $tmp69;
frost$core$Int64 $tmp71 = frost$core$Int64$init$builtin_int64($tmp70);
*(&local0) = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:30
frost$core$Int64 $tmp72 = *(&local0);
frost$collections$Key** $tmp73 = &param0->f1;
frost$collections$Key* $tmp74 = *$tmp73;
ITable* $tmp75 = $tmp74->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Int64 $tmp78 = $tmp76($tmp74);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from KeyTuple2.frost:30:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:197
int64_t $tmp79 = $tmp72.value;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79 ^ $tmp80;
frost$core$Int64 $tmp82 = frost$core$Int64$init$builtin_int64($tmp81);
*(&local0) = $tmp82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:31
frost$core$Int64 $tmp83 = *(&local0);
return $tmp83;

}
frost$core$String* frost$core$KeyTuple2$get_asString$R$frost$core$String(frost$core$KeyTuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:35
frost$collections$Key** $tmp84 = &param0->f0;
frost$collections$Key* $tmp85 = *$tmp84;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple2.frost:35:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn87 $tmp86 = ($fn87) ((frost$core$Object*) $tmp85)->$class->vtable[0];
frost$core$String* $tmp88 = $tmp86(((frost$core$Object*) $tmp85));
frost$core$String* $tmp89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s90, $tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp89, &$s92);
frost$collections$Key** $tmp93 = &param0->f1;
frost$collections$Key* $tmp94 = *$tmp93;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple2.frost:35:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn96 $tmp95 = ($fn96) ((frost$core$Object*) $tmp94)->$class->vtable[0];
frost$core$String* $tmp97 = $tmp95(((frost$core$Object*) $tmp94));
frost$core$String* $tmp98 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp91, $tmp97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$String* $tmp99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp98, &$s100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
return $tmp99;

}
void frost$core$KeyTuple2$cleanup(frost$core$KeyTuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple2.frost:2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Key** $tmp101 = &param0->f0;
frost$collections$Key* $tmp102 = *$tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$collections$Key** $tmp103 = &param0->f1;
frost$collections$Key* $tmp104 = *$tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
return;

}






