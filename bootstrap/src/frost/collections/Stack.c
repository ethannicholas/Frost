#include "frost/collections/Stack.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Stack/StackIterator.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim(frost$collections$Stack* p0) {
    frost$collections$Iterator* result = frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Stack$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim} };

static frost$core$String $s1;
frost$collections$Stack$class_type frost$collections$Stack$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$_frost$collections$Iterable, { frost$collections$Stack$get_asString$R$frost$core$String, frost$collections$Stack$cleanup, frost$collections$Stack$push$frost$collections$Stack$T, frost$collections$Stack$pop$R$frost$collections$Stack$T, frost$collections$Stack$insert$frost$core$Int64$frost$collections$Stack$T, frost$collections$Stack$removeIndex$frost$core$Int64$R$frost$collections$Stack$T, frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T, frost$collections$Stack$clear, frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim, frost$collections$Stack$get_count$R$frost$core$Int64} };

typedef frost$core$Int64 (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn34)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn49)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn65)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn82)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn113)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn128)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn147)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn152)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, -799920337617151128, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, 180433054594552295, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };

void frost$collections$Stack$push$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Object* param1) {

// line 42
frost$collections$Array** $tmp2 = &param0->contents;
frost$collections$Array* $tmp3 = *$tmp2;
frost$collections$Array$add$frost$collections$Array$T($tmp3, param1);
return;

}
frost$core$Object* frost$collections$Stack$pop$R$frost$collections$Stack$T(frost$collections$Stack* param0) {

frost$core$Object* local0 = NULL;
frost$core$Int64 $tmp4 = frost$collections$Stack$get_count$R$frost$core$Int64(param0);
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
int64_t $tmp6 = $tmp4.value;
int64_t $tmp7 = $tmp5.value;
bool $tmp8 = $tmp6 > $tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp11 = (frost$core$Int64) {51};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s12, $tmp11, &$s13);
abort(); // unreachable
block1:;
// line 52
frost$collections$Array** $tmp14 = &param0->contents;
frost$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Int64 $tmp19 = $tmp17(((frost$collections$CollectionView*) $tmp15));
frost$core$Int64 $tmp20 = (frost$core$Int64) {0};
int64_t $tmp21 = $tmp19.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 > $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {52};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s27, $tmp26);
abort(); // unreachable
block3:;
// line 53
frost$collections$Array** $tmp28 = &param0->contents;
frost$collections$Array* $tmp29 = *$tmp28;
frost$collections$Array** $tmp30 = &param0->contents;
frost$collections$Array* $tmp31 = *$tmp30;
ITable* $tmp32 = ((frost$collections$CollectionView*) $tmp31)->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp32 = $tmp32->next;
}
$fn34 $tmp33 = $tmp32->methods[0];
frost$core$Int64 $tmp35 = $tmp33(((frost$collections$CollectionView*) $tmp31));
frost$core$Int64 $tmp36 = (frost$core$Int64) {1};
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
frost$core$Int64 $tmp40 = (frost$core$Int64) {$tmp39};
frost$core$Object* $tmp41 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp29, $tmp40);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp41);
frost$core$Object* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
*(&local0) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q($tmp41);
// line 54
frost$collections$Array** $tmp43 = &param0->contents;
frost$collections$Array* $tmp44 = *$tmp43;
frost$collections$Array** $tmp45 = &param0->contents;
frost$collections$Array* $tmp46 = *$tmp45;
ITable* $tmp47 = ((frost$collections$CollectionView*) $tmp46)->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
frost$core$Int64 $tmp50 = $tmp48(((frost$collections$CollectionView*) $tmp46));
frost$core$Int64 $tmp51 = (frost$core$Int64) {1};
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
frost$core$Int64 $tmp55 = (frost$core$Int64) {$tmp54};
frost$core$Object* $tmp56 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp44, $tmp55);
frost$core$Frost$unref$frost$core$Object$Q($tmp56);
// line 55
frost$core$Object* $tmp57 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp57);
frost$core$Object* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp57;

}
void frost$collections$Stack$insert$frost$core$Int64$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1, frost$core$Object* param2) {

// line 59
frost$collections$Array** $tmp59 = &param0->contents;
frost$collections$Array* $tmp60 = *$tmp59;
frost$collections$Array** $tmp61 = &param0->contents;
frost$collections$Array* $tmp62 = *$tmp61;
ITable* $tmp63 = ((frost$collections$CollectionView*) $tmp62)->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
frost$core$Int64 $tmp66 = $tmp64(((frost$collections$CollectionView*) $tmp62));
frost$core$Int64 $tmp67 = (frost$core$Int64) {1};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 - $tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {$tmp70};
int64_t $tmp72 = $tmp71.value;
int64_t $tmp73 = param1.value;
int64_t $tmp74 = $tmp72 - $tmp73;
frost$core$Int64 $tmp75 = (frost$core$Int64) {$tmp74};
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp60, $tmp75, param2);
return;

}
frost$core$Object* frost$collections$Stack$removeIndex$frost$core$Int64$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1) {

// line 63
frost$collections$Array** $tmp76 = &param0->contents;
frost$collections$Array* $tmp77 = *$tmp76;
frost$collections$Array** $tmp78 = &param0->contents;
frost$collections$Array* $tmp79 = *$tmp78;
ITable* $tmp80 = ((frost$collections$CollectionView*) $tmp79)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Int64 $tmp83 = $tmp81(((frost$collections$CollectionView*) $tmp79));
frost$core$Int64 $tmp84 = (frost$core$Int64) {1};
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 - $tmp86;
frost$core$Int64 $tmp88 = (frost$core$Int64) {$tmp87};
int64_t $tmp89 = $tmp88.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
frost$core$Object* $tmp93 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp77, $tmp92);
frost$core$Frost$ref$frost$core$Object$Q($tmp93);
frost$core$Frost$unref$frost$core$Object$Q($tmp93);
return $tmp93;

}
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp94 = (frost$core$Int64) {0};
int64_t $tmp95 = param1.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 >= $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp100 = frost$collections$Stack$get_count$R$frost$core$Int64(param0);
int64_t $tmp101 = param1.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 < $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {71};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block1:;
// line 72
frost$collections$Array** $tmp109 = &param0->contents;
frost$collections$Array* $tmp110 = *$tmp109;
ITable* $tmp111 = ((frost$collections$CollectionView*) $tmp110)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Int64 $tmp114 = $tmp112(((frost$collections$CollectionView*) $tmp110));
int64_t $tmp115 = $tmp114.value;
int64_t $tmp116 = param1.value;
bool $tmp117 = $tmp115 > $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s121, $tmp120);
abort(); // unreachable
block4:;
// line 73
frost$collections$Array** $tmp122 = &param0->contents;
frost$collections$Array* $tmp123 = *$tmp122;
frost$collections$Array** $tmp124 = &param0->contents;
frost$collections$Array* $tmp125 = *$tmp124;
ITable* $tmp126 = ((frost$collections$CollectionView*) $tmp125)->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[0];
frost$core$Int64 $tmp129 = $tmp127(((frost$collections$CollectionView*) $tmp125));
frost$core$Int64 $tmp130 = (frost$core$Int64) {1};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 - $tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
int64_t $tmp135 = $tmp134.value;
int64_t $tmp136 = param1.value;
int64_t $tmp137 = $tmp135 - $tmp136;
frost$core$Int64 $tmp138 = (frost$core$Int64) {$tmp137};
frost$core$Object* $tmp139 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp123, $tmp138);
frost$core$Frost$ref$frost$core$Object$Q($tmp139);
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
return $tmp139;

}
void frost$collections$Stack$clear(frost$collections$Stack* param0) {

// line 80
frost$collections$Array** $tmp140 = &param0->contents;
frost$collections$Array* $tmp141 = *$tmp140;
frost$collections$Array$clear($tmp141);
return;

}
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(frost$collections$Stack* param0) {

// line 89
frost$collections$Stack$StackIterator* $tmp142 = (frost$collections$Stack$StackIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Stack$StackIterator$class);
frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT($tmp142, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp142)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
return ((frost$collections$Iterator*) $tmp142);

}
frost$core$Int64 frost$collections$Stack$get_count$R$frost$core$Int64(frost$collections$Stack* param0) {

// line 93
frost$collections$Array** $tmp143 = &param0->contents;
frost$collections$Array* $tmp144 = *$tmp143;
ITable* $tmp145 = ((frost$collections$CollectionView*) $tmp144)->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
frost$core$Int64 $tmp148 = $tmp146(((frost$collections$CollectionView*) $tmp144));
return $tmp148;

}
frost$core$String* frost$collections$Stack$get_asString$R$frost$core$String(frost$collections$Stack* param0) {

// line 98
frost$collections$Array** $tmp149 = &param0->contents;
frost$collections$Array* $tmp150 = *$tmp149;
$fn152 $tmp151 = ($fn152) ((frost$core$Object*) $tmp150)->$class->vtable[0];
frost$core$String* $tmp153 = $tmp151(((frost$core$Object*) $tmp150));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
return $tmp153;

}
void frost$collections$Stack$init(frost$collections$Stack* param0) {

// line 34
frost$collections$Array* $tmp154 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$Array** $tmp155 = &param0->contents;
frost$collections$Array* $tmp156 = *$tmp155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$collections$Array** $tmp157 = &param0->contents;
*$tmp157 = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
return;

}
void frost$collections$Stack$cleanup(frost$collections$Stack* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp158 = &param0->contents;
frost$collections$Array* $tmp159 = *$tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
return;

}

