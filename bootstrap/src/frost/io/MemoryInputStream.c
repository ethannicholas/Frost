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
frost$io$MemoryInputStream$class_type frost$io$MemoryInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$MemoryInputStream$cleanup, frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, 6900884650380365222, NULL };

void frost$io$MemoryInputStream$init$frost$core$String(frost$io$MemoryInputStream* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:20
frost$core$Int64 $tmp2 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:28
frost$core$Char8** $tmp4 = &param1->data;
frost$core$Char8* $tmp5 = *$tmp4;
frost$core$UInt8** $tmp6 = &param0->data;
*$tmp6 = ((frost$core$UInt8*) $tmp5);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:29
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int64 from MemoryInputStream.frost:29:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int64* $tmp7 = &param1->_length;
frost$core$Int64 $tmp8 = *$tmp7;
frost$core$Int64* $tmp9 = &param0->length;
*$tmp9 = $tmp8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp10 = &param0->string;
frost$core$String* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String** $tmp12 = &param0->string;
*$tmp12 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:31
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q(frost$io$MemoryInputStream* param0) {

frost$core$UInt8 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:36
frost$core$Int64* $tmp13 = &param0->index;
frost$core$Int64 $tmp14 = *$tmp13;
frost$core$Int64* $tmp15 = &param0->length;
frost$core$Int64 $tmp16 = *$tmp15;
int64_t $tmp17 = $tmp14.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:37
frost$core$UInt8** $tmp22 = &param0->data;
frost$core$UInt8* $tmp23 = *$tmp22;
frost$core$Int64* $tmp24 = &param0->index;
frost$core$Int64 $tmp25 = *$tmp24;
int64_t $tmp26 = $tmp25.value;
frost$core$UInt8 $tmp27 = $tmp23[$tmp26];
*(&local0) = $tmp27;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:38
frost$core$Int64* $tmp28 = &param0->index;
frost$core$Int64 $tmp29 = *$tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1u};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
frost$core$Int64* $tmp35 = &param0->index;
*$tmp35 = $tmp34;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:39
frost$core$UInt8 $tmp36 = *(&local0);
return ((frost$core$UInt8$nullable) { $tmp36, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:41
return ((frost$core$UInt8$nullable) { .nonnull = false });

}
void frost$io$MemoryInputStream$cleanup(frost$io$MemoryInputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryInputStream.frost:9
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$core$String** $tmp37 = &param0->string;
frost$core$String* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return;

}






