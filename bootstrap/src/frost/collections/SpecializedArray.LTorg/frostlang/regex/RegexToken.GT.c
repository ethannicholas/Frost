#include "frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionWriter.h"
#include "org/frostlang/regex/RegexToken.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/List.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Int.h"
#include "frost/collections/Collection.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/MutableString.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Object* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(p0, ((org$frostlang$regex$RegexToken$wrapper*) p1)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$collections$CollectionView* p1) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(p0, p1);

}
__attribute__((weak)) void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$List* p0, frost$core$MutableMethod* p1) {
    frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken(p0, p1, ((org$frostlang$regex$RegexToken$wrapper*) p2)->value);

}
__attribute__((weak)) void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int p1, frost$core$Object* p2) {
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken(p0, p1, ((org$frostlang$regex$RegexToken$wrapper*) p2)->value);

}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int p1) {
    org$frostlang$regex$RegexToken result = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken(p0, p1);

    org$frostlang$regex$RegexToken$wrapper* $tmp2;
    $tmp2 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int p1) {
    org$frostlang$regex$RegexToken result = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken(p0, p1);

    org$frostlang$regex$RegexToken$wrapper* $tmp3;
    $tmp3 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp3->value = result;
    return ((frost$core$Object*) $tmp3);
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$ListWriter$removeLast} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView, { } };

