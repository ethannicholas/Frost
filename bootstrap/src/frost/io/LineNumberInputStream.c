#include "frost/io/LineNumberInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$io$LineNumberInputStream$class_type frost$io$LineNumberInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$LineNumberInputStream$cleanup, frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$UInt8$nullable (*$fn14)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 677429033351455160, NULL };

void frost$io$LineNumberInputStream$init$frost$io$InputStream(frost$io$LineNumberInputStream* param0, frost$io$InputStream* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:21
frost$core$Int64 $tmp2 = (frost$core$Int64) {1};
frost$core$Int64* $tmp3 = &param0->line;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:26
frost$core$Int64 $tmp4 = (frost$core$Int64) {1};
frost$core$Int64* $tmp5 = &param0->column;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:31
frost$core$Int64 $tmp6 = (frost$core$Int64) {4};
frost$core$Int64* $tmp7 = &param0->tabSize;
*$tmp7 = $tmp6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$InputStream** $tmp8 = &param0->source;
frost$io$InputStream* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$io$InputStream** $tmp10 = &param0->source;
*$tmp10 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:40
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q(frost$io$LineNumberInputStream* param0) {

frost$core$UInt8$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:45
frost$io$InputStream** $tmp11 = &param0->source;
frost$io$InputStream* $tmp12 = *$tmp11;
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[2];
frost$core$UInt8$nullable $tmp15 = $tmp13($tmp12);
*(&local0) = $tmp15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:46
frost$core$UInt8$nullable $tmp16 = *(&local0);
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(!$tmp16.nonnull);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:47
return ((frost$core$UInt8$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:49
frost$core$UInt8$nullable $tmp19 = *(&local0);
frost$core$UInt8 $tmp20 = (frost$core$UInt8) {10};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from LineNumberInputStream.frost:50:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt8.stub:455
uint8_t $tmp21 = ((frost$core$UInt8) $tmp19.value).value;
uint8_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:51
frost$core$Int64* $tmp26 = &param0->line;
frost$core$Int64 $tmp27 = *$tmp26;
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
int64_t $tmp29 = $tmp27.value;
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29 + $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {$tmp31};
frost$core$Int64* $tmp33 = &param0->line;
*$tmp33 = $tmp32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:52
frost$core$Int64 $tmp34 = (frost$core$Int64) {1};
frost$core$Int64* $tmp35 = &param0->column;
*$tmp35 = $tmp34;
goto block3;
block5:;
frost$core$UInt8 $tmp36 = (frost$core$UInt8) {9};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from LineNumberInputStream.frost:54:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt8.stub:455
uint8_t $tmp37 = ((frost$core$UInt8) $tmp19.value).value;
uint8_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = frost$core$Bit$init$builtin_bit($tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:55
frost$core$Int64* $tmp42 = &param0->column;
frost$core$Int64 $tmp43 = *$tmp42;
frost$core$Int64* $tmp44 = &param0->tabSize;
frost$core$Int64 $tmp45 = *$tmp44;
frost$core$Int64* $tmp46 = &param0->column;
frost$core$Int64 $tmp47 = *$tmp46;
frost$core$Int64* $tmp48 = &param0->tabSize;
frost$core$Int64 $tmp49 = *$tmp48;
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from LineNumberInputStream.frost:55:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:64
int64_t $tmp50 = $tmp47.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 % $tmp51;
frost$core$Int64 $tmp53 = frost$core$Int64$init$builtin_int64($tmp52);
int64_t $tmp54 = $tmp45.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 - $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
int64_t $tmp58 = $tmp43.value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 + $tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
frost$core$Int64* $tmp62 = &param0->column;
*$tmp62 = $tmp61;
goto block3;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:58
frost$core$Int64* $tmp63 = &param0->column;
frost$core$Int64 $tmp64 = *$tmp63;
frost$core$Int64 $tmp65 = (frost$core$Int64) {1};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66 + $tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {$tmp68};
frost$core$Int64* $tmp70 = &param0->column;
*$tmp70 = $tmp69;
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:61
frost$core$UInt8$nullable $tmp71 = *(&local0);
return $tmp71;

}
void frost$io$LineNumberInputStream$cleanup(frost$io$LineNumberInputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:14
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$io$InputStream** $tmp72 = &param0->source;
frost$io$InputStream* $tmp73 = *$tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return;

}






