#include "frost/core/String/UTF8List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Char8.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/String/UTF8Iterator.h"

__attribute__((weak)) frost$core$Object* frost$core$String$UTF8List$$IDX$frost$core$Int64$R$frost$core$Char8$shim(frost$core$String$UTF8List* p0, frost$core$Int64 p1) {
    frost$core$Char8 result = frost$core$String$UTF8List$$IDX$frost$core$Int64$R$frost$core$Char8(p0, p1);

    frost$core$Char8$wrapper* $tmp2;
    $tmp2 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT$shim(frost$core$String$UTF8List* p0) {
    frost$collections$Iterator* result = frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$String$UTF8List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$String$UTF8List$$IDX$frost$core$Int64$R$frost$core$Char8$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$String$UTF8List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$String$UTF8List$_frost$collections$ListView, { frost$core$String$UTF8List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$UTF8List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$String$UTF8List$_frost$collections$CollectionView, { frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT$shim} };

static frost$core$String $s1;
frost$core$String$UTF8List$class_type frost$core$String$UTF8List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF8List$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF8List$cleanup, frost$core$String$UTF8List$$IDX$frost$core$Int64$R$frost$core$Char8$shim, frost$core$String$UTF8List$get_count$R$frost$core$Int64, frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT$shim} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74", 26, 7225881363511303404, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 104, 6455346667787409135, NULL };

void frost$core$String$UTF8List$init$frost$core$String(frost$core$String$UTF8List* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp3 = &param0->str;
frost$core$String* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$String** $tmp5 = &param0->str;
*$tmp5 = param1;
return;

}
frost$core$Char8 frost$core$String$UTF8List$$IDX$frost$core$Int64$R$frost$core$Char8(frost$core$String$UTF8List* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp6 = (frost$core$Int64) {0};
int64_t $tmp7 = param1.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 >= $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block3; else goto block2;
block3:;
ITable* $tmp12 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int64 $tmp15 = $tmp13(((frost$collections$CollectionView*) param0));
int64_t $tmp16 = param1.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {92};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:93
frost$core$String** $tmp24 = &param0->str;
frost$core$String* $tmp25 = *$tmp24;
frost$core$Char8** $tmp26 = &$tmp25->data;
frost$core$Char8* $tmp27 = *$tmp26;
int64_t $tmp28 = param1.value;
frost$core$Char8 $tmp29 = $tmp27[$tmp28];
return $tmp29;

}
frost$core$Int64 frost$core$String$UTF8List$get_count$R$frost$core$Int64(frost$core$String$UTF8List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:98
frost$core$String** $tmp30 = &param0->str;
frost$core$String* $tmp31 = *$tmp30;
frost$core$Int64* $tmp32 = &$tmp31->_length;
frost$core$Int64 $tmp33 = *$tmp32;
return $tmp33;

}
frost$collections$Iterator* frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT(frost$core$String$UTF8List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:103
FROST_ASSERT(32 == sizeof(frost$core$String$UTF8Iterator));
frost$core$String$UTF8Iterator* $tmp34 = (frost$core$String$UTF8Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF8Iterator$class);
frost$core$String** $tmp35 = &param0->str;
frost$core$String* $tmp36 = *$tmp35;
frost$core$String$UTF8Iterator$init$frost$core$String($tmp34, $tmp36);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp34)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
return ((frost$collections$Iterator*) $tmp34);

}
void frost$core$String$UTF8List$cleanup(frost$core$String$UTF8List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:84
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp37 = &param0->str;
frost$core$String* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return;

}