static frost$core$String $s1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_asString$R$frost$core$String, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 66, -1445978142206358855, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 163, 1679332094959886875, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 165, 3750155075890093371, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 163, 8653844651537589019, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 163, 1679332094959886875, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x63\x6c\x65\x61\x72\x28\x29", 107, -5019524807047093654, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init(void* rawSelf) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:32
_1 = (frost$core$Int) {16u};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int(param0, _1);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int(void* rawSelf, frost$core$Int param1) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$unsafe$Pointer local0;
frost$unsafe$Pointer local1;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int* _5;
int64_t _10;
int64_t _11;
int64_t _12;
int64_t* _15;
frost$unsafe$Pointer _17;
frost$unsafe$Pointer _20;
frost$unsafe$Pointer* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:20
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:40
_5 = &param0->capacity;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:41
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from SpecializedArray.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_10 = param1.value;
_11 = _10 * 48u;
_12 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_11);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_15 = &(&local1)->value;
*_15 = _12;
_17 = *(&local1);
*(&local0) = _17;
_20 = *(&local0);
_22 = &param0->data;
*_22 = _20;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$collections$ListView$LTorg$frostlang$regex$RegexToken$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$core$Int local0;
org$frostlang$regex$RegexToken local1;
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
$fn5 _27;
frost$collections$Iterator* _28;
$fn6 _30;
frost$core$Bit _31;
bool _32;
$fn7 _34;
frost$core$Object* _35;
org$frostlang$regex$RegexToken _36;
org$frostlang$regex$RegexToken _39;
frost$core$Object* _41;
frost$core$Object* _44;
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
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int(param0, _23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:49
_26 = ((frost$collections$Iterable*) param1);
ITable* $tmp9 = _26->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp9 = $tmp9->next;
}
_27 = $tmp9->methods[0];
_28 = _27(_26);
goto block4;
block4:;
ITable* $tmp10 = _28->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_30 = $tmp10->methods[0];
_31 = _30(_28);
_32 = _31.value;
if (_32) goto block6; else goto block5;
block5:;
ITable* $tmp11 = _28->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_34 = $tmp11->methods[1];
_35 = _34(_28);
_36 = ((org$frostlang$regex$RegexToken$wrapper*) _35)->value;
*(&local1) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:50
_39 = *(&local1);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(param0, _39);
_41 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_41);
goto block4;
block6:;
_44 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_44);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$unsafe$Pointer$LTorg$frostlang$regex$RegexToken$GT$frost$core$Int(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$unsafe$Pointer* _5;
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
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup(void* rawSelf) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$unsafe$Pointer* _1;
frost$unsafe$Pointer _2;
int64_t _5;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:63
_1 = &param0->data;
_2 = *_1;
// begin inline call to method frost.unsafe.Pointer.destroy() from SpecializedArray.frost:63:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:132
_5 = _2.value;
frost$core$Frost$destroy$builtin_int(_5);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:62
_9 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_9);
return;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int param1) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

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
frost$unsafe$Pointer* _20;
frost$unsafe$Pointer _21;
int64_t _22;
frost$core$Int64 _23;
int64_t _24;
org$frostlang$regex$RegexToken _25;
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
_22 = _21.value;
_23 = frost$core$Int64$init$frost$core$Int(param1);
_24 = _23.value;
_25 = ((org$frostlang$regex$RegexToken*)_22)[_24];
return _25;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int param1, org$frostlang$regex$RegexToken param2) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

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
frost$unsafe$Pointer* _20;
frost$unsafe$Pointer _21;
int64_t _22;
frost$core$Int64 _23;
int64_t _24;
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
_22 = _21.value;
_23 = frost$core$Int64$init$frost$core$Int(param1);
_24 = _23.value;
((org$frostlang$regex$RegexToken*)_22)[_24] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int param1, org$frostlang$regex$RegexToken param2) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

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
frost$unsafe$Pointer* _82;
frost$unsafe$Pointer _83;
int64_t _84;
frost$core$Int _85;
frost$core$Int64 _86;
frost$unsafe$Pointer* _87;
frost$unsafe$Pointer _88;
int64_t _89;
frost$core$Int _90;
frost$core$Int _91;
int64_t _92;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$core$Int64 _96;
int64_t _97;
org$frostlang$regex$RegexToken _98;
int64_t _99;
frost$core$Int _102;
int64_t _104;
int64_t _105;
int64_t _106;
frost$core$Int _107;
int64_t _109;
int64_t _110;
bool _111;
frost$core$Bit _112;
bool _113;
int64_t _115;
int64_t _116;
bool _117;
frost$core$Bit _118;
bool _119;
int64_t _121;
int64_t _122;
int64_t _123;
frost$core$Int _124;
int64_t _126;
int64_t _127;
bool _128;
frost$core$Bit _129;
bool _130;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
int64_t _138;
int64_t _139;
int64_t _140;
frost$core$Int _141;
frost$core$Int* _145;
frost$core$Int _146;
frost$core$Int _147;
int64_t _148;
int64_t _149;
int64_t _150;
frost$core$Int _151;
frost$core$Int* _152;
frost$unsafe$Pointer* _155;
frost$unsafe$Pointer _156;
int64_t _157;
frost$core$Int64 _158;
int64_t _159;
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
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(param0, _27);
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
_84 = _83.value;
_85 = *(&local0);
_86 = frost$core$Int64$init$frost$core$Int(_85);
_87 = &param0->data;
_88 = *_87;
_89 = _88.value;
_90 = *(&local0);
_91 = (frost$core$Int) {1u};
_92 = _90.value;
_93 = _91.value;
_94 = _92 - _93;
_95 = (frost$core$Int) {_94};
_96 = frost$core$Int64$init$frost$core$Int(_95);
_97 = _96.value;
_98 = ((org$frostlang$regex$RegexToken*)_89)[_97];
_99 = _86.value;
((org$frostlang$regex$RegexToken*)_84)[_99] = _98;
_102 = *(&local0);
if (_53) goto block15; else goto block16;
block15:;
_104 = _38.value;
_105 = _102.value;
_106 = _104 - _105;
_107 = (frost$core$Int) {_106};
if (_47) goto block17; else goto block18;
block17:;
_109 = _107.value;
_110 = _39.value;
_111 = _109 >= _110;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block14; else goto block6;
block18:;
_115 = _107.value;
_116 = _39.value;
_117 = _115 > _116;
_118 = (frost$core$Bit) {_117};
_119 = _118.value;
if (_119) goto block14; else goto block6;
block16:;
_121 = _102.value;
_122 = _38.value;
_123 = _121 - _122;
_124 = (frost$core$Int) {_123};
if (_47) goto block19; else goto block20;
block19:;
_126 = _124.value;
_127 = _44.value;
_128 = _126 >= _127;
_129 = (frost$core$Bit) {_128};
_130 = _129.value;
if (_130) goto block14; else goto block6;
block20:;
_132 = _124.value;
_133 = _44.value;
_134 = _132 > _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block14; else goto block6;
block14:;
_138 = _102.value;
_139 = _39.value;
_140 = _138 + _139;
_141 = (frost$core$Int) {_140};
*(&local0) = _141;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:82
_145 = &param0->_count;
_146 = *_145;
_147 = (frost$core$Int) {1u};
_148 = _146.value;
_149 = _147.value;
_150 = _148 + _149;
_151 = (frost$core$Int) {_150};
_152 = &param0->_count;
*_152 = _151;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:83
_155 = &param0->data;
_156 = *_155;
_157 = _156.value;
_158 = frost$core$Int64$init$frost$core$Int(param1);
_159 = _158.value;
((org$frostlang$regex$RegexToken*)_157)[_159] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(void* rawSelf, org$frostlang$regex$RegexToken param1) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
int64_t _6;
frost$core$Int _7;
frost$unsafe$Pointer* _10;
frost$unsafe$Pointer _11;
int64_t _12;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int64 _15;
int64_t _16;
frost$core$Int* _19;
frost$core$Int _20;
frost$core$Int _21;
int64_t _22;
int64_t _23;
int64_t _24;
frost$core$Int _25;
frost$core$Int* _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:88
_1 = &param0->_count;
_2 = *_1;
_3 = (frost$core$Int) {1u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 + _5;
_7 = (frost$core$Int) {_6};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(param0, _7);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:89
_10 = &param0->data;
_11 = *_10;
_12 = _11.value;
_13 = &param0->_count;
_14 = *_13;
_15 = frost$core$Int64$init$frost$core$Int(_14);
_16 = _15.value;
((org$frostlang$regex$RegexToken*)_12)[_16] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:90
_19 = &param0->_count;
_20 = *_19;
_21 = (frost$core$Int) {1u};
_22 = _20.value;
_23 = _21.value;
_24 = _22 + _23;
_25 = (frost$core$Int) {_24};
_26 = &param0->_count;
*_26 = _25;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(void* rawSelf, frost$collections$CollectionView* param1) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

org$frostlang$regex$RegexToken local0;
frost$core$Int* _1;
frost$core$Int _2;
$fn28 _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$collections$Iterable* _11;
$fn29 _12;
frost$collections$Iterator* _13;
$fn30 _15;
frost$core$Bit _16;
bool _17;
$fn31 _19;
frost$core$Object* _20;
org$frostlang$regex$RegexToken _21;
frost$unsafe$Pointer* _24;
frost$unsafe$Pointer _25;
int64_t _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Int64 _29;
org$frostlang$regex$RegexToken _30;
int64_t _31;
frost$core$Int* _34;
frost$core$Int _35;
frost$core$Int _36;
int64_t _37;
int64_t _38;
int64_t _39;
frost$core$Int _40;
frost$core$Int* _41;
frost$core$Object* _43;
frost$core$Object* _46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:95
_1 = &param0->_count;
_2 = *_1;
ITable* $tmp32 = param1->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp32 = $tmp32->next;
}
_3 = $tmp32->methods[0];
_4 = _3(param1);
_5 = _2.value;
_6 = _4.value;
_7 = _5 + _6;
_8 = (frost$core$Int) {_7};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(param0, _8);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:96
_11 = ((frost$collections$Iterable*) param1);
ITable* $tmp33 = _11->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp33 = $tmp33->next;
}
_12 = $tmp33->methods[0];
_13 = _12(_11);
goto block1;
block1:;
ITable* $tmp34 = _13->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp34 = $tmp34->next;
}
_15 = $tmp34->methods[0];
_16 = _15(_13);
_17 = _16.value;
if (_17) goto block3; else goto block2;
block2:;
ITable* $tmp35 = _13->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
_19 = $tmp35->methods[1];
_20 = _19(_13);
_21 = ((org$frostlang$regex$RegexToken$wrapper*) _20)->value;
*(&local0) = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:97
_24 = &param0->data;
_25 = *_24;
_26 = _25.value;
_27 = &param0->_count;
_28 = *_27;
_29 = frost$core$Int64$init$frost$core$Int(_28);
_30 = *(&local0);
_31 = _29.value;
((org$frostlang$regex$RegexToken*)_26)[_31] = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:98
_34 = &param0->_count;
_35 = *_34;
_36 = (frost$core$Int) {1u};
_37 = _35.value;
_38 = _36.value;
_39 = _37 + _38;
_40 = (frost$core$Int) {_39};
_41 = &param0->_count;
*_41 = _40;
_43 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_43);
goto block1;
block3:;
_46 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_46);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(void* rawSelf, frost$core$Int param1) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
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
frost$unsafe$Pointer* _75;
frost$unsafe$Pointer _76;
frost$core$Int _77;
frost$core$Int* _78;
frost$core$Int _79;
int64_t _82;
int64_t _83;
int64_t _84;
int64_t _85;
int64_t _86;
int64_t _87;
int64_t* _90;
frost$unsafe$Pointer _92;
frost$unsafe$Pointer _95;
frost$unsafe$Pointer* _97;
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
_78 = &param0->capacity;
_79 = *_78;
// begin inline call to method frost.unsafe.Pointer.realloc(oldCount:frost.core.Int, newCount:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from SpecializedArray.frost:112:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:93
_82 = _76.value;
_83 = _77.value;
_84 = _83 * 48u;
_85 = _79.value;
_86 = _85 * 48u;
_87 = frost$core$Frost$realloc$builtin_int$builtin_int$builtin_int$R$builtin_int(_82, _84, _86);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:93:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_90 = &(&local3)->value;
*_90 = _87;
_92 = *(&local3);
*(&local2) = _92;
_95 = *(&local2);
_97 = &param0->data;
*_97 = _95;
return;

}
frost$core$Int frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int(void* rawSelf) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:117
_1 = &param0->_count;
_2 = *_1;
return _2;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken(void* rawSelf, frost$core$Int param1) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

