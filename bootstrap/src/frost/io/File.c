#include "frost/io/File.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Maybe.h"
#include "frost/core/Error.h"
#include "frost/core/Int64.h"
#include "frost/io/InputStream.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/core/RegularExpression.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/io/OutputStream.h"

__attribute__((weak)) frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim(frost$io$File* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(p0, ((frost$io$File*) p1));

    return result;
}
__attribute__((weak)) frost$core$Int frost$io$File$get_hash$R$frost$core$Int$shim(frost$io$File* p0) {
    frost$core$Int result = frost$io$File$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$io$File$get_asString$R$frost$core$String$shim(frost$io$File* p0) {
    frost$core$String* result = frost$io$File$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$io$File$cleanup$shim(frost$io$File* p0) {
    frost$io$File$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$io$File$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$io$File$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$io$File$_frost$core$Equatable, { frost$io$File$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$io$File$class_type frost$io$File$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$io$File$_frost$collections$Key, { frost$io$File$get_asString$R$frost$core$String$shim, frost$io$File$cleanup$shim, frost$io$File$resolve$frost$core$String$R$frost$io$File, frost$io$File$lines$R$frost$core$Maybe$LTfrost$collections$Iterator$LTfrost$core$String$GT$GT, frost$io$File$get_isAbsolute$R$frost$core$Bit, frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT, frost$io$File$get_parent$R$frost$io$File$Q, frost$io$File$get_name$R$frost$core$String, frost$io$File$get_simpleName$R$frost$core$String, frost$io$File$withExtension$frost$core$String$R$frost$io$File, frost$io$File$exists$R$frost$core$Bit, frost$io$File$isDirectory$R$frost$core$Bit, frost$io$File$list$R$frost$core$Maybe$LTfrost$collections$ListView$LTfrost$io$File$GT$GT, frost$io$File$createDirectory$R$frost$core$Error$Q, frost$io$File$createDirectories$R$frost$core$Error$Q, frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT, frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT, frost$io$File$openForAppend$R$frost$core$Maybe$LTfrost$io$OutputStream$GT, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT, frost$io$File$write$frost$core$String$R$frost$core$Error$Q, frost$io$File$rename$frost$io$File$R$frost$core$Error$Q, frost$io$File$delete$R$frost$core$Error$Q, frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$io$File$get_hash$R$frost$core$Int$shim} };

typedef frost$collections$Iterator* (*$fn40)(frost$io$InputStream*);
typedef frost$collections$Iterator* (*$fn70)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn74)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn107)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn136)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn169)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn187)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn223)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn436)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn456)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn470)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn485)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, -334114093039521505, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2f\x2b", 3, -5674958730652345163, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2e\x2e", 3, -1238292982284524614, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };

