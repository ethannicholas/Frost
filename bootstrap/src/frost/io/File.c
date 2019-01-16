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
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream.h"
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
__attribute__((weak)) frost$core$String* frost$io$File$convert$R$frost$core$String$shim(frost$io$File* p0) {
    frost$core$String* result = frost$io$File$convert$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$io$File$cleanup$shim(frost$io$File* p0) {
    frost$io$File$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$io$File$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$io$File$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$io$File$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$io$File$_frost$collections$Key, { frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$io$File$class_type frost$io$File$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$io$File$_frost$core$Equatable, { frost$io$File$convert$R$frost$core$String$shim, frost$io$File$cleanup$shim, frost$io$File$resolve$frost$core$String$R$frost$io$File, frost$io$File$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$File$get_isAbsolute$R$frost$core$Bit, frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT, frost$io$File$normalize$frost$core$String$R$frost$core$String$Q, frost$io$File$get_parent$R$frost$io$File$Q, frost$io$File$get_name$R$frost$core$String, frost$io$File$get_simpleName$R$frost$core$String, frost$io$File$changeExtension$frost$core$String$R$frost$io$File, frost$io$File$exists$R$frost$core$Bit, frost$io$File$isDirectory$R$frost$core$Bit, frost$io$File$list$R$frost$collections$ListView$LTfrost$io$File$GT, frost$io$File$createDirectory, frost$io$File$createDirectories, frost$io$File$openInputStream$R$frost$io$InputStream, frost$io$File$openOutputStream$R$frost$io$OutputStream, frost$io$File$openForAppend$R$frost$io$OutputStream, frost$io$File$readFully$R$frost$core$String, frost$io$File$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$File$write$frost$core$String, frost$io$File$rename$frost$io$File$R$frost$core$Error$Q, frost$io$File$delete$R$frost$core$Error$Q, frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$io$File$get_hash$R$frost$core$Int64$shim} };

typedef frost$collections$Iterator* (*$fn26)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn80)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn155)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn254)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn258)(frost$io$InputStream*);
typedef void (*$fn262)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn272)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, -5081736495465938641, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2f\x2b", 3, 1973583, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2e\x2e", 3, 1514440, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x67\x65\x74\x5f\x6e\x61\x6d\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -501828357178180747, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };

