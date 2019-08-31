#include "frost/io/LineNumberInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$io$LineNumberInputStream$class_type frost$io$LineNumberInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$LineNumberInputStream$cleanup, frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$UInt8$nullable (*$fn14)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 1260523631505748438, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, -4697261567984210418, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, -4697261567984210418, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };

void frost$io$LineNumberInputStream$init$frost$io$InputStream(frost$io$LineNumberInputStream* param0, frost$io$InputStream* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:21
frost$core$Int $tmp2 = (frost$core$Int) {1u};
frost$core$Int* $tmp3 = &param0->line;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:26
frost$core$Int $tmp4 = (frost$core$Int) {1u};
frost$core$Int* $tmp5 = &param0->column;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:31
frost$core$Int $tmp6 = (frost$core$Int) {4u};
frost$core$Int* $tmp7 = &param0->tabSize;
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
frost$core$Bit $tmp17 = (frost$core$Bit) {!$tmp16.nonnull};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:47
return ((frost$core$UInt8$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:49
frost$core$UInt8$nullable $tmp19 = *(&local0);
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19.nonnull};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block6; else goto block7;
block7:;
frost$core$Int $tmp22 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block6:;
frost$core$UInt8 $tmp25 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from LineNumberInputStream.frost:50:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
uint8_t $tmp26 = ((frost$core$UInt8) $tmp19.value).value;
uint8_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 == $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:51
frost$core$Int* $tmp31 = &param0->line;
frost$core$Int $tmp32 = *$tmp31;
frost$core$Int $tmp33 = (frost$core$Int) {1u};
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34 + $tmp35;
frost$core$Int $tmp37 = (frost$core$Int) {$tmp36};
frost$core$Int* $tmp38 = &param0->line;
*$tmp38 = $tmp37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:52
frost$core$Int $tmp39 = (frost$core$Int) {1u};
frost$core$Int* $tmp40 = &param0->column;
*$tmp40 = $tmp39;
goto block3;
block5:;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp19.nonnull};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block11; else goto block12;
block12:;
frost$core$Int $tmp43 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block11:;
frost$core$UInt8 $tmp46 = (frost$core$UInt8) {9u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from LineNumberInputStream.frost:54:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
uint8_t $tmp47 = ((frost$core$UInt8) $tmp19.value).value;
uint8_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:55
frost$core$Int* $tmp52 = &param0->column;
frost$core$Int $tmp53 = *$tmp52;
frost$core$Int* $tmp54 = &param0->tabSize;
frost$core$Int $tmp55 = *$tmp54;
frost$core$Int* $tmp56 = &param0->column;
frost$core$Int $tmp57 = *$tmp56;
frost$core$Int* $tmp58 = &param0->tabSize;
frost$core$Int $tmp59 = *$tmp58;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from LineNumberInputStream.frost:55:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp60 = $tmp57.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 % $tmp61;
frost$core$Int $tmp63 = (frost$core$Int) {$tmp62};
int64_t $tmp64 = $tmp55.value;
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64 - $tmp65;
frost$core$Int $tmp67 = (frost$core$Int) {$tmp66};
int64_t $tmp68 = $tmp53.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 + $tmp69;
frost$core$Int $tmp71 = (frost$core$Int) {$tmp70};
frost$core$Int* $tmp72 = &param0->column;
*$tmp72 = $tmp71;
goto block3;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:58
frost$core$Int* $tmp73 = &param0->column;
frost$core$Int $tmp74 = *$tmp73;
frost$core$Int $tmp75 = (frost$core$Int) {1u};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 + $tmp77;
frost$core$Int $tmp79 = (frost$core$Int) {$tmp78};
frost$core$Int* $tmp80 = &param0->column;
*$tmp80 = $tmp79;
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:61
frost$core$UInt8$nullable $tmp81 = *(&local0);
return $tmp81;

}
void frost$io$LineNumberInputStream$cleanup(frost$io$LineNumberInputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:14
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$io$InputStream** $tmp82 = &param0->source;
frost$io$InputStream* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return;

}






