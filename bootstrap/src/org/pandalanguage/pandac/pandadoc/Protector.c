#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/math/Random.h"
#include "panda/core/Char32.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Protector$class_type org$pandalanguage$pandac$pandadoc$Protector$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Protector$cleanup, org$pandalanguage$pandac$pandadoc$Protector$encode$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Protector$decode$panda$core$String$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$Protector$randomToken$R$panda$core$String} };

typedef panda$core$String* (*$fn10)(org$pandalanguage$pandac$pandadoc$Protector*);
typedef panda$core$Int64 (*$fn58)(panda$math$Random*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 43, 8647705865568288660, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };

panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$encode$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
// line 59
panda$collections$HashMap** $tmp2 = &param0->encodeMap;
panda$collections$HashMap* $tmp3 = *$tmp2;
panda$core$Object* $tmp4 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3, ((panda$collections$Key*) param1));
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp5 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp4)));
*(&local0) = ((panda$core$String*) $tmp4);
// line 60
panda$core$String* $tmp6 = *(&local0);
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit($tmp6 == NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 61
$fn10 $tmp9 = ($fn10) param0->$class->vtable[4];
panda$core$String* $tmp11 = $tmp9(param0);
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local0) = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($22:panda.core.String)
// line 62
panda$collections$HashMap** $tmp13 = &param0->encodeMap;
panda$collections$HashMap* $tmp14 = *$tmp13;
panda$core$String* $tmp15 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp14, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp15));
// line 63
panda$collections$HashMap** $tmp16 = &param0->decodeMap;
panda$collections$HashMap* $tmp17 = *$tmp16;
panda$core$String* $tmp18 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp17, ((panda$collections$Key*) $tmp18), ((panda$core$Object*) param1));
goto block2;
block2:;
// line 65
panda$core$String* $tmp19 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$String* $tmp20 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp4);
// unreffing REF($5:panda.collections.HashMap.V?)
return $tmp19;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$decode$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$Protector* param0, panda$core$String* param1) {

// line 69
panda$collections$HashMap** $tmp21 = &param0->decodeMap;
panda$collections$HashMap* $tmp22 = *$tmp21;
panda$core$Object* $tmp23 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp22, ((panda$collections$Key*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp23)));
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// unreffing REF($5:panda.collections.HashMap.V?)
return ((panda$core$String*) $tmp23);

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$randomToken$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* param0) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$MutableString* local2 = NULL;
panda$core$Int64 local3;
// line 73
panda$core$Int64 $tmp24 = (panda$core$Int64) {20};
*(&local0) = $tmp24;
// line 74
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp25 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s26));
*(&local1) = &$s27;
// line 75
panda$core$MutableString* $tmp28 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp28);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp29 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
*(&local2) = $tmp28;
// line 76
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
panda$core$Int64 $tmp31 = *(&local0);
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp33 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp30, $tmp31, $tmp32);
panda$core$Int64 $tmp34 = $tmp33.min;
*(&local3) = $tmp34;
panda$core$Int64 $tmp35 = $tmp33.max;
panda$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
panda$core$Int64 $tmp38 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp39 = panda$core$Int64$convert$R$panda$core$UInt64($tmp38);
if ($tmp37) goto block4; else goto block5;
block4:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp35.value;
bool $tmp42 = $tmp40 <= $tmp41;
panda$core$Bit $tmp43 = (panda$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block1; else goto block2;
block5:;
int64_t $tmp45 = $tmp34.value;
int64_t $tmp46 = $tmp35.value;
bool $tmp47 = $tmp45 < $tmp46;
panda$core$Bit $tmp48 = (panda$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 77
panda$core$MutableString* $tmp50 = *(&local2);
panda$core$String* $tmp51 = *(&local1);
panda$math$Random** $tmp52 = &param0->random;
panda$math$Random* $tmp53 = *$tmp52;
panda$core$String* $tmp54 = *(&local1);
panda$core$Int64 $tmp55 = panda$core$String$get_byteLength$R$panda$core$Int64($tmp54);
ITable* $tmp56 = $tmp53->$class->itable;
while ($tmp56->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[3];
panda$core$Int64 $tmp59 = $tmp57($tmp53, $tmp55);
panda$core$Char32 $tmp60 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32($tmp51, $tmp59);
panda$core$MutableString$append$panda$core$Char32($tmp50, $tmp60);
goto block3;
block3:;
panda$core$Int64 $tmp61 = *(&local3);
int64_t $tmp62 = $tmp35.value;
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62 - $tmp63;
panda$core$Int64 $tmp65 = (panda$core$Int64) {$tmp64};
panda$core$UInt64 $tmp66 = panda$core$Int64$convert$R$panda$core$UInt64($tmp65);
if ($tmp37) goto block7; else goto block8;
block7:;
uint64_t $tmp67 = $tmp66.value;
uint64_t $tmp68 = $tmp39.value;
bool $tmp69 = $tmp67 >= $tmp68;
panda$core$Bit $tmp70 = (panda$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block6; else goto block2;
block8:;
uint64_t $tmp72 = $tmp66.value;
uint64_t $tmp73 = $tmp39.value;
bool $tmp74 = $tmp72 > $tmp73;
panda$core$Bit $tmp75 = (panda$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block6; else goto block2;
block6:;
int64_t $tmp77 = $tmp61.value;
int64_t $tmp78 = $tmp38.value;
int64_t $tmp79 = $tmp77 + $tmp78;
panda$core$Int64 $tmp80 = (panda$core$Int64) {$tmp79};
*(&local3) = $tmp80;
goto block1;
block2:;
// line 79
panda$core$MutableString* $tmp81 = *(&local2);
panda$core$String* $tmp82 = panda$core$MutableString$finish$R$panda$core$String($tmp81);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($85:panda.core.String)
panda$core$MutableString* $tmp83 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing result
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($12:panda.core.MutableString)
panda$core$String* $tmp84 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing SAFE_CHARS
*(&local1) = ((panda$core$String*) NULL);
return $tmp82;

}
void org$pandalanguage$pandac$pandadoc$Protector$init(org$pandalanguage$pandac$pandadoc$Protector* param0) {

// line 52
panda$collections$HashMap* $tmp85 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp85);
panda$collections$HashMap** $tmp86 = &param0->encodeMap;
panda$collections$HashMap* $tmp87 = *$tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$collections$HashMap** $tmp88 = &param0->encodeMap;
*$tmp88 = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 54
panda$collections$HashMap* $tmp89 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp89);
panda$collections$HashMap** $tmp90 = &param0->decodeMap;
panda$collections$HashMap* $tmp91 = *$tmp90;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$collections$HashMap** $tmp92 = &param0->decodeMap;
*$tmp92 = $tmp89;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 56
panda$math$Random* $tmp93 = panda$math$Random$default$R$panda$math$Random();
panda$math$Random** $tmp94 = &param0->random;
panda$math$Random* $tmp95 = *$tmp94;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$math$Random** $tmp96 = &param0->random;
*$tmp96 = $tmp93;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing REF($31:panda.math.Random)
return;

}
void org$pandalanguage$pandac$pandadoc$Protector$cleanup(org$pandalanguage$pandac$pandadoc$Protector* param0) {

// line 47
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp97 = &param0->encodeMap;
panda$collections$HashMap* $tmp98 = *$tmp97;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
panda$collections$HashMap** $tmp99 = &param0->decodeMap;
panda$collections$HashMap* $tmp100 = *$tmp99;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
panda$math$Random** $tmp101 = &param0->random;
panda$math$Random* $tmp102 = *$tmp101;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
return;

}

