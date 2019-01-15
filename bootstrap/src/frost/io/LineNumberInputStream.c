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
frost$io$LineNumberInputStream$class_type frost$io$LineNumberInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$LineNumberInputStream$cleanup, frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Int64, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close} };

typedef frost$core$UInt8$nullable (*$fn14)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 677429033351455160, NULL };

void frost$io$LineNumberInputStream$init$frost$io$InputStream(frost$io$LineNumberInputStream* param0, frost$io$InputStream* param1) {

// line 15
frost$core$Int64 $tmp2 = (frost$core$Int64) {1};
frost$core$Int64* $tmp3 = &param0->line;
*$tmp3 = $tmp2;
// line 20
frost$core$Int64 $tmp4 = (frost$core$Int64) {1};
frost$core$Int64* $tmp5 = &param0->column;
*$tmp5 = $tmp4;
// line 25
frost$core$Int64 $tmp6 = (frost$core$Int64) {4};
frost$core$Int64* $tmp7 = &param0->tabSize;
*$tmp7 = $tmp6;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$InputStream** $tmp8 = &param0->source;
frost$io$InputStream* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$io$InputStream** $tmp10 = &param0->source;
*$tmp10 = param1;
// line 34
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q(frost$io$LineNumberInputStream* param0) {

frost$core$UInt8$nullable local0;
// line 39
frost$io$InputStream** $tmp11 = &param0->source;
frost$io$InputStream* $tmp12 = *$tmp11;
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[2];
frost$core$UInt8$nullable $tmp15 = $tmp13($tmp12);
*(&local0) = $tmp15;
// line 40
frost$core$UInt8$nullable $tmp16 = *(&local0);
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(!$tmp16.nonnull);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// line 41
return ((frost$core$UInt8$nullable) { .nonnull = false });
block2:;
// line 43
frost$core$UInt8$nullable $tmp19 = *(&local0);
frost$core$UInt8 $tmp20 = (frost$core$UInt8) {10};
frost$core$Bit $tmp21 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8) $tmp19.value), $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block4; else goto block5;
block4:;
// line 45
frost$core$Int64* $tmp23 = &param0->line;
frost$core$Int64 $tmp24 = *$tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {1};
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26 + $tmp27;
frost$core$Int64 $tmp29 = (frost$core$Int64) {$tmp28};
frost$core$Int64* $tmp30 = &param0->line;
*$tmp30 = $tmp29;
// line 46
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$Int64* $tmp32 = &param0->column;
*$tmp32 = $tmp31;
goto block3;
block5:;
frost$core$UInt8 $tmp33 = (frost$core$UInt8) {9};
frost$core$Bit $tmp34 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8) $tmp19.value), $tmp33);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block6:;
// line 49
frost$core$Int64* $tmp36 = &param0->column;
frost$core$Int64 $tmp37 = *$tmp36;
frost$core$Int64* $tmp38 = &param0->tabSize;
frost$core$Int64 $tmp39 = *$tmp38;
frost$core$Int64* $tmp40 = &param0->column;
frost$core$Int64 $tmp41 = *$tmp40;
frost$core$Int64* $tmp42 = &param0->tabSize;
frost$core$Int64 $tmp43 = *$tmp42;
frost$core$Int64 $tmp44 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp41, $tmp43);
int64_t $tmp45 = $tmp39.value;
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45 - $tmp46;
frost$core$Int64 $tmp48 = (frost$core$Int64) {$tmp47};
int64_t $tmp49 = $tmp37.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 + $tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {$tmp51};
frost$core$Int64* $tmp53 = &param0->column;
*$tmp53 = $tmp52;
goto block3;
block7:;
// line 52
frost$core$Int64* $tmp54 = &param0->column;
frost$core$Int64 $tmp55 = *$tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {$tmp59};
frost$core$Int64* $tmp61 = &param0->column;
*$tmp61 = $tmp60;
goto block3;
block3:;
// line 55
frost$core$UInt8$nullable $tmp62 = *(&local0);
return $tmp62;

}
void frost$io$LineNumberInputStream$cleanup(frost$io$LineNumberInputStream* param0) {

// line 8
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$io$InputStream** $tmp63 = &param0->source;
frost$io$InputStream* $tmp64 = *$tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
return;

}






