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
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/MutableString.h"

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
    $tmp2 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken$shim(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p0, frost$core$Int p1) {
    org$frostlang$regex$RegexToken result = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken(p0, p1);

    org$frostlang$regex$RegexToken$wrapper* $tmp3;
    $tmp3 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
    $tmp3->value = result;
    return ((frost$core$Object*) $tmp3);
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Iterable, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$List, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$CollectionView, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$ListWriter$removeLast} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListWriter, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$ListView, { } };

static frost$core$String $s1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$_frost$collections$Collection, { frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_asString$R$frost$core$String, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken$shim, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear} };

typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn29)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn33)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn38)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn56)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn79)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn101)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn113)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn122)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn247)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn255)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn259)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn264)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn350)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn368)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn422)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn445)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn546)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn550)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn555)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn569)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 66, -1445978142206358855, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 163, 1679332094959886875, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 165, 3750155075890093371, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 163, 8653844651537589019, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x29", 163, 1679332094959886875, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:32
frost$core$Int $tmp4 = (frost$core$Int) {16u};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int(param0, $tmp4);
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:20
frost$core$Int $tmp5 = (frost$core$Int) {0u};
frost$core$Int* $tmp6 = &param0->_count;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:40
frost$core$Int* $tmp7 = &param0->capacity;
*$tmp7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:41
frost$core$Int64 $tmp8 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp9 = $tmp8.value;
org$frostlang$regex$RegexToken* $tmp10 = ((org$frostlang$regex$RegexToken*) frostAlloc($tmp9 * 48));
org$frostlang$regex$RegexToken** $tmp11 = &param0->data;
*$tmp11 = $tmp10;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$collections$ListView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
org$frostlang$regex$RegexToken local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:48
ITable* $tmp12 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int $tmp15 = $tmp13(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp16 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from SpecializedArray.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 > $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp22 = $tmp15.value;
frost$core$Int $tmp23 = (frost$core$Int) {$tmp22};
*(&local0) = $tmp23;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp24 = $tmp16.value;
frost$core$Int $tmp25 = (frost$core$Int) {$tmp24};
*(&local0) = $tmp25;
goto block1;
block1:;
frost$core$Int $tmp26 = *(&local0);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$core$Int(param0, $tmp26);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:49
ITable* $tmp27 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$collections$Iterator* $tmp30 = $tmp28(((frost$collections$Iterable*) param1));
goto block4;
block4:;
ITable* $tmp31 = $tmp30->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$core$Bit $tmp34 = $tmp32($tmp30);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block5;
block5:;
ITable* $tmp36 = $tmp30->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
frost$core$Object* $tmp39 = $tmp37($tmp30);
*(&local1) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp39)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:50
org$frostlang$regex$RegexToken $tmp40 = *(&local1);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(param0, $tmp40);
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init$frost$unsafe$Pointer$LTorg$frostlang$regex$RegexToken$GT$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, org$frostlang$regex$RegexToken* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:20
frost$core$Int $tmp41 = (frost$core$Int) {0u};
frost$core$Int* $tmp42 = &param0->_count;
*$tmp42 = $tmp41;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:56
org$frostlang$regex$RegexToken** $tmp43 = &param0->data;
*$tmp43 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:57
frost$core$Int* $tmp44 = &param0->_count;
*$tmp44 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:58
frost$core$Int* $tmp45 = &param0->capacity;
*$tmp45 = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$cleanup(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:63
org$frostlang$regex$RegexToken** $tmp46 = &param0->data;
org$frostlang$regex$RegexToken* $tmp47 = *$tmp46;
frostFree($tmp47);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:62
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int param1) {

frost$core$Int $tmp48 = (frost$core$Int) {0u};
int64_t $tmp49 = param1.value;
int64_t $tmp50 = $tmp48.value;
bool $tmp51 = $tmp49 >= $tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block3; else goto block2;
block3:;
ITable* $tmp54 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Int $tmp57 = $tmp55(((frost$collections$CollectionView*) param0));
int64_t $tmp58 = param1.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 < $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block1; else goto block2;
block2:;
frost$core$Int $tmp63 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, $tmp63, &$s65);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp66 = &param0->data;
org$frostlang$regex$RegexToken* $tmp67 = *$tmp66;
frost$core$Int64 $tmp68 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp69 = $tmp68.value;
org$frostlang$regex$RegexToken $tmp70 = $tmp67[$tmp69];
return $tmp70;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDXEQ$frost$core$Int$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int param1, org$frostlang$regex$RegexToken param2) {

frost$core$Int $tmp71 = (frost$core$Int) {0u};
int64_t $tmp72 = param1.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 >= $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block3; else goto block2;
block3:;
ITable* $tmp77 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
frost$core$Int $tmp80 = $tmp78(((frost$collections$CollectionView*) param0));
int64_t $tmp81 = param1.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 < $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block1; else goto block2;
block2:;
frost$core$Int $tmp86 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, $tmp86, &$s88);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:73
org$frostlang$regex$RegexToken** $tmp89 = &param0->data;
org$frostlang$regex$RegexToken* $tmp90 = *$tmp89;
frost$core$Int64 $tmp91 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp92 = $tmp91.value;
$tmp90[$tmp92] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$insert$frost$core$Int$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int param1, org$frostlang$regex$RegexToken param2) {

frost$core$Int local0;
frost$core$Int $tmp93 = (frost$core$Int) {0u};
int64_t $tmp94 = param1.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 >= $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block3; else goto block2;
block3:;
ITable* $tmp99 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
frost$core$Int $tmp102 = $tmp100(((frost$collections$CollectionView*) param0));
int64_t $tmp103 = param1.value;
int64_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 <= $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block1; else goto block2;
block2:;
frost$core$Int $tmp108 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:78
ITable* $tmp111 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Int $tmp114 = $tmp112(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp115 = (frost$core$Int) {1u};
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116 + $tmp117;
frost$core$Int $tmp119 = (frost$core$Int) {$tmp118};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(param0, $tmp119);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:79
ITable* $tmp120 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$core$Int $tmp123 = $tmp121(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp124 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp125 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp126 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp123, param1, $tmp124, $tmp125);
frost$core$Int $tmp127 = $tmp126.start;
*(&local0) = $tmp127;
frost$core$Int $tmp128 = $tmp126.end;
frost$core$Int $tmp129 = $tmp126.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from SpecializedArray.frost:79:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp130 = $tmp129.value;
int64_t $tmp131 = -$tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {$tmp131};
frost$core$Bit $tmp133 = $tmp126.inclusive;
bool $tmp134 = $tmp133.value;
frost$core$Int $tmp135 = (frost$core$Int) {0u};
int64_t $tmp136 = $tmp129.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 >= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block8; else goto block9;
block8:;
if ($tmp134) goto block10; else goto block11;
block10:;
int64_t $tmp141 = $tmp127.value;
int64_t $tmp142 = $tmp128.value;
bool $tmp143 = $tmp141 <= $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block5; else goto block6;
block11:;
int64_t $tmp146 = $tmp127.value;
int64_t $tmp147 = $tmp128.value;
bool $tmp148 = $tmp146 < $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block5; else goto block6;
block9:;
if ($tmp134) goto block12; else goto block13;
block12:;
int64_t $tmp151 = $tmp127.value;
int64_t $tmp152 = $tmp128.value;
bool $tmp153 = $tmp151 >= $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block5; else goto block6;
block13:;
int64_t $tmp156 = $tmp127.value;
int64_t $tmp157 = $tmp128.value;
bool $tmp158 = $tmp156 > $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:80
org$frostlang$regex$RegexToken** $tmp161 = &param0->data;
org$frostlang$regex$RegexToken* $tmp162 = *$tmp161;
frost$core$Int $tmp163 = *(&local0);
frost$core$Int64 $tmp164 = frost$core$Int64$init$frost$core$Int($tmp163);
org$frostlang$regex$RegexToken** $tmp165 = &param0->data;
org$frostlang$regex$RegexToken* $tmp166 = *$tmp165;
frost$core$Int $tmp167 = *(&local0);
frost$core$Int $tmp168 = (frost$core$Int) {1u};
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 - $tmp170;
frost$core$Int $tmp172 = (frost$core$Int) {$tmp171};
frost$core$Int64 $tmp173 = frost$core$Int64$init$frost$core$Int($tmp172);
int64_t $tmp174 = $tmp173.value;
org$frostlang$regex$RegexToken $tmp175 = $tmp166[$tmp174];
int64_t $tmp176 = $tmp164.value;
$tmp162[$tmp176] = $tmp175;
frost$core$Int $tmp177 = *(&local0);
if ($tmp140) goto block15; else goto block16;
block15:;
int64_t $tmp178 = $tmp128.value;
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178 - $tmp179;
frost$core$Int $tmp181 = (frost$core$Int) {$tmp180};
if ($tmp134) goto block17; else goto block18;
block17:;
int64_t $tmp182 = $tmp181.value;
int64_t $tmp183 = $tmp129.value;
bool $tmp184 = $tmp182 >= $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block14; else goto block6;
block18:;
int64_t $tmp187 = $tmp181.value;
int64_t $tmp188 = $tmp129.value;
bool $tmp189 = $tmp187 > $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block14; else goto block6;
block16:;
int64_t $tmp192 = $tmp177.value;
int64_t $tmp193 = $tmp128.value;
int64_t $tmp194 = $tmp192 - $tmp193;
frost$core$Int $tmp195 = (frost$core$Int) {$tmp194};
if ($tmp134) goto block19; else goto block20;
block19:;
int64_t $tmp196 = $tmp195.value;
int64_t $tmp197 = $tmp132.value;
bool $tmp198 = $tmp196 >= $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block14; else goto block6;
block20:;
int64_t $tmp201 = $tmp195.value;
int64_t $tmp202 = $tmp132.value;
bool $tmp203 = $tmp201 > $tmp202;
frost$core$Bit $tmp204 = (frost$core$Bit) {$tmp203};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block14; else goto block6;
block14:;
int64_t $tmp206 = $tmp177.value;
int64_t $tmp207 = $tmp129.value;
int64_t $tmp208 = $tmp206 + $tmp207;
frost$core$Int $tmp209 = (frost$core$Int) {$tmp208};
*(&local0) = $tmp209;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:82
frost$core$Int* $tmp210 = &param0->_count;
frost$core$Int $tmp211 = *$tmp210;
frost$core$Int $tmp212 = (frost$core$Int) {1u};
int64_t $tmp213 = $tmp211.value;
int64_t $tmp214 = $tmp212.value;
int64_t $tmp215 = $tmp213 + $tmp214;
frost$core$Int $tmp216 = (frost$core$Int) {$tmp215};
frost$core$Int* $tmp217 = &param0->_count;
*$tmp217 = $tmp216;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:83
org$frostlang$regex$RegexToken** $tmp218 = &param0->data;
org$frostlang$regex$RegexToken* $tmp219 = *$tmp218;
frost$core$Int64 $tmp220 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp221 = $tmp220.value;
$tmp219[$tmp221] = param2;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:88
frost$core$Int* $tmp222 = &param0->_count;
frost$core$Int $tmp223 = *$tmp222;
frost$core$Int $tmp224 = (frost$core$Int) {1u};
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225 + $tmp226;
frost$core$Int $tmp228 = (frost$core$Int) {$tmp227};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(param0, $tmp228);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:89
org$frostlang$regex$RegexToken** $tmp229 = &param0->data;
org$frostlang$regex$RegexToken* $tmp230 = *$tmp229;
frost$core$Int* $tmp231 = &param0->_count;
frost$core$Int $tmp232 = *$tmp231;
frost$core$Int64 $tmp233 = frost$core$Int64$init$frost$core$Int($tmp232);
int64_t $tmp234 = $tmp233.value;
$tmp230[$tmp234] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:90
frost$core$Int* $tmp235 = &param0->_count;
frost$core$Int $tmp236 = *$tmp235;
frost$core$Int $tmp237 = (frost$core$Int) {1u};
int64_t $tmp238 = $tmp236.value;
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238 + $tmp239;
frost$core$Int $tmp241 = (frost$core$Int) {$tmp240};
frost$core$Int* $tmp242 = &param0->_count;
*$tmp242 = $tmp241;
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$collections$CollectionView* param1) {

org$frostlang$regex$RegexToken local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:95
frost$core$Int* $tmp243 = &param0->_count;
frost$core$Int $tmp244 = *$tmp243;
ITable* $tmp245 = param1->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$core$Int $tmp248 = $tmp246(param1);
int64_t $tmp249 = $tmp244.value;
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249 + $tmp250;
frost$core$Int $tmp252 = (frost$core$Int) {$tmp251};
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(param0, $tmp252);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:96
ITable* $tmp253 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$collections$Iterator* $tmp256 = $tmp254(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp257 = $tmp256->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[0];
frost$core$Bit $tmp260 = $tmp258($tmp256);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block3; else goto block2;
block2:;
ITable* $tmp262 = $tmp256->$class->itable;
while ($tmp262->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[1];
frost$core$Object* $tmp265 = $tmp263($tmp256);
*(&local0) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp265)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:97
org$frostlang$regex$RegexToken** $tmp266 = &param0->data;
org$frostlang$regex$RegexToken* $tmp267 = *$tmp266;
frost$core$Int* $tmp268 = &param0->_count;
frost$core$Int $tmp269 = *$tmp268;
frost$core$Int64 $tmp270 = frost$core$Int64$init$frost$core$Int($tmp269);
org$frostlang$regex$RegexToken $tmp271 = *(&local0);
int64_t $tmp272 = $tmp270.value;
$tmp267[$tmp272] = $tmp271;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:98
frost$core$Int* $tmp273 = &param0->_count;
frost$core$Int $tmp274 = *$tmp273;
frost$core$Int $tmp275 = (frost$core$Int) {1u};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 + $tmp277;
frost$core$Int $tmp279 = (frost$core$Int) {$tmp278};
frost$core$Int* $tmp280 = &param0->_count;
*$tmp280 = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q($tmp265);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
return;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$ensureCapacity$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:103
frost$core$Int* $tmp281 = &param0->capacity;
frost$core$Int $tmp282 = *$tmp281;
frost$core$Int $tmp283 = (frost$core$Int) {0u};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 > $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block1; else goto block2;
block2:;
frost$core$Int $tmp289 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s290, $tmp289);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:104
frost$core$Int* $tmp291 = &param0->capacity;
frost$core$Int $tmp292 = *$tmp291;
int64_t $tmp293 = param1.value;
int64_t $tmp294 = $tmp292.value;
bool $tmp295 = $tmp293 <= $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:105
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:107
frost$core$Int* $tmp298 = &param0->capacity;
frost$core$Int $tmp299 = *$tmp298;
*(&local0) = $tmp299;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:108
frost$core$Int* $tmp300 = &param0->capacity;
frost$core$Int $tmp301 = *$tmp300;
frost$core$Int $tmp302 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from SpecializedArray.frost:108:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 > $tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp308 = $tmp301.value;
frost$core$Int $tmp309 = (frost$core$Int) {$tmp308};
*(&local1) = $tmp309;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp310 = $tmp302.value;
frost$core$Int $tmp311 = (frost$core$Int) {$tmp310};
*(&local1) = $tmp311;
goto block5;
block5:;
frost$core$Int $tmp312 = *(&local1);
frost$core$Int* $tmp313 = &param0->capacity;
*$tmp313 = $tmp312;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:109
goto block8;
block8:;
frost$core$Int* $tmp314 = &param0->capacity;
frost$core$Int $tmp315 = *$tmp314;
int64_t $tmp316 = $tmp315.value;
int64_t $tmp317 = param1.value;
bool $tmp318 = $tmp316 < $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:110
frost$core$Int* $tmp321 = &param0->capacity;
frost$core$Int $tmp322 = *$tmp321;
frost$core$Int $tmp323 = (frost$core$Int) {2u};
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324 * $tmp325;
frost$core$Int $tmp327 = (frost$core$Int) {$tmp326};
frost$core$Int* $tmp328 = &param0->capacity;
*$tmp328 = $tmp327;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:112
org$frostlang$regex$RegexToken** $tmp329 = &param0->data;
org$frostlang$regex$RegexToken* $tmp330 = *$tmp329;
frost$core$Int $tmp331 = *(&local0);
frost$core$Int64 $tmp332 = frost$core$Int64$init$frost$core$Int($tmp331);
frost$core$Int* $tmp333 = &param0->capacity;
frost$core$Int $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = frost$core$Int64$init$frost$core$Int($tmp334);
int64_t $tmp336 = $tmp332.value;
int64_t $tmp337 = $tmp335.value;
org$frostlang$regex$RegexToken* $tmp338 = (org$frostlang$regex$RegexToken*) frostRealloc($tmp330, $tmp336 * 48, $tmp337 * 48);
org$frostlang$regex$RegexToken** $tmp339 = &param0->data;
*$tmp339 = $tmp338;
return;

}
frost$core$Int frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_count$R$frost$core$Int(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:117
frost$core$Int* $tmp340 = &param0->_count;
frost$core$Int $tmp341 = *$tmp340;
return $tmp341;

}
org$frostlang$regex$RegexToken frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0, frost$core$Int param1) {

org$frostlang$regex$RegexToken local0;
frost$core$Int local1;
frost$core$Int $tmp342 = (frost$core$Int) {0u};
int64_t $tmp343 = param1.value;
int64_t $tmp344 = $tmp342.value;
bool $tmp345 = $tmp343 >= $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block3; else goto block2;
block3:;
ITable* $tmp348 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp348 = $tmp348->next;
}
$fn350 $tmp349 = $tmp348->methods[0];
frost$core$Int $tmp351 = $tmp349(((frost$collections$CollectionView*) param0));
int64_t $tmp352 = param1.value;
int64_t $tmp353 = $tmp351.value;
bool $tmp354 = $tmp352 < $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block1; else goto block2;
block2:;
frost$core$Int $tmp357 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:122
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from SpecializedArray.frost:122:27
frost$core$Int $tmp360 = (frost$core$Int) {0u};
int64_t $tmp361 = param1.value;
int64_t $tmp362 = $tmp360.value;
bool $tmp363 = $tmp361 >= $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block7; else goto block6;
block7:;
ITable* $tmp366 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp366 = $tmp366->next;
}
$fn368 $tmp367 = $tmp366->methods[0];
frost$core$Int $tmp369 = $tmp367(((frost$collections$CollectionView*) param0));
int64_t $tmp370 = param1.value;
int64_t $tmp371 = $tmp369.value;
bool $tmp372 = $tmp370 < $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block5; else goto block6;
block6:;
frost$core$Int $tmp375 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp378 = &param0->data;
org$frostlang$regex$RegexToken* $tmp379 = *$tmp378;
frost$core$Int64 $tmp380 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp381 = $tmp380.value;
org$frostlang$regex$RegexToken $tmp382 = $tmp379[$tmp381];
*(&local0) = $tmp382;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:123
frost$core$Int* $tmp383 = &param0->_count;
frost$core$Int $tmp384 = *$tmp383;
frost$core$Int $tmp385 = (frost$core$Int) {1u};
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386 - $tmp387;
frost$core$Int $tmp389 = (frost$core$Int) {$tmp388};
frost$core$Bit $tmp390 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp391 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, $tmp389, $tmp390);
frost$core$Int $tmp392 = $tmp391.min;
*(&local1) = $tmp392;
frost$core$Int $tmp393 = $tmp391.max;
frost$core$Bit $tmp394 = $tmp391.inclusive;
bool $tmp395 = $tmp394.value;
frost$core$Int $tmp396 = (frost$core$Int) {1u};
if ($tmp395) goto block11; else goto block12;
block11:;
int64_t $tmp397 = $tmp392.value;
int64_t $tmp398 = $tmp393.value;
bool $tmp399 = $tmp397 <= $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block8; else goto block9;
block12:;
int64_t $tmp402 = $tmp392.value;
int64_t $tmp403 = $tmp393.value;
bool $tmp404 = $tmp402 < $tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:124
frost$core$Int $tmp407 = *(&local1);
frost$core$Int $tmp408 = *(&local1);
frost$core$Int $tmp409 = (frost$core$Int) {1u};
int64_t $tmp410 = $tmp408.value;
int64_t $tmp411 = $tmp409.value;
int64_t $tmp412 = $tmp410 + $tmp411;
frost$core$Int $tmp413 = (frost$core$Int) {$tmp412};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from SpecializedArray.frost:124:28
frost$core$Int $tmp414 = (frost$core$Int) {0u};
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414.value;
bool $tmp417 = $tmp415 >= $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block16; else goto block15;
block16:;
ITable* $tmp420 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp420->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp420 = $tmp420->next;
}
$fn422 $tmp421 = $tmp420->methods[0];
frost$core$Int $tmp423 = $tmp421(((frost$collections$CollectionView*) param0));
int64_t $tmp424 = $tmp413.value;
int64_t $tmp425 = $tmp423.value;
bool $tmp426 = $tmp424 < $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block14; else goto block15;
block15:;
frost$core$Int $tmp429 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s430, $tmp429, &$s431);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp432 = &param0->data;
org$frostlang$regex$RegexToken* $tmp433 = *$tmp432;
frost$core$Int64 $tmp434 = frost$core$Int64$init$frost$core$Int($tmp413);
int64_t $tmp435 = $tmp434.value;
org$frostlang$regex$RegexToken $tmp436 = $tmp433[$tmp435];
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[]:=(index:frost.core.Int, value:org.frostlang.regex.RegexToken) from SpecializedArray.frost:124:17
frost$core$Int $tmp437 = (frost$core$Int) {0u};
int64_t $tmp438 = $tmp407.value;
int64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 >= $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block20; else goto block19;
block20:;
ITable* $tmp443 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[0];
frost$core$Int $tmp446 = $tmp444(((frost$collections$CollectionView*) param0));
int64_t $tmp447 = $tmp407.value;
int64_t $tmp448 = $tmp446.value;
bool $tmp449 = $tmp447 < $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block18; else goto block19;
block19:;
frost$core$Int $tmp452 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s453, $tmp452, &$s454);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:73
org$frostlang$regex$RegexToken** $tmp455 = &param0->data;
org$frostlang$regex$RegexToken* $tmp456 = *$tmp455;
frost$core$Int64 $tmp457 = frost$core$Int64$init$frost$core$Int($tmp407);
int64_t $tmp458 = $tmp457.value;
$tmp456[$tmp458] = $tmp436;
frost$core$Int $tmp459 = *(&local1);
int64_t $tmp460 = $tmp393.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 - $tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {$tmp462};
if ($tmp395) goto block22; else goto block23;
block22:;
int64_t $tmp464 = $tmp463.value;
int64_t $tmp465 = $tmp396.value;
bool $tmp466 = $tmp464 >= $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block21; else goto block9;
block23:;
int64_t $tmp469 = $tmp463.value;
int64_t $tmp470 = $tmp396.value;
bool $tmp471 = $tmp469 > $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block21; else goto block9;
block21:;
int64_t $tmp474 = $tmp459.value;
int64_t $tmp475 = $tmp396.value;
int64_t $tmp476 = $tmp474 + $tmp475;
frost$core$Int $tmp477 = (frost$core$Int) {$tmp476};
*(&local1) = $tmp477;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:126
frost$core$Int* $tmp478 = &param0->_count;
frost$core$Int $tmp479 = *$tmp478;
frost$core$Int $tmp480 = (frost$core$Int) {1u};
int64_t $tmp481 = $tmp479.value;
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481 - $tmp482;
frost$core$Int $tmp484 = (frost$core$Int) {$tmp483};
frost$core$Int* $tmp485 = &param0->_count;
*$tmp485 = $tmp484;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:127
org$frostlang$regex$RegexToken** $tmp486 = &param0->data;
org$frostlang$regex$RegexToken* $tmp487 = *$tmp486;
frost$core$Int* $tmp488 = &param0->_count;
frost$core$Int $tmp489 = *$tmp488;
frost$core$Int64 $tmp490 = frost$core$Int64$init$frost$core$Int($tmp489);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:128
org$frostlang$regex$RegexToken $tmp491 = *(&local0);
return $tmp491;

}
void frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:133
frost$core$Int $tmp492 = (frost$core$Int) {0u};
frost$core$Int* $tmp493 = &param0->_count;
*$tmp493 = $tmp492;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
frost$core$Int $tmp494 = (frost$core$Int) {0u};
frost$core$Int* $tmp495 = &param0->capacity;
frost$core$Int $tmp496 = *$tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp498 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp494, $tmp496, $tmp497);
frost$core$Int $tmp499 = $tmp498.min;
*(&local0) = $tmp499;
frost$core$Int $tmp500 = $tmp498.max;
frost$core$Bit $tmp501 = $tmp498.inclusive;
bool $tmp502 = $tmp501.value;
frost$core$Int $tmp503 = (frost$core$Int) {1u};
if ($tmp502) goto block4; else goto block5;
block4:;
int64_t $tmp504 = $tmp499.value;
int64_t $tmp505 = $tmp500.value;
bool $tmp506 = $tmp504 <= $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block1; else goto block2;
block5:;
int64_t $tmp509 = $tmp499.value;
int64_t $tmp510 = $tmp500.value;
bool $tmp511 = $tmp509 < $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp514 = &param0->data;
org$frostlang$regex$RegexToken* $tmp515 = *$tmp514;
frost$core$Int $tmp516 = *(&local0);
frost$core$Int64 $tmp517 = frost$core$Int64$init$frost$core$Int($tmp516);
frost$core$Int $tmp518 = *(&local0);
int64_t $tmp519 = $tmp500.value;
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519 - $tmp520;
frost$core$Int $tmp522 = (frost$core$Int) {$tmp521};
if ($tmp502) goto block7; else goto block8;
block7:;
int64_t $tmp523 = $tmp522.value;
int64_t $tmp524 = $tmp503.value;
bool $tmp525 = $tmp523 >= $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block6; else goto block2;
block8:;
int64_t $tmp528 = $tmp522.value;
int64_t $tmp529 = $tmp503.value;
bool $tmp530 = $tmp528 > $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block6; else goto block2;
block6:;
int64_t $tmp533 = $tmp518.value;
int64_t $tmp534 = $tmp503.value;
int64_t $tmp535 = $tmp533 + $tmp534;
frost$core$Int $tmp536 = (frost$core$Int) {$tmp535};
*(&local0) = $tmp536;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$get_asString$R$frost$core$String(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$regex$RegexToken local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:141
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp537 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp537);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$MutableString* $tmp538 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local0) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:142
frost$core$MutableString* $tmp539 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp539, &$s540);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:143
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s541));
frost$core$String* $tmp542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local1) = &$s543;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:144
ITable* $tmp544 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp544->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp544 = $tmp544->next;
}
$fn546 $tmp545 = $tmp544->methods[0];
frost$collections$Iterator* $tmp547 = $tmp545(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp548 = $tmp547->$class->itable;
while ($tmp548->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp548 = $tmp548->next;
}
$fn550 $tmp549 = $tmp548->methods[0];
frost$core$Bit $tmp551 = $tmp549($tmp547);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block3; else goto block2;
block2:;
ITable* $tmp553 = $tmp547->$class->itable;
while ($tmp553->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp553 = $tmp553->next;
}
$fn555 $tmp554 = $tmp553->methods[1];
frost$core$Object* $tmp556 = $tmp554($tmp547);
*(&local2) = ((org$frostlang$regex$RegexToken$wrapper*) $tmp556)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:145
frost$core$MutableString* $tmp557 = *(&local0);
frost$core$String* $tmp558 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp557, $tmp558);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s559));
frost$core$String* $tmp560 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local1) = &$s561;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:147
org$frostlang$regex$RegexToken $tmp562 = *(&local2);
frost$core$Bit $tmp563 = (frost$core$Bit) {true};
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:148
frost$core$MutableString* $tmp565 = *(&local0);
org$frostlang$regex$RegexToken $tmp566 = *(&local2);
org$frostlang$regex$RegexToken$wrapper* $tmp567;
$tmp567 = (org$frostlang$regex$RegexToken$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$regex$RegexToken$wrapperclass);
$tmp567->value = $tmp566;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SpecializedArray.frost:148:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn569 $tmp568 = ($fn569) ((frost$core$Object*) $tmp567)->$class->vtable[0];
frost$core$String* $tmp570 = $tmp568(((frost$core$Object*) $tmp567));
frost$core$MutableString$append$frost$core$String($tmp565, $tmp570);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:151
frost$core$MutableString* $tmp571 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp571, &$s572);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp556);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:154
frost$core$MutableString* $tmp573 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp573, &$s574);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:155
frost$core$MutableString* $tmp575 = *(&local0);
frost$core$String* $tmp576 = frost$core$MutableString$finish$R$frost$core$String($tmp575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$String* $tmp577 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp578 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp576;

}

