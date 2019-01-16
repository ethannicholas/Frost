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
panda$io$LineNumberInputStream$class_type panda$io$LineNumberInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$LineNumberInputStream$cleanup, panda$io$LineNumberInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$InputStream$close} };

typedef panda$core$UInt8$nullable (*$fn14)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 6529214259521028726, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, 2561127183346586658, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, 2561127183346586658, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };

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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$InputStream** $tmp8 = &param0->source;
panda$io$InputStream* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
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
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit($tmp19.nonnull);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {44};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block6:;
panda$core$UInt8 $tmp25 = (panda$core$UInt8) {10};
panda$core$Bit $tmp26 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $tmp19.value), $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block4; else goto block5;
block4:;
// line 45
panda$core$Int64* $tmp28 = &param0->line;
panda$core$Int64 $tmp29 = *$tmp28;
panda$core$Int64 $tmp30 = (panda$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
panda$core$Int64 $tmp34 = (panda$core$Int64) {$tmp33};
panda$core$Int64* $tmp35 = &param0->line;
*$tmp35 = $tmp34;
// line 46
panda$core$Int64 $tmp36 = (panda$core$Int64) {1};
panda$core$Int64* $tmp37 = &param0->column;
*$tmp37 = $tmp36;
goto block3;
block5:;
panda$core$Bit $tmp38 = panda$core$Bit$init$builtin_bit($tmp19.nonnull);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp40 = (panda$core$Int64) {48};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s41, $tmp40, &$s42);
abort(); // unreachable
block10:;
panda$core$UInt8 $tmp43 = (panda$core$UInt8) {9};
panda$core$Bit $tmp44 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8) $tmp19.value), $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block8; else goto block9;
block8:;
// line 49
panda$core$Int64* $tmp46 = &param0->column;
panda$core$Int64 $tmp47 = *$tmp46;
panda$core$Int64* $tmp48 = &param0->tabSize;
panda$core$Int64 $tmp49 = *$tmp48;
panda$core$Int64* $tmp50 = &param0->column;
panda$core$Int64 $tmp51 = *$tmp50;
panda$core$Int64* $tmp52 = &param0->tabSize;
panda$core$Int64 $tmp53 = *$tmp52;
panda$core$Int64 $tmp54 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp51, $tmp53);
int64_t $tmp55 = $tmp49.value;
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55 - $tmp56;
panda$core$Int64 $tmp58 = (panda$core$Int64) {$tmp57};
int64_t $tmp59 = $tmp47.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 + $tmp60;
panda$core$Int64 $tmp62 = (panda$core$Int64) {$tmp61};
panda$core$Int64* $tmp63 = &param0->column;
*$tmp63 = $tmp62;
goto block3;
block9:;
// line 52
panda$core$Int64* $tmp64 = &param0->column;
panda$core$Int64 $tmp65 = *$tmp64;
panda$core$Int64 $tmp66 = (panda$core$Int64) {1};
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 + $tmp68;
panda$core$Int64 $tmp70 = (panda$core$Int64) {$tmp69};
panda$core$Int64* $tmp71 = &param0->column;
*$tmp71 = $tmp70;
goto block3;
block3:;
// line 55
panda$core$UInt8$nullable $tmp72 = *(&local0);
return $tmp72;

}
void panda$io$LineNumberInputStream$cleanup(panda$io$LineNumberInputStream* param0) {

// line 8
panda$io$InputStream$cleanup(((panda$io$InputStream*) param0));
panda$io$InputStream** $tmp73 = &param0->source;
panda$io$InputStream* $tmp74 = *$tmp73;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
return;

}






