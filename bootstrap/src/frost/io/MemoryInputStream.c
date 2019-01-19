#include "frost/io/MemoryInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$io$MemoryInputStream$class_type frost$io$MemoryInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$MemoryInputStream$cleanup, frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, 805783422464638792, NULL };

void frost$io$MemoryInputStream$init$frost$core$String(frost$io$MemoryInputStream* param0, frost$core$String* param1) {

// line 20
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 28
frost$core$Char8** $tmp4 = &param1->data;
frost$core$Char8* $tmp5 = *$tmp4;
frost$core$UInt8** $tmp6 = &param0->data;
*$tmp6 = ((frost$core$UInt8*) $tmp5);
// line 29
frost$core$Int64 $tmp7 = frost$core$String$get_byteLength$R$frost$core$Int64(param1);
frost$core$Int64* $tmp8 = &param0->length;
*$tmp8 = $tmp7;
// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp9 = &param0->string;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$String** $tmp11 = &param0->string;
*$tmp11 = param1;
// line 31
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q(frost$io$MemoryInputStream* param0) {

frost$core$UInt8 local0;
// line 36
frost$core$Int64* $tmp12 = &param0->index;
frost$core$Int64 $tmp13 = *$tmp12;
frost$core$Int64* $tmp14 = &param0->length;
frost$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp13.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// line 37
frost$core$UInt8** $tmp21 = &param0->data;
frost$core$UInt8* $tmp22 = *$tmp21;
frost$core$Int64* $tmp23 = &param0->index;
frost$core$Int64 $tmp24 = *$tmp23;
int64_t $tmp25 = $tmp24.value;
frost$core$UInt8 $tmp26 = $tmp22[$tmp25];
*(&local0) = $tmp26;
// line 38
frost$core$Int64* $tmp27 = &param0->index;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$Int64 $tmp29 = (frost$core$Int64) {1};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 + $tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {$tmp32};
frost$core$Int64* $tmp34 = &param0->index;
*$tmp34 = $tmp33;
// line 39
frost$core$UInt8 $tmp35 = *(&local0);
return ((frost$core$UInt8$nullable) { $tmp35, true });
block2:;
// line 41
return ((frost$core$UInt8$nullable) { .nonnull = false });

}
void frost$io$MemoryInputStream$cleanup(frost$io$MemoryInputStream* param0) {

// line 9
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$core$String** $tmp36 = &param0->string;
frost$core$String* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
return;

}






