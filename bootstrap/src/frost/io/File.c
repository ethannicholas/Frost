#include "frost/io/File.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Maybe.h"
#include "frost/core/Error.h"
#include "frost/io/InputStream.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/io/OutputStream.h"

__attribute__((weak)) frost$core$Int64 frost$io$File$get_hash$R$frost$core$Int64$shim(frost$io$File* p0) {
    frost$core$Int64 result = frost$io$File$get_hash$R$frost$core$Int64(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim(frost$io$File* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(p0, ((frost$io$File*) p1));

    return result;
}
__attribute__((weak)) frost$core$String* frost$io$File$get_asString$R$frost$core$String$shim(frost$io$File* p0) {
    frost$core$String* result = frost$io$File$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$io$File$cleanup$shim(frost$io$File* p0) {
    frost$io$File$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$io$File$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$io$File$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$io$File$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$io$File$_frost$collections$Key, { frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$io$File$class_type frost$io$File$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$io$File$_frost$core$Equatable, { frost$io$File$get_asString$R$frost$core$String$shim, frost$io$File$cleanup$shim, frost$io$File$resolve$frost$core$String$R$frost$io$File, frost$io$File$lines$R$frost$core$Maybe$LTfrost$collections$Iterator$LTfrost$core$String$GT$GT, frost$io$File$get_isAbsolute$R$frost$core$Bit, frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT, frost$io$File$normalize$frost$core$String$R$frost$core$String$Q, frost$io$File$get_parent$R$frost$io$File$Q, frost$io$File$get_name$R$frost$core$String, frost$io$File$get_simpleName$R$frost$core$String, frost$io$File$withExtension$frost$core$String$R$frost$io$File, frost$io$File$exists$R$frost$core$Bit, frost$io$File$isDirectory$R$frost$core$Bit, frost$io$File$list$R$frost$core$Maybe$LTfrost$collections$ListView$LTfrost$io$File$GT$GT, frost$io$File$createDirectory$R$frost$core$Error$Q, frost$io$File$createDirectories$R$frost$core$Error$Q, frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT, frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT, frost$io$File$openForAppend$R$frost$core$Maybe$LTfrost$io$OutputStream$GT, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT, frost$io$File$write$frost$core$String$R$frost$core$Error$Q, frost$io$File$rename$frost$io$File$R$frost$core$Error$Q, frost$io$File$delete$R$frost$core$Error$Q, frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$io$File$get_hash$R$frost$core$Int64$shim} };

typedef frost$collections$Iterator* (*$fn36)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn96)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn133)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn171)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn283)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn303)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn321)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn336)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, -5081736495465938641, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2f\x2b", 3, 1973583, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2e\x2e", 3, 1514440, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };

