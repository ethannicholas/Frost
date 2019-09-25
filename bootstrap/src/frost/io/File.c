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
#include "frost/core/RegularExpression.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/io/OutputStream.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
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
typedef frost$core$String* (*$fn70)(frost$io$InputStream*);
typedef frost$core$String* (*$fn71)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn72)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn73)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn74)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn75)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn78)(frost$collections$HashKey*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, -334114093039521505, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5c\x2f\x2b", 3, -5674958730652345163, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f\x2e\x2e", 3, -1238292982284524614, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };

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
frost$core$Int _4;
frost$core$Maybe* _5;
frost$core$Int* _6;
frost$core$Int _7;
int64_t _8;
bool _9;
frost$core$Error** _11;
frost$core$Error* _12;
frost$core$Object* _13;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Maybe* _42;
frost$core$Int _43;
frost$core$Error* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Error* _50;
frost$core$Object* _51;
frost$core$Object** _21;
frost$core$Object* _22;
frost$io$InputStream* _23;
$fn5 _24;
frost$collections$Iterator* _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Error* _36;
frost$core$Object* _37;
frost$core$Error* _55;
frost$core$Object* _56;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:74
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:75
_3 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_4 = (frost$core$Int) {0u};
_5 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
_6 = &_5->$rawValue;
_7 = *_6;
_8 = _7.value;
_9 = _8 == 0u;
if (_9) goto block3; else goto block4;
block4:;
_11 = &_5->$data.$ERROR.field0;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
*(&local0) = _12;
_16 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:78
_42 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_43 = (frost$core$Int) {1u};
_44 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_42, _43, _44);
_46 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = *(&local0);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local0) = ((frost$core$Error*) NULL);
return _42;
block3:;
_21 = &_5->$data.$SUCCESS.field0;
_22 = *_21;
_23 = ((frost$io$InputStream*) _22);
_24 = ($fn6) _23->$class->vtable[18];
_25 = _24(_23);
_26 = ((frost$core$Object*) _25);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_3, _4, _26);
_28 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = *(&local0);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local0) = ((frost$core$Error*) NULL);
return _3;
block2:;
_55 = *(&local0);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
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
frost$core$RegularExpression* _10;
frost$core$Bit _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$String* _23;
frost$core$Object* _24;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$String* _32;
frost$core$Bit _33;
bool _34;
frost$core$String* _37;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$String* _41;
frost$core$Object* _42;
frost$core$String* _48;
frost$core$Bit _49;
bool _50;
frost$core$String* _53;
frost$core$String* _54;
frost$collections$Iterable* _57;
$fn8 _58;
frost$collections$Iterator* _59;
$fn9 _60;
frost$core$Int _61;
frost$core$Object* _62;
frost$core$Int _65;
int64_t _66;
int64_t _67;
int64_t _68;
frost$core$Int _69;
frost$core$Int$nullable _70;
frost$core$Bit _71;
frost$core$Range$LTfrost$core$Int$Q$GT _72;
frost$core$String* _73;
frost$core$Object* _74;
frost$core$String* _76;
frost$core$Object* _77;
frost$core$Object* _80;
frost$core$String* _84;
frost$core$Bit _85;
frost$core$Bit _88;
bool _89;
frost$core$String* _92;
frost$core$Int _93;
frost$core$Int$nullable _94;
frost$core$Bit _95;
frost$core$Range$LTfrost$core$Int$Q$GT _96;
frost$core$String* _97;
frost$core$Object* _98;
frost$core$String* _100;
frost$core$Object* _101;
frost$core$Object* _104;
frost$core$String* _108;
frost$core$Int64 _111;
int64_t _114;
int64_t _115;
frost$core$Int _116;
frost$collections$Array* _118;
frost$core$Object* _119;
frost$core$Object* _121;
frost$core$Object* _125;
frost$collections$Array* _127;
frost$core$Object* _128;
frost$core$Object* _131;
frost$core$Int _136;
frost$collections$Array* _137;
frost$collections$CollectionView* _138;
$fn10 _139;
frost$core$Int _140;
frost$core$Bit _141;
frost$core$Range$LTfrost$core$Int$GT _142;
frost$core$Int _143;
frost$core$Int _145;
frost$core$Bit _146;
bool _147;
frost$core$Int _148;
int64_t _150;
int64_t _151;
bool _152;
frost$core$Bit _153;
bool _154;
int64_t _156;
int64_t _157;
bool _158;
frost$core$Bit _159;
bool _160;
frost$collections$Array* _163;
frost$core$Int _164;
frost$core$Int _166;
int64_t _167;
int64_t _168;
bool _169;
frost$core$Bit _170;
bool _171;
frost$collections$CollectionView* _173;
$fn11 _174;
frost$core$Int _175;
int64_t _176;
int64_t _177;
bool _178;
frost$core$Bit _179;
bool _180;
frost$core$Int _182;
frost$unsafe$Pointer* _186;
frost$unsafe$Pointer _187;
int64_t _188;
frost$core$Int64 _189;
int64_t _190;
frost$core$Object* _191;
frost$core$Object* _192;
frost$core$String* _195;
frost$core$Bit _196;
bool _197;
frost$core$Object* _198;
frost$collections$Array* _201;
frost$core$Int _202;
frost$core$Int _203;
int64_t _204;
int64_t _205;
int64_t _206;
frost$core$Int _207;
frost$core$Int _209;
int64_t _210;
int64_t _211;
bool _212;
frost$core$Bit _213;
bool _214;
frost$collections$CollectionView* _216;
$fn12 _217;
frost$core$Int _218;
int64_t _219;
int64_t _220;
bool _221;
frost$core$Bit _222;
bool _223;
frost$core$Int _225;
frost$unsafe$Pointer* _229;
frost$unsafe$Pointer _230;
int64_t _231;
frost$core$Int64 _232;
int64_t _233;
frost$core$Object* _234;
frost$core$Object* _235;
frost$core$String* _238;
frost$core$Equatable* _239;
frost$core$Equatable* _240;
$fn13 _241;
frost$core$Bit _242;
bool _243;
frost$core$Object* _244;
frost$collections$Array* _248;
frost$core$Int _249;
frost$core$Object* _250;
frost$core$String* _251;
frost$core$Object* _252;
frost$collections$Array* _255;
frost$core$Int _256;
frost$core$Int _257;
int64_t _258;
int64_t _259;
int64_t _260;
frost$core$Int _261;
frost$core$Object* _262;
frost$core$String* _263;
frost$core$Object* _264;
frost$core$Int _269;
int64_t _270;
int64_t _271;
int64_t _272;
frost$core$Int _273;
int64_t _275;
int64_t _276;
bool _277;
frost$core$Bit _278;
bool _279;
int64_t _281;
int64_t _282;
bool _283;
frost$core$Bit _284;
bool _285;
int64_t _287;
int64_t _288;
int64_t _289;
frost$core$Int _290;
frost$collections$Array* _296;
frost$collections$CollectionView* _297;
$fn14 _298;
frost$core$String* _299;
frost$core$Object* _300;
frost$core$String* _302;
frost$core$Object* _303;
frost$core$Object* _306;
frost$core$Bit _309;
bool _310;
frost$core$String* _313;
frost$core$String* _314;
frost$core$Object* _315;
frost$core$String* _317;
frost$core$Object* _318;
frost$core$Object* _321;
frost$core$Bit _325;
bool _326;
frost$core$String* _328;
frost$core$String$Index _333;
frost$core$String$Index$nullable _334;
bool _336;
frost$core$Bit _337;
bool _339;
frost$core$Object* _342;
frost$collections$Array* _344;
frost$core$Object* _345;
frost$core$String* _348;
frost$core$Object* _349;
frost$core$String* _354;
frost$core$Bit _355;
bool _356;
frost$core$Object* _359;
frost$core$String* _361;
frost$core$Object* _362;
frost$core$String* _367;
frost$core$String* _368;
frost$core$Object* _369;
frost$collections$Array* _371;
frost$core$Object* _372;
frost$core$String* _375;
frost$core$Object* _376;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:98
*(&local0) = ((frost$core$String*) NULL);
_2 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = *(&local0);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
*(&local0) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:100
_9 = *(&local0);
_10 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_10, &$s15);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from File.frost:100:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_14 = (frost$core$Bit) {true};
_15 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_9, _10, &$s16, _14);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_21 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local0) = _15;
_27 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:101
_32 = *(&local0);
_33 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_32, &$s17);
_34 = _33.value;
if (_34) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:102
_37 = *(&local0);
_38 = _37;
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = ((frost$core$String*) NULL);
return _38;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:105
goto block4;
block4:;
_48 = *(&local0);
_49 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_48, &$s18);
_50 = _49.value;
if (_50) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:106
_53 = *(&local0);
_54 = *(&local0);
// begin inline call to function frost.core.String.get_length():frost.core.Int from File.frost:106:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_57 = ((frost$collections$Iterable*) _54);
ITable* $tmp19 = _57->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp19 = $tmp19->next;
}
_58 = $tmp19->methods[0];
_59 = _58(_57);
ITable* $tmp20 = _59->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
_60 = $tmp20->methods[2];
_61 = _60(_59);
_62 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_65 = (frost$core$Int) {1u};
_66 = _61.value;
_67 = _65.value;
_68 = _66 - _67;
_69 = (frost$core$Int) {_68};
_70 = ((frost$core$Int$nullable) { _69, true });
_71 = (frost$core$Bit) {false};
_72 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { .nonnull = false }), _70, _71);
_73 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(_53, _72);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = _73;
_80 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_80);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:108
_84 = *(&local0);
_85 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_84, &$s21);
*(&local1) = _85;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:109
_88 = *(&local1);
_89 = _88.value;
if (_89) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:110
_92 = *(&local0);
_93 = (frost$core$Int) {1u};
_94 = ((frost$core$Int$nullable) { _93, true });
_95 = (frost$core$Bit) {false};
_96 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_94, ((frost$core$Int$nullable) { .nonnull = false }), _95);
_97 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(_92, _96);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local0);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local0) = _97;
_104 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_104);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:113
_108 = *(&local0);
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from File.frost:113:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_111 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_114 = _111.value;
_115 = ((int64_t) _114);
_116 = (frost$core$Int) {_115};
_118 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_108, &$s22, _116);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local2) = ((frost$collections$Array*) NULL);
_125 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_125);
_127 = *(&local2);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_128);
*(&local2) = _118;
_131 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_131);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:114
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:115
_136 = (frost$core$Int) {1u};
_137 = *(&local2);
_138 = ((frost$collections$CollectionView*) _137);
ITable* $tmp23 = _138->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
_139 = $tmp23->methods[0];
_140 = _139(_138);
_141 = (frost$core$Bit) {false};
_142 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_136, _140, _141);
_143 = _142.min;
*(&local3) = _143;
_145 = _142.max;
_146 = _142.inclusive;
_147 = _146.value;
_148 = (frost$core$Int) {1u};
if (_147) goto block17; else goto block18;
block17:;
_150 = _143.value;
_151 = _145.value;
_152 = _150 <= _151;
_153 = (frost$core$Bit) {_152};
_154 = _153.value;
if (_154) goto block14; else goto block15;
block18:;
_156 = _143.value;
_157 = _145.value;
_158 = _156 < _157;
_159 = (frost$core$Bit) {_158};
_160 = _159.value;
if (_160) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:116
_163 = *(&local2);
_164 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from File.frost:116:30
_166 = (frost$core$Int) {0u};
_167 = _164.value;
_168 = _166.value;
_169 = _167 >= _168;
_170 = (frost$core$Bit) {_169};
_171 = _170.value;
if (_171) goto block25; else goto block24;
block25:;
_173 = ((frost$collections$CollectionView*) _163);
ITable* $tmp24 = _173->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
_174 = $tmp24->methods[0];
_175 = _174(_173);
_176 = _164.value;
_177 = _175.value;
_178 = _176 < _177;
_179 = (frost$core$Bit) {_178};
_180 = _179.value;
if (_180) goto block23; else goto block24;
block24:;
_182 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _182, &$s26);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_186 = &_163->data;
_187 = *_186;
_188 = _187.value;
_189 = frost$core$Int64$init$frost$core$Int(_164);
_190 = _189.value;
_191 = ((frost$core$Object**)_188)[_190];
_192 = _191;
frost$core$Frost$ref$frost$core$Object$Q(_192);
_195 = ((frost$core$String*) _191);
_196 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_195, &$s27);
_197 = _196.value;
_198 = _191;
frost$core$Frost$unref$frost$core$Object$Q(_198);
if (_197) goto block21; else goto block20;
block21:;
_201 = *(&local2);
_202 = *(&local3);
_203 = (frost$core$Int) {1u};
_204 = _202.value;
_205 = _203.value;
_206 = _204 - _205;
_207 = (frost$core$Int) {_206};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from File.frost:116:53
_209 = (frost$core$Int) {0u};
_210 = _207.value;
_211 = _209.value;
_212 = _210 >= _211;
_213 = (frost$core$Bit) {_212};
_214 = _213.value;
if (_214) goto block29; else goto block28;
block29:;
_216 = ((frost$collections$CollectionView*) _201);
ITable* $tmp28 = _216->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_217 = $tmp28->methods[0];
_218 = _217(_216);
_219 = _207.value;
_220 = _218.value;
_221 = _219 < _220;
_222 = (frost$core$Bit) {_221};
_223 = _222.value;
if (_223) goto block27; else goto block28;
block28:;
_225 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _225, &$s30);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_229 = &_201->data;
_230 = *_229;
_231 = _230.value;
_232 = frost$core$Int64$init$frost$core$Int(_207);
_233 = _232.value;
_234 = ((frost$core$Object**)_231)[_233];
_235 = _234;
frost$core$Frost$ref$frost$core$Object$Q(_235);
_238 = ((frost$core$String*) _234);
_239 = ((frost$core$Equatable*) _238);
_240 = ((frost$core$Equatable*) &$s31);
ITable* $tmp32 = _239->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp32 = $tmp32->next;
}
_241 = $tmp32->methods[1];
_242 = _241(_239, _240);
_243 = _242.value;
_244 = _234;
frost$core$Frost$unref$frost$core$Object$Q(_244);
if (_243) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:117
_248 = *(&local2);
_249 = *(&local3);
_250 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_248, _249);
_251 = ((frost$core$String*) _250);
_252 = _250;
frost$core$Frost$unref$frost$core$Object$Q(_252);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:118
_255 = *(&local2);
_256 = *(&local3);
_257 = (frost$core$Int) {1u};
_258 = _256.value;
_259 = _257.value;
_260 = _258 - _259;
_261 = (frost$core$Int) {_260};
_262 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_255, _261);
_263 = ((frost$core$String*) _262);
_264 = _262;
frost$core$Frost$unref$frost$core$Object$Q(_264);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:119
goto block12;
block20:;
_269 = *(&local3);
_270 = _145.value;
_271 = _269.value;
_272 = _270 - _271;
_273 = (frost$core$Int) {_272};
if (_147) goto block31; else goto block32;
block31:;
_275 = _273.value;
_276 = _148.value;
_277 = _275 >= _276;
_278 = (frost$core$Bit) {_277};
_279 = _278.value;
if (_279) goto block30; else goto block15;
block32:;
_281 = _273.value;
_282 = _148.value;
_283 = _281 > _282;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block30; else goto block15;
block30:;
_287 = _269.value;
_288 = _148.value;
_289 = _287 + _288;
_290 = (frost$core$Int) {_289};
*(&local3) = _290;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:122
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:124
_296 = *(&local2);
_297 = ((frost$collections$CollectionView*) _296);
ITable* $tmp33 = _297->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
_298 = $tmp33->methods[3];
_299 = _298(_297, &$s34);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$ref$frost$core$Object$Q(_300);
_302 = *(&local0);
_303 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_303);
*(&local0) = _299;
_306 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_306);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:125
_309 = *(&local1);
_310 = _309.value;
if (_310) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:126
_313 = *(&local0);
_314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s35, _313);
_315 = ((frost$core$Object*) _314);
frost$core$Frost$ref$frost$core$Object$Q(_315);
_317 = *(&local0);
_318 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_318);
*(&local0) = _314;
_321 = ((frost$core$Object*) _314);
frost$core$Frost$unref$frost$core$Object$Q(_321);
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:128
_325 = *(&local1);
_326 = _325.value;
if (_326) goto block37; else goto block36;
block37:;
_328 = *(&local0);
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from File.frost:128:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
_333 = frost$core$String$get_start$R$frost$core$String$Index(_328);
_334 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_328, &$s36, _333);
_336 = _334.nonnull;
_337 = (frost$core$Bit) {_336};
_339 = _337.value;
if (_339) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:130
_342 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_342);
_344 = *(&local2);
_345 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_345);
*(&local2) = ((frost$collections$Array*) NULL);
_348 = *(&local0);
_349 = ((frost$core$Object*) _348);
frost$core$Frost$unref$frost$core$Object$Q(_349);
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:132
_354 = *(&local0);
_355 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_354, &$s37);
_356 = _355.value;
if (_356) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:133
_359 = ((frost$core$Object*) &$s38);
frost$core$Frost$ref$frost$core$Object$Q(_359);
_361 = *(&local0);
_362 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_362);
*(&local0) = &$s39;
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:135
_367 = *(&local0);
_368 = _367;
_369 = ((frost$core$Object*) _368);
frost$core$Frost$ref$frost$core$Object$Q(_369);
_371 = *(&local2);
_372 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_372);
*(&local2) = ((frost$collections$Array*) NULL);
_375 = *(&local0);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_376);
*(&local0) = ((frost$core$String*) NULL);
return _368;

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
_1 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s40);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _37, &$s42);
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
_11 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_2, &$s43, _9);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _30, &$s45);
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
_8 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_4, &$s46, _7);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s47, _27, &$s48);
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
_75 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_66, &$s49, _73);
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
_3 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s50);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _42, &$s52);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _65, &$s54);
abort(); // unreachable
block6:;
_68 = _60;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:157:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_73 = &param0->path;
_74 = *_73;
_75 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_74, &$s55);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _93, &$s57);
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
_136 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_132, &$s58, _135);
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
_5 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s59);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _44, &$s61);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _83, &$s63);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _102, &$s65);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _115, &$s67);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, _144, &$s69);
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
frost$core$Int _4;
frost$core$Maybe* _5;
frost$core$Int* _6;
frost$core$Int _7;
int64_t _8;
bool _9;
frost$core$Error** _11;
frost$core$Error* _12;
frost$core$Object* _13;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Maybe* _42;
frost$core$Int _43;
frost$core$Error* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Error* _50;
frost$core$Object* _51;
frost$core$Object** _21;
frost$core$Object* _22;
frost$io$InputStream* _23;
$fn70 _24;
frost$core$String* _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Error* _36;
frost$core$Object* _37;
frost$core$Error* _55;
frost$core$Object* _56;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:272
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:273
_3 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_4 = (frost$core$Int) {0u};
_5 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
_6 = &_5->$rawValue;
_7 = *_6;
_8 = _7.value;
_9 = _8 == 0u;
if (_9) goto block3; else goto block4;
block4:;
_11 = &_5->$data.$ERROR.field0;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
*(&local0) = _12;
_16 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:276
_42 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_43 = (frost$core$Int) {1u};
_44 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_42, _43, _44);
_46 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = *(&local0);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local0) = ((frost$core$Error*) NULL);
return _42;
block3:;
_21 = &_5->$data.$SUCCESS.field0;
_22 = *_21;
_23 = ((frost$io$InputStream*) _22);
_24 = ($fn71) _23->$class->vtable[14];
_25 = _24(_23);
_26 = ((frost$core$Object*) _25);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_3, _4, _26);
_28 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = *(&local0);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local0) = ((frost$core$Error*) NULL);
return _3;
block2:;
_55 = *(&local0);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT(void* rawSelf) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Maybe* _3;
frost$core$Int _4;
frost$core$Maybe* _5;
frost$core$Int* _6;
frost$core$Int _7;
int64_t _8;
bool _9;
frost$core$Error** _11;
frost$core$Error* _12;
frost$core$Object* _13;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Maybe* _42;
frost$core$Int _43;
frost$core$Error* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Error* _50;
frost$core$Object* _51;
frost$core$Object** _21;
frost$core$Object* _22;
frost$io$InputStream* _23;
$fn72 _24;
frost$collections$Array* _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Error* _36;
frost$core$Object* _37;
frost$core$Error* _55;
frost$core$Object* _56;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:288
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:289
_3 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_4 = (frost$core$Int) {0u};
_5 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
_6 = &_5->$rawValue;
_7 = *_6;
_8 = _7.value;
_9 = _8 == 0u;
if (_9) goto block3; else goto block4;
block4:;
_11 = &_5->$data.$ERROR.field0;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
*(&local0) = _12;
_16 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:292
_42 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_43 = (frost$core$Int) {1u};
_44 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_42, _43, _44);
_46 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = *(&local0);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local0) = ((frost$core$Error*) NULL);
return _42;
block3:;
_21 = &_5->$data.$SUCCESS.field0;
_22 = *_21;
_23 = ((frost$io$InputStream*) _22);
_24 = ($fn73) _23->$class->vtable[15];
_25 = _24(_23);
_26 = ((frost$core$Object*) _25);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_3, _4, _26);
_28 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = *(&local0);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local0) = ((frost$core$Error*) NULL);
return _3;
block2:;
_55 = *(&local0);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Error* frost$io$File$write$frost$core$String$R$frost$core$Error$Q(void* rawSelf, frost$core$String* param1) {
frost$io$File* param0 = (frost$io$File*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Maybe* _3;
frost$core$Int* _4;
frost$core$Int _5;
int64_t _6;
bool _7;
frost$core$Error** _9;
frost$core$Error* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Object** _17;
frost$core$Object* _18;
frost$io$OutputStream* _19;
$fn74 _20;
frost$core$Error* _21;
bool _22;
frost$core$Object* _24;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$core$Error* _33;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _45;
frost$core$Error* _47;
frost$core$Object* _48;
frost$core$Error* _53;
frost$core$Error* _54;
frost$core$Object* _55;
frost$core$Error* _57;
frost$core$Object* _58;
frost$core$Error* _62;
frost$core$Object* _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:303
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:304
_3 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param0);
_4 = &_3->$rawValue;
_5 = *_4;
_6 = _5.value;
_7 = _6 == 0u;
if (_7) goto block3; else goto block4;
block4:;
_9 = &_3->$data.$ERROR.field0;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
*(&local0) = _10;
_14 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_14);
goto block1;
block3:;
_17 = &_3->$data.$SUCCESS.field0;
_18 = *_17;
_19 = ((frost$io$OutputStream*) _18);
_20 = ($fn75) _19->$class->vtable[17];
_21 = _20(_19, param1);
_22 = _21 == NULL;
if (_22) goto block5; else goto block6;
block6:;
_24 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = _21 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block7; else goto block8;
block8:;
_30 = (frost$core$Int) {304u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _30, &$s77);
abort(); // unreachable
block7:;
_33 = _21;
*(&local0) = _33;
_35 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_37);
goto block1;
block5:;
_40 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:305
_45 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local0);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:308
_53 = *(&local0);
_54 = _53;
_55 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = *(&local0);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local0) = ((frost$core$Error*) NULL);
return _54;
block2:;
_62 = *(&local0);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
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
$fn78 _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:343
_1 = &param0->path;
_2 = *_1;
_3 = ((frost$collections$HashKey*) _2);
ITable* $tmp79 = _3->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp79 = $tmp79->next;
}
_4 = $tmp79->methods[0];
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

