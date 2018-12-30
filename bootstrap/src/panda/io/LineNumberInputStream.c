#include "panda/io/LineNumberInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
panda$io$LineNumberInputStream$class_type panda$io$LineNumberInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$LineNumberInputStream$cleanup, panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$UInt8$nullable (*$fn14)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 6529214259521028726, NULL };

void panda$io$LineNumberInputStream$init$panda$io$InputStream(panda$io$LineNumberInputStream* param0, panda$io$InputStream* param1) {

// line 15
panda$core$Int64 $tmp2 = (panda$core$Int64) {1};
panda$core$Int64* $tmp3 = &param0->line;
*$tmp3 = $tmp2;
// line 20
panda$core$Int64 $tmp4 = (panda$core$Int64) {1};
panda$core$Int64* $tmp5 = &param0->column;
*$tmp5 = $tmp4;
// line 25
panda$core$Int64 $tmp6 = (panda$core$Int64) {4};
panda$core$Int64* $tmp7 = &param0->tabSize;
*$tmp7 = $tmp6;
// line 33
panda$io$InputStream** $tmp8 = &param0->source;
panda$io$InputStream* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$InputStream** $tmp10 = &param0->source;
*$tmp10 = param1;
// line 34
panda$io$InputStream$init(((panda$io$InputStream*) param0));
return;

}
panda$core$UInt8$nullable panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q(panda$io$LineNumberInputStream* param0) {

panda$core$UInt8$nullable local0;
// line 39
panda$io$InputStream** $tmp11 = &param0->source;
panda$io$InputStream* $tmp12 = *$tmp11;
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[2];
panda$core$UInt8$nullable $tmp15 = $tmp13($tmp12);
*(&local0) = $tmp15;
// line 40
panda$core$UInt8$nullable $tmp16 = *(&local0);
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit(!$tmp16.nonnull);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// line 41
return ((panda$core$UInt8$nullable) { .nonnull = false });
block2:;
// line 43
panda$core$UInt8$nullable $tmp19 = *(&local0);
panda$core$UInt8 $tmp20 = (panda$core$UInt8) {10};
panda$core$Bit $tmp21 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $tmp19.value), $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block4; else goto block5;
block4:;
// line 45
panda$core$Int64* $tmp23 = &param0->line;
panda$core$Int64 $tmp24 = *$tmp23;
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26 + $tmp27;
panda$core$Int64 $tmp29 = (panda$core$Int64) {$tmp28};
panda$core$Int64* $tmp30 = &param0->line;
*$tmp30 = $tmp29;
// line 46
panda$core$Int64 $tmp31 = (panda$core$Int64) {1};
panda$core$Int64* $tmp32 = &param0->column;
*$tmp32 = $tmp31;
goto block3;
block5:;
panda$core$UInt8 $tmp33 = (panda$core$UInt8) {9};
panda$core$Bit $tmp34 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $tmp19.value), $tmp33);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block6:;
// line 48
panda$core$Int64* $tmp36 = &param0->column;
panda$core$Int64 $tmp37 = *$tmp36;
panda$core$Int64* $tmp38 = &param0->tabSize;
panda$core$Int64 $tmp39 = *$tmp38;
panda$core$Int64* $tmp40 = &param0->column;
panda$core$Int64 $tmp41 = *$tmp40;
panda$core$Int64* $tmp42 = &param0->tabSize;
panda$core$Int64 $tmp43 = *$tmp42;
panda$core$Int64 $tmp44 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp41, $tmp43);
int64_t $tmp45 = $tmp39.value;
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45 - $tmp46;
panda$core$Int64 $tmp48 = (panda$core$Int64) {$tmp47};
int64_t $tmp49 = $tmp37.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 + $tmp50;
panda$core$Int64 $tmp52 = (panda$core$Int64) {$tmp51};
panda$core$Int64* $tmp53 = &param0->column;
*$tmp53 = $tmp52;
goto block3;
block7:;
// line 50
panda$core$Int64* $tmp54 = &param0->column;
panda$core$Int64 $tmp55 = *$tmp54;
panda$core$Int64 $tmp56 = (panda$core$Int64) {1};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
panda$core$Int64 $tmp60 = (panda$core$Int64) {$tmp59};
panda$core$Int64* $tmp61 = &param0->column;
*$tmp61 = $tmp60;
goto block3;
block3:;
// line 52
panda$core$UInt8$nullable $tmp62 = *(&local0);
return $tmp62;

}
void panda$io$LineNumberInputStream$cleanup(panda$io$LineNumberInputStream* param0) {

panda$io$InputStream** $tmp63 = &param0->source;
panda$io$InputStream* $tmp64 = *$tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
return;

}






