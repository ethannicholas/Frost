#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/ListView/ListIterator.h"
#include "panda/collections/List.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn28)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn51)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn126)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn174)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn190)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn289)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn316)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn341)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn364)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn392)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn414)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn426)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn434)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn443)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn452)(panda$core$Object*);
typedef panda$core$Bit (*$fn454)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn470)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -7687465988945033711, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, 4461115013712087099, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };

panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$Range$LTpanda$core$Int64$GT param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
panda$core$Bit local7;
panda$core$Bit local8;
panda$core$Int64 local9;
panda$core$Int64 local10;
panda$core$Object** local11;
panda$core$Int64 local12;
panda$core$Int64 $tmp2 = param1.min;
panda$core$Int64 $tmp3 = (panda$core$Int64) {0};
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 >= $tmp5;
panda$core$Bit $tmp7 = (panda$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp9 = param1.inclusive;
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block5;
block4:;
panda$core$Int64 $tmp11 = param1.min;
ITable* $tmp12 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$core$Int64 $tmp15 = $tmp13(((panda$collections$CollectionView*) param0));
int64_t $tmp16 = $tmp11.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
panda$core$Bit $tmp19 = (panda$core$Bit) {$tmp18};
*(&local4) = $tmp19;
goto block6;
block5:;
*(&local4) = $tmp9;
goto block6;
block6:;
panda$core$Bit $tmp20 = *(&local4);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
*(&local3) = $tmp20;
goto block9;
block8:;
panda$core$Bit $tmp22 = param1.inclusive;
panda$core$Bit $tmp23 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp25 = param1.min;
ITable* $tmp26 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp26->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
panda$core$Int64 $tmp29 = $tmp27(((panda$collections$CollectionView*) param0));
int64_t $tmp30 = $tmp25.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 <= $tmp31;
panda$core$Bit $tmp33 = (panda$core$Bit) {$tmp32};
*(&local5) = $tmp33;
goto block12;
block11:;
*(&local5) = $tmp23;
goto block12;
block12:;
panda$core$Bit $tmp34 = *(&local5);
*(&local3) = $tmp34;
goto block9;
block9:;
panda$core$Bit $tmp35 = *(&local3);
*(&local2) = $tmp35;
goto block3;
block2:;
*(&local2) = $tmp7;
goto block3;
block3:;
panda$core$Bit $tmp36 = *(&local2);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block13; else goto block14;
block13:;
panda$core$Int64 $tmp38 = param1.max;
panda$core$Int64 $tmp39 = (panda$core$Int64) {0};
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 >= $tmp41;
panda$core$Bit $tmp43 = (panda$core$Bit) {$tmp42};
*(&local1) = $tmp43;
goto block15;
block14:;
*(&local1) = $tmp36;
goto block15;
block15:;
panda$core$Bit $tmp44 = *(&local1);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block16; else goto block17;
block16:;
panda$core$Bit $tmp46 = param1.inclusive;
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block19; else goto block20;
block19:;
panda$core$Int64 $tmp48 = param1.max;
ITable* $tmp49 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp49->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
panda$core$Int64 $tmp52 = $tmp50(((panda$collections$CollectionView*) param0));
int64_t $tmp53 = $tmp48.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 < $tmp54;
panda$core$Bit $tmp56 = (panda$core$Bit) {$tmp55};
*(&local7) = $tmp56;
goto block21;
block20:;
*(&local7) = $tmp46;
goto block21;
block21:;
panda$core$Bit $tmp57 = *(&local7);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block22; else goto block23;
block22:;
*(&local6) = $tmp57;
goto block24;
block23:;
panda$core$Bit $tmp59 = param1.inclusive;
panda$core$Bit $tmp60 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block25; else goto block26;
block25:;
panda$core$Int64 $tmp62 = param1.max;
ITable* $tmp63 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
panda$core$Int64 $tmp66 = $tmp64(((panda$collections$CollectionView*) param0));
int64_t $tmp67 = $tmp62.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 <= $tmp68;
panda$core$Bit $tmp70 = (panda$core$Bit) {$tmp69};
*(&local8) = $tmp70;
goto block27;
block26:;
*(&local8) = $tmp60;
goto block27;
block27:;
panda$core$Bit $tmp71 = *(&local8);
*(&local6) = $tmp71;
goto block24;
block24:;
panda$core$Bit $tmp72 = *(&local6);
*(&local0) = $tmp72;
goto block18;
block17:;
*(&local0) = $tmp44;
goto block18;
block18:;
panda$core$Bit $tmp73 = *(&local0);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp75 = (panda$core$Int64) {52};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block28:;
// line 53
panda$core$Int64 $tmp78 = param1.max;
*(&local9) = $tmp78;
// line 54
panda$core$Bit $tmp79 = param1.inclusive;
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block30; else goto block31;
block30:;
// line 55
panda$core$Int64 $tmp81 = *(&local9);
panda$core$Int64 $tmp82 = (panda$core$Int64) {1};
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83 + $tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {$tmp85};
*(&local9) = $tmp86;
goto block31;
block31:;
// line 57
panda$core$Int64 $tmp87 = *(&local9);
panda$core$Int64 $tmp88 = param1.min;
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
panda$core$Int64 $tmp92 = (panda$core$Int64) {$tmp91};
*(&local10) = $tmp92;
// line 58
panda$core$Int64 $tmp93 = *(&local10);
int64_t $tmp94 = $tmp93.value;
panda$core$Object** $tmp95 = ((panda$core$Object**) frostAlloc($tmp94 * 8));
*(&local11) = $tmp95;
// line 59
panda$core$Int64 $tmp96 = (panda$core$Int64) {0};
panda$core$Int64 $tmp97 = *(&local10);
panda$core$Bit $tmp98 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp99 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp96, $tmp97, $tmp98);
panda$core$Int64 $tmp100 = $tmp99.min;
*(&local12) = $tmp100;
panda$core$Int64 $tmp101 = $tmp99.max;
panda$core$Bit $tmp102 = $tmp99.inclusive;
bool $tmp103 = $tmp102.value;
panda$core$Int64 $tmp104 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp105 = panda$core$Int64$convert$R$panda$core$UInt64($tmp104);
if ($tmp103) goto block35; else goto block36;
block35:;
int64_t $tmp106 = $tmp100.value;
int64_t $tmp107 = $tmp101.value;
bool $tmp108 = $tmp106 <= $tmp107;
panda$core$Bit $tmp109 = (panda$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block32; else goto block33;
block36:;
int64_t $tmp111 = $tmp100.value;
int64_t $tmp112 = $tmp101.value;
bool $tmp113 = $tmp111 < $tmp112;
panda$core$Bit $tmp114 = (panda$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block32; else goto block33;
block32:;
// line 60
panda$core$Object** $tmp116 = *(&local11);
panda$core$Int64 $tmp117 = *(&local12);
panda$core$Int64 $tmp118 = param1.min;
panda$core$Int64 $tmp119 = *(&local12);
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 + $tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {$tmp122};
ITable* $tmp124 = param0->$class->itable;
while ($tmp124->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
panda$core$Object* $tmp127 = $tmp125(param0, $tmp123);
int64_t $tmp128 = $tmp117.value;
panda$core$Panda$ref$panda$core$Object$Q($tmp127);
panda$core$Object* $tmp129 = $tmp116[$tmp128];
panda$core$Panda$unref$panda$core$Object$Q($tmp129);
$tmp116[$tmp128] = $tmp127;
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing REF($183:panda.collections.ListView.T)
goto block34;
block34:;
panda$core$Int64 $tmp130 = *(&local12);
int64_t $tmp131 = $tmp101.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 - $tmp132;
panda$core$Int64 $tmp134 = (panda$core$Int64) {$tmp133};
panda$core$UInt64 $tmp135 = panda$core$Int64$convert$R$panda$core$UInt64($tmp134);
if ($tmp103) goto block38; else goto block39;
block38:;
uint64_t $tmp136 = $tmp135.value;
uint64_t $tmp137 = $tmp105.value;
bool $tmp138 = $tmp136 >= $tmp137;
panda$core$Bit $tmp139 = (panda$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block37; else goto block33;
block39:;
uint64_t $tmp141 = $tmp135.value;
uint64_t $tmp142 = $tmp105.value;
bool $tmp143 = $tmp141 > $tmp142;
panda$core$Bit $tmp144 = (panda$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block37; else goto block33;
block37:;
int64_t $tmp146 = $tmp130.value;
int64_t $tmp147 = $tmp104.value;
int64_t $tmp148 = $tmp146 + $tmp147;
panda$core$Int64 $tmp149 = (panda$core$Int64) {$tmp148};
*(&local12) = $tmp149;
goto block32;
block33:;
// line 62
panda$collections$Array* $tmp150 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Object** $tmp151 = *(&local11);
panda$core$Int64 $tmp152 = *(&local10);
panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp150, $tmp151, $tmp152);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp150)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($221:panda.collections.Array<panda.collections.ListView.T>)
return ((panda$collections$ListView*) $tmp150);

}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 76
// line 77
panda$core$Int64$nullable $tmp153 = param1.min;
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153.nonnull);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block3;
block1:;
// line 78
panda$core$Int64$nullable $tmp156 = param1.min;
panda$core$Bit $tmp157 = panda$core$Bit$init$builtin_bit($tmp156.nonnull);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp159 = (panda$core$Int64) {78};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block4:;
*(&local0) = ((panda$core$Int64) $tmp156.value);
goto block2;
block3:;
// line 1
// line 81
panda$core$Int64 $tmp162 = (panda$core$Int64) {0};
*(&local0) = $tmp162;
goto block2;
block2:;
// line 84
// line 85
panda$core$Int64$nullable $tmp163 = param1.max;
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit($tmp163.nonnull);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block6; else goto block8;
block6:;
// line 86
panda$core$Int64$nullable $tmp166 = param1.max;
panda$core$Bit $tmp167 = panda$core$Bit$init$builtin_bit($tmp166.nonnull);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp169 = (panda$core$Int64) {86};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s170, $tmp169, &$s171);
abort(); // unreachable
block9:;
*(&local1) = ((panda$core$Int64) $tmp166.value);
goto block7;
block8:;
// line 1
// line 89
ITable* $tmp172 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp172->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[0];
panda$core$Int64 $tmp175 = $tmp173(((panda$collections$CollectionView*) param0));
*(&local1) = $tmp175;
// line 90
panda$core$Bit $tmp176 = param1.inclusive;
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block11; else goto block12;
block11:;
// line 91
panda$core$Int64 $tmp178 = *(&local1);
panda$core$Int64 $tmp179 = (panda$core$Int64) {1};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 - $tmp181;
panda$core$Int64 $tmp183 = (panda$core$Int64) {$tmp182};
*(&local1) = $tmp183;
goto block12;
block12:;
goto block7;
block7:;
// line 94
panda$core$Int64 $tmp184 = *(&local0);
panda$core$Int64 $tmp185 = *(&local1);
panda$core$Bit $tmp186 = param1.inclusive;
panda$core$Range$LTpanda$core$Int64$GT $tmp187 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp184, $tmp185, $tmp186);
ITable* $tmp188 = param0->$class->itable;
while ($tmp188->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
panda$collections$ListView* $tmp191 = $tmp189(param0, $tmp187);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($70:panda.collections.ListView<panda.collections.ListView.T>)
return $tmp191;

}
panda$core$Bit panda$collections$ListView$inRange$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$panda$core$Int64$R$panda$core$Bit(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 100
panda$core$Int64$nullable $tmp192 = param0.start;
panda$core$Bit $tmp193 = panda$core$Bit$init$builtin_bit($tmp192.nonnull);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// line 101
panda$core$Int64$nullable $tmp195 = param0.start;
panda$core$Bit $tmp196 = panda$core$Bit$init$builtin_bit($tmp195.nonnull);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp198 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s199, $tmp198, &$s200);
abort(); // unreachable
block5:;
panda$core$Int64 $tmp201 = (panda$core$Int64) {0};
int64_t $tmp202 = ((panda$core$Int64) $tmp195.value).value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 < $tmp203;
panda$core$Bit $tmp205 = (panda$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block3; else goto block4;
block3:;
// line 102
panda$core$Bit $tmp207 = panda$core$Bit$init$builtin_bit(false);
return $tmp207;
block4:;
// line 104
panda$core$Bit $tmp208 = param0.inclusive;
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block9; else goto block10;
block9:;
panda$core$Int64$nullable $tmp210 = param0.start;
panda$core$Bit $tmp211 = panda$core$Bit$init$builtin_bit($tmp210.nonnull);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp213 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block12:;
int64_t $tmp216 = ((panda$core$Int64) $tmp210.value).value;
int64_t $tmp217 = param1.value;
bool $tmp218 = $tmp216 >= $tmp217;
panda$core$Bit $tmp219 = (panda$core$Bit) {$tmp218};
*(&local0) = $tmp219;
goto block11;
block10:;
*(&local0) = $tmp208;
goto block11;
block11:;
panda$core$Bit $tmp220 = *(&local0);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block7; else goto block8;
block7:;
// line 105
panda$core$Bit $tmp222 = panda$core$Bit$init$builtin_bit(false);
return $tmp222;
block8:;
// line 107
panda$core$Bit $tmp223 = param0.inclusive;
panda$core$Bit $tmp224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block16; else goto block17;
block16:;
panda$core$Int64$nullable $tmp226 = param0.start;
panda$core$Bit $tmp227 = panda$core$Bit$init$builtin_bit($tmp226.nonnull);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp229 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s230, $tmp229, &$s231);
abort(); // unreachable
block19:;
int64_t $tmp232 = ((panda$core$Int64) $tmp226.value).value;
int64_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 > $tmp233;
panda$core$Bit $tmp235 = (panda$core$Bit) {$tmp234};
*(&local1) = $tmp235;
goto block18;
block17:;
*(&local1) = $tmp224;
goto block18;
block18:;
panda$core$Bit $tmp236 = *(&local1);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block14; else goto block15;
block14:;
// line 108
panda$core$Bit $tmp238 = panda$core$Bit$init$builtin_bit(false);
return $tmp238;
block15:;
goto block2;
block2:;
// line 111
panda$core$Int64$nullable $tmp239 = param0.end;
panda$core$Bit $tmp240 = panda$core$Bit$init$builtin_bit($tmp239.nonnull);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block21; else goto block22;
block21:;
// line 112
panda$core$Int64$nullable $tmp242 = param0.end;
panda$core$Bit $tmp243 = panda$core$Bit$init$builtin_bit($tmp242.nonnull);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp245 = (panda$core$Int64) {112};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block25:;
panda$core$Int64 $tmp248 = (panda$core$Int64) {0};
int64_t $tmp249 = ((panda$core$Int64) $tmp242.value).value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 < $tmp250;
panda$core$Bit $tmp252 = (panda$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block23; else goto block24;
block23:;
// line 113
panda$core$Bit $tmp254 = panda$core$Bit$init$builtin_bit(false);
return $tmp254;
block24:;
// line 115
panda$core$Bit $tmp255 = param0.inclusive;
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block29; else goto block30;
block29:;
panda$core$Int64$nullable $tmp257 = param0.end;
panda$core$Bit $tmp258 = panda$core$Bit$init$builtin_bit($tmp257.nonnull);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp260 = (panda$core$Int64) {115};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block32:;
int64_t $tmp263 = ((panda$core$Int64) $tmp257.value).value;
int64_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 >= $tmp264;
panda$core$Bit $tmp266 = (panda$core$Bit) {$tmp265};
*(&local2) = $tmp266;
goto block31;
block30:;
*(&local2) = $tmp255;
goto block31;
block31:;
panda$core$Bit $tmp267 = *(&local2);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block27; else goto block28;
block27:;
// line 116
panda$core$Bit $tmp269 = panda$core$Bit$init$builtin_bit(false);
return $tmp269;
block28:;
// line 118
panda$core$Bit $tmp270 = param0.inclusive;
panda$core$Bit $tmp271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block36; else goto block37;
block36:;
panda$core$Int64$nullable $tmp273 = param0.end;
panda$core$Bit $tmp274 = panda$core$Bit$init$builtin_bit($tmp273.nonnull);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp276 = (panda$core$Int64) {118};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s277, $tmp276, &$s278);
abort(); // unreachable
block39:;
int64_t $tmp279 = ((panda$core$Int64) $tmp273.value).value;
int64_t $tmp280 = param1.value;
bool $tmp281 = $tmp279 > $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
*(&local3) = $tmp282;
goto block38;
block37:;
*(&local3) = $tmp271;
goto block38;
block38:;
panda$core$Bit $tmp283 = *(&local3);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block34; else goto block35;
block34:;
// line 119
panda$core$Bit $tmp285 = panda$core$Bit$init$builtin_bit(false);
return $tmp285;
block35:;
goto block22;
block22:;
// line 122
panda$core$Bit $tmp286 = panda$core$Bit$init$builtin_bit(true);
return $tmp286;

}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$collections$Array* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
ITable* $tmp287 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp287->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
panda$core$Int64 $tmp290 = $tmp288(((panda$collections$CollectionView*) param0));
panda$core$Bit $tmp291 = panda$collections$ListView$inRange$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$panda$core$Int64$R$panda$core$Bit(param1, $tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp293 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block1:;
// line 134
panda$core$Int64 $tmp296 = param1.step;
*(&local0) = $tmp296;
// line 136
// line 137
panda$core$Int64$nullable $tmp297 = param1.start;
panda$core$Bit $tmp298 = panda$core$Bit$init$builtin_bit($tmp297.nonnull);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block3; else goto block5;
block3:;
// line 138
panda$core$Int64$nullable $tmp300 = param1.start;
panda$core$Bit $tmp301 = panda$core$Bit$init$builtin_bit($tmp300.nonnull);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp303 = (panda$core$Int64) {138};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block6:;
*(&local1) = ((panda$core$Int64) $tmp300.value);
goto block4;
block5:;
// line 140
panda$core$Int64 $tmp306 = *(&local0);
panda$core$Int64 $tmp307 = (panda$core$Int64) {0};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 > $tmp309;
panda$core$Bit $tmp311 = (panda$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block8; else goto block10;
block8:;
// line 141
panda$core$Int64 $tmp313 = (panda$core$Int64) {0};
*(&local1) = $tmp313;
goto block9;
block10:;
// line 1
// line 144
ITable* $tmp314 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp314->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
panda$core$Int64 $tmp317 = $tmp315(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp318 = (panda$core$Int64) {1};
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319 - $tmp320;
panda$core$Int64 $tmp322 = (panda$core$Int64) {$tmp321};
*(&local1) = $tmp322;
goto block9;
block9:;
goto block4;
block4:;
// line 147
// line 148
panda$core$Int64$nullable $tmp323 = param1.end;
panda$core$Bit $tmp324 = panda$core$Bit$init$builtin_bit($tmp323.nonnull);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block11; else goto block13;
block11:;
// line 149
panda$core$Int64$nullable $tmp326 = param1.end;
panda$core$Bit $tmp327 = panda$core$Bit$init$builtin_bit($tmp326.nonnull);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp329 = (panda$core$Int64) {149};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block14:;
*(&local2) = ((panda$core$Int64) $tmp326.value);
goto block12;
block13:;
// line 151
panda$core$Int64 $tmp332 = *(&local0);
panda$core$Int64 $tmp333 = (panda$core$Int64) {0};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
bool $tmp336 = $tmp334 > $tmp335;
panda$core$Bit $tmp337 = (panda$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block16; else goto block18;
block16:;
// line 152
ITable* $tmp339 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp339->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
panda$core$Int64 $tmp342 = $tmp340(((panda$collections$CollectionView*) param0));
*(&local2) = $tmp342;
goto block17;
block18:;
// line 1
// line 155
panda$core$Int64 $tmp343 = (panda$core$Int64) {0};
*(&local2) = $tmp343;
goto block17;
block17:;
goto block12;
block12:;
// line 158
panda$collections$Array* $tmp344 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp344);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
panda$collections$Array* $tmp345 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
*(&local3) = $tmp344;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($98:panda.collections.Array<panda.collections.ListView.T>)
// line 159
panda$core$Int64 $tmp346 = param1.step;
panda$core$Int64 $tmp347 = (panda$core$Int64) {0};
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 > $tmp349;
panda$core$Bit $tmp351 = (panda$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block19; else goto block21;
block19:;
// line 160
goto block22;
block22:;
panda$core$Int64 $tmp353 = *(&local1);
panda$core$Int64 $tmp354 = *(&local2);
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 < $tmp356;
panda$core$Bit $tmp358 = (panda$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block23; else goto block24;
block23:;
// line 161
panda$collections$Array* $tmp360 = *(&local3);
panda$core$Int64 $tmp361 = *(&local1);
ITable* $tmp362 = param0->$class->itable;
while ($tmp362->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
panda$core$Object* $tmp365 = $tmp363(param0, $tmp361);
panda$collections$Array$add$panda$collections$Array$T($tmp360, $tmp365);
panda$core$Panda$unref$panda$core$Object$Q($tmp365);
// unreffing REF($136:panda.collections.ListView.T)
// line 162
panda$core$Int64 $tmp366 = *(&local1);
panda$core$Int64 $tmp367 = *(&local0);
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368 + $tmp369;
panda$core$Int64 $tmp371 = (panda$core$Int64) {$tmp370};
*(&local1) = $tmp371;
goto block22;
block24:;
goto block20;
block21:;
// line 1
// line 166
panda$core$Int64 $tmp372 = param1.step;
panda$core$Int64 $tmp373 = (panda$core$Int64) {0};
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373.value;
bool $tmp376 = $tmp374 < $tmp375;
panda$core$Bit $tmp377 = (panda$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp379 = (panda$core$Int64) {166};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s380, $tmp379);
abort(); // unreachable
block25:;
// line 167
goto block27;
block27:;
panda$core$Int64 $tmp381 = *(&local1);
panda$core$Int64 $tmp382 = *(&local2);
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
bool $tmp385 = $tmp383 > $tmp384;
panda$core$Bit $tmp386 = (panda$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block28; else goto block29;
block28:;
// line 168
panda$collections$Array* $tmp388 = *(&local3);
panda$core$Int64 $tmp389 = *(&local1);
ITable* $tmp390 = param0->$class->itable;
while ($tmp390->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp390 = $tmp390->next;
}
$fn392 $tmp391 = $tmp390->methods[0];
panda$core$Object* $tmp393 = $tmp391(param0, $tmp389);
panda$collections$Array$add$panda$collections$Array$T($tmp388, $tmp393);
panda$core$Panda$unref$panda$core$Object$Q($tmp393);
// unreffing REF($181:panda.collections.ListView.T)
// line 169
panda$core$Int64 $tmp394 = *(&local1);
panda$core$Int64 $tmp395 = *(&local0);
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396 + $tmp397;
panda$core$Int64 $tmp399 = (panda$core$Int64) {$tmp398};
*(&local1) = $tmp399;
goto block27;
block29:;
goto block20;
block20:;
// line 172
panda$core$Bit $tmp400 = param1.inclusive;
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block32; else goto block33;
block32:;
*(&local6) = $tmp400;
goto block34;
block33:;
panda$core$Int64$nullable $tmp402 = param1.end;
panda$core$Bit $tmp403 = panda$core$Bit$init$builtin_bit(!$tmp402.nonnull);
*(&local6) = $tmp403;
goto block34;
block34:;
panda$core$Bit $tmp404 = *(&local6);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block35; else goto block36;
block35:;
panda$core$Int64 $tmp406 = *(&local1);
panda$core$Int64 $tmp407 = *(&local2);
panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp406, $tmp407);
*(&local5) = $tmp408;
goto block37;
block36:;
*(&local5) = $tmp404;
goto block37;
block37:;
panda$core$Bit $tmp409 = *(&local5);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block38; else goto block39;
block38:;
panda$core$Int64 $tmp411 = *(&local2);
ITable* $tmp412 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp412->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
panda$core$Int64 $tmp415 = $tmp413(((panda$collections$CollectionView*) param0));
int64_t $tmp416 = $tmp411.value;
int64_t $tmp417 = $tmp415.value;
bool $tmp418 = $tmp416 < $tmp417;
panda$core$Bit $tmp419 = (panda$core$Bit) {$tmp418};
*(&local4) = $tmp419;
goto block40;
block39:;
*(&local4) = $tmp409;
goto block40;
block40:;
panda$core$Bit $tmp420 = *(&local4);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block30; else goto block31;
block30:;
// line 173
panda$collections$Array* $tmp422 = *(&local3);
panda$core$Int64 $tmp423 = *(&local1);
ITable* $tmp424 = param0->$class->itable;
while ($tmp424->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[0];
panda$core$Object* $tmp427 = $tmp425(param0, $tmp423);
panda$collections$Array$add$panda$collections$Array$T($tmp422, $tmp427);
panda$core$Panda$unref$panda$core$Object$Q($tmp427);
// unreffing REF($242:panda.collections.ListView.T)
goto block31;
block31:;
// line 175
panda$collections$Array* $tmp428 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp428)));
panda$collections$Array* $tmp429 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing result
*(&local3) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp428);

}
panda$collections$ListView* panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$MutableMethod* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Object* local1 = NULL;
panda$core$Bit local2;
// line 184
panda$collections$Array* $tmp430 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp430);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
panda$collections$Array* $tmp431 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
*(&local0) = $tmp430;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
// unreffing REF($1:panda.collections.Array<panda.collections.ListView.T>)
// line 185
ITable* $tmp432 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp432 = $tmp432->next;
}
$fn434 $tmp433 = $tmp432->methods[0];
panda$collections$Iterator* $tmp435 = $tmp433(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp436 = $tmp435->$class->itable;
while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
panda$core$Bit $tmp439 = $tmp437($tmp435);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$Object*) NULL);
ITable* $tmp441 = $tmp435->$class->itable;
while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp441 = $tmp441->next;
}
$fn443 $tmp442 = $tmp441->methods[1];
panda$core$Object* $tmp444 = $tmp442($tmp435);
panda$core$Panda$ref$panda$core$Object$Q($tmp444);
panda$core$Object* $tmp445 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp445);
*(&local1) = $tmp444;
// line 186
panda$core$Object* $tmp446 = *(&local1);
panda$core$Int8** $tmp447 = &param1->pointer;
panda$core$Int8* $tmp448 = *$tmp447;
panda$core$Object** $tmp449 = &param1->target;
panda$core$Object* $tmp450 = *$tmp449;
bool $tmp451 = $tmp450 != ((panda$core$Object*) NULL);
if ($tmp451) goto block6; else goto block7;
block7:;
panda$core$Bit $tmp453 = (($fn452) $tmp448)($tmp446);
*(&local2) = $tmp453;
goto block8;
block6:;
panda$core$Bit $tmp455 = (($fn454) $tmp448)($tmp450, $tmp446);
*(&local2) = $tmp455;
goto block8;
block8:;
panda$core$Bit $tmp456 = *(&local2);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block4; else goto block5;
block4:;
// line 187
panda$collections$Array* $tmp458 = *(&local0);
panda$core$Object* $tmp459 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp458, $tmp459);
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp444);
// unreffing REF($29:panda.collections.Iterator.T)
panda$core$Object* $tmp460 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp460);
// unreffing v
*(&local1) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
// unreffing REF($18:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 190
panda$collections$Array* $tmp461 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp461)));
panda$collections$Array* $tmp462 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp461);

}
panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0) {

// line 196
panda$collections$ListView$ListIterator* $tmp463 = (panda$collections$ListView$ListIterator*) frostObjectAlloc(32, (panda$core$Class*) &panda$collections$ListView$ListIterator$class);
panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT($tmp463, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp463)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing REF($1:panda.collections.ListView.ListIterator<panda.collections.ListView.T>)
return ((panda$collections$Iterator*) $tmp463);

}
panda$collections$ListView* panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$MutableMethod* param1) {

panda$collections$Array* local0 = NULL;
// line 209
panda$collections$Array* $tmp464 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp464, ((panda$collections$CollectionView*) param0));
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
panda$collections$Array* $tmp465 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
*(&local0) = $tmp464;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
// unreffing REF($1:panda.collections.Array<panda.collections.ListView.T>)
// line 210
panda$collections$Array* $tmp466 = *(&local0);
panda$core$Int64 $tmp467 = (panda$core$Int64) {0};
ITable* $tmp468 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp468->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp468 = $tmp468->next;
}
$fn470 $tmp469 = $tmp468->methods[0];
panda$core$Int64 $tmp471 = $tmp469(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp472 = (panda$core$Int64) {1};
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473 - $tmp474;
panda$core$Int64 $tmp476 = (panda$core$Int64) {$tmp475};
panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(((panda$collections$List*) $tmp466), $tmp467, $tmp476, param1);
// line 211
panda$collections$Array* $tmp477 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp477)));
panda$collections$Array* $tmp478 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp477);

}

