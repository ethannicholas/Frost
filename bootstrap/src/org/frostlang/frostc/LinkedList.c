#include "org/frostlang/frostc/LinkedList.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Collection.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/LinkedList/LinkedListIterator.h"
#include "org/frostlang/frostc/LinkedList/Node.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T$shim(org$frostlang$frostc$LinkedList* p0, frost$core$Object* p1) {
    org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(p0, p1);

}
__attribute__((weak)) void org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim(org$frostlang$frostc$LinkedList* p0, frost$core$MutableMethod* p1) {
    org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}
__attribute__((weak)) frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT$shim(org$frostlang$frostc$LinkedList* p0) {
    frost$collections$Iterator* result = org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } org$frostlang$frostc$LinkedList$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, NULL, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frostc$LinkedList$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$Collection, { org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } org$frostlang$frostc$LinkedList$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$CollectionView, { org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int, org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T$shim, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, org$frostlang$frostc$LinkedList$clear, org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$LinkedList$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$CollectionWriter, { org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frostc$LinkedList$class_type org$frostlang$frostc$LinkedList$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$Iterable, { org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String, org$frostlang$frostc$LinkedList$cleanup, org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int, org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT$shim, org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T$shim, org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT, org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T, org$frostlang$frostc$LinkedList$removeLast, org$frostlang$frostc$LinkedList$clear, org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef void (*$fn19)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn20)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn26)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn27)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn34)(frost$collections$CollectionView*);
typedef void (*$fn35)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn49)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn50)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn55)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn56)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn57)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn58)(frost$core$Object*);
typedef frost$core$String* (*$fn67)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74", 31, 2735825773150690837, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e", 181, 7536742398726707837, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x67\x65\x74\x5f\x6c\x61\x73\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54", 110, -349411081372872262, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x72\x65\x6d\x6f\x76\x65\x4c\x61\x73\x74\x28\x29", 76, 1305984995167838374, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x63\x6c\x65\x61\x72\x28\x29", 72, 5593025815590142060, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

frost$core$Int org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:49
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

org$frostlang$frostc$LinkedList$LinkedListIterator* _1;
org$frostlang$frostc$LinkedList$Node** _2;
org$frostlang$frostc$LinkedList$Node* _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
org$frostlang$frostc$LinkedList$Node* _11;
frost$collections$Iterator* _13;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:54
_1 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) frostObjectAlloc(sizeof(org$frostlang$frostc$LinkedList$LinkedListIterator), (frost$core$Class*) &org$frostlang$frostc$LinkedList$LinkedListIterator$class);
_2 = &param0->head;
_3 = *_2;
_4 = _3 != NULL;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block2:;
_8 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _8, &$s3);
abort(); // unreachable
block1:;
_11 = _3;
org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT(_1, _11);
_13 = ((frost$collections$Iterator*) _1);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _13;

}
void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(void* rawSelf, frost$core$Object* param1) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

