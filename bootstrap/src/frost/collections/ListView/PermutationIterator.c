#include "frost/collections/ListView/PermutationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim(frost$collections$ListView$PermutationIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PermutationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PermutationIterator$class_type frost$collections$ListView$PermutationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PermutationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PermutationIterator$cleanup, frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim} };

typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn26)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn48)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn62)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn73)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn77)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn82)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn95)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn119)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn137)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn156)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn186)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn212)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn232)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn258)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn287)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 6841416450038168965, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 164, -695016372076835840, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };

void frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0, frost$collections$ListView* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:74
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp2 = &param0->list;
frost$collections$ListView* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$ListView** $tmp4 = &param0->list;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:75
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp6 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Int $tmp9 = $tmp7(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp10 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp11;
$tmp11 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp11->value = $tmp10;
frost$collections$Array$init$frost$core$Int$frost$collections$Array$T($tmp5, $tmp9, ((frost$core$Object*) $tmp11));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Array** $tmp12 = &param0->choices;
frost$collections$Array* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$Array** $tmp14 = &param0->choices;
*$tmp14 = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return;

}
frost$core$Bit frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PermutationIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:80
frost$collections$Array** $tmp15 = &param0->choices;
frost$collections$Array* $tmp16 = *$tmp15;
frost$core$Int $tmp17 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:80:27
frost$core$Int $tmp18 = (frost$core$Int) {0u};
int64_t $tmp19 = $tmp17.value;
int64_t $tmp20 = $tmp18.value;
bool $tmp21 = $tmp19 >= $tmp20;
frost$core$Bit $tmp22 = (frost$core$Bit) {$tmp21};
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block4; else goto block3;
block4:;
ITable* $tmp24 = ((frost$collections$CollectionView*) $tmp16)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[0];
frost$core$Int $tmp27 = $tmp25(((frost$collections$CollectionView*) $tmp16));
int64_t $tmp28 = $tmp17.value;
int64_t $tmp29 = $tmp27.value;
bool $tmp30 = $tmp28 < $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block3:;
frost$core$Int $tmp33 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp36 = &$tmp16->data;
frost$core$Object** $tmp37 = *$tmp36;
frost$core$Int64 $tmp38 = frost$core$Int64$init$frost$core$Int($tmp17);
int64_t $tmp39 = $tmp38.value;
frost$core$Object* $tmp40 = $tmp37[$tmp39];
frost$core$Frost$ref$frost$core$Object$Q($tmp40);
frost$core$Int $tmp41 = (frost$core$Int) {18446744073709551615u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:80:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp42 = ((frost$core$Int$wrapper*) $tmp40)->value.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 == $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
return $tmp45;

}
frost$collections$ListView* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
frost$core$Int local3;
ITable* $tmp46 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Bit $tmp49 = $tmp47(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp50 = $tmp49.value;
bool $tmp51 = !$tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block1; else goto block2;
block2:;
frost$core$Int $tmp54 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:85
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp57 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp58 = &param0->list;
frost$collections$ListView* $tmp59 = *$tmp58;
ITable* $tmp60 = ((frost$collections$CollectionView*) $tmp59)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
frost$core$Int $tmp63 = $tmp61(((frost$collections$CollectionView*) $tmp59));
frost$collections$Array$init$frost$core$Int($tmp57, $tmp63);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$collections$Array* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local0) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:86
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp65 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp66 = &param0->list;
frost$collections$ListView* $tmp67 = *$tmp66;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp65, ((frost$collections$CollectionView*) $tmp67));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$collections$Array* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local1) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:87
frost$collections$Array** $tmp69 = &param0->choices;
frost$collections$Array* $tmp70 = *$tmp69;
ITable* $tmp71 = ((frost$collections$Iterable*) $tmp70)->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
frost$collections$Iterator* $tmp74 = $tmp72(((frost$collections$Iterable*) $tmp70));
goto block4;
block4:;
ITable* $tmp75 = $tmp74->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Bit $tmp78 = $tmp76($tmp74);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block6; else goto block5;
block5:;
ITable* $tmp80 = $tmp74->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[1];
frost$core$Object* $tmp83 = $tmp81($tmp74);
*(&local2) = ((frost$core$Int$wrapper*) $tmp83)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:88
frost$collections$Array* $tmp84 = *(&local0);
frost$collections$Array* $tmp85 = *(&local1);
frost$core$Int $tmp86 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:88:32
frost$core$Int $tmp87 = (frost$core$Int) {0u};
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87.value;
bool $tmp90 = $tmp88 >= $tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block10; else goto block9;
block10:;
ITable* $tmp93 = ((frost$collections$CollectionView*) $tmp85)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Int $tmp96 = $tmp94(((frost$collections$CollectionView*) $tmp85));
int64_t $tmp97 = $tmp86.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 < $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block8; else goto block9;
block9:;
frost$core$Int $tmp102 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, $tmp102, &$s104);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp105 = &$tmp85->data;
frost$core$Object** $tmp106 = *$tmp105;
frost$core$Int64 $tmp107 = frost$core$Int64$init$frost$core$Int($tmp86);
int64_t $tmp108 = $tmp107.value;
frost$core$Object* $tmp109 = $tmp106[$tmp108];
frost$core$Frost$ref$frost$core$Object$Q($tmp109);
frost$collections$Array$add$frost$collections$Array$T($tmp84, $tmp109);
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:89
frost$collections$Array* $tmp110 = *(&local1);
frost$core$Int $tmp111 = *(&local2);
frost$core$Object* $tmp112 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp110, $tmp111);
frost$core$Frost$unref$frost$core$Object$Q($tmp112);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:91
frost$core$Int $tmp113 = (frost$core$Int) {0u};
*(&local3) = $tmp113;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:92
goto block11;
block11:;
frost$core$Int $tmp114 = *(&local3);
frost$collections$Array** $tmp115 = &param0->choices;
frost$collections$Array* $tmp116 = *$tmp115;
ITable* $tmp117 = ((frost$collections$CollectionView*) $tmp116)->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[0];
frost$core$Int $tmp120 = $tmp118(((frost$collections$CollectionView*) $tmp116));
int64_t $tmp121 = $tmp114.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 < $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block14; else goto block13;
block14:;
frost$collections$Array** $tmp126 = &param0->choices;
frost$collections$Array* $tmp127 = *$tmp126;
frost$core$Int $tmp128 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:92:46
frost$core$Int $tmp129 = (frost$core$Int) {0u};
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129.value;
bool $tmp132 = $tmp130 >= $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block18; else goto block17;
block18:;
ITable* $tmp135 = ((frost$collections$CollectionView*) $tmp127)->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp135 = $tmp135->next;
}
$fn137 $tmp136 = $tmp135->methods[0];
frost$core$Int $tmp138 = $tmp136(((frost$collections$CollectionView*) $tmp127));
int64_t $tmp139 = $tmp128.value;
int64_t $tmp140 = $tmp138.value;
bool $tmp141 = $tmp139 < $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block16; else goto block17;
block17:;
frost$core$Int $tmp144 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp147 = &$tmp127->data;
frost$core$Object** $tmp148 = *$tmp147;
frost$core$Int64 $tmp149 = frost$core$Int64$init$frost$core$Int($tmp128);
int64_t $tmp150 = $tmp149.value;
frost$core$Object* $tmp151 = $tmp148[$tmp150];
frost$core$Frost$ref$frost$core$Object$Q($tmp151);
frost$collections$ListView** $tmp152 = &param0->list;
frost$collections$ListView* $tmp153 = *$tmp152;
ITable* $tmp154 = ((frost$collections$CollectionView*) $tmp153)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$core$Int $tmp157 = $tmp155(((frost$collections$CollectionView*) $tmp153));
frost$core$Int $tmp158 = *(&local3);
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159 - $tmp160;
frost$core$Int $tmp162 = (frost$core$Int) {$tmp161};
frost$core$Int $tmp163 = (frost$core$Int) {1u};
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164 - $tmp165;
frost$core$Int $tmp167 = (frost$core$Int) {$tmp166};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:92:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp168 = ((frost$core$Int$wrapper*) $tmp151)->value.value;
int64_t $tmp169 = $tmp167.value;
bool $tmp170 = $tmp168 == $tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
if ($tmp172) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:93
frost$collections$Array** $tmp173 = &param0->choices;
frost$collections$Array* $tmp174 = *$tmp173;
frost$core$Int $tmp175 = *(&local3);
frost$core$Int $tmp176 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp177;
$tmp177 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp177->value = $tmp176;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:93:24
frost$core$Int $tmp178 = (frost$core$Int) {0u};
int64_t $tmp179 = $tmp175.value;
int64_t $tmp180 = $tmp178.value;
bool $tmp181 = $tmp179 >= $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block23; else goto block22;
block23:;
ITable* $tmp184 = ((frost$collections$CollectionView*) $tmp174)->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp184 = $tmp184->next;
}
$fn186 $tmp185 = $tmp184->methods[0];
frost$core$Int $tmp187 = $tmp185(((frost$collections$CollectionView*) $tmp174));
int64_t $tmp188 = $tmp175.value;
int64_t $tmp189 = $tmp187.value;
bool $tmp190 = $tmp188 < $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block21; else goto block22;
block22:;
frost$core$Int $tmp193 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s194, $tmp193, &$s195);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp196 = &$tmp174->data;
frost$core$Object** $tmp197 = *$tmp196;
frost$core$Int64 $tmp198 = frost$core$Int64$init$frost$core$Int($tmp175);
int64_t $tmp199 = $tmp198.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Object* $tmp200 = $tmp197[$tmp199];
frost$core$Frost$unref$frost$core$Object$Q($tmp200);
$tmp197[$tmp199] = ((frost$core$Object*) $tmp177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:94
frost$core$Int $tmp201 = *(&local3);
frost$core$Int $tmp202 = (frost$core$Int) {1u};
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203 + $tmp204;
frost$core$Int $tmp206 = (frost$core$Int) {$tmp205};
*(&local3) = $tmp206;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:96
frost$core$Int $tmp207 = *(&local3);
frost$collections$Array** $tmp208 = &param0->choices;
frost$collections$Array* $tmp209 = *$tmp208;
ITable* $tmp210 = ((frost$collections$CollectionView*) $tmp209)->$class->itable;
while ($tmp210->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp210 = $tmp210->next;
}
$fn212 $tmp211 = $tmp210->methods[0];
frost$core$Int $tmp213 = $tmp211(((frost$collections$CollectionView*) $tmp209));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:96:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp214 = $tmp207.value;
int64_t $tmp215 = $tmp213.value;
bool $tmp216 = $tmp214 == $tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:97
frost$collections$Array** $tmp219 = &param0->choices;
frost$collections$Array* $tmp220 = *$tmp219;
frost$core$Int $tmp221 = (frost$core$Int) {0u};
frost$core$Int $tmp222 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp223;
$tmp223 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp223->value = $tmp222;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:97:24
frost$core$Int $tmp224 = (frost$core$Int) {0u};
int64_t $tmp225 = $tmp221.value;
int64_t $tmp226 = $tmp224.value;
bool $tmp227 = $tmp225 >= $tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block31; else goto block30;
block31:;
ITable* $tmp230 = ((frost$collections$CollectionView*) $tmp220)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$core$Int $tmp233 = $tmp231(((frost$collections$CollectionView*) $tmp220));
int64_t $tmp234 = $tmp221.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 < $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block29; else goto block30;
block30:;
frost$core$Int $tmp239 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s240, $tmp239, &$s241);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp242 = &$tmp220->data;
frost$core$Object** $tmp243 = *$tmp242;
frost$core$Int64 $tmp244 = frost$core$Int64$init$frost$core$Int($tmp221);
int64_t $tmp245 = $tmp244.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Object* $tmp246 = $tmp243[$tmp245];
frost$core$Frost$unref$frost$core$Object$Q($tmp246);
$tmp243[$tmp245] = ((frost$core$Object*) $tmp223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:100
frost$collections$Array** $tmp247 = &param0->choices;
frost$collections$Array* $tmp248 = *$tmp247;
frost$core$Int $tmp249 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:100:24
frost$core$Int $tmp250 = (frost$core$Int) {0u};
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 >= $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block35; else goto block34;
block35:;
ITable* $tmp256 = ((frost$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Int $tmp259 = $tmp257(((frost$collections$CollectionView*) $tmp248));
int64_t $tmp260 = $tmp249.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 < $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block33; else goto block34;
block34:;
frost$core$Int $tmp265 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s266, $tmp265, &$s267);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp268 = &$tmp248->data;
frost$core$Object** $tmp269 = *$tmp268;
frost$core$Int64 $tmp270 = frost$core$Int64$init$frost$core$Int($tmp249);
int64_t $tmp271 = $tmp270.value;
frost$core$Object* $tmp272 = $tmp269[$tmp271];
frost$core$Frost$ref$frost$core$Object$Q($tmp272);
frost$core$Int $tmp273 = (frost$core$Int) {1u};
int64_t $tmp274 = ((frost$core$Int$wrapper*) $tmp272)->value.value;
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274 + $tmp275;
frost$core$Int $tmp277 = (frost$core$Int) {$tmp276};
frost$core$Int$wrapper* $tmp278;
$tmp278 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp278->value = $tmp277;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:100:24
frost$core$Int $tmp279 = (frost$core$Int) {0u};
int64_t $tmp280 = $tmp249.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 >= $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block39; else goto block38;
block39:;
ITable* $tmp285 = ((frost$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
frost$core$Int $tmp288 = $tmp286(((frost$collections$CollectionView*) $tmp248));
int64_t $tmp289 = $tmp249.value;
int64_t $tmp290 = $tmp288.value;
bool $tmp291 = $tmp289 < $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block37; else goto block38;
block38:;
frost$core$Int $tmp294 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, $tmp294, &$s296);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp297 = &$tmp248->data;
frost$core$Object** $tmp298 = *$tmp297;
frost$core$Int64 $tmp299 = frost$core$Int64$init$frost$core$Int($tmp249);
int64_t $tmp300 = $tmp299.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Object* $tmp301 = $tmp298[$tmp300];
frost$core$Frost$unref$frost$core$Object$Q($tmp301);
$tmp298[$tmp300] = ((frost$core$Object*) $tmp278);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q($tmp272);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:102
frost$collections$Array* $tmp302 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp302)));
frost$collections$Array* $tmp303 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp304 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp302);

}
void frost$collections$ListView$PermutationIterator$cleanup(frost$collections$ListView$PermutationIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:68
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp305 = &param0->list;
frost$collections$ListView* $tmp306 = *$tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$collections$Array** $tmp307 = &param0->choices;
frost$collections$Array* $tmp308 = *$tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
return;

}

