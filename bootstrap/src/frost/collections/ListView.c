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

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$ListView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn51)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn65)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn126)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn174)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn190)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn289)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn316)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn341)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn364)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn392)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn414)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn426)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn434)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn438)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn443)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn452)(frost$core$Object*);
typedef frost$core$Bit (*$fn454)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn470)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 4907195926384919541, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -4663425639358462293, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, -1046591025602014473, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };

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
frost$core$UInt64 $tmp105 = frost$core$Int64$convert$R$frost$core$UInt64($tmp104);
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
// unreffing REF($183:frost.collections.ListView.T)
goto block34;
block34:;
frost$core$Int64 $tmp130 = *(&local12);
int64_t $tmp131 = $tmp101.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 - $tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
frost$core$UInt64 $tmp135 = frost$core$Int64$convert$R$frost$core$UInt64($tmp134);
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
// unreffing REF($221:frost.collections.Array<frost.collections.ListView.T>)
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
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit($tmp156.nonnull);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {78};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block4:;
*(&local0) = ((frost$core$Int64) $tmp156.value);
goto block2;
block3:;
// line 1
// line 81
frost$core$Int64 $tmp162 = (frost$core$Int64) {0};
*(&local0) = $tmp162;
goto block2;
block2:;
// line 84
// line 85
frost$core$Int64$nullable $tmp163 = param1.max;
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163.nonnull);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block6; else goto block8;
block6:;
// line 86
frost$core$Int64$nullable $tmp166 = param1.max;
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit($tmp166.nonnull);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {86};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s170, $tmp169, &$s171);
abort(); // unreachable
block9:;
*(&local1) = ((frost$core$Int64) $tmp166.value);
goto block7;
block8:;
// line 1
// line 89
ITable* $tmp172 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[0];
frost$core$Int64 $tmp175 = $tmp173(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp175;
// line 90
frost$core$Bit $tmp176 = param1.inclusive;
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block11; else goto block12;
block11:;
// line 91
frost$core$Int64 $tmp178 = *(&local1);
frost$core$Int64 $tmp179 = (frost$core$Int64) {1};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 - $tmp181;
frost$core$Int64 $tmp183 = (frost$core$Int64) {$tmp182};
*(&local1) = $tmp183;
goto block12;
block12:;
goto block7;
block7:;
// line 94
frost$core$Int64 $tmp184 = *(&local0);
frost$core$Int64 $tmp185 = *(&local1);
frost$core$Bit $tmp186 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp187 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp184, $tmp185, $tmp186);
ITable* $tmp188 = param0->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
frost$collections$ListView* $tmp191 = $tmp189(param0, $tmp187);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($70:frost.collections.ListView<frost.collections.ListView.T>)
return $tmp191;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 100
frost$core$Int64$nullable $tmp192 = param0.start;
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit($tmp192.nonnull);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// line 101
frost$core$Int64$nullable $tmp195 = param0.start;
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit($tmp195.nonnull);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp198 = (frost$core$Int64) {101};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s199, $tmp198, &$s200);
abort(); // unreachable
block5:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {0};
int64_t $tmp202 = ((frost$core$Int64) $tmp195.value).value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 < $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block3; else goto block4;
block3:;
// line 102
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit(false);
return $tmp207;
block4:;
// line 104
frost$core$Bit $tmp208 = param0.inclusive;
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block9; else goto block10;
block9:;
frost$core$Int64$nullable $tmp210 = param0.start;
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit($tmp210.nonnull);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp213 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block12:;
int64_t $tmp216 = ((frost$core$Int64) $tmp210.value).value;
int64_t $tmp217 = param1.value;
bool $tmp218 = $tmp216 >= $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
*(&local0) = $tmp219;
goto block11;
block10:;
*(&local0) = $tmp208;
goto block11;
block11:;
frost$core$Bit $tmp220 = *(&local0);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block7; else goto block8;
block7:;
// line 105
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit(false);
return $tmp222;
block8:;
// line 107
frost$core$Bit $tmp223 = param0.inclusive;
frost$core$Bit $tmp224 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block16; else goto block17;
block16:;
frost$core$Int64$nullable $tmp226 = param0.start;
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226.nonnull);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s230, $tmp229, &$s231);
abort(); // unreachable
block19:;
int64_t $tmp232 = ((frost$core$Int64) $tmp226.value).value;
int64_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 > $tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
*(&local1) = $tmp235;
goto block18;
block17:;
*(&local1) = $tmp224;
goto block18;
block18:;
frost$core$Bit $tmp236 = *(&local1);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block14; else goto block15;
block14:;
// line 108
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit(false);
return $tmp238;
block15:;
goto block2;
block2:;
// line 111
frost$core$Int64$nullable $tmp239 = param0.end;
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239.nonnull);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block21; else goto block22;
block21:;
// line 112
frost$core$Int64$nullable $tmp242 = param0.end;
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242.nonnull);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp245 = (frost$core$Int64) {112};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block25:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {0};
int64_t $tmp249 = ((frost$core$Int64) $tmp242.value).value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 < $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block23; else goto block24;
block23:;
// line 113
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit(false);
return $tmp254;
block24:;
// line 115
frost$core$Bit $tmp255 = param0.inclusive;
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block29; else goto block30;
block29:;
frost$core$Int64$nullable $tmp257 = param0.end;
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit($tmp257.nonnull);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block32:;
int64_t $tmp263 = ((frost$core$Int64) $tmp257.value).value;
int64_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 >= $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
*(&local2) = $tmp266;
goto block31;
block30:;
*(&local2) = $tmp255;
goto block31;
block31:;
frost$core$Bit $tmp267 = *(&local2);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block27; else goto block28;
block27:;
// line 116
frost$core$Bit $tmp269 = frost$core$Bit$init$builtin_bit(false);
return $tmp269;
block28:;
// line 118
frost$core$Bit $tmp270 = param0.inclusive;
frost$core$Bit $tmp271 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block36; else goto block37;
block36:;
frost$core$Int64$nullable $tmp273 = param0.end;
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit($tmp273.nonnull);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {118};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s277, $tmp276, &$s278);
abort(); // unreachable
block39:;
int64_t $tmp279 = ((frost$core$Int64) $tmp273.value).value;
int64_t $tmp280 = param1.value;
bool $tmp281 = $tmp279 > $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
*(&local3) = $tmp282;
goto block38;
block37:;
*(&local3) = $tmp271;
goto block38;
block38:;
frost$core$Bit $tmp283 = *(&local3);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block34; else goto block35;
block34:;
// line 119
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit(false);
return $tmp285;
block35:;
goto block22;
block22:;
// line 122
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit(true);
return $tmp286;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$collections$Array* local3 = NULL;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
ITable* $tmp287 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
frost$core$Int64 $tmp290 = $tmp288(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp291 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(param1, $tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block1:;
// line 134
frost$core$Int64 $tmp296 = param1.step;
*(&local0) = $tmp296;
// line 136
// line 137
frost$core$Int64$nullable $tmp297 = param1.start;
frost$core$Bit $tmp298 = frost$core$Bit$init$builtin_bit($tmp297.nonnull);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block3; else goto block5;
block3:;
// line 138
frost$core$Int64$nullable $tmp300 = param1.start;
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300.nonnull);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp303 = (frost$core$Int64) {138};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block6:;
*(&local1) = ((frost$core$Int64) $tmp300.value);
goto block4;
block5:;
// line 140
frost$core$Int64 $tmp306 = *(&local0);
frost$core$Int64 $tmp307 = (frost$core$Int64) {0};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 > $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block8; else goto block10;
block8:;
// line 141
frost$core$Int64 $tmp313 = (frost$core$Int64) {0};
*(&local1) = $tmp313;
goto block9;
block10:;
// line 1
// line 144
ITable* $tmp314 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Int64 $tmp317 = $tmp315(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp318 = (frost$core$Int64) {1};
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319 - $tmp320;
frost$core$Int64 $tmp322 = (frost$core$Int64) {$tmp321};
*(&local1) = $tmp322;
goto block9;
block9:;
goto block4;
block4:;
// line 147
// line 148
frost$core$Int64$nullable $tmp323 = param1.end;
frost$core$Bit $tmp324 = frost$core$Bit$init$builtin_bit($tmp323.nonnull);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block11; else goto block13;
block11:;
// line 149
frost$core$Int64$nullable $tmp326 = param1.end;
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326.nonnull);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp329 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block14:;
*(&local2) = ((frost$core$Int64) $tmp326.value);
goto block12;
block13:;
// line 151
frost$core$Int64 $tmp332 = *(&local0);
frost$core$Int64 $tmp333 = (frost$core$Int64) {0};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
bool $tmp336 = $tmp334 > $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block16; else goto block18;
block16:;
// line 152
ITable* $tmp339 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$core$Int64 $tmp342 = $tmp340(((frost$collections$CollectionView*) param0));
*(&local2) = $tmp342;
goto block17;
block18:;
// line 1
// line 155
frost$core$Int64 $tmp343 = (frost$core$Int64) {0};
*(&local2) = $tmp343;
goto block17;
block17:;
goto block12;
block12:;
// line 158
frost$collections$Array* $tmp344 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp344);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$collections$Array* $tmp345 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local3) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($98:frost.collections.Array<frost.collections.ListView.T>)
// line 159
frost$core$Int64 $tmp346 = param1.step;
frost$core$Int64 $tmp347 = (frost$core$Int64) {0};
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 > $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block19; else goto block21;
block19:;
// line 160
goto block22;
block22:;
frost$core$Int64 $tmp353 = *(&local1);
frost$core$Int64 $tmp354 = *(&local2);
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 < $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block23; else goto block24;
block23:;
// line 161
frost$collections$Array* $tmp360 = *(&local3);
frost$core$Int64 $tmp361 = *(&local1);
ITable* $tmp362 = param0->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
frost$core$Object* $tmp365 = $tmp363(param0, $tmp361);
frost$collections$Array$add$frost$collections$Array$T($tmp360, $tmp365);
frost$core$Frost$unref$frost$core$Object$Q($tmp365);
// unreffing REF($136:frost.collections.ListView.T)
// line 162
frost$core$Int64 $tmp366 = *(&local1);
frost$core$Int64 $tmp367 = *(&local0);
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368 + $tmp369;
frost$core$Int64 $tmp371 = (frost$core$Int64) {$tmp370};
*(&local1) = $tmp371;
goto block22;
block24:;
goto block20;
block21:;
// line 1
// line 166
frost$core$Int64 $tmp372 = param1.step;
frost$core$Int64 $tmp373 = (frost$core$Int64) {0};
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373.value;
bool $tmp376 = $tmp374 < $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp379 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s380, $tmp379);
abort(); // unreachable
block25:;
// line 167
goto block27;
block27:;
frost$core$Int64 $tmp381 = *(&local1);
frost$core$Int64 $tmp382 = *(&local2);
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
bool $tmp385 = $tmp383 > $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block28; else goto block29;
block28:;
// line 168
frost$collections$Array* $tmp388 = *(&local3);
frost$core$Int64 $tmp389 = *(&local1);
ITable* $tmp390 = param0->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp390 = $tmp390->next;
}
$fn392 $tmp391 = $tmp390->methods[0];
frost$core$Object* $tmp393 = $tmp391(param0, $tmp389);
frost$collections$Array$add$frost$collections$Array$T($tmp388, $tmp393);
frost$core$Frost$unref$frost$core$Object$Q($tmp393);
// unreffing REF($181:frost.collections.ListView.T)
// line 169
frost$core$Int64 $tmp394 = *(&local1);
frost$core$Int64 $tmp395 = *(&local0);
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396 + $tmp397;
frost$core$Int64 $tmp399 = (frost$core$Int64) {$tmp398};
*(&local1) = $tmp399;
goto block27;
block29:;
goto block20;
block20:;
// line 172
frost$core$Bit $tmp400 = param1.inclusive;
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block32; else goto block33;
block32:;
*(&local6) = $tmp400;
goto block34;
block33:;
frost$core$Int64$nullable $tmp402 = param1.end;
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit(!$tmp402.nonnull);
*(&local6) = $tmp403;
goto block34;
block34:;
frost$core$Bit $tmp404 = *(&local6);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block35; else goto block36;
block35:;
frost$core$Int64 $tmp406 = *(&local1);
frost$core$Int64 $tmp407 = *(&local2);
frost$core$Bit $tmp408 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp406, $tmp407);
*(&local5) = $tmp408;
goto block37;
block36:;
*(&local5) = $tmp404;
goto block37;
block37:;
frost$core$Bit $tmp409 = *(&local5);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block38; else goto block39;
block38:;
frost$core$Int64 $tmp411 = *(&local2);
ITable* $tmp412 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
frost$core$Int64 $tmp415 = $tmp413(((frost$collections$CollectionView*) param0));
int64_t $tmp416 = $tmp411.value;
int64_t $tmp417 = $tmp415.value;
bool $tmp418 = $tmp416 < $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
*(&local4) = $tmp419;
goto block40;
block39:;
*(&local4) = $tmp409;
goto block40;
block40:;
frost$core$Bit $tmp420 = *(&local4);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block30; else goto block31;
block30:;
// line 173
frost$collections$Array* $tmp422 = *(&local3);
frost$core$Int64 $tmp423 = *(&local1);
ITable* $tmp424 = param0->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[0];
frost$core$Object* $tmp427 = $tmp425(param0, $tmp423);
frost$collections$Array$add$frost$collections$Array$T($tmp422, $tmp427);
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
// unreffing REF($242:frost.collections.ListView.T)
goto block31;
block31:;
// line 175
frost$collections$Array* $tmp428 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp428)));
frost$collections$Array* $tmp429 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing result
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp428);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// line 184
frost$collections$Array* $tmp430 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp430);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$collections$Array* $tmp431 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local0) = $tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing REF($1:frost.collections.Array<frost.collections.ListView.T>)
// line 185
ITable* $tmp432 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp432->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp432 = $tmp432->next;
}
$fn434 $tmp433 = $tmp432->methods[0];
frost$collections$Iterator* $tmp435 = $tmp433(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp436 = $tmp435->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
frost$core$Bit $tmp439 = $tmp437($tmp435);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp441 = $tmp435->$class->itable;
while ($tmp441->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp441 = $tmp441->next;
}
$fn443 $tmp442 = $tmp441->methods[1];
frost$core$Object* $tmp444 = $tmp442($tmp435);
frost$core$Frost$ref$frost$core$Object$Q($tmp444);
frost$core$Object* $tmp445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
*(&local1) = $tmp444;
// line 186
frost$core$Object* $tmp446 = *(&local1);
frost$core$Int8** $tmp447 = &param1->pointer;
frost$core$Int8* $tmp448 = *$tmp447;
frost$core$Object** $tmp449 = &param1->target;
frost$core$Object* $tmp450 = *$tmp449;
bool $tmp451 = $tmp450 != ((frost$core$Object*) NULL);
if ($tmp451) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp453 = (($fn452) $tmp448)($tmp446);
*(&local2) = $tmp453;
goto block8;
block6:;
frost$core$Bit $tmp455 = (($fn454) $tmp448)($tmp450, $tmp446);
*(&local2) = $tmp455;
goto block8;
block8:;
frost$core$Bit $tmp456 = *(&local2);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block4; else goto block5;
block4:;
// line 187
frost$collections$Array* $tmp458 = *(&local0);
frost$core$Object* $tmp459 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp458, $tmp459);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp444);
// unreffing REF($29:frost.collections.Iterator.T)
frost$core$Object* $tmp460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp460);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
// unreffing REF($18:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 190
frost$collections$Array* $tmp461 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp461)));
frost$collections$Array* $tmp462 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp461);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// line 196
frost$collections$ListView$ListIterator* $tmp463 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp463, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp463)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing REF($1:frost.collections.ListView.ListIterator<frost.collections.ListView.T>)
return ((frost$collections$Iterator*) $tmp463);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// line 209
frost$collections$Array* $tmp464 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp464, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$collections$Array* $tmp465 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local0) = $tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($1:frost.collections.Array<frost.collections.ListView.T>)
// line 210
frost$collections$Array* $tmp466 = *(&local0);
frost$core$Int64 $tmp467 = (frost$core$Int64) {0};
ITable* $tmp468 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp468->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp468 = $tmp468->next;
}
$fn470 $tmp469 = $tmp468->methods[0];
frost$core$Int64 $tmp471 = $tmp469(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp472 = (frost$core$Int64) {1};
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473 - $tmp474;
frost$core$Int64 $tmp476 = (frost$core$Int64) {$tmp475};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp466), $tmp467, $tmp476, param1);
// line 211
frost$collections$Array* $tmp477 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp477)));
frost$collections$Array* $tmp478 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp477);

}

