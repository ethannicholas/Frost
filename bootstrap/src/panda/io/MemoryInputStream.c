#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$MemoryInputStream$cleanup, panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };

void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* param0, panda$core$String* param1) {

// line 20
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 28
panda$core$Char8** $tmp4 = &param1->data;
panda$core$Char8* $tmp5 = *$tmp4;
panda$core$UInt8** $tmp6 = &param0->data;
*$tmp6 = ((panda$core$UInt8*) $tmp5);
// line 29
panda$core$Int64 $tmp7 = panda$core$String$get_byteLength$R$panda$core$Int64(param1);
panda$core$Int64* $tmp8 = &param0->length;
*$tmp8 = $tmp7;
// line 30
panda$core$String** $tmp9 = &param0->string;
panda$core$String* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp11 = &param0->string;
*$tmp11 = param1;
// line 31
panda$io$InputStream$init(((panda$io$InputStream*) param0));
return;

}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* param0) {

panda$core$UInt8 local0;
// line 36
panda$core$Int64* $tmp12 = &param0->index;
panda$core$Int64 $tmp13 = *$tmp12;
panda$core$Int64* $tmp14 = &param0->length;
panda$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp13.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
panda$core$Bit $tmp19 = (panda$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// line 37
panda$core$UInt8** $tmp21 = &param0->data;
panda$core$UInt8* $tmp22 = *$tmp21;
panda$core$Int64* $tmp23 = &param0->index;
panda$core$Int64 $tmp24 = *$tmp23;
int64_t $tmp25 = $tmp24.value;
panda$core$UInt8 $tmp26 = $tmp22[$tmp25];
*(&local0) = $tmp26;
// line 38
panda$core$Int64* $tmp27 = &param0->index;
panda$core$Int64 $tmp28 = *$tmp27;
panda$core$Int64 $tmp29 = (panda$core$Int64) {1};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 + $tmp31;
panda$core$Int64 $tmp33 = (panda$core$Int64) {$tmp32};
panda$core$Int64* $tmp34 = &param0->index;
*$tmp34 = $tmp33;
// line 39
panda$core$UInt8 $tmp35 = *(&local0);
return ((panda$core$UInt8$nullable) { $tmp35, true });
block2:;
// line 41
return ((panda$core$UInt8$nullable) { .nonnull = false });

}
void panda$io$MemoryInputStream$cleanup(panda$io$MemoryInputStream* param0) {

panda$core$String** $tmp36 = &param0->string;
panda$core$String* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
return;

}