void frost$io$File$init$frost$core$String(frost$io$File* param0, frost$core$String* param1) {

// line 45
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
// unreffing REF($5:frost.io.File)
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
// unreffing REF($23:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($20:frost.io.File)
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
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($35:frost.io.File)
return $tmp18;

}
frost$collections$Iterator* frost$io$File$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$File* param0) {

// line 74
frost$io$InputStream* $tmp24 = frost$io$File$openInputStream$R$frost$io$InputStream(param0);
$fn26 $tmp25 = ($fn26) $tmp24->$class->vtable[18];
frost$collections$Iterator* $tmp27 = $tmp25($tmp24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($3:frost.collections.Iterator<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($1:frost.io.InputStream)
return $tmp27;

}
frost$core$Bit frost$io$File$get_isAbsolute$R$frost$core$Bit(frost$io$File* param0) {

// line 78
frost$core$String** $tmp28 = &param0->path;
frost$core$String* $tmp29 = *$tmp28;
frost$core$Bit $tmp30 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp29, &$s31);
return $tmp30;

}
frost$core$String* frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 92
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = param1;
// line 94
frost$core$String* $tmp33 = *(&local0);
frost$core$RegularExpression* $tmp34 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp34, &$s35);
frost$core$String* $tmp36 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp33, $tmp34, &$s37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$String* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local0) = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($10:frost.core.RegularExpression)
// line 95
frost$core$String* $tmp39 = *(&local0);
frost$core$Bit $tmp40 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp39, &$s41);
bool $tmp42 = $tmp40.value;
if ($tmp42) goto block1; else goto block2;
block1:;
// line 96
frost$core$String* $tmp43 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp43;
block2:;
// line 99
goto block3;
block3:;
frost$core$String* $tmp45 = *(&local0);
frost$core$Bit $tmp46 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp45, &$s47);
bool $tmp48 = $tmp46.value;
if ($tmp48) goto block4; else goto block5;
block4:;
// line 100
frost$core$String* $tmp49 = *(&local0);
frost$core$String* $tmp50 = *(&local0);
frost$core$Int64 $tmp51 = frost$core$String$get_length$R$frost$core$Int64($tmp50);
frost$core$Int64 $tmp52 = (frost$core$Int64) {1};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp58 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { .nonnull = false }), ((frost$core$Int64$nullable) { $tmp56, true }), $tmp57);
frost$core$String* $tmp59 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp49, $tmp58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$String* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local0) = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($59:frost.core.String)
goto block3;
block5:;
// line 102
frost$core$String* $tmp61 = *(&local0);
frost$core$Bit $tmp62 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp61, &$s63);
*(&local1) = $tmp62;
// line 103
frost$core$Bit $tmp64 = *(&local1);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block6; else goto block7;
block6:;
// line 104
frost$core$String* $tmp66 = *(&local0);
frost$core$Int64 $tmp67 = (frost$core$Int64) {1};
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp69 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp67, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp68);
frost$core$String* $tmp70 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp66, $tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$String* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($84:frost.core.String)
goto block7;
block7:;
// line 107
frost$core$String* $tmp72 = *(&local0);
frost$collections$Array* $tmp73 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp72, &$s74);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$collections$Array* $tmp75 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local2) = $tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($97:frost.collections.Array<frost.core.String>)
// line 108
goto block8;
block8:;
// line 109
frost$core$Int64 $tmp76 = (frost$core$Int64) {1};
frost$collections$Array* $tmp77 = *(&local2);
ITable* $tmp78 = ((frost$collections$CollectionView*) $tmp77)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Int64 $tmp81 = $tmp79(((frost$collections$CollectionView*) $tmp77));
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp83 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp76, $tmp81, $tmp82);
frost$core$Int64 $tmp84 = $tmp83.min;
*(&local3) = $tmp84;
frost$core$Int64 $tmp85 = $tmp83.max;
frost$core$Bit $tmp86 = $tmp83.inclusive;
bool $tmp87 = $tmp86.value;
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp89 = frost$core$Int64$convert$R$frost$core$UInt64($tmp88);
if ($tmp87) goto block13; else goto block14;
block13:;
int64_t $tmp90 = $tmp84.value;
int64_t $tmp91 = $tmp85.value;
bool $tmp92 = $tmp90 <= $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block10; else goto block11;
block14:;
int64_t $tmp95 = $tmp84.value;
int64_t $tmp96 = $tmp85.value;
bool $tmp97 = $tmp95 < $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block10; else goto block11;
block10:;
// line 110
frost$collections$Array* $tmp100 = *(&local2);
frost$core$Int64 $tmp101 = *(&local3);
frost$core$Object* $tmp102 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp100, $tmp101);
frost$core$Bit $tmp103 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp102), &$s104);
bool $tmp105 = $tmp103.value;
if ($tmp105) goto block17; else goto block18;
block17:;
frost$collections$Array* $tmp106 = *(&local2);
frost$core$Int64 $tmp107 = *(&local3);
frost$core$Int64 $tmp108 = (frost$core$Int64) {1};
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109 - $tmp110;
frost$core$Int64 $tmp112 = (frost$core$Int64) {$tmp111};
frost$core$Object* $tmp113 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp106, $tmp112);
ITable* $tmp115 = ((frost$core$Equatable*) ((frost$core$String*) $tmp113))->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[1];
frost$core$Bit $tmp118 = $tmp116(((frost$core$Equatable*) ((frost$core$String*) $tmp113)), ((frost$core$Equatable*) &$s114));
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
// unreffing REF($155:frost.collections.Array.T)
*(&local4) = $tmp118;
goto block19;
block18:;
*(&local4) = $tmp103;
goto block19;
block19:;
frost$core$Bit $tmp119 = *(&local4);
bool $tmp120 = $tmp119.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
// unreffing REF($142:frost.collections.Array.T)
if ($tmp120) goto block15; else goto block16;
block15:;
// line 111
frost$collections$Array* $tmp121 = *(&local2);
frost$core$Int64 $tmp122 = *(&local3);
frost$core$Object* $tmp123 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp121, $tmp122);
frost$core$Frost$unref$frost$core$Object$Q($tmp123);
// unreffing REF($179:frost.collections.Array.T)
// line 112
frost$collections$Array* $tmp124 = *(&local2);
frost$core$Int64 $tmp125 = *(&local3);
frost$core$Int64 $tmp126 = (frost$core$Int64) {1};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 - $tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {$tmp129};
frost$core$Object* $tmp131 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp124, $tmp130);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
// unreffing REF($193:frost.collections.Array.T)
// line 113
goto block8;
block16:;
goto block12;
block12:;
frost$core$Int64 $tmp132 = *(&local3);
int64_t $tmp133 = $tmp85.value;
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133 - $tmp134;
frost$core$Int64 $tmp136 = (frost$core$Int64) {$tmp135};
frost$core$UInt64 $tmp137 = frost$core$Int64$convert$R$frost$core$UInt64($tmp136);
if ($tmp87) goto block21; else goto block22;
block21:;
uint64_t $tmp138 = $tmp137.value;
uint64_t $tmp139 = $tmp89.value;
bool $tmp140 = $tmp138 >= $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block20; else goto block11;
block22:;
uint64_t $tmp143 = $tmp137.value;
uint64_t $tmp144 = $tmp89.value;
bool $tmp145 = $tmp143 > $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block20; else goto block11;
block20:;
int64_t $tmp148 = $tmp132.value;
int64_t $tmp149 = $tmp88.value;
int64_t $tmp150 = $tmp148 + $tmp149;
frost$core$Int64 $tmp151 = (frost$core$Int64) {$tmp150};
*(&local3) = $tmp151;
goto block10;
block11:;
// line 116
goto block9;
block9:;
// line 118
frost$collections$Array* $tmp152 = *(&local2);
ITable* $tmp153 = ((frost$collections$CollectionView*) $tmp152)->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[2];
frost$core$String* $tmp156 = $tmp154(((frost$collections$CollectionView*) $tmp152), &$s157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$String* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = $tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($232:frost.core.String)
// line 119
frost$core$Bit $tmp159 = *(&local1);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block23; else goto block24;
block23:;
// line 120
frost$core$String* $tmp161 = *(&local0);
frost$core$String* $tmp162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s163, $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$String* $tmp164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local0) = $tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($248:frost.core.String)
goto block24;
block24:;
// line 122
frost$core$Bit $tmp165 = *(&local1);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block27; else goto block28;
block27:;
frost$core$String* $tmp167 = *(&local0);
frost$core$Bit $tmp168 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp167, &$s169);
*(&local5) = $tmp168;
goto block29;
block28:;
*(&local5) = $tmp165;
goto block29;
block29:;
frost$core$Bit $tmp170 = *(&local5);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block25; else goto block26;
block25:;
// line 124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$Array* $tmp172 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing components
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp173 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block26:;
// line 126
frost$core$String* $tmp174 = *(&local0);
frost$core$Bit $tmp175 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp174, &$s176);
bool $tmp177 = $tmp175.value;
if ($tmp177) goto block30; else goto block31;
block30:;
// line 127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s178));
frost$core$String* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = &$s180;
goto block31;
block31:;
// line 129
frost$core$String* $tmp181 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$collections$Array* $tmp182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing components
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp181;

}
frost$io$File* frost$io$File$get_parent$R$frost$io$File$Q(frost$io$File* param0) {

frost$core$String* local0 = NULL;
// line 133
frost$io$File* $tmp184 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s185);
frost$core$String** $tmp186 = &$tmp184->path;
frost$core$String* $tmp187 = *$tmp186;
frost$core$String* $tmp188 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(param0, $tmp187);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$String* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing REF($4:frost.core.String?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($1:frost.io.File)
// line 134
frost$core$String* $tmp190 = *(&local0);
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit($tmp190 == NULL);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block1; else goto block2;
block1:;
// line 135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp193 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return ((frost$io$File*) NULL);
block2:;
// line 137
frost$io$File* $tmp194 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp195 = *(&local0);
frost$io$File$init$frost$core$String($tmp194, $tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing REF($34:frost.io.File)
frost$core$String* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp194;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* param0) {

frost$core$String$Index$nullable local0;
// line 141
frost$core$String** $tmp197 = &param0->path;
frost$core$String* $tmp198 = *$tmp197;
frost$core$String$Index$nullable $tmp199 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp198, &$s200);
*(&local0) = $tmp199;
// line 142
frost$core$String$Index$nullable $tmp201 = *(&local0);
frost$core$Bit $tmp202 = frost$core$Bit$init$builtin_bit($tmp201.nonnull);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block1; else goto block3;
block1:;
// line 143
frost$core$String** $tmp204 = &param0->path;
frost$core$String* $tmp205 = *$tmp204;
frost$core$String** $tmp206 = &param0->path;
frost$core$String* $tmp207 = *$tmp206;
frost$core$String$Index$nullable $tmp208 = *(&local0);
frost$core$String$Index $tmp209 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp207, ((frost$core$String$Index) $tmp208.value));
frost$core$Bit $tmp210 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp211 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp209, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp210);
frost$core$String* $tmp212 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp205, $tmp211);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($22:frost.core.String)
return $tmp212;
block3:;
// line 1
// line 146
frost$core$String** $tmp213 = &param0->path;
frost$core$String* $tmp214 = *$tmp213;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
return $tmp214;
block2:;
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit(false);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {140};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block4:;
abort(); // unreachable

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// line 151
frost$core$String* $tmp220 = frost$io$File$get_name$R$frost$core$String(param0);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$String* $tmp221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local0) = $tmp220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($1:frost.core.String)
// line 152
frost$core$String* $tmp222 = *(&local0);
frost$core$String$Index$nullable $tmp223 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp222, &$s224);
*(&local1) = $tmp223;
// line 153
frost$core$String$Index$nullable $tmp225 = *(&local1);
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit(!$tmp225.nonnull);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 154
frost$core$String* $tmp228 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$String* $tmp229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp228;
block2:;
// line 156
frost$core$String* $tmp230 = *(&local0);
frost$core$String$Index$nullable $tmp231 = *(&local1);
frost$core$Bit $tmp232 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp233 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp231, $tmp232);
frost$core$String* $tmp234 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp230, $tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($37:frost.core.String)
frost$core$String* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp234;

}
frost$io$File* frost$io$File$changeExtension$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// line 175
frost$io$File* $tmp236 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
frost$core$String* $tmp237 = frost$io$File$get_simpleName$R$frost$core$String(param0);
frost$core$String* $tmp238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp237, param1);
frost$io$File* $tmp239 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp236, $tmp238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($5:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($1:frost.io.File?)
return $tmp239;

}
void frost$io$File$createDirectories(frost$io$File* param0) {

frost$io$File* local0 = NULL;
frost$core$Bit local1;
// line 214
frost$io$File* $tmp240 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$io$File* $tmp241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local0) = $tmp240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($1:frost.io.File?)
// line 215
frost$io$File* $tmp242 = *(&local0);
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit(true);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block3; else goto block4;
block3:;
frost$io$File* $tmp245 = *(&local0);
frost$core$Bit $tmp246;
frost$io$File$exists$R$frost$core$Bit(&$tmp246, $tmp245);
frost$core$Bit $tmp247 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp246);
*(&local1) = $tmp247;
goto block5;
block4:;
*(&local1) = $tmp243;
goto block5;
block5:;
frost$core$Bit $tmp248 = *(&local1);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block1; else goto block2;
block1:;
// line 216
frost$io$File* $tmp250 = *(&local0);
frost$io$File$createDirectories($tmp250);
goto block2;
block2:;
// line 218
frost$io$File$createDirectory(param0);
frost$io$File* $tmp251 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing p
*(&local0) = ((frost$io$File*) NULL);
return;

}
frost$core$String* frost$io$File$readFully$R$frost$core$String(frost$io$File* param0) {

// line 255
frost$io$InputStream* $tmp252 = frost$io$File$openInputStream$R$frost$io$InputStream(param0);
$fn254 $tmp253 = ($fn254) $tmp252->$class->vtable[14];
frost$core$String* $tmp255 = $tmp253($tmp252);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($1:frost.io.InputStream)
return $tmp255;

}
frost$collections$Array* frost$io$File$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$File* param0) {

// line 266
frost$io$InputStream* $tmp256 = frost$io$File$openInputStream$R$frost$io$InputStream(param0);
$fn258 $tmp257 = ($fn258) $tmp256->$class->vtable[15];
frost$collections$Array* $tmp259 = $tmp257($tmp256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($3:frost.collections.Array<frost.core.UInt8>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($1:frost.io.InputStream)
return $tmp259;

}
void frost$io$File$write$frost$core$String(frost$io$File* param0, frost$core$String* param1) {

// line 276
frost$io$OutputStream* $tmp260 = frost$io$File$openOutputStream$R$frost$io$OutputStream(param0);
$fn262 $tmp261 = ($fn262) $tmp260->$class->vtable[17];
$tmp261($tmp260, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($1:frost.io.OutputStream)
return;

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* param0, frost$io$File* param1) {

// line 305
frost$core$String** $tmp263 = &param0->path;
frost$core$String* $tmp264 = *$tmp263;
frost$core$String** $tmp265 = &param1->path;
frost$core$String* $tmp266 = *$tmp265;
frost$core$Bit $tmp267 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp264, $tmp266);
return $tmp267;

}
frost$core$Int64 frost$io$File$get_hash$R$frost$core$Int64(frost$io$File* param0) {

// line 310
frost$core$String** $tmp268 = &param0->path;
frost$core$String* $tmp269 = *$tmp268;
ITable* $tmp270 = ((frost$collections$Key*) $tmp269)->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[0];
frost$core$Int64 $tmp273 = $tmp271(((frost$collections$Key*) $tmp269));
return $tmp273;

}
frost$core$String* frost$io$File$convert$R$frost$core$String(frost$io$File* param0) {

// line 318
frost$core$String** $tmp274 = &param0->path;
frost$core$String* $tmp275 = *$tmp274;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
return $tmp275;

}
void frost$io$File$cleanup(frost$io$File* param0) {

// line 14
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp276 = &param0->path;
frost$core$String* $tmp277 = *$tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
return;

}

