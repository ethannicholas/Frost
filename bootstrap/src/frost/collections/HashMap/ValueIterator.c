#include "frost/collections/HashMap/ValueIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashMap/EntryIterator.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap/Entry.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$ValueIterator$next$R$frost$collections$HashMap$ValueIterator$V$shim(frost$collections$HashMap$ValueIterator* p0) {
    frost$core$Object* result = frost$collections$HashMap$ValueIterator$next$R$frost$collections$HashMap$ValueIterator$V(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$HashMap$ValueIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$HashMap$ValueIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$ValueIterator$next$R$frost$collections$HashMap$ValueIterator$V$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$HashMap$ValueIterator$class_type frost$collections$HashMap$ValueIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$ValueIterator$_frost$collections$Iterator, { frost$core$Object$convert$R$frost$core$String, frost$collections$HashMap$ValueIterator$cleanup, frost$collections$HashMap$ValueIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$ValueIterator$next$R$frost$collections$HashMap$ValueIterator$V$shim} };

typedef frost$core$Bit (*$fn9)(frost$collections$HashMap$EntryIterator*);
typedef frost$core$Bit (*$fn13)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$HashMap$EntryIterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x61\x6c\x75\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 1164343097112902117, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x61\x6c\x75\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x61\x6c\x75\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56", 120, -319571293458475341, NULL };

void frost$collections$HashMap$ValueIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$ValueIterator$K$Cfrost$collections$HashMap$ValueIterator$V$GT(frost$collections$HashMap$ValueIterator* param0, frost$collections$HashMap* param1) {

// line 102
frost$collections$HashMap$EntryIterator* $tmp2 = (frost$collections$HashMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$EntryIterator$class);
frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT($tmp2, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap$EntryIterator** $tmp3 = &param0->base;
frost$collections$HashMap$EntryIterator* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap$EntryIterator** $tmp5 = &param0->base;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($2:frost.collections.HashMap.EntryIterator<frost.collections.HashMap.ValueIterator.K, frost.collections.HashMap.ValueIterator.V>)
return;

}
frost$core$Bit frost$collections$HashMap$ValueIterator$get_done$R$frost$core$Bit(frost$collections$HashMap$ValueIterator* param0) {

// line 107
frost$collections$HashMap$EntryIterator** $tmp6 = &param0->base;
frost$collections$HashMap$EntryIterator* $tmp7 = *$tmp6;
$fn9 $tmp8 = ($fn9) $tmp7->$class->vtable[2];
frost$core$Bit $tmp10 = $tmp8($tmp7);
return $tmp10;

}
frost$core$Object* frost$collections$HashMap$ValueIterator$next$R$frost$collections$HashMap$ValueIterator$V(frost$collections$HashMap$ValueIterator* param0) {

ITable* $tmp11 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Bit $tmp14 = $tmp12(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp15 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {111};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block1:;
// line 112
frost$collections$HashMap$EntryIterator** $tmp20 = &param0->base;
frost$collections$HashMap$EntryIterator* $tmp21 = *$tmp20;
$fn23 $tmp22 = ($fn23) $tmp21->$class->vtable[3];
frost$core$Object* $tmp24 = $tmp22($tmp21);
frost$core$Object** $tmp25 = &((frost$collections$HashMap$Entry*) $tmp24)->value;
frost$core$Object* $tmp26 = *$tmp25;
frost$core$Frost$ref$frost$core$Object$Q($tmp26);
frost$core$Frost$unref$frost$core$Object$Q($tmp24);
// unreffing REF($15:frost.collections.Iterator.T)
return $tmp26;

}
void frost$collections$HashMap$ValueIterator$cleanup(frost$collections$HashMap$ValueIterator* param0) {

// line 98
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap$EntryIterator** $tmp27 = &param0->base;
frost$collections$HashMap$EntryIterator* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
return;

}






