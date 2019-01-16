#include "panda/io/File.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/collections/Array.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/io/OutputStream.h"

__attribute__((weak)) panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(p0, ((panda$io$File*) p1));

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$io$File$get_hash$R$panda$core$Int64$shim(panda$io$File* p0) {
    panda$core$Int64 result = panda$io$File$get_hash$R$panda$core$Int64(p0);

    return result;
}
__attribute__((weak)) panda$core$String* panda$io$File$convert$R$panda$core$String$shim(panda$io$File* p0) {
    panda$core$String* result = panda$io$File$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$io$File$cleanup$shim(panda$io$File* p0) {
    panda$io$File$cleanup(p0);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$File$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$io$File$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$io$File$_panda$core$Equatable, { panda$io$File$get_hash$R$panda$core$Int64$shim} };

static panda$core$String $s1;
panda$io$File$class_type panda$io$File$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$io$File$_panda$collections$Key, { panda$io$File$convert$R$panda$core$String$shim, panda$io$File$cleanup$shim, panda$io$File$resolve$panda$core$String$R$panda$io$File, panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$File$get_isAbsolute$R$panda$core$Bit, panda$io$File$absolute$R$panda$core$Maybe$LTpanda$io$File$GT, panda$io$File$normalize$panda$core$String$R$panda$core$String$Q, panda$io$File$get_parent$R$panda$io$File$Q, panda$io$File$get_name$R$panda$core$String, panda$io$File$get_simpleName$R$panda$core$String, panda$io$File$get_extension$R$panda$core$String$Q, panda$io$File$changeExtension$panda$core$String$R$panda$io$File, panda$io$File$exists$R$panda$core$Bit, panda$io$File$isDirectory$R$panda$core$Bit, panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT, panda$io$File$createDirectory, panda$io$File$createDirectories, panda$io$File$openInputStream$R$panda$io$InputStream, panda$io$File$openOutputStream$R$panda$io$OutputStream, panda$io$File$openForAppend$R$panda$io$OutputStream, panda$io$File$readFully$R$panda$core$String, panda$io$File$write$panda$core$String, panda$io$File$delete$R$panda$core$Error$Q, panda$io$File$rename$panda$core$String$R$panda$core$Error$Q, panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$get_hash$R$panda$core$Int64$shim} };

typedef panda$collections$Iterator* (*$fn26)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn80)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn117)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn155)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn296)(panda$io$InputStream*);
typedef void (*$fn300)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn310)(panda$collections$Key*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2f\x2b", 3, 1973583, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2e\x2e", 3, 1514440, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x67\x65\x74\x5f\x6e\x61\x6d\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -2505417808199636183, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 3701427202375030729, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };

void panda$io$File$init$panda$core$String(panda$io$File* param0, panda$core$String* param1) {

// line 51
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp2 = &param0->path;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$String** $tmp4 = &param0->path;
*$tmp4 = param1;
return;

}
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* param0, panda$core$String* param1) {

// line 64
panda$core$Bit $tmp5 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param1, &$s6);
bool $tmp7 = $tmp5.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 65
panda$io$File* $tmp8 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp8, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($5:panda.io.File)
return $tmp8;
block2:;
// line 67
panda$core$String** $tmp9 = &param0->path;
panda$core$String* $tmp10 = *$tmp9;
panda$core$Bit $tmp11 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp10, &$s12);
bool $tmp13 = $tmp11.value;
if ($tmp13) goto block3; else goto block4;
block3:;
// line 68
panda$io$File* $tmp14 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String** $tmp15 = &param0->path;
panda$core$String* $tmp16 = *$tmp15;
panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp16, param1);
panda$io$File$init$panda$core$String($tmp14, $tmp17);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($20:panda.io.File)
return $tmp14;
block4:;
// line 70
panda$io$File* $tmp18 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String** $tmp19 = &param0->path;
panda$core$String* $tmp20 = *$tmp19;
panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, &$s22);
panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, param1);
panda$io$File$init$panda$core$String($tmp18, $tmp23);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($35:panda.io.File)
return $tmp18;

}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* param0) {

// line 80
panda$io$InputStream* $tmp24 = panda$io$File$openInputStream$R$panda$io$InputStream(param0);
$fn26 $tmp25 = ($fn26) $tmp24->$class->vtable[17];
panda$collections$Iterator* $tmp27 = $tmp25($tmp24);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($3:panda.collections.Iterator<panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($1:panda.io.InputStream)
return $tmp27;

}
panda$core$Bit panda$io$File$get_isAbsolute$R$panda$core$Bit(panda$io$File* param0) {

// line 84
panda$core$String** $tmp28 = &param0->path;
panda$core$String* $tmp29 = *$tmp28;
panda$core$Bit $tmp30 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp29, &$s31);
return $tmp30;

}
panda$core$String* panda$io$File$normalize$panda$core$String$R$panda$core$String$Q(panda$io$File* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$core$Bit local4;
panda$core$Bit local5;
// line 98
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String* $tmp32 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
*(&local0) = param1;
// line 100
panda$core$String* $tmp33 = *(&local0);
panda$core$RegularExpression* $tmp34 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp34, &$s35);
panda$core$String* $tmp36 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp33, $tmp34, &$s37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$String* $tmp38 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
*(&local0) = $tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($10:panda.core.RegularExpression)
// line 101
panda$core$String* $tmp39 = *(&local0);
panda$core$Bit $tmp40 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp39, &$s41);
bool $tmp42 = $tmp40.value;
if ($tmp42) goto block1; else goto block2;
block1:;
// line 102
panda$core$String* $tmp43 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$String* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp43;
block2:;
// line 105
goto block3;
block3:;
panda$core$String* $tmp45 = *(&local0);
panda$core$Bit $tmp46 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp45, &$s47);
bool $tmp48 = $tmp46.value;
if ($tmp48) goto block4; else goto block5;
block4:;
// line 106
panda$core$String* $tmp49 = *(&local0);
panda$core$String* $tmp50 = *(&local0);
panda$core$Int64 $tmp51 = panda$core$String$get_length$R$panda$core$Int64($tmp50);
panda$core$Int64 $tmp52 = (panda$core$Int64) {1};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
panda$core$Int64 $tmp56 = (panda$core$Int64) {$tmp55};
panda$core$Bit $tmp57 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp58 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp56, true }), $tmp57);
panda$core$String* $tmp59 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp49, $tmp58);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$String* $tmp60 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
*(&local0) = $tmp59;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($59:panda.core.String)
goto block3;
block5:;
// line 108
panda$core$String* $tmp61 = *(&local0);
panda$core$Bit $tmp62 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp61, &$s63);
*(&local1) = $tmp62;
// line 109
panda$core$Bit $tmp64 = *(&local1);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block6; else goto block7;
block6:;
// line 110
panda$core$String* $tmp66 = *(&local0);
panda$core$Int64 $tmp67 = (panda$core$Int64) {1};
panda$core$Bit $tmp68 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp69 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp67, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp68);
panda$core$String* $tmp70 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp66, $tmp69);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$core$String* $tmp71 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
*(&local0) = $tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($84:panda.core.String)
goto block7;
block7:;
// line 113
panda$core$String* $tmp72 = *(&local0);
panda$collections$Array* $tmp73 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp72, &$s74);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$collections$Array* $tmp75 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
*(&local2) = $tmp73;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($97:panda.collections.Array<panda.core.String>)
// line 114
goto block8;
block8:;
// line 115
panda$core$Int64 $tmp76 = (panda$core$Int64) {1};
panda$collections$Array* $tmp77 = *(&local2);
ITable* $tmp78 = ((panda$collections$CollectionView*) $tmp77)->$class->itable;
while ($tmp78->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
panda$core$Int64 $tmp81 = $tmp79(((panda$collections$CollectionView*) $tmp77));
panda$core$Bit $tmp82 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp83 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp76, $tmp81, $tmp82);
panda$core$Int64 $tmp84 = $tmp83.min;
*(&local3) = $tmp84;
panda$core$Int64 $tmp85 = $tmp83.max;
panda$core$Bit $tmp86 = $tmp83.inclusive;
bool $tmp87 = $tmp86.value;
panda$core$Int64 $tmp88 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp89 = panda$core$Int64$convert$R$panda$core$UInt64($tmp88);
if ($tmp87) goto block13; else goto block14;
block13:;
int64_t $tmp90 = $tmp84.value;
int64_t $tmp91 = $tmp85.value;
bool $tmp92 = $tmp90 <= $tmp91;
panda$core$Bit $tmp93 = (panda$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block10; else goto block11;
block14:;
int64_t $tmp95 = $tmp84.value;
int64_t $tmp96 = $tmp85.value;
bool $tmp97 = $tmp95 < $tmp96;
panda$core$Bit $tmp98 = (panda$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block10; else goto block11;
block10:;
// line 116
panda$collections$Array* $tmp100 = *(&local2);
panda$core$Int64 $tmp101 = *(&local3);
panda$core$Object* $tmp102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp100, $tmp101);
panda$core$Bit $tmp103 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp102), &$s104);
bool $tmp105 = $tmp103.value;
if ($tmp105) goto block17; else goto block18;
block17:;
panda$collections$Array* $tmp106 = *(&local2);
panda$core$Int64 $tmp107 = *(&local3);
panda$core$Int64 $tmp108 = (panda$core$Int64) {1};
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109 - $tmp110;
panda$core$Int64 $tmp112 = (panda$core$Int64) {$tmp111};
panda$core$Object* $tmp113 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp106, $tmp112);
ITable* $tmp115 = ((panda$core$Equatable*) ((panda$core$String*) $tmp113))->$class->itable;
while ($tmp115->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[1];
panda$core$Bit $tmp118 = $tmp116(((panda$core$Equatable*) ((panda$core$String*) $tmp113)), ((panda$core$Equatable*) &$s114));
panda$core$Panda$unref$panda$core$Object$Q($tmp113);
// unreffing REF($155:panda.collections.Array.T)
*(&local4) = $tmp118;
goto block19;
block18:;
*(&local4) = $tmp103;
goto block19;
block19:;
panda$core$Bit $tmp119 = *(&local4);
bool $tmp120 = $tmp119.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp102);
// unreffing REF($142:panda.collections.Array.T)
if ($tmp120) goto block15; else goto block16;
block15:;
// line 117
panda$collections$Array* $tmp121 = *(&local2);
panda$core$Int64 $tmp122 = *(&local3);
panda$core$Object* $tmp123 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T($tmp121, $tmp122);
panda$core$Panda$unref$panda$core$Object$Q($tmp123);
// unreffing REF($179:panda.collections.Array.T)
// line 118
panda$collections$Array* $tmp124 = *(&local2);
panda$core$Int64 $tmp125 = *(&local3);
panda$core$Int64 $tmp126 = (panda$core$Int64) {1};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 - $tmp128;
panda$core$Int64 $tmp130 = (panda$core$Int64) {$tmp129};
panda$core$Object* $tmp131 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T($tmp124, $tmp130);
panda$core$Panda$unref$panda$core$Object$Q($tmp131);
// unreffing REF($193:panda.collections.Array.T)
// line 119
goto block8;
block16:;
goto block12;
block12:;
panda$core$Int64 $tmp132 = *(&local3);
int64_t $tmp133 = $tmp85.value;
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133 - $tmp134;
panda$core$Int64 $tmp136 = (panda$core$Int64) {$tmp135};
panda$core$UInt64 $tmp137 = panda$core$Int64$convert$R$panda$core$UInt64($tmp136);
if ($tmp87) goto block21; else goto block22;
block21:;
uint64_t $tmp138 = $tmp137.value;
uint64_t $tmp139 = $tmp89.value;
bool $tmp140 = $tmp138 >= $tmp139;
panda$core$Bit $tmp141 = (panda$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block20; else goto block11;
block22:;
uint64_t $tmp143 = $tmp137.value;
uint64_t $tmp144 = $tmp89.value;
bool $tmp145 = $tmp143 > $tmp144;
panda$core$Bit $tmp146 = (panda$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block20; else goto block11;
block20:;
int64_t $tmp148 = $tmp132.value;
int64_t $tmp149 = $tmp88.value;
int64_t $tmp150 = $tmp148 + $tmp149;
panda$core$Int64 $tmp151 = (panda$core$Int64) {$tmp150};
*(&local3) = $tmp151;
goto block10;
block11:;
// line 122
goto block9;
block9:;
// line 124
panda$collections$Array* $tmp152 = *(&local2);
ITable* $tmp153 = ((panda$collections$CollectionView*) $tmp152)->$class->itable;
while ($tmp153->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[2];
panda$core$String* $tmp156 = $tmp154(((panda$collections$CollectionView*) $tmp152), &$s157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
panda$core$String* $tmp158 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
*(&local0) = $tmp156;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing REF($232:panda.core.String)
// line 125
panda$core$Bit $tmp159 = *(&local1);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block23; else goto block24;
block23:;
// line 126
panda$core$String* $tmp161 = *(&local0);
panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s163, $tmp161);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
panda$core$String* $tmp164 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
*(&local0) = $tmp162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
// unreffing REF($248:panda.core.String)
goto block24;
block24:;
// line 128
panda$core$Bit $tmp165 = *(&local1);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block27; else goto block28;
block27:;
panda$core$String* $tmp167 = *(&local0);
panda$core$Bit $tmp168 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp167, &$s169);
*(&local5) = $tmp168;
goto block29;
block28:;
*(&local5) = $tmp165;
goto block29;
block29:;
panda$core$Bit $tmp170 = *(&local5);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block25; else goto block26;
block25:;
// line 130
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$collections$Array* $tmp172 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing components
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp173 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$String*) NULL);
block26:;
// line 132
panda$core$String* $tmp174 = *(&local0);
panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp174, &$s176);
bool $tmp177 = $tmp175.value;
if ($tmp177) goto block30; else goto block31;
block30:;
// line 133
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s178));
panda$core$String* $tmp179 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
*(&local0) = &$s180;
goto block31;
block31:;
// line 135
panda$core$String* $tmp181 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$collections$Array* $tmp182 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing components
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp183 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp181;

}
panda$io$File* panda$io$File$get_parent$R$panda$io$File$Q(panda$io$File* param0) {

panda$core$String* local0 = NULL;
// line 139
panda$io$File* $tmp184 = panda$io$File$resolve$panda$core$String$R$panda$io$File(param0, &$s185);
panda$core$String** $tmp186 = &$tmp184->path;
panda$core$String* $tmp187 = *$tmp186;
panda$core$String* $tmp188 = panda$io$File$normalize$panda$core$String$R$panda$core$String$Q(param0, $tmp187);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
panda$core$String* $tmp189 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
*(&local0) = $tmp188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing REF($4:panda.core.String?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing REF($1:panda.io.File)
// line 140
panda$core$String* $tmp190 = *(&local0);
panda$core$Bit $tmp191 = panda$core$Bit$init$builtin_bit($tmp190 == NULL);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block1; else goto block2;
block1:;
// line 141
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$core$String* $tmp193 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return ((panda$io$File*) NULL);
block2:;
// line 143
panda$io$File* $tmp194 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp195 = *(&local0);
panda$core$Bit $tmp196 = panda$core$Bit$init$builtin_bit($tmp195 != NULL);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp198 = (panda$core$Int64) {143};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s199, $tmp198, &$s200);
abort(); // unreachable
block3:;
panda$io$File$init$panda$core$String($tmp194, $tmp195);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($34:panda.io.File)
panda$core$String* $tmp201 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp194;

}
panda$core$String* panda$io$File$get_name$R$panda$core$String(panda$io$File* param0) {

panda$core$String$Index$nullable local0;
// line 147
panda$core$String** $tmp202 = &param0->path;
panda$core$String* $tmp203 = *$tmp202;
panda$core$String$Index$nullable $tmp204 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp203, &$s205);
*(&local0) = $tmp204;
// line 148
panda$core$String$Index$nullable $tmp206 = *(&local0);
panda$core$Bit $tmp207 = panda$core$Bit$init$builtin_bit($tmp206.nonnull);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block1; else goto block3;
block1:;
// line 149
panda$core$String** $tmp209 = &param0->path;
panda$core$String* $tmp210 = *$tmp209;
panda$core$String** $tmp211 = &param0->path;
panda$core$String* $tmp212 = *$tmp211;
panda$core$String$Index$nullable $tmp213 = *(&local0);
panda$core$Bit $tmp214 = panda$core$Bit$init$builtin_bit($tmp213.nonnull);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp216 = (panda$core$Int64) {149};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s217, $tmp216, &$s218);
abort(); // unreachable
block4:;
panda$core$String$Index $tmp219 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp212, ((panda$core$String$Index) $tmp213.value));
panda$core$Bit $tmp220 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp221 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp219, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp220);
panda$core$String* $tmp222 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp210, $tmp221);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($29:panda.core.String)
return $tmp222;
block3:;
// line 1
// line 152
panda$core$String** $tmp223 = &param0->path;
panda$core$String* $tmp224 = *$tmp223;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
return $tmp224;
block2:;
panda$core$Bit $tmp225 = panda$core$Bit$init$builtin_bit(false);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {146};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$io$File$get_simpleName$R$panda$core$String(panda$io$File* param0) {

panda$core$String* local0 = NULL;
panda$core$String$Index$nullable local1;
// line 157
panda$core$String* $tmp230 = panda$io$File$get_name$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
panda$core$String* $tmp231 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
*(&local0) = $tmp230;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// unreffing REF($1:panda.core.String)
// line 158
panda$core$String* $tmp232 = *(&local0);
panda$core$String$Index$nullable $tmp233 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp232, &$s234);
*(&local1) = $tmp233;
// line 159
panda$core$String$Index$nullable $tmp235 = *(&local1);
panda$core$Bit $tmp236 = panda$core$Bit$init$builtin_bit($tmp235.nonnull);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block1; else goto block2;
block1:;
// line 160
panda$core$String* $tmp238 = *(&local0);
panda$core$String$Index$nullable $tmp239 = *(&local1);
panda$core$Bit $tmp240 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp241 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { .nonnull = false }), $tmp239, $tmp240);
panda$core$String* $tmp242 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp238, $tmp241);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($27:panda.core.String)
panda$core$String* $tmp243 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp242;
block2:;
// line 162
panda$core$String* $tmp244 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
panda$core$String* $tmp245 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp244;

}
panda$core$String* panda$io$File$get_extension$R$panda$core$String$Q(panda$io$File* param0) {

panda$core$String* local0 = NULL;
panda$core$String$Index$nullable local1;
// line 166
panda$core$String* $tmp246 = panda$io$File$get_name$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
panda$core$String* $tmp247 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
*(&local0) = $tmp246;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing REF($1:panda.core.String)
// line 167
panda$core$String* $tmp248 = *(&local0);
panda$core$String$Index$nullable $tmp249 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp248, &$s250);
*(&local1) = $tmp249;
// line 168
panda$core$String$Index$nullable $tmp251 = *(&local1);
panda$core$Bit $tmp252 = panda$core$Bit$init$builtin_bit($tmp251.nonnull);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block1; else goto block2;
block1:;
// line 169
panda$core$String* $tmp254 = *(&local0);
panda$core$String* $tmp255 = *(&local0);
panda$core$String$Index$nullable $tmp256 = *(&local1);
panda$core$Bit $tmp257 = panda$core$Bit$init$builtin_bit($tmp256.nonnull);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp259 = (panda$core$Int64) {169};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s260, $tmp259, &$s261);
abort(); // unreachable
block3:;
panda$core$String$Index $tmp262 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp255, ((panda$core$String$Index) $tmp256.value));
panda$core$Bit $tmp263 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp264 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp262, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp263);
panda$core$String* $tmp265 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp254, $tmp264);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($38:panda.core.String)
panda$core$String* $tmp266 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing n
*(&local0) = ((panda$core$String*) NULL);
return $tmp265;
block2:;
// line 171
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp267 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing n
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$String*) NULL);

}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* param0, panda$core$String* param1) {

// line 190
panda$io$File* $tmp268 = panda$io$File$get_parent$R$panda$io$File$Q(param0);
panda$core$Bit $tmp269 = panda$core$Bit$init$builtin_bit($tmp268 != NULL);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp271 = (panda$core$Int64) {190};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s272, $tmp271, &$s273);
abort(); // unreachable
block1:;
panda$core$String* $tmp274 = panda$io$File$get_simpleName$R$panda$core$String(param0);
panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, param1);
panda$io$File* $tmp276 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp268, $tmp275);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
// unreffing REF($12:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing REF($10:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($1:panda.io.File?)
return $tmp276;

}
void panda$io$File$createDirectories(panda$io$File* param0) {

panda$io$File* local0 = NULL;
panda$core$Bit local1;
// line 229
panda$io$File* $tmp277 = panda$io$File$get_parent$R$panda$io$File$Q(param0);
panda$core$Bit $tmp278 = panda$core$Bit$init$builtin_bit($tmp277 != NULL);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp280 = (panda$core$Int64) {229};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s281, $tmp280, &$s282);
abort(); // unreachable
block1:;
*(&local0) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
panda$io$File* $tmp283 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
*(&local0) = $tmp277;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($1:panda.io.File?)
// line 230
panda$io$File* $tmp284 = *(&local0);
panda$core$Bit $tmp285 = panda$core$Bit$init$builtin_bit(true);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block5; else goto block6;
block5:;
panda$io$File* $tmp287 = *(&local0);
panda$core$Bit $tmp288;
panda$io$File$exists$R$panda$core$Bit(&$tmp288, $tmp287);
panda$core$Bit $tmp289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp288);
*(&local1) = $tmp289;
goto block7;
block6:;
*(&local1) = $tmp285;
goto block7;
block7:;
panda$core$Bit $tmp290 = *(&local1);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block3; else goto block4;
block3:;
// line 231
panda$io$File* $tmp292 = *(&local0);
panda$io$File$createDirectories($tmp292);
goto block4;
block4:;
// line 233
panda$io$File$createDirectory(param0);
panda$io$File* $tmp293 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing p
*(&local0) = ((panda$io$File*) NULL);
return;

}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* param0) {

// line 269
panda$io$InputStream* $tmp294 = panda$io$File$openInputStream$R$panda$io$InputStream(param0);
$fn296 $tmp295 = ($fn296) $tmp294->$class->vtable[14];
panda$core$String* $tmp297 = $tmp295($tmp294);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($1:panda.io.InputStream)
return $tmp297;

}
void panda$io$File$write$panda$core$String(panda$io$File* param0, panda$core$String* param1) {

// line 279
panda$io$OutputStream* $tmp298 = panda$io$File$openOutputStream$R$panda$io$OutputStream(param0);
$fn300 $tmp299 = ($fn300) $tmp298->$class->vtable[17];
$tmp299($tmp298, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($1:panda.io.OutputStream)
return;

}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* param0, panda$io$File* param1) {

// line 307
panda$core$String** $tmp301 = &param0->path;
panda$core$String* $tmp302 = *$tmp301;
panda$core$String** $tmp303 = &param1->path;
panda$core$String* $tmp304 = *$tmp303;
panda$core$Bit $tmp305 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp302, $tmp304);
return $tmp305;

}
panda$core$Int64 panda$io$File$get_hash$R$panda$core$Int64(panda$io$File* param0) {

// line 312
panda$core$String** $tmp306 = &param0->path;
panda$core$String* $tmp307 = *$tmp306;
ITable* $tmp308 = ((panda$collections$Key*) $tmp307)->$class->itable;
while ($tmp308->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp308 = $tmp308->next;
}
$fn310 $tmp309 = $tmp308->methods[0];
panda$core$Int64 $tmp311 = $tmp309(((panda$collections$Key*) $tmp307));
return $tmp311;

}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* param0) {

// line 320
panda$core$String** $tmp312 = &param0->path;
panda$core$String* $tmp313 = *$tmp312;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
return $tmp313;

}
void panda$io$File$cleanup(panda$io$File* param0) {

// line 13
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$core$String** $tmp314 = &param0->path;
panda$core$String* $tmp315 = *$tmp314;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
return;

}

