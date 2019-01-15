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
frost$collections$Stack$class_type frost$collections$Stack$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$_frost$collections$Iterable, { frost$collections$Stack$convert$R$frost$core$String, frost$collections$Stack$cleanup, frost$collections$Stack$push$frost$collections$Stack$T, frost$collections$Stack$pop$R$frost$collections$Stack$T, frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T, frost$collections$Stack$clear, frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim, frost$collections$Stack$get_count$R$frost$core$Int64} };

typedef frost$core$Int64 (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn34)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn49)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn79)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn113)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, -799920337617151128, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, 180433054594552295, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };

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
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T(frost$collections$Stack* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp59 = (frost$core$Int64) {0};
int64_t $tmp60 = param1.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 >= $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp65 = frost$collections$Stack$get_count$R$frost$core$Int64(param0);
int64_t $tmp66 = param1.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 < $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
*(&local0) = $tmp69;
goto block3;
block2:;
*(&local0) = $tmp63;
goto block3;
block3:;
frost$core$Bit $tmp70 = *(&local0);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp72 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s73, $tmp72, &$s74);
abort(); // unreachable
block4:;
// line 64
frost$collections$Array** $tmp75 = &param0->contents;
frost$collections$Array* $tmp76 = *$tmp75;
ITable* $tmp77 = ((frost$collections$CollectionView*) $tmp76)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
frost$core$Int64 $tmp80 = $tmp78(((frost$collections$CollectionView*) $tmp76));
int64_t $tmp81 = $tmp80.value;
int64_t $tmp82 = param1.value;
bool $tmp83 = $tmp81 > $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp86 = (frost$core$Int64) {64};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s87, $tmp86);
abort(); // unreachable
block6:;
// line 65
frost$collections$Array** $tmp88 = &param0->contents;
frost$collections$Array* $tmp89 = *$tmp88;
frost$collections$Array** $tmp90 = &param0->contents;
frost$collections$Array* $tmp91 = *$tmp90;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp91)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp91));
frost$core$Int64 $tmp96 = (frost$core$Int64) {1};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 - $tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {$tmp99};
int64_t $tmp101 = $tmp100.value;
int64_t $tmp102 = param1.value;
int64_t $tmp103 = $tmp101 - $tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {$tmp103};
frost$core$Object* $tmp105 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp89, $tmp104);
frost$core$Frost$ref$frost$core$Object$Q($tmp105);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// unreffing REF($59:frost.collections.Array.T)
return $tmp105;

}
void frost$collections$Stack$clear(frost$collections$Stack* param0) {

// line 72
frost$collections$Array** $tmp106 = &param0->contents;
frost$collections$Array* $tmp107 = *$tmp106;
frost$collections$Array$clear($tmp107);
return;

}
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(frost$collections$Stack* param0) {

// line 81
frost$collections$Stack$StackIterator* $tmp108 = (frost$collections$Stack$StackIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Stack$StackIterator$class);
frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT($tmp108, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp108)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($1:frost.collections.Stack.StackIterator<frost.collections.Stack.T>)
return ((frost$collections$Iterator*) $tmp108);

}
frost$core$Int64 frost$collections$Stack$get_count$R$frost$core$Int64(frost$collections$Stack* param0) {

// line 85
frost$collections$Array** $tmp109 = &param0->contents;
frost$collections$Array* $tmp110 = *$tmp109;
ITable* $tmp111 = ((frost$collections$CollectionView*) $tmp110)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Int64 $tmp114 = $tmp112(((frost$collections$CollectionView*) $tmp110));
return $tmp114;

}
frost$core$String* frost$collections$Stack$convert$R$frost$core$String(frost$collections$Stack* param0) {

// line 90
frost$collections$Array** $tmp115 = &param0->contents;
frost$collections$Array* $tmp116 = *$tmp115;
frost$core$String* $tmp117 = frost$collections$Array$convert$R$frost$core$String($tmp116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($5:frost.core.String)
return $tmp117;

}
void frost$collections$Stack$init(frost$collections$Stack* param0) {

// line 34
frost$collections$Array* $tmp118 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$collections$Array** $tmp119 = &param0->contents;
frost$collections$Array* $tmp120 = *$tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$collections$Array** $tmp121 = &param0->contents;
*$tmp121 = $tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($2:frost.collections.Array<frost.collections.Stack.T>)
return;

}
void frost$collections$Stack$cleanup(frost$collections$Stack* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp122 = &param0->contents;
frost$collections$Array* $tmp123 = *$tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
return;

}

