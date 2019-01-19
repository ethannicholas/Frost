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
typedef frost$core$Int64 (*$fn114)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn129)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn148)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn153)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, -799920337617151128, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, 180433054594552295, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };

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
// unreffing REF($45:frost.collections.Array.T)
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
// unreffing REF($73:frost.collections.Array.T)
// line 55
frost$core$Object* $tmp57 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp57);
frost$core$Object* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
// unreffing result
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
// unreffing REF($20:frost.collections.Array.T)
return $tmp93;

}
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp94 = (frost$core$Int64) {0};
int64_t $tmp95 = param1.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 >= $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp100 = frost$collections$Stack$get_count$R$frost$core$Int64(param0);
int64_t $tmp101 = param1.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 < $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
*(&local0) = $tmp104;
goto block3;
block2:;
*(&local0) = $tmp98;
goto block3;
block3:;
frost$core$Bit $tmp105 = *(&local0);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {71};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s108, $tmp107, &$s109);
abort(); // unreachable
block4:;
// line 72
frost$collections$Array** $tmp110 = &param0->contents;
frost$collections$Array* $tmp111 = *$tmp110;
ITable* $tmp112 = ((frost$collections$CollectionView*) $tmp111)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$core$Int64 $tmp115 = $tmp113(((frost$collections$CollectionView*) $tmp111));
int64_t $tmp116 = $tmp115.value;
int64_t $tmp117 = param1.value;
bool $tmp118 = $tmp116 > $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s122, $tmp121);
abort(); // unreachable
block6:;
// line 73
frost$collections$Array** $tmp123 = &param0->contents;
frost$collections$Array* $tmp124 = *$tmp123;
frost$collections$Array** $tmp125 = &param0->contents;
frost$collections$Array* $tmp126 = *$tmp125;
ITable* $tmp127 = ((frost$collections$CollectionView*) $tmp126)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Int64 $tmp130 = $tmp128(((frost$collections$CollectionView*) $tmp126));
frost$core$Int64 $tmp131 = (frost$core$Int64) {1};
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131.value;
int64_t $tmp134 = $tmp132 - $tmp133;
frost$core$Int64 $tmp135 = (frost$core$Int64) {$tmp134};
int64_t $tmp136 = $tmp135.value;
int64_t $tmp137 = param1.value;
int64_t $tmp138 = $tmp136 - $tmp137;
frost$core$Int64 $tmp139 = (frost$core$Int64) {$tmp138};
frost$core$Object* $tmp140 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp124, $tmp139);
frost$core$Frost$ref$frost$core$Object$Q($tmp140);
frost$core$Frost$unref$frost$core$Object$Q($tmp140);
// unreffing REF($59:frost.collections.Array.T)
return $tmp140;

}
void frost$collections$Stack$clear(frost$collections$Stack* param0) {

// line 80
frost$collections$Array** $tmp141 = &param0->contents;
frost$collections$Array* $tmp142 = *$tmp141;
frost$collections$Array$clear($tmp142);
return;

}
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(frost$collections$Stack* param0) {

// line 89
frost$collections$Stack$StackIterator* $tmp143 = (frost$collections$Stack$StackIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Stack$StackIterator$class);
frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT($tmp143, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($1:frost.collections.Stack.StackIterator<frost.collections.Stack.T>)
return ((frost$collections$Iterator*) $tmp143);

}
frost$core$Int64 frost$collections$Stack$get_count$R$frost$core$Int64(frost$collections$Stack* param0) {

// line 93
frost$collections$Array** $tmp144 = &param0->contents;
frost$collections$Array* $tmp145 = *$tmp144;
ITable* $tmp146 = ((frost$collections$CollectionView*) $tmp145)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Int64 $tmp149 = $tmp147(((frost$collections$CollectionView*) $tmp145));
return $tmp149;

}
frost$core$String* frost$collections$Stack$get_asString$R$frost$core$String(frost$collections$Stack* param0) {

// line 98
frost$collections$Array** $tmp150 = &param0->contents;
frost$collections$Array* $tmp151 = *$tmp150;
$fn153 $tmp152 = ($fn153) ((frost$core$Object*) $tmp151)->$class->vtable[0];
frost$core$String* $tmp154 = $tmp152(((frost$core$Object*) $tmp151));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing REF($6:frost.core.String)
return $tmp154;

}
void frost$collections$Stack$init(frost$collections$Stack* param0) {

// line 34
frost$collections$Array* $tmp155 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$collections$Array** $tmp156 = &param0->contents;
frost$collections$Array* $tmp157 = *$tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$collections$Array** $tmp158 = &param0->contents;
*$tmp158 = $tmp155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($2:frost.collections.Array<frost.collections.Stack.T>)
return;

}
void frost$collections$Stack$cleanup(frost$collections$Stack* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp159 = &param0->contents;
frost$collections$Array* $tmp160 = *$tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
return;

}

