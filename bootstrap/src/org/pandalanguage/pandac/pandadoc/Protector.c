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
typedef panda$core$Int64 (*$fn73)(panda$math$Random*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 43, 8647705865568288660, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };

panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$encode$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
// line 59
panda$collections$HashMap** $tmp2 = &param0->encodeMap;
panda$collections$HashMap* $tmp3 = *$tmp2;
panda$core$Object* $tmp4 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3, ((panda$collections$Key*) param1));
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp4)));
panda$core$String* $tmp5 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
*(&local0) = ((panda$core$String*) $tmp4);
panda$core$Panda$unref$panda$core$Object$Q($tmp4);
// unreffing REF($5:panda.collections.HashMap.V?)
// line 60
panda$core$String* $tmp6 = *(&local0);
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit($tmp6 == NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 61
$fn10 $tmp9 = ($fn10) param0->$class->vtable[4];
panda$core$String* $tmp11 = $tmp9(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($25:panda.core.String)
// line 62
panda$collections$HashMap** $tmp13 = &param0->encodeMap;
panda$collections$HashMap* $tmp14 = *$tmp13;
panda$core$String* $tmp15 = *(&local0);
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit($tmp15 != NULL);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp18 = (panda$core$Int64) {62};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s19, $tmp18, &$s20);
abort(); // unreachable
block3:;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp14, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp15));
// line 63
panda$collections$HashMap** $tmp21 = &param0->decodeMap;
panda$collections$HashMap* $tmp22 = *$tmp21;
panda$core$String* $tmp23 = *(&local0);
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit($tmp23 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp26 = (panda$core$Int64) {63};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block5:;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp22, ((panda$collections$Key*) $tmp23), ((panda$core$Object*) param1));
goto block2;
block2:;
// line 65
panda$core$String* $tmp29 = *(&local0);
panda$core$Bit $tmp30 = panda$core$Bit$init$builtin_bit($tmp29 != NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp32 = (panda$core$Int64) {65};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block7:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$String* $tmp35 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp29;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$decode$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$Protector* param0, panda$core$String* param1) {

// line 69
panda$collections$HashMap** $tmp36 = &param0->decodeMap;
panda$collections$HashMap* $tmp37 = *$tmp36;
panda$core$Object* $tmp38 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp37, ((panda$collections$Key*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp38)));
panda$core$Panda$unref$panda$core$Object$Q($tmp38);
// unreffing REF($5:panda.collections.HashMap.V?)
return ((panda$core$String*) $tmp38);

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$randomToken$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* param0) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$MutableString* local2 = NULL;
panda$core$Int64 local3;
// line 73
panda$core$Int64 $tmp39 = (panda$core$Int64) {20};
*(&local0) = $tmp39;
// line 74
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s40));
panda$core$String* $tmp41 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
*(&local1) = &$s42;
// line 75
panda$core$MutableString* $tmp43 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp43);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$MutableString* $tmp44 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local2) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($12:panda.core.MutableString)
// line 76
panda$core$Int64 $tmp45 = (panda$core$Int64) {0};
panda$core$Int64 $tmp46 = *(&local0);
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp48 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp45, $tmp46, $tmp47);
panda$core$Int64 $tmp49 = $tmp48.min;
*(&local3) = $tmp49;
panda$core$Int64 $tmp50 = $tmp48.max;
panda$core$Bit $tmp51 = $tmp48.inclusive;
bool $tmp52 = $tmp51.value;
panda$core$Int64 $tmp53 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp54 = panda$core$Int64$convert$R$panda$core$UInt64($tmp53);
if ($tmp52) goto block4; else goto block5;
block4:;
int64_t $tmp55 = $tmp49.value;
int64_t $tmp56 = $tmp50.value;
bool $tmp57 = $tmp55 <= $tmp56;
panda$core$Bit $tmp58 = (panda$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block1; else goto block2;
block5:;
int64_t $tmp60 = $tmp49.value;
int64_t $tmp61 = $tmp50.value;
bool $tmp62 = $tmp60 < $tmp61;
panda$core$Bit $tmp63 = (panda$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block2;
block1:;
// line 77
panda$core$MutableString* $tmp65 = *(&local2);
panda$core$String* $tmp66 = *(&local1);
panda$math$Random** $tmp67 = &param0->random;
panda$math$Random* $tmp68 = *$tmp67;
panda$core$String* $tmp69 = *(&local1);
panda$core$Int64 $tmp70 = panda$core$String$get_byteLength$R$panda$core$Int64($tmp69);
ITable* $tmp71 = $tmp68->$class->itable;
while ($tmp71->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[3];
panda$core$Int64 $tmp74 = $tmp72($tmp68, $tmp70);
panda$core$Char32 $tmp75 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32($tmp66, $tmp74);
panda$core$MutableString$append$panda$core$Char32($tmp65, $tmp75);
goto block3;
block3:;
panda$core$Int64 $tmp76 = *(&local3);
int64_t $tmp77 = $tmp50.value;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77 - $tmp78;
panda$core$Int64 $tmp80 = (panda$core$Int64) {$tmp79};
panda$core$UInt64 $tmp81 = panda$core$Int64$convert$R$panda$core$UInt64($tmp80);
if ($tmp52) goto block7; else goto block8;
block7:;
uint64_t $tmp82 = $tmp81.value;
uint64_t $tmp83 = $tmp54.value;
bool $tmp84 = $tmp82 >= $tmp83;
panda$core$Bit $tmp85 = (panda$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block6; else goto block2;
block8:;
uint64_t $tmp87 = $tmp81.value;
uint64_t $tmp88 = $tmp54.value;
bool $tmp89 = $tmp87 > $tmp88;
panda$core$Bit $tmp90 = (panda$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block6; else goto block2;
block6:;
int64_t $tmp92 = $tmp76.value;
int64_t $tmp93 = $tmp53.value;
int64_t $tmp94 = $tmp92 + $tmp93;
panda$core$Int64 $tmp95 = (panda$core$Int64) {$tmp94};
*(&local3) = $tmp95;
goto block1;
block2:;
// line 79
panda$core$MutableString* $tmp96 = *(&local2);
panda$core$String* $tmp97 = panda$core$MutableString$finish$R$panda$core$String($tmp96);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($88:panda.core.String)
panda$core$MutableString* $tmp98 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing result
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp99 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// unreffing SAFE_CHARS
*(&local1) = ((panda$core$String*) NULL);
return $tmp97;

}
void org$pandalanguage$pandac$pandadoc$Protector$init(org$pandalanguage$pandac$pandadoc$Protector* param0) {

// line 52
panda$collections$HashMap* $tmp100 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp100);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
panda$collections$HashMap** $tmp101 = &param0->encodeMap;
panda$collections$HashMap* $tmp102 = *$tmp101;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$collections$HashMap** $tmp103 = &param0->encodeMap;
*$tmp103 = $tmp100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 54
panda$collections$HashMap* $tmp104 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp104);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$collections$HashMap** $tmp105 = &param0->decodeMap;
panda$collections$HashMap* $tmp106 = *$tmp105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$collections$HashMap** $tmp107 = &param0->decodeMap;
*$tmp107 = $tmp104;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 56
panda$math$Random* $tmp108 = panda$math$Random$default$R$panda$math$Random();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$math$Random** $tmp109 = &param0->random;
panda$math$Random* $tmp110 = *$tmp109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$math$Random** $tmp111 = &param0->random;
*$tmp111 = $tmp108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($31:panda.math.Random)
return;

}
void org$pandalanguage$pandac$pandadoc$Protector$cleanup(org$pandalanguage$pandac$pandadoc$Protector* param0) {

// line 47
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp112 = &param0->encodeMap;
panda$collections$HashMap* $tmp113 = *$tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$collections$HashMap** $tmp114 = &param0->decodeMap;
panda$collections$HashMap* $tmp115 = *$tmp114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
panda$math$Random** $tmp116 = &param0->random;
panda$math$Random* $tmp117 = *$tmp116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
return;

}

