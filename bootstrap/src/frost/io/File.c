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
frost$io$File$class_type frost$io$File$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$io$File$_frost$core$Equatable, { frost$io$File$convert$R$frost$core$String$shim, frost$io$File$cleanup$shim, frost$io$File$resolve$frost$core$String$R$frost$io$File, frost$io$File$lines$R$frost$core$Maybe$LTfrost$collections$Iterator$LTfrost$core$String$GT$GT, frost$io$File$get_isAbsolute$R$frost$core$Bit, frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT, frost$io$File$normalize$frost$core$String$R$frost$core$String$Q, frost$io$File$get_parent$R$frost$io$File$Q, frost$io$File$get_name$R$frost$core$String, frost$io$File$get_simpleName$R$frost$core$String, frost$io$File$withExtension$frost$core$String$R$frost$io$File, frost$io$File$exists$R$frost$core$Bit, frost$io$File$isDirectory$R$frost$core$Bit, frost$io$File$list$R$frost$collections$ListView$LTfrost$io$File$GT, frost$io$File$createDirectory, frost$io$File$createDirectories, frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT, frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT, frost$io$File$openForAppend$R$frost$io$OutputStream, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT, frost$io$File$write$frost$core$String$R$frost$core$Error$Q, frost$io$File$rename$frost$io$File$R$frost$core$Error$Q, frost$io$File$delete$R$frost$core$Error$Q, frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$io$File$get_hash$R$frost$core$Int64$shim} };

typedef frost$collections$Iterator* (*$fn36)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn101)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn138)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn176)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn305)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn330)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn353)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn373)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, -5081736495465938641, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x6c\x69\x6e\x65\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 119, -9144581624086021476, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2f\x2b", 3, 1973583, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2e\x2e", 3, 1514440, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x67\x65\x74\x5f\x6e\x61\x6d\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -501828357178180747, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x72\x65\x61\x64\x46\x75\x6c\x6c\x79\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 93, 3568653503921294003, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x72\x65\x61\x64\x46\x75\x6c\x6c\x79\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 117, -6316733458180020166, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x77\x72\x69\x74\x65\x28\x63\x6f\x6e\x74\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 97, -967608565859808281, NULL };