void frost$io$File$init$frost$core$String(frost$io$File* param0, frost$core$String* param1) {

// line 44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->path;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->path;
*$tmp4 = param1;
return;

}
frost$io$File* frost$io$File$resolve$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// line 58
frost$core$Bit $tmp5 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s6);
bool $tmp7 = $tmp5.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 59
frost$io$File* $tmp8 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp8, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
return $tmp8;
block2:;
// line 61
frost$core$String** $tmp9 = &param0->path;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Bit $tmp11 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp10, &$s12);
bool $tmp13 = $tmp11.value;
if ($tmp13) goto block3; else goto block4;
block3:;
// line 62
frost$io$File* $tmp14 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String** $tmp15 = &param0->path;
frost$core$String* $tmp16 = *$tmp15;
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp16, param1);
frost$io$File$init$frost$core$String($tmp14, $tmp17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
return $tmp14;
block4:;
// line 64
frost$io$File* $tmp18 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String** $tmp19 = &param0->path;
frost$core$String* $tmp20 = *$tmp19;
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp20, &$s22);
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp21, param1);
frost$io$File$init$frost$core$String($tmp18, $tmp23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
return $tmp18;

}
frost$core$Maybe* frost$io$File$lines$R$frost$core$Maybe$LTfrost$collections$Iterator$LTfrost$core$String$GT$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 75
*(&local0) = ((frost$core$Error*) NULL);
// line 76
frost$core$Maybe* $tmp24 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp25 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp26 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp27 = &$tmp26->$rawValue;
frost$core$Int64 $tmp28 = *$tmp27;
int64_t $tmp29 = $tmp28.value;
bool $tmp30 = $tmp29 == 0;
if ($tmp30) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp31 = (frost$core$Error**) ($tmp26->$data + 0);
frost$core$Error* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
goto block1;
block3:;
frost$core$Object** $tmp33 = (frost$core$Object**) ($tmp26->$data + 0);
frost$core$Object* $tmp34 = *$tmp33;
$fn36 $tmp35 = ($fn36) ((frost$io$InputStream*) $tmp34)->$class->vtable[18];
frost$collections$Iterator* $tmp37 = $tmp35(((frost$io$InputStream*) $tmp34));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp24, $tmp25, ((frost$core$Object*) $tmp37));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Error* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp24;
block1:;
// line 79
frost$core$Maybe* $tmp39 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
frost$core$Error* $tmp41 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp39, $tmp40, $tmp41);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Error* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp39;
block2:;
frost$core$Error* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Bit frost$io$File$get_isAbsolute$R$frost$core$Bit(frost$io$File* param0) {

// line 84
frost$core$String** $tmp44 = &param0->path;
frost$core$String* $tmp45 = *$tmp44;
frost$core$Bit $tmp46 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp45, &$s47);
return $tmp46;

}
frost$core$String* frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 98
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = param1;
// line 100
frost$core$String* $tmp49 = *(&local0);
frost$core$RegularExpression* $tmp50 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp50, &$s51);
frost$core$String* $tmp52 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp49, $tmp50, &$s53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$String* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = $tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// line 101
frost$core$String* $tmp55 = *(&local0);
frost$core$Bit $tmp56 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s57);
bool $tmp58 = $tmp56.value;
if ($tmp58) goto block1; else goto block2;
block1:;
// line 102
frost$core$String* $tmp59 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$String* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local0) = ((frost$core$String*) NULL);
return $tmp59;
block2:;
// line 105
goto block3;
block3:;
frost$core$String* $tmp61 = *(&local0);
frost$core$Bit $tmp62 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp61, &$s63);
bool $tmp64 = $tmp62.value;
if ($tmp64) goto block4; else goto block5;
block4:;
// line 106
frost$core$String* $tmp65 = *(&local0);
frost$core$String* $tmp66 = *(&local0);
frost$core$Int64 $tmp67 = frost$core$String$get_length$R$frost$core$Int64($tmp66);
frost$core$Int64 $tmp68 = (frost$core$Int64) {1};
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69 - $tmp70;
frost$core$Int64 $tmp72 = (frost$core$Int64) {$tmp71};
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp74 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { .nonnull = false }), ((frost$core$Int64$nullable) { $tmp72, true }), $tmp73);
frost$core$String* $tmp75 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp65, $tmp74);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$String* $tmp76 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local0) = $tmp75;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
goto block3;
block5:;
// line 108
frost$core$String* $tmp77 = *(&local0);
frost$core$Bit $tmp78 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp77, &$s79);
*(&local1) = $tmp78;
// line 109
frost$core$Bit $tmp80 = *(&local1);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block6; else goto block7;
block6:;
// line 110
frost$core$String* $tmp82 = *(&local0);
frost$core$Int64 $tmp83 = (frost$core$Int64) {1};
frost$core$Bit $tmp84 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp85 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp83, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp84);
frost$core$String* $tmp86 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp82, $tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
goto block7;
block7:;
// line 113
frost$core$String* $tmp88 = *(&local0);
frost$collections$Array* $tmp89 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp88, &$s90);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$collections$Array* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local2) = $tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// line 114
goto block8;
block8:;
// line 115
frost$core$Int64 $tmp92 = (frost$core$Int64) {1};
frost$collections$Array* $tmp93 = *(&local2);
ITable* $tmp94 = ((frost$collections$CollectionView*) $tmp93)->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$core$Int64 $tmp97 = $tmp95(((frost$collections$CollectionView*) $tmp93));
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp99 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp92, $tmp97, $tmp98);
frost$core$Int64 $tmp100 = $tmp99.min;
*(&local3) = $tmp100;
frost$core$Int64 $tmp101 = $tmp99.max;
frost$core$Bit $tmp102 = $tmp99.inclusive;
bool $tmp103 = $tmp102.value;
frost$core$Int64 $tmp104 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp105 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp104);
if ($tmp103) goto block13; else goto block14;
block13:;
int64_t $tmp106 = $tmp100.value;
int64_t $tmp107 = $tmp101.value;
bool $tmp108 = $tmp106 <= $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block10; else goto block11;
block14:;
int64_t $tmp111 = $tmp100.value;
int64_t $tmp112 = $tmp101.value;
bool $tmp113 = $tmp111 < $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block10; else goto block11;
block10:;
// line 116
frost$collections$Array* $tmp116 = *(&local2);
frost$core$Int64 $tmp117 = *(&local3);
frost$core$Object* $tmp118 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp116, $tmp117);
frost$core$Bit $tmp119 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp118), &$s120);
bool $tmp121 = $tmp119.value;
if ($tmp121) goto block17; else goto block18;
block17:;
frost$collections$Array* $tmp122 = *(&local2);
frost$core$Int64 $tmp123 = *(&local3);
frost$core$Int64 $tmp124 = (frost$core$Int64) {1};
int64_t $tmp125 = $tmp123.value;
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125 - $tmp126;
frost$core$Int64 $tmp128 = (frost$core$Int64) {$tmp127};
frost$core$Object* $tmp129 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp122, $tmp128);
ITable* $tmp131 = ((frost$core$Equatable*) ((frost$core$String*) $tmp129))->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[1];
frost$core$Bit $tmp134 = $tmp132(((frost$core$Equatable*) ((frost$core$String*) $tmp129)), ((frost$core$Equatable*) &$s130));
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
*(&local4) = $tmp134;
goto block19;
block18:;
*(&local4) = $tmp119;
goto block19;
block19:;
frost$core$Bit $tmp135 = *(&local4);
bool $tmp136 = $tmp135.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
if ($tmp136) goto block15; else goto block16;
block15:;
// line 117
frost$collections$Array* $tmp137 = *(&local2);
frost$core$Int64 $tmp138 = *(&local3);
frost$core$Object* $tmp139 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp137, $tmp138);
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// line 118
frost$collections$Array* $tmp140 = *(&local2);
frost$core$Int64 $tmp141 = *(&local3);
frost$core$Int64 $tmp142 = (frost$core$Int64) {1};
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143 - $tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {$tmp145};
frost$core$Object* $tmp147 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp140, $tmp146);
frost$core$Frost$unref$frost$core$Object$Q($tmp147);
// line 119
goto block8;
block16:;
goto block12;
block12:;
frost$core$Int64 $tmp148 = *(&local3);
int64_t $tmp149 = $tmp101.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 - $tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {$tmp151};
frost$core$UInt64 $tmp153 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp152);
if ($tmp103) goto block21; else goto block22;
block21:;
uint64_t $tmp154 = $tmp153.value;
uint64_t $tmp155 = $tmp105.value;
bool $tmp156 = $tmp154 >= $tmp155;
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block20; else goto block11;
block22:;
uint64_t $tmp159 = $tmp153.value;
uint64_t $tmp160 = $tmp105.value;
bool $tmp161 = $tmp159 > $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block20; else goto block11;
block20:;
int64_t $tmp164 = $tmp148.value;
int64_t $tmp165 = $tmp104.value;
int64_t $tmp166 = $tmp164 + $tmp165;
frost$core$Int64 $tmp167 = (frost$core$Int64) {$tmp166};
*(&local3) = $tmp167;
goto block10;
block11:;
// line 122
goto block9;
block9:;
// line 124
frost$collections$Array* $tmp168 = *(&local2);
ITable* $tmp169 = ((frost$collections$CollectionView*) $tmp168)->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[2];
frost$core$String* $tmp172 = $tmp170(((frost$collections$CollectionView*) $tmp168), &$s173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$String* $tmp174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local0) = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// line 125
frost$core$Bit $tmp175 = *(&local1);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block23; else goto block24;
block23:;
// line 126
frost$core$String* $tmp177 = *(&local0);
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s179, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$String* $tmp180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local0) = $tmp178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
goto block24;
block24:;
// line 128
frost$core$Bit $tmp181 = *(&local1);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block27; else goto block28;
block27:;
frost$core$String* $tmp183 = *(&local0);
frost$core$Bit $tmp184 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp183, &$s185);
*(&local5) = $tmp184;
goto block29;
block28:;
*(&local5) = $tmp181;
goto block29;
block29:;
frost$core$Bit $tmp186 = *(&local5);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block25; else goto block26;
block25:;
// line 130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$Array* $tmp188 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block26:;
// line 132
frost$core$String* $tmp190 = *(&local0);
frost$core$Bit $tmp191 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp190, &$s192);
bool $tmp193 = $tmp191.value;
if ($tmp193) goto block30; else goto block31;
block30:;
// line 133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s194));
frost$core$String* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = &$s196;
goto block31;
block31:;
// line 135
frost$core$String* $tmp197 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$collections$Array* $tmp198 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local0) = ((frost$core$String*) NULL);
return $tmp197;

}
frost$io$File* frost$io$File$get_parent$R$frost$io$File$Q(frost$io$File* param0) {

frost$core$String* local0 = NULL;
// line 139
frost$io$File* $tmp200 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s201);
frost$core$String** $tmp202 = &$tmp200->path;
frost$core$String* $tmp203 = *$tmp202;
frost$core$String* $tmp204 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(param0, $tmp203);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$String* $tmp205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local0) = $tmp204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// line 140
frost$core$String* $tmp206 = *(&local0);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206 == NULL);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block1; else goto block2;
block1:;
// line 141
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$io$File*) NULL);
block2:;
// line 143
frost$io$File* $tmp210 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp211 = *(&local0);
frost$io$File$init$frost$core$String($tmp210, $tmp211);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$String* $tmp212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = ((frost$core$String*) NULL);
return $tmp210;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* param0) {

frost$core$String$Index$nullable local0;
// line 147
frost$core$String** $tmp213 = &param0->path;
frost$core$String* $tmp214 = *$tmp213;
frost$core$String$Index$nullable $tmp215 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp214, &$s216);
*(&local0) = $tmp215;
// line 148
frost$core$String$Index$nullable $tmp217 = *(&local0);
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit($tmp217.nonnull);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block1; else goto block3;
block1:;
// line 149
frost$core$String** $tmp220 = &param0->path;
frost$core$String* $tmp221 = *$tmp220;
frost$core$String** $tmp222 = &param0->path;
frost$core$String* $tmp223 = *$tmp222;
frost$core$String$Index$nullable $tmp224 = *(&local0);
frost$core$String$Index $tmp225 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp223, ((frost$core$String$Index) $tmp224.value));
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp227 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp225, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp226);
frost$core$String* $tmp228 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp221, $tmp227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
return $tmp228;
block3:;
// line 1
// line 152
frost$core$String** $tmp229 = &param0->path;
frost$core$String* $tmp230 = *$tmp229;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
return $tmp230;
block2:;
goto block4;
block4:;

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// line 157
frost$core$String* $tmp231 = frost$io$File$get_name$R$frost$core$String(param0);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$String* $tmp232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// line 158
frost$core$String* $tmp233 = *(&local0);
frost$core$String$Index$nullable $tmp234 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp233, &$s235);
*(&local1) = $tmp234;
// line 159
frost$core$String$Index$nullable $tmp236 = *(&local1);
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit(!$tmp236.nonnull);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block1; else goto block2;
block1:;
// line 160
frost$core$String* $tmp239 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$String* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local0) = ((frost$core$String*) NULL);
return $tmp239;
block2:;
// line 162
frost$core$String* $tmp241 = *(&local0);
frost$core$String$Index$nullable $tmp242 = *(&local1);
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp244 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp242, $tmp243);
frost$core$String* $tmp245 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp241, $tmp244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$String* $tmp246 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local0) = ((frost$core$String*) NULL);
return $tmp245;

}
frost$io$File* frost$io$File$withExtension$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// line 182
frost$io$File* $tmp247 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
frost$core$String* $tmp248 = frost$io$File$get_simpleName$R$frost$core$String(param0);
frost$core$String* $tmp249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp248, param1);
frost$io$File* $tmp250 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp247, $tmp249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
return $tmp250;

}
frost$core$Error* frost$io$File$createDirectories$R$frost$core$Error$Q(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$core$Bit local2;
// line 223
*(&local0) = ((frost$core$Error*) NULL);
// line 224
frost$io$File* $tmp251 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$io$File* $tmp252 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local1) = $tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// line 225
frost$io$File* $tmp253 = *(&local1);
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit(true);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block5; else goto block6;
block5:;
frost$io$File* $tmp256 = *(&local1);
frost$core$Bit $tmp257;
frost$io$File$exists$R$frost$core$Bit(&$tmp257, $tmp256);
frost$core$Bit $tmp258 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp257);
*(&local2) = $tmp258;
goto block7;
block6:;
*(&local2) = $tmp254;
goto block7;
block7:;
frost$core$Bit $tmp259 = *(&local2);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block3; else goto block4;
block3:;
// line 226
frost$io$File* $tmp261 = *(&local1);
frost$core$Error* $tmp262 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp261);
if ($tmp262 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = $tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$io$File* $tmp263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
goto block4;
block4:;
// line 228
frost$core$Error* $tmp264 = frost$io$File$createDirectory$R$frost$core$Error$Q(param0);
if ($tmp264 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$io$File* $tmp265 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// line 229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$io$File* $tmp266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Error* $tmp267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 232
frost$core$Error* $tmp268 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Error* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp268;
block2:;
frost$core$Error* $tmp270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 270
*(&local0) = ((frost$core$Error*) NULL);
// line 271
frost$core$Maybe* $tmp271 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp272 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp273 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp274 = &$tmp273->$rawValue;
frost$core$Int64 $tmp275 = *$tmp274;
int64_t $tmp276 = $tmp275.value;
bool $tmp277 = $tmp276 == 0;
if ($tmp277) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp278 = (frost$core$Error**) ($tmp273->$data + 0);
frost$core$Error* $tmp279 = *$tmp278;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local0) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
goto block1;
block3:;
frost$core$Object** $tmp280 = (frost$core$Object**) ($tmp273->$data + 0);
frost$core$Object* $tmp281 = *$tmp280;
$fn283 $tmp282 = ($fn283) ((frost$io$InputStream*) $tmp281)->$class->vtable[14];
frost$core$String* $tmp284 = $tmp282(((frost$io$InputStream*) $tmp281));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp271, $tmp272, ((frost$core$Object*) $tmp284));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Error* $tmp285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp271;
block1:;
// line 274
frost$core$Maybe* $tmp286 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp287 = (frost$core$Int64) {1};
frost$core$Error* $tmp288 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp286, $tmp287, $tmp288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Error* $tmp289 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp286;
block2:;
frost$core$Error* $tmp290 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 286
*(&local0) = ((frost$core$Error*) NULL);
// line 287
frost$core$Maybe* $tmp291 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp292 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp293 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp294 = &$tmp293->$rawValue;
frost$core$Int64 $tmp295 = *$tmp294;
int64_t $tmp296 = $tmp295.value;
bool $tmp297 = $tmp296 == 0;
if ($tmp297) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp298 = (frost$core$Error**) ($tmp293->$data + 0);
frost$core$Error* $tmp299 = *$tmp298;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = $tmp299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
goto block1;
block3:;
frost$core$Object** $tmp300 = (frost$core$Object**) ($tmp293->$data + 0);
frost$core$Object* $tmp301 = *$tmp300;
$fn303 $tmp302 = ($fn303) ((frost$io$InputStream*) $tmp301)->$class->vtable[15];
frost$collections$Array* $tmp304 = $tmp302(((frost$io$InputStream*) $tmp301));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp291, $tmp292, ((frost$core$Object*) $tmp304));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Error* $tmp305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp291;
block1:;
// line 290
frost$core$Maybe* $tmp306 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp307 = (frost$core$Int64) {1};
frost$core$Error* $tmp308 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp306, $tmp307, $tmp308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Error* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp306;
block2:;
frost$core$Error* $tmp310 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Error* frost$io$File$write$frost$core$String$R$frost$core$Error$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// line 301
*(&local0) = ((frost$core$Error*) NULL);
// line 302
frost$core$Maybe* $tmp311 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param0);
frost$core$Int64* $tmp312 = &$tmp311->$rawValue;
frost$core$Int64 $tmp313 = *$tmp312;
int64_t $tmp314 = $tmp313.value;
bool $tmp315 = $tmp314 == 0;
if ($tmp315) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp316 = (frost$core$Error**) ($tmp311->$data + 0);
frost$core$Error* $tmp317 = *$tmp316;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local0) = $tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
goto block1;
block3:;
frost$core$Object** $tmp318 = (frost$core$Object**) ($tmp311->$data + 0);
frost$core$Object* $tmp319 = *$tmp318;
$fn321 $tmp320 = ($fn321) ((frost$io$OutputStream*) $tmp319)->$class->vtable[17];
frost$core$Error* $tmp322 = $tmp320(((frost$io$OutputStream*) $tmp319), param1);
if ($tmp322 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// line 303
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 306
frost$core$Error* $tmp324 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Error* $tmp325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp324;
block2:;
frost$core$Error* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$core$Error*) NULL);
goto block7;
block7:;

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* param0, frost$io$File* param1) {

// line 336
frost$core$String** $tmp327 = &param0->path;
frost$core$String* $tmp328 = *$tmp327;
frost$core$String** $tmp329 = &param1->path;
frost$core$String* $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp328, $tmp330);
return $tmp331;

}
frost$core$Int64 frost$io$File$get_hash$R$frost$core$Int64(frost$io$File* param0) {

// line 341
frost$core$String** $tmp332 = &param0->path;
frost$core$String* $tmp333 = *$tmp332;
ITable* $tmp334 = ((frost$collections$Key*) $tmp333)->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$core$Int64 $tmp337 = $tmp335(((frost$collections$Key*) $tmp333));
return $tmp337;

}
frost$core$String* frost$io$File$get_asString$R$frost$core$String(frost$io$File* param0) {

// line 349
frost$core$String** $tmp338 = &param0->path;
frost$core$String* $tmp339 = *$tmp338;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
return $tmp339;

}
void frost$io$File$cleanup(frost$io$File* param0) {

// line 13
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp340 = &param0->path;
frost$core$String* $tmp341 = *$tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
return;

}

