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
typedef frost$core$String* (*$fn170)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn280)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn300)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn318)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn333)(frost$collections$Key*);

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
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2e\x2e", 3, 1514440, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };

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
FROST_ASSERT(24 == sizeof(frost$io$File));
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
FROST_ASSERT(24 == sizeof(frost$io$File));
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
FROST_ASSERT(24 == sizeof(frost$io$File));
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
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
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
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
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
// line 98
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = param1;
// line 100
frost$core$String* $tmp49 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
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
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
if ($tmp121) goto block17; else goto block16;
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
bool $tmp135 = $tmp134.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
if ($tmp135) goto block15; else goto block16;
block15:;
// line 117
frost$collections$Array* $tmp136 = *(&local2);
frost$core$Int64 $tmp137 = *(&local3);
frost$core$Object* $tmp138 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp136, $tmp137);
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
// line 118
frost$collections$Array* $tmp139 = *(&local2);
frost$core$Int64 $tmp140 = *(&local3);
frost$core$Int64 $tmp141 = (frost$core$Int64) {1};
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 - $tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {$tmp144};
frost$core$Object* $tmp146 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp139, $tmp145);
frost$core$Frost$unref$frost$core$Object$Q($tmp146);
// line 119
goto block8;
block16:;
goto block12;
block12:;
frost$core$Int64 $tmp147 = *(&local3);
int64_t $tmp148 = $tmp101.value;
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148 - $tmp149;
frost$core$Int64 $tmp151 = (frost$core$Int64) {$tmp150};
frost$core$UInt64 $tmp152 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp151);
if ($tmp103) goto block19; else goto block20;
block19:;
uint64_t $tmp153 = $tmp152.value;
uint64_t $tmp154 = $tmp105.value;
bool $tmp155 = $tmp153 >= $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block18; else goto block11;
block20:;
uint64_t $tmp158 = $tmp152.value;
uint64_t $tmp159 = $tmp105.value;
bool $tmp160 = $tmp158 > $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block18; else goto block11;
block18:;
int64_t $tmp163 = $tmp147.value;
int64_t $tmp164 = $tmp104.value;
int64_t $tmp165 = $tmp163 + $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {$tmp165};
*(&local3) = $tmp166;
goto block10;
block11:;
// line 122
goto block9;
block9:;
// line 124
frost$collections$Array* $tmp167 = *(&local2);
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[2];
frost$core$String* $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp167), &$s172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$String* $tmp173 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local0) = $tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// line 125
frost$core$Bit $tmp174 = *(&local1);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block21; else goto block22;
block21:;
// line 126
frost$core$String* $tmp176 = *(&local0);
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s178, $tmp176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$String* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
goto block22;
block22:;
// line 128
frost$core$Bit $tmp180 = *(&local1);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block25; else goto block24;
block25:;
frost$core$String* $tmp182 = *(&local0);
frost$core$Bit $tmp183 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp182, &$s184);
bool $tmp185 = $tmp183.value;
if ($tmp185) goto block23; else goto block24;
block23:;
// line 130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$Array* $tmp186 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block24:;
// line 132
frost$core$String* $tmp188 = *(&local0);
frost$core$Bit $tmp189 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp188, &$s190);
bool $tmp191 = $tmp189.value;
if ($tmp191) goto block26; else goto block27;
block26:;
// line 133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s192));
frost$core$String* $tmp193 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local0) = &$s194;
goto block27;
block27:;
// line 135
frost$core$String* $tmp195 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$collections$Array* $tmp196 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local0) = ((frost$core$String*) NULL);
return $tmp195;

}
frost$io$File* frost$io$File$get_parent$R$frost$io$File$Q(frost$io$File* param0) {

frost$core$String* local0 = NULL;
// line 139
frost$io$File* $tmp198 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s199);
frost$core$String** $tmp200 = &$tmp198->path;
frost$core$String* $tmp201 = *$tmp200;
frost$core$String* $tmp202 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(param0, $tmp201);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$String* $tmp203 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local0) = $tmp202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// line 140
frost$core$String* $tmp204 = *(&local0);
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204 == NULL);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block1; else goto block2;
block1:;
// line 141
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$io$File*) NULL);
block2:;
// line 143
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp208 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp209 = *(&local0);
frost$io$File$init$frost$core$String($tmp208, $tmp209);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$String* $tmp210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local0) = ((frost$core$String*) NULL);
return $tmp208;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* param0) {

frost$core$String$Index$nullable local0;
// line 147
frost$core$String** $tmp211 = &param0->path;
frost$core$String* $tmp212 = *$tmp211;
frost$core$String$Index$nullable $tmp213 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp212, &$s214);
*(&local0) = $tmp213;
// line 148
frost$core$String$Index$nullable $tmp215 = *(&local0);
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit($tmp215.nonnull);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block1; else goto block3;
block1:;
// line 149
frost$core$String** $tmp218 = &param0->path;
frost$core$String* $tmp219 = *$tmp218;
frost$core$String** $tmp220 = &param0->path;
frost$core$String* $tmp221 = *$tmp220;
frost$core$String$Index$nullable $tmp222 = *(&local0);
frost$core$String$Index $tmp223 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp221, ((frost$core$String$Index) $tmp222.value));
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp225 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp223, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp224);
frost$core$String* $tmp226 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp219, $tmp225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
return $tmp226;
block3:;
// line 1
// line 152
frost$core$String** $tmp227 = &param0->path;
frost$core$String* $tmp228 = *$tmp227;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
return $tmp228;
block2:;
goto block4;
block4:;

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// line 157
frost$core$String* $tmp229 = frost$io$File$get_name$R$frost$core$String(param0);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$String* $tmp230 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local0) = $tmp229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// line 158
frost$core$String* $tmp231 = *(&local0);
frost$core$String$Index$nullable $tmp232 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp231, &$s233);
*(&local1) = $tmp232;
// line 159
frost$core$String$Index$nullable $tmp234 = *(&local1);
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit(!$tmp234.nonnull);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 160
frost$core$String* $tmp237 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$String* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = ((frost$core$String*) NULL);
return $tmp237;
block2:;
// line 162
frost$core$String* $tmp239 = *(&local0);
frost$core$String$Index$nullable $tmp240 = *(&local1);
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp242 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp240, $tmp241);
frost$core$String* $tmp243 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp239, $tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$String* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = ((frost$core$String*) NULL);
return $tmp243;

}
frost$io$File* frost$io$File$withExtension$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// line 182
frost$io$File* $tmp245 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
frost$core$String* $tmp246 = frost$io$File$get_simpleName$R$frost$core$String(param0);
frost$core$String* $tmp247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp246, param1);
frost$io$File* $tmp248 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp245, $tmp247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
return $tmp248;

}
frost$core$Error* frost$io$File$createDirectories$R$frost$core$Error$Q(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
// line 223
*(&local0) = ((frost$core$Error*) NULL);
// line 224
frost$io$File* $tmp249 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$io$File* $tmp250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local1) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// line 225
frost$io$File* $tmp251 = *(&local1);
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit(true);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block5; else goto block4;
block5:;
frost$io$File* $tmp254 = *(&local1);
frost$core$Bit $tmp255;
frost$io$File$exists$R$frost$core$Bit(&$tmp255, $tmp254);
frost$core$Bit $tmp256 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp255);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block3; else goto block4;
block3:;
// line 226
frost$io$File* $tmp258 = *(&local1);
frost$core$Error* $tmp259 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp258);
if ($tmp259 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local0) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$io$File* $tmp260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
goto block4;
block4:;
// line 228
frost$core$Error* $tmp261 = frost$io$File$createDirectory$R$frost$core$Error$Q(param0);
if ($tmp261 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = $tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$io$File* $tmp262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// line 229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$io$File* $tmp263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Error* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 232
frost$core$Error* $tmp265 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Error* $tmp266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp265;
block2:;
frost$core$Error* $tmp267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 270
*(&local0) = ((frost$core$Error*) NULL);
// line 271
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp268 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp269 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp270 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp271 = &$tmp270->$rawValue;
frost$core$Int64 $tmp272 = *$tmp271;
int64_t $tmp273 = $tmp272.value;
bool $tmp274 = $tmp273 == 0;
if ($tmp274) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp275 = (frost$core$Error**) ($tmp270->$data + 0);
frost$core$Error* $tmp276 = *$tmp275;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local0) = $tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
goto block1;
block3:;
frost$core$Object** $tmp277 = (frost$core$Object**) ($tmp270->$data + 0);
frost$core$Object* $tmp278 = *$tmp277;
$fn280 $tmp279 = ($fn280) ((frost$io$InputStream*) $tmp278)->$class->vtable[14];
frost$core$String* $tmp281 = $tmp279(((frost$io$InputStream*) $tmp278));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp268, $tmp269, ((frost$core$Object*) $tmp281));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Error* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp268;
block1:;
// line 274
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp283 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp284 = (frost$core$Int64) {1};
frost$core$Error* $tmp285 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp283, $tmp284, $tmp285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Error* $tmp286 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp283;
block2:;
frost$core$Error* $tmp287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 286
*(&local0) = ((frost$core$Error*) NULL);
// line 287
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp288 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp289 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp290 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp291 = &$tmp290->$rawValue;
frost$core$Int64 $tmp292 = *$tmp291;
int64_t $tmp293 = $tmp292.value;
bool $tmp294 = $tmp293 == 0;
if ($tmp294) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp295 = (frost$core$Error**) ($tmp290->$data + 0);
frost$core$Error* $tmp296 = *$tmp295;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local0) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
goto block1;
block3:;
frost$core$Object** $tmp297 = (frost$core$Object**) ($tmp290->$data + 0);
frost$core$Object* $tmp298 = *$tmp297;
$fn300 $tmp299 = ($fn300) ((frost$io$InputStream*) $tmp298)->$class->vtable[15];
frost$collections$Array* $tmp301 = $tmp299(((frost$io$InputStream*) $tmp298));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp288, $tmp289, ((frost$core$Object*) $tmp301));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Error* $tmp302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp288;
block1:;
// line 290
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp303 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp304 = (frost$core$Int64) {1};
frost$core$Error* $tmp305 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp303, $tmp304, $tmp305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Error* $tmp306 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp303;
block2:;
frost$core$Error* $tmp307 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Error* frost$io$File$write$frost$core$String$R$frost$core$Error$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// line 301
*(&local0) = ((frost$core$Error*) NULL);
// line 302
frost$core$Maybe* $tmp308 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param0);
frost$core$Int64* $tmp309 = &$tmp308->$rawValue;
frost$core$Int64 $tmp310 = *$tmp309;
int64_t $tmp311 = $tmp310.value;
bool $tmp312 = $tmp311 == 0;
if ($tmp312) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp313 = (frost$core$Error**) ($tmp308->$data + 0);
frost$core$Error* $tmp314 = *$tmp313;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local0) = $tmp314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
goto block1;
block3:;
frost$core$Object** $tmp315 = (frost$core$Object**) ($tmp308->$data + 0);
frost$core$Object* $tmp316 = *$tmp315;
$fn318 $tmp317 = ($fn318) ((frost$io$OutputStream*) $tmp316)->$class->vtable[17];
frost$core$Error* $tmp319 = $tmp317(((frost$io$OutputStream*) $tmp316), param1);
if ($tmp319 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local0) = $tmp319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// line 303
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp320 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 306
frost$core$Error* $tmp321 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Error* $tmp322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp321;
block2:;
frost$core$Error* $tmp323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = ((frost$core$Error*) NULL);
goto block7;
block7:;

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* param0, frost$io$File* param1) {

// line 336
frost$core$String** $tmp324 = &param0->path;
frost$core$String* $tmp325 = *$tmp324;
frost$core$String** $tmp326 = &param1->path;
frost$core$String* $tmp327 = *$tmp326;
frost$core$Bit $tmp328 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp325, $tmp327);
return $tmp328;

}
frost$core$Int64 frost$io$File$get_hash$R$frost$core$Int64(frost$io$File* param0) {

// line 341
frost$core$String** $tmp329 = &param0->path;
frost$core$String* $tmp330 = *$tmp329;
ITable* $tmp331 = ((frost$collections$Key*) $tmp330)->$class->itable;
while ($tmp331->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp331 = $tmp331->next;
}
$fn333 $tmp332 = $tmp331->methods[0];
frost$core$Int64 $tmp334 = $tmp332(((frost$collections$Key*) $tmp330));
return $tmp334;

}
frost$core$String* frost$io$File$get_asString$R$frost$core$String(frost$io$File* param0) {

// line 349
frost$core$String** $tmp335 = &param0->path;
frost$core$String* $tmp336 = *$tmp335;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
return $tmp336;

}
void frost$io$File$cleanup(frost$io$File* param0) {

// line 13
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp337 = &param0->path;
frost$core$String* $tmp338 = *$tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
return;

}

