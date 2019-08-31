#include "frost/core/KeyTuple3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim(frost$core$KeyTuple3* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(p0, ((frost$core$KeyTuple3*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$KeyTuple3$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$KeyTuple3$get_hash$R$frost$core$Int} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$KeyTuple3$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$KeyTuple3$_frost$collections$HashKey, { frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$KeyTuple3$class_type frost$core$KeyTuple3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$KeyTuple3$_frost$core$Equatable, { frost$core$KeyTuple3$get_asString$R$frost$core$String, frost$core$KeyTuple3$cleanup, frost$core$KeyTuple3$$IDX$frost$core$Int$R$frost$core$Object$Q, frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit$shim, frost$core$KeyTuple3$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn56)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn66)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn76)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn87)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn98)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn109)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn119)(frost$core$Object*);
typedef frost$core$String* (*$fn128)(frost$core$Object*);
typedef frost$core$String* (*$fn136)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33", 20, -7689929561693019440, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 15, 4377810635714532923, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 94, -1894465719637327532, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$KeyTuple3$init$frost$core$KeyTuple3$T0$frost$core$KeyTuple3$T1$frost$core$KeyTuple3$T2(frost$core$KeyTuple3* param0, frost$collections$HashKey* param1, frost$collections$HashKey* param2, frost$collections$HashKey* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:8
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$HashKey** $tmp2 = &param0->f0;
frost$collections$HashKey* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$HashKey** $tmp4 = &param0->f0;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:9
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$HashKey** $tmp5 = &param0->f1;
frost$collections$HashKey* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashKey** $tmp7 = &param0->f1;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:10
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$collections$HashKey** $tmp8 = &param0->f2;
frost$collections$HashKey* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$HashKey** $tmp10 = &param0->f2;
*$tmp10 = param3;
return;

}
frost$core$Object* frost$core$KeyTuple3$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple3* param0, frost$core$Int param1) {

frost$core$Int $tmp11 = (frost$core$Int) {0u};
int64_t $tmp12 = param1.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block2;
block3:;
frost$core$Int $tmp17 = (frost$core$Int) {3u};
int64_t $tmp18 = param1.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 < $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
frost$core$Int $tmp23 = (frost$core$Int) {14u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:15
frost$core$Int $tmp26 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:16:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp27 = param1.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 == $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:16
frost$collections$HashKey** $tmp32 = &param0->f0;
frost$collections$HashKey* $tmp33 = *$tmp32;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
return ((frost$core$Object*) $tmp33);
block6:;
frost$core$Int $tmp34 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:17:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp35 = param1.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 == $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:17
frost$collections$HashKey** $tmp40 = &param0->f1;
frost$collections$HashKey* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
return ((frost$core$Object*) $tmp41);
block9:;
frost$core$Int $tmp42 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple3.frost:18:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp43 = param1.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 == $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block11; else goto block4;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:18
frost$collections$HashKey** $tmp48 = &param0->f2;
frost$collections$HashKey* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
return ((frost$core$Object*) $tmp49);
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(frost$core$KeyTuple3* param0, frost$core$KeyTuple3* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:25
frost$collections$HashKey** $tmp50 = &param0->f0;
frost$collections$HashKey* $tmp51 = *$tmp50;
frost$collections$HashKey** $tmp52 = &param1->f0;
frost$collections$HashKey* $tmp53 = *$tmp52;
ITable* $tmp54 = ((frost$core$Equatable*) $tmp51)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[1];
frost$core$Bit $tmp57 = $tmp55(((frost$core$Equatable*) $tmp51), ((frost$core$Equatable*) $tmp53));
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:25
frost$core$Bit $tmp59 = (frost$core$Bit) {false};
return $tmp59;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:26
frost$collections$HashKey** $tmp60 = &param0->f1;
frost$collections$HashKey* $tmp61 = *$tmp60;
frost$collections$HashKey** $tmp62 = &param1->f1;
frost$collections$HashKey* $tmp63 = *$tmp62;
ITable* $tmp64 = ((frost$core$Equatable*) $tmp61)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[1];
frost$core$Bit $tmp67 = $tmp65(((frost$core$Equatable*) $tmp61), ((frost$core$Equatable*) $tmp63));
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:26
frost$core$Bit $tmp69 = (frost$core$Bit) {false};
return $tmp69;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:27
frost$collections$HashKey** $tmp70 = &param0->f2;
frost$collections$HashKey* $tmp71 = *$tmp70;
frost$collections$HashKey** $tmp72 = &param1->f2;
frost$collections$HashKey* $tmp73 = *$tmp72;
ITable* $tmp74 = ((frost$core$Equatable*) $tmp71)->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[1];
frost$core$Bit $tmp77 = $tmp75(((frost$core$Equatable*) $tmp71), ((frost$core$Equatable*) $tmp73));
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:27
frost$core$Bit $tmp79 = (frost$core$Bit) {false};
return $tmp79;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:28
frost$core$Bit $tmp80 = (frost$core$Bit) {true};
return $tmp80;

}
frost$core$Int frost$core$KeyTuple3$get_hash$R$frost$core$Int(frost$core$KeyTuple3* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:32
frost$core$Int $tmp81 = (frost$core$Int) {0u};
*(&local0) = $tmp81;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:33
frost$core$Int $tmp82 = *(&local0);
frost$collections$HashKey** $tmp83 = &param0->f0;
frost$collections$HashKey* $tmp84 = *$tmp83;
ITable* $tmp85 = $tmp84->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$core$Int $tmp88 = $tmp86($tmp84);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:33:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp89 = $tmp82.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 ^ $tmp90;
frost$core$Int $tmp92 = (frost$core$Int) {$tmp91};
*(&local0) = $tmp92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:34
frost$core$Int $tmp93 = *(&local0);
frost$collections$HashKey** $tmp94 = &param0->f1;
frost$collections$HashKey* $tmp95 = *$tmp94;
ITable* $tmp96 = $tmp95->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Int $tmp99 = $tmp97($tmp95);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:34:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp100 = $tmp93.value;
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100 ^ $tmp101;
frost$core$Int $tmp103 = (frost$core$Int) {$tmp102};
*(&local0) = $tmp103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:35
frost$core$Int $tmp104 = *(&local0);
frost$collections$HashKey** $tmp105 = &param0->f2;
frost$collections$HashKey* $tmp106 = *$tmp105;
ITable* $tmp107 = $tmp106->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Int $tmp110 = $tmp108($tmp106);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple3.frost:35:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp111 = $tmp104.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 ^ $tmp112;
frost$core$Int $tmp114 = (frost$core$Int) {$tmp113};
*(&local0) = $tmp114;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:36
frost$core$Int $tmp115 = *(&local0);
return $tmp115;

}
frost$core$String* frost$core$KeyTuple3$get_asString$R$frost$core$String(frost$core$KeyTuple3* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:40
frost$collections$HashKey** $tmp116 = &param0->f0;
frost$collections$HashKey* $tmp117 = *$tmp116;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn119 $tmp118 = ($fn119) ((frost$core$Object*) $tmp117)->$class->vtable[0];
frost$core$String* $tmp120 = $tmp118(((frost$core$Object*) $tmp117));
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s122, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s124);
frost$collections$HashKey** $tmp125 = &param0->f1;
frost$collections$HashKey* $tmp126 = *$tmp125;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn128 $tmp127 = ($fn128) ((frost$core$Object*) $tmp126)->$class->vtable[0];
frost$core$String* $tmp129 = $tmp127(((frost$core$Object*) $tmp126));
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp123, $tmp129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp130, &$s132);
frost$collections$HashKey** $tmp133 = &param0->f2;
frost$collections$HashKey* $tmp134 = *$tmp133;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple3.frost:40:16
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return $tmp139;

}
void frost$core$KeyTuple3$cleanup(frost$core$KeyTuple3* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple3.frost:2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashKey** $tmp141 = &param0->f0;
frost$collections$HashKey* $tmp142 = *$tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$collections$HashKey** $tmp143 = &param0->f1;
frost$collections$HashKey* $tmp144 = *$tmp143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$collections$HashKey** $tmp145 = &param0->f2;
frost$collections$HashKey* $tmp146 = *$tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
return;

}