org$frostlang$regex$RegexToken local0;
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
frost$unsafe$Pointer* _41;
frost$unsafe$Pointer _42;
int64_t _43;
frost$core$Int64 _44;
int64_t _45;
org$frostlang$regex$RegexToken _46;
frost$core$Int* _50;
frost$core$Int _51;
frost$core$Int _52;
int64_t _53;
int64_t _54;
int64_t _55;
frost$core$Int _56;
frost$core$Bit _57;
frost$core$Range$LTfrost$core$Int$GT _58;
frost$core$Int _59;
frost$core$Int _61;
frost$core$Bit _62;
bool _63;
frost$core$Int _64;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _79;
frost$core$Int _80;
frost$core$Int _81;
int64_t _82;
int64_t _83;
int64_t _84;
frost$core$Int _85;
frost$core$Int _87;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
frost$collections$CollectionView* _94;
$fn39 _95;
frost$core$Int _96;
int64_t _97;
int64_t _98;
bool _99;
frost$core$Bit _100;
bool _101;
frost$core$Int _103;
frost$unsafe$Pointer* _107;
frost$unsafe$Pointer _108;
int64_t _109;
frost$core$Int64 _110;
int64_t _111;
org$frostlang$regex$RegexToken _112;
frost$core$Int _115;
int64_t _116;
int64_t _117;
bool _118;
frost$core$Bit _119;
bool _120;
frost$collections$CollectionView* _122;
$fn40 _123;
frost$core$Int _124;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
frost$core$Int _131;
frost$unsafe$Pointer* _135;
frost$unsafe$Pointer _136;
int64_t _137;
frost$core$Int64 _138;
int64_t _139;
frost$core$Int _143;
int64_t _144;
int64_t _145;
int64_t _146;
frost$core$Int _147;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
int64_t _155;
int64_t _156;
bool _157;
frost$core$Bit _158;
bool _159;
int64_t _161;
int64_t _162;
int64_t _163;
frost$core$Int _164;
frost$core$Int* _168;
frost$core$Int _169;
frost$core$Int _170;
int64_t _171;
int64_t _172;
int64_t _173;
frost$core$Int _174;
frost$core$Int* _175;
frost$unsafe$Pointer* _178;
frost$unsafe$Pointer _179;
int64_t _180;
frost$core$Int* _181;
frost$core$Int _182;
frost$core$Int64 _183;
org$frostlang$regex$RegexToken _185;
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
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from SpecializedArray.frost:122:27
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
_43 = _42.value;
_44 = frost$core$Int64$init$frost$core$Int(param1);
_45 = _44.value;
_46 = ((org$frostlang$regex$RegexToken*)_43)[_45];
*(&local0) = _46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:123
_50 = &param0->_count;
_51 = *_50;
_52 = (frost$core$Int) {1u};
_53 = _51.value;
_54 = _52.value;
_55 = _53 - _54;
_56 = (frost$core$Int) {_55};
_57 = (frost$core$Bit) {false};
_58 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, _56, _57);
_59 = _58.min;
*(&local1) = _59;
_61 = _58.max;
_62 = _58.inclusive;
_63 = _62.value;
_64 = (frost$core$Int) {1u};
if (_63) goto block11; else goto block12;
block11:;
_66 = _59.value;
_67 = _61.value;
_68 = _66 <= _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block8; else goto block9;
block12:;
_72 = _59.value;
_73 = _61.value;
_74 = _72 < _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:124
_79 = *(&local1);
_80 = *(&local1);
_81 = (frost$core$Int) {1u};
_82 = _80.value;
_83 = _81.value;
_84 = _82 + _83;
_85 = (frost$core$Int) {_84};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from SpecializedArray.frost:124:28
_87 = (frost$core$Int) {0u};
_88 = _85.value;
_89 = _87.value;
_90 = _88 >= _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block16; else goto block15;
block16:;
_94 = ((frost$collections$CollectionView*) param0);
ITable* $tmp47 = _94->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_95 = $tmp47->methods[0];
_96 = _95(_94);
_97 = _85.value;
_98 = _96.value;
_99 = _97 < _98;
_100 = (frost$core$Bit) {_99};
_101 = _100.value;
if (_101) goto block14; else goto block15;
block15:;
_103 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _103, &$s49);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_107 = &param0->data;
_108 = *_107;
_109 = _108.value;
_110 = frost$core$Int64$init$frost$core$Int(_85);
_111 = _110.value;
_112 = ((org$frostlang$regex$RegexToken*)_109)[_111];
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[]:=(index:frost.core.Int, value:org.frostlang.regex.RegexToken) from SpecializedArray.frost:124:17
_115 = (frost$core$Int) {0u};
_116 = _79.value;
_117 = _115.value;
_118 = _116 >= _117;
_119 = (frost$core$Bit) {_118};
_120 = _119.value;
if (_120) goto block20; else goto block19;
block20:;
_122 = ((frost$collections$CollectionView*) param0);
ITable* $tmp50 = _122->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
_123 = $tmp50->methods[0];
_124 = _123(_122);
_125 = _79.value;
_126 = _124.value;
_127 = _125 < _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block18; else goto block19;
block19:;
_131 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _131, &$s52);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:73
_135 = &param0->data;
_136 = *_135;
_137 = _136.value;
_138 = frost$core$Int64$init$frost$core$Int(_79);
_139 = _138.value;
((org$frostlang$regex$RegexToken*)_137)[_139] = _112;
_143 = *(&local1);
_144 = _61.value;
_145 = _143.value;
_146 = _144 - _145;
_147 = (frost$core$Int) {_146};
if (_63) goto block22; else goto block23;
block22:;
_149 = _147.value;
_150 = _64.value;
_151 = _149 >= _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block21; else goto block9;
block23:;
_155 = _147.value;
_156 = _64.value;
_157 = _155 > _156;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block21; else goto block9;
block21:;
_161 = _143.value;
_162 = _64.value;
_163 = _161 + _162;
_164 = (frost$core$Int) {_163};
*(&local1) = _164;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:126
_168 = &param0->_count;
_169 = *_168;
_170 = (frost$core$Int) {1u};
_171 = _169.value;
_172 = _170.value;
_173 = _171 - _172;
_174 = (frost$core$Int) {_173};
_175 = &param0->_count;
*_175 = _174;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:127
_178 = &param0->data;
_179 = *_178;
_180 = _179.value;
_181 = &param0->_count;
_182 = *_181;
_183 = frost$core$Int64$init$frost$core$Int(_182);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:128
_185 = *(&local0);
return _185;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear(void* rawSelf) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

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
frost$unsafe$Pointer* _47;
frost$unsafe$Pointer _48;
int64_t _49;
frost$core$Int _50;
frost$core$Int64 _51;
frost$core$Int _53;
int64_t _54;
int64_t _55;
int64_t _56;
frost$core$Int _57;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _63;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
int64_t _71;
int64_t _72;
int64_t _73;
frost$core$Int _74;
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
_49 = _48.value;
_50 = *(&local0);
_51 = frost$core$Int64$init$frost$core$Int(_50);
_53 = *(&local0);
_54 = _29.value;
_55 = _53.value;
_56 = _54 - _55;
_57 = (frost$core$Int) {_56};
if (_31) goto block11; else goto block12;
block11:;
_59 = _57.value;
_60 = _32.value;
_61 = _59 >= _60;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block10; else goto block6;
block12:;
_65 = _57.value;
_66 = _32.value;
_67 = _65 > _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block10; else goto block6;
block10:;
_71 = _53.value;
_72 = _32.value;
_73 = _71 + _72;
_74 = (frost$core$Int) {_73};
*(&local0) = _74;
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
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_asString$R$frost$core$String(void* rawSelf) {
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$regex$RegexToken local2;
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
$fn57 _25;
frost$collections$Iterator* _26;
$fn58 _28;
frost$core$Bit _29;
bool _30;
$fn59 _32;
frost$core$Object* _33;
org$frostlang$regex$RegexToken _34;
frost$core$MutableString* _37;
frost$core$String* _38;
frost$core$Object* _41;
frost$core$String* _43;
frost$core$Object* _44;
org$frostlang$regex$RegexToken _48;
frost$core$Bit _49;
bool _50;
frost$core$MutableString* _53;
org$frostlang$regex$RegexToken _54;
frost$core$Object* _55;
$fn60 _58;
frost$core$String* _59;
frost$core$Object* _61;
frost$core$Object* _64;
frost$core$MutableString* _69;
frost$core$Object* _72;
frost$core$Object* _75;
frost$core$MutableString* _78;
frost$core$MutableString* _81;
frost$core$String* _82;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$String* _87;
frost$core$Object* _88;
frost$core$MutableString* _91;
frost$core$Object* _92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:141
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
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
ITable* $tmp64 = _24->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp64 = $tmp64->next;
}
_25 = $tmp64->methods[0];
_26 = _25(_24);
goto block1;
block1:;
ITable* $tmp65 = _26->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
_28 = $tmp65->methods[0];
_29 = _28(_26);
_30 = _29.value;
if (_30) goto block3; else goto block2;
block2:;
ITable* $tmp66 = _26->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
_32 = $tmp66->methods[1];
_33 = _32(_26);
_34 = ((org$frostlang$regex$RegexToken$wrapper*) _33)->value;
*(&local2) = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:145
_37 = *(&local0);
_38 = *(&local1);
frost$core$MutableString$append$frost$core$String(_37, _38);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:146
_41 = ((frost$core$Object*) &$s67);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = *(&local1);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local1) = &$s68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:147
_48 = *(&local2);
_49 = (frost$core$Bit) {true};
_50 = _49.value;
if (_50) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:148
_53 = *(&local0);
_54 = *(&local2);
org$frostlang$regex$RegexToken$wrapper* $tmp69;
$tmp69 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
$tmp69->value = _54;
_55 = ((frost$core$Object*) $tmp69);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SpecializedArray.frost:148:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_58 = ($fn70) _55->$class->vtable[0];
_59 = _58(_55);
frost$core$MutableString$append$frost$core$String(_53, _59);
_61 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_64 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_64);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:151
_69 = *(&local0);
frost$core$MutableString$append$frost$core$String(_69, &$s71);
goto block5;
block5:;
_72 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_72);
goto block1;
block3:;
_75 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:154
_78 = *(&local0);
frost$core$MutableString$append$frost$core$String(_78, &$s72);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:155
_81 = *(&local0);
_82 = frost$core$MutableString$finish$R$frost$core$String(_81);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = *(&local1);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
*(&local1) = ((frost$core$String*) NULL);
_91 = *(&local0);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local0) = ((frost$core$MutableString*) NULL);
return _82;

}

