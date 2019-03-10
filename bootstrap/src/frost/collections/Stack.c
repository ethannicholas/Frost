#include "frost/collections/Stack.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/Stack/StackIterator.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim(frost$collections$Stack* p0) {
    frost$collections$Iterator* result = frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Stack$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim} };

static frost$core$String $s1;
frost$collections$Stack$class_type frost$collections$Stack$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$_frost$collections$Iterable, { frost$collections$Stack$get_asString$R$frost$core$String, frost$collections$Stack$cleanup, frost$collections$Stack$push$frost$collections$Stack$T, frost$collections$Stack$pop$R$frost$collections$Stack$T, frost$collections$Stack$insert$frost$core$Int$frost$collections$Stack$T, frost$collections$Stack$removeIndex$frost$core$Int$R$frost$collections$Stack$T, frost$collections$Stack$$IDX$frost$core$Int$R$frost$collections$Stack$T, frost$collections$Stack$clear, frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim, frost$collections$Stack$get_count$R$frost$core$Int} };

typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn39)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn54)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn76)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn92)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn109)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn131)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn145)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn160)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn179)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn248)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn253)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, -307227456241795868, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, 3682859426721205233, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void frost$collections$Stack$push$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp2 = &param0->contents;
frost$collections$Array* $tmp3 = *$tmp2;
frost$collections$Array$add$frost$collections$Array$T($tmp3, param1);
return;

}
frost$core$Object* frost$collections$Stack$pop$R$frost$collections$Stack$T(frost$collections$Stack* param0) {

frost$core$Object* local0 = NULL;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:50:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp4 = &param0->contents;
frost$collections$Array* $tmp5 = *$tmp4;
ITable* $tmp6 = ((frost$collections$CollectionView*) $tmp5)->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Int $tmp9 = $tmp7(((frost$collections$CollectionView*) $tmp5));
frost$core$Int $tmp10 = (frost$core$Int) {0u};
int64_t $tmp11 = $tmp9.value;
int64_t $tmp12 = $tmp10.value;
bool $tmp13 = $tmp11 > $tmp12;
frost$core$Bit $tmp14 = (frost$core$Bit) {$tmp13};
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block2:;
frost$core$Int $tmp16 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, $tmp16, &$s18);
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
frost$core$Int $tmp24 = $tmp22(((frost$collections$CollectionView*) $tmp20));
frost$core$Int $tmp25 = (frost$core$Int) {0u};
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 > $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block4; else goto block5;
block5:;
frost$core$Int $tmp31 = (frost$core$Int) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s32, $tmp31);
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
frost$core$Int $tmp40 = $tmp38(((frost$collections$CollectionView*) $tmp36));
frost$core$Int $tmp41 = (frost$core$Int) {1u};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42 - $tmp43;
frost$core$Int $tmp45 = (frost$core$Int) {$tmp44};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:53:31
frost$core$Int $tmp46 = (frost$core$Int) {0u};
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
frost$core$Int $tmp55 = $tmp53(((frost$collections$CollectionView*) $tmp34));
int64_t $tmp56 = $tmp45.value;
int64_t $tmp57 = $tmp55.value;
bool $tmp58 = $tmp56 < $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block7; else goto block8;
block8:;
frost$core$Int $tmp61 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, $tmp61, &$s63);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp64 = &$tmp34->data;
frost$core$Object** $tmp65 = *$tmp64;
frost$core$Int64 $tmp66 = frost$core$Int64$init$frost$core$Int($tmp45);
int64_t $tmp67 = $tmp66.value;
frost$core$Object* $tmp68 = $tmp65[$tmp67];
frost$core$Frost$ref$frost$core$Object$Q($tmp68);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp68);
frost$core$Object* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp69);
*(&local0) = $tmp68;
frost$core$Frost$unref$frost$core$Object$Q($tmp68);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:54
frost$collections$Array** $tmp70 = &param0->contents;
frost$collections$Array* $tmp71 = *$tmp70;
frost$collections$Array** $tmp72 = &param0->contents;
frost$collections$Array* $tmp73 = *$tmp72;
ITable* $tmp74 = ((frost$collections$CollectionView*) $tmp73)->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[0];
frost$core$Int $tmp77 = $tmp75(((frost$collections$CollectionView*) $tmp73));
frost$core$Int $tmp78 = (frost$core$Int) {1u};
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79 - $tmp80;
frost$core$Int $tmp82 = (frost$core$Int) {$tmp81};
frost$core$Object* $tmp83 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp71, $tmp82);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:55
frost$core$Object* $tmp84 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp84);
frost$core$Object* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp84;

}
void frost$collections$Stack$insert$frost$core$Int$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:59
frost$collections$Array** $tmp86 = &param0->contents;
frost$collections$Array* $tmp87 = *$tmp86;
frost$collections$Array** $tmp88 = &param0->contents;
frost$collections$Array* $tmp89 = *$tmp88;
ITable* $tmp90 = ((frost$collections$CollectionView*) $tmp89)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Int $tmp93 = $tmp91(((frost$collections$CollectionView*) $tmp89));
frost$core$Int $tmp94 = (frost$core$Int) {1u};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 - $tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {$tmp97};
int64_t $tmp99 = $tmp98.value;
int64_t $tmp100 = param1.value;
int64_t $tmp101 = $tmp99 - $tmp100;
frost$core$Int $tmp102 = (frost$core$Int) {$tmp101};
frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T($tmp87, $tmp102, param2);
return;

}
frost$core$Object* frost$collections$Stack$removeIndex$frost$core$Int$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:63
frost$collections$Array** $tmp103 = &param0->contents;
frost$collections$Array* $tmp104 = *$tmp103;
frost$collections$Array** $tmp105 = &param0->contents;
frost$collections$Array* $tmp106 = *$tmp105;
ITable* $tmp107 = ((frost$collections$CollectionView*) $tmp106)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Int $tmp110 = $tmp108(((frost$collections$CollectionView*) $tmp106));
frost$core$Int $tmp111 = (frost$core$Int) {1u};
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112 - $tmp113;
frost$core$Int $tmp115 = (frost$core$Int) {$tmp114};
int64_t $tmp116 = $tmp115.value;
int64_t $tmp117 = param1.value;
int64_t $tmp118 = $tmp116 - $tmp117;
frost$core$Int $tmp119 = (frost$core$Int) {$tmp118};
frost$core$Object* $tmp120 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp104, $tmp119);
frost$core$Frost$ref$frost$core$Object$Q($tmp120);
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
return $tmp120;

}
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int param1) {

frost$core$Int $tmp121 = (frost$core$Int) {0u};
int64_t $tmp122 = param1.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 >= $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block3; else goto block2;
block3:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp127 = &param0->contents;
frost$collections$Array* $tmp128 = *$tmp127;
ITable* $tmp129 = ((frost$collections$CollectionView*) $tmp128)->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[0];
frost$core$Int $tmp132 = $tmp130(((frost$collections$CollectionView*) $tmp128));
int64_t $tmp133 = param1.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 < $tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block1; else goto block2;
block2:;
frost$core$Int $tmp138 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp141 = &param0->contents;
frost$collections$Array* $tmp142 = *$tmp141;
ITable* $tmp143 = ((frost$collections$CollectionView*) $tmp142)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
frost$core$Int $tmp146 = $tmp144(((frost$collections$CollectionView*) $tmp142));
int64_t $tmp147 = $tmp146.value;
int64_t $tmp148 = param1.value;
bool $tmp149 = $tmp147 > $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block5; else goto block6;
block6:;
frost$core$Int $tmp152 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s153, $tmp152);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp154 = &param0->contents;
frost$collections$Array* $tmp155 = *$tmp154;
frost$collections$Array** $tmp156 = &param0->contents;
frost$collections$Array* $tmp157 = *$tmp156;
ITable* $tmp158 = ((frost$collections$CollectionView*) $tmp157)->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$core$Int $tmp161 = $tmp159(((frost$collections$CollectionView*) $tmp157));
frost$core$Int $tmp162 = (frost$core$Int) {1u};
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163 - $tmp164;
frost$core$Int $tmp166 = (frost$core$Int) {$tmp165};
int64_t $tmp167 = $tmp166.value;
int64_t $tmp168 = param1.value;
int64_t $tmp169 = $tmp167 - $tmp168;
frost$core$Int $tmp170 = (frost$core$Int) {$tmp169};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp171 = (frost$core$Int) {0u};
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 >= $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block10; else goto block9;
block10:;
ITable* $tmp177 = ((frost$collections$CollectionView*) $tmp155)->$class->itable;
while ($tmp177->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
frost$core$Int $tmp180 = $tmp178(((frost$collections$CollectionView*) $tmp155));
int64_t $tmp181 = $tmp170.value;
int64_t $tmp182 = $tmp180.value;
bool $tmp183 = $tmp181 < $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block8; else goto block9;
block9:;
frost$core$Int $tmp186 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s187, $tmp186, &$s188);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp189 = &$tmp155->data;
frost$core$Object** $tmp190 = *$tmp189;
frost$core$Int64 $tmp191 = frost$core$Int64$init$frost$core$Int($tmp170);
int64_t $tmp192 = $tmp191.value;
frost$core$Object* $tmp193 = $tmp190[$tmp192];
frost$core$Frost$ref$frost$core$Object$Q($tmp193);
frost$core$Frost$ref$frost$core$Object$Q($tmp193);
frost$core$Frost$unref$frost$core$Object$Q($tmp193);
return $tmp193;

}
void frost$collections$Stack$clear(frost$collections$Stack* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:80
frost$collections$Array** $tmp194 = &param0->contents;
frost$collections$Array* $tmp195 = *$tmp194;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int $tmp196 = (frost$core$Int) {0u};
frost$core$Int* $tmp197 = &$tmp195->_count;
*$tmp197 = $tmp196;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int $tmp198 = (frost$core$Int) {0u};
frost$core$Int* $tmp199 = &$tmp195->capacity;
frost$core$Int $tmp200 = *$tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp202 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp198, $tmp200, $tmp201);
frost$core$Int $tmp203 = $tmp202.min;
*(&local0) = $tmp203;
frost$core$Int $tmp204 = $tmp202.max;
frost$core$Bit $tmp205 = $tmp202.inclusive;
bool $tmp206 = $tmp205.value;
frost$core$Int $tmp207 = (frost$core$Int) {1u};
if ($tmp206) goto block5; else goto block6;
block5:;
int64_t $tmp208 = $tmp203.value;
int64_t $tmp209 = $tmp204.value;
bool $tmp210 = $tmp208 <= $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block2; else goto block3;
block6:;
int64_t $tmp213 = $tmp203.value;
int64_t $tmp214 = $tmp204.value;
bool $tmp215 = $tmp213 < $tmp214;
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp218 = &$tmp195->data;
frost$core$Object** $tmp219 = *$tmp218;
frost$core$Int $tmp220 = *(&local0);
frost$core$Int64 $tmp221 = frost$core$Int64$init$frost$core$Int($tmp220);
int64_t $tmp222 = $tmp221.value;
frost$core$Object* $tmp223 = $tmp219[$tmp222];
frost$core$Frost$unref$frost$core$Object$Q($tmp223);
$tmp219[$tmp222] = ((frost$core$Object*) NULL);
frost$core$Int $tmp224 = *(&local0);
int64_t $tmp225 = $tmp204.value;
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225 - $tmp226;
frost$core$Int $tmp228 = (frost$core$Int) {$tmp227};
if ($tmp206) goto block8; else goto block9;
block8:;
int64_t $tmp229 = $tmp228.value;
int64_t $tmp230 = $tmp207.value;
bool $tmp231 = $tmp229 >= $tmp230;
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block7; else goto block3;
block9:;
int64_t $tmp234 = $tmp228.value;
int64_t $tmp235 = $tmp207.value;
bool $tmp236 = $tmp234 > $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block7; else goto block3;
block7:;
int64_t $tmp239 = $tmp224.value;
int64_t $tmp240 = $tmp207.value;
int64_t $tmp241 = $tmp239 + $tmp240;
frost$core$Int $tmp242 = (frost$core$Int) {$tmp241};
*(&local0) = $tmp242;
goto block2;
block3:;
return;

}
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:89
FROST_ASSERT(32 == sizeof(frost$collections$Stack$StackIterator));
frost$collections$Stack$StackIterator* $tmp243 = (frost$collections$Stack$StackIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Stack$StackIterator$class);
frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT($tmp243, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp243)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
return ((frost$collections$Iterator*) $tmp243);

}
frost$core$Int frost$collections$Stack$get_count$R$frost$core$Int(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp244 = &param0->contents;
frost$collections$Array* $tmp245 = *$tmp244;
ITable* $tmp246 = ((frost$collections$CollectionView*) $tmp245)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Int $tmp249 = $tmp247(((frost$collections$CollectionView*) $tmp245));
return $tmp249;

}
frost$core$String* frost$collections$Stack$get_asString$R$frost$core$String(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:98
frost$collections$Array** $tmp250 = &param0->contents;
frost$collections$Array* $tmp251 = *$tmp250;
$fn253 $tmp252 = ($fn253) ((frost$core$Object*) $tmp251)->$class->vtable[0];
frost$core$String* $tmp254 = $tmp252(((frost$core$Object*) $tmp251));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
return $tmp254;

}
void frost$collections$Stack$init(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:34
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp255 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$collections$Array** $tmp256 = &param0->contents;
frost$collections$Array* $tmp257 = *$tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$collections$Array** $tmp258 = &param0->contents;
*$tmp258 = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
return;

}
void frost$collections$Stack$cleanup(frost$collections$Stack* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp259 = &param0->contents;
frost$collections$Array* $tmp260 = *$tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
return;

}

