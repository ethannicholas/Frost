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
typedef frost$core$String* (*$fn274)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn278)(frost$io$InputStream*);
typedef void (*$fn282)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn292)(frost$collections$Key*);

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
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x67\x65\x74\x5f\x6e\x61\x6d\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -501828357178180747, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };

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
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit($tmp195 != NULL);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp198 = (frost$core$Int64) {137};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s199, $tmp198, &$s200);
abort(); // unreachable
block3:;
frost$io$File$init$frost$core$String($tmp194, $tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing REF($34:frost.io.File)
frost$core$String* $tmp201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp194;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* param0) {

frost$core$String$Index$nullable local0;
// line 141
frost$core$String** $tmp202 = &param0->path;
frost$core$String* $tmp203 = *$tmp202;
frost$core$String$Index$nullable $tmp204 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp203, &$s205);
*(&local0) = $tmp204;
// line 142
frost$core$String$Index$nullable $tmp206 = *(&local0);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206.nonnull);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block1; else goto block3;
block1:;
// line 143
frost$core$String** $tmp209 = &param0->path;
frost$core$String* $tmp210 = *$tmp209;
frost$core$String** $tmp211 = &param0->path;
frost$core$String* $tmp212 = *$tmp211;
frost$core$String$Index$nullable $tmp213 = *(&local0);
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit($tmp213.nonnull);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp216 = (frost$core$Int64) {143};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s217, $tmp216, &$s218);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp219 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp212, ((frost$core$String$Index) $tmp213.value));
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp221 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp219, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp220);
frost$core$String* $tmp222 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp210, $tmp221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($29:frost.core.String)
return $tmp222;
block3:;
// line 1
// line 146
frost$core$String** $tmp223 = &param0->path;
frost$core$String* $tmp224 = *$tmp223;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
return $tmp224;
block2:;
frost$core$Bit $tmp225 = frost$core$Bit$init$builtin_bit(false);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {140};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// line 151
frost$core$String* $tmp230 = frost$io$File$get_name$R$frost$core$String(param0);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$String* $tmp231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// unreffing REF($1:frost.core.String)
// line 152
frost$core$String* $tmp232 = *(&local0);
frost$core$String$Index$nullable $tmp233 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp232, &$s234);
*(&local1) = $tmp233;
// line 153
frost$core$String$Index$nullable $tmp235 = *(&local1);
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit(!$tmp235.nonnull);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block1; else goto block2;
block1:;
// line 154
frost$core$String* $tmp238 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$String* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp238;
block2:;
// line 156
frost$core$String* $tmp240 = *(&local0);
frost$core$String$Index$nullable $tmp241 = *(&local1);
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp243 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp241, $tmp242);
frost$core$String* $tmp244 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp240, $tmp243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($37:frost.core.String)
frost$core$String* $tmp245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp244;

}
frost$io$File* frost$io$File$changeExtension$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// line 175
frost$io$File* $tmp246 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246 != NULL);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp249 = (frost$core$Int64) {175};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s250, $tmp249, &$s251);
abort(); // unreachable
block1:;
frost$core$String* $tmp252 = frost$io$File$get_simpleName$R$frost$core$String(param0);
frost$core$String* $tmp253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp252, param1);
frost$io$File* $tmp254 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp246, $tmp253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// unreffing REF($12:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($1:frost.io.File?)
return $tmp254;

}
void frost$io$File$createDirectories(frost$io$File* param0) {

frost$io$File* local0 = NULL;
frost$core$Bit local1;
// line 214
frost$io$File* $tmp255 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit($tmp255 != NULL);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s259, $tmp258, &$s260);
abort(); // unreachable
block1:;
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$io$File* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($1:frost.io.File?)
// line 215
frost$io$File* $tmp262 = *(&local0);
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit(true);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block5; else goto block6;
block5:;
frost$io$File* $tmp265 = *(&local0);
frost$core$Bit $tmp266;
frost$io$File$exists$R$frost$core$Bit(&$tmp266, $tmp265);
frost$core$Bit $tmp267 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp266);
*(&local1) = $tmp267;
goto block7;
block6:;
*(&local1) = $tmp263;
goto block7;
block7:;
frost$core$Bit $tmp268 = *(&local1);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block3; else goto block4;
block3:;
// line 216
frost$io$File* $tmp270 = *(&local0);
frost$io$File$createDirectories($tmp270);
goto block4;
block4:;
// line 218
frost$io$File$createDirectory(param0);
frost$io$File* $tmp271 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing p
*(&local0) = ((frost$io$File*) NULL);
return;

}
frost$core$String* frost$io$File$readFully$R$frost$core$String(frost$io$File* param0) {

// line 255
frost$io$InputStream* $tmp272 = frost$io$File$openInputStream$R$frost$io$InputStream(param0);
$fn274 $tmp273 = ($fn274) $tmp272->$class->vtable[14];
frost$core$String* $tmp275 = $tmp273($tmp272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing REF($1:frost.io.InputStream)
return $tmp275;

}
frost$collections$Array* frost$io$File$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$File* param0) {

// line 266
frost$io$InputStream* $tmp276 = frost$io$File$openInputStream$R$frost$io$InputStream(param0);
$fn278 $tmp277 = ($fn278) $tmp276->$class->vtable[15];
frost$collections$Array* $tmp279 = $tmp277($tmp276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($3:frost.collections.Array<frost.core.UInt8>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing REF($1:frost.io.InputStream)
return $tmp279;

}
void frost$io$File$write$frost$core$String(frost$io$File* param0, frost$core$String* param1) {

// line 276
frost$io$OutputStream* $tmp280 = frost$io$File$openOutputStream$R$frost$io$OutputStream(param0);
$fn282 $tmp281 = ($fn282) $tmp280->$class->vtable[17];
$tmp281($tmp280, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($1:frost.io.OutputStream)
return;

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* param0, frost$io$File* param1) {

// line 305
frost$core$String** $tmp283 = &param0->path;
frost$core$String* $tmp284 = *$tmp283;
frost$core$String** $tmp285 = &param1->path;
frost$core$String* $tmp286 = *$tmp285;
frost$core$Bit $tmp287 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp284, $tmp286);
return $tmp287;

}
frost$core$Int64 frost$io$File$get_hash$R$frost$core$Int64(frost$io$File* param0) {

// line 310
frost$core$String** $tmp288 = &param0->path;
frost$core$String* $tmp289 = *$tmp288;
ITable* $tmp290 = ((frost$collections$Key*) $tmp289)->$class->itable;
while ($tmp290->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp290 = $tmp290->next;
}
$fn292 $tmp291 = $tmp290->methods[0];
frost$core$Int64 $tmp293 = $tmp291(((frost$collections$Key*) $tmp289));
return $tmp293;

}
frost$core$String* frost$io$File$convert$R$frost$core$String(frost$io$File* param0) {

// line 318
frost$core$String** $tmp294 = &param0->path;
frost$core$String* $tmp295 = *$tmp294;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
return $tmp295;

}
void frost$io$File$cleanup(frost$io$File* param0) {

// line 14
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp296 = &param0->path;
frost$core$String* $tmp297 = *$tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
return;

}

