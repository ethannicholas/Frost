#include "frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/collections/List.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/CollectionWriter.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Collection.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$List* p0, frost$core$MutableMethod* p1) {
    frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Object* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(p0, ((org$frostlang$frostc$parser$Token$wrapper*) p1)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$collections$CollectionView* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(p0, p1);

}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int$R$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int p1) {
    org$frostlang$frostc$parser$Token result = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int$R$org$frostlang$frostc$parser$Token(p0, p1);

    org$frostlang$frostc$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int$org$frostlang$frostc$parser$Token(p0, p1, ((org$frostlang$frostc$parser$Token$wrapper*) p2)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int$org$frostlang$frostc$parser$Token(p0, p1, ((org$frostlang$frostc$parser$Token$wrapper*) p2)->value);

}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int$R$org$frostlang$frostc$parser$Token$shim(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p0, frost$core$Int p1) {
    org$frostlang$frostc$parser$Token result = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int$R$org$frostlang$frostc$parser$Token(p0, p1);

    org$frostlang$frostc$parser$Token$wrapper* $tmp3;
    $tmp3 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
    $tmp3->value = result;
    return ((frost$core$Object*) $tmp3);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionView, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$List, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$CollectionWriter, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int$R$org$frostlang$frostc$parser$Token$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Iterable, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$Collection, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int$R$org$frostlang$frostc$parser$Token$shim, frost$collections$ListWriter$removeLast} };

static frost$core$String $s1;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$_frost$collections$ListWriter, { frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$cleanup, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int$R$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int$R$org$frostlang$frostc$parser$Token$shim, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear} };

typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn5)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn6)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn7)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn29)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn30)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn31)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn37)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn38)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn39)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn40)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn53)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn57)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn58)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn59)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn60)(frost$core$Object*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 69, -7407797280999921783, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 169, 6566815167836253361, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 171, -7258549009576074735, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 169, 3703786637711927875, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29", 169, 6566815167836253361, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x63\x6c\x65\x61\x72\x28\x29", 110, 843349341872543768, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:32
_1 = (frost$core$Int) {16u};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int(param0, _1);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int param1) {

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int* _5;
frost$core$Int64 _8;
int64_t _9;
org$frostlang$frostc$parser$Token* _10;
org$frostlang$frostc$parser$Token** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:20
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:40
_5 = &param0->capacity;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:41
_8 = frost$core$Int64$init$frost$core$Int(param1);
_9 = _8.value;
_10 = ((org$frostlang$frostc$parser$Token*) frostAlloc(_9 * 48));
_11 = &param0->data;
*_11 = _10;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$collections$ListView$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
org$frostlang$frostc$parser$Token local1;
frost$collections$CollectionView* _1;
$fn4 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
int64_t _14;
frost$core$Int _15;
int64_t _19;
frost$core$Int _20;
frost$core$Int _23;
frost$collections$Iterable* _26;
frost$collections$Iterable* _27;
$fn5 _28;
frost$collections$Iterator* _29;
frost$collections$Iterator* _30;
frost$collections$Iterator* _32;
$fn6 _33;
frost$core$Bit _34;
bool _35;
frost$collections$Iterator* _37;
$fn7 _38;
frost$core$Object* _39;
org$frostlang$frostc$parser$Token _40;
org$frostlang$frostc$parser$Token _43;
frost$core$Object* _45;
frost$core$Object* _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:48
_1 = ((frost$collections$CollectionView*) param1);
ITable* $tmp8 = _1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_2 = $tmp8->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from SpecializedArray.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_7 = _3.value;
_8 = _4.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_14 = _3.value;
_15 = (frost$core$Int) {_14};
*(&local0) = _15;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_19 = _4.value;
_20 = (frost$core$Int) {_19};
*(&local0) = _20;
goto block1;
block1:;
_23 = *(&local0);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$core$Int(param0, _23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:49
_26 = ((frost$collections$Iterable*) param1);
_27 = _26;
ITable* $tmp9 = _27->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp9 = $tmp9->next;
}
_28 = $tmp9->methods[0];
_29 = _28(_27);
_30 = _29;
goto block4;
block4:;
_32 = _30;
ITable* $tmp10 = _32->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_33 = $tmp10->methods[0];
_34 = _33(_32);
_35 = _34.value;
if (_35) goto block6; else goto block5;
block5:;
_37 = _30;
ITable* $tmp11 = _37->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_38 = $tmp11->methods[1];
_39 = _38(_37);
_40 = ((org$frostlang$frostc$parser$Token$wrapper*) _39)->value;
*(&local1) = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:50
_43 = *(&local1);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(param0, _43);
_45 = _39;
frost$core$Frost$unref$frost$core$Object$Q(_45);
goto block4;
block6:;
_48 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_48);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$parser$Token$GT$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, org$frostlang$frostc$parser$Token* param1, frost$core$Int param2) {

frost$core$Int _1;
frost$core$Int* _2;
org$frostlang$frostc$parser$Token** _5;
frost$core$Int* _8;
frost$core$Int* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:20
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:56
_5 = &param0->data;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:57
_8 = &param0->_count;
*_8 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:58
_11 = &param0->capacity;
*_11 = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

org$frostlang$frostc$parser$Token** _1;
org$frostlang$frostc$parser$Token* _2;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:63
_1 = &param0->data;
_2 = *_1;
frostFree(_2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:62
_5 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_5);
return;

}
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int param1) {

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn12 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
org$frostlang$frostc$parser$Token** _20;
org$frostlang$frostc$parser$Token* _21;
frost$core$Int64 _22;
int64_t _23;
org$frostlang$frostc$parser$Token _24;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp13 = _7->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_8 = $tmp13->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _16, &$s15);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_20 = &param0->data;
_21 = *_20;
_22 = frost$core$Int64$init$frost$core$Int(param1);
_23 = _22.value;
_24 = _21[_23];
return _24;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDXEQ$frost$core$Int$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int param1, org$frostlang$frostc$parser$Token param2) {

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn16 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
org$frostlang$frostc$parser$Token** _20;
org$frostlang$frostc$parser$Token* _21;
frost$core$Int64 _22;
int64_t _23;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp17 = _7->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
_8 = $tmp17->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _16, &$s19);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:73
_20 = &param0->data;
_21 = *_20;
_22 = frost$core$Int64$init$frost$core$Int(param1);
_23 = _22.value;
_21[_23] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$insert$frost$core$Int$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int param1, org$frostlang$frostc$parser$Token param2) {

frost$core$Int local0;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn20 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$collections$CollectionView* _20;
$fn21 _21;
frost$core$Int _22;
frost$core$Int _23;
int64_t _24;
int64_t _25;
int64_t _26;
frost$core$Int _27;
frost$collections$CollectionView* _30;
$fn22 _31;
frost$core$Int _32;
frost$core$Int _33;
frost$core$Bit _34;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _35;
frost$core$Int _36;
frost$core$Int _38;
frost$core$Int _39;
int64_t _42;
int64_t _43;
frost$core$Int _44;
frost$core$Bit _46;
bool _47;
frost$core$Int _48;
int64_t _49;
int64_t _50;
bool _51;
frost$core$Bit _52;
bool _53;
int64_t _56;
int64_t _57;
bool _58;
frost$core$Bit _59;
bool _60;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
org$frostlang$frostc$parser$Token** _82;
org$frostlang$frostc$parser$Token* _83;
frost$core$Int _84;
frost$core$Int64 _85;
org$frostlang$frostc$parser$Token** _86;
org$frostlang$frostc$parser$Token* _87;
frost$core$Int _88;
frost$core$Int _89;
int64_t _90;
int64_t _91;
int64_t _92;
frost$core$Int _93;
frost$core$Int64 _94;
int64_t _95;
org$frostlang$frostc$parser$Token _96;
int64_t _97;
frost$core$Int _100;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _128;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _134;
int64_t _136;
int64_t _137;
int64_t _138;
frost$core$Int _139;
frost$core$Int* _143;
frost$core$Int _144;
frost$core$Int _145;
int64_t _146;
int64_t _147;
int64_t _148;
frost$core$Int _149;
frost$core$Int* _150;
org$frostlang$frostc$parser$Token** _153;
org$frostlang$frostc$parser$Token* _154;
frost$core$Int64 _155;
int64_t _156;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp23 = _7->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
_8 = $tmp23->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 <= _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _16, &$s25);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:78
_20 = ((frost$collections$CollectionView*) param0);
ITable* $tmp26 = _20->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
_21 = $tmp26->methods[0];
_22 = _21(_20);
_23 = (frost$core$Int) {1u};
_24 = _22.value;
_25 = _23.value;
_26 = _24 + _25;
_27 = (frost$core$Int) {_26};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int(param0, _27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:79
_30 = ((frost$collections$CollectionView*) param0);
ITable* $tmp27 = _30->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
_31 = $tmp27->methods[0];
_32 = _31(_30);
_33 = (frost$core$Int) {18446744073709551615u};
_34 = (frost$core$Bit) {false};
_35 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_32, param1, _33, _34);
_36 = _35.start;
*(&local0) = _36;
_38 = _35.end;
_39 = _35.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from SpecializedArray.frost:79:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_42 = _39.value;
_43 = -_42;
_44 = (frost$core$Int) {_43};
_46 = _35.inclusive;
_47 = _46.value;
_48 = (frost$core$Int) {0u};
_49 = _39.value;
_50 = _48.value;
_51 = _49 >= _50;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block8; else goto block9;
block8:;
if (_47) goto block10; else goto block11;
block10:;
_56 = _36.value;
_57 = _38.value;
_58 = _56 <= _57;
_59 = (frost$core$Bit) {_58};
_60 = _59.value;
if (_60) goto block5; else goto block6;
block11:;
_62 = _36.value;
_63 = _38.value;
_64 = _62 < _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block5; else goto block6;
block9:;
if (_47) goto block12; else goto block13;
block12:;
_69 = _36.value;
_70 = _38.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block5; else goto block6;
block13:;
_75 = _36.value;
_76 = _38.value;
_77 = _75 > _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:80
_82 = &param0->data;
_83 = *_82;
_84 = *(&local0);
_85 = frost$core$Int64$init$frost$core$Int(_84);
_86 = &param0->data;
_87 = *_86;
_88 = *(&local0);
_89 = (frost$core$Int) {1u};
_90 = _88.value;
_91 = _89.value;
_92 = _90 - _91;
_93 = (frost$core$Int) {_92};
_94 = frost$core$Int64$init$frost$core$Int(_93);
_95 = _94.value;
_96 = _87[_95];
_97 = _85.value;
_83[_97] = _96;
_100 = *(&local0);
if (_53) goto block15; else goto block16;
block15:;
_102 = _38.value;
_103 = _100.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
if (_47) goto block17; else goto block18;
block17:;
_107 = _105.value;
_108 = _39.value;
_109 = _107 >= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block14; else goto block6;
block18:;
_113 = _105.value;
_114 = _39.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block14; else goto block6;
block16:;
_119 = _100.value;
_120 = _38.value;
_121 = _119 - _120;
_122 = (frost$core$Int) {_121};
if (_47) goto block19; else goto block20;
block19:;
_124 = _122.value;
_125 = _44.value;
_126 = _124 >= _125;
_127 = (frost$core$Bit) {_126};
_128 = _127.value;
if (_128) goto block14; else goto block6;
block20:;
_130 = _122.value;
_131 = _44.value;
_132 = _130 > _131;
_133 = (frost$core$Bit) {_132};
_134 = _133.value;
if (_134) goto block14; else goto block6;
block14:;
_136 = _100.value;
_137 = _39.value;
_138 = _136 + _137;
_139 = (frost$core$Int) {_138};
*(&local0) = _139;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:82
_143 = &param0->_count;
_144 = *_143;
_145 = (frost$core$Int) {1u};
_146 = _144.value;
_147 = _145.value;
_148 = _146 + _147;
_149 = (frost$core$Int) {_148};
_150 = &param0->_count;
*_150 = _149;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:83
_153 = &param0->data;
_154 = *_153;
_155 = frost$core$Int64$init$frost$core$Int(param1);
_156 = _155.value;
_154[_156] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, org$frostlang$frostc$parser$Token param1) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
int64_t _6;
frost$core$Int _7;
org$frostlang$frostc$parser$Token** _10;
org$frostlang$frostc$parser$Token* _11;
frost$core$Int* _12;
frost$core$Int _13;
frost$core$Int64 _14;
int64_t _15;
frost$core$Int* _18;
frost$core$Int _19;
frost$core$Int _20;
int64_t _21;
int64_t _22;
int64_t _23;
frost$core$Int _24;
frost$core$Int* _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:88
_1 = &param0->_count;
_2 = *_1;
_3 = (frost$core$Int) {1u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 + _5;
_7 = (frost$core$Int) {_6};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int(param0, _7);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:89
_10 = &param0->data;
_11 = *_10;
_12 = &param0->_count;
_13 = *_12;
_14 = frost$core$Int64$init$frost$core$Int(_13);
_15 = _14.value;
_11[_15] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:90
_18 = &param0->_count;
_19 = *_18;
_20 = (frost$core$Int) {1u};
_21 = _19.value;
_22 = _20.value;
_23 = _21 + _22;
_24 = (frost$core$Int) {_23};
_25 = &param0->_count;
*_25 = _24;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$collections$CollectionView* param1) {

org$frostlang$frostc$parser$Token local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$collections$CollectionView* _3;
$fn28 _4;
frost$core$Int _5;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$collections$Iterable* _12;
frost$collections$Iterable* _13;
$fn29 _14;
frost$collections$Iterator* _15;
frost$collections$Iterator* _16;
frost$collections$Iterator* _18;
$fn30 _19;
frost$core$Bit _20;
bool _21;
frost$collections$Iterator* _23;
$fn31 _24;
frost$core$Object* _25;
org$frostlang$frostc$parser$Token _26;
org$frostlang$frostc$parser$Token** _29;
org$frostlang$frostc$parser$Token* _30;
frost$core$Int* _31;
frost$core$Int _32;
frost$core$Int64 _33;
org$frostlang$frostc$parser$Token _34;
int64_t _35;
frost$core$Int* _38;
frost$core$Int _39;
frost$core$Int _40;
int64_t _41;
int64_t _42;
int64_t _43;
frost$core$Int _44;
frost$core$Int* _45;
frost$core$Object* _47;
frost$core$Object* _50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:95
_1 = &param0->_count;
_2 = *_1;
_3 = param1;
ITable* $tmp32 = _3->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp32 = $tmp32->next;
}
_4 = $tmp32->methods[0];
_5 = _4(_3);
_6 = _2.value;
_7 = _5.value;
_8 = _6 + _7;
_9 = (frost$core$Int) {_8};
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int(param0, _9);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:96
_12 = ((frost$collections$Iterable*) param1);
_13 = _12;
ITable* $tmp33 = _13->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp33 = $tmp33->next;
}
_14 = $tmp33->methods[0];
_15 = _14(_13);
_16 = _15;
goto block1;
block1:;
_18 = _16;
ITable* $tmp34 = _18->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp34 = $tmp34->next;
}
_19 = $tmp34->methods[0];
_20 = _19(_18);
_21 = _20.value;
if (_21) goto block3; else goto block2;
block2:;
_23 = _16;
ITable* $tmp35 = _23->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
_24 = $tmp35->methods[1];
_25 = _24(_23);
_26 = ((org$frostlang$frostc$parser$Token$wrapper*) _25)->value;
*(&local0) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:97
_29 = &param0->data;
_30 = *_29;
_31 = &param0->_count;
_32 = *_31;
_33 = frost$core$Int64$init$frost$core$Int(_32);
_34 = *(&local0);
_35 = _33.value;
_30[_35] = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:98
_38 = &param0->_count;
_39 = *_38;
_40 = (frost$core$Int) {1u};
_41 = _39.value;
_42 = _40.value;
_43 = _41 + _42;
_44 = (frost$core$Int) {_43};
_45 = &param0->_count;
*_45 = _44;
_47 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_47);
goto block1;
block3:;
_50 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_50);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$ensureCapacity$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$Int* _14;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int* _25;
frost$core$Int _26;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
int64_t _41;
frost$core$Int _42;
int64_t _46;
frost$core$Int _47;
frost$core$Int _50;
frost$core$Int* _51;
frost$core$Int* _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
frost$core$Int* _64;
frost$core$Int _65;
frost$core$Int _66;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$Int* _71;
org$frostlang$frostc$parser$Token** _75;
org$frostlang$frostc$parser$Token* _76;
frost$core$Int _77;
frost$core$Int64 _78;
frost$core$Int* _79;
frost$core$Int _80;
frost$core$Int64 _81;
int64_t _82;
int64_t _83;
org$frostlang$frostc$parser$Token* _84;
org$frostlang$frostc$parser$Token** _85;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:103
_1 = &param0->capacity;
_2 = *_1;
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s36, _10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:104
_14 = &param0->capacity;
_15 = *_14;
_16 = param1.value;
_17 = _15.value;
_18 = _16 <= _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:105
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:107
_25 = &param0->capacity;
_26 = *_25;
*(&local0) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:108
_29 = &param0->capacity;
_30 = *_29;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from SpecializedArray.frost:108:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_34 = _30.value;
_35 = _31.value;
_36 = _34 > _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_41 = _30.value;
_42 = (frost$core$Int) {_41};
*(&local1) = _42;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_46 = _31.value;
_47 = (frost$core$Int) {_46};
*(&local1) = _47;
goto block5;
block5:;
_50 = *(&local1);
_51 = &param0->capacity;
*_51 = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:109
goto block8;
block8:;
_55 = &param0->capacity;
_56 = *_55;
_57 = _56.value;
_58 = param1.value;
_59 = _57 < _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:110
_64 = &param0->capacity;
_65 = *_64;
_66 = (frost$core$Int) {2u};
_67 = _65.value;
_68 = _66.value;
_69 = _67 * _68;
_70 = (frost$core$Int) {_69};
_71 = &param0->capacity;
*_71 = _70;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:112
_75 = &param0->data;
_76 = *_75;
_77 = *(&local0);
_78 = frost$core$Int64$init$frost$core$Int(_77);
_79 = &param0->capacity;
_80 = *_79;
_81 = frost$core$Int64$init$frost$core$Int(_80);
_82 = _78.value;
_83 = _81.value;
_84 = (org$frostlang$frostc$parser$Token*) frostRealloc(_76, _82 * 48, _83 * 48);
_85 = &param0->data;
*_85 = _84;
return;

}
frost$core$Int frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_count$R$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:117
_1 = &param0->_count;
_2 = *_1;
return _2;

}
org$frostlang$frostc$parser$Token frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0, frost$core$Int param1) {

org$frostlang$frostc$parser$Token local0;
frost$core$Int local1;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn37 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$core$Int _21;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$collections$CollectionView* _28;
$fn38 _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
org$frostlang$frostc$parser$Token** _41;
org$frostlang$frostc$parser$Token* _42;
frost$core$Int64 _43;
int64_t _44;
org$frostlang$frostc$parser$Token _45;
frost$core$Int* _49;
frost$core$Int _50;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int _55;
frost$core$Bit _56;
frost$core$Range$LTfrost$core$Int$GT _57;
frost$core$Int _58;
frost$core$Int _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _63;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _78;
frost$core$Int _79;
frost$core$Int _80;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int _84;
frost$core$Int _86;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _91;
frost$collections$CollectionView* _93;
$fn39 _94;
frost$core$Int _95;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int _102;
org$frostlang$frostc$parser$Token** _106;
org$frostlang$frostc$parser$Token* _107;
frost$core$Int64 _108;
int64_t _109;
org$frostlang$frostc$parser$Token _110;
frost$core$Int _113;
int64_t _114;
int64_t _115;
bool _116;
frost$core$Bit _117;
bool _118;
frost$collections$CollectionView* _120;
$fn40 _121;
frost$core$Int _122;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
frost$core$Int _129;
org$frostlang$frostc$parser$Token** _133;
org$frostlang$frostc$parser$Token* _134;
frost$core$Int64 _135;
int64_t _136;
frost$core$Int _140;
int64_t _141;
int64_t _142;
int64_t _143;
frost$core$Int _144;
int64_t _146;
int64_t _147;
bool _148;
frost$core$Bit _149;
bool _150;
int64_t _152;
int64_t _153;
bool _154;
frost$core$Bit _155;
bool _156;
int64_t _158;
int64_t _159;
int64_t _160;
frost$core$Int _161;
frost$core$Int* _165;
frost$core$Int _166;
frost$core$Int _167;
int64_t _168;
int64_t _169;
int64_t _170;
frost$core$Int _171;
frost$core$Int* _172;
org$frostlang$frostc$parser$Token** _175;
org$frostlang$frostc$parser$Token* _176;
frost$core$Int* _177;
frost$core$Int _178;
frost$core$Int64 _179;
org$frostlang$frostc$parser$Token _181;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp41 = _7->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_8 = $tmp41->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _16, &$s43);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:122
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from SpecializedArray.frost:122:27
_21 = (frost$core$Int) {0u};
_22 = param1.value;
_23 = _21.value;
_24 = _22 >= _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block7; else goto block6;
block7:;
_28 = ((frost$collections$CollectionView*) param0);
ITable* $tmp44 = _28->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_29 = $tmp44->methods[0];
_30 = _29(_28);
_31 = param1.value;
_32 = _30.value;
_33 = _31 < _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block5; else goto block6;
block6:;
_37 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _37, &$s46);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_41 = &param0->data;
_42 = *_41;
_43 = frost$core$Int64$init$frost$core$Int(param1);
_44 = _43.value;
_45 = _42[_44];
*(&local0) = _45;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:123
_49 = &param0->_count;
_50 = *_49;
_51 = (frost$core$Int) {1u};
_52 = _50.value;
_53 = _51.value;
_54 = _52 - _53;
_55 = (frost$core$Int) {_54};
_56 = (frost$core$Bit) {false};
_57 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, _55, _56);
_58 = _57.min;
*(&local1) = _58;
_60 = _57.max;
_61 = _57.inclusive;
_62 = _61.value;
_63 = (frost$core$Int) {1u};
if (_62) goto block11; else goto block12;
block11:;
_65 = _58.value;
_66 = _60.value;
_67 = _65 <= _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block8; else goto block9;
block12:;
_71 = _58.value;
_72 = _60.value;
_73 = _71 < _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:124
_78 = *(&local1);
_79 = *(&local1);
_80 = (frost$core$Int) {1u};
_81 = _79.value;
_82 = _80.value;
_83 = _81 + _82;
_84 = (frost$core$Int) {_83};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from SpecializedArray.frost:124:28
_86 = (frost$core$Int) {0u};
_87 = _84.value;
_88 = _86.value;
_89 = _87 >= _88;
_90 = (frost$core$Bit) {_89};
_91 = _90.value;
if (_91) goto block16; else goto block15;
block16:;
_93 = ((frost$collections$CollectionView*) param0);
ITable* $tmp47 = _93->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_94 = $tmp47->methods[0];
_95 = _94(_93);
_96 = _84.value;
_97 = _95.value;
_98 = _96 < _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block14; else goto block15;
block15:;
_102 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _102, &$s49);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_106 = &param0->data;
_107 = *_106;
_108 = frost$core$Int64$init$frost$core$Int(_84);
_109 = _108.value;
_110 = _107[_109];
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[]:=(index:frost.core.Int, value:org.frostlang.frostc.parser.Token) from SpecializedArray.frost:124:17
_113 = (frost$core$Int) {0u};
_114 = _78.value;
_115 = _113.value;
_116 = _114 >= _115;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
if (_118) goto block20; else goto block19;
block20:;
_120 = ((frost$collections$CollectionView*) param0);
ITable* $tmp50 = _120->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
_121 = $tmp50->methods[0];
_122 = _121(_120);
_123 = _78.value;
_124 = _122.value;
_125 = _123 < _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block18; else goto block19;
block19:;
_129 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _129, &$s52);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:73
_133 = &param0->data;
_134 = *_133;
_135 = frost$core$Int64$init$frost$core$Int(_78);
_136 = _135.value;
_134[_136] = _110;
_140 = *(&local1);
_141 = _60.value;
_142 = _140.value;
_143 = _141 - _142;
_144 = (frost$core$Int) {_143};
if (_62) goto block22; else goto block23;
block22:;
_146 = _144.value;
_147 = _63.value;
_148 = _146 >= _147;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block21; else goto block9;
block23:;
_152 = _144.value;
_153 = _63.value;
_154 = _152 > _153;
_155 = (frost$core$Bit) {_154};
_156 = _155.value;
if (_156) goto block21; else goto block9;
block21:;
_158 = _140.value;
_159 = _63.value;
_160 = _158 + _159;
_161 = (frost$core$Int) {_160};
*(&local1) = _161;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:126
_165 = &param0->_count;
_166 = *_165;
_167 = (frost$core$Int) {1u};
_168 = _166.value;
_169 = _167.value;
_170 = _168 - _169;
_171 = (frost$core$Int) {_170};
_172 = &param0->_count;
*_172 = _171;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:127
_175 = &param0->data;
_176 = *_175;
_177 = &param0->_count;
_178 = *_177;
_179 = frost$core$Int64$init$frost$core$Int(_178);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:128
_181 = *(&local0);
return _181;

}
void frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$Int local0;
frost$core$Int _18;
frost$core$Int* _19;
frost$core$Int _22;
frost$core$Int* _23;
frost$core$Int _24;
frost$core$Bit _25;
frost$core$Range$LTfrost$core$Int$GT _26;
frost$core$Int _27;
frost$core$Int _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _32;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _44;
org$frostlang$frostc$parser$Token** _47;
org$frostlang$frostc$parser$Token* _48;
frost$core$Int _49;
frost$core$Int64 _50;
frost$core$Int _52;
int64_t _53;
int64_t _54;
int64_t _55;
frost$core$Int _56;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
int64_t _70;
int64_t _71;
int64_t _72;
frost$core$Int _73;
frost$collections$CollectionView* _0;
$fn53 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _14;
frost$core$Int _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:133
_18 = (frost$core$Int) {0u};
_19 = &param0->_count;
*_19 = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
_22 = (frost$core$Int) {0u};
_23 = &param0->capacity;
_24 = *_23;
_25 = (frost$core$Bit) {false};
_26 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_22, _24, _25);
_27 = _26.min;
*(&local0) = _27;
_29 = _26.max;
_30 = _26.inclusive;
_31 = _30.value;
_32 = (frost$core$Int) {1u};
if (_31) goto block8; else goto block9;
block8:;
_34 = _27.value;
_35 = _29.value;
_36 = _34 <= _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block5; else goto block6;
block9:;
_40 = _27.value;
_41 = _29.value;
_42 = _40 < _41;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
_47 = &param0->data;
_48 = *_47;
_49 = *(&local0);
_50 = frost$core$Int64$init$frost$core$Int(_49);
_52 = *(&local0);
_53 = _29.value;
_54 = _52.value;
_55 = _53 - _54;
_56 = (frost$core$Int) {_55};
if (_31) goto block11; else goto block12;
block11:;
_58 = _56.value;
_59 = _32.value;
_60 = _58 >= _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block10; else goto block6;
block12:;
_64 = _56.value;
_65 = _32.value;
_66 = _64 > _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block10; else goto block6;
block10:;
_70 = _52.value;
_71 = _32.value;
_72 = _70 + _71;
_73 = (frost$core$Int) {_72};
*(&local0) = _73;
goto block5;
block6:;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp54 = _0->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
_1 = $tmp54->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_14 = _9.value;
if (_14) goto block3; else goto block4;
block3:;
return;
block4:;
_11 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _11, &$s56);
abort(); // unreachable

}
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$get_asString$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$MutableString* _13;
frost$core$Object* _17;
frost$core$String* _19;
frost$core$Object* _20;
frost$collections$Iterable* _24;
frost$collections$Iterable* _25;
$fn57 _26;
frost$collections$Iterator* _27;
frost$collections$Iterator* _28;
frost$collections$Iterator* _30;
$fn58 _31;
frost$core$Bit _32;
bool _33;
frost$collections$Iterator* _35;
$fn59 _36;
frost$core$Object* _37;
org$frostlang$frostc$parser$Token _38;
frost$core$MutableString* _41;
frost$core$String* _42;
frost$core$Object* _45;
frost$core$String* _47;
frost$core$Object* _48;
org$frostlang$frostc$parser$Token _52;
frost$core$Bit _53;
bool _54;
frost$core$MutableString* _57;
org$frostlang$frostc$parser$Token _58;
frost$core$Object* _59;
$fn60 _62;
frost$core$String* _63;
frost$core$Object* _65;
frost$core$Object* _68;
frost$core$MutableString* _73;
frost$core$Object* _76;
frost$core$Object* _79;
frost$core$MutableString* _82;
frost$core$MutableString* _85;
frost$core$String* _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$String* _91;
frost$core$Object* _92;
frost$core$MutableString* _95;
frost$core$Object* _96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:141
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:142
_13 = *(&local0);
frost$core$MutableString$append$frost$core$String(_13, &$s61);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:143
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) &$s62);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = &$s63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:144
_24 = ((frost$collections$Iterable*) param0);
_25 = _24;
ITable* $tmp64 = _25->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp64 = $tmp64->next;
}
_26 = $tmp64->methods[0];
_27 = _26(_25);
_28 = _27;
goto block1;
block1:;
_30 = _28;
ITable* $tmp65 = _30->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
_31 = $tmp65->methods[0];
_32 = _31(_30);
_33 = _32.value;
if (_33) goto block3; else goto block2;
block2:;
_35 = _28;
ITable* $tmp66 = _35->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
_36 = $tmp66->methods[1];
_37 = _36(_35);
_38 = ((org$frostlang$frostc$parser$Token$wrapper*) _37)->value;
*(&local2) = _38;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:145
_41 = *(&local0);
_42 = *(&local1);
frost$core$MutableString$append$frost$core$String(_41, _42);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:146
_45 = ((frost$core$Object*) &$s67);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local1);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local1) = &$s68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:147
_52 = *(&local2);
_53 = (frost$core$Bit) {true};
_54 = _53.value;
if (_54) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:148
_57 = *(&local0);
_58 = *(&local2);
org$frostlang$frostc$parser$Token$wrapper* $tmp69;
$tmp69 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp69->value = _58;
_59 = ((frost$core$Object*) $tmp69);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SpecializedArray.frost:148:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_62 = ($fn70) _59->$class->vtable[0];
_63 = _62(_59);
frost$core$MutableString$append$frost$core$String(_57, _63);
_65 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_68 = _59;
frost$core$Frost$unref$frost$core$Object$Q(_68);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:151
_73 = *(&local0);
frost$core$MutableString$append$frost$core$String(_73, &$s71);
goto block5;
block5:;
_76 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_76);
goto block1;
block3:;
_79 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_79);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:154
_82 = *(&local0);
frost$core$MutableString$append$frost$core$String(_82, &$s72);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:155
_85 = *(&local0);
_86 = frost$core$MutableString$finish$R$frost$core$String(_85);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = *(&local1);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local1) = ((frost$core$String*) NULL);
_95 = *(&local0);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local0) = ((frost$core$MutableString*) NULL);
return _86;

}

