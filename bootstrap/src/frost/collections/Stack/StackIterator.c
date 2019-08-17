#include "frost/collections/Stack/StackIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim(frost$collections$Stack$StackIterator* p0) {
    frost$core$Object* result = frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Stack$StackIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit, frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Stack$StackIterator$class_type frost$collections$Stack$StackIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$StackIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Stack$StackIterator$cleanup, frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit, frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim} };

typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn60)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn75)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn94)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 8349981871227951908, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 116, -588509276229923081, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT(frost$collections$Stack$StackIterator* param0, frost$collections$Stack* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:14
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Stack** $tmp4 = &param0->stack;
frost$collections$Stack* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Stack** $tmp6 = &param0->stack;
*$tmp6 = param1;
return;

}
frost$core$Bit frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit(frost$collections$Stack$StackIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:22
frost$core$Int* $tmp7 = &param0->index;
frost$core$Int $tmp8 = *$tmp7;
frost$collections$Stack** $tmp9 = &param0->stack;
frost$collections$Stack* $tmp10 = *$tmp9;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp11 = &$tmp10->contents;
frost$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
int64_t $tmp17 = $tmp8.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 >= $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
return $tmp20;

}
frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(frost$collections$Stack$StackIterator* param0) {

frost$core$Object* local0 = NULL;
ITable* $tmp21 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$core$Bit $tmp24 = $tmp22(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp25 = $tmp24.value;
bool $tmp26 = !$tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block2;
block2:;
frost$core$Int $tmp29 = (frost$core$Int) {26u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:27
frost$collections$Stack** $tmp32 = &param0->stack;
frost$collections$Stack* $tmp33 = *$tmp32;
frost$core$Int* $tmp34 = &param0->index;
frost$core$Int $tmp35 = *$tmp34;
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Stack.frost:27:32
frost$core$Int $tmp36 = (frost$core$Int) {0u};
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 >= $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block6;
block7:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp42 = &$tmp33->contents;
frost$collections$Array* $tmp43 = *$tmp42;
ITable* $tmp44 = ((frost$collections$CollectionView*) $tmp43)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Int $tmp47 = $tmp45(((frost$collections$CollectionView*) $tmp43));
int64_t $tmp48 = $tmp35.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 < $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block5; else goto block6;
block6:;
frost$core$Int $tmp53 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp56 = &$tmp33->contents;
frost$collections$Array* $tmp57 = *$tmp56;
ITable* $tmp58 = ((frost$collections$CollectionView*) $tmp57)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Int $tmp61 = $tmp59(((frost$collections$CollectionView*) $tmp57));
int64_t $tmp62 = $tmp61.value;
int64_t $tmp63 = $tmp35.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block9; else goto block10;
block10:;
frost$core$Int $tmp67 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s68, $tmp67);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp69 = &$tmp33->contents;
frost$collections$Array* $tmp70 = *$tmp69;
frost$collections$Array** $tmp71 = &$tmp33->contents;
frost$collections$Array* $tmp72 = *$tmp71;
ITable* $tmp73 = ((frost$collections$CollectionView*) $tmp72)->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
frost$core$Int $tmp76 = $tmp74(((frost$collections$CollectionView*) $tmp72));
frost$core$Int $tmp77 = (frost$core$Int) {1u};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 - $tmp79;
frost$core$Int $tmp81 = (frost$core$Int) {$tmp80};
int64_t $tmp82 = $tmp81.value;
int64_t $tmp83 = $tmp35.value;
int64_t $tmp84 = $tmp82 - $tmp83;
frost$core$Int $tmp85 = (frost$core$Int) {$tmp84};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp86 = (frost$core$Int) {0u};
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 >= $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block14; else goto block13;
block14:;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp70)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp70));
int64_t $tmp96 = $tmp85.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 < $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block12; else goto block13;
block13:;
frost$core$Int $tmp101 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp104 = &$tmp70->data;
frost$core$Object** $tmp105 = *$tmp104;
frost$core$Int64 $tmp106 = frost$core$Int64$init$frost$core$Int($tmp85);
int64_t $tmp107 = $tmp106.value;
frost$core$Object* $tmp108 = $tmp105[$tmp107];
frost$core$Frost$ref$frost$core$Object$Q($tmp108);
frost$core$Frost$ref$frost$core$Object$Q($tmp108);
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp108);
frost$core$Object* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
*(&local0) = $tmp108;
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:28
frost$core$Int* $tmp110 = &param0->index;
frost$core$Int $tmp111 = *$tmp110;
frost$core$Int $tmp112 = (frost$core$Int) {1u};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113 + $tmp114;
frost$core$Int $tmp116 = (frost$core$Int) {$tmp115};
frost$core$Int* $tmp117 = &param0->index;
*$tmp117 = $tmp116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:29
frost$core$Object* $tmp118 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp118);
frost$core$Object* $tmp119 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp118;

}
void frost$collections$Stack$StackIterator$cleanup(frost$collections$Stack$StackIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:11
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Stack** $tmp120 = &param0->stack;
frost$collections$Stack* $tmp121 = *$tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return;

}






