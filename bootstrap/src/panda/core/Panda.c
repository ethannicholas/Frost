#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Maybe.h"
#include "panda/core/Int64.h"
#include "panda/core/Error.h"
#include "panda/collections/Key.h"
#include "panda/core/Bit.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Iterator.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/Char8.h"
#include "panda/core/String/Index.h"
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/ListView.h"
#include "panda/core/Comparable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/List.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/MutableMethod.h"


static panda$core$String $s1;
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup, panda$core$Panda$countAllocation$panda$core$Class, panda$core$Panda$countDeallocation$panda$core$Class, panda$core$Panda$dumpReport, panda$core$Panda$countTrace$panda$core$String} };

typedef panda$collections$Iterator* (*$fn73)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn77)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn82)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn123)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn127)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn132)(panda$collections$Iterator*);
typedef void (*$fn185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn273)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn410)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Object* (*$fn492)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn601)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn606)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn610)(panda$collections$ListWriter*, panda$core$Int64, panda$core$Object*);
typedef void (*$fn614)(panda$collections$ListWriter*, panda$core$Int64, panda$core$Object*);
typedef panda$core$Object* (*$fn637)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn667)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn675)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn677)(panda$core$Object*, panda$core$Object*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 72, 6441745691729573983, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 72, 6441745691729573983, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x27", 73, -4164323057498451277, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x27", 73, -4164323057498451277, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -635296898711655152, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x66\x72\x6f\x73\x74", 11, -6001131758862674051, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

void panda$core$Panda$init(panda$core$Panda* param0) {

// line 11
panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap** $tmp3 = &param0->allocations;
panda$collections$HashMap* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$HashMap** $tmp5 = &param0->allocations;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, panda.core.Int64>)
// line 13
panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$HashMap** $tmp7 = &param0->traces;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$collections$HashMap** $tmp9 = &param0->traces;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, panda.core.Int64>)
return;

}
panda$core$Maybe* panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$Object* param0) {

// line 21
panda$core$Maybe* $tmp10 = (panda$core$Maybe*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$Maybe$class);
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T($tmp10, $tmp11, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing REF($1:panda.core.Maybe<panda.core.Object>)
return $tmp10;

}
panda$core$Maybe* panda$core$Panda$error$panda$core$String$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$String* param0) {

// line 27
panda$core$Maybe* $tmp12 = (panda$core$Maybe*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$Maybe$class);
panda$core$Int64 $tmp13 = (panda$core$Int64) {1};
panda$core$Error* $tmp14 = (panda$core$Error*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Error$class);
panda$core$Error$init$panda$core$String($tmp14, param0);
panda$core$Maybe$init$panda$core$Int64$panda$core$Error($tmp12, $tmp13, $tmp14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($4:panda.core.Error)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($1:panda.core.Maybe<panda.core.Object>)
return $tmp12;

}
panda$core$String* panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(panda$core$Class* param0) {

// line 33
panda$core$String** $tmp15 = &param0->name;
panda$core$String* $tmp16 = *$tmp15;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
return $tmp16;

}
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* param0, panda$core$Class* param1) {

panda$core$String* local0 = NULL;
panda$core$Int64$nullable local1;
// line 37
panda$core$String* $tmp17 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$String* $tmp18 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local0) = $tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($1:panda.core.String)
// line 38
panda$collections$HashMap** $tmp19 = &param0->allocations;
panda$collections$HashMap* $tmp20 = *$tmp19;
panda$core$String* $tmp21 = *(&local0);
panda$core$Object* $tmp22 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp20, ((panda$collections$Key*) $tmp21));
*(&local1) = ($tmp22 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp22)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp22);
// unreffing REF($18:panda.collections.HashMap.V?)
// line 39
panda$core$Int64$nullable $tmp23 = *(&local1);
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit(!$tmp23.nonnull);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 40
panda$core$Int64 $tmp26 = (panda$core$Int64) {0};
*(&local1) = ((panda$core$Int64$nullable) { $tmp26, true });
goto block2;
block2:;
// line 42
panda$collections$HashMap** $tmp27 = &param0->allocations;
panda$collections$HashMap* $tmp28 = *$tmp27;
panda$core$String* $tmp29 = *(&local0);
panda$core$Int64$nullable $tmp30 = *(&local1);
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30.nonnull);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {42};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block3:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {1};
int64_t $tmp37 = ((panda$core$Int64) $tmp30.value).value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 + $tmp38;
panda$core$Int64 $tmp40 = (panda$core$Int64) {$tmp39};
panda$core$Int64$wrapper* $tmp41;
$tmp41 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp41->value = $tmp40;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp28, ((panda$collections$Key*) $tmp29), ((panda$core$Object*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($55:panda.collections.HashMap.V)
panda$core$String* $tmp42 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return;

}
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* param0, panda$core$Class* param1) {

panda$core$String* local0 = NULL;
panda$core$Int64$nullable local1;
// line 46
panda$core$String* $tmp43 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$String* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local0) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($1:panda.core.String)
// line 47
panda$collections$HashMap** $tmp45 = &param0->allocations;
panda$collections$HashMap* $tmp46 = *$tmp45;
panda$core$String* $tmp47 = *(&local0);
panda$core$Object* $tmp48 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp46, ((panda$collections$Key*) $tmp47));
*(&local1) = ($tmp48 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp48)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp48);
// unreffing REF($18:panda.collections.HashMap.V?)
// line 48
panda$core$Int64$nullable $tmp49 = *(&local1);
panda$core$Bit $tmp50 = panda$core$Bit$init$builtin_bit(!$tmp49.nonnull);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block1; else goto block2;
block1:;
// line 49
panda$core$Int64 $tmp52 = (panda$core$Int64) {0};
*(&local1) = ((panda$core$Int64$nullable) { $tmp52, true });
goto block2;
block2:;
// line 51
panda$collections$HashMap** $tmp53 = &param0->allocations;
panda$collections$HashMap* $tmp54 = *$tmp53;
panda$core$String* $tmp55 = *(&local0);
panda$core$Int64$nullable $tmp56 = *(&local1);
panda$core$Bit $tmp57 = panda$core$Bit$init$builtin_bit($tmp56.nonnull);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp59 = (panda$core$Int64) {51};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s60, $tmp59, &$s61);
abort(); // unreachable
block3:;
panda$core$Int64 $tmp62 = (panda$core$Int64) {1};
int64_t $tmp63 = ((panda$core$Int64) $tmp56.value).value;
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63 - $tmp64;
panda$core$Int64 $tmp66 = (panda$core$Int64) {$tmp65};
panda$core$Int64$wrapper* $tmp67;
$tmp67 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp67->value = $tmp66;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp54, ((panda$collections$Key*) $tmp55), ((panda$core$Object*) $tmp67));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($55:panda.collections.HashMap.V)
panda$core$String* $tmp68 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return;

}
void panda$core$Panda$dumpReport(panda$core$Panda* param0) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 55
panda$collections$HashMap** $tmp69 = &param0->allocations;
panda$collections$HashMap* $tmp70 = *$tmp69;
ITable* $tmp71 = ((panda$collections$MapView*) $tmp70)->$class->itable;
while ($tmp71->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[3];
panda$collections$Iterator* $tmp74 = $tmp72(((panda$collections$MapView*) $tmp70));
goto block1;
block1:;
ITable* $tmp75 = $tmp74->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
panda$core$Bit $tmp78 = $tmp76($tmp74);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp80 = $tmp74->$class->itable;
while ($tmp80->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[1];
panda$core$Object* $tmp83 = $tmp81($tmp74);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp83)));
panda$core$String* $tmp84 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
*(&local0) = ((panda$core$String*) $tmp83);
// line 56
panda$collections$HashMap** $tmp85 = &param0->allocations;
panda$collections$HashMap* $tmp86 = *$tmp85;
panda$core$String* $tmp87 = *(&local0);
panda$core$Object* $tmp88 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp86, ((panda$collections$Key*) $tmp87));
panda$core$Bit $tmp89 = panda$core$Bit$init$builtin_bit(($tmp88 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp88)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s92, $tmp91, &$s93);
abort(); // unreachable
block6:;
panda$core$Int64 $tmp94 = (panda$core$Int64) {0};
int64_t $tmp95 = ((panda$core$Int64) ($tmp88 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp88)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value).value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 != $tmp96;
panda$core$Bit $tmp98 = (panda$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp88);
// unreffing REF($30:panda.collections.HashMap.V?)
if ($tmp99) goto block4; else goto block5;
block4:;
// line 57
panda$core$String* $tmp100 = *(&local0);
panda$core$String* $tmp101 = panda$core$String$convert$R$panda$core$String($tmp100);
panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s103);
panda$collections$HashMap** $tmp104 = &param0->allocations;
panda$collections$HashMap* $tmp105 = *$tmp104;
panda$core$String* $tmp106 = *(&local0);
panda$core$Object* $tmp107 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp105, ((panda$collections$Key*) $tmp106));
panda$core$Bit $tmp108 = panda$core$Bit$init$builtin_bit(($tmp107 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp107)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {57};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block8:;
panda$core$Object* $tmp113;
if (($tmp107 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp107)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp114;
    $tmp114 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp114->value = ((panda$core$Int64) ($tmp107 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp107)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp113 = ((panda$core$Object*) $tmp114);
}
else {
    $tmp113 = NULL;
}
panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp102, $tmp113);
panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp115, &$s117);
panda$io$Console$printLine$panda$core$String($tmp116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($70:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing REF($69:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp113);
// unreffing REF($68:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q($tmp107);
// unreffing REF($59:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($52:panda.core.String)
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp83);
// unreffing REF($16:panda.collections.Iterator.T)
panda$core$String* $tmp118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing k
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($5:panda.collections.Iterator<panda.collections.MapView.K>)
// line 60
panda$collections$HashMap** $tmp119 = &param0->traces;
panda$collections$HashMap* $tmp120 = *$tmp119;
ITable* $tmp121 = ((panda$collections$MapView*) $tmp120)->$class->itable;
while ($tmp121->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[3];
panda$collections$Iterator* $tmp124 = $tmp122(((panda$collections$MapView*) $tmp120));
goto block10;
block10:;
ITable* $tmp125 = $tmp124->$class->itable;
while ($tmp125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[0];
panda$core$Bit $tmp128 = $tmp126($tmp124);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block12; else goto block11;
block11:;
*(&local1) = ((panda$core$String*) NULL);
ITable* $tmp130 = $tmp124->$class->itable;
while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[1];
panda$core$Object* $tmp133 = $tmp131($tmp124);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp133)));
panda$core$String* $tmp134 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
*(&local1) = ((panda$core$String*) $tmp133);
// line 61
panda$core$String* $tmp135 = *(&local1);
panda$core$String* $tmp136 = panda$core$String$convert$R$panda$core$String($tmp135);
panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s138);
panda$collections$HashMap** $tmp139 = &param0->traces;
panda$collections$HashMap* $tmp140 = *$tmp139;
panda$core$String* $tmp141 = *(&local1);
panda$core$Object* $tmp142 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp140, ((panda$collections$Key*) $tmp141));
panda$core$Bit $tmp143 = panda$core$Bit$init$builtin_bit(($tmp142 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp142)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp145 = (panda$core$Int64) {61};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block13:;
panda$core$Object* $tmp148;
if (($tmp142 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp142)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp149;
    $tmp149 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp149->value = ((panda$core$Int64) ($tmp142 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp142)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp148 = ((panda$core$Object*) $tmp149);
}
else {
    $tmp148 = NULL;
}
panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp137, $tmp148);
panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s152);
panda$io$Console$printLine$panda$core$String($tmp151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($146:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp148);
// unreffing REF($145:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q($tmp142);
// unreffing REF($136:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($130:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($129:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp133);
// unreffing REF($119:panda.collections.Iterator.T)
panda$core$String* $tmp153 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing k
*(&local1) = ((panda$core$String*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($108:panda.collections.Iterator<panda.collections.MapView.K>)
return;

}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* param0, panda$core$String* param1) {

panda$core$Int64$nullable local0;
// line 78
panda$collections$HashMap** $tmp154 = &param0->traces;
panda$collections$HashMap* $tmp155 = *$tmp154;
panda$core$Object* $tmp156 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp155, ((panda$collections$Key*) param1));
*(&local0) = ($tmp156 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp156)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp156);
// unreffing REF($5:panda.collections.HashMap.V?)
// line 79
panda$core$Int64$nullable $tmp157 = *(&local0);
panda$core$Bit $tmp158 = panda$core$Bit$init$builtin_bit(!$tmp157.nonnull);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block1; else goto block2;
block1:;
// line 80
panda$core$Int64 $tmp160 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp160, true });
goto block2;
block2:;
// line 82
panda$collections$HashMap** $tmp161 = &param0->traces;
panda$collections$HashMap* $tmp162 = *$tmp161;
panda$core$Int64$nullable $tmp163 = *(&local0);
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit($tmp163.nonnull);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp166 = (panda$core$Int64) {82};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s167, $tmp166, &$s168);
abort(); // unreachable
block3:;
panda$core$Int64 $tmp169 = (panda$core$Int64) {1};
int64_t $tmp170 = ((panda$core$Int64) $tmp163.value).value;
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170 + $tmp171;
panda$core$Int64 $tmp173 = (panda$core$Int64) {$tmp172};
panda$core$Int64$wrapper* $tmp174;
$tmp174 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp174->value = $tmp173;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp162, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp174));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($41:panda.collections.HashMap.V)
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* param0, panda$core$Int64 param1) {

// line 99
panda$io$OutputStream* $tmp175 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, param0);
panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s179);
panda$core$Int64$wrapper* $tmp180;
$tmp180 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp180->value = param1;
panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp178, ((panda$core$Object*) $tmp180));
panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s183);
$fn185 $tmp184 = ($fn185) $tmp175->$class->vtable[19];
$tmp184($tmp175, $tmp182);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing REF($4:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($1:panda.io.OutputStream)
// line 100
panda$core$System$crash();
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 105
panda$io$OutputStream* $tmp186 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s188, param0);
panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s190);
panda$core$Int64$wrapper* $tmp191;
$tmp191 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp191->value = param1;
panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp189, ((panda$core$Object*) $tmp191));
panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s194);
panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, param2);
panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s197);
$fn199 $tmp198 = ($fn199) $tmp186->$class->vtable[19];
$tmp198($tmp186, $tmp196);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($4:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing REF($1:panda.io.OutputStream)
// line 106
panda$core$System$crash();
return;

}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 111
panda$core$Int32 $tmp200 = (panda$core$Int32) {48};
panda$core$Char32 $tmp201 = panda$core$Char32$init$panda$core$Int32($tmp200);
panda$core$Bit $tmp202 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp201);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block3; else goto block4;
block3:;
panda$core$Int32 $tmp204 = (panda$core$Int32) {57};
panda$core$Char32 $tmp205 = panda$core$Char32$init$panda$core$Int32($tmp204);
panda$core$Bit $tmp206 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp205);
*(&local0) = $tmp206;
goto block5;
block4:;
*(&local0) = $tmp202;
goto block5;
block5:;
panda$core$Bit $tmp207 = *(&local0);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block1; else goto block2;
block1:;
// line 112
panda$core$UInt64 $tmp209 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp210 = (panda$core$UInt8) {48};
panda$core$Char8 $tmp211 = panda$core$Char8$init$panda$core$UInt8($tmp210);
panda$core$UInt64 $tmp212 = panda$core$Char8$convert$R$panda$core$UInt64($tmp211);
uint64_t $tmp213 = $tmp209.value;
uint64_t $tmp214 = $tmp212.value;
uint64_t $tmp215 = $tmp213 - $tmp214;
panda$core$UInt64 $tmp216 = (panda$core$UInt64) {$tmp215};
return ((panda$core$UInt64$nullable) { $tmp216, true });
block2:;
// line 114
panda$core$Int32 $tmp217 = (panda$core$Int32) {65};
panda$core$Char32 $tmp218 = panda$core$Char32$init$panda$core$Int32($tmp217);
panda$core$Bit $tmp219 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block8; else goto block9;
block8:;
panda$core$Int32 $tmp221 = (panda$core$Int32) {90};
panda$core$Char32 $tmp222 = panda$core$Char32$init$panda$core$Int32($tmp221);
panda$core$Bit $tmp223 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp222);
*(&local1) = $tmp223;
goto block10;
block9:;
*(&local1) = $tmp219;
goto block10;
block10:;
panda$core$Bit $tmp224 = *(&local1);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block6; else goto block7;
block6:;
// line 115
panda$core$UInt64 $tmp226 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp227 = (panda$core$UInt8) {65};
panda$core$Char8 $tmp228 = panda$core$Char8$init$panda$core$UInt8($tmp227);
panda$core$UInt64 $tmp229 = panda$core$Char8$convert$R$panda$core$UInt64($tmp228);
uint64_t $tmp230 = $tmp226.value;
uint64_t $tmp231 = $tmp229.value;
uint64_t $tmp232 = $tmp230 - $tmp231;
panda$core$UInt64 $tmp233 = (panda$core$UInt64) {$tmp232};
panda$core$UInt64 $tmp234 = (panda$core$UInt64) {10};
uint64_t $tmp235 = $tmp233.value;
uint64_t $tmp236 = $tmp234.value;
uint64_t $tmp237 = $tmp235 + $tmp236;
panda$core$UInt64 $tmp238 = (panda$core$UInt64) {$tmp237};
return ((panda$core$UInt64$nullable) { $tmp238, true });
block7:;
// line 117
panda$core$Int32 $tmp239 = (panda$core$Int32) {97};
panda$core$Char32 $tmp240 = panda$core$Char32$init$panda$core$Int32($tmp239);
panda$core$Bit $tmp241 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block13; else goto block14;
block13:;
panda$core$Int32 $tmp243 = (panda$core$Int32) {122};
panda$core$Char32 $tmp244 = panda$core$Char32$init$panda$core$Int32($tmp243);
panda$core$Bit $tmp245 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp244);
*(&local2) = $tmp245;
goto block15;
block14:;
*(&local2) = $tmp241;
goto block15;
block15:;
panda$core$Bit $tmp246 = *(&local2);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block11; else goto block12;
block11:;
// line 118
panda$core$UInt64 $tmp248 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp249 = (panda$core$UInt8) {97};
panda$core$Char8 $tmp250 = panda$core$Char8$init$panda$core$UInt8($tmp249);
panda$core$UInt64 $tmp251 = panda$core$Char8$convert$R$panda$core$UInt64($tmp250);
uint64_t $tmp252 = $tmp248.value;
uint64_t $tmp253 = $tmp251.value;
uint64_t $tmp254 = $tmp252 - $tmp253;
panda$core$UInt64 $tmp255 = (panda$core$UInt64) {$tmp254};
panda$core$UInt64 $tmp256 = (panda$core$UInt64) {10};
uint64_t $tmp257 = $tmp255.value;
uint64_t $tmp258 = $tmp256.value;
uint64_t $tmp259 = $tmp257 + $tmp258;
panda$core$UInt64 $tmp260 = (panda$core$UInt64) {$tmp259};
return ((panda$core$UInt64$nullable) { $tmp260, true });
block12:;
// line 120
return ((panda$core$UInt64$nullable) { .nonnull = false });

}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$UInt64 local0;
panda$core$UInt64 local1;
panda$core$String$Index local2;
panda$core$UInt64$nullable local3;
panda$core$Bit local4;
// line 128
panda$core$Bit $tmp261 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s262);
bool $tmp263 = $tmp261.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 129
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 131
panda$core$UInt64 $tmp264 = (panda$core$UInt64) {0};
*(&local0) = $tmp264;
// line 132
panda$core$UInt64 $tmp265 = panda$core$Int64$convert$R$panda$core$UInt64(param1);
*(&local1) = $tmp265;
// line 133
panda$core$String$Index $tmp266 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp266;
// line 134
goto block3;
block3:;
panda$core$String$Index $tmp267 = *(&local2);
panda$core$String$Index$wrapper* $tmp268;
$tmp268 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp268->value = $tmp267;
panda$core$String$Index $tmp269 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$wrapper* $tmp270;
$tmp270 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp270->value = $tmp269;
ITable* $tmp271 = ((panda$core$Equatable*) $tmp268)->$class->itable;
while ($tmp271->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[1];
panda$core$Bit $tmp274 = $tmp272(((panda$core$Equatable*) $tmp268), ((panda$core$Equatable*) $tmp270));
bool $tmp275 = $tmp274.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp270)));
// unreffing REF($21:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp268)));
// unreffing REF($18:panda.core.Equatable<panda.core.String.Index>)
if ($tmp275) goto block4; else goto block5;
block4:;
// line 135
panda$core$String$Index $tmp276 = *(&local2);
panda$core$Char32 $tmp277 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp276);
panda$core$UInt64$nullable $tmp278 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp277);
*(&local3) = $tmp278;
// line 136
panda$core$UInt64$nullable $tmp279 = *(&local3);
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit(!$tmp279.nonnull);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block8; else goto block9;
block8:;
*(&local4) = $tmp280;
goto block10;
block9:;
panda$core$UInt64$nullable $tmp282 = *(&local3);
panda$core$Bit $tmp283 = panda$core$Bit$init$builtin_bit($tmp282.nonnull);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp285 = (panda$core$Int64) {136};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s286, $tmp285, &$s287);
abort(); // unreachable
block11:;
panda$core$UInt64 $tmp288 = *(&local1);
uint64_t $tmp289 = ((panda$core$UInt64) $tmp282.value).value;
uint64_t $tmp290 = $tmp288.value;
bool $tmp291 = $tmp289 >= $tmp290;
panda$core$Bit $tmp292 = (panda$core$Bit) {$tmp291};
*(&local4) = $tmp292;
goto block10;
block10:;
panda$core$Bit $tmp293 = *(&local4);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block6; else goto block7;
block6:;
// line 137
return ((panda$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 139
panda$core$UInt64 $tmp295 = *(&local0);
panda$core$UInt64 $tmp296 = *(&local1);
uint64_t $tmp297 = $tmp295.value;
uint64_t $tmp298 = $tmp296.value;
uint64_t $tmp299 = $tmp297 * $tmp298;
panda$core$UInt64 $tmp300 = (panda$core$UInt64) {$tmp299};
panda$core$UInt64$nullable $tmp301 = *(&local3);
panda$core$Bit $tmp302 = panda$core$Bit$init$builtin_bit($tmp301.nonnull);
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp304 = (panda$core$Int64) {139};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s305, $tmp304, &$s306);
abort(); // unreachable
block13:;
uint64_t $tmp307 = $tmp300.value;
uint64_t $tmp308 = ((panda$core$UInt64) $tmp301.value).value;
uint64_t $tmp309 = $tmp307 + $tmp308;
panda$core$UInt64 $tmp310 = (panda$core$UInt64) {$tmp309};
*(&local0) = $tmp310;
// line 140
panda$core$String$Index $tmp311 = *(&local2);
panda$core$String$Index $tmp312 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp311);
*(&local2) = $tmp312;
goto block3;
block5:;
// line 142
panda$core$UInt64 $tmp313 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp313, true });

}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Char32 local2;
// line 168
panda$core$Int64 $tmp314 = panda$core$String$get_length$R$panda$core$Int64(param1);
panda$core$Int64 $tmp315 = (panda$core$Int64) {2};
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 >= $tmp317;
panda$core$Bit $tmp319 = (panda$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp321 = (panda$core$Int64) {168};
panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s323, param1);
panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, &$s325);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s326, $tmp321, $tmp324);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($10:panda.core.String)
abort(); // unreachable
block1:;
// line 169
panda$core$String$Index $tmp327 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$String$Index $tmp328 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp327);
*(&local0) = $tmp328;
// line 170
panda$core$String$Index $tmp329 = *(&local0);
panda$core$Char32 $tmp330 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp329);
panda$core$Int32 $tmp331 = (panda$core$Int32) {60};
panda$core$Char32 $tmp332 = panda$core$Char32$init$panda$core$Int32($tmp331);
panda$core$Bit $tmp333 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp330, $tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp335 = (panda$core$Int32) {94};
panda$core$Char32 $tmp336 = panda$core$Char32$init$panda$core$Int32($tmp335);
panda$core$Bit $tmp337 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp330, $tmp336);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block4; else goto block6;
block6:;
panda$core$Int32 $tmp339 = (panda$core$Int32) {62};
panda$core$Char32 $tmp340 = panda$core$Char32$init$panda$core$Int32($tmp339);
panda$core$Bit $tmp341 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp330, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 175
panda$core$String$Index $tmp343 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local0) = $tmp343;
goto block3;
block3:;
// line 178
panda$core$String$Index $tmp344 = *(&local0);
panda$core$String$Index $tmp345 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp344);
panda$core$Bit $tmp346 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp347 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp345, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp346);
panda$core$String* $tmp348 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp347);
panda$core$Int64$nullable $tmp349 = panda$core$String$convert$R$panda$core$Int64$Q($tmp348);
panda$core$Bit $tmp350 = panda$core$Bit$init$builtin_bit($tmp349.nonnull);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp352 = (panda$core$Int64) {178};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s353, $tmp352, &$s354);
abort(); // unreachable
block8:;
*(&local1) = ((panda$core$Int64) $tmp349.value);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
// unreffing REF($53:panda.core.String)
// line 179
// line 180
panda$core$String$Index $tmp355 = *(&local0);
panda$core$String$Index $tmp356 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Bit $tmp357 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp355, $tmp356);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block10; else goto block12;
block10:;
// line 181
panda$core$Int32 $tmp359 = (panda$core$Int32) {32};
panda$core$Char32 $tmp360 = panda$core$Char32$init$panda$core$Int32($tmp359);
*(&local2) = $tmp360;
goto block11;
block12:;
// line 1
// line 184
panda$core$String$Index $tmp361 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Char32 $tmp362 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp361);
*(&local2) = $tmp362;
goto block11;
block11:;
// line 186
panda$core$String$Index $tmp363 = *(&local0);
panda$core$Char32 $tmp364 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp363);
panda$core$Int32 $tmp365 = (panda$core$Int32) {60};
panda$core$Char32 $tmp366 = panda$core$Char32$init$panda$core$Int32($tmp365);
panda$core$Bit $tmp367 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp364, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block14; else goto block15;
block14:;
// line 187
panda$core$Int64 $tmp369 = *(&local1);
panda$core$Char32 $tmp370 = *(&local2);
panda$core$String* $tmp371 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp369, $tmp370);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing REF($96:panda.core.String)
return $tmp371;
block15:;
panda$core$Int32 $tmp372 = (panda$core$Int32) {94};
panda$core$Char32 $tmp373 = panda$core$Char32$init$panda$core$Int32($tmp372);
panda$core$Bit $tmp374 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp364, $tmp373);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block16; else goto block17;
block16:;
// line 188
panda$core$Int64 $tmp376 = *(&local1);
panda$core$Char32 $tmp377 = *(&local2);
panda$core$String* $tmp378 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp376, $tmp377);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
// unreffing REF($111:panda.core.String)
return $tmp378;
block17:;
panda$core$Int32 $tmp379 = (panda$core$Int32) {62};
panda$core$Char32 $tmp380 = panda$core$Char32$init$panda$core$Int32($tmp379);
panda$core$Bit $tmp381 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp364, $tmp380);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block18; else goto block19;
block18:;
// line 189
panda$core$Int64 $tmp383 = *(&local1);
panda$core$Char32 $tmp384 = *(&local2);
panda$core$String* $tmp385 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp383, $tmp384);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($126:panda.core.String)
return $tmp385;
block19:;
// line 190
panda$core$Bit $tmp386 = panda$core$Bit$init$builtin_bit(false);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp388 = (panda$core$Int64) {190};
panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s390, param1);
panda$core$String* $tmp391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp389, &$s392);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s393, $tmp388, $tmp391);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
// unreffing REF($139:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
// unreffing REF($138:panda.core.String)
abort(); // unreachable
block20:;
goto block13;
block13:;
panda$core$Bit $tmp394 = panda$core$Bit$init$builtin_bit(false);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp396 = (panda$core$Int64) {167};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s397, $tmp396, &$s398);
abort(); // unreachable
block22:;
abort(); // unreachable

}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit param0, panda$core$UInt64 param1, panda$core$UInt64 param2, panda$core$String* param3) {

panda$core$String$Index local0;
panda$core$UInt64 local1;
panda$collections$ListView* local2 = NULL;
panda$core$UInt64 local3;
panda$core$Bit local4;
panda$core$Int64 local5;
panda$core$Char8* local6;
panda$core$Int64 local7;
panda$core$Bit local8;
panda$core$Int64 local9;
panda$core$Int64 local10;
// line 204
panda$core$String$Index $tmp399 = panda$core$String$get_start$R$panda$core$String$Index(param3);
*(&local0) = $tmp399;
// line 205
panda$core$UInt64 $tmp400 = (panda$core$UInt64) {10};
*(&local1) = $tmp400;
// line 206
panda$collections$ListView* $tmp401 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s402);
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
panda$collections$ListView* $tmp403 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
*(&local2) = $tmp401;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($7:panda.collections.ListView<panda.core.Char8>)
// line 207
panda$core$String$Index $tmp404 = *(&local0);
panda$core$String$Index$wrapper* $tmp405;
$tmp405 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp405->value = $tmp404;
panda$core$String$Index $tmp406 = panda$core$String$get_end$R$panda$core$String$Index(param3);
panda$core$String$Index$wrapper* $tmp407;
$tmp407 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp407->value = $tmp406;
ITable* $tmp408 = ((panda$core$Comparable*) $tmp405)->$class->itable;
while ($tmp408->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[1];
panda$core$Bit $tmp411 = $tmp409(((panda$core$Comparable*) $tmp405), ((panda$core$Comparable*) $tmp407));
bool $tmp412 = $tmp411.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp407)));
// unreffing REF($23:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp405)));
// unreffing REF($20:panda.core.Comparable<panda.core.String.Index>)
if ($tmp412) goto block1; else goto block2;
block1:;
// line 208
panda$core$String$Index $tmp413 = *(&local0);
panda$core$Char32 $tmp414 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param3, $tmp413);
panda$core$Int32 $tmp415 = (panda$core$Int32) {98};
panda$core$Char32 $tmp416 = panda$core$Char32$init$panda$core$Int32($tmp415);
panda$core$Bit $tmp417 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp416);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp419 = (panda$core$Int32) {66};
panda$core$Char32 $tmp420 = panda$core$Char32$init$panda$core$Int32($tmp419);
panda$core$Bit $tmp421 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block4; else goto block6;
block4:;
// line 210
panda$core$UInt64 $tmp423 = (panda$core$UInt64) {2};
*(&local1) = $tmp423;
goto block3;
block6:;
panda$core$Int32 $tmp424 = (panda$core$Int32) {111};
panda$core$Char32 $tmp425 = panda$core$Char32$init$panda$core$Int32($tmp424);
panda$core$Bit $tmp426 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block7; else goto block8;
block8:;
panda$core$Int32 $tmp428 = (panda$core$Int32) {79};
panda$core$Char32 $tmp429 = panda$core$Char32$init$panda$core$Int32($tmp428);
panda$core$Bit $tmp430 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block7; else goto block9;
block7:;
// line 213
panda$core$UInt64 $tmp432 = (panda$core$UInt64) {8};
*(&local1) = $tmp432;
goto block3;
block9:;
panda$core$Int32 $tmp433 = (panda$core$Int32) {100};
panda$core$Char32 $tmp434 = panda$core$Char32$init$panda$core$Int32($tmp433);
panda$core$Bit $tmp435 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block10; else goto block11;
block11:;
panda$core$Int32 $tmp437 = (panda$core$Int32) {68};
panda$core$Char32 $tmp438 = panda$core$Char32$init$panda$core$Int32($tmp437);
panda$core$Bit $tmp439 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block10; else goto block12;
block10:;
// line 216
panda$core$UInt64 $tmp441 = (panda$core$UInt64) {10};
*(&local1) = $tmp441;
goto block3;
block12:;
panda$core$Int32 $tmp442 = (panda$core$Int32) {120};
panda$core$Char32 $tmp443 = panda$core$Char32$init$panda$core$Int32($tmp442);
panda$core$Bit $tmp444 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp443);
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block13; else goto block14;
block13:;
// line 219
panda$core$UInt64 $tmp446 = (panda$core$UInt64) {16};
*(&local1) = $tmp446;
goto block3;
block14:;
panda$core$Int32 $tmp447 = (panda$core$Int32) {88};
panda$core$Char32 $tmp448 = panda$core$Char32$init$panda$core$Int32($tmp447);
panda$core$Bit $tmp449 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp414, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block15; else goto block16;
block15:;
// line 222
panda$core$UInt64 $tmp451 = (panda$core$UInt64) {16};
*(&local1) = $tmp451;
// line 223
panda$collections$ListView* $tmp452 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s453);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
panda$collections$ListView* $tmp454 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
*(&local2) = $tmp452;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
// unreffing REF($97:panda.collections.ListView<panda.core.Char8>)
goto block3;
block16:;
// line 226
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit(false);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp457 = (panda$core$Int64) {226};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s458, $tmp457, &$s459);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 230
// line 231
bool $tmp460 = param0.value;
if ($tmp460) goto block21; else goto block22;
block21:;
panda$core$UInt64 $tmp461 = *(&local1);
panda$core$UInt64 $tmp462 = (panda$core$UInt64) {10};
uint64_t $tmp463 = $tmp461.value;
uint64_t $tmp464 = $tmp462.value;
bool $tmp465 = $tmp463 != $tmp464;
panda$core$Bit $tmp466 = (panda$core$Bit) {$tmp465};
*(&local4) = $tmp466;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
panda$core$Bit $tmp467 = *(&local4);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block19; else goto block24;
block19:;
// line 232
panda$core$Int64 $tmp469 = panda$core$UInt64$convert$R$panda$core$Int64(param1);
panda$core$Int64 $tmp470 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp469);
panda$core$UInt64 $tmp471 = panda$core$Int64$convert$R$panda$core$UInt64($tmp470);
panda$core$UInt64 $tmp472 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp471, param2);
*(&local3) = $tmp472;
goto block20;
block24:;
// line 1
// line 235
*(&local3) = param1;
goto block20;
block20:;
// line 237
panda$core$Int64 $tmp473 = (panda$core$Int64) {64};
*(&local5) = $tmp473;
// line 238
panda$core$Int64 $tmp474 = *(&local5);
int64_t $tmp475 = $tmp474.value;
panda$core$Char8* $tmp476 = ((panda$core$Char8*) frostAlloc($tmp475 * 1));
*(&local6) = $tmp476;
// line 239
panda$core$Int64 $tmp477 = *(&local5);
panda$core$Int64 $tmp478 = (panda$core$Int64) {1};
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479 - $tmp480;
panda$core$Int64 $tmp482 = (panda$core$Int64) {$tmp481};
*(&local7) = $tmp482;
// line 240
goto block25;
block25:;
// line 241
panda$core$Char8* $tmp483 = *(&local6);
panda$core$Int64 $tmp484 = *(&local7);
panda$collections$ListView* $tmp485 = *(&local2);
panda$core$UInt64 $tmp486 = *(&local3);
panda$core$UInt64 $tmp487 = *(&local1);
panda$core$UInt64 $tmp488 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp486, $tmp487);
panda$core$Int64 $tmp489 = panda$core$UInt64$convert$R$panda$core$Int64($tmp488);
ITable* $tmp490 = $tmp485->$class->itable;
while ($tmp490->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp490 = $tmp490->next;
}
$fn492 $tmp491 = $tmp490->methods[0];
panda$core$Object* $tmp493 = $tmp491($tmp485, $tmp489);
int64_t $tmp494 = $tmp484.value;
$tmp483[$tmp494] = ((panda$core$Char8$wrapper*) $tmp493)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp493);
// unreffing REF($173:panda.collections.ListView.T)
// line 242
panda$core$UInt64 $tmp495 = *(&local3);
panda$core$UInt64 $tmp496 = *(&local1);
uint64_t $tmp497 = $tmp495.value;
uint64_t $tmp498 = $tmp496.value;
uint64_t $tmp499 = $tmp497 / $tmp498;
panda$core$UInt64 $tmp500 = (panda$core$UInt64) {$tmp499};
*(&local3) = $tmp500;
// line 243
panda$core$Int64 $tmp501 = *(&local7);
panda$core$Int64 $tmp502 = (panda$core$Int64) {1};
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503 - $tmp504;
panda$core$Int64 $tmp506 = (panda$core$Int64) {$tmp505};
*(&local7) = $tmp506;
goto block26;
block26:;
panda$core$UInt64 $tmp507 = *(&local3);
panda$core$UInt64 $tmp508 = (panda$core$UInt64) {0};
uint64_t $tmp509 = $tmp507.value;
uint64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 > $tmp510;
panda$core$Bit $tmp512 = (panda$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block25; else goto block27;
block27:;
// line 246
bool $tmp514 = param0.value;
if ($tmp514) goto block30; else goto block31;
block30:;
panda$core$UInt64 $tmp515 = *(&local1);
panda$core$UInt64 $tmp516 = (panda$core$UInt64) {10};
panda$core$Bit $tmp517 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit($tmp515, $tmp516);
*(&local8) = $tmp517;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
panda$core$Bit $tmp518 = *(&local8);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block28; else goto block29;
block28:;
// line 247
panda$core$Char8* $tmp520 = *(&local6);
panda$core$Int64 $tmp521 = *(&local7);
panda$core$UInt8 $tmp522 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp523 = panda$core$Char8$init$panda$core$UInt8($tmp522);
int64_t $tmp524 = $tmp521.value;
$tmp520[$tmp524] = $tmp523;
// line 248
panda$core$Int64 $tmp525 = *(&local7);
panda$core$Int64 $tmp526 = (panda$core$Int64) {1};
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527 - $tmp528;
panda$core$Int64 $tmp530 = (panda$core$Int64) {$tmp529};
*(&local7) = $tmp530;
goto block29;
block29:;
// line 250
panda$core$Int64 $tmp531 = *(&local7);
panda$core$Int64 $tmp532 = (panda$core$Int64) {1};
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 + $tmp534;
panda$core$Int64 $tmp536 = (panda$core$Int64) {$tmp535};
*(&local7) = $tmp536;
// line 251
panda$core$Int64 $tmp537 = *(&local5);
panda$core$Int64 $tmp538 = *(&local7);
int64_t $tmp539 = $tmp537.value;
int64_t $tmp540 = $tmp538.value;
int64_t $tmp541 = $tmp539 - $tmp540;
panda$core$Int64 $tmp542 = (panda$core$Int64) {$tmp541};
*(&local9) = $tmp542;
// line 252
panda$core$Int64 $tmp543 = (panda$core$Int64) {0};
panda$core$Int64 $tmp544 = *(&local9);
panda$core$Bit $tmp545 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp546 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp543, $tmp544, $tmp545);
panda$core$Int64 $tmp547 = $tmp546.min;
*(&local10) = $tmp547;
panda$core$Int64 $tmp548 = $tmp546.max;
panda$core$Bit $tmp549 = $tmp546.inclusive;
bool $tmp550 = $tmp549.value;
panda$core$Int64 $tmp551 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp552 = panda$core$Int64$convert$R$panda$core$UInt64($tmp551);
if ($tmp550) goto block36; else goto block37;
block36:;
int64_t $tmp553 = $tmp547.value;
int64_t $tmp554 = $tmp548.value;
bool $tmp555 = $tmp553 <= $tmp554;
panda$core$Bit $tmp556 = (panda$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block33; else goto block34;
block37:;
int64_t $tmp558 = $tmp547.value;
int64_t $tmp559 = $tmp548.value;
bool $tmp560 = $tmp558 < $tmp559;
panda$core$Bit $tmp561 = (panda$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block33; else goto block34;
block33:;
// line 253
panda$core$Char8* $tmp563 = *(&local6);
panda$core$Int64 $tmp564 = *(&local10);
panda$core$Char8* $tmp565 = *(&local6);
panda$core$Int64 $tmp566 = *(&local10);
panda$core$Int64 $tmp567 = *(&local7);
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 + $tmp569;
panda$core$Int64 $tmp571 = (panda$core$Int64) {$tmp570};
int64_t $tmp572 = $tmp571.value;
panda$core$Char8 $tmp573 = $tmp565[$tmp572];
int64_t $tmp574 = $tmp564.value;
$tmp563[$tmp574] = $tmp573;
goto block35;
block35:;
panda$core$Int64 $tmp575 = *(&local10);
int64_t $tmp576 = $tmp548.value;
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576 - $tmp577;
panda$core$Int64 $tmp579 = (panda$core$Int64) {$tmp578};
panda$core$UInt64 $tmp580 = panda$core$Int64$convert$R$panda$core$UInt64($tmp579);
if ($tmp550) goto block39; else goto block40;
block39:;
uint64_t $tmp581 = $tmp580.value;
uint64_t $tmp582 = $tmp552.value;
bool $tmp583 = $tmp581 >= $tmp582;
panda$core$Bit $tmp584 = (panda$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block38; else goto block34;
block40:;
uint64_t $tmp586 = $tmp580.value;
uint64_t $tmp587 = $tmp552.value;
bool $tmp588 = $tmp586 > $tmp587;
panda$core$Bit $tmp589 = (panda$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block38; else goto block34;
block38:;
int64_t $tmp591 = $tmp575.value;
int64_t $tmp592 = $tmp551.value;
int64_t $tmp593 = $tmp591 + $tmp592;
panda$core$Int64 $tmp594 = (panda$core$Int64) {$tmp593};
*(&local10) = $tmp594;
goto block33;
block34:;
// line 255
panda$core$String* $tmp595 = (panda$core$String*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp596 = *(&local6);
panda$core$Int64 $tmp597 = *(&local9);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp595, $tmp596, $tmp597);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
// unreffing REF($316:panda.core.String)
panda$collections$ListView* $tmp598 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing digits
*(&local2) = ((panda$collections$ListView*) NULL);
return $tmp595;

}
void panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(panda$collections$List* param0, panda$core$Int64 param1, panda$core$Int64 param2) {

panda$core$Object* local0 = NULL;
// line 277
ITable* $tmp599 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp599->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp599 = $tmp599->next;
}
$fn601 $tmp600 = $tmp599->methods[0];
panda$core$Object* $tmp602 = $tmp600(((panda$collections$ListView*) param0), param1);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp602);
panda$core$Object* $tmp603 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp603);
*(&local0) = $tmp602;
panda$core$Panda$unref$panda$core$Object$Q($tmp602);
// unreffing REF($4:panda.collections.ListView.T)
// line 278
ITable* $tmp604 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp604->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[0];
panda$core$Object* $tmp607 = $tmp605(((panda$collections$ListView*) param0), param2);
ITable* $tmp608 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp608->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp608 = $tmp608->next;
}
$fn610 $tmp609 = $tmp608->methods[0];
$tmp609(((panda$collections$ListWriter*) param0), param1, $tmp607);
panda$core$Panda$unref$panda$core$Object$Q($tmp607);
// unreffing REF($21:panda.collections.ListView.T)
// line 279
panda$core$Object* $tmp611 = *(&local0);
ITable* $tmp612 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp612->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp612 = $tmp612->next;
}
$fn614 $tmp613 = $tmp612->methods[0];
$tmp613(((panda$collections$ListWriter*) param0), param2, $tmp611);
panda$core$Object* $tmp615 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp615);
// unreffing tmp
*(&local0) = ((panda$core$Object*) NULL);
return;

}
void panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* param0, panda$core$Int64 param1, panda$core$Int64 param2, panda$core$MutableMethod* param3) {

panda$core$Int64 local0;
panda$core$Object* local1 = NULL;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 286
int64_t $tmp616 = param1.value;
int64_t $tmp617 = param2.value;
bool $tmp618 = $tmp616 >= $tmp617;
panda$core$Bit $tmp619 = (panda$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block1; else goto block2;
block1:;
// line 287
return;
block2:;
// line 289
int64_t $tmp621 = param2.value;
int64_t $tmp622 = param1.value;
int64_t $tmp623 = $tmp621 - $tmp622;
panda$core$Int64 $tmp624 = (panda$core$Int64) {$tmp623};
panda$core$Int64 $tmp625 = (panda$core$Int64) {2};
int64_t $tmp626 = $tmp624.value;
int64_t $tmp627 = $tmp625.value;
int64_t $tmp628 = $tmp626 / $tmp627;
panda$core$Int64 $tmp629 = (panda$core$Int64) {$tmp628};
int64_t $tmp630 = param1.value;
int64_t $tmp631 = $tmp629.value;
int64_t $tmp632 = $tmp630 + $tmp631;
panda$core$Int64 $tmp633 = (panda$core$Int64) {$tmp632};
*(&local0) = $tmp633;
// line 290
panda$core$Int64 $tmp634 = *(&local0);
ITable* $tmp635 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp635->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp635 = $tmp635->next;
}
$fn637 $tmp636 = $tmp635->methods[0];
panda$core$Object* $tmp638 = $tmp636(((panda$collections$ListView*) param0), $tmp634);
*(&local1) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp638);
panda$core$Object* $tmp639 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp639);
*(&local1) = $tmp638;
panda$core$Panda$unref$panda$core$Object$Q($tmp638);
// unreffing REF($29:panda.collections.ListView.T)
// line 291
panda$core$Int64 $tmp640 = *(&local0);
panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(param0, param2, $tmp640);
// line 292
*(&local2) = param1;
// line 293
panda$core$Int64 $tmp641 = (panda$core$Int64) {1};
int64_t $tmp642 = param2.value;
int64_t $tmp643 = $tmp641.value;
int64_t $tmp644 = $tmp642 - $tmp643;
panda$core$Int64 $tmp645 = (panda$core$Int64) {$tmp644};
panda$core$Bit $tmp646 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp647 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(param1, $tmp645, $tmp646);
panda$core$Int64 $tmp648 = $tmp647.min;
*(&local3) = $tmp648;
panda$core$Int64 $tmp649 = $tmp647.max;
panda$core$Bit $tmp650 = $tmp647.inclusive;
bool $tmp651 = $tmp650.value;
panda$core$Int64 $tmp652 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp653 = panda$core$Int64$convert$R$panda$core$UInt64($tmp652);
if ($tmp651) goto block6; else goto block7;
block6:;
int64_t $tmp654 = $tmp648.value;
int64_t $tmp655 = $tmp649.value;
bool $tmp656 = $tmp654 <= $tmp655;
panda$core$Bit $tmp657 = (panda$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block3; else goto block4;
block7:;
int64_t $tmp659 = $tmp648.value;
int64_t $tmp660 = $tmp649.value;
bool $tmp661 = $tmp659 < $tmp660;
panda$core$Bit $tmp662 = (panda$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block3; else goto block4;
block3:;
// line 294
panda$core$Int64 $tmp664 = *(&local3);
ITable* $tmp665 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp665->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp665 = $tmp665->next;
}
$fn667 $tmp666 = $tmp665->methods[0];
panda$core$Object* $tmp668 = $tmp666(((panda$collections$ListView*) param0), $tmp664);
panda$core$Object* $tmp669 = *(&local1);
panda$core$Int8** $tmp670 = &param3->pointer;
panda$core$Int8* $tmp671 = *$tmp670;
panda$core$Object** $tmp672 = &param3->target;
panda$core$Object* $tmp673 = *$tmp672;
bool $tmp674 = $tmp673 != ((panda$core$Object*) NULL);
if ($tmp674) goto block10; else goto block11;
block11:;
panda$core$Bit $tmp676 = (($fn675) $tmp671)($tmp668, $tmp669);
*(&local4) = $tmp676;
goto block12;
block10:;
panda$core$Bit $tmp678 = (($fn677) $tmp671)($tmp673, $tmp668, $tmp669);
*(&local4) = $tmp678;
goto block12;
block12:;
panda$core$Bit $tmp679 = *(&local4);
panda$core$Bit $tmp680 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp679);
bool $tmp681 = $tmp680.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp668);
// unreffing REF($80:panda.collections.ListView.T)
if ($tmp681) goto block8; else goto block9;
block8:;
// line 295
panda$core$Int64 $tmp682 = *(&local3);
panda$core$Int64 $tmp683 = *(&local2);
panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(param0, $tmp682, $tmp683);
// line 296
panda$core$Int64 $tmp684 = *(&local2);
panda$core$Int64 $tmp685 = (panda$core$Int64) {1};
int64_t $tmp686 = $tmp684.value;
int64_t $tmp687 = $tmp685.value;
int64_t $tmp688 = $tmp686 + $tmp687;
panda$core$Int64 $tmp689 = (panda$core$Int64) {$tmp688};
*(&local2) = $tmp689;
goto block9;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp690 = *(&local3);
int64_t $tmp691 = $tmp649.value;
int64_t $tmp692 = $tmp690.value;
int64_t $tmp693 = $tmp691 - $tmp692;
panda$core$Int64 $tmp694 = (panda$core$Int64) {$tmp693};
panda$core$UInt64 $tmp695 = panda$core$Int64$convert$R$panda$core$UInt64($tmp694);
if ($tmp651) goto block14; else goto block15;
block14:;
uint64_t $tmp696 = $tmp695.value;
uint64_t $tmp697 = $tmp653.value;
bool $tmp698 = $tmp696 >= $tmp697;
panda$core$Bit $tmp699 = (panda$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block13; else goto block4;
block15:;
uint64_t $tmp701 = $tmp695.value;
uint64_t $tmp702 = $tmp653.value;
bool $tmp703 = $tmp701 > $tmp702;
panda$core$Bit $tmp704 = (panda$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block13; else goto block4;
block13:;
int64_t $tmp706 = $tmp690.value;
int64_t $tmp707 = $tmp652.value;
int64_t $tmp708 = $tmp706 + $tmp707;
panda$core$Int64 $tmp709 = (panda$core$Int64) {$tmp708};
*(&local3) = $tmp709;
goto block3;
block4:;
// line 299
panda$core$Int64 $tmp710 = *(&local2);
panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(param0, $tmp710, param2);
// line 300
panda$core$Int64 $tmp711 = *(&local2);
panda$core$Int64 $tmp712 = (panda$core$Int64) {1};
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712.value;
int64_t $tmp715 = $tmp713 - $tmp714;
panda$core$Int64 $tmp716 = (panda$core$Int64) {$tmp715};
panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(param0, param1, $tmp716, param3);
// line 301
panda$core$Int64 $tmp717 = *(&local2);
panda$core$Int64 $tmp718 = (panda$core$Int64) {1};
int64_t $tmp719 = $tmp717.value;
int64_t $tmp720 = $tmp718.value;
int64_t $tmp721 = $tmp719 + $tmp720;
panda$core$Int64 $tmp722 = (panda$core$Int64) {$tmp721};
panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(param0, $tmp722, param2, param3);
panda$core$Object* $tmp723 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp723);
// unreffing pivot
*(&local1) = ((panda$core$Object*) NULL);
return;

}
void panda$core$Panda$cleanup(panda$core$Panda* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp724 = &param0->allocations;
panda$collections$HashMap* $tmp725 = *$tmp724;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
panda$collections$HashMap** $tmp726 = &param0->traces;
panda$collections$HashMap* $tmp727 = *$tmp726;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
return;

}