void frost$io$File$init$frost$core$String(frost$io$File* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->path;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->path;
*$tmp4 = param1;
return;

}
frost$io$File* frost$io$File$resolve$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:58
frost$core$Bit $tmp5 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s6);
bool $tmp7 = $tmp5.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:59
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp8 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp8, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
return $tmp8;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:61
frost$core$String** $tmp9 = &param0->path;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Bit $tmp11 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp10, &$s12);
bool $tmp13 = $tmp11.value;
if ($tmp13) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:62
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:64
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:75
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:76
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp24 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp25 = (frost$core$Int64) {0u};
frost$core$Maybe* $tmp26 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp27 = &$tmp26->$rawValue;
frost$core$Int64 $tmp28 = *$tmp27;
int64_t $tmp29 = $tmp28.value;
bool $tmp30 = $tmp29 == 0u;
if ($tmp30) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp31 = (frost$core$Error**) ($tmp26->$data + 0);
frost$core$Error* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:79
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp33 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp34 = (frost$core$Int64) {1u};
frost$core$Error* $tmp35 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp33, $tmp34, $tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Error* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp33;
block3:;
frost$core$Object** $tmp37 = (frost$core$Object**) ($tmp26->$data + 0);
frost$core$Object* $tmp38 = *$tmp37;
$fn40 $tmp39 = ($fn40) ((frost$io$InputStream*) $tmp38)->$class->vtable[18];
frost$collections$Iterator* $tmp41 = $tmp39(((frost$io$InputStream*) $tmp38));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp24, $tmp25, ((frost$core$Object*) $tmp41));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Error* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp24;
block2:;
frost$core$Error* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Bit frost$io$File$get_isAbsolute$R$frost$core$Bit(frost$io$File* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:84
frost$core$String** $tmp44 = &param0->path;
frost$core$String* $tmp45 = *$tmp44;
frost$core$Bit $tmp46 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp45, &$s47);
return $tmp46;

}
frost$core$String* frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(frost$core$String* param0) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
frost$collections$Array* local2 = NULL;
frost$core$Int local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:99
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$String* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:101
frost$core$String* $tmp49 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp50 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp50, &$s51);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from File.frost:101:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1120
frost$core$Bit $tmp52 = (frost$core$Bit) {true};
frost$core$String* $tmp53 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp49, $tmp50, &$s54, $tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$String* $tmp55 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local0) = $tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:102
frost$core$String* $tmp56 = *(&local0);
frost$core$Bit $tmp57 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp56, &$s58);
bool $tmp59 = $tmp57.value;
if ($tmp59) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:103
frost$core$String* $tmp60 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = ((frost$core$String*) NULL);
return $tmp60;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:106
goto block4;
block4:;
frost$core$String* $tmp62 = *(&local0);
frost$core$Bit $tmp63 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp62, &$s64);
bool $tmp65 = $tmp63.value;
if ($tmp65) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:107
frost$core$String* $tmp66 = *(&local0);
frost$core$String* $tmp67 = *(&local0);
// begin inline call to function frost.core.String.get_length():frost.core.Int from File.frost:107:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp68 = ((frost$collections$Iterable*) $tmp67)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$collections$Iterator* $tmp71 = $tmp69(((frost$collections$Iterable*) $tmp67));
ITable* $tmp72 = $tmp71->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[2];
frost$core$Int $tmp75 = $tmp73($tmp71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Int $tmp76 = (frost$core$Int) {1u};
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77 - $tmp78;
frost$core$Int $tmp80 = (frost$core$Int) {$tmp79};
frost$core$Bit $tmp81 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp82 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { .nonnull = false }), ((frost$core$Int$nullable) { $tmp80, true }), $tmp81);
frost$core$String* $tmp83 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp66, $tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:109
frost$core$String* $tmp85 = *(&local0);
frost$core$Bit $tmp86 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp85, &$s87);
*(&local1) = $tmp86;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:110
frost$core$Bit $tmp88 = *(&local1);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:111
frost$core$String* $tmp90 = *(&local0);
frost$core$Int $tmp91 = (frost$core$Int) {1u};
frost$core$Bit $tmp92 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp93 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp91, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp92);
frost$core$String* $tmp94 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp90, $tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$String* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:114
frost$core$String* $tmp96 = *(&local0);
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from File.frost:114:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1378
frost$core$Int64 $tmp97 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp98 = $tmp97.value;
frost$core$Int $tmp99 = (frost$core$Int) {$tmp98};
frost$collections$Array* $tmp100 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp96, &$s101, $tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$collections$Array* $tmp102 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local2) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:115
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:116
frost$core$Int $tmp103 = (frost$core$Int) {1u};
frost$collections$Array* $tmp104 = *(&local2);
ITable* $tmp105 = ((frost$collections$CollectionView*) $tmp104)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$core$Int $tmp108 = $tmp106(((frost$collections$CollectionView*) $tmp104));
frost$core$Bit $tmp109 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp110 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp103, $tmp108, $tmp109);
frost$core$Int $tmp111 = $tmp110.min;
*(&local3) = $tmp111;
frost$core$Int $tmp112 = $tmp110.max;
frost$core$Bit $tmp113 = $tmp110.inclusive;
bool $tmp114 = $tmp113.value;
frost$core$Int $tmp115 = (frost$core$Int) {1u};
if ($tmp114) goto block17; else goto block18;
block17:;
int64_t $tmp116 = $tmp111.value;
int64_t $tmp117 = $tmp112.value;
bool $tmp118 = $tmp116 <= $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block14; else goto block15;
block18:;
int64_t $tmp121 = $tmp111.value;
int64_t $tmp122 = $tmp112.value;
bool $tmp123 = $tmp121 < $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:117
frost$collections$Array* $tmp126 = *(&local2);
frost$core$Int $tmp127 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from File.frost:117:30
frost$core$Int $tmp128 = (frost$core$Int) {0u};
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 >= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block25; else goto block24;
block25:;
ITable* $tmp134 = ((frost$collections$CollectionView*) $tmp126)->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[0];
frost$core$Int $tmp137 = $tmp135(((frost$collections$CollectionView*) $tmp126));
int64_t $tmp138 = $tmp127.value;
int64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 < $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block23; else goto block24;
block24:;
frost$core$Int $tmp143 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s144, $tmp143, &$s145);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp146 = &$tmp126->data;
frost$core$Object** $tmp147 = *$tmp146;
frost$core$Int64 $tmp148 = frost$core$Int64$init$frost$core$Int($tmp127);
int64_t $tmp149 = $tmp148.value;
frost$core$Object* $tmp150 = $tmp147[$tmp149];
frost$core$Frost$ref$frost$core$Object$Q($tmp150);
frost$core$Bit $tmp151 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp150), &$s152);
bool $tmp153 = $tmp151.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp150);
if ($tmp153) goto block21; else goto block20;
block21:;
frost$collections$Array* $tmp154 = *(&local2);
frost$core$Int $tmp155 = *(&local3);
frost$core$Int $tmp156 = (frost$core$Int) {1u};
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 - $tmp158;
frost$core$Int $tmp160 = (frost$core$Int) {$tmp159};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from File.frost:117:53
frost$core$Int $tmp161 = (frost$core$Int) {0u};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 >= $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block29; else goto block28;
block29:;
ITable* $tmp167 = ((frost$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[0];
frost$core$Int $tmp170 = $tmp168(((frost$collections$CollectionView*) $tmp154));
int64_t $tmp171 = $tmp160.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 < $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block27; else goto block28;
block28:;
frost$core$Int $tmp176 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s177, $tmp176, &$s178);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp179 = &$tmp154->data;
frost$core$Object** $tmp180 = *$tmp179;
frost$core$Int64 $tmp181 = frost$core$Int64$init$frost$core$Int($tmp160);
int64_t $tmp182 = $tmp181.value;
frost$core$Object* $tmp183 = $tmp180[$tmp182];
frost$core$Frost$ref$frost$core$Object$Q($tmp183);
ITable* $tmp185 = ((frost$core$Equatable*) ((frost$core$String*) $tmp183))->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[1];
frost$core$Bit $tmp188 = $tmp186(((frost$core$Equatable*) ((frost$core$String*) $tmp183)), ((frost$core$Equatable*) &$s184));
bool $tmp189 = $tmp188.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp183);
if ($tmp189) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:118
frost$collections$Array* $tmp190 = *(&local2);
frost$core$Int $tmp191 = *(&local3);
frost$core$Object* $tmp192 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp190, $tmp191);
frost$core$Frost$unref$frost$core$Object$Q($tmp192);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:119
frost$collections$Array* $tmp193 = *(&local2);
frost$core$Int $tmp194 = *(&local3);
frost$core$Int $tmp195 = (frost$core$Int) {1u};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 - $tmp197;
frost$core$Int $tmp199 = (frost$core$Int) {$tmp198};
frost$core$Object* $tmp200 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp193, $tmp199);
frost$core$Frost$unref$frost$core$Object$Q($tmp200);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:120
goto block12;
block20:;
frost$core$Int $tmp201 = *(&local3);
int64_t $tmp202 = $tmp112.value;
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202 - $tmp203;
frost$core$Int $tmp205 = (frost$core$Int) {$tmp204};
if ($tmp114) goto block31; else goto block32;
block31:;
int64_t $tmp206 = $tmp205.value;
int64_t $tmp207 = $tmp115.value;
bool $tmp208 = $tmp206 >= $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block30; else goto block15;
block32:;
int64_t $tmp211 = $tmp205.value;
int64_t $tmp212 = $tmp115.value;
bool $tmp213 = $tmp211 > $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block30; else goto block15;
block30:;
int64_t $tmp216 = $tmp201.value;
int64_t $tmp217 = $tmp115.value;
int64_t $tmp218 = $tmp216 + $tmp217;
frost$core$Int $tmp219 = (frost$core$Int) {$tmp218};
*(&local3) = $tmp219;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:123
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:125
frost$collections$Array* $tmp220 = *(&local2);
ITable* $tmp221 = ((frost$collections$CollectionView*) $tmp220)->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[2];
frost$core$String* $tmp224 = $tmp222(((frost$collections$CollectionView*) $tmp220), &$s225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$String* $tmp226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local0) = $tmp224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:126
frost$core$Bit $tmp227 = *(&local1);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:127
frost$core$String* $tmp229 = *(&local0);
frost$core$String* $tmp230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s231, $tmp229);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$String* $tmp232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:129
frost$core$Bit $tmp233 = *(&local1);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block37; else goto block36;
block37:;
frost$core$String* $tmp235 = *(&local0);
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from File.frost:129:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:978
frost$core$String$Index $tmp236 = frost$core$String$get_start$R$frost$core$String$Index($tmp235);
frost$core$String$Index$nullable $tmp237 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp235, &$s238, $tmp236);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp237.nonnull};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$Array* $tmp241 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp242 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:133
frost$core$String* $tmp243 = *(&local0);
frost$core$Bit $tmp244 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp243, &$s245);
bool $tmp246 = $tmp244.value;
if ($tmp246) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s247));
frost$core$String* $tmp248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local0) = &$s249;
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:136
frost$core$String* $tmp250 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$collections$Array* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local0) = ((frost$core$String*) NULL);
return $tmp250;

}
frost$io$File* frost$io$File$get_parent$R$frost$io$File$Q(frost$io$File* param0) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:140
frost$io$File* $tmp253 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s254);
frost$core$String** $tmp255 = &$tmp253->path;
frost$core$String* $tmp256 = *$tmp255;
frost$core$String* $tmp257 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp256);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$String* $tmp258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local0) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:141
frost$core$String* $tmp259 = *(&local0);
frost$core$Bit $tmp260 = (frost$core$Bit) {$tmp259 == NULL};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$io$File*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp263 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp264 = *(&local0);
frost$io$File$init$frost$core$String($tmp263, $tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$String* $tmp265 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local0) = ((frost$core$String*) NULL);
return $tmp263;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* param0) {

frost$core$String$Index$nullable local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp266 = &param0->path;
frost$core$String* $tmp267 = *$tmp266;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp268 = &$tmp267->_length;
frost$core$Int $tmp269 = *$tmp268;
frost$core$String$Index $tmp270 = frost$core$String$Index$init$frost$core$Int($tmp269);
frost$core$String$Index$nullable $tmp271 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp267, &$s272, $tmp270);
*(&local0) = $tmp271;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp273 = *(&local0);
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273.nonnull};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp276 = &param0->path;
frost$core$String* $tmp277 = *$tmp276;
frost$core$String** $tmp278 = &param0->path;
frost$core$String* $tmp279 = *$tmp278;
frost$core$String$Index$nullable $tmp280 = *(&local0);
frost$core$String$Index $tmp281 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp279, ((frost$core$String$Index) $tmp280.value));
frost$core$Bit $tmp282 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp283 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp281, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp282);
frost$core$String* $tmp284 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp277, $tmp283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
return $tmp284;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp285 = &param0->path;
frost$core$String* $tmp286 = *$tmp285;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
return $tmp286;
block4:;
goto block6;
block6:;

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
frost$core$String* local2 = NULL;
frost$core$String$Index$nullable local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp287 = &param0->path;
frost$core$String* $tmp288 = *$tmp287;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
frost$core$String$Index $tmp289 = frost$core$String$get_end$R$frost$core$String$Index($tmp288);
frost$core$String$Index$nullable $tmp290 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp288, &$s291, $tmp289);
*(&local1) = $tmp290;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp292 = *(&local1);
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292.nonnull};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp295 = &param0->path;
frost$core$String* $tmp296 = *$tmp295;
frost$core$String** $tmp297 = &param0->path;
frost$core$String* $tmp298 = *$tmp297;
frost$core$String$Index$nullable $tmp299 = *(&local1);
frost$core$String$Index $tmp300 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp298, ((frost$core$String$Index) $tmp299.value));
frost$core$Bit $tmp301 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp302 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp300, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp301);
frost$core$String* $tmp303 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp296, $tmp302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = $tmp303;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp304 = &param0->path;
frost$core$String* $tmp305 = *$tmp304;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = $tmp305;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block1;
block4:;
goto block1;
block1:;
frost$core$String* $tmp306 = *(&local0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$String* $tmp307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local2) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:159
frost$core$String* $tmp308 = *(&local2);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp309 = &$tmp308->_length;
frost$core$Int $tmp310 = *$tmp309;
frost$core$String$Index $tmp311 = frost$core$String$Index$init$frost$core$Int($tmp310);
frost$core$String$Index$nullable $tmp312 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp308, &$s313, $tmp311);
*(&local3) = $tmp312;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp314 = *(&local3);
frost$core$Bit $tmp315 = (frost$core$Bit) {!$tmp314.nonnull};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:161
frost$core$String* $tmp317 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$String* $tmp318 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp319 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local0) = ((frost$core$String*) NULL);
return $tmp317;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:163
frost$core$String* $tmp320 = *(&local2);
frost$core$String$Index$nullable $tmp321 = *(&local3);
frost$core$Bit $tmp322 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp323 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp321, $tmp322);
frost$core$String* $tmp324 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp320, $tmp323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$String* $tmp325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$core$String*) NULL);
return $tmp324;

}
frost$io$File* frost$io$File$withExtension$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

