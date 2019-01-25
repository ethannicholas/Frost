#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/ListView/ListIterator.h"
#include "frost/collections/List.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$ListView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn51)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn65)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn126)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn164)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn180)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn245)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn267)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn287)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn310)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn338)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn358)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn369)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn377)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn381)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn386)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn395)(frost$core$Object*);
typedef frost$core$Bit (*$fn397)(frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn410)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn414)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn419)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn428)(frost$core$Object*);
typedef frost$core$Bit (*$fn430)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn441)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn445)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn455)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn461)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn485)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn490)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn497)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn499)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn526)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn530)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn540)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn546)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn570)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn575)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn582)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn584)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn616)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 4907195926384919541, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -4663425639358462293, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, -1046591025602014473, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 317, -5691853660146369113, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x28\x6f\x74\x68\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x3e\x2c\x20\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x55\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x63\x6f\x6d\x62\x69\x6e\x65\x2e\x56\x3e", 316, 3269539729494931284, NULL };

frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
frost$core$Bit local7;
frost$core$Bit local8;
frost$core$Int64 local9;
frost$core$Int64 local10;
frost$core$Object** local11;
frost$core$Int64 local12;
frost$core$Int64 $tmp2 = param1.min;
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 >= $tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
frost$core$Bit $tmp9 = param1.inclusive;
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block5;
block4:;
frost$core$Int64 $tmp11 = param1.min;
ITable* $tmp12 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int64 $tmp15 = $tmp13(((frost$collections$CollectionView*) param0));
int64_t $tmp16 = $tmp11.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
*(&local4) = $tmp19;
goto block6;
block5:;
*(&local4) = $tmp9;
goto block6;
block6:;
frost$core$Bit $tmp20 = *(&local4);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
*(&local3) = $tmp20;
goto block9;
block8:;
frost$core$Bit $tmp22 = param1.inclusive;
frost$core$Bit $tmp23 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp25 = param1.min;
ITable* $tmp26 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
frost$core$Int64 $tmp29 = $tmp27(((frost$collections$CollectionView*) param0));
int64_t $tmp30 = $tmp25.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 <= $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
*(&local5) = $tmp33;
goto block12;
block11:;
*(&local5) = $tmp23;
goto block12;
block12:;
frost$core$Bit $tmp34 = *(&local5);
*(&local3) = $tmp34;
goto block9;
block9:;
frost$core$Bit $tmp35 = *(&local3);
*(&local2) = $tmp35;
goto block3;
block2:;
*(&local2) = $tmp7;
goto block3;
block3:;
frost$core$Bit $tmp36 = *(&local2);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block13; else goto block14;
block13:;
frost$core$Int64 $tmp38 = param1.max;
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 >= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
*(&local1) = $tmp43;
goto block15;
block14:;
*(&local1) = $tmp36;
goto block15;
block15:;
frost$core$Bit $tmp44 = *(&local1);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block16; else goto block17;
block16:;
frost$core$Bit $tmp46 = param1.inclusive;
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block19; else goto block20;
block19:;
frost$core$Int64 $tmp48 = param1.max;
ITable* $tmp49 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
frost$core$Int64 $tmp52 = $tmp50(((frost$collections$CollectionView*) param0));
int64_t $tmp53 = $tmp48.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 < $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
*(&local7) = $tmp56;
goto block21;
block20:;
*(&local7) = $tmp46;
goto block21;
block21:;
frost$core$Bit $tmp57 = *(&local7);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block22; else goto block23;
block22:;
*(&local6) = $tmp57;
goto block24;
block23:;
frost$core$Bit $tmp59 = param1.inclusive;
frost$core$Bit $tmp60 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block25; else goto block26;
block25:;
frost$core$Int64 $tmp62 = param1.max;
ITable* $tmp63 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
frost$core$Int64 $tmp66 = $tmp64(((frost$collections$CollectionView*) param0));
int64_t $tmp67 = $tmp62.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 <= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
*(&local8) = $tmp70;
goto block27;
block26:;
*(&local8) = $tmp60;
goto block27;
block27:;
frost$core$Bit $tmp71 = *(&local8);
*(&local6) = $tmp71;
goto block24;
block24:;
frost$core$Bit $tmp72 = *(&local6);
*(&local0) = $tmp72;
goto block18;
block17:;
*(&local0) = $tmp44;
goto block18;
block18:;
frost$core$Bit $tmp73 = *(&local0);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {52};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block28:;
// line 53
frost$core$Int64 $tmp78 = param1.max;
*(&local9) = $tmp78;
// line 54
frost$core$Bit $tmp79 = param1.inclusive;
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block30; else goto block31;
block30:;
// line 55
frost$core$Int64 $tmp81 = *(&local9);
frost$core$Int64 $tmp82 = (frost$core$Int64) {1};
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83 + $tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
*(&local9) = $tmp86;
goto block31;
block31:;
// line 57
frost$core$Int64 $tmp87 = *(&local9);
frost$core$Int64 $tmp88 = param1.min;
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
*(&local10) = $tmp92;
// line 58
frost$core$Int64 $tmp93 = *(&local10);
int64_t $tmp94 = $tmp93.value;
frost$core$Object** $tmp95 = ((frost$core$Object**) frostAlloc($tmp94 * 8));
*(&local11) = $tmp95;
// line 59
frost$core$Int64 $tmp96 = (frost$core$Int64) {0};
frost$core$Int64 $tmp97 = *(&local10);
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp99 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp96, $tmp97, $tmp98);
frost$core$Int64 $tmp100 = $tmp99.min;
*(&local12) = $tmp100;
frost$core$Int64 $tmp101 = $tmp99.max;
frost$core$Bit $tmp102 = $tmp99.inclusive;
bool $tmp103 = $tmp102.value;
frost$core$Int64 $tmp104 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp105 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp104);
if ($tmp103) goto block35; else goto block36;
block35:;
int64_t $tmp106 = $tmp100.value;
int64_t $tmp107 = $tmp101.value;
bool $tmp108 = $tmp106 <= $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block32; else goto block33;
block36:;
int64_t $tmp111 = $tmp100.value;
int64_t $tmp112 = $tmp101.value;
bool $tmp113 = $tmp111 < $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block32; else goto block33;
block32:;
// line 60
frost$core$Object** $tmp116 = *(&local11);
frost$core$Int64 $tmp117 = *(&local12);
frost$core$Int64 $tmp118 = param1.min;
frost$core$Int64 $tmp119 = *(&local12);
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 + $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {$tmp122};
ITable* $tmp124 = param0->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Object* $tmp127 = $tmp125(param0, $tmp123);
int64_t $tmp128 = $tmp117.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp127);
frost$core$Object* $tmp129 = $tmp116[$tmp128];
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
$tmp116[$tmp128] = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
goto block34;
block34:;
frost$core$Int64 $tmp130 = *(&local12);
int64_t $tmp131 = $tmp101.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 - $tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
frost$core$UInt64 $tmp135 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp134);
if ($tmp103) goto block38; else goto block39;
block38:;
uint64_t $tmp136 = $tmp135.value;
uint64_t $tmp137 = $tmp105.value;
bool $tmp138 = $tmp136 >= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block37; else goto block33;
block39:;
uint64_t $tmp141 = $tmp135.value;
uint64_t $tmp142 = $tmp105.value;
bool $tmp143 = $tmp141 > $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block37; else goto block33;
block37:;
int64_t $tmp146 = $tmp130.value;
int64_t $tmp147 = $tmp104.value;
int64_t $tmp148 = $tmp146 + $tmp147;
frost$core$Int64 $tmp149 = (frost$core$Int64) {$tmp148};
*(&local12) = $tmp149;
goto block32;
block33:;
// line 62
frost$collections$Array* $tmp150 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Object** $tmp151 = *(&local11);
frost$core$Int64 $tmp152 = *(&local10);
frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int64($tmp150, $tmp151, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp150)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
return ((frost$collections$ListView*) $tmp150);

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 76
// line 77
frost$core$Int64$nullable $tmp153 = param1.min;
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153.nonnull);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block3;
block1:;
// line 78
frost$core$Int64$nullable $tmp156 = param1.min;
*(&local0) = ((frost$core$Int64) $tmp156.value);
goto block2;
block3:;
// line 1
// line 81
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
*(&local0) = $tmp157;
goto block2;
block2:;
// line 84
// line 85
frost$core$Int64$nullable $tmp158 = param1.max;
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit($tmp158.nonnull);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block4; else goto block6;
block4:;
// line 86
frost$core$Int64$nullable $tmp161 = param1.max;
*(&local1) = ((frost$core$Int64) $tmp161.value);
goto block5;
block6:;
// line 1
// line 89
ITable* $tmp162 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
frost$core$Int64 $tmp165 = $tmp163(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp165;
// line 90
frost$core$Bit $tmp166 = param1.inclusive;
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block7; else goto block8;
block7:;
// line 91
frost$core$Int64 $tmp168 = *(&local1);
frost$core$Int64 $tmp169 = (frost$core$Int64) {1};
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170 - $tmp171;
frost$core$Int64 $tmp173 = (frost$core$Int64) {$tmp172};
*(&local1) = $tmp173;
goto block8;
block8:;
goto block5;
block5:;
// line 94
frost$core$Int64 $tmp174 = *(&local0);
frost$core$Int64 $tmp175 = *(&local1);
frost$core$Bit $tmp176 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp177 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp174, $tmp175, $tmp176);
ITable* $tmp178 = param0->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
frost$collections$ListView* $tmp181 = $tmp179(param0, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
return $tmp181;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param0, frost$core$Int64 param1) {

// line 100
frost$core$Int64$nullable $tmp182 = param0.start;
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit($tmp182.nonnull);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block1:;
// line 101
frost$core$Int64$nullable $tmp185 = param0.start;
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
int64_t $tmp187 = ((frost$core$Int64) $tmp185.value).value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 < $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block3; else goto block4;
block3:;
// line 102
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit(false);
return $tmp192;
block4:;
// line 104
frost$core$Bit $tmp193 = param0.inclusive;
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block7; else goto block6;
block7:;
frost$core$Int64$nullable $tmp195 = param0.start;
int64_t $tmp196 = ((frost$core$Int64) $tmp195.value).value;
int64_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 >= $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block5; else goto block6;
block5:;
// line 105
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit(false);
return $tmp201;
block6:;
// line 107
frost$core$Bit $tmp202 = param0.inclusive;
frost$core$Bit $tmp203 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block10; else goto block9;
block10:;
frost$core$Int64$nullable $tmp205 = param0.start;
int64_t $tmp206 = ((frost$core$Int64) $tmp205.value).value;
int64_t $tmp207 = param1.value;
bool $tmp208 = $tmp206 > $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block8; else goto block9;
block8:;
// line 108
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit(false);
return $tmp211;
block9:;
goto block2;
block2:;
// line 111
frost$core$Int64$nullable $tmp212 = param0.end;
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212.nonnull);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block11; else goto block12;
block11:;
// line 112
frost$core$Int64$nullable $tmp215 = param0.end;
frost$core$Int64 $tmp216 = (frost$core$Int64) {0};
int64_t $tmp217 = ((frost$core$Int64) $tmp215.value).value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 < $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block13; else goto block14;
block13:;
// line 113
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit(false);
return $tmp222;
block14:;
// line 115
frost$core$Bit $tmp223 = param0.inclusive;
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block17; else goto block16;
block17:;
frost$core$Int64$nullable $tmp225 = param0.end;
int64_t $tmp226 = ((frost$core$Int64) $tmp225.value).value;
int64_t $tmp227 = param1.value;
bool $tmp228 = $tmp226 >= $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block15; else goto block16;
block15:;
// line 116
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit(false);
return $tmp231;
block16:;
// line 118
frost$core$Bit $tmp232 = param0.inclusive;
frost$core$Bit $tmp233 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block20; else goto block19;
block20:;
frost$core$Int64$nullable $tmp235 = param0.end;
int64_t $tmp236 = ((frost$core$Int64) $tmp235.value).value;
int64_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 > $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block18; else goto block19;
block18:;
// line 119
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit(false);
return $tmp241;
block19:;
goto block12;
block12:;
// line 122
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit(true);
return $tmp242;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$collections$Array* local3 = NULL;
ITable* $tmp243 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
frost$core$Int64 $tmp246 = $tmp244(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp247 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(param1, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp249 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s250, $tmp249, &$s251);
abort(); // unreachable
block1:;
// line 134
frost$core$Int64 $tmp252 = param1.step;
*(&local0) = $tmp252;
// line 136
// line 137
frost$core$Int64$nullable $tmp253 = param1.start;
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253.nonnull);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block3; else goto block5;
block3:;
// line 138
frost$core$Int64$nullable $tmp256 = param1.start;
*(&local1) = ((frost$core$Int64) $tmp256.value);
goto block4;
block5:;
// line 140
frost$core$Int64 $tmp257 = *(&local0);
frost$core$Int64 $tmp258 = (frost$core$Int64) {0};
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 > $tmp260;
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block6; else goto block8;
block6:;
// line 141
frost$core$Int64 $tmp264 = (frost$core$Int64) {0};
*(&local1) = $tmp264;
goto block7;
block8:;
// line 1
// line 144
ITable* $tmp265 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Int64 $tmp268 = $tmp266(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp269 = (frost$core$Int64) {1};
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270 - $tmp271;
frost$core$Int64 $tmp273 = (frost$core$Int64) {$tmp272};
*(&local1) = $tmp273;
goto block7;
block7:;
goto block4;
block4:;
// line 147
// line 148
frost$core$Int64$nullable $tmp274 = param1.end;
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274.nonnull);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block9; else goto block11;
block9:;
// line 149
frost$core$Int64$nullable $tmp277 = param1.end;
*(&local2) = ((frost$core$Int64) $tmp277.value);
goto block10;
block11:;
// line 151
frost$core$Int64 $tmp278 = *(&local0);
frost$core$Int64 $tmp279 = (frost$core$Int64) {0};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 > $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block12; else goto block14;
block12:;
// line 152
ITable* $tmp285 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
frost$core$Int64 $tmp288 = $tmp286(((frost$collections$CollectionView*) param0));
*(&local2) = $tmp288;
goto block13;
block14:;
// line 1
// line 155
frost$core$Int64 $tmp289 = (frost$core$Int64) {0};
*(&local2) = $tmp289;
goto block13;
block13:;
goto block10;
block10:;
// line 158
frost$collections$Array* $tmp290 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp290);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$collections$Array* $tmp291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local3) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// line 159
frost$core$Int64 $tmp292 = param1.step;
frost$core$Int64 $tmp293 = (frost$core$Int64) {0};
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293.value;
bool $tmp296 = $tmp294 > $tmp295;
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block15; else goto block17;
block15:;
// line 160
goto block18;
block18:;
frost$core$Int64 $tmp299 = *(&local1);
frost$core$Int64 $tmp300 = *(&local2);
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300.value;
bool $tmp303 = $tmp301 < $tmp302;
frost$core$Bit $tmp304 = (frost$core$Bit) {$tmp303};
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block19; else goto block20;
block19:;
// line 161
frost$collections$Array* $tmp306 = *(&local3);
frost$core$Int64 $tmp307 = *(&local1);
ITable* $tmp308 = param0->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp308 = $tmp308->next;
}
$fn310 $tmp309 = $tmp308->methods[0];
frost$core$Object* $tmp311 = $tmp309(param0, $tmp307);
frost$collections$Array$add$frost$collections$Array$T($tmp306, $tmp311);
frost$core$Frost$unref$frost$core$Object$Q($tmp311);
// line 162
frost$core$Int64 $tmp312 = *(&local1);
frost$core$Int64 $tmp313 = *(&local0);
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314 + $tmp315;
frost$core$Int64 $tmp317 = (frost$core$Int64) {$tmp316};
*(&local1) = $tmp317;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 166
frost$core$Int64 $tmp318 = param1.step;
frost$core$Int64 $tmp319 = (frost$core$Int64) {0};
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319.value;
bool $tmp322 = $tmp320 < $tmp321;
frost$core$Bit $tmp323 = (frost$core$Bit) {$tmp322};
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp325 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s326, $tmp325);
abort(); // unreachable
block21:;
// line 167
goto block23;
block23:;
frost$core$Int64 $tmp327 = *(&local1);
frost$core$Int64 $tmp328 = *(&local2);
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328.value;
bool $tmp331 = $tmp329 > $tmp330;
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block24; else goto block25;
block24:;
// line 168
frost$collections$Array* $tmp334 = *(&local3);
frost$core$Int64 $tmp335 = *(&local1);
ITable* $tmp336 = param0->$class->itable;
while ($tmp336->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp336 = $tmp336->next;
}
$fn338 $tmp337 = $tmp336->methods[0];
frost$core$Object* $tmp339 = $tmp337(param0, $tmp335);
frost$collections$Array$add$frost$collections$Array$T($tmp334, $tmp339);
frost$core$Frost$unref$frost$core$Object$Q($tmp339);
// line 169
frost$core$Int64 $tmp340 = *(&local1);
frost$core$Int64 $tmp341 = *(&local0);
int64_t $tmp342 = $tmp340.value;
int64_t $tmp343 = $tmp341.value;
int64_t $tmp344 = $tmp342 + $tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {$tmp344};
*(&local1) = $tmp345;
goto block23;
block25:;
goto block16;
block16:;
// line 172
frost$core$Bit $tmp346 = param1.inclusive;
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block29; else goto block30;
block30:;
frost$core$Int64$nullable $tmp348 = param1.end;
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit(!$tmp348.nonnull);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block29; else goto block27;
block29:;
frost$core$Int64 $tmp351 = *(&local1);
frost$core$Int64 $tmp352 = *(&local2);
frost$core$Bit $tmp353 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp351, $tmp352);
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block28; else goto block27;
block28:;
frost$core$Int64 $tmp355 = *(&local2);
ITable* $tmp356 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp356->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp356 = $tmp356->next;
}
$fn358 $tmp357 = $tmp356->methods[0];
frost$core$Int64 $tmp359 = $tmp357(((frost$collections$CollectionView*) param0));
int64_t $tmp360 = $tmp355.value;
int64_t $tmp361 = $tmp359.value;
bool $tmp362 = $tmp360 < $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block26; else goto block27;
block26:;
// line 173
frost$collections$Array* $tmp365 = *(&local3);
frost$core$Int64 $tmp366 = *(&local1);
ITable* $tmp367 = param0->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$core$Object* $tmp370 = $tmp368(param0, $tmp366);
frost$collections$Array$add$frost$collections$Array$T($tmp365, $tmp370);
frost$core$Frost$unref$frost$core$Object$Q($tmp370);
goto block27;
block27:;
// line 175
frost$collections$Array* $tmp371 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp371)));
frost$collections$Array* $tmp372 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp371);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// line 186
frost$collections$Array* $tmp373 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp373);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$collections$Array* $tmp374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local0) = $tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// line 187
ITable* $tmp375 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[0];
frost$collections$Iterator* $tmp378 = $tmp376(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp379 = $tmp378->$class->itable;
while ($tmp379->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp379 = $tmp379->next;
}
$fn381 $tmp380 = $tmp379->methods[0];
frost$core$Bit $tmp382 = $tmp380($tmp378);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp384 = $tmp378->$class->itable;
while ($tmp384->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp384 = $tmp384->next;
}
$fn386 $tmp385 = $tmp384->methods[1];
frost$core$Object* $tmp387 = $tmp385($tmp378);
frost$core$Frost$ref$frost$core$Object$Q($tmp387);
frost$core$Object* $tmp388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp388);
*(&local1) = $tmp387;
// line 188
frost$core$Object* $tmp389 = *(&local1);
frost$core$Int8** $tmp390 = &param1->pointer;
frost$core$Int8* $tmp391 = *$tmp390;
frost$core$Object** $tmp392 = &param1->target;
frost$core$Object* $tmp393 = *$tmp392;
bool $tmp394 = $tmp393 != ((frost$core$Object*) NULL);
if ($tmp394) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp396 = (($fn395) $tmp391)($tmp389);
*(&local2) = $tmp396;
goto block8;
block6:;
frost$core$Bit $tmp398 = (($fn397) $tmp391)($tmp393, $tmp389);
*(&local2) = $tmp398;
goto block8;
block8:;
frost$core$Bit $tmp399 = *(&local2);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block4; else goto block5;
block4:;
// line 189
frost$collections$Array* $tmp401 = *(&local0);
frost$core$Object* $tmp402 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp401, $tmp402);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp387);
frost$core$Object* $tmp403 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp403);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// line 192
frost$collections$Array* $tmp404 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp404)));
frost$collections$Array* $tmp405 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp404);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// line 198
frost$collections$Array* $tmp406 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp406);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$collections$Array* $tmp407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local0) = $tmp406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// line 199
ITable* $tmp408 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$collections$Iterator* $tmp411 = $tmp409(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp412 = $tmp411->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
frost$core$Bit $tmp415 = $tmp413($tmp411);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp417 = $tmp411->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[1];
frost$core$Object* $tmp420 = $tmp418($tmp411);
frost$core$Frost$ref$frost$core$Object$Q($tmp420);
frost$core$Object* $tmp421 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp421);
*(&local1) = $tmp420;
// line 200
frost$core$Object* $tmp422 = *(&local1);
frost$core$Int8** $tmp423 = &param1->pointer;
frost$core$Int8* $tmp424 = *$tmp423;
frost$core$Object** $tmp425 = &param1->target;
frost$core$Object* $tmp426 = *$tmp425;
bool $tmp427 = $tmp426 != ((frost$core$Object*) NULL);
if ($tmp427) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp429 = (($fn428) $tmp424)($tmp422);
*(&local2) = $tmp429;
goto block8;
block6:;
frost$core$Bit $tmp431 = (($fn430) $tmp424)($tmp426, $tmp422);
*(&local2) = $tmp431;
goto block8;
block8:;
frost$core$Bit $tmp432 = *(&local2);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block4; else goto block5;
block4:;
// line 201
frost$collections$Array* $tmp434 = *(&local0);
frost$core$Object* $tmp435 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp434, $tmp435);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
frost$core$Object* $tmp436 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp436);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// line 204
frost$collections$Array* $tmp437 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp437)));
frost$collections$Array* $tmp438 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp437);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$core$Object* local2 = NULL;
ITable* $tmp439 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[0];
frost$core$Int64 $tmp442 = $tmp440(((frost$collections$CollectionView*) param0));
ITable* $tmp443 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[0];
frost$core$Int64 $tmp446 = $tmp444(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp447 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp442, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp449 = (frost$core$Int64) {210};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s450, $tmp449, &$s451);
abort(); // unreachable
block1:;
// line 211
frost$collections$Array* $tmp452 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp453 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[0];
frost$core$Int64 $tmp456 = $tmp454(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int64($tmp452, $tmp456);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$collections$Array* $tmp457 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local0) = $tmp452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// line 212
frost$core$Int64 $tmp458 = (frost$core$Int64) {0};
ITable* $tmp459 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp459->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp459 = $tmp459->next;
}
$fn461 $tmp460 = $tmp459->methods[0];
frost$core$Int64 $tmp462 = $tmp460(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp463 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp464 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp458, $tmp462, $tmp463);
frost$core$Int64 $tmp465 = $tmp464.min;
*(&local1) = $tmp465;
frost$core$Int64 $tmp466 = $tmp464.max;
frost$core$Bit $tmp467 = $tmp464.inclusive;
bool $tmp468 = $tmp467.value;
frost$core$Int64 $tmp469 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp470 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp469);
if ($tmp468) goto block6; else goto block7;
block6:;
int64_t $tmp471 = $tmp465.value;
int64_t $tmp472 = $tmp466.value;
bool $tmp473 = $tmp471 <= $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block3; else goto block4;
block7:;
int64_t $tmp476 = $tmp465.value;
int64_t $tmp477 = $tmp466.value;
bool $tmp478 = $tmp476 < $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block3; else goto block4;
block3:;
// line 213
frost$collections$Array* $tmp481 = *(&local0);
frost$core$Int64 $tmp482 = *(&local1);
ITable* $tmp483 = param0->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$core$Object* $tmp486 = $tmp484(param0, $tmp482);
frost$core$Int64 $tmp487 = *(&local1);
ITable* $tmp488 = param1->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[0];
frost$core$Object* $tmp491 = $tmp489(param1, $tmp487);
frost$core$Int8** $tmp492 = &param2->pointer;
frost$core$Int8* $tmp493 = *$tmp492;
frost$core$Object** $tmp494 = &param2->target;
frost$core$Object* $tmp495 = *$tmp494;
bool $tmp496 = $tmp495 != ((frost$core$Object*) NULL);
if ($tmp496) goto block8; else goto block9;
block9:;
frost$core$Object* $tmp498 = (($fn497) $tmp493)($tmp486, $tmp491);
*(&local2) = $tmp498;
goto block10;
block8:;
frost$core$Object* $tmp500 = (($fn499) $tmp493)($tmp495, $tmp486, $tmp491);
*(&local2) = $tmp500;
goto block10;
block10:;
frost$core$Object* $tmp501 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp481, $tmp501);
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
frost$core$Frost$unref$frost$core$Object$Q($tmp491);
frost$core$Frost$unref$frost$core$Object$Q($tmp486);
goto block5;
block5:;
frost$core$Int64 $tmp502 = *(&local1);
int64_t $tmp503 = $tmp466.value;
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503 - $tmp504;
frost$core$Int64 $tmp506 = (frost$core$Int64) {$tmp505};
frost$core$UInt64 $tmp507 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp506);
if ($tmp468) goto block12; else goto block13;
block12:;
uint64_t $tmp508 = $tmp507.value;
uint64_t $tmp509 = $tmp470.value;
bool $tmp510 = $tmp508 >= $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block11; else goto block4;
block13:;
uint64_t $tmp513 = $tmp507.value;
uint64_t $tmp514 = $tmp470.value;
bool $tmp515 = $tmp513 > $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block11; else goto block4;
block11:;
int64_t $tmp518 = $tmp502.value;
int64_t $tmp519 = $tmp469.value;
int64_t $tmp520 = $tmp518 + $tmp519;
frost$core$Int64 $tmp521 = (frost$core$Int64) {$tmp520};
*(&local1) = $tmp521;
goto block3;
block4:;
// line 215
frost$collections$Array* $tmp522 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp522)));
frost$collections$Array* $tmp523 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp522);

}
frost$collections$ListView* frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT(frost$collections$ListView* param0, frost$collections$ListView* param1, frost$core$MutableMethod* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$core$Object* local2 = NULL;
ITable* $tmp524 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp524->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp524 = $tmp524->next;
}
$fn526 $tmp525 = $tmp524->methods[0];
frost$core$Int64 $tmp527 = $tmp525(((frost$collections$CollectionView*) param0));
ITable* $tmp528 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp528->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp528 = $tmp528->next;
}
$fn530 $tmp529 = $tmp528->methods[0];
frost$core$Int64 $tmp531 = $tmp529(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp532 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp527, $tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp534 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s535, $tmp534, &$s536);
abort(); // unreachable
block1:;
// line 221
frost$collections$Array* $tmp537 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp538 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[0];
frost$core$Int64 $tmp541 = $tmp539(((frost$collections$CollectionView*) param0));
frost$collections$Array$init$frost$core$Int64($tmp537, $tmp541);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$collections$Array* $tmp542 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local0) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// line 222
frost$core$Int64 $tmp543 = (frost$core$Int64) {0};
ITable* $tmp544 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp544->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp544 = $tmp544->next;
}
$fn546 $tmp545 = $tmp544->methods[0];
frost$core$Int64 $tmp547 = $tmp545(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp548 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp549 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp543, $tmp547, $tmp548);
frost$core$Int64 $tmp550 = $tmp549.min;
*(&local1) = $tmp550;
frost$core$Int64 $tmp551 = $tmp549.max;
frost$core$Bit $tmp552 = $tmp549.inclusive;
bool $tmp553 = $tmp552.value;
frost$core$Int64 $tmp554 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp555 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp554);
if ($tmp553) goto block6; else goto block7;
block6:;
int64_t $tmp556 = $tmp550.value;
int64_t $tmp557 = $tmp551.value;
bool $tmp558 = $tmp556 <= $tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block3; else goto block4;
block7:;
int64_t $tmp561 = $tmp550.value;
int64_t $tmp562 = $tmp551.value;
bool $tmp563 = $tmp561 < $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block3; else goto block4;
block3:;
// line 223
frost$collections$Array* $tmp566 = *(&local0);
frost$core$Int64 $tmp567 = *(&local1);
ITable* $tmp568 = param0->$class->itable;
while ($tmp568->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[0];
frost$core$Object* $tmp571 = $tmp569(param0, $tmp567);
frost$core$Int64 $tmp572 = *(&local1);
ITable* $tmp573 = param1->$class->itable;
while ($tmp573->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
frost$core$Object* $tmp576 = $tmp574(param1, $tmp572);
frost$core$Int8** $tmp577 = &param2->pointer;
frost$core$Int8* $tmp578 = *$tmp577;
frost$core$Object** $tmp579 = &param2->target;
frost$core$Object* $tmp580 = *$tmp579;
bool $tmp581 = $tmp580 != ((frost$core$Object*) NULL);
if ($tmp581) goto block8; else goto block9;
block9:;
frost$core$Object* $tmp583 = (($fn582) $tmp578)($tmp571, $tmp576);
*(&local2) = $tmp583;
goto block10;
block8:;
frost$core$Object* $tmp585 = (($fn584) $tmp578)($tmp580, $tmp571, $tmp576);
*(&local2) = $tmp585;
goto block10;
block10:;
frost$core$Object* $tmp586 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp566, $tmp586);
frost$core$Frost$unref$frost$core$Object$Q($tmp586);
frost$core$Frost$unref$frost$core$Object$Q($tmp576);
frost$core$Frost$unref$frost$core$Object$Q($tmp571);
goto block5;
block5:;
frost$core$Int64 $tmp587 = *(&local1);
int64_t $tmp588 = $tmp551.value;
int64_t $tmp589 = $tmp587.value;
int64_t $tmp590 = $tmp588 - $tmp589;
frost$core$Int64 $tmp591 = (frost$core$Int64) {$tmp590};
frost$core$UInt64 $tmp592 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp591);
if ($tmp553) goto block12; else goto block13;
block12:;
uint64_t $tmp593 = $tmp592.value;
uint64_t $tmp594 = $tmp555.value;
bool $tmp595 = $tmp593 >= $tmp594;
frost$core$Bit $tmp596 = (frost$core$Bit) {$tmp595};
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block11; else goto block4;
block13:;
uint64_t $tmp598 = $tmp592.value;
uint64_t $tmp599 = $tmp555.value;
bool $tmp600 = $tmp598 > $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block11; else goto block4;
block11:;
int64_t $tmp603 = $tmp587.value;
int64_t $tmp604 = $tmp554.value;
int64_t $tmp605 = $tmp603 + $tmp604;
frost$core$Int64 $tmp606 = (frost$core$Int64) {$tmp605};
*(&local1) = $tmp606;
goto block3;
block4:;
// line 225
frost$collections$Array* $tmp607 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp607)));
frost$collections$Array* $tmp608 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp607);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// line 231
frost$collections$ListView$ListIterator* $tmp609 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp609, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp609)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
return ((frost$collections$Iterator*) $tmp609);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// line 245
frost$collections$Array* $tmp610 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp610, param0);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$collections$Array* $tmp611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local0) = $tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// line 246
frost$collections$Array* $tmp612 = *(&local0);
frost$core$Int64 $tmp613 = (frost$core$Int64) {0};
ITable* $tmp614 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp614->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp614 = $tmp614->next;
}
$fn616 $tmp615 = $tmp614->methods[0];
frost$core$Int64 $tmp617 = $tmp615(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp618 = (frost$core$Int64) {1};
int64_t $tmp619 = $tmp617.value;
int64_t $tmp620 = $tmp618.value;
int64_t $tmp621 = $tmp619 - $tmp620;
frost$core$Int64 $tmp622 = (frost$core$Int64) {$tmp621};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp612), $tmp613, $tmp622, param1);
// line 247
frost$collections$Array* $tmp623 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp623)));
frost$collections$Array* $tmp624 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp623);

}

