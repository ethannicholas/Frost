#include "frost/io/File.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Maybe.h"
#include "frost/core/Error.h"
#include "frost/io/InputStream.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/Int64.h"
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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$io$File$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$io$File$_frost$core$Equatable, { frost$io$File$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$io$File$class_type frost$io$File$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$io$File$_frost$collections$HashKey, { frost$io$File$get_asString$R$frost$core$String$shim, frost$io$File$cleanup$shim, frost$io$File$resolve$frost$core$String$R$frost$io$File, frost$io$File$lines$R$frost$core$Maybe$LTfrost$collections$Iterator$LTfrost$core$String$GT$GT, frost$io$File$get_isAbsolute$R$frost$core$Bit, frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT, frost$io$File$get_parent$R$frost$io$File$Q, frost$io$File$get_name$R$frost$core$String, frost$io$File$get_simpleName$R$frost$core$String, frost$io$File$withExtension$frost$core$String$R$frost$io$File, frost$io$File$exists$R$frost$core$Bit, frost$io$File$isDirectory$R$frost$core$Bit, frost$io$File$list$R$frost$core$Maybe$LTfrost$collections$ListView$LTfrost$io$File$GT$GT, frost$io$File$createDirectory$R$frost$core$Error$Q, frost$io$File$createDirectories$R$frost$core$Error$Q, frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT, frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT, frost$io$File$openForAppend$R$frost$core$Maybe$LTfrost$io$OutputStream$GT, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT, frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT, frost$io$File$write$frost$core$String$R$frost$core$Error$Q, frost$io$File$rename$frost$io$File$R$frost$core$Error$Q, frost$io$File$delete$R$frost$core$Error$Q, frost$io$File$$EQ$frost$io$File$R$frost$core$Bit$shim, frost$io$File$get_hash$R$frost$core$Int$shim} };