void frost$io$File$init$frost$core$String(frost$io$File* param0, frost$core$String* param1) {

// line 42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->path;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->path;
*$tmp4 = param1;
return;

}
frost$io$File* frost$io$File$resolve$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// line 56
frost$core$Bit $tmp5 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s6);
bool $tmp7 = $tmp5.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 57
frost$io$File* $tmp8 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp8, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($5:frost.io.File)
return $tmp8;
block2:;
// line 59
frost$core$String** $tmp9 = &param0->path;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Bit $tmp11 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp10, &$s12);
bool $tmp13 = $tmp11.value;
if ($tmp13) goto block3; else goto block4;
block3:;
// line 60
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
// line 62
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
frost$core$Maybe* frost$io$File$lines$R$frost$core$Maybe$LTfrost$collections$Iterator$LTfrost$core$String$GT$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 73
*(&local0) = ((frost$core$Error*) NULL);
// line 74
frost$core$Maybe* $tmp24 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp25 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp26 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
// try maybe check
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
// unreffing REF($6:frost.core.Maybe<frost.io.InputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($3:frost.core.Maybe<frost.collections.Iterator<frost.core.String>>)
goto block1;
block3:;
frost$core$Object** $tmp33 = (frost$core$Object**) ($tmp26->$data + 0);
frost$core$Object* $tmp34 = *$tmp33;
$fn36 $tmp35 = ($fn36) ((frost$io$InputStream*) $tmp34)->$class->vtable[18];
frost$collections$Iterator* $tmp37 = $tmp35(((frost$io$InputStream*) $tmp34));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp24, $tmp25, ((frost$core$Object*) $tmp37));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($30:frost.collections.Iterator<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($6:frost.core.Maybe<frost.io.InputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($3:frost.core.Maybe<frost.collections.Iterator<frost.core.String>>)
frost$core$Error* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp24;
block1:;
// line 77
frost$core$Maybe* $tmp39 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
frost$core$Error* $tmp41 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp39, $tmp40, $tmp41);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($51:frost.core.Maybe<frost.collections.Iterator<frost.core.String>>)
frost$core$Error* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp39;
block2:;
frost$core$Error* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit(false);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s47, $tmp46, &$s48);
abort(); // unreachable
block5:;
abort(); // unreachable

}
frost$core$Bit frost$io$File$get_isAbsolute$R$frost$core$Bit(frost$io$File* param0) {

// line 82
frost$core$String** $tmp49 = &param0->path;
frost$core$String* $tmp50 = *$tmp49;
frost$core$Bit $tmp51 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp50, &$s52);
return $tmp51;

}
frost$core$String* frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 96
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp53 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local0) = param1;
// line 98
frost$core$String* $tmp54 = *(&local0);
frost$core$RegularExpression* $tmp55 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp55, &$s56);
frost$core$String* $tmp57 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp54, $tmp55, &$s58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$String* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($10:frost.core.RegularExpression)
// line 99
frost$core$String* $tmp60 = *(&local0);
frost$core$Bit $tmp61 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp60, &$s62);
bool $tmp63 = $tmp61.value;
if ($tmp63) goto block1; else goto block2;
block1:;
// line 100
frost$core$String* $tmp64 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$String* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp64;
block2:;
// line 103
goto block3;
block3:;
frost$core$String* $tmp66 = *(&local0);
frost$core$Bit $tmp67 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp66, &$s68);
bool $tmp69 = $tmp67.value;
if ($tmp69) goto block4; else goto block5;
block4:;
// line 104
frost$core$String* $tmp70 = *(&local0);
frost$core$String* $tmp71 = *(&local0);
frost$core$Int64 $tmp72 = frost$core$String$get_length$R$frost$core$Int64($tmp71);
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 - $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
frost$core$Bit $tmp78 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp79 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { .nonnull = false }), ((frost$core$Int64$nullable) { $tmp77, true }), $tmp78);
frost$core$String* $tmp80 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp70, $tmp79);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$String* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($59:frost.core.String)
goto block3;
block5:;
// line 106
frost$core$String* $tmp82 = *(&local0);
frost$core$Bit $tmp83 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp82, &$s84);
*(&local1) = $tmp83;
// line 107
frost$core$Bit $tmp85 = *(&local1);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block6; else goto block7;
block6:;
// line 108
frost$core$String* $tmp87 = *(&local0);
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp90 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp88, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp89);
frost$core$String* $tmp91 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp87, $tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$String* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($84:frost.core.String)
goto block7;
block7:;
// line 111
frost$core$String* $tmp93 = *(&local0);
frost$collections$Array* $tmp94 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp93, &$s95);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$collections$Array* $tmp96 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local2) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($97:frost.collections.Array<frost.core.String>)
// line 112
goto block8;
block8:;
// line 113
frost$core$Int64 $tmp97 = (frost$core$Int64) {1};
frost$collections$Array* $tmp98 = *(&local2);
ITable* $tmp99 = ((frost$collections$CollectionView*) $tmp98)->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
frost$core$Int64 $tmp102 = $tmp100(((frost$collections$CollectionView*) $tmp98));
frost$core$Bit $tmp103 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp104 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp97, $tmp102, $tmp103);
frost$core$Int64 $tmp105 = $tmp104.min;
*(&local3) = $tmp105;
frost$core$Int64 $tmp106 = $tmp104.max;
frost$core$Bit $tmp107 = $tmp104.inclusive;
bool $tmp108 = $tmp107.value;
frost$core$Int64 $tmp109 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp110 = frost$core$Int64$convert$R$frost$core$UInt64($tmp109);
if ($tmp108) goto block13; else goto block14;
block13:;
int64_t $tmp111 = $tmp105.value;
int64_t $tmp112 = $tmp106.value;
bool $tmp113 = $tmp111 <= $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block10; else goto block11;
block14:;
int64_t $tmp116 = $tmp105.value;
int64_t $tmp117 = $tmp106.value;
bool $tmp118 = $tmp116 < $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block10; else goto block11;
block10:;
// line 114
frost$collections$Array* $tmp121 = *(&local2);
frost$core$Int64 $tmp122 = *(&local3);
frost$core$Object* $tmp123 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp121, $tmp122);
frost$core$Bit $tmp124 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp123), &$s125);
bool $tmp126 = $tmp124.value;
if ($tmp126) goto block17; else goto block18;
block17:;
frost$collections$Array* $tmp127 = *(&local2);
frost$core$Int64 $tmp128 = *(&local3);
frost$core$Int64 $tmp129 = (frost$core$Int64) {1};
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130 - $tmp131;
frost$core$Int64 $tmp133 = (frost$core$Int64) {$tmp132};
frost$core$Object* $tmp134 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp127, $tmp133);
ITable* $tmp136 = ((frost$core$Equatable*) ((frost$core$String*) $tmp134))->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[1];
frost$core$Bit $tmp139 = $tmp137(((frost$core$Equatable*) ((frost$core$String*) $tmp134)), ((frost$core$Equatable*) &$s135));
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
// unreffing REF($155:frost.collections.Array.T)
*(&local4) = $tmp139;
goto block19;
block18:;
*(&local4) = $tmp124;
goto block19;
block19:;
frost$core$Bit $tmp140 = *(&local4);
bool $tmp141 = $tmp140.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp123);
// unreffing REF($142:frost.collections.Array.T)
if ($tmp141) goto block15; else goto block16;
block15:;
// line 115
frost$collections$Array* $tmp142 = *(&local2);
frost$core$Int64 $tmp143 = *(&local3);
frost$core$Object* $tmp144 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp142, $tmp143);
frost$core$Frost$unref$frost$core$Object$Q($tmp144);
// unreffing REF($179:frost.collections.Array.T)
// line 116
frost$collections$Array* $tmp145 = *(&local2);
frost$core$Int64 $tmp146 = *(&local3);
frost$core$Int64 $tmp147 = (frost$core$Int64) {1};
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148 - $tmp149;
frost$core$Int64 $tmp151 = (frost$core$Int64) {$tmp150};
frost$core$Object* $tmp152 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp145, $tmp151);
frost$core$Frost$unref$frost$core$Object$Q($tmp152);
// unreffing REF($193:frost.collections.Array.T)
// line 117
goto block8;
block16:;
goto block12;
block12:;
frost$core$Int64 $tmp153 = *(&local3);
int64_t $tmp154 = $tmp106.value;
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154 - $tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {$tmp156};
frost$core$UInt64 $tmp158 = frost$core$Int64$convert$R$frost$core$UInt64($tmp157);
if ($tmp108) goto block21; else goto block22;
block21:;
uint64_t $tmp159 = $tmp158.value;
uint64_t $tmp160 = $tmp110.value;
bool $tmp161 = $tmp159 >= $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block20; else goto block11;
block22:;
uint64_t $tmp164 = $tmp158.value;
uint64_t $tmp165 = $tmp110.value;
bool $tmp166 = $tmp164 > $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block20; else goto block11;
block20:;
int64_t $tmp169 = $tmp153.value;
int64_t $tmp170 = $tmp109.value;
int64_t $tmp171 = $tmp169 + $tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {$tmp171};
*(&local3) = $tmp172;
goto block10;
block11:;
// line 120
goto block9;
block9:;
// line 122
frost$collections$Array* $tmp173 = *(&local2);
ITable* $tmp174 = ((frost$collections$CollectionView*) $tmp173)->$class->itable;
while ($tmp174->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[2];
frost$core$String* $tmp177 = $tmp175(((frost$collections$CollectionView*) $tmp173), &$s178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$String* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($232:frost.core.String)
// line 123
frost$core$Bit $tmp180 = *(&local1);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block23; else goto block24;
block23:;
// line 124
frost$core$String* $tmp182 = *(&local0);
frost$core$String* $tmp183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s184, $tmp182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$String* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing REF($248:frost.core.String)
goto block24;
block24:;
// line 126
frost$core$Bit $tmp186 = *(&local1);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block27; else goto block28;
block27:;
frost$core$String* $tmp188 = *(&local0);
frost$core$Bit $tmp189 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp188, &$s190);
*(&local5) = $tmp189;
goto block29;
block28:;
*(&local5) = $tmp186;
goto block29;
block29:;
frost$core$Bit $tmp191 = *(&local5);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block25; else goto block26;
block25:;
// line 128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$Array* $tmp193 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing components
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block26:;
// line 130
frost$core$String* $tmp195 = *(&local0);
frost$core$Bit $tmp196 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp195, &$s197);
bool $tmp198 = $tmp196.value;
if ($tmp198) goto block30; else goto block31;
block30:;
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s199));
frost$core$String* $tmp200 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local0) = &$s201;
goto block31;
block31:;
// line 133
frost$core$String* $tmp202 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$collections$Array* $tmp203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing components
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp202;

}
frost$io$File* frost$io$File$get_parent$R$frost$io$File$Q(frost$io$File* param0) {

frost$core$String* local0 = NULL;
// line 137
frost$io$File* $tmp205 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s206);
frost$core$String** $tmp207 = &$tmp205->path;
frost$core$String* $tmp208 = *$tmp207;
frost$core$String* $tmp209 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(param0, $tmp208);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$String* $tmp210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local0) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing REF($4:frost.core.String?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($1:frost.io.File)
// line 138
frost$core$String* $tmp211 = *(&local0);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211 == NULL);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block1; else goto block2;
block1:;
// line 139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp214 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return ((frost$io$File*) NULL);
block2:;
// line 141
frost$io$File* $tmp215 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp216 = *(&local0);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216 != NULL);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp219 = (frost$core$Int64) {141};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s220, $tmp219, &$s221);
abort(); // unreachable
block3:;
frost$io$File$init$frost$core$String($tmp215, $tmp216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($34:frost.io.File)
frost$core$String* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp215;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* param0) {

frost$core$String$Index$nullable local0;
// line 145
frost$core$String** $tmp223 = &param0->path;
frost$core$String* $tmp224 = *$tmp223;
frost$core$String$Index$nullable $tmp225 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp224, &$s226);
*(&local0) = $tmp225;
// line 146
frost$core$String$Index$nullable $tmp227 = *(&local0);
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227.nonnull);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block3;
block1:;
// line 147
frost$core$String** $tmp230 = &param0->path;
frost$core$String* $tmp231 = *$tmp230;
frost$core$String** $tmp232 = &param0->path;
frost$core$String* $tmp233 = *$tmp232;
frost$core$String$Index$nullable $tmp234 = *(&local0);
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit($tmp234.nonnull);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {147};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s238, $tmp237, &$s239);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp240 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp233, ((frost$core$String$Index) $tmp234.value));
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp242 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp240, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp241);
frost$core$String* $tmp243 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp231, $tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($29:frost.core.String)
return $tmp243;
block3:;
// line 1
// line 150
frost$core$String** $tmp244 = &param0->path;
frost$core$String* $tmp245 = *$tmp244;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
return $tmp245;
block2:;
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit(false);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {144};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s249, $tmp248, &$s250);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// line 155
frost$core$String* $tmp251 = frost$io$File$get_name$R$frost$core$String(param0);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$String* $tmp252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local0) = $tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing REF($1:frost.core.String)
// line 156
frost$core$String* $tmp253 = *(&local0);
frost$core$String$Index$nullable $tmp254 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp253, &$s255);
*(&local1) = $tmp254;
// line 157
frost$core$String$Index$nullable $tmp256 = *(&local1);
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit(!$tmp256.nonnull);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// line 158
frost$core$String* $tmp259 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$String* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp259;
block2:;
// line 160
frost$core$String* $tmp261 = *(&local0);
frost$core$String$Index$nullable $tmp262 = *(&local1);
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp264 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp262, $tmp263);
frost$core$String* $tmp265 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp261, $tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($37:frost.core.String)
frost$core$String* $tmp266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp265;

}
frost$io$File* frost$io$File$withExtension$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// line 180
frost$io$File* $tmp267 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
frost$core$Bit $tmp268 = frost$core$Bit$init$builtin_bit($tmp267 != NULL);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp270 = (frost$core$Int64) {180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s271, $tmp270, &$s272);
abort(); // unreachable
block1:;
frost$core$String* $tmp273 = frost$io$File$get_simpleName$R$frost$core$String(param0);
frost$core$String* $tmp274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp273, param1);
frost$io$File* $tmp275 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp267, $tmp274);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($12:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($1:frost.io.File?)
return $tmp275;

}
void frost$io$File$createDirectories(frost$io$File* param0) {

frost$io$File* local0 = NULL;
frost$core$Bit local1;
// line 224
frost$io$File* $tmp276 = frost$io$File$get_parent$R$frost$io$File$Q(param0);
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit($tmp276 != NULL);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp279 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block1:;
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$io$File* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = $tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing REF($1:frost.io.File?)
// line 225
frost$io$File* $tmp283 = *(&local0);
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit(true);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block5; else goto block6;
block5:;
frost$io$File* $tmp286 = *(&local0);
frost$core$Bit $tmp287;
frost$io$File$exists$R$frost$core$Bit(&$tmp287, $tmp286);
frost$core$Bit $tmp288 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp287);
*(&local1) = $tmp288;
goto block7;
block6:;
*(&local1) = $tmp284;
goto block7;
block7:;
frost$core$Bit $tmp289 = *(&local1);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block3; else goto block4;
block3:;
// line 226
frost$io$File* $tmp291 = *(&local0);
frost$io$File$createDirectories($tmp291);
goto block4;
block4:;
// line 228
frost$io$File$createDirectory(param0);
frost$io$File* $tmp292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing p
*(&local0) = ((frost$io$File*) NULL);
return;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 265
*(&local0) = ((frost$core$Error*) NULL);
// line 266
frost$core$Maybe* $tmp293 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp294 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp295 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
// try maybe check
frost$core$Int64* $tmp296 = &$tmp295->$rawValue;
frost$core$Int64 $tmp297 = *$tmp296;
int64_t $tmp298 = $tmp297.value;
bool $tmp299 = $tmp298 == 0;
if ($tmp299) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp300 = (frost$core$Error**) ($tmp295->$data + 0);
frost$core$Error* $tmp301 = *$tmp300;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = $tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($6:frost.core.Maybe<frost.io.InputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing REF($3:frost.core.Maybe<frost.core.String>)
goto block1;
block3:;
frost$core$Object** $tmp302 = (frost$core$Object**) ($tmp295->$data + 0);
frost$core$Object* $tmp303 = *$tmp302;
$fn305 $tmp304 = ($fn305) ((frost$io$InputStream*) $tmp303)->$class->vtable[14];
frost$core$String* $tmp306 = $tmp304(((frost$io$InputStream*) $tmp303));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp293, $tmp294, ((frost$core$Object*) $tmp306));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($6:frost.core.Maybe<frost.io.InputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing REF($3:frost.core.Maybe<frost.core.String>)
frost$core$Error* $tmp307 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp293;
block1:;
// line 269
frost$core$Maybe* $tmp308 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp309 = (frost$core$Int64) {1};
frost$core$Error* $tmp310 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp308, $tmp309, $tmp310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($51:frost.core.Maybe<frost.core.String>)
frost$core$Error* $tmp311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp308;
block2:;
frost$core$Error* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit(false);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block5:;
abort(); // unreachable

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// line 281
*(&local0) = ((frost$core$Error*) NULL);
// line 282
frost$core$Maybe* $tmp318 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp319 = (frost$core$Int64) {0};
frost$core$Maybe* $tmp320 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
// try maybe check
frost$core$Int64* $tmp321 = &$tmp320->$rawValue;
frost$core$Int64 $tmp322 = *$tmp321;
int64_t $tmp323 = $tmp322.value;
bool $tmp324 = $tmp323 == 0;
if ($tmp324) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp325 = (frost$core$Error**) ($tmp320->$data + 0);
frost$core$Error* $tmp326 = *$tmp325;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = $tmp326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing REF($6:frost.core.Maybe<frost.io.InputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($3:frost.core.Maybe<frost.collections.Array<frost.core.UInt8>>)
goto block1;
block3:;
frost$core$Object** $tmp327 = (frost$core$Object**) ($tmp320->$data + 0);
frost$core$Object* $tmp328 = *$tmp327;
$fn330 $tmp329 = ($fn330) ((frost$io$InputStream*) $tmp328)->$class->vtable[15];
frost$collections$Array* $tmp331 = $tmp329(((frost$io$InputStream*) $tmp328));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp318, $tmp319, ((frost$core$Object*) $tmp331));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($30:frost.collections.Array<frost.core.UInt8>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing REF($6:frost.core.Maybe<frost.io.InputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($3:frost.core.Maybe<frost.collections.Array<frost.core.UInt8>>)
frost$core$Error* $tmp332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp318;
block1:;
// line 285
frost$core$Maybe* $tmp333 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp334 = (frost$core$Int64) {1};
frost$core$Error* $tmp335 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp333, $tmp334, $tmp335);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($51:frost.core.Maybe<frost.collections.Array<frost.core.UInt8>>)
frost$core$Error* $tmp336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp333;
block2:;
frost$core$Error* $tmp337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp338 = frost$core$Bit$init$builtin_bit(false);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {280};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s341, $tmp340, &$s342);
abort(); // unreachable
block5:;
abort(); // unreachable

}
frost$core$Error* frost$io$File$write$frost$core$String$R$frost$core$Error$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// line 296
*(&local0) = ((frost$core$Error*) NULL);
// line 297
frost$core$Maybe* $tmp343 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param0);
// try maybe check
frost$core$Int64* $tmp344 = &$tmp343->$rawValue;
frost$core$Int64 $tmp345 = *$tmp344;
int64_t $tmp346 = $tmp345.value;
bool $tmp347 = $tmp346 == 0;
if ($tmp347) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp348 = (frost$core$Error**) ($tmp343->$data + 0);
frost$core$Error* $tmp349 = *$tmp348;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local0) = $tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($3:frost.core.Maybe<frost.io.OutputStream>)
goto block1;
block3:;
frost$core$Object** $tmp350 = (frost$core$Object**) ($tmp343->$data + 0);
frost$core$Object* $tmp351 = *$tmp350;
$fn353 $tmp352 = ($fn353) ((frost$io$OutputStream*) $tmp351)->$class->vtable[17];
frost$core$Error* $tmp354 = $tmp352(((frost$io$OutputStream*) $tmp351), param1);
// try error check
if ($tmp354 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local0) = $tmp354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($24:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($3:frost.core.Maybe<frost.io.OutputStream>)
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($24:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($3:frost.core.Maybe<frost.io.OutputStream>)
// line 298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp355 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 301
frost$core$Error* $tmp356 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Error* $tmp357 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp356;
block2:;
frost$core$Error* $tmp358 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp359 = frost$core$Bit$init$builtin_bit(false);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp361 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s362, $tmp361, &$s363);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* param0, frost$io$File* param1) {

// line 331
frost$core$String** $tmp364 = &param0->path;
frost$core$String* $tmp365 = *$tmp364;
frost$core$String** $tmp366 = &param1->path;
frost$core$String* $tmp367 = *$tmp366;
frost$core$Bit $tmp368 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp365, $tmp367);
return $tmp368;

}
frost$core$Int64 frost$io$File$get_hash$R$frost$core$Int64(frost$io$File* param0) {

// line 336
frost$core$String** $tmp369 = &param0->path;
frost$core$String* $tmp370 = *$tmp369;
ITable* $tmp371 = ((frost$collections$Key*) $tmp370)->$class->itable;
while ($tmp371->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp371 = $tmp371->next;
}
$fn373 $tmp372 = $tmp371->methods[0];
frost$core$Int64 $tmp374 = $tmp372(((frost$collections$Key*) $tmp370));
return $tmp374;

}
frost$core$String* frost$io$File$convert$R$frost$core$String(frost$io$File* param0) {

// line 344
frost$core$String** $tmp375 = &param0->path;
frost$core$String* $tmp376 = *$tmp375;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
return $tmp376;

}
void frost$io$File$cleanup(frost$io$File* param0) {

// line 11
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp377 = &param0->path;
frost$core$String* $tmp378 = *$tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
return;

}

