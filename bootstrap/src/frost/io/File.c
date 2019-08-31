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

typedef frost$collections$Iterator* (*$fn40)(frost$io$InputStream*);
typedef frost$collections$Iterator* (*$fn70)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn74)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn107)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn136)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn169)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn187)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn223)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn491)(frost$io$InputStream*);
typedef frost$collections$Array* (*$fn511)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn525)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn545)(frost$collections$HashKey*);

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
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };

void frost$io$File$init$frost$core$String(frost$io$File* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->path;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->path;
*$tmp4 = param1;
return;

}
frost$io$File* frost$io$File$resolve$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:58
frost$core$Bit $tmp5 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s6);
bool $tmp7 = $tmp5.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:59
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp8 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp8, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
return $tmp8;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:61
frost$core$String** $tmp9 = &param0->path;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Bit $tmp11 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp10, &$s12);
bool $tmp13 = $tmp11.value;
if ($tmp13) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:62
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:64
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:75
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:76
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp24 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp25 = (frost$core$Int) {0u};
frost$core$Maybe* $tmp26 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int* $tmp27 = &$tmp26->$rawValue;
frost$core$Int $tmp28 = *$tmp27;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:79
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp33 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp34 = (frost$core$Int) {1u};
frost$core$Error* $tmp35 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error($tmp33, $tmp34, $tmp35);
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
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp24, $tmp25, ((frost$core$Object*) $tmp41));
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

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:84
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:99
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$String* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:101
frost$core$String* $tmp49 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp50 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp50, &$s51);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from File.frost:101:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:102
frost$core$String* $tmp56 = *(&local0);
frost$core$Bit $tmp57 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp56, &$s58);
bool $tmp59 = $tmp57.value;
if ($tmp59) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:103
frost$core$String* $tmp60 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = ((frost$core$String*) NULL);
return $tmp60;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:106
goto block4;
block4:;
frost$core$String* $tmp62 = *(&local0);
frost$core$Bit $tmp63 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp62, &$s64);
bool $tmp65 = $tmp63.value;
if ($tmp65) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:107
frost$core$String* $tmp66 = *(&local0);
frost$core$String* $tmp67 = *(&local0);
// begin inline call to function frost.core.String.get_length():frost.core.Int from File.frost:107:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:109
frost$core$String* $tmp85 = *(&local0);
frost$core$Bit $tmp86 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp85, &$s87);
*(&local1) = $tmp86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:110
frost$core$Bit $tmp88 = *(&local1);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:111
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:114
frost$core$String* $tmp96 = *(&local0);
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from File.frost:114:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp97 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp98 = $tmp97.value;
frost$core$Int $tmp99 = (frost$core$Int) {((int64_t) $tmp98)};
frost$collections$Array* $tmp100 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp96, &$s101, $tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$collections$Array* $tmp102 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local2) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:115
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:116
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:117
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:118
frost$collections$Array* $tmp190 = *(&local2);
frost$core$Int $tmp191 = *(&local3);
frost$core$Object* $tmp192 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp190, $tmp191);
frost$core$Frost$unref$frost$core$Object$Q($tmp192);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:119
frost$collections$Array* $tmp193 = *(&local2);
frost$core$Int $tmp194 = *(&local3);
frost$core$Int $tmp195 = (frost$core$Int) {1u};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 - $tmp197;
frost$core$Int $tmp199 = (frost$core$Int) {$tmp198};
frost$core$Object* $tmp200 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp193, $tmp199);
frost$core$Frost$unref$frost$core$Object$Q($tmp200);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:120
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:123
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:125
frost$collections$Array* $tmp220 = *(&local2);
ITable* $tmp221 = ((frost$collections$CollectionView*) $tmp220)->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[3];
frost$core$String* $tmp224 = $tmp222(((frost$collections$CollectionView*) $tmp220), &$s225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$String* $tmp226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local0) = $tmp224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:126
frost$core$Bit $tmp227 = *(&local1);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:127
frost$core$String* $tmp229 = *(&local0);
frost$core$String* $tmp230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s231, $tmp229);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$String* $tmp232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:129
frost$core$Bit $tmp233 = *(&local1);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block37; else goto block36;
block37:;
frost$core$String* $tmp235 = *(&local0);
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from File.frost:129:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp236 = frost$core$String$get_start$R$frost$core$String$Index($tmp235);
frost$core$String$Index$nullable $tmp237 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp235, &$s238, $tmp236);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp237.nonnull};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$Array* $tmp241 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp242 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$String*) NULL);
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:133
frost$core$String* $tmp243 = *(&local0);
frost$core$Bit $tmp244 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp243, &$s245);
bool $tmp246 = $tmp244.value;
if ($tmp246) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s247));
frost$core$String* $tmp248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local0) = &$s249;
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:136
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp259 = *(&local0);
frost$core$Bit $tmp260 = (frost$core$Bit) {$tmp259 == NULL};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$io$File*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp263 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp264 = *(&local0);
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264 != NULL};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block3; else goto block4;
block4:;
frost$core$Int $tmp267 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s268, $tmp267, &$s269);
abort(); // unreachable
block3:;
frost$io$File$init$frost$core$String($tmp263, $tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$String* $tmp270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local0) = ((frost$core$String*) NULL);
return $tmp263;

}
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* param0) {

frost$core$String$Index$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp271 = &param0->path;
frost$core$String* $tmp272 = *$tmp271;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp273 = &$tmp272->_length;
frost$core$Int $tmp274 = *$tmp273;
frost$core$String$Index $tmp275 = frost$core$String$Index$init$frost$core$Int($tmp274);
frost$core$String$Index$nullable $tmp276 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp272, &$s277, $tmp275);
*(&local0) = $tmp276;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp278 = *(&local0);
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278.nonnull};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp281 = &param0->path;
frost$core$String* $tmp282 = *$tmp281;
frost$core$String** $tmp283 = &param0->path;
frost$core$String* $tmp284 = *$tmp283;
frost$core$String$Index$nullable $tmp285 = *(&local0);
frost$core$Bit $tmp286 = (frost$core$Bit) {$tmp285.nonnull};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block6; else goto block7;
block7:;
frost$core$Int $tmp288 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s289, $tmp288, &$s290);
abort(); // unreachable
block6:;
frost$core$String$Index $tmp291 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp284, ((frost$core$String$Index) $tmp285.value));
frost$core$Bit $tmp292 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp293 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp291, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp292);
frost$core$String* $tmp294 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp282, $tmp293);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
return $tmp294;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp295 = &param0->path;
frost$core$String* $tmp296 = *$tmp295;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
return $tmp296;
block4:;
goto block8;
block8:;

}
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
frost$core$String* local2 = NULL;
frost$core$String$Index$nullable local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp297 = &param0->path;
frost$core$String* $tmp298 = *$tmp297;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp299 = frost$core$String$get_end$R$frost$core$String$Index($tmp298);
frost$core$String$Index$nullable $tmp300 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp298, &$s301, $tmp299);
*(&local1) = $tmp300;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp302 = *(&local1);
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302.nonnull};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp305 = &param0->path;
frost$core$String* $tmp306 = *$tmp305;
frost$core$String** $tmp307 = &param0->path;
frost$core$String* $tmp308 = *$tmp307;
frost$core$String$Index$nullable $tmp309 = *(&local1);
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309.nonnull};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block6; else goto block7;
block7:;
frost$core$Int $tmp312 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s313, $tmp312, &$s314);
abort(); // unreachable
block6:;
frost$core$String$Index $tmp315 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp308, ((frost$core$String$Index) $tmp309.value));
frost$core$Bit $tmp316 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp317 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp315, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp316);
frost$core$String* $tmp318 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp306, $tmp317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = $tmp318;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp319 = &param0->path;
frost$core$String* $tmp320 = *$tmp319;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local0) = $tmp320;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
goto block1;
block4:;
goto block1;
block1:;
frost$core$String* $tmp321 = *(&local0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$String* $tmp322 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local2) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp323 = *(&local2);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp324 = &$tmp323->_length;
frost$core$Int $tmp325 = *$tmp324;
frost$core$String$Index $tmp326 = frost$core$String$Index$init$frost$core$Int($tmp325);
frost$core$String$Index$nullable $tmp327 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp323, &$s328, $tmp326);
*(&local3) = $tmp327;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp329 = *(&local3);
frost$core$Bit $tmp330 = (frost$core$Bit) {!$tmp329.nonnull};
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp332 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$String* $tmp333 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local0) = ((frost$core$String*) NULL);
return $tmp332;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp335 = *(&local2);
frost$core$String$Index$nullable $tmp336 = *(&local3);
frost$core$Bit $tmp337 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp338 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp336, $tmp337);
frost$core$String* $tmp339 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp335, $tmp338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$String* $tmp340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local0) = ((frost$core$String*) NULL);
return $tmp339;

}
frost$io$File* frost$io$File$withExtension$frost$core$String$R$frost$io$File(frost$io$File* param0, frost$core$String* param1) {

frost$io$File* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String$Index$nullable local4;
frost$core$String* local5 = NULL;
frost$core$String$Index$nullable local6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp342 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s343);
frost$core$String** $tmp344 = &$tmp342->path;
frost$core$String* $tmp345 = *$tmp344;
frost$core$String* $tmp346 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp345);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$String* $tmp347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local1) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp348 = *(&local1);
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348 == NULL};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp351 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local1) = ((frost$core$String*) NULL);
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp352 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp353 = *(&local1);
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353 != NULL};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block4; else goto block5;
block5:;
frost$core$Int $tmp356 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s357, $tmp356, &$s358);
abort(); // unreachable
block4:;
frost$io$File$init$frost$core$String($tmp352, $tmp353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$String* $tmp359 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local1) = ((frost$core$String*) NULL);
*(&local0) = $tmp352;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
goto block1;
block1:;
frost$io$File* $tmp360 = *(&local0);
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360 != NULL};
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block6; else goto block7;
block7:;
frost$core$Int $tmp363 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s364, $tmp363, &$s365);
abort(); // unreachable
block6:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp366 = &param0->path;
frost$core$String* $tmp367 = *$tmp366;
frost$core$String$Index$nullable $tmp368 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp367, &$s369);
*(&local4) = $tmp368;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp370 = *(&local4);
frost$core$Bit $tmp371 = (frost$core$Bit) {$tmp370.nonnull};
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp373 = &param0->path;
frost$core$String* $tmp374 = *$tmp373;
frost$core$String** $tmp375 = &param0->path;
frost$core$String* $tmp376 = *$tmp375;
frost$core$String$Index$nullable $tmp377 = *(&local4);
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377.nonnull};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block13; else goto block14;
block14:;
frost$core$Int $tmp380 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block13:;
frost$core$String$Index $tmp383 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp376, ((frost$core$String$Index) $tmp377.value));
frost$core$Bit $tmp384 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp385 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp383, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp384);
frost$core$String* $tmp386 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp374, $tmp385);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local3) = $tmp386;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
goto block9;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp387 = &param0->path;
frost$core$String* $tmp388 = *$tmp387;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local3) = $tmp388;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
goto block9;
block11:;
goto block9;
block9:;
frost$core$String* $tmp389 = *(&local3);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$String* $tmp390 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local5) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp391 = *(&local5);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp392 = frost$core$String$get_end$R$frost$core$String$Index($tmp391);
frost$core$String$Index$nullable $tmp393 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp391, &$s394, $tmp392);
*(&local6) = $tmp393;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp395 = *(&local6);
frost$core$Bit $tmp396 = (frost$core$Bit) {!$tmp395.nonnull};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp398 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$String* $tmp399 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp400 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp398;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
goto block8;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp401 = *(&local5);
frost$core$String$Index$nullable $tmp402 = *(&local6);
frost$core$Bit $tmp403 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp404 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp402, $tmp403);
frost$core$String* $tmp405 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp401, $tmp404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$String* $tmp406 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp407 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp405;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
goto block8;
block8:;
frost$core$String* $tmp408 = *(&local2);
frost$core$String* $tmp409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp408, param1);
frost$io$File* $tmp410 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp360, $tmp409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$String* $tmp411 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$io$File* $tmp412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local0) = ((frost$io$File*) NULL);
return $tmp410;

}
frost$core$Error* frost$io$File$createDirectories$R$frost$core$Error$Q(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:226
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:227
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:227:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp413 = frost$io$File$resolve$frost$core$String$R$frost$io$File(param0, &$s414);
frost$core$String** $tmp415 = &$tmp413->path;
frost$core$String* $tmp416 = *$tmp415;
frost$core$String* $tmp417 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp416);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$String* $tmp418 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local2) = $tmp417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp419 = *(&local2);
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419 == NULL};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp422 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local2) = ((frost$core$String*) NULL);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp423 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp424 = *(&local2);
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424 != NULL};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block6; else goto block7;
block7:;
frost$core$Int $tmp427 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s428, $tmp427, &$s429);
abort(); // unreachable
block6:;
frost$io$File$init$frost$core$String($tmp423, $tmp424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$String* $tmp430 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local2) = ((frost$core$String*) NULL);
*(&local1) = $tmp423;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
goto block3;
block3:;
frost$io$File* $tmp431 = *(&local1);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$io$File* $tmp432 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local3) = $tmp431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:228
frost$io$File* $tmp433 = *(&local3);
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433 != NULL};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block10; else goto block9;
block10:;
frost$io$File* $tmp436 = *(&local3);
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436 != NULL};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block11; else goto block12;
block12:;
frost$core$Int $tmp439 = (frost$core$Int) {228u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s440, $tmp439, &$s441);
abort(); // unreachable
block11:;
frost$core$Bit $tmp442;
frost$io$File$exists$R$frost$core$Bit(&$tmp442, $tmp436);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from File.frost:228:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp443 = $tmp442.value;
bool $tmp444 = !$tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:229
frost$io$File* $tmp447 = *(&local3);
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447 != NULL};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block14; else goto block15;
block15:;
frost$core$Int $tmp450 = (frost$core$Int) {229u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s451, $tmp450, &$s452);
abort(); // unreachable
block14:;
frost$core$Error* $tmp453 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp447);
if ($tmp453 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453 != NULL};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block18; else goto block19;
block19:;
frost$core$Int $tmp456 = (frost$core$Int) {229u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s457, $tmp456, &$s458);
abort(); // unreachable
block18:;
*(&local0) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$io$File* $tmp459 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local3) = ((frost$io$File*) NULL);
frost$io$File* $tmp460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:231
frost$core$Error* $tmp461 = frost$io$File$createDirectory$R$frost$core$Error$Q(param0);
if ($tmp461 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461 != NULL};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block22; else goto block23;
block23:;
frost$core$Int $tmp464 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s465, $tmp464, &$s466);
abort(); // unreachable
block22:;
*(&local0) = $tmp461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$io$File* $tmp467 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local3) = ((frost$io$File*) NULL);
frost$io$File* $tmp468 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$io$File* $tmp469 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local3) = ((frost$io$File*) NULL);
frost$io$File* $tmp470 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Error* $tmp471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:235
frost$core$Error* $tmp472 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Error* $tmp473 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp472;
block2:;
frost$core$Error* $tmp474 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local0) = ((frost$core$Error*) NULL);
goto block24;
block24:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:273
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:274
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp475 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp476 = (frost$core$Int) {0u};
frost$core$Maybe* $tmp477 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int* $tmp478 = &$tmp477->$rawValue;
frost$core$Int $tmp479 = *$tmp478;
int64_t $tmp480 = $tmp479.value;
bool $tmp481 = $tmp480 == 0u;
if ($tmp481) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp482 = (frost$core$Error**) ($tmp477->$data + 0);
frost$core$Error* $tmp483 = *$tmp482;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local0) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:277
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp484 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp485 = (frost$core$Int) {1u};
frost$core$Error* $tmp486 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error($tmp484, $tmp485, $tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Error* $tmp487 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp484;
block3:;
frost$core$Object** $tmp488 = (frost$core$Object**) ($tmp477->$data + 0);
frost$core$Object* $tmp489 = *$tmp488;
$fn491 $tmp490 = ($fn491) ((frost$io$InputStream*) $tmp489)->$class->vtable[14];
frost$core$String* $tmp492 = $tmp490(((frost$io$InputStream*) $tmp489));
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp475, $tmp476, ((frost$core$Object*) $tmp492));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Error* $tmp493 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp475;
block2:;
frost$core$Error* $tmp494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Maybe* frost$io$File$readFully$R$frost$core$Maybe$LTfrost$collections$Array$LTfrost$core$UInt8$GT$GT(frost$io$File* param0) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:289
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:290
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp495 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp496 = (frost$core$Int) {0u};
frost$core$Maybe* $tmp497 = frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(param0);
frost$core$Int* $tmp498 = &$tmp497->$rawValue;
frost$core$Int $tmp499 = *$tmp498;
int64_t $tmp500 = $tmp499.value;
bool $tmp501 = $tmp500 == 0u;
if ($tmp501) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp502 = (frost$core$Error**) ($tmp497->$data + 0);
frost$core$Error* $tmp503 = *$tmp502;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local0) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:293
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp504 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp505 = (frost$core$Int) {1u};
frost$core$Error* $tmp506 = *(&local0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error($tmp504, $tmp505, $tmp506);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Error* $tmp507 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp504;
block3:;
frost$core$Object** $tmp508 = (frost$core$Object**) ($tmp497->$data + 0);
frost$core$Object* $tmp509 = *$tmp508;
$fn511 $tmp510 = ($fn511) ((frost$io$InputStream*) $tmp509)->$class->vtable[15];
frost$collections$Array* $tmp512 = $tmp510(((frost$io$InputStream*) $tmp509));
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp495, $tmp496, ((frost$core$Object*) $tmp512));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Error* $tmp513 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp495;
block2:;
frost$core$Error* $tmp514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local0) = ((frost$core$Error*) NULL);
goto block5;
block5:;

}
frost$core$Error* frost$io$File$write$frost$core$String$R$frost$core$Error$Q(frost$io$File* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:304
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:305
frost$core$Maybe* $tmp515 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param0);
frost$core$Int* $tmp516 = &$tmp515->$rawValue;
frost$core$Int $tmp517 = *$tmp516;
int64_t $tmp518 = $tmp517.value;
bool $tmp519 = $tmp518 == 0u;
if ($tmp519) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp520 = (frost$core$Error**) ($tmp515->$data + 0);
frost$core$Error* $tmp521 = *$tmp520;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local0) = $tmp521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
goto block1;
block3:;
frost$core$Object** $tmp522 = (frost$core$Object**) ($tmp515->$data + 0);
frost$core$Object* $tmp523 = *$tmp522;
$fn525 $tmp524 = ($fn525) ((frost$io$OutputStream*) $tmp523)->$class->vtable[17];
frost$core$Error* $tmp526 = $tmp524(((frost$io$OutputStream*) $tmp523), param1);
if ($tmp526 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526 != NULL};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block7; else goto block8;
block8:;
frost$core$Int $tmp529 = (frost$core$Int) {305u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s530, $tmp529, &$s531);
abort(); // unreachable
block7:;
*(&local0) = $tmp526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:306
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp532 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:309
frost$core$Error* $tmp533 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Error* $tmp534 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp533;
block2:;
frost$core$Error* $tmp535 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local0) = ((frost$core$Error*) NULL);
goto block9;
block9:;

}
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* param0, frost$io$File* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:339
frost$core$String** $tmp536 = &param0->path;
frost$core$String* $tmp537 = *$tmp536;
frost$core$String** $tmp538 = &param1->path;
frost$core$String* $tmp539 = *$tmp538;
frost$core$Bit $tmp540 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp537, $tmp539);
return $tmp540;

}
frost$core$Int frost$io$File$get_hash$R$frost$core$Int(frost$io$File* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:344
frost$core$String** $tmp541 = &param0->path;
frost$core$String* $tmp542 = *$tmp541;
ITable* $tmp543 = ((frost$collections$HashKey*) $tmp542)->$class->itable;
while ($tmp543->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp543 = $tmp543->next;
}
$fn545 $tmp544 = $tmp543->methods[0];
frost$core$Int $tmp546 = $tmp544(((frost$collections$HashKey*) $tmp542));
return $tmp546;

}
frost$core$String* frost$io$File$get_asString$R$frost$core$String(frost$io$File* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:352
frost$core$String** $tmp547 = &param0->path;
frost$core$String* $tmp548 = *$tmp547;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
return $tmp548;

}
void frost$io$File$cleanup(frost$io$File* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:13
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp549 = &param0->path;
frost$core$String* $tmp550 = *$tmp549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
return;

}

