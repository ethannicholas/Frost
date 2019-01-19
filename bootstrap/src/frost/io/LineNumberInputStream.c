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
frost$io$LineNumberInputStream$class_type frost$io$LineNumberInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$LineNumberInputStream$cleanup, frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$UInt8$nullable (*$fn14)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 677429033351455160, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, 2561127183346586658, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, 2561127183346586658, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };

void frost$io$LineNumberInputStream$init$frost$io$InputStream(frost$io$LineNumberInputStream* param0, frost$io$InputStream* param1) {

// line 21
frost$core$Int64 $tmp2 = (frost$core$Int64) {1};
frost$core$Int64* $tmp3 = &param0->line;
*$tmp3 = $tmp2;
// line 26
frost$core$Int64 $tmp4 = (frost$core$Int64) {1};
frost$core$Int64* $tmp5 = &param0->column;
*$tmp5 = $tmp4;
// line 31
frost$core$Int64 $tmp6 = (frost$core$Int64) {4};
frost$core$Int64* $tmp7 = &param0->tabSize;
*$tmp7 = $tmp6;
// line 39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$InputStream** $tmp8 = &param0->source;
frost$io$InputStream* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$io$InputStream** $tmp10 = &param0->source;
*$tmp10 = param1;
// line 40
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q(frost$io$LineNumberInputStream* param0) {

frost$core$UInt8$nullable local0;
// line 45
frost$io$InputStream** $tmp11 = &param0->source;
frost$io$InputStream* $tmp12 = *$tmp11;
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[2];
frost$core$UInt8$nullable $tmp15 = $tmp13($tmp12);
*(&local0) = $tmp15;
// line 46
frost$core$UInt8$nullable $tmp16 = *(&local0);
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(!$tmp16.nonnull);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// line 47
return ((frost$core$UInt8$nullable) { .nonnull = false });
block2:;
// line 49
frost$core$UInt8$nullable $tmp19 = *(&local0);
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit($tmp19.nonnull);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block6:;
frost$core$UInt8 $tmp25 = (frost$core$UInt8) {10};
frost$core$Bit $tmp26 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8) $tmp19.value), $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block4; else goto block5;
block4:;
// line 51
frost$core$Int64* $tmp28 = &param0->line;
frost$core$Int64 $tmp29 = *$tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
frost$core$Int64* $tmp35 = &param0->line;
*$tmp35 = $tmp34;
// line 52
frost$core$Int64 $tmp36 = (frost$core$Int64) {1};
frost$core$Int64* $tmp37 = &param0->column;
*$tmp37 = $tmp36;
goto block3;
block5:;
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp19.nonnull);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s41, $tmp40, &$s42);
abort(); // unreachable
block10:;
frost$core$UInt8 $tmp43 = (frost$core$UInt8) {9};
frost$core$Bit $tmp44 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8) $tmp19.value), $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block8; else goto block9;
block8:;
// line 55
frost$core$Int64* $tmp46 = &param0->column;
frost$core$Int64 $tmp47 = *$tmp46;
frost$core$Int64* $tmp48 = &param0->tabSize;
frost$core$Int64 $tmp49 = *$tmp48;
frost$core$Int64* $tmp50 = &param0->column;
frost$core$Int64 $tmp51 = *$tmp50;
frost$core$Int64* $tmp52 = &param0->tabSize;
frost$core$Int64 $tmp53 = *$tmp52;
frost$core$Int64 $tmp54 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp51, $tmp53);
int64_t $tmp55 = $tmp49.value;
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55 - $tmp56;
frost$core$Int64 $tmp58 = (frost$core$Int64) {$tmp57};
int64_t $tmp59 = $tmp47.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 + $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
frost$core$Int64* $tmp63 = &param0->column;
*$tmp63 = $tmp62;
goto block3;
block9:;
// line 58
frost$core$Int64* $tmp64 = &param0->column;
frost$core$Int64 $tmp65 = *$tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {1};
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 + $tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {$tmp69};
frost$core$Int64* $tmp71 = &param0->column;
*$tmp71 = $tmp70;
goto block3;
block3:;
// line 61
frost$core$UInt8$nullable $tmp72 = *(&local0);
return $tmp72;

}
void frost$io$LineNumberInputStream$cleanup(frost$io$LineNumberInputStream* param0) {

// line 14
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$io$InputStream** $tmp73 = &param0->source;
frost$io$InputStream* $tmp74 = *$tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
return;

}






