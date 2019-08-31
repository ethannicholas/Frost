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

typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn73)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn102)(frost$collections$CollectionView*);
typedef void (*$fn150)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn165)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn168)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn190)(frost$collections$CollectionView*);
typedef void (*$fn261)(org$frostlang$frostc$LinkedList*);
typedef frost$collections$Iterator* (*$fn281)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn285)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn290)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn304)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74", 31, 2735825773150690837, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e", 181, 7536742398726707837, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x67\x65\x74\x5f\x6c\x61\x73\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54", 110, -349411081372872262, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x72\x65\x6d\x6f\x76\x65\x4c\x61\x73\x74\x28\x29", 76, 1305984995167838374, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

frost$core$Int org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:49
frost$core$Int* $tmp2 = &param0->_count;
frost$core$Int $tmp3 = *$tmp2;
return $tmp3;

}
frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:54
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$LinkedList$LinkedListIterator));
org$frostlang$frostc$LinkedList$LinkedListIterator* $tmp4 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$LinkedList$LinkedListIterator$class);
org$frostlang$frostc$LinkedList$Node** $tmp5 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6 != NULL};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block2:;
frost$core$Int $tmp9 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block1:;
org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT($tmp4, $tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp4)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
return ((frost$collections$Iterator*) $tmp4);

}
void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:59
org$frostlang$frostc$LinkedList$Node** $tmp12 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp13 = *$tmp12;
frost$core$Bit $tmp14 = (frost$core$Bit) {$tmp13 != NULL};
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:60
ITable* $tmp16 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Int $tmp19 = $tmp17(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp20 = (frost$core$Int) {0u};
int64_t $tmp21 = $tmp19.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 > $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block4; else goto block5;
block5:;
frost$core$Int $tmp26 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s27, $tmp26);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:61
org$frostlang$frostc$LinkedList$Node** $tmp28 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp29 = *$tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29 != NULL};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block6; else goto block7;
block7:;
frost$core$Int $tmp32 = (frost$core$Int) {61u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block6:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList$Node));
org$frostlang$frostc$LinkedList$Node* $tmp35 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T($tmp35, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlang$frostc$LinkedList$Node** $tmp36 = &$tmp29->next;
org$frostlang$frostc$LinkedList$Node* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
org$frostlang$frostc$LinkedList$Node** $tmp38 = &$tmp29->next;
*$tmp38 = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:62
org$frostlang$frostc$LinkedList$Node** $tmp39 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp40 = *$tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40 != NULL};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block8; else goto block9;
block9:;
frost$core$Int $tmp43 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block8:;
org$frostlang$frostc$LinkedList$Node** $tmp46 = &$tmp40->next;
org$frostlang$frostc$LinkedList$Node* $tmp47 = *$tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47 != NULL};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block10; else goto block11;
block11:;
frost$core$Int $tmp50 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block10:;
org$frostlang$frostc$LinkedList$Node** $tmp53 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp54 = *$tmp53;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp55 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp55, ((frost$core$Object*) $tmp54));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Weak** $tmp56 = &$tmp47->prev;
frost$core$Weak* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Weak** $tmp58 = &$tmp47->prev;
*$tmp58 = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:63
org$frostlang$frostc$LinkedList$Node** $tmp59 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp60 = *$tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60 != NULL};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block12; else goto block13;
block13:;
frost$core$Int $tmp63 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, $tmp63, &$s65);
abort(); // unreachable
block12:;
org$frostlang$frostc$LinkedList$Node** $tmp66 = &$tmp60->next;
org$frostlang$frostc$LinkedList$Node* $tmp67 = *$tmp66;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$LinkedList$Node** $tmp68 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$LinkedList$Node** $tmp70 = &param0->tail;
*$tmp70 = $tmp67;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:66
ITable* $tmp71 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
frost$core$Int $tmp74 = $tmp72(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp75 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkedList.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 == $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block15; else goto block16;
block16:;
frost$core$Int $tmp81 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s82, $tmp81);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:67
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList$Node));
org$frostlang$frostc$LinkedList$Node* $tmp83 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T($tmp83, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
org$frostlang$frostc$LinkedList$Node** $tmp84 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp85 = *$tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$LinkedList$Node** $tmp86 = &param0->head;
*$tmp86 = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:68
org$frostlang$frostc$LinkedList$Node** $tmp87 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp88 = *$tmp87;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
org$frostlang$frostc$LinkedList$Node** $tmp89 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp90 = *$tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
org$frostlang$frostc$LinkedList$Node** $tmp91 = &param0->tail;
*$tmp91 = $tmp88;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:70
frost$core$Int* $tmp92 = &param0->_count;
frost$core$Int $tmp93 = *$tmp92;
frost$core$Int $tmp94 = (frost$core$Int) {1u};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 + $tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {$tmp97};
frost$core$Int* $tmp99 = &param0->_count;
*$tmp99 = $tmp98;
return;

}
void org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* param0, org$frostlang$frostc$LinkedList* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:79
ITable* $tmp100 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Int $tmp103 = $tmp101(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp104 = (frost$core$Int) {0u};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 > $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:80
org$frostlang$frostc$LinkedList$Node** $tmp110 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp111 = *$tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111 != NULL};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block4; else goto block5;
block5:;
frost$core$Int $tmp114 = (frost$core$Int) {80u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s115, $tmp114, &$s116);
abort(); // unreachable
block4:;
org$frostlang$frostc$LinkedList$Node** $tmp117 = &param1->head;
org$frostlang$frostc$LinkedList$Node* $tmp118 = *$tmp117;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
org$frostlang$frostc$LinkedList$Node** $tmp119 = &$tmp111->next;
org$frostlang$frostc$LinkedList$Node* $tmp120 = *$tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$LinkedList$Node** $tmp121 = &$tmp111->next;
*$tmp121 = $tmp118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:81
org$frostlang$frostc$LinkedList$Node** $tmp122 = &param1->head;
org$frostlang$frostc$LinkedList$Node* $tmp123 = *$tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123 != NULL};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block6; else goto block7;
block7:;
frost$core$Int $tmp126 = (frost$core$Int) {81u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable
block6:;
org$frostlang$frostc$LinkedList$Node** $tmp129 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp130 = *$tmp129;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp131 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp131, ((frost$core$Object*) $tmp130));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Weak** $tmp132 = &$tmp123->prev;
frost$core$Weak* $tmp133 = *$tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Weak** $tmp134 = &$tmp123->prev;
*$tmp134 = $tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:82
org$frostlang$frostc$LinkedList$Node** $tmp135 = &param1->tail;
org$frostlang$frostc$LinkedList$Node* $tmp136 = *$tmp135;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
org$frostlang$frostc$LinkedList$Node** $tmp137 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp138 = *$tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
org$frostlang$frostc$LinkedList$Node** $tmp139 = &param0->tail;
*$tmp139 = $tmp136;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:83
frost$core$Int* $tmp140 = &param0->_count;
frost$core$Int $tmp141 = *$tmp140;
frost$core$Int* $tmp142 = &param1->_count;
frost$core$Int $tmp143 = *$tmp142;
int64_t $tmp144 = $tmp141.value;
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144 + $tmp145;
frost$core$Int $tmp147 = (frost$core$Int) {$tmp146};
frost$core$Int* $tmp148 = &param0->_count;
*$tmp148 = $tmp147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:84
$fn150 $tmp149 = ($fn150) param1->$class->vtable[8];
$tmp149(param1);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:87
org$frostlang$frostc$LinkedList$Node** $tmp151 = &param1->head;
org$frostlang$frostc$LinkedList$Node* $tmp152 = *$tmp151;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
org$frostlang$frostc$LinkedList$Node** $tmp153 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp154 = *$tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
org$frostlang$frostc$LinkedList$Node** $tmp155 = &param0->head;
*$tmp155 = $tmp152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:88
org$frostlang$frostc$LinkedList$Node** $tmp156 = &param1->tail;
org$frostlang$frostc$LinkedList$Node* $tmp157 = *$tmp156;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$LinkedList$Node** $tmp158 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp159 = *$tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
org$frostlang$frostc$LinkedList$Node** $tmp160 = &param0->tail;
*$tmp160 = $tmp157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:89
frost$core$Int* $tmp161 = &param1->_count;
frost$core$Int $tmp162 = *$tmp161;
frost$core$Int* $tmp163 = &param0->_count;
*$tmp163 = $tmp162;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:90
$fn165 $tmp164 = ($fn165) param1->$class->vtable[8];
$tmp164(param1);
goto block2;
block2:;
return;

}
frost$core$Object* org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* param0) {

ITable* $tmp166 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int $tmp169 = $tmp167(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp170 = (frost$core$Int) {0u};
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 > $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block2:;
frost$core$Int $tmp176 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s177, $tmp176, &$s178);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:97
org$frostlang$frostc$LinkedList$Node** $tmp179 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp180 = *$tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180 != NULL};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block3; else goto block4;
block4:;
frost$core$Int $tmp183 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s184, $tmp183, &$s185);
abort(); // unreachable
block3:;
frost$core$Object** $tmp186 = &$tmp180->value;
frost$core$Object* $tmp187 = *$tmp186;
frost$core$Frost$ref$frost$core$Object$Q($tmp187);
return $tmp187;

}
void org$frostlang$frostc$LinkedList$removeLast(org$frostlang$frostc$LinkedList* param0) {

ITable* $tmp188 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[0];
frost$core$Int $tmp191 = $tmp189(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp192 = (frost$core$Int) {0u};
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192.value;
bool $tmp195 = $tmp193 > $tmp194;
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block1; else goto block2;
block2:;
frost$core$Int $tmp198 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s199, $tmp198, &$s200);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:102
frost$core$Int* $tmp201 = &param0->_count;
frost$core$Int $tmp202 = *$tmp201;
frost$core$Int $tmp203 = (frost$core$Int) {1u};
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203.value;
bool $tmp206 = $tmp204 > $tmp205;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:103
org$frostlang$frostc$LinkedList$Node** $tmp209 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp210 = *$tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210 != NULL};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block6; else goto block7;
block7:;
frost$core$Int $tmp213 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block6:;
frost$core$Weak** $tmp216 = &$tmp210->prev;
frost$core$Weak* $tmp217 = *$tmp216;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:103:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp218 = &$tmp217->_valid;
frost$core$Bit $tmp219 = *$tmp218;
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block10; else goto block11;
block11:;
frost$core$Int $tmp221 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s222, $tmp221);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp223 = &$tmp217->value;
frost$core$Object* $tmp224 = *$tmp223;
frost$core$Frost$ref$frost$core$Object$Q($tmp224);
frost$core$Bit $tmp225 = (frost$core$Bit) {((org$frostlang$frostc$LinkedList$Node*) $tmp224) != NULL};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block12; else goto block13;
block13:;
frost$core$Int $tmp227 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL)));
org$frostlang$frostc$LinkedList$Node** $tmp230 = &((org$frostlang$frostc$LinkedList$Node*) $tmp224)->next;
org$frostlang$frostc$LinkedList$Node* $tmp231 = *$tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$LinkedList$Node** $tmp232 = &((org$frostlang$frostc$LinkedList$Node*) $tmp224)->next;
*$tmp232 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:104
org$frostlang$frostc$LinkedList$Node** $tmp233 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp234 = *$tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234 != NULL};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block14; else goto block15;
block15:;
frost$core$Int $tmp237 = (frost$core$Int) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s238, $tmp237, &$s239);
abort(); // unreachable
block14:;
frost$core$Weak** $tmp240 = &$tmp234->prev;
frost$core$Weak* $tmp241 = *$tmp240;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:104:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp242 = &$tmp241->_valid;
frost$core$Bit $tmp243 = *$tmp242;
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block18; else goto block19;
block19:;
frost$core$Int $tmp245 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s246, $tmp245);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp247 = &$tmp241->value;
frost$core$Object* $tmp248 = *$tmp247;
frost$core$Frost$ref$frost$core$Object$Q($tmp248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) $tmp248)));
org$frostlang$frostc$LinkedList$Node** $tmp249 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp250 = *$tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$frostc$LinkedList$Node** $tmp251 = &param0->tail;
*$tmp251 = ((org$frostlang$frostc$LinkedList$Node*) $tmp248);
frost$core$Frost$unref$frost$core$Object$Q($tmp248);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:105
frost$core$Int* $tmp252 = &param0->_count;
frost$core$Int $tmp253 = *$tmp252;
frost$core$Int $tmp254 = (frost$core$Int) {1u};
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255 - $tmp256;
frost$core$Int $tmp258 = (frost$core$Int) {$tmp257};
frost$core$Int* $tmp259 = &param0->_count;
*$tmp259 = $tmp258;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:108
$fn261 $tmp260 = ($fn261) param0->$class->vtable[8];
$tmp260(param0);
goto block4;
block4:;
return;

}
void org$frostlang$frostc$LinkedList$clear(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL)));
org$frostlang$frostc$LinkedList$Node** $tmp262 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp263 = *$tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
org$frostlang$frostc$LinkedList$Node** $tmp264 = &param0->head;
*$tmp264 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:115
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL)));
org$frostlang$frostc$LinkedList$Node** $tmp265 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp266 = *$tmp265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
org$frostlang$frostc$LinkedList$Node** $tmp267 = &param0->tail;
*$tmp267 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:116
frost$core$Int $tmp268 = (frost$core$Int) {0u};
frost$core$Int* $tmp269 = &param0->_count;
*$tmp269 = $tmp268;
return;

}
void org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP(org$frostlang$frostc$LinkedList* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:121
frost$core$Int $tmp270 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s271, $tmp270);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String(org$frostlang$frostc$LinkedList* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:126
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp272 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp272);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$MutableString* $tmp273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local0) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:127
frost$core$MutableString* $tmp274 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp274, &$s275);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:128
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s276));
frost$core$String* $tmp277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local1) = &$s278;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:129
ITable* $tmp279 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$collections$Iterator* $tmp282 = $tmp280(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp283 = $tmp282->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$core$Bit $tmp286 = $tmp284($tmp282);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp288 = $tmp282->$class->itable;
while ($tmp288->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp288 = $tmp288->next;
}
$fn290 $tmp289 = $tmp288->methods[1];
frost$core$Object* $tmp291 = $tmp289($tmp282);
frost$core$Frost$ref$frost$core$Object$Q($tmp291);
frost$core$Object* $tmp292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp292);
*(&local2) = $tmp291;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:130
frost$core$MutableString* $tmp293 = *(&local0);
frost$core$String* $tmp294 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp293, $tmp294);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s295));
frost$core$String* $tmp296 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local1) = &$s297;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:132
frost$core$Object* $tmp298 = *(&local2);
frost$core$Bit $tmp299 = (frost$core$Bit) {true};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:133
frost$core$MutableString* $tmp301 = *(&local0);
frost$core$Object* $tmp302 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkedList.frost:133:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn304 $tmp303 = ($fn304) $tmp302->$class->vtable[0];
frost$core$String* $tmp305 = $tmp303($tmp302);
frost$core$MutableString$append$frost$core$String($tmp301, $tmp305);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:136
frost$core$MutableString* $tmp306 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp306, &$s307);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp291);
frost$core$Object* $tmp308 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp308);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:139
frost$core$MutableString* $tmp309 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp309, &$s310);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:140
frost$core$MutableString* $tmp311 = *(&local0);
frost$core$String* $tmp312 = frost$core$MutableString$finish$R$frost$core$String($tmp311);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$String* $tmp313 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp312;

}
void org$frostlang$frostc$LinkedList$init(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:39
frost$core$Int $tmp315 = (frost$core$Int) {0u};
frost$core$Int* $tmp316 = &param0->_count;
*$tmp316 = $tmp315;
return;

}
void org$frostlang$frostc$LinkedList$cleanup(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:3
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$LinkedList$Node** $tmp317 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp318 = *$tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
org$frostlang$frostc$LinkedList$Node** $tmp319 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp320 = *$tmp319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
return;

}

