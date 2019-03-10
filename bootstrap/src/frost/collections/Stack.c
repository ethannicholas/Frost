#include "frost/collections/Stack.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Stack/StackIterator.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim(frost$collections$Stack* p0) {
    frost$collections$Iterator* result = frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Stack$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim} };

static frost$core$String $s1;
frost$collections$Stack$class_type frost$collections$Stack$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$_frost$collections$Iterable, { frost$collections$Stack$get_asString$R$frost$core$String, frost$collections$Stack$cleanup, frost$collections$Stack$push$frost$collections$Stack$T, frost$collections$Stack$pop$R$frost$collections$Stack$T, frost$collections$Stack$insert$frost$core$Int64$frost$collections$Stack$T, frost$collections$Stack$removeIndex$frost$core$Int64$R$frost$collections$Stack$T, frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T, frost$collections$Stack$clear, frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim, frost$collections$Stack$get_count$R$frost$core$Int64} };

typedef frost$core$Int64 (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn39)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn54)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn75)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn91)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn108)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn130)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn144)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn159)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn178)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn249)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn254)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, -307227456241795868, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, 3682859426721205233, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };

void frost$collections$Stack$push$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp2 = &param0->contents;
frost$collections$Array* $tmp3 = *$tmp2;
frost$collections$Array$add$frost$collections$Array$T($tmp3, param1);
return;

}
frost$core$Object* frost$collections$Stack$pop$R$frost$collections$Stack$T(frost$collections$Stack* param0) {

frost$core$Object* local0 = NULL;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.frost:50:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp4 = &param0->contents;
frost$collections$Array* $tmp5 = *$tmp4;
ITable* $tmp6 = ((frost$collections$CollectionView*) $tmp5)->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Int64 $tmp9 = $tmp7(((frost$collections$CollectionView*) $tmp5));
frost$core$Int64 $tmp10 = (frost$core$Int64) {0u};
int64_t $tmp11 = $tmp9.value;
int64_t $tmp12 = $tmp10.value;
bool $tmp13 = $tmp11 > $tmp12;
frost$core$Bit $tmp14 = (frost$core$Bit) {$tmp13};
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s17, $tmp16, &$s18);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:52
frost$collections$Array** $tmp19 = &param0->contents;
frost$collections$Array* $tmp20 = *$tmp19;
ITable* $tmp21 = ((frost$collections$CollectionView*) $tmp20)->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$core$Int64 $tmp24 = $tmp22(((frost$collections$CollectionView*) $tmp20));
frost$core$Int64 $tmp25 = (frost$core$Int64) {0u};
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 > $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s32, $tmp31);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:53
frost$collections$Array** $tmp33 = &param0->contents;
frost$collections$Array* $tmp34 = *$tmp33;
frost$collections$Array** $tmp35 = &param0->contents;
frost$collections$Array* $tmp36 = *$tmp35;
ITable* $tmp37 = ((frost$collections$CollectionView*) $tmp36)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
frost$core$Int64 $tmp40 = $tmp38(((frost$collections$CollectionView*) $tmp36));
frost$core$Int64 $tmp41 = (frost$core$Int64) {1u};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42 - $tmp43;
frost$core$Int64 $tmp45 = (frost$core$Int64) {$tmp44};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.frost:53:31
frost$core$Int64 $tmp46 = (frost$core$Int64) {0u};
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 >= $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block9; else goto block8;
block9:;
ITable* $tmp52 = ((frost$collections$CollectionView*) $tmp34)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Int64 $tmp55 = $tmp53(((frost$collections$CollectionView*) $tmp34));
int64_t $tmp56 = $tmp45.value;
int64_t $tmp57 = $tmp55.value;
bool $tmp58 = $tmp56 < $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp61 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s62, $tmp61, &$s63);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp64 = &$tmp34->data;
frost$core$Object** $tmp65 = *$tmp64;
int64_t $tmp66 = $tmp45.value;
frost$core$Object* $tmp67 = $tmp65[$tmp66];
frost$core$Frost$ref$frost$core$Object$Q($tmp67);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp67);
frost$core$Object* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp68);
*(&local0) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:54
frost$collections$Array** $tmp69 = &param0->contents;
frost$collections$Array* $tmp70 = *$tmp69;
frost$collections$Array** $tmp71 = &param0->contents;
frost$collections$Array* $tmp72 = *$tmp71;
ITable* $tmp73 = ((frost$collections$CollectionView*) $tmp72)->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
frost$core$Int64 $tmp76 = $tmp74(((frost$collections$CollectionView*) $tmp72));
frost$core$Int64 $tmp77 = (frost$core$Int64) {1u};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 - $tmp79;
frost$core$Int64 $tmp81 = (frost$core$Int64) {$tmp80};
frost$core$Object* $tmp82 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp70, $tmp81);
frost$core$Frost$unref$frost$core$Object$Q($tmp82);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:55
frost$core$Object* $tmp83 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp83);
frost$core$Object* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp83;

}
void frost$collections$Stack$insert$frost$core$Int64$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:59
frost$collections$Array** $tmp85 = &param0->contents;
frost$collections$Array* $tmp86 = *$tmp85;
frost$collections$Array** $tmp87 = &param0->contents;
frost$collections$Array* $tmp88 = *$tmp87;
ITable* $tmp89 = ((frost$collections$CollectionView*) $tmp88)->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Int64 $tmp92 = $tmp90(((frost$collections$CollectionView*) $tmp88));
frost$core$Int64 $tmp93 = (frost$core$Int64) {1u};
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94 - $tmp95;
frost$core$Int64 $tmp97 = (frost$core$Int64) {$tmp96};
int64_t $tmp98 = $tmp97.value;
int64_t $tmp99 = param1.value;
int64_t $tmp100 = $tmp98 - $tmp99;
frost$core$Int64 $tmp101 = (frost$core$Int64) {$tmp100};
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp86, $tmp101, param2);
return;

}
frost$core$Object* frost$collections$Stack$removeIndex$frost$core$Int64$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:63
frost$collections$Array** $tmp102 = &param0->contents;
frost$collections$Array* $tmp103 = *$tmp102;
frost$collections$Array** $tmp104 = &param0->contents;
frost$collections$Array* $tmp105 = *$tmp104;
ITable* $tmp106 = ((frost$collections$CollectionView*) $tmp105)->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[0];
frost$core$Int64 $tmp109 = $tmp107(((frost$collections$CollectionView*) $tmp105));
frost$core$Int64 $tmp110 = (frost$core$Int64) {1u};
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 - $tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {$tmp113};
int64_t $tmp115 = $tmp114.value;
int64_t $tmp116 = param1.value;
int64_t $tmp117 = $tmp115 - $tmp116;
frost$core$Int64 $tmp118 = (frost$core$Int64) {$tmp117};
frost$core$Object* $tmp119 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp103, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q($tmp119);
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
return $tmp119;

}
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp120 = (frost$core$Int64) {0u};
int64_t $tmp121 = param1.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 >= $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block3; else goto block2;
block3:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp126 = &param0->contents;
frost$collections$Array* $tmp127 = *$tmp126;
ITable* $tmp128 = ((frost$collections$CollectionView*) $tmp127)->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
frost$core$Int64 $tmp131 = $tmp129(((frost$collections$CollectionView*) $tmp127));
int64_t $tmp132 = param1.value;
int64_t $tmp133 = $tmp131.value;
bool $tmp134 = $tmp132 < $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp137 = (frost$core$Int64) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s138, $tmp137, &$s139);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp140 = &param0->contents;
frost$collections$Array* $tmp141 = *$tmp140;
ITable* $tmp142 = ((frost$collections$CollectionView*) $tmp141)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[0];
frost$core$Int64 $tmp145 = $tmp143(((frost$collections$CollectionView*) $tmp141));
int64_t $tmp146 = $tmp145.value;
int64_t $tmp147 = param1.value;
bool $tmp148 = $tmp146 > $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp151 = (frost$core$Int64) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s152, $tmp151);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp153 = &param0->contents;
frost$collections$Array* $tmp154 = *$tmp153;
frost$collections$Array** $tmp155 = &param0->contents;
frost$collections$Array* $tmp156 = *$tmp155;
ITable* $tmp157 = ((frost$collections$CollectionView*) $tmp156)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[0];
frost$core$Int64 $tmp160 = $tmp158(((frost$collections$CollectionView*) $tmp156));
frost$core$Int64 $tmp161 = (frost$core$Int64) {1u};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162 - $tmp163;
frost$core$Int64 $tmp165 = (frost$core$Int64) {$tmp164};
int64_t $tmp166 = $tmp165.value;
int64_t $tmp167 = param1.value;
int64_t $tmp168 = $tmp166 - $tmp167;
frost$core$Int64 $tmp169 = (frost$core$Int64) {$tmp168};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int64 $tmp170 = (frost$core$Int64) {0u};
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 >= $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block10; else goto block9;
block10:;
ITable* $tmp176 = ((frost$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
frost$core$Int64 $tmp179 = $tmp177(((frost$collections$CollectionView*) $tmp154));
int64_t $tmp180 = $tmp169.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 < $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp185 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s186, $tmp185, &$s187);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp188 = &$tmp154->data;
frost$core$Object** $tmp189 = *$tmp188;
int64_t $tmp190 = $tmp169.value;
frost$core$Object* $tmp191 = $tmp189[$tmp190];
frost$core$Frost$ref$frost$core$Object$Q($tmp191);
frost$core$Frost$ref$frost$core$Object$Q($tmp191);
frost$core$Frost$unref$frost$core$Object$Q($tmp191);
return $tmp191;

}
void frost$collections$Stack$clear(frost$collections$Stack* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:80
frost$collections$Array** $tmp192 = &param0->contents;
frost$collections$Array* $tmp193 = *$tmp192;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp194 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp195 = &$tmp193->_count;
*$tmp195 = $tmp194;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp196 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp197 = &$tmp193->capacity;
frost$core$Int64 $tmp198 = *$tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp200 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp196, $tmp198, $tmp199);
frost$core$Int64 $tmp201 = $tmp200.min;
*(&local0) = $tmp201;
frost$core$Int64 $tmp202 = $tmp200.max;
frost$core$Bit $tmp203 = $tmp200.inclusive;
bool $tmp204 = $tmp203.value;
frost$core$Int64 $tmp205 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp206 = $tmp205.value;
frost$core$UInt64 $tmp207 = (frost$core$UInt64) {((uint64_t) $tmp206)};
if ($tmp204) goto block6; else goto block7;
block6:;
int64_t $tmp208 = $tmp201.value;
int64_t $tmp209 = $tmp202.value;
bool $tmp210 = $tmp208 <= $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block3; else goto block4;
block7:;
int64_t $tmp213 = $tmp201.value;
int64_t $tmp214 = $tmp202.value;
bool $tmp215 = $tmp213 < $tmp214;
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp218 = &$tmp193->data;
frost$core$Object** $tmp219 = *$tmp218;
frost$core$Int64 $tmp220 = *(&local0);
int64_t $tmp221 = $tmp220.value;
frost$core$Object* $tmp222 = $tmp219[$tmp221];
frost$core$Frost$unref$frost$core$Object$Q($tmp222);
$tmp219[$tmp221] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp223 = *(&local0);
int64_t $tmp224 = $tmp202.value;
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224 - $tmp225;
frost$core$Int64 $tmp227 = (frost$core$Int64) {$tmp226};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp228 = $tmp227.value;
frost$core$UInt64 $tmp229 = (frost$core$UInt64) {((uint64_t) $tmp228)};
if ($tmp204) goto block10; else goto block11;
block10:;
uint64_t $tmp230 = $tmp229.value;
uint64_t $tmp231 = $tmp207.value;
bool $tmp232 = $tmp230 >= $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block8; else goto block4;
block11:;
uint64_t $tmp235 = $tmp229.value;
uint64_t $tmp236 = $tmp207.value;
bool $tmp237 = $tmp235 > $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block8; else goto block4;
block8:;
int64_t $tmp240 = $tmp223.value;
int64_t $tmp241 = $tmp205.value;
int64_t $tmp242 = $tmp240 + $tmp241;
frost$core$Int64 $tmp243 = (frost$core$Int64) {$tmp242};
*(&local0) = $tmp243;
goto block3;
block4:;
return;

}
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:89
FROST_ASSERT(32 == sizeof(frost$collections$Stack$StackIterator));
frost$collections$Stack$StackIterator* $tmp244 = (frost$collections$Stack$StackIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Stack$StackIterator$class);
frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT($tmp244, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp244)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
return ((frost$collections$Iterator*) $tmp244);

}
frost$core$Int64 frost$collections$Stack$get_count$R$frost$core$Int64(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp245 = &param0->contents;
frost$collections$Array* $tmp246 = *$tmp245;
ITable* $tmp247 = ((frost$collections$CollectionView*) $tmp246)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Int64 $tmp250 = $tmp248(((frost$collections$CollectionView*) $tmp246));
return $tmp250;

}
frost$core$String* frost$collections$Stack$get_asString$R$frost$core$String(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:98
frost$collections$Array** $tmp251 = &param0->contents;
frost$collections$Array* $tmp252 = *$tmp251;
$fn254 $tmp253 = ($fn254) ((frost$core$Object*) $tmp252)->$class->vtable[0];
frost$core$String* $tmp255 = $tmp253(((frost$core$Object*) $tmp252));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
return $tmp255;

}
void frost$collections$Stack$init(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:34
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp256 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$collections$Array** $tmp257 = &param0->contents;
frost$collections$Array* $tmp258 = *$tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$collections$Array** $tmp259 = &param0->contents;
*$tmp259 = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
return;

}
void frost$collections$Stack$cleanup(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp260 = &param0->contents;
frost$collections$Array* $tmp261 = *$tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
return;

}