typedef frost$collections$Iterator* (*$fn5)(frost$io$InputStream*);
typedef frost$collections$Iterator* (*$fn6)(frost$io$InputStream*);
typedef frost$collections$Iterator* (*$fn8)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn13)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn14)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn68)(frost$io$InputStream*);
typedef frost$core$String* (*$fn69)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn70)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn71)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn72)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn73)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn76)(frost$collections$HashKey*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, -334114093039521505, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2e\x2e", 3, -1238292982284524614, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };

void frost$io$File$init$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:44
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->path;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->path;
*_7 = param1;
return;

}
frost$io$File* frost$io$File$resolve$frost$core$String$R$frost$io$File(void* rawSelf, frost$core$String* param1) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Bit _1;
bool _2;
frost$io$File* _5;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$String** _13;
frost$core$String* _14;
frost$core$Bit _15;
bool _16;
frost$io$File* _19;
frost$core$String** _20;
frost$core$String* _21;
frost$core$String* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$io$File* _32;
frost$core$String** _33;
frost$core$String* _34;
frost$core$String* _35;
frost$core$String* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:58
_1 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s2);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:59
_5 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_5, param1);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return _5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:61
_13 = &param0->path;
_14 = *_13;
_15 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_14, &$s3);
_16 = _15.value;
if (_16) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:62
_19 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_20 = &param0->path;
_21 = *_20;
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_21, param1);
frost$io$File$init$frost$core$String(_19, _22);
_24 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_28);
return _19;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:64
_32 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_33 = &param0->path;
_34 = *_33;
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, &$s4);
_36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_35, param1);
frost$io$File$init$frost$core$String(_32, _36);
_38 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_44);
return _32;

}
frost$core$Maybe* frost$io$File$lines$R$frost$core$Maybe$LTfrost$collections$Iterator$LTfrost$core$String$GT$GT(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Maybe* _3;
frost$core$Maybe* _4;
frost$core$Int _5;
frost$core$Maybe* _6;
frost$core$Maybe* _7;
frost$core$Int* _8;
frost$core$Int _9;
int64_t _10;
bool _11;
frost$core$Error** _13;
frost$core$Error* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Maybe* _44;
frost$core$Maybe* _45;
frost$core$Int _46;
frost$core$Error* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Error* _53;
frost$core$Object* _54;
frost$core$Object** _23;
frost$core$Object* _24;
frost$io$InputStream* _25;
$fn5 _26;
frost$collections$Iterator* _27;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Error* _38;
frost$core$Object* _39;
frost$core$Error* _58;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:74
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:75
_3 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_4 = _3;
_5 = (frost$core$Int) {0u};
_6 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
_7 = _6;
_8 = &_7->$rawValue;
_9 = *_8;
_10 = _9.value;
_11 = _10 == 0u;
if (_11) goto block3; else goto block4;
block4:;
_13 = &_6->$data.$ERROR.field0;
_14 = *_13;
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
*(&local0) = _14;
_18 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:78
_44 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_45 = _44;
_46 = (frost$core$Int) {1u};
_47 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_45, _46, _47);
_49 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = *(&local0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = ((frost$core$Error*) NULL);
return _44;
block3:;
_23 = &_6->$data.$SUCCESS.field0;
_24 = *_23;
_25 = ((frost$io$InputStream*) _24);
_26 = ($fn6) _25->$class->vtable[18];
_27 = _26(_25);
_28 = ((frost$core$Object*) _27);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_4, _5, _28);
_30 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Error*) NULL);
return _3;
block2:;
_58 = *(&local0);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Bit frost$io$File$get_isAbsolute$R$frost$core$Bit(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$Bit _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:83
_1 = &param0->path;
_2 = *_1;
_3 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_2, &$s7);
return _3;

}
frost$core$String* frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(frost$core$String* param0) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
frost$collections$Array* local2 = NULL;
frost$core$Int local3;
frost$core$Object* _2;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String* _9;
frost$core$Bit _10;
bool _11;
frost$core$String* _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$String* _25;
frost$core$Bit _26;
bool _27;
frost$core$String* _30;
frost$core$String* _31;
frost$collections$Iterable* _34;
$fn8 _35;
frost$collections$Iterator* _36;
frost$collections$Iterator* _37;
frost$collections$Iterator* _38;
$fn9 _39;
frost$core$Int _40;
frost$core$Object* _41;
frost$core$Int _44;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$core$Int$nullable _49;
frost$core$Bit _50;
frost$core$Range$LTfrost$core$Int$Q$GT _51;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$String* _55;
frost$core$Object* _56;
frost$core$Object* _59;
frost$core$String* _63;
frost$core$Bit _64;
frost$core$Bit _67;
bool _68;
frost$core$String* _71;
frost$core$Int _72;
frost$core$Int$nullable _73;
frost$core$Bit _74;
frost$core$Range$LTfrost$core$Int$Q$GT _75;
frost$core$String* _76;
frost$core$Object* _77;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$Object* _83;
frost$core$String* _87;
frost$core$Int64 _90;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$collections$Array* _97;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Object* _104;
frost$collections$Array* _106;
frost$core$Object* _107;
frost$core$Object* _110;
frost$core$Int _115;
frost$collections$Array* _116;
frost$collections$CollectionView* _117;
$fn10 _118;
frost$core$Int _119;
frost$core$Bit _120;
frost$core$Range$LTfrost$core$Int$GT _121;
frost$core$Int _122;
frost$core$Int _124;
frost$core$Bit _125;
bool _126;
frost$core$Int _127;
int64_t _129;
int64_t _130;
bool _131;
frost$core$Bit _132;
bool _133;
int64_t _135;
int64_t _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$collections$Array* _142;
frost$collections$Array* _143;
frost$core$Int _144;
frost$core$Int _146;
int64_t _147;
int64_t _148;
bool _149;
frost$core$Bit _150;
bool _151;
frost$collections$CollectionView* _153;
$fn11 _154;
frost$core$Int _155;
int64_t _156;
int64_t _157;
bool _158;
frost$core$Bit _159;
bool _160;
frost$core$Int _162;
frost$core$Object*** _166;
frost$core$Object** _167;
frost$core$Int64 _168;
int64_t _169;
frost$core$Object* _170;
frost$core$Object* _171;
frost$core$String* _174;
frost$core$Bit _175;
bool _176;
frost$core$Object* _177;
frost$collections$Array* _180;
frost$collections$Array* _181;
frost$core$Int _182;
frost$core$Int _183;
int64_t _184;
int64_t _185;
int64_t _186;
frost$core$Int _187;
frost$core$Int _189;
int64_t _190;
int64_t _191;
bool _192;
frost$core$Bit _193;
bool _194;
frost$collections$CollectionView* _196;
$fn12 _197;
frost$core$Int _198;
int64_t _199;
int64_t _200;
bool _201;
frost$core$Bit _202;
bool _203;
frost$core$Int _205;
frost$core$Object*** _209;
frost$core$Object** _210;
frost$core$Int64 _211;
int64_t _212;
frost$core$Object* _213;
frost$core$Object* _214;
frost$core$String* _217;
frost$core$Equatable* _218;
frost$core$Equatable* _219;
frost$core$Equatable* _220;
$fn13 _221;
frost$core$Bit _222;
bool _223;
frost$core$Object* _224;
frost$collections$Array* _228;
frost$collections$Array* _229;
frost$core$Int _230;
frost$core$Object* _231;
frost$core$String* _232;
frost$core$Object* _233;
frost$collections$Array* _236;
frost$collections$Array* _237;
frost$core$Int _238;
frost$core$Int _239;
int64_t _240;
int64_t _241;
int64_t _242;
frost$core$Int _243;
frost$core$Object* _244;
frost$core$String* _245;
frost$core$Object* _246;
frost$core$Int _251;
int64_t _252;
int64_t _253;
int64_t _254;
frost$core$Int _255;
int64_t _257;
int64_t _258;
bool _259;
frost$core$Bit _260;
bool _261;
int64_t _263;
int64_t _264;
bool _265;
frost$core$Bit _266;
bool _267;
int64_t _269;
int64_t _270;
int64_t _271;
frost$core$Int _272;
frost$collections$Array* _278;
frost$collections$CollectionView* _279;
$fn14 _280;
frost$core$String* _281;
frost$core$Object* _282;
frost$core$String* _284;
frost$core$Object* _285;
frost$core$Object* _288;
frost$core$Bit _291;
bool _292;
frost$core$String* _295;
frost$core$String* _296;
frost$core$Object* _297;
frost$core$String* _299;
frost$core$Object* _300;
frost$core$Object* _303;
frost$core$Bit _307;
bool _308;
frost$core$String* _310;
frost$core$String$Index _315;
frost$core$String$Index$nullable _316;
bool _318;
frost$core$Bit _319;
bool _321;
frost$core$Object* _324;
frost$collections$Array* _326;
frost$core$Object* _327;
frost$core$String* _330;
frost$core$Object* _331;
frost$core$String* _336;
frost$core$Bit _337;
bool _338;
frost$core$Object* _341;
frost$core$String* _343;
frost$core$Object* _344;
frost$core$String* _349;
frost$core$String* _350;
frost$core$Object* _351;
frost$collections$Array* _353;
frost$core$Object* _354;
frost$core$String* _357;
frost$core$Object* _358;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:98
*(&local0) = ((frost$core$String*) NULL);
_2 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = *(&local0);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
*(&local0) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:101
_9 = *(&local0);
_10 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_9, &$s15);
_11 = _10.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:102
_14 = *(&local0);
_15 = _14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = ((frost$core$String*) NULL);
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:105
goto block3;
block3:;
_25 = *(&local0);
_26 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_25, &$s16);
_27 = _26.value;
if (_27) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:106
_30 = *(&local0);
_31 = *(&local0);
// begin inline call to function frost.core.String.get_length():frost.core.Int from File.frost:106:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_34 = ((frost$collections$Iterable*) _31);
ITable* $tmp17 = _34->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_35 = $tmp17->methods[0];
_36 = _35(_34);
_37 = _36;
_38 = _37;
ITable* $tmp18 = _38->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_39 = $tmp18->methods[2];
_40 = _39(_38);
_41 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_44 = (frost$core$Int) {1u};
_45 = _40.value;
_46 = _44.value;
_47 = _45 - _46;
_48 = (frost$core$Int) {_47};
_49 = ((frost$core$Int$nullable) { _48, true });
_50 = (frost$core$Bit) {false};
_51 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { .nonnull = false }), _49, _50);
_52 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(_30, _51);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = *(&local0);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local0) = _52;
_59 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_59);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:108
_63 = *(&local0);
_64 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_63, &$s19);
*(&local1) = _64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:109
_67 = *(&local1);
_68 = _67.value;
if (_68) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:110
_71 = *(&local0);
_72 = (frost$core$Int) {1u};
_73 = ((frost$core$Int$nullable) { _72, true });
_74 = (frost$core$Bit) {false};
_75 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_73, ((frost$core$Int$nullable) { .nonnull = false }), _74);
_76 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(_71, _75);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = *(&local0);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local0) = _76;
_83 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_83);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:113
_87 = *(&local0);
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from File.frost:113:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_90 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_93 = _90.value;
_94 = ((int64_t) _93);
_95 = (frost$core$Int) {_94};
_97 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_87, &$s20, _95);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local2) = ((frost$collections$Array*) NULL);
_104 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_106 = *(&local2);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local2) = _97;
_110 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:114
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:115
_115 = (frost$core$Int) {1u};
_116 = *(&local2);
_117 = ((frost$collections$CollectionView*) _116);
ITable* $tmp21 = _117->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_118 = $tmp21->methods[0];
_119 = _118(_117);
_120 = (frost$core$Bit) {false};
_121 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_115, _119, _120);
_122 = _121.min;
*(&local3) = _122;
_124 = _121.max;
_125 = _121.inclusive;
_126 = _125.value;
_127 = (frost$core$Int) {1u};
if (_126) goto block16; else goto block17;
block16:;
_129 = _122.value;
_130 = _124.value;
_131 = _129 <= _130;
_132 = (frost$core$Bit) {_131};
_133 = _132.value;
if (_133) goto block13; else goto block14;
block17:;
_135 = _122.value;
_136 = _124.value;
_137 = _135 < _136;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:116
_142 = *(&local2);
_143 = _142;
_144 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from File.frost:116:30
_146 = (frost$core$Int) {0u};
_147 = _144.value;
_148 = _146.value;
_149 = _147 >= _148;
_150 = (frost$core$Bit) {_149};
_151 = _150.value;
if (_151) goto block24; else goto block23;
block24:;
_153 = ((frost$collections$CollectionView*) _143);
ITable* $tmp22 = _153->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp22 = $tmp22->next;
}
_154 = $tmp22->methods[0];
_155 = _154(_153);
_156 = _144.value;
_157 = _155.value;
_158 = _156 < _157;
_159 = (frost$core$Bit) {_158};
_160 = _159.value;
if (_160) goto block22; else goto block23;
block23:;
_162 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, _162, &$s24);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_166 = &_143->data;
_167 = *_166;
_168 = frost$core$Int64$init$frost$core$Int(_144);
_169 = _168.value;
_170 = _167[_169];
_171 = _170;
frost$core$Frost$ref$frost$core$Object$Q(_171);
_174 = ((frost$core$String*) _170);
_175 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_174, &$s25);
_176 = _175.value;
_177 = _170;
frost$core$Frost$unref$frost$core$Object$Q(_177);
if (_176) goto block20; else goto block19;
block20:;
_180 = *(&local2);
_181 = _180;
_182 = *(&local3);
_183 = (frost$core$Int) {1u};
_184 = _182.value;
_185 = _183.value;
_186 = _184 - _185;
_187 = (frost$core$Int) {_186};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from File.frost:116:53
_189 = (frost$core$Int) {0u};
_190 = _187.value;
_191 = _189.value;
_192 = _190 >= _191;
_193 = (frost$core$Bit) {_192};
_194 = _193.value;
if (_194) goto block28; else goto block27;
block28:;
_196 = ((frost$collections$CollectionView*) _181);
ITable* $tmp26 = _196->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
_197 = $tmp26->methods[0];
_198 = _197(_196);
_199 = _187.value;
_200 = _198.value;
_201 = _199 < _200;
_202 = (frost$core$Bit) {_201};
_203 = _202.value;
if (_203) goto block26; else goto block27;
block27:;
_205 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _205, &$s28);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_209 = &_181->data;
_210 = *_209;
_211 = frost$core$Int64$init$frost$core$Int(_187);
_212 = _211.value;
_213 = _210[_212];
_214 = _213;
frost$core$Frost$ref$frost$core$Object$Q(_214);
_217 = ((frost$core$String*) _213);
_218 = ((frost$core$Equatable*) _217);
_219 = _218;
_220 = ((frost$core$Equatable*) &$s29);
ITable* $tmp30 = _219->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp30 = $tmp30->next;
}
_221 = $tmp30->methods[1];
_222 = _221(_219, _220);
_223 = _222.value;
_224 = _213;
frost$core$Frost$unref$frost$core$Object$Q(_224);
if (_223) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:117
_228 = *(&local2);
_229 = _228;
_230 = *(&local3);
_231 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_229, _230);
_232 = ((frost$core$String*) _231);
_233 = _231;
frost$core$Frost$unref$frost$core$Object$Q(_233);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:118
_236 = *(&local2);
_237 = _236;
_238 = *(&local3);
_239 = (frost$core$Int) {1u};
_240 = _238.value;
_241 = _239.value;
_242 = _240 - _241;
_243 = (frost$core$Int) {_242};
_244 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_237, _243);
_245 = ((frost$core$String*) _244);
_246 = _244;
frost$core$Frost$unref$frost$core$Object$Q(_246);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:119
goto block11;
block19:;
_251 = *(&local3);
_252 = _124.value;
_253 = _251.value;
_254 = _252 - _253;
_255 = (frost$core$Int) {_254};
if (_126) goto block30; else goto block31;
block30:;
_257 = _255.value;
_258 = _127.value;
_259 = _257 >= _258;
_260 = (frost$core$Bit) {_259};
_261 = _260.value;
if (_261) goto block29; else goto block14;
block31:;
_263 = _255.value;
_264 = _127.value;
_265 = _263 > _264;
_266 = (frost$core$Bit) {_265};
_267 = _266.value;
if (_267) goto block29; else goto block14;
block29:;
_269 = _251.value;
_270 = _127.value;
_271 = _269 + _270;
_272 = (frost$core$Int) {_271};
*(&local3) = _272;
goto block13;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:122
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:124
_278 = *(&local2);
_279 = ((frost$collections$CollectionView*) _278);
ITable* $tmp31 = _279->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
_280 = $tmp31->methods[3];
_281 = _280(_279, &$s32);
_282 = ((frost$core$Object*) _281);
frost$core$Frost$ref$frost$core$Object$Q(_282);
_284 = *(&local0);
_285 = ((frost$core$Object*) _284);
frost$core$Frost$unref$frost$core$Object$Q(_285);
*(&local0) = _281;
_288 = ((frost$core$Object*) _281);
frost$core$Frost$unref$frost$core$Object$Q(_288);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:125
_291 = *(&local1);
_292 = _291.value;
if (_292) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:126
_295 = *(&local0);
_296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s33, _295);
_297 = ((frost$core$Object*) _296);
frost$core$Frost$ref$frost$core$Object$Q(_297);
_299 = *(&local0);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_300);
*(&local0) = _296;
_303 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_303);
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:128
_307 = *(&local1);
_308 = _307.value;
if (_308) goto block36; else goto block35;
block36:;
_310 = *(&local0);
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from File.frost:128:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
_315 = frost$core$String$get_start$R$frost$core$String$Index(_310);
_316 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_310, &$s34, _315);
_318 = _316.nonnull;
_319 = (frost$core$Bit) {_318};
_321 = _319.value;
if (_321) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:130
_324 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_324);
_326 = *(&local2);
_327 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_327);
*(&local2) = ((frost$collections$Array*) NULL);
_330 = *(&local0);
_331 = ((frost$core$Object*) _330);
frost$core$Frost$unref$frost$core$Object$Q(_331);
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:132
_336 = *(&local0);
_337 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_336, &$s35);
_338 = _337.value;
if (_338) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:133
_341 = ((frost$core$Object*) &$s36);
frost$core$Frost$ref$frost$core$Object$Q(_341);
_343 = *(&local0);
_344 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_344);
*(&local0) = &$s37;
goto block40;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:135
_349 = *(&local0);
_350 = _349;
_351 = ((frost$core$Object*) _350);
frost$core$Frost$ref$frost$core$Object$Q(_351);
_353 = *(&local2);
_354 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_354);
*(&local2) = ((frost$collections$Array*) NULL);
_357 = *(&local0);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_358);
*(&local0) = ((frost$core$String*) NULL);
return _350;

}
frost$io$File* frost$io$File$get_parent$R$frost$io$File$Q(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$String* local0 = NULL;
frost$io$File* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$Object* _6;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$String* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Object* _23;
frost$core$String* _25;
frost$core$Object* _26;
frost$io$File* _31;
frost$core$String* _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$core$String* _40;
frost$io$File* _42;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$String* _47;
frost$core$Object* _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s38);
_2 = &_1->path;
_3 = *_2;
_4 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_3);
*(&local0) = ((frost$core$String*) NULL);
_6 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _4;
_12 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_17 = *(&local0);
_18 = _17 == NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_23 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = *(&local0);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local0) = ((frost$core$String*) NULL);
return ((frost$io$File*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_31 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_32 = *(&local0);
_33 = _32 != NULL;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block3; else goto block4;
block4:;
_37 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _37, &$s40);
abort(); // unreachable
block3:;
_40 = _32;
frost$io$File$init$frost$core$String(_31, _40);
_42 = _31;
_43 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = *(&local0);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local0) = ((frost$core$String*) NULL);
return _42;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$String$Index$nullable local0;
frost$core$String** _1;
frost$core$String* _2;
frost$core$Int* _7;
frost$core$Int _8;
frost$core$String$Index _9;
frost$core$String$Index$nullable _11;
frost$core$String$Index$nullable _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$String** _21;
frost$core$String* _22;
frost$core$String** _23;
frost$core$String* _24;
frost$core$String$Index$nullable _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$core$String$Index _33;
frost$core$String$Index _34;
frost$core$String$Index$nullable _35;
frost$core$Bit _36;
frost$core$Range$LTfrost$core$String$Index$Q$GT _37;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$String** _46;
frost$core$String* _47;
frost$core$Object* _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_1 = &param0->path;
_2 = *_1;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_7 = &_2->_length;
_8 = *_7;
_9 = frost$core$String$Index$init$frost$core$Int(_8);
_11 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_2, &$s41, _9);
*(&local0) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_15 = *(&local0);
_16 = _15.nonnull;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_21 = &param0->path;
_22 = *_21;
_23 = &param0->path;
_24 = *_23;
_25 = *(&local0);
_26 = _25.nonnull;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block6; else goto block7;
block7:;
_30 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _30, &$s43);
abort(); // unreachable
block6:;
_33 = ((frost$core$String$Index) _25.value);
_34 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_24, _33);
_35 = ((frost$core$String$Index$nullable) { _34, true });
_36 = (frost$core$Bit) {false};
_37 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_35, ((frost$core$String$Index$nullable) { .nonnull = false }), _36);
_38 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_22, _37);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_41);
return _38;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_46 = &param0->path;
_47 = *_46;
_48 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_48);
return _47;
block4:;
goto block8;
block8:;

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
frost$core$String* local2 = NULL;
frost$core$String$Index$nullable local3;
frost$core$String** _3;
frost$core$String* _4;
frost$core$String$Index _7;
frost$core$String$Index$nullable _8;
frost$core$String$Index$nullable _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$core$String** _18;
frost$core$String* _19;
frost$core$String** _20;
frost$core$String* _21;
frost$core$String$Index$nullable _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _27;
frost$core$String$Index _30;
frost$core$String$Index _31;
frost$core$String$Index$nullable _32;
frost$core$Bit _33;
frost$core$Range$LTfrost$core$String$Index$Q$GT _34;
frost$core$String* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _41;
frost$core$String** _46;
frost$core$String* _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$String* _55;
frost$core$Object* _57;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$Object* _63;
frost$core$String* _66;
frost$core$Int* _71;
frost$core$Int _72;
frost$core$String$Index _73;
frost$core$String$Index$nullable _75;
frost$core$String$Index$nullable _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$String* _88;
frost$core$Object* _89;
frost$core$String* _92;
frost$core$Object* _93;
frost$core$String* _98;
frost$core$String$Index$nullable _99;
frost$core$Bit _100;
frost$core$Range$LTfrost$core$String$Index$Q$GT _101;
frost$core$String* _102;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$String* _107;
frost$core$Object* _108;
frost$core$String* _111;
frost$core$Object* _112;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:157:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_3 = &param0->path;
_4 = *_3;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_7 = frost$core$String$get_end$R$frost$core$String$Index(_4);
_8 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_4, &$s44, _7);
*(&local1) = _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_12 = *(&local1);
_13 = _12.nonnull;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_18 = &param0->path;
_19 = *_18;
_20 = &param0->path;
_21 = *_20;
_22 = *(&local1);
_23 = _22.nonnull;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block6; else goto block7;
block7:;
_27 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _27, &$s46);
abort(); // unreachable
block6:;
_30 = ((frost$core$String$Index) _22.value);
_31 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_21, _30);
_32 = ((frost$core$String$Index$nullable) { _31, true });
_33 = (frost$core$Bit) {false};
_34 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_32, ((frost$core$String$Index$nullable) { .nonnull = false }), _33);
_35 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_19, _34);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_38);
*(&local0) = _35;
_41 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_41);
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_46 = &param0->path;
_47 = *_46;
_48 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_48);
*(&local0) = _47;
_51 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_51);
goto block1;
block4:;
goto block1;
block1:;
_55 = *(&local0);
*(&local2) = ((frost$core$String*) NULL);
_57 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = *(&local2);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local2) = _55;
_63 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_66 = *(&local2);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:158:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_71 = &_66->_length;
_72 = *_71;
_73 = frost$core$String$Index$init$frost$core$Int(_72);
_75 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_66, &$s47, _73);
*(&local3) = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_79 = *(&local3);
_80 = !_79.nonnull;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_85 = *(&local2);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = *(&local2);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local2) = ((frost$core$String*) NULL);
_92 = *(&local0);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local0) = ((frost$core$String*) NULL);
return _85;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_98 = *(&local2);
_99 = *(&local3);
_100 = (frost$core$Bit) {false};
_101 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _99, _100);
_102 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_98, _101);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = *(&local2);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local2) = ((frost$core$String*) NULL);
_111 = *(&local0);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local0) = ((frost$core$String*) NULL);
return _102;

}
frost$io$File* frost$io$File$withExtension$frost$core$String$R$frost$io$File(void* rawSelf, frost$core$String* param1) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$io$File* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String$Index$nullable local4;
frost$core$String* local5 = NULL;
frost$core$String$Index$nullable local6;
frost$io$File* _3;
frost$core$String** _4;
frost$core$String* _5;
frost$core$String* _6;
frost$core$Object* _8;
frost$core$String* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$Object* _25;
frost$core$String* _27;
frost$core$Object* _28;
frost$core$Object* _32;
frost$io$File* _36;
frost$core$String* _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$core$String* _45;
frost$io$File* _47;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$Object* _57;
frost$io$File* _60;
bool _61;
frost$core$Bit _62;
bool _63;
frost$core$Int _65;
frost$io$File* _68;
frost$core$String** _73;
frost$core$String* _74;
frost$core$String$Index$nullable _75;
frost$core$String$Index$nullable _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$core$String** _84;
frost$core$String* _85;
frost$core$String** _86;
frost$core$String* _87;
frost$core$String$Index$nullable _88;
bool _89;
frost$core$Bit _90;
bool _91;
frost$core$Int _93;
frost$core$String$Index _96;
frost$core$String$Index _97;
frost$core$String$Index$nullable _98;
frost$core$Bit _99;
frost$core$Range$LTfrost$core$String$Index$Q$GT _100;
frost$core$String* _101;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Object* _107;
frost$core$String** _112;
frost$core$String* _113;
frost$core$Object* _114;
frost$core$Object* _117;
frost$core$String* _121;
frost$core$Object* _123;
frost$core$String* _125;
frost$core$Object* _126;
frost$core$Object* _129;
frost$core$String* _132;
frost$core$String$Index _135;
frost$core$String$Index$nullable _136;
frost$core$String$Index$nullable _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$String* _146;
frost$core$Object* _147;
frost$core$String* _149;
frost$core$Object* _150;
frost$core$String* _153;
frost$core$Object* _154;
frost$core$Object* _158;
frost$core$String* _162;
frost$core$String$Index$nullable _163;
frost$core$Bit _164;
frost$core$Range$LTfrost$core$String$Index$Q$GT _165;
frost$core$String* _166;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$String* _171;
frost$core$Object* _172;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$Object* _180;
frost$core$String* _183;
frost$core$String* _184;
frost$io$File* _185;
frost$core$Object* _186;
frost$core$Object* _188;
frost$core$Object* _190;
frost$core$Object* _192;
frost$core$String* _194;
frost$core$Object* _195;
frost$core$Object* _198;
frost$io$File* _200;
frost$core$Object* _201;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_3 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s48);
_4 = &_3->path;
_5 = *_4;
_6 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_5);
*(&local1) = ((frost$core$String*) NULL);
_8 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local1) = _6;
_14 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_16);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_19 = *(&local1);
_20 = _19 == NULL;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_25 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = ((frost$core$String*) NULL);
*(&local0) = ((frost$io$File*) NULL);
_32 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_32);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_36 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_37 = *(&local1);
_38 = _37 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block4; else goto block5;
block5:;
_42 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _42, &$s50);
abort(); // unreachable
block4:;
_45 = _37;
frost$io$File$init$frost$core$String(_36, _45);
_47 = _36;
_48 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = ((frost$core$String*) NULL);
*(&local0) = _47;
_57 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_57);
goto block1;
block1:;
_60 = *(&local0);
_61 = _60 != NULL;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block6; else goto block7;
block7:;
_65 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _65, &$s52);
abort(); // unreachable
block6:;
_68 = _60;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:157:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_73 = &param0->path;
_74 = *_73;
_75 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_74, &$s53);
*(&local4) = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_78 = *(&local4);
_79 = _78.nonnull;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_84 = &param0->path;
_85 = *_84;
_86 = &param0->path;
_87 = *_86;
_88 = *(&local4);
_89 = _88.nonnull;
_90 = (frost$core$Bit) {_89};
_91 = _90.value;
if (_91) goto block13; else goto block14;
block14:;
_93 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _93, &$s55);
abort(); // unreachable
block13:;
_96 = ((frost$core$String$Index) _88.value);
_97 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_87, _96);
_98 = ((frost$core$String$Index$nullable) { _97, true });
_99 = (frost$core$Bit) {false};
_100 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_98, ((frost$core$String$Index$nullable) { .nonnull = false }), _99);
_101 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_85, _100);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local3) = _101;
_107 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_107);
goto block9;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_112 = &param0->path;
_113 = *_112;
_114 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_114);
*(&local3) = _113;
_117 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_117);
goto block9;
block11:;
goto block9;
block9:;
_121 = *(&local3);
*(&local5) = ((frost$core$String*) NULL);
_123 = ((frost$core$Object*) _121);
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = *(&local5);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
*(&local5) = _121;
_129 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_129);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_132 = *(&local5);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:158:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_135 = frost$core$String$get_end$R$frost$core$String$Index(_132);
_136 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_132, &$s56, _135);
*(&local6) = _136;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_140 = *(&local6);
_141 = !_140.nonnull;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_146 = *(&local5);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local5);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local5) = ((frost$core$String*) NULL);
_153 = *(&local3);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = _146;
_158 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_158);
goto block8;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_162 = *(&local5);
_163 = *(&local6);
_164 = (frost$core$Bit) {false};
_165 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _163, _164);
_166 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_162, _165);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_169);
_171 = *(&local5);
_172 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_172);
*(&local5) = ((frost$core$String*) NULL);
_175 = *(&local3);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = _166;
_180 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_180);
goto block8;
block8:;
_183 = *(&local2);
_184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_183, param1);
_185 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_68, _184);
_186 = ((frost$core$Object*) _185);
frost$core$Frost$ref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = *(&local2);
_195 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_195);
*(&local2) = ((frost$core$String*) NULL);
_198 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_198);
_200 = *(&local0);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_201);
*(&local0) = ((frost$io$File*) NULL);
return _185;

}
frost$core$Error* frost$io$File$createDirectories$R$frost$core$Error$Q(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
frost$io$File* _5;
frost$core$String** _6;
frost$core$String* _7;
frost$core$String* _8;
frost$core$Object* _10;
frost$core$String* _12;
frost$core$Object* _13;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$String* _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Object* _27;
frost$core$String* _29;
frost$core$Object* _30;
frost$core$Object* _34;
frost$io$File* _38;
frost$core$String* _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$core$String* _47;
frost$io$File* _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$String* _54;
frost$core$Object* _55;
frost$core$Object* _59;
frost$io$File* _62;
frost$core$Object* _64;
frost$io$File* _66;
frost$core$Object* _67;
frost$core$Object* _70;
frost$io$File* _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$io$File* _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$core$Int _83;
frost$io$File* _86;
frost$core$Bit _87;
bool _90;
bool _91;
frost$core$Bit _92;
bool _94;
frost$io$File* _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int _102;
frost$io$File* _105;
frost$core$Error* _106;
bool _107;
frost$core$Object* _109;
bool _111;
frost$core$Bit _112;
bool _113;
frost$core$Int _115;
frost$core$Error* _118;
frost$core$Object* _120;
frost$io$File* _122;
frost$core$Object* _123;
frost$io$File* _126;
frost$core$Object* _127;
frost$core$Object* _131;
frost$core$Error* _135;
bool _136;
frost$core$Object* _138;
bool _140;
frost$core$Bit _141;
bool _142;
frost$core$Int _144;
frost$core$Error* _147;
frost$core$Object* _149;
frost$io$File* _151;
frost$core$Object* _152;
frost$io$File* _155;
frost$core$Object* _156;
frost$core$Object* _160;
frost$core$Object* _163;
frost$io$File* _165;
frost$core$Object* _166;
frost$io$File* _169;
frost$core$Object* _170;
frost$core$Error* _173;
frost$core$Object* _174;
frost$core$Error* _179;
frost$core$Error* _180;
frost$core$Object* _181;
frost$core$Error* _183;
frost$core$Object* _184;
frost$core$Error* _188;
frost$core$Object* _189;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:225
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:226
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:226:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_5 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s57);
_6 = &_5->path;
_7 = *_6;
_8 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_7);
*(&local2) = ((frost$core$String*) NULL);
_10 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = *(&local2);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
*(&local2) = _8;
_16 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_21 = *(&local2);
_22 = _21 == NULL;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_27 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local2);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local2) = ((frost$core$String*) NULL);
*(&local1) = ((frost$io$File*) NULL);
_34 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_34);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_38 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_39 = *(&local2);
_40 = _39 != NULL;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block6; else goto block7;
block7:;
_44 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _44, &$s59);
abort(); // unreachable
block6:;
_47 = _39;
frost$io$File$init$frost$core$String(_38, _47);
_49 = _38;
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = *(&local2);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local2) = ((frost$core$String*) NULL);
*(&local1) = _49;
_59 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_59);
goto block3;
block3:;
_62 = *(&local1);
*(&local3) = ((frost$io$File*) NULL);
_64 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local3);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local3) = _62;
_70 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:227
_73 = *(&local3);
_74 = _73 != NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block10; else goto block9;
block10:;
_78 = *(&local3);
_79 = _78 != NULL;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block11; else goto block12;
block12:;
_83 = (frost$core$Int) {227u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _83, &$s61);
abort(); // unreachable
block11:;
_86 = _78;
frost$io$File$exists$R$frost$core$Bit(&_87, _86);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from File.frost:227:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_90 = _87.value;
_91 = !_90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:228
_97 = *(&local3);
_98 = _97 != NULL;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block14; else goto block15;
block15:;
_102 = (frost$core$Int) {228u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _102, &$s63);
abort(); // unreachable
block14:;
_105 = _97;
_106 = frost$io$File$createDirectories$R$frost$core$Error$Q(_105);
_107 = _106 == NULL;
if (_107) goto block16; else goto block17;
block17:;
_109 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = _106 != NULL;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block18; else goto block19;
block19:;
_115 = (frost$core$Int) {228u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _115, &$s65);
abort(); // unreachable
block18:;
_118 = _106;
*(&local0) = _118;
_120 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = *(&local3);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local3) = ((frost$io$File*) NULL);
_126 = *(&local1);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block16:;
_131 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_131);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:230
_135 = frost$io$File$createDirectory$R$frost$core$Error$Q(param0);
_136 = _135 == NULL;
if (_136) goto block20; else goto block21;
block21:;
_138 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = _135 != NULL;
_141 = (frost$core$Bit) {_140};
_142 = _141.value;
if (_142) goto block22; else goto block23;
block23:;
_144 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _144, &$s67);
abort(); // unreachable
block22:;
_147 = _135;
*(&local0) = _147;
_149 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = *(&local3);
_152 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_152);
*(&local3) = ((frost$io$File*) NULL);
_155 = *(&local1);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
_160 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_160);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:231
_163 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_163);
_165 = *(&local3);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_166);
*(&local3) = ((frost$io$File*) NULL);
_169 = *(&local1);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
*(&local1) = ((frost$io$File*) NULL);
_173 = *(&local0);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_174);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:234
_179 = *(&local0);
_180 = _179;
_181 = ((frost$core$Object*) _180);
frost$core$Frost$ref$frost$core$Object$Q(_181);
_183 = *(&local0);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_184);
*(&local0) = ((frost$core$Error*) NULL);
return _180;
block2:;
_188 = *(&local0);
_189 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_189);
*(&local0) = ((frost$core$Error*) NULL);
goto block24;
block24:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Maybe* _3;
frost$core$Maybe* _4;
frost$core$Int _5;
frost$core$Maybe* _6;
frost$core$Maybe* _7;
frost$core$Int* _8;
frost$core$Int _9;
int64_t _10;
bool _11;
frost$core$Error** _13;
frost$core$Error* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Maybe* _44;
frost$core$Maybe* _45;
frost$core$Int _46;
frost$core$Error* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Error* _53;
frost$core$Object* _54;
frost$core$Object** _23;
frost$core$Object* _24;
frost$io$InputStream* _25;
$fn68 _26;
frost$core$String* _27;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Error* _38;
frost$core$Object* _39;
frost$core$Error* _58;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:272
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:273
_3 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_4 = _3;
_5 = (frost$core$Int) {0u};
_6 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
_7 = _6;
_8 = &_7->$rawValue;
_9 = *_8;
_10 = _9.value;
_11 = _10 == 0u;
if (_11) goto block3; else goto block4;
block4:;
_13 = &_6->$data.$ERROR.field0;
_14 = *_13;
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
*(&local0) = _14;
_18 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:276
_44 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_45 = _44;
_46 = (frost$core$Int) {1u};
_47 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_45, _46, _47);
_49 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = *(&local0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = ((frost$core$Error*) NULL);
return _44;
block3:;
_23 = &_6->$data.$SUCCESS.field0;
_24 = *_23;
_25 = ((frost$io$InputStream*) _24);
_26 = ($fn69) _25->$class->vtable[14];
_27 = _26(_25);
_28 = ((frost$core$Object*) _27);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_4, _5, _28);
_30 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Error*) NULL);
return _3;
block2:;
_58 = *(&local0);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Maybe* _3;
frost$core$Maybe* _4;
frost$core$Int _5;
frost$core$Maybe* _6;
frost$core$Maybe* _7;
frost$core$Int* _8;
frost$core$Int _9;
int64_t _10;
bool _11;
frost$core$Error** _13;
frost$core$Error* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Maybe* _44;
frost$core$Maybe* _45;
frost$core$Int _46;
frost$core$Error* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Error* _53;
frost$core$Object* _54;
frost$core$Object** _23;
frost$core$Object* _24;
frost$io$InputStream* _25;
$fn70 _26;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Error* _38;
frost$core$Object* _39;
frost$core$Error* _58;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:288
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:289
_3 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_4 = _3;
_5 = (frost$core$Int) {0u};
_6 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
_7 = _6;
_8 = &_7->$rawValue;
_9 = *_8;
_10 = _9.value;
_11 = _10 == 0u;
if (_11) goto block3; else goto block4;
block4:;
_13 = &_6->$data.$ERROR.field0;
_14 = *_13;
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
*(&local0) = _14;
_18 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:292
_44 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_45 = _44;
_46 = (frost$core$Int) {1u};
_47 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_45, _46, _47);
_49 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = *(&local0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = ((frost$core$Error*) NULL);
return _44;
block3:;
_23 = &_6->$data.$SUCCESS.field0;
_24 = *_23;
_25 = ((frost$io$InputStream*) _24);
_26 = ($fn71) _25->$class->vtable[15];
_27 = _26(_25);
_28 = ((frost$core$Object*) _27);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_4, _5, _28);
_30 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Error*) NULL);
return _3;
block2:;
_58 = *(&local0);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Error* frost$io$File$write$frost$core$String$R$frost$core$Error$Q(void* rawSelf, frost$core$String* param1) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Maybe* _3;
frost$core$Maybe* _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _7;
bool _8;
frost$core$Error** _10;
frost$core$Error* _11;
frost$core$Object* _12;
frost$core$Object* _15;
frost$core$Object** _18;
frost$core$Object* _19;
frost$io$OutputStream* _20;
$fn72 _21;
frost$core$Error* _22;
bool _23;
frost$core$Object* _25;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$core$Error* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _46;
frost$core$Error* _48;
frost$core$Object* _49;
frost$core$Error* _54;
frost$core$Error* _55;
frost$core$Object* _56;
frost$core$Error* _58;
frost$core$Object* _59;
frost$core$Error* _63;
frost$core$Object* _64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:303
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:304
_3 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param0);
_4 = _3;
_5 = &_4->$rawValue;
_6 = *_5;
_7 = _6.value;
_8 = _7 == 0u;
if (_8) goto block3; else goto block4;
block4:;
_10 = &_3->$data.$ERROR.field0;
_11 = *_10;
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
*(&local0) = _11;
_15 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_15);
goto block1;
block3:;
_18 = &_3->$data.$SUCCESS.field0;
_19 = *_18;
_20 = ((frost$io$OutputStream*) _19);
_21 = ($fn73) _20->$class->vtable[17];
_22 = _21(_20, param1);
_23 = _22 == NULL;
if (_23) goto block5; else goto block6;
block6:;
_25 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = _22 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block7; else goto block8;
block8:;
_31 = (frost$core$Int) {304u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, _31, &$s75);
abort(); // unreachable
block7:;
_34 = _22;
*(&local0) = _34;
_36 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_38);
goto block1;
block5:;
_41 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_43);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:305
_46 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local0);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:308
_54 = *(&local0);
_55 = _54;
_56 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local0);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local0) = ((frost$core$Error*) NULL);
return _55;
block2:;
_63 = *(&local0);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local0) = ((frost$core$Error*) NULL);
goto block9;
block9:;

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(void* rawSelf, frost$io$File* param1) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:338
_1 = &param0->path;
_2 = *_1;
_3 = &param1->path;
_4 = *_3;
_5 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_2, _4);
return _5;

}
frost$core$Int frost$io$File$get_hash$R$frost$core$Int(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$collections$HashKey* _3;
$fn76 _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:343
_1 = &param0->path;
_2 = *_1;
_3 = ((frost$collections$HashKey*) _2);
ITable* $tmp77 = _3->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp77 = $tmp77->next;
}
_4 = $tmp77->methods[0];
_5 = _4(_3);
return _5;

}
frost$core$String* frost$io$File$get_asString$R$frost$core$String(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$Object* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:351
_1 = &param0->path;
_2 = *_1;
_3 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_3);
return _2;

}
void frost$io$File$cleanup(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Immutable* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:13
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->path;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

