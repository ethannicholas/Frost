#include "frost/collections/ListView/PermutationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim(frost$collections$ListView$PermutationIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PermutationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PermutationIterator$class_type frost$collections$ListView$PermutationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PermutationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PermutationIterator$cleanup, frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim} };

typedef frost$core$Int64 (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn26)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn47)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn61)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn72)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn76)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn81)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn117)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn135)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn153)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn183)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn208)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn228)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn253)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn281)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 6841416450038168965, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 164, -695016372076835840, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 9162589903746988738, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 9162589903746988738, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 9162589903746988738, NULL };

void frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0, frost$collections$ListView* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp2 = &param0->list;
frost$collections$ListView* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$ListView** $tmp4 = &param0->list;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:73
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp6 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Int64 $tmp9 = $tmp7(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp10 = (frost$core$Int64) {0u};
frost$core$Int64$wrapper* $tmp11;
$tmp11 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp11->value = $tmp10;
frost$collections$Array$init$frost$core$Int64$frost$collections$Array$T($tmp5, $tmp9, ((frost$core$Object*) $tmp11));
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

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:78
frost$collections$Array** $tmp15 = &param0->choices;
frost$collections$Array* $tmp16 = *$tmp15;
frost$core$Int64 $tmp17 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ListView.frost:78:27
frost$core$Int64 $tmp18 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp27 = $tmp25(((frost$collections$CollectionView*) $tmp16));
int64_t $tmp28 = $tmp17.value;
int64_t $tmp29 = $tmp27.value;
bool $tmp30 = $tmp28 < $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp33 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp36 = &$tmp16->data;
frost$core$Object** $tmp37 = *$tmp36;
int64_t $tmp38 = $tmp17.value;
frost$core$Object* $tmp39 = $tmp37[$tmp38];
frost$core$Frost$ref$frost$core$Object$Q($tmp39);
frost$core$Int64 $tmp40 = (frost$core$Int64) {18446744073709551615u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:78:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp41 = ((frost$core$Int64$wrapper*) $tmp39)->value.value;
int64_t $tmp42 = $tmp40.value;
bool $tmp43 = $tmp41 == $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
return $tmp44;

}
frost$collections$ListView* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 local3;
ITable* $tmp45 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Bit $tmp48 = $tmp46(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp49 = $tmp48.value;
bool $tmp50 = !$tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {82u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:83
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp56 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp57 = &param0->list;
frost$collections$ListView* $tmp58 = *$tmp57;
ITable* $tmp59 = ((frost$collections$CollectionView*) $tmp58)->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
frost$core$Int64 $tmp62 = $tmp60(((frost$collections$CollectionView*) $tmp58));
frost$collections$Array$init$frost$core$Int64($tmp56, $tmp62);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$collections$Array* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local0) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:84
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp64 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp65 = &param0->list;
frost$collections$ListView* $tmp66 = *$tmp65;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp64, ((frost$collections$CollectionView*) $tmp66));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$collections$Array* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:85
frost$collections$Array** $tmp68 = &param0->choices;
frost$collections$Array* $tmp69 = *$tmp68;
ITable* $tmp70 = ((frost$collections$Iterable*) $tmp69)->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp70 = $tmp70->next;
}
$fn72 $tmp71 = $tmp70->methods[0];
frost$collections$Iterator* $tmp73 = $tmp71(((frost$collections$Iterable*) $tmp69));
goto block4;
block4:;
ITable* $tmp74 = $tmp73->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[0];
frost$core$Bit $tmp77 = $tmp75($tmp73);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block6; else goto block5;
block5:;
ITable* $tmp79 = $tmp73->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[1];
frost$core$Object* $tmp82 = $tmp80($tmp73);
*(&local2) = ((frost$core$Int64$wrapper*) $tmp82)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:86
frost$collections$Array* $tmp83 = *(&local0);
frost$collections$Array* $tmp84 = *(&local1);
frost$core$Int64 $tmp85 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ListView.frost:86:32
frost$core$Int64 $tmp86 = (frost$core$Int64) {0u};
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 >= $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block10; else goto block9;
block10:;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp84)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp84));
int64_t $tmp96 = $tmp85.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 < $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp104 = &$tmp84->data;
frost$core$Object** $tmp105 = *$tmp104;
int64_t $tmp106 = $tmp85.value;
frost$core$Object* $tmp107 = $tmp105[$tmp106];
frost$core$Frost$ref$frost$core$Object$Q($tmp107);
frost$collections$Array$add$frost$collections$Array$T($tmp83, $tmp107);
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:87
frost$collections$Array* $tmp108 = *(&local1);
frost$core$Int64 $tmp109 = *(&local2);
frost$core$Object* $tmp110 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp108, $tmp109);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
frost$core$Frost$unref$frost$core$Object$Q($tmp82);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:89
frost$core$Int64 $tmp111 = (frost$core$Int64) {0u};
*(&local3) = $tmp111;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:90
goto block11;
block11:;
frost$core$Int64 $tmp112 = *(&local3);
frost$collections$Array** $tmp113 = &param0->choices;
frost$collections$Array* $tmp114 = *$tmp113;
ITable* $tmp115 = ((frost$collections$CollectionView*) $tmp114)->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
frost$core$Int64 $tmp118 = $tmp116(((frost$collections$CollectionView*) $tmp114));
int64_t $tmp119 = $tmp112.value;
int64_t $tmp120 = $tmp118.value;
bool $tmp121 = $tmp119 < $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block14; else goto block13;
block14:;
frost$collections$Array** $tmp124 = &param0->choices;
frost$collections$Array* $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ListView.frost:90:46
frost$core$Int64 $tmp127 = (frost$core$Int64) {0u};
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 >= $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block18; else goto block17;
block18:;
ITable* $tmp133 = ((frost$collections$CollectionView*) $tmp125)->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[0];
frost$core$Int64 $tmp136 = $tmp134(((frost$collections$CollectionView*) $tmp125));
int64_t $tmp137 = $tmp126.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 < $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp142 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s143, $tmp142, &$s144);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp145 = &$tmp125->data;
frost$core$Object** $tmp146 = *$tmp145;
int64_t $tmp147 = $tmp126.value;
frost$core$Object* $tmp148 = $tmp146[$tmp147];
frost$core$Frost$ref$frost$core$Object$Q($tmp148);
frost$collections$ListView** $tmp149 = &param0->list;
frost$collections$ListView* $tmp150 = *$tmp149;
ITable* $tmp151 = ((frost$collections$CollectionView*) $tmp150)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Int64 $tmp154 = $tmp152(((frost$collections$CollectionView*) $tmp150));
frost$core$Int64 $tmp155 = *(&local3);
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156 - $tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {$tmp158};
frost$core$Int64 $tmp160 = (frost$core$Int64) {1u};
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 - $tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:90:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp165 = ((frost$core$Int64$wrapper*) $tmp148)->value.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp148);
if ($tmp169) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:91
frost$collections$Array** $tmp170 = &param0->choices;
frost$collections$Array* $tmp171 = *$tmp170;
frost$core$Int64 $tmp172 = *(&local3);
frost$core$Int64 $tmp173 = (frost$core$Int64) {0u};
frost$core$Int64$wrapper* $tmp174;
$tmp174 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp174->value = $tmp173;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from ListView.frost:91:24
frost$core$Int64 $tmp175 = (frost$core$Int64) {0u};
int64_t $tmp176 = $tmp172.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 >= $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block23; else goto block22;
block23:;
ITable* $tmp181 = ((frost$collections$CollectionView*) $tmp171)->$class->itable;
while ($tmp181->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp181 = $tmp181->next;
}
$fn183 $tmp182 = $tmp181->methods[0];
frost$core$Int64 $tmp184 = $tmp182(((frost$collections$CollectionView*) $tmp171));
int64_t $tmp185 = $tmp172.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 < $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s191, $tmp190, &$s192);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp193 = &$tmp171->data;
frost$core$Object** $tmp194 = *$tmp193;
int64_t $tmp195 = $tmp172.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Object* $tmp196 = $tmp194[$tmp195];
frost$core$Frost$unref$frost$core$Object$Q($tmp196);
$tmp194[$tmp195] = ((frost$core$Object*) $tmp174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:92
frost$core$Int64 $tmp197 = *(&local3);
frost$core$Int64 $tmp198 = (frost$core$Int64) {1u};
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199 + $tmp200;
frost$core$Int64 $tmp202 = (frost$core$Int64) {$tmp201};
*(&local3) = $tmp202;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:94
frost$core$Int64 $tmp203 = *(&local3);
frost$collections$Array** $tmp204 = &param0->choices;
frost$collections$Array* $tmp205 = *$tmp204;
ITable* $tmp206 = ((frost$collections$CollectionView*) $tmp205)->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
frost$core$Int64 $tmp209 = $tmp207(((frost$collections$CollectionView*) $tmp205));
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:94:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp210 = $tmp203.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 == $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:95
frost$collections$Array** $tmp215 = &param0->choices;
frost$collections$Array* $tmp216 = *$tmp215;
frost$core$Int64 $tmp217 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp218 = (frost$core$Int64) {18446744073709551615u};
frost$core$Int64$wrapper* $tmp219;
$tmp219 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp219->value = $tmp218;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from ListView.frost:95:24
frost$core$Int64 $tmp220 = (frost$core$Int64) {0u};
int64_t $tmp221 = $tmp217.value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 >= $tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block31; else goto block30;
block31:;
ITable* $tmp226 = ((frost$collections$CollectionView*) $tmp216)->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
frost$core$Int64 $tmp229 = $tmp227(((frost$collections$CollectionView*) $tmp216));
int64_t $tmp230 = $tmp217.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 < $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp235 = (frost$core$Int64) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s236, $tmp235, &$s237);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp238 = &$tmp216->data;
frost$core$Object** $tmp239 = *$tmp238;
int64_t $tmp240 = $tmp217.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Object* $tmp241 = $tmp239[$tmp240];
frost$core$Frost$unref$frost$core$Object$Q($tmp241);
$tmp239[$tmp240] = ((frost$core$Object*) $tmp219);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:98
frost$collections$Array** $tmp242 = &param0->choices;
frost$collections$Array* $tmp243 = *$tmp242;
frost$core$Int64 $tmp244 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ListView.frost:98:24
frost$core$Int64 $tmp245 = (frost$core$Int64) {0u};
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245.value;
bool $tmp248 = $tmp246 >= $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block35; else goto block34;
block35:;
ITable* $tmp251 = ((frost$collections$CollectionView*) $tmp243)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Int64 $tmp254 = $tmp252(((frost$collections$CollectionView*) $tmp243));
int64_t $tmp255 = $tmp244.value;
int64_t $tmp256 = $tmp254.value;
bool $tmp257 = $tmp255 < $tmp256;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp263 = &$tmp243->data;
frost$core$Object** $tmp264 = *$tmp263;
int64_t $tmp265 = $tmp244.value;
frost$core$Object* $tmp266 = $tmp264[$tmp265];
frost$core$Frost$ref$frost$core$Object$Q($tmp266);
frost$core$Int64 $tmp267 = (frost$core$Int64) {1u};
int64_t $tmp268 = ((frost$core$Int64$wrapper*) $tmp266)->value.value;
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268 + $tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {$tmp270};
frost$core$Int64$wrapper* $tmp272;
$tmp272 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp272->value = $tmp271;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from ListView.frost:98:24
frost$core$Int64 $tmp273 = (frost$core$Int64) {0u};
int64_t $tmp274 = $tmp244.value;
int64_t $tmp275 = $tmp273.value;
bool $tmp276 = $tmp274 >= $tmp275;
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block39; else goto block38;
block39:;
ITable* $tmp279 = ((frost$collections$CollectionView*) $tmp243)->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$core$Int64 $tmp282 = $tmp280(((frost$collections$CollectionView*) $tmp243));
int64_t $tmp283 = $tmp244.value;
int64_t $tmp284 = $tmp282.value;
bool $tmp285 = $tmp283 < $tmp284;
frost$core$Bit $tmp286 = (frost$core$Bit) {$tmp285};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp288 = (frost$core$Int64) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s289, $tmp288, &$s290);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp291 = &$tmp243->data;
frost$core$Object** $tmp292 = *$tmp291;
int64_t $tmp293 = $tmp244.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Object* $tmp294 = $tmp292[$tmp293];
frost$core$Frost$unref$frost$core$Object$Q($tmp294);
$tmp292[$tmp293] = ((frost$core$Object*) $tmp272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q($tmp266);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:100
frost$collections$Array* $tmp295 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp295)));
frost$collections$Array* $tmp296 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp295);

}
void frost$collections$ListView$PermutationIterator$cleanup(frost$collections$ListView$PermutationIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:66
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp298 = &param0->list;
frost$collections$ListView* $tmp299 = *$tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$collections$Array** $tmp300 = &param0->choices;
frost$collections$Array* $tmp301 = *$tmp300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
return;

}