org$frostlang$frostc$LinkedList$Node** _1;
org$frostlang$frostc$LinkedList$Node* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _8;
$fn4 _9;
frost$core$Int _10;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
org$frostlang$frostc$LinkedList$Node** _22;
org$frostlang$frostc$LinkedList$Node* _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _28;
org$frostlang$frostc$LinkedList$Node* _31;
org$frostlang$frostc$LinkedList$Node* _32;
frost$core$Object* _33;
org$frostlang$frostc$LinkedList$Node* _35;
org$frostlang$frostc$LinkedList$Node* _36;
frost$core$Object* _37;
org$frostlang$frostc$LinkedList$Node** _39;
org$frostlang$frostc$LinkedList$Node* _40;
frost$core$Object* _41;
org$frostlang$frostc$LinkedList$Node** _43;
frost$core$Object* _45;
org$frostlang$frostc$LinkedList$Node** _48;
org$frostlang$frostc$LinkedList$Node* _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _54;
org$frostlang$frostc$LinkedList$Node* _57;
org$frostlang$frostc$LinkedList$Node** _58;
org$frostlang$frostc$LinkedList$Node* _59;
org$frostlang$frostc$LinkedList$Node* _60;
bool _61;
frost$core$Bit _62;
bool _63;
frost$core$Int _65;
org$frostlang$frostc$LinkedList$Node* _68;
org$frostlang$frostc$LinkedList$Node** _69;
org$frostlang$frostc$LinkedList$Node* _70;
frost$core$Weak* _71;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Weak** _76;
frost$core$Weak* _77;
frost$core$Object* _78;
frost$core$Weak** _80;
frost$core$Object* _82;
org$frostlang$frostc$LinkedList$Node** _85;
org$frostlang$frostc$LinkedList$Node* _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$Int _91;
org$frostlang$frostc$LinkedList$Node* _94;
org$frostlang$frostc$LinkedList$Node** _95;
org$frostlang$frostc$LinkedList$Node* _96;
org$frostlang$frostc$LinkedList$Node* _97;
frost$core$Object* _98;
org$frostlang$frostc$LinkedList$Node** _100;
org$frostlang$frostc$LinkedList$Node* _101;
frost$core$Object* _102;
org$frostlang$frostc$LinkedList$Node** _104;
frost$collections$CollectionView* _109;
$fn5 _110;
frost$core$Int _111;
frost$core$Int _112;
int64_t _115;
int64_t _116;
bool _117;
frost$core$Bit _118;
bool _120;
frost$core$Int _122;
org$frostlang$frostc$LinkedList$Node* _126;
frost$core$Object* _127;
org$frostlang$frostc$LinkedList$Node* _129;
frost$core$Object* _130;
org$frostlang$frostc$LinkedList$Node** _132;
org$frostlang$frostc$LinkedList$Node* _133;
frost$core$Object* _134;
org$frostlang$frostc$LinkedList$Node** _136;
frost$core$Object* _138;
org$frostlang$frostc$LinkedList$Node** _141;
org$frostlang$frostc$LinkedList$Node* _142;
frost$core$Object* _143;
org$frostlang$frostc$LinkedList$Node** _145;
org$frostlang$frostc$LinkedList$Node* _146;
frost$core$Object* _147;
org$frostlang$frostc$LinkedList$Node** _149;
frost$core$Int* _153;
frost$core$Int _154;
frost$core$Int _155;
int64_t _156;
int64_t _157;
int64_t _158;
frost$core$Int _159;
frost$core$Int* _160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:59
_1 = &param0->tail;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:60
_8 = ((frost$collections$CollectionView*) param0);
ITable* $tmp6 = _8->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_9 = $tmp6->methods[0];
_10 = _9(_8);
_11 = (frost$core$Int) {0u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 > _13;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block4; else goto block5;
block5:;
_18 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _18);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:61
_22 = &param0->tail;
_23 = *_22;
_24 = _23 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block6; else goto block7;
block7:;
_28 = (frost$core$Int) {61u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _28, &$s9);
abort(); // unreachable
block6:;
_31 = _23;
_32 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(sizeof(org$frostlang$frostc$LinkedList$Node), (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
_33 = param1;
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T(_32, _33);
_35 = _32;
_36 = _35;
_37 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = &_31->next;
_40 = *_39;
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = &_31->next;
*_43 = _36;
_45 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_45);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:62
_48 = &param0->tail;
_49 = *_48;
_50 = _49 != NULL;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block8; else goto block9;
block9:;
_54 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _54, &$s11);
abort(); // unreachable
block8:;
_57 = _49;
_58 = &_57->next;
_59 = *_58;
_60 = _59;
_61 = _60 != NULL;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block10; else goto block11;
block11:;
_65 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _65, &$s13);
abort(); // unreachable
block10:;
_68 = _60;
_69 = &param0->tail;
_70 = *_69;
_71 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_72 = ((frost$core$Object*) _70);
frost$core$Weak$init$frost$core$Weak$T$Q(_71, _72);
_74 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = &_68->prev;
_77 = *_76;
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = &_68->prev;
*_80 = _71;
_82 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_82);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:63
_85 = &param0->tail;
_86 = *_85;
_87 = _86 != NULL;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block12; else goto block13;
block13:;
_91 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _91, &$s15);
abort(); // unreachable
block12:;
_94 = _86;
_95 = &_94->next;
_96 = *_95;
_97 = _96;
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = &param0->tail;
_101 = *_100;
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = &param0->tail;
*_104 = _97;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:66
_109 = ((frost$collections$CollectionView*) param0);
ITable* $tmp16 = _109->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_110 = $tmp16->methods[0];
_111 = _110(_109);
_112 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkedList.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_115 = _111.value;
_116 = _112.value;
_117 = _115 == _116;
_118 = (frost$core$Bit) {_117};
_120 = _118.value;
if (_120) goto block15; else goto block16;
block16:;
_122 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s17, _122);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:67
_126 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(sizeof(org$frostlang$frostc$LinkedList$Node), (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
_127 = param1;
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T(_126, _127);
_129 = _126;
_130 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_132 = &param0->head;
_133 = *_132;
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = &param0->head;
*_136 = _129;
_138 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_138);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:68
_141 = &param0->head;
_142 = *_141;
_143 = ((frost$core$Object*) _142);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = &param0->tail;
_146 = *_145;
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = &param0->tail;
*_149 = _142;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:70
_153 = &param0->_count;
_154 = *_153;
_155 = (frost$core$Int) {1u};
_156 = _154.value;
_157 = _155.value;
_158 = _156 + _157;
_159 = (frost$core$Int) {_158};
_160 = &param0->_count;
*_160 = _159;
return;

}
void org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT(void* rawSelf, org$frostlang$frostc$LinkedList* param1) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$collections$CollectionView* _1;
$fn18 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
org$frostlang$frostc$LinkedList$Node** _12;
org$frostlang$frostc$LinkedList$Node* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
org$frostlang$frostc$LinkedList$Node* _21;
org$frostlang$frostc$LinkedList$Node** _22;
org$frostlang$frostc$LinkedList$Node* _23;
org$frostlang$frostc$LinkedList$Node* _24;
frost$core$Object* _25;
org$frostlang$frostc$LinkedList$Node** _27;
org$frostlang$frostc$LinkedList$Node* _28;
frost$core$Object* _29;
org$frostlang$frostc$LinkedList$Node** _31;
org$frostlang$frostc$LinkedList$Node** _34;
org$frostlang$frostc$LinkedList$Node* _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$Int _40;
org$frostlang$frostc$LinkedList$Node* _43;
org$frostlang$frostc$LinkedList$Node** _44;
org$frostlang$frostc$LinkedList$Node* _45;
frost$core$Weak* _46;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Weak** _51;
frost$core$Weak* _52;
frost$core$Object* _53;
frost$core$Weak** _55;
frost$core$Object* _57;
org$frostlang$frostc$LinkedList$Node** _60;
org$frostlang$frostc$LinkedList$Node* _61;
frost$core$Object* _62;
org$frostlang$frostc$LinkedList$Node** _64;
org$frostlang$frostc$LinkedList$Node* _65;
frost$core$Object* _66;
org$frostlang$frostc$LinkedList$Node** _68;
frost$core$Int* _71;
frost$core$Int _72;
frost$core$Int* _73;
frost$core$Int _74;
int64_t _75;
int64_t _76;
int64_t _77;
frost$core$Int _78;
frost$core$Int* _79;
$fn19 _82;
org$frostlang$frostc$LinkedList$Node** _87;
org$frostlang$frostc$LinkedList$Node* _88;
frost$core$Object* _89;
org$frostlang$frostc$LinkedList$Node** _91;
org$frostlang$frostc$LinkedList$Node* _92;
frost$core$Object* _93;
org$frostlang$frostc$LinkedList$Node** _95;
org$frostlang$frostc$LinkedList$Node** _98;
org$frostlang$frostc$LinkedList$Node* _99;
frost$core$Object* _100;
org$frostlang$frostc$LinkedList$Node** _102;
org$frostlang$frostc$LinkedList$Node* _103;
frost$core$Object* _104;
org$frostlang$frostc$LinkedList$Node** _106;
frost$core$Int* _109;
frost$core$Int _110;
frost$core$Int* _111;
$fn20 _114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:79
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp21 = _1->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_2 = $tmp21->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {0u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 > _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:80
_12 = &param0->tail;
_13 = *_12;
_14 = _13 != NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block4; else goto block5;
block5:;
_18 = (frost$core$Int) {80u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _18, &$s23);
abort(); // unreachable
block4:;
_21 = _13;
_22 = &param1->head;
_23 = *_22;
_24 = _23;
_25 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = &_21->next;
_28 = *_27;
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = &_21->next;
*_31 = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:81
_34 = &param1->head;
_35 = *_34;
_36 = _35 != NULL;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block6; else goto block7;
block7:;
_40 = (frost$core$Int) {81u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _40, &$s25);
abort(); // unreachable
block6:;
_43 = _35;
_44 = &param0->tail;
_45 = *_44;
_46 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_47 = ((frost$core$Object*) _45);
frost$core$Weak$init$frost$core$Weak$T$Q(_46, _47);
_49 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = &_43->prev;
_52 = *_51;
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = &_43->prev;
*_55 = _46;
_57 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:82
_60 = &param1->tail;
_61 = *_60;
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = &param0->tail;
_65 = *_64;
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = &param0->tail;
*_68 = _61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:83
_71 = &param0->_count;
_72 = *_71;
_73 = &param1->_count;
_74 = *_73;
_75 = _72.value;
_76 = _74.value;
_77 = _75 + _76;
_78 = (frost$core$Int) {_77};
_79 = &param0->_count;
*_79 = _78;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:84
_82 = ($fn26) param1->$class->vtable[8];
_82(param1);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:87
_87 = &param1->head;
_88 = *_87;
_89 = ((frost$core$Object*) _88);
frost$core$Frost$ref$frost$core$Object$Q(_89);
_91 = &param0->head;
_92 = *_91;
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = &param0->head;
*_95 = _88;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:88
_98 = &param1->tail;
_99 = *_98;
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = &param0->tail;
_103 = *_102;
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = &param0->tail;
*_106 = _99;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:89
_109 = &param1->_count;
_110 = *_109;
_111 = &param0->_count;
*_111 = _110;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:90
_114 = ($fn27) param1->$class->vtable[8];
_114(param1);
goto block2;
block2:;
return;

}
frost$core$Object* org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$collections$CollectionView* _0;
$fn28 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
org$frostlang$frostc$LinkedList$Node** _14;
org$frostlang$frostc$LinkedList$Node* _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
org$frostlang$frostc$LinkedList$Node* _23;
frost$core$Object** _24;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object* _27;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp29 = _0->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_1 = $tmp29->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _10, &$s31);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:97
_14 = &param0->tail;
_15 = *_14;
_16 = _15 != NULL;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block3; else goto block4;
block4:;
_20 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _20, &$s33);
abort(); // unreachable
block3:;
_23 = _15;
_24 = &_23->value;
_25 = *_24;
_26 = _25;
_27 = _26;
frost$core$Frost$ref$frost$core$Object$Q(_27);
return _26;

}
void org$frostlang$frostc$LinkedList$removeLast(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$collections$CollectionView* _0;
$fn34 _1;
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
frost$core$Int _16;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
org$frostlang$frostc$LinkedList$Node** _24;
org$frostlang$frostc$LinkedList$Node* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
org$frostlang$frostc$LinkedList$Node* _33;
frost$core$Weak** _34;
frost$core$Weak* _35;
frost$core$Bit* _40;
frost$core$Bit _41;
bool _43;
frost$core$Int _45;
frost$core$Object** _49;
frost$core$Object* _50;
frost$core$Object* _51;
frost$core$Object* _52;
org$frostlang$frostc$LinkedList$Node* _55;
org$frostlang$frostc$LinkedList$Node* _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int _61;
org$frostlang$frostc$LinkedList$Node* _64;
org$frostlang$frostc$LinkedList$Node* _65;
frost$core$Object* _66;
org$frostlang$frostc$LinkedList$Node** _68;
org$frostlang$frostc$LinkedList$Node* _69;
frost$core$Object* _70;
org$frostlang$frostc$LinkedList$Node** _72;
frost$core$Object* _74;
org$frostlang$frostc$LinkedList$Node** _77;
org$frostlang$frostc$LinkedList$Node* _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$core$Int _83;
org$frostlang$frostc$LinkedList$Node* _86;
frost$core$Weak** _87;
frost$core$Weak* _88;
frost$core$Bit* _93;
frost$core$Bit _94;
bool _96;
frost$core$Int _98;
frost$core$Object** _102;
frost$core$Object* _103;
frost$core$Object* _104;
frost$core$Object* _105;
org$frostlang$frostc$LinkedList$Node* _108;
org$frostlang$frostc$LinkedList$Node* _109;
frost$core$Object* _110;
org$frostlang$frostc$LinkedList$Node** _112;
org$frostlang$frostc$LinkedList$Node* _113;
frost$core$Object* _114;
org$frostlang$frostc$LinkedList$Node** _116;
frost$core$Object* _118;
frost$core$Int* _121;
frost$core$Int _122;
frost$core$Int _123;
int64_t _124;
int64_t _125;
int64_t _126;
frost$core$Int _127;
frost$core$Int* _128;
$fn35 _133;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp36 = _0->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp36 = $tmp36->next;
}
_1 = $tmp36->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _10, &$s38);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:102
_14 = &param0->_count;
_15 = *_14;
_16 = (frost$core$Int) {1u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 > _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:103
_24 = &param0->tail;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block6; else goto block7;
block7:;
_30 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _30, &$s40);
abort(); // unreachable
block6:;
_33 = _25;
_34 = &_33->prev;
_35 = *_34;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:103:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_40 = &_35->_valid;
_41 = *_40;
_43 = _41.value;
if (_43) goto block10; else goto block11;
block11:;
_45 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _45, &$s42);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_49 = &_35->value;
_50 = *_49;
_51 = _50;
_52 = _51;
frost$core$Frost$ref$frost$core$Object$Q(_52);
_55 = ((org$frostlang$frostc$LinkedList$Node*) _51);
_56 = _55;
_57 = _56 != NULL;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block12; else goto block13;
block13:;
_61 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _61, &$s44);
abort(); // unreachable
block12:;
_64 = _56;
_65 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
_66 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = &_64->next;
_69 = *_68;
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = &_64->next;
*_72 = _65;
_74 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:104
_77 = &param0->tail;
_78 = *_77;
_79 = _78 != NULL;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block14; else goto block15;
block15:;
_83 = (frost$core$Int) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _83, &$s46);
abort(); // unreachable
block14:;
_86 = _78;
_87 = &_86->prev;
_88 = *_87;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:104:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_93 = &_88->_valid;
_94 = *_93;
_96 = _94.value;
if (_96) goto block18; else goto block19;
block19:;
_98 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s47, _98, &$s48);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_102 = &_88->value;
_103 = *_102;
_104 = _103;
_105 = _104;
frost$core$Frost$ref$frost$core$Object$Q(_105);
_108 = ((org$frostlang$frostc$LinkedList$Node*) _104);
_109 = _108;
_110 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = &param0->tail;
_113 = *_112;
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = &param0->tail;
*_116 = _109;
_118 = _104;
frost$core$Frost$unref$frost$core$Object$Q(_118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:105
_121 = &param0->_count;
_122 = *_121;
_123 = (frost$core$Int) {1u};
_124 = _122.value;
_125 = _123.value;
_126 = _124 - _125;
_127 = (frost$core$Int) {_126};
_128 = &param0->_count;
*_128 = _127;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:108
_133 = ($fn49) param0->$class->vtable[8];
_133(param0);
goto block4;
block4:;
return;

}
void org$frostlang$frostc$LinkedList$clear(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$core$Object* _18;
org$frostlang$frostc$LinkedList$Node** _20;
org$frostlang$frostc$LinkedList$Node* _21;
frost$core$Object* _22;
org$frostlang$frostc$LinkedList$Node** _24;
frost$core$Object* _27;
org$frostlang$frostc$LinkedList$Node** _29;
org$frostlang$frostc$LinkedList$Node* _30;
frost$core$Object* _31;
org$frostlang$frostc$LinkedList$Node** _33;
frost$core$Int _36;
frost$core$Int* _37;
frost$collections$CollectionView* _0;
$fn50 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _14;
frost$core$Int _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:114
_18 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->head;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->head;
*_24 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:115
_27 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = &param0->tail;
_30 = *_29;
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = &param0->tail;
*_33 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:116
_36 = (frost$core$Int) {0u};
_37 = &param0->_count;
*_37 = _36;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp51 = _0->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_1 = $tmp51->methods[0];
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
_11 = (frost$core$Int) {113u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _11, &$s53);
abort(); // unreachable

}
void org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* param1) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:121
_1 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s54, _1);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
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
$fn55 _25;
frost$collections$Iterator* _26;
$fn56 _28;
frost$core$Bit _29;
bool _30;
$fn57 _33;
frost$core$Object* _34;
frost$core$Object* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$MutableString* _43;
frost$core$String* _44;
frost$core$Object* _47;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$Object* _54;
frost$core$Bit _55;
bool _56;
frost$core$MutableString* _59;
frost$core$Object* _60;
frost$core$Object* _61;
$fn58 _64;
frost$core$String* _65;
frost$core$Object* _67;
frost$core$MutableString* _73;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _79;
frost$core$Object* _83;
frost$core$MutableString* _86;
frost$core$MutableString* _89;
frost$core$String* _90;
frost$core$Object* _91;
frost$core$Object* _93;
frost$core$String* _95;
frost$core$Object* _96;
frost$core$MutableString* _99;
frost$core$Object* _100;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:126
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:127
_13 = *(&local0);
frost$core$MutableString$append$frost$core$String(_13, &$s59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:128
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) &$s60);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = &$s61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:129
_24 = ((frost$collections$Iterable*) param0);
ITable* $tmp62 = _24->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp62 = $tmp62->next;
}
_25 = $tmp62->methods[0];
_26 = _25(_24);
goto block1;
block1:;
ITable* $tmp63 = _26->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp63 = $tmp63->next;
}
_28 = $tmp63->methods[0];
_29 = _28(_26);
_30 = _29.value;
if (_30) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp64 = _26->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp64 = $tmp64->next;
}
_33 = $tmp64->methods[1];
_34 = _33(_26);
_35 = _34;
_36 = _35;
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = *(&local2);
_39 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local2) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:130
_43 = *(&local0);
_44 = *(&local1);
frost$core$MutableString$append$frost$core$String(_43, _44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:131
_47 = ((frost$core$Object*) &$s65);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = *(&local1);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local1) = &$s66;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:132
_54 = *(&local2);
_55 = (frost$core$Bit) {true};
_56 = _55.value;
if (_56) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:133
_59 = *(&local0);
_60 = *(&local2);
_61 = _60;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkedList.frost:133:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_64 = ($fn67) _61->$class->vtable[0];
_65 = _64(_61);
frost$core$MutableString$append$frost$core$String(_59, _65);
_67 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_67);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:136
_73 = *(&local0);
frost$core$MutableString$append$frost$core$String(_73, &$s68);
goto block5;
block5:;
_76 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = *(&local2);
_79 = _78;
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_83 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_83);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:139
_86 = *(&local0);
frost$core$MutableString$append$frost$core$String(_86, &$s69);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:140
_89 = *(&local0);
_90 = frost$core$MutableString$finish$R$frost$core$String(_89);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = *(&local1);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local1) = ((frost$core$String*) NULL);
_99 = *(&local0);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local0) = ((frost$core$MutableString*) NULL);
return _90;

}
void org$frostlang$frostc$LinkedList$init(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:39
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
return;

}
void org$frostlang$frostc$LinkedList$cleanup(void* rawSelf) {
org$frostlang$frostc$LinkedList* param0 = (org$frostlang$frostc$LinkedList*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$LinkedList$Node** _3;
org$frostlang$frostc$LinkedList$Node* _4;
frost$core$Object* _5;
org$frostlang$frostc$LinkedList$Node** _7;
org$frostlang$frostc$LinkedList$Node* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->head;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->tail;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