frost$io$File* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String$Index$nullable local4;
frost$core$String* local5 = NULL;
frost$core$String$Index$nullable local6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:183
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:183:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:140
frost$io$File* $tmp327 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s328);
frost$core$String** $tmp329 = &$tmp327->path;
frost$core$String* $tmp330 = *$tmp329;
frost$core$String* $tmp331 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp330);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$String* $tmp332 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local1) = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:141
frost$core$String* $tmp333 = *(&local1);
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333 == NULL};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local1) = ((frost$core$String*) NULL);
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp337 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp338 = *(&local1);
frost$io$File$init$frost$core$String($tmp337, $tmp338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$String* $tmp339 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local1) = ((frost$core$String*) NULL);
*(&local0) = $tmp337;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
goto block1;
block1:;
frost$io$File* $tmp340 = *(&local0);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:183:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp341 = &param0->path;
frost$core$String* $tmp342 = *$tmp341;
frost$core$String$Index$nullable $tmp343 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp342, &$s344);
*(&local4) = $tmp343;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp345 = *(&local4);
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345.nonnull};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp348 = &param0->path;
frost$core$String* $tmp349 = *$tmp348;
frost$core$String** $tmp350 = &param0->path;
frost$core$String* $tmp351 = *$tmp350;
frost$core$String$Index$nullable $tmp352 = *(&local4);
frost$core$String$Index $tmp353 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp351, ((frost$core$String$Index) $tmp352.value));
frost$core$Bit $tmp354 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp355 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp353, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp354);
frost$core$String* $tmp356 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp349, $tmp355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local3) = $tmp356;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
goto block5;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp357 = &param0->path;
frost$core$String* $tmp358 = *$tmp357;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local3) = $tmp358;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
goto block5;
block7:;
goto block5;
block5:;
frost$core$String* $tmp359 = *(&local3);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$String* $tmp360 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local5) = $tmp359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:159
frost$core$String* $tmp361 = *(&local5);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
frost$core$String$Index $tmp362 = frost$core$String$get_end$R$frost$core$String$Index($tmp361);
frost$core$String$Index$nullable $tmp363 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp361, &$s364, $tmp362);
*(&local6) = $tmp363;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp365 = *(&local6);
frost$core$Bit $tmp366 = (frost$core$Bit) {!$tmp365.nonnull};
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:161
frost$core$String* $tmp368 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$String* $tmp369 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp370 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp368;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
goto block4;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:163
frost$core$String* $tmp371 = *(&local5);
frost$core$String$Index$nullable $tmp372 = *(&local6);
frost$core$Bit $tmp373 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp374 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp372, $tmp373);
frost$core$String* $tmp375 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp371, $tmp374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$String* $tmp376 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp377 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp375;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
goto block4;
block4:;
frost$core$String* $tmp378 = *(&local2);
frost$core$String* $tmp379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp378, param1);
frost$io$File* $tmp380 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp340, $tmp379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$String* $tmp381 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$io$File* $tmp382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local0) = ((frost$io$File*) NULL);
return $tmp380;

}
frost$core$Error* frost$io$File$createDirectories$R$frost$core$Error$Q(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:224
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:225
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:225:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:140
frost$io$File* $tmp383 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s384);
frost$core$String** $tmp385 = &$tmp383->path;
frost$core$String* $tmp386 = *$tmp385;
frost$core$String* $tmp387 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp386);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$String* $tmp388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local2) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:141
frost$core$String* $tmp389 = *(&local2);
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389 == NULL};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp392 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local2) = ((frost$core$String*) NULL);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp393 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp394 = *(&local2);
frost$io$File$init$frost$core$String($tmp393, $tmp394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$String* $tmp395 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local2) = ((frost$core$String*) NULL);
*(&local1) = $tmp393;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
goto block3;
block3:;
frost$io$File* $tmp396 = *(&local1);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$io$File* $tmp397 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local3) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:226
frost$io$File* $tmp398 = *(&local3);
frost$core$Bit $tmp399 = (frost$core$Bit) {true};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block8; else goto block7;
block8:;
frost$io$File* $tmp401 = *(&local3);
frost$core$Bit $tmp402;
frost$io$File$exists$R$frost$core$Bit(&$tmp402, $tmp401);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from File.frost:226:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp403 = $tmp402.value;
bool $tmp404 = !$tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:227
frost$io$File* $tmp407 = *(&local3);
frost$core$Error* $tmp408 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp407);
if ($tmp408 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local0) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$io$File* $tmp409 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local3) = ((frost$io$File*) NULL);
frost$io$File* $tmp410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:229
frost$core$Error* $tmp411 = frost$io$File$createDirectory$R$frost$core$Error$Q(param0);
if ($tmp411 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local0) = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$io$File* $tmp412 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local3) = ((frost$io$File*) NULL);
frost$io$File* $tmp413 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:230
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$io$File* $tmp414 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local3) = ((frost$io$File*) NULL);
frost$io$File* $tmp415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Error* $tmp416 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:233
frost$core$Error* $tmp417 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Error* $tmp418 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp417;
block2:;
frost$core$Error* $tmp419 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:271
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:272
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp420 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp421 = (frost$core$Int64) {0u};
frost$core$Maybe* $tmp422 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp423 = &$tmp422->$rawValue;
frost$core$Int64 $tmp424 = *$tmp423;
int64_t $tmp425 = $tmp424.value;
bool $tmp426 = $tmp425 == 0u;
if ($tmp426) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp427 = (frost$core$Error**) ($tmp422->$data + 0);
frost$core$Error* $tmp428 = *$tmp427;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local0) = $tmp428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:275
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp429 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp430 = (frost$core$Int64) {1u};
frost$core$Error* $tmp431 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp429, $tmp430, $tmp431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Error* $tmp432 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp429;
block3:;
frost$core$Object** $tmp433 = (frost$core$Object**) ($tmp422->$data + 0);
frost$core$Object* $tmp434 = *$tmp433;
$fn436 $tmp435 = ($fn436) ((frost$io$InputStream*) $tmp434)->$class->vtable[14];
frost$core$String* $tmp437 = $tmp435(((frost$io$InputStream*) $tmp434));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp420, $tmp421, ((frost$core$Object*) $tmp437));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Error* $tmp438 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp420;
block2:;
frost$core$Error* $tmp439 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:287
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:288
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp440 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp441 = (frost$core$Int64) {0u};
frost$core$Maybe* $tmp442 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int64* $tmp443 = &$tmp442->$rawValue;
frost$core$Int64 $tmp444 = *$tmp443;
int64_t $tmp445 = $tmp444.value;
bool $tmp446 = $tmp445 == 0u;
if ($tmp446) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp447 = (frost$core$Error**) ($tmp442->$data + 0);
frost$core$Error* $tmp448 = *$tmp447;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local0) = $tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:291
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp449 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp450 = (frost$core$Int64) {1u};
frost$core$Error* $tmp451 = *(&local0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp449, $tmp450, $tmp451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Error* $tmp452 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp449;
block3:;
frost$core$Object** $tmp453 = (frost$core$Object**) ($tmp442->$data + 0);
frost$core$Object* $tmp454 = *$tmp453;
$fn456 $tmp455 = ($fn456) ((frost$io$InputStream*) $tmp454)->$class->vtable[15];
frost$collections$Array* $tmp457 = $tmp455(((frost$io$InputStream*) $tmp454));
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp440, $tmp441, ((frost$core$Object*) $tmp457));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Error* $tmp458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp440;
block2:;
frost$core$Error* $tmp459 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Error* frost$io$File$write$frost$core$String$R$frost$core$Error$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:302
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:303
frost$core$Maybe* $tmp460 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param0);
frost$core$Int64* $tmp461 = &$tmp460->$rawValue;
frost$core$Int64 $tmp462 = *$tmp461;
int64_t $tmp463 = $tmp462.value;
bool $tmp464 = $tmp463 == 0u;
if ($tmp464) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp465 = (frost$core$Error**) ($tmp460->$data + 0);
frost$core$Error* $tmp466 = *$tmp465;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local0) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
goto block1;
block3:;
frost$core$Object** $tmp467 = (frost$core$Object**) ($tmp460->$data + 0);
frost$core$Object* $tmp468 = *$tmp467;
$fn470 $tmp469 = ($fn470) ((frost$io$OutputStream*) $tmp468)->$class->vtable[17];
frost$core$Error* $tmp471 = $tmp469(((frost$io$OutputStream*) $tmp468), param1);
if ($tmp471 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local0) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:304
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp472 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:307
frost$core$Error* $tmp473 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Error* $tmp474 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp473;
block2:;
frost$core$Error* $tmp475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local0) = ((frost$core$Error*) NULL);
goto block7;
block7:;

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* param0, frost$io$File* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:337
frost$core$String** $tmp476 = &param0->path;
frost$core$String* $tmp477 = *$tmp476;
frost$core$String** $tmp478 = &param1->path;
frost$core$String* $tmp479 = *$tmp478;
frost$core$Bit $tmp480 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, $tmp479);
return $tmp480;

}
frost$core$Int frost$io$File$get_hash$R$frost$core$Int(frost$io$File* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:342
frost$core$String** $tmp481 = &param0->path;
frost$core$String* $tmp482 = *$tmp481;
ITable* $tmp483 = ((frost$collections$Key*) $tmp482)->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$core$Int $tmp486 = $tmp484(((frost$collections$Key*) $tmp482));
return $tmp486;

}
frost$core$String* frost$io$File$get_asString$R$frost$core$String(frost$io$File* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:350
frost$core$String** $tmp487 = &param0->path;
frost$core$String* $tmp488 = *$tmp487;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
return $tmp488;

}
void frost$io$File$cleanup(frost$io$File* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:13
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp489 = &param0->path;
frost$core$String* $tmp490 = *$tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
return;

}

