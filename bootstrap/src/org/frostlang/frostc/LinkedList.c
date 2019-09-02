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
typedef void (*$fn47)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn48)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn53)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn54)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn55)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn56)(frost$core$Object*);
typedef frost$core$String* (*$fn65)(frost$core$Object*);

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
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 146, 2111999109188860401, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x63\x6c\x65\x61\x72\x28\x29", 72, 5593025815590142060, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

frost$core$Int org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int(org$frostlang$frostc$LinkedList* param0) {

org$frostlang$frostc$LinkedList* _1;
frost$core$Int* _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:49
_1 = param0;
_2 = &_1->_count;
_3 = *_2;
return _3;

}
frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* param0) {

org$frostlang$frostc$LinkedList$LinkedListIterator* _1;
org$frostlang$frostc$LinkedList$LinkedListIterator* _2;
org$frostlang$frostc$LinkedList* _3;
org$frostlang$frostc$LinkedList$Node** _4;
org$frostlang$frostc$LinkedList$Node* _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
org$frostlang$frostc$LinkedList$Node* _13;
org$frostlang$frostc$LinkedList$Node* _14;
frost$collections$Iterator* _16;
frost$core$Object* _17;
frost$core$Object* _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:54
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$LinkedList$LinkedListIterator));
_1 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$LinkedList$LinkedListIterator$class);
_2 = _1;
_3 = param0;
_4 = &_3->head;
_5 = *_4;
_6 = _5 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _10, &$s3);
abort(); // unreachable
block1:;
_13 = _5;
_14 = _13;
org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT(_2, _14);
_16 = ((frost$collections$Iterator*) _1);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _16;

}
void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* param0, frost$core$Object* param1) {

org$frostlang$frostc$LinkedList* _1;
org$frostlang$frostc$LinkedList$Node** _2;
org$frostlang$frostc$LinkedList$Node* _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$collections$CollectionView* _9;
$fn4 _10;
frost$core$Int _11;
frost$core$Int _12;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Int _19;
org$frostlang$frostc$LinkedList* _23;
org$frostlang$frostc$LinkedList$Node** _24;
org$frostlang$frostc$LinkedList$Node* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
org$frostlang$frostc$LinkedList$Node* _33;
org$frostlang$frostc$LinkedList$Node* _34;
org$frostlang$frostc$LinkedList$Node* _35;
frost$core$Object* _36;
org$frostlang$frostc$LinkedList$Node* _38;
org$frostlang$frostc$LinkedList$Node* _39;
frost$core$Object* _40;
org$frostlang$frostc$LinkedList$Node** _42;
org$frostlang$frostc$LinkedList$Node* _43;
frost$core$Object* _44;
org$frostlang$frostc$LinkedList$Node** _46;
frost$core$Object* _48;
org$frostlang$frostc$LinkedList* _51;
org$frostlang$frostc$LinkedList$Node** _52;
org$frostlang$frostc$LinkedList$Node* _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$core$Int _58;
org$frostlang$frostc$LinkedList$Node* _61;
org$frostlang$frostc$LinkedList$Node** _62;
org$frostlang$frostc$LinkedList$Node* _63;
org$frostlang$frostc$LinkedList$Node* _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$core$Int _69;
org$frostlang$frostc$LinkedList$Node* _72;
org$frostlang$frostc$LinkedList* _73;
org$frostlang$frostc$LinkedList$Node** _74;
org$frostlang$frostc$LinkedList$Node* _75;
frost$core$Weak* _76;
frost$core$Weak* _77;
frost$core$Object* _78;
frost$core$Weak* _80;
frost$core$Object* _81;
frost$core$Weak** _83;
frost$core$Weak* _84;
frost$core$Object* _85;
frost$core$Weak** _87;
frost$core$Object* _89;
org$frostlang$frostc$LinkedList* _92;
org$frostlang$frostc$LinkedList* _93;
org$frostlang$frostc$LinkedList$Node** _94;
org$frostlang$frostc$LinkedList$Node* _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Int _100;
org$frostlang$frostc$LinkedList$Node* _103;
org$frostlang$frostc$LinkedList$Node** _104;
org$frostlang$frostc$LinkedList$Node* _105;
org$frostlang$frostc$LinkedList$Node* _106;
frost$core$Object* _107;
org$frostlang$frostc$LinkedList$Node** _109;
org$frostlang$frostc$LinkedList$Node* _110;
frost$core$Object* _111;
org$frostlang$frostc$LinkedList$Node** _113;
frost$collections$CollectionView* _118;
$fn5 _119;
frost$core$Int _120;
frost$core$Int _121;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _129;
frost$core$Int _131;
org$frostlang$frostc$LinkedList* _135;
org$frostlang$frostc$LinkedList$Node* _136;
org$frostlang$frostc$LinkedList$Node* _137;
frost$core$Object* _138;
org$frostlang$frostc$LinkedList$Node* _140;
frost$core$Object* _141;
org$frostlang$frostc$LinkedList$Node** _143;
org$frostlang$frostc$LinkedList$Node* _144;
frost$core$Object* _145;
org$frostlang$frostc$LinkedList$Node** _147;
frost$core$Object* _149;
org$frostlang$frostc$LinkedList* _152;
org$frostlang$frostc$LinkedList* _153;
org$frostlang$frostc$LinkedList$Node** _154;
org$frostlang$frostc$LinkedList$Node* _155;
frost$core$Object* _156;
org$frostlang$frostc$LinkedList$Node** _158;
org$frostlang$frostc$LinkedList$Node* _159;
frost$core$Object* _160;
org$frostlang$frostc$LinkedList$Node** _162;
org$frostlang$frostc$LinkedList* _166;
frost$core$Int* _167;
frost$core$Int _168;
frost$core$Int _169;
int64_t _170;
int64_t _171;
int64_t _172;
frost$core$Int _173;
frost$core$Int* _174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:59
_1 = param0;
_2 = &_1->tail;
_3 = *_2;
_4 = _3 != NULL;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:60
_9 = ((frost$collections$CollectionView*) param0);
ITable* $tmp6 = _9->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_10 = $tmp6->methods[0];
_11 = _10(_9);
_12 = (frost$core$Int) {0u};
_13 = _11.value;
_14 = _12.value;
_15 = _13 > _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block4; else goto block5;
block5:;
_19 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _19);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:61
_23 = param0;
_24 = &_23->tail;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block6; else goto block7;
block7:;
_30 = (frost$core$Int) {61u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _30, &$s9);
abort(); // unreachable
block6:;
_33 = _25;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList$Node));
_34 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
_35 = _34;
_36 = param1;
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T(_35, _36);
_38 = _34;
_39 = _38;
_40 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = &_33->next;
_43 = *_42;
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = &_33->next;
*_46 = _39;
_48 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:62
_51 = param0;
_52 = &_51->tail;
_53 = *_52;
_54 = _53 != NULL;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block8; else goto block9;
block9:;
_58 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _58, &$s11);
abort(); // unreachable
block8:;
_61 = _53;
_62 = &_61->next;
_63 = *_62;
_64 = _63;
_65 = _64 != NULL;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block10; else goto block11;
block11:;
_69 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _69, &$s13);
abort(); // unreachable
block10:;
_72 = _64;
_73 = param0;
_74 = &_73->tail;
_75 = *_74;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_76 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_77 = _76;
_78 = ((frost$core$Object*) _75);
frost$core$Weak$init$frost$core$Weak$T$Q(_77, _78);
_80 = _76;
_81 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_81);
_83 = &_72->prev;
_84 = *_83;
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = &_72->prev;
*_87 = _80;
_89 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_89);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:63
_92 = param0;
_93 = param0;
_94 = &_93->tail;
_95 = *_94;
_96 = _95 != NULL;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block12; else goto block13;
block13:;
_100 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _100, &$s15);
abort(); // unreachable
block12:;
_103 = _95;
_104 = &_103->next;
_105 = *_104;
_106 = _105;
_107 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = &_92->tail;
_110 = *_109;
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = &_92->tail;
*_113 = _106;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:66
_118 = ((frost$collections$CollectionView*) param0);
ITable* $tmp16 = _118->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_119 = $tmp16->methods[0];
_120 = _119(_118);
_121 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkedList.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_124 = _120.value;
_125 = _121.value;
_126 = _124 == _125;
_127 = (frost$core$Bit) {_126};
_129 = _127.value;
if (_129) goto block15; else goto block16;
block16:;
_131 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s17, _131);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:67
_135 = param0;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList$Node));
_136 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
_137 = _136;
_138 = param1;
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T(_137, _138);
_140 = _136;
_141 = ((frost$core$Object*) _140);
frost$core$Frost$ref$frost$core$Object$Q(_141);
_143 = &_135->head;
_144 = *_143;
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = &_135->head;
*_147 = _140;
_149 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:68
_152 = param0;
_153 = param0;
_154 = &_153->head;
_155 = *_154;
_156 = ((frost$core$Object*) _155);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = &_152->tail;
_159 = *_158;
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = &_152->tail;
*_162 = _155;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:70
_166 = param0;
_167 = &_166->_count;
_168 = *_167;
_169 = (frost$core$Int) {1u};
_170 = _168.value;
_171 = _169.value;
_172 = _170 + _171;
_173 = (frost$core$Int) {_172};
_174 = &_166->_count;
*_174 = _173;
return;

}
void org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* param0, org$frostlang$frostc$LinkedList* param1) {

frost$collections$CollectionView* _1;
$fn18 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
org$frostlang$frostc$LinkedList* _12;
org$frostlang$frostc$LinkedList$Node** _13;
org$frostlang$frostc$LinkedList$Node* _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Int _19;
org$frostlang$frostc$LinkedList$Node* _22;
org$frostlang$frostc$LinkedList* _23;
org$frostlang$frostc$LinkedList$Node** _24;
org$frostlang$frostc$LinkedList$Node* _25;
org$frostlang$frostc$LinkedList$Node* _26;
frost$core$Object* _27;
org$frostlang$frostc$LinkedList$Node** _29;
org$frostlang$frostc$LinkedList$Node* _30;
frost$core$Object* _31;
org$frostlang$frostc$LinkedList$Node** _33;
org$frostlang$frostc$LinkedList* _36;
org$frostlang$frostc$LinkedList$Node** _37;
org$frostlang$frostc$LinkedList$Node* _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
org$frostlang$frostc$LinkedList$Node* _46;
org$frostlang$frostc$LinkedList* _47;
org$frostlang$frostc$LinkedList$Node** _48;
org$frostlang$frostc$LinkedList$Node* _49;
frost$core$Weak* _50;
frost$core$Weak* _51;
frost$core$Object* _52;
frost$core$Weak* _54;
frost$core$Object* _55;
frost$core$Weak** _57;
frost$core$Weak* _58;
frost$core$Object* _59;
frost$core$Weak** _61;
frost$core$Object* _63;
org$frostlang$frostc$LinkedList* _66;
org$frostlang$frostc$LinkedList* _67;
org$frostlang$frostc$LinkedList$Node** _68;
org$frostlang$frostc$LinkedList$Node* _69;
frost$core$Object* _70;
org$frostlang$frostc$LinkedList$Node** _72;
org$frostlang$frostc$LinkedList$Node* _73;
frost$core$Object* _74;
org$frostlang$frostc$LinkedList$Node** _76;
org$frostlang$frostc$LinkedList* _79;
frost$core$Int* _80;
frost$core$Int _81;
org$frostlang$frostc$LinkedList* _82;
frost$core$Int* _83;
frost$core$Int _84;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
frost$core$Int* _89;
org$frostlang$frostc$LinkedList* _92;
$fn19 _93;
org$frostlang$frostc$LinkedList* _98;
org$frostlang$frostc$LinkedList* _99;
org$frostlang$frostc$LinkedList$Node** _100;
org$frostlang$frostc$LinkedList$Node* _101;
frost$core$Object* _102;
org$frostlang$frostc$LinkedList$Node** _104;
org$frostlang$frostc$LinkedList$Node* _105;
frost$core$Object* _106;
org$frostlang$frostc$LinkedList$Node** _108;
org$frostlang$frostc$LinkedList* _111;
org$frostlang$frostc$LinkedList* _112;
org$frostlang$frostc$LinkedList$Node** _113;
org$frostlang$frostc$LinkedList$Node* _114;
frost$core$Object* _115;
org$frostlang$frostc$LinkedList$Node** _117;
org$frostlang$frostc$LinkedList$Node* _118;
frost$core$Object* _119;
org$frostlang$frostc$LinkedList$Node** _121;
org$frostlang$frostc$LinkedList* _124;
org$frostlang$frostc$LinkedList* _125;
frost$core$Int* _126;
frost$core$Int _127;
frost$core$Int* _128;
org$frostlang$frostc$LinkedList* _131;
$fn20 _132;
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
_12 = param0;
_13 = &_12->tail;
_14 = *_13;
_15 = _14 != NULL;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block4; else goto block5;
block5:;
_19 = (frost$core$Int) {80u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _19, &$s23);
abort(); // unreachable
block4:;
_22 = _14;
_23 = param1;
_24 = &_23->head;
_25 = *_24;
_26 = _25;
_27 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = &_22->next;
_30 = *_29;
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = &_22->next;
*_33 = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:81
_36 = param1;
_37 = &_36->head;
_38 = *_37;
_39 = _38 != NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block6; else goto block7;
block7:;
_43 = (frost$core$Int) {81u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _43, &$s25);
abort(); // unreachable
block6:;
_46 = _38;
_47 = param0;
_48 = &_47->tail;
_49 = *_48;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_50 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_51 = _50;
_52 = ((frost$core$Object*) _49);
frost$core$Weak$init$frost$core$Weak$T$Q(_51, _52);
_54 = _50;
_55 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = &_46->prev;
_58 = *_57;
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = &_46->prev;
*_61 = _54;
_63 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:82
_66 = param0;
_67 = param1;
_68 = &_67->tail;
_69 = *_68;
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = &_66->tail;
_73 = *_72;
_74 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = &_66->tail;
*_76 = _69;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:83
_79 = param0;
_80 = &_79->_count;
_81 = *_80;
_82 = param1;
_83 = &_82->_count;
_84 = *_83;
_85 = _81.value;
_86 = _84.value;
_87 = _85 + _86;
_88 = (frost$core$Int) {_87};
_89 = &_79->_count;
*_89 = _88;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:84
_92 = param1;
_93 = ($fn26) _92->$class->vtable[8];
_93(_92);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:87
_98 = param0;
_99 = param1;
_100 = &_99->head;
_101 = *_100;
_102 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = &_98->head;
_105 = *_104;
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = &_98->head;
*_108 = _101;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:88
_111 = param0;
_112 = param1;
_113 = &_112->tail;
_114 = *_113;
_115 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = &_111->tail;
_118 = *_117;
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = &_111->tail;
*_121 = _114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:89
_124 = param0;
_125 = param1;
_126 = &_125->_count;
_127 = *_126;
_128 = &_124->_count;
*_128 = _127;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:90
_131 = param1;
_132 = ($fn27) _131->$class->vtable[8];
_132(_131);
goto block2;
block2:;
return;

}
frost$core$Object* org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* param0) {

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
org$frostlang$frostc$LinkedList* _14;
org$frostlang$frostc$LinkedList$Node** _15;
org$frostlang$frostc$LinkedList$Node* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
org$frostlang$frostc$LinkedList$Node* _24;
frost$core$Object** _25;
frost$core$Object* _26;
frost$core$Object* _27;
frost$core$Object* _28;
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
_14 = param0;
_15 = &_14->tail;
_16 = *_15;
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block3; else goto block4;
block4:;
_21 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _21, &$s33);
abort(); // unreachable
block3:;
_24 = _16;
_25 = &_24->value;
_26 = *_25;
_27 = _26;
_28 = _27;
frost$core$Frost$ref$frost$core$Object$Q(_28);
return _27;

}
void org$frostlang$frostc$LinkedList$removeLast(org$frostlang$frostc$LinkedList* param0) {

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
org$frostlang$frostc$LinkedList* _14;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
bool _20;
frost$core$Bit _21;
bool _22;
org$frostlang$frostc$LinkedList* _25;
org$frostlang$frostc$LinkedList$Node** _26;
org$frostlang$frostc$LinkedList$Node* _27;
bool _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _32;
org$frostlang$frostc$LinkedList$Node* _35;
frost$core$Weak** _36;
frost$core$Weak* _37;
frost$core$Weak* _38;
frost$core$Bit* _43;
frost$core$Bit _44;
bool _46;
frost$core$Int _48;
frost$core$Object** _52;
frost$core$Object* _53;
frost$core$Object* _54;
frost$core$Object* _55;
org$frostlang$frostc$LinkedList$Node* _58;
org$frostlang$frostc$LinkedList$Node* _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _64;
org$frostlang$frostc$LinkedList$Node* _67;
org$frostlang$frostc$LinkedList$Node* _68;
frost$core$Object* _69;
org$frostlang$frostc$LinkedList$Node** _71;
org$frostlang$frostc$LinkedList$Node* _72;
frost$core$Object* _73;
org$frostlang$frostc$LinkedList$Node** _75;
frost$core$Object* _77;
org$frostlang$frostc$LinkedList* _80;
org$frostlang$frostc$LinkedList* _81;
org$frostlang$frostc$LinkedList$Node** _82;
org$frostlang$frostc$LinkedList$Node* _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int _88;
org$frostlang$frostc$LinkedList$Node* _91;
frost$core$Weak** _92;
frost$core$Weak* _93;
frost$core$Weak* _94;
frost$core$Bit* _99;
frost$core$Bit _100;
bool _102;
frost$core$Int _104;
frost$core$Object** _108;
frost$core$Object* _109;
frost$core$Object* _110;
frost$core$Object* _111;
org$frostlang$frostc$LinkedList$Node* _114;
org$frostlang$frostc$LinkedList$Node* _115;
frost$core$Object* _116;
org$frostlang$frostc$LinkedList$Node** _118;
org$frostlang$frostc$LinkedList$Node* _119;
frost$core$Object* _120;
org$frostlang$frostc$LinkedList$Node** _122;
frost$core$Object* _124;
org$frostlang$frostc$LinkedList* _127;
frost$core$Int* _128;
frost$core$Int _129;
frost$core$Int _130;
int64_t _131;
int64_t _132;
int64_t _133;
frost$core$Int _134;
frost$core$Int* _135;
org$frostlang$frostc$LinkedList* _140;
$fn35 _141;
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
_14 = param0;
_15 = &_14->_count;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 > _19;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:103
_25 = param0;
_26 = &_25->tail;
_27 = *_26;
_28 = _27 != NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block6; else goto block7;
block7:;
_32 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _32, &$s40);
abort(); // unreachable
block6:;
_35 = _27;
_36 = &_35->prev;
_37 = *_36;
_38 = _37;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:103:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_43 = &_38->_valid;
_44 = *_43;
_46 = _44.value;
if (_46) goto block10; else goto block11;
block11:;
_48 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s41, _48);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_52 = &_38->value;
_53 = *_52;
_54 = _53;
_55 = _54;
frost$core$Frost$ref$frost$core$Object$Q(_55);
_58 = ((org$frostlang$frostc$LinkedList$Node*) _54);
_59 = _58;
_60 = _59 != NULL;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block12; else goto block13;
block13:;
_64 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _64, &$s43);
abort(); // unreachable
block12:;
_67 = _59;
_68 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
_69 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = &_67->next;
_72 = *_71;
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = &_67->next;
*_75 = _68;
_77 = _54;
frost$core$Frost$unref$frost$core$Object$Q(_77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:104
_80 = param0;
_81 = param0;
_82 = &_81->tail;
_83 = *_82;
_84 = _83 != NULL;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block14; else goto block15;
block15:;
_88 = (frost$core$Int) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _88, &$s45);
abort(); // unreachable
block14:;
_91 = _83;
_92 = &_91->prev;
_93 = *_92;
_94 = _93;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:104:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_99 = &_94->_valid;
_100 = *_99;
_102 = _100.value;
if (_102) goto block18; else goto block19;
block19:;
_104 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s46, _104);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_108 = &_94->value;
_109 = *_108;
_110 = _109;
_111 = _110;
frost$core$Frost$ref$frost$core$Object$Q(_111);
_114 = ((org$frostlang$frostc$LinkedList$Node*) _110);
_115 = _114;
_116 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = &_80->tail;
_119 = *_118;
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = &_80->tail;
*_122 = _115;
_124 = _110;
frost$core$Frost$unref$frost$core$Object$Q(_124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:105
_127 = param0;
_128 = &_127->_count;
_129 = *_128;
_130 = (frost$core$Int) {1u};
_131 = _129.value;
_132 = _130.value;
_133 = _131 - _132;
_134 = (frost$core$Int) {_133};
_135 = &_127->_count;
*_135 = _134;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:108
_140 = param0;
_141 = ($fn47) _140->$class->vtable[8];
_141(_140);
goto block4;
block4:;
return;

}
void org$frostlang$frostc$LinkedList$clear(org$frostlang$frostc$LinkedList* param0) {

org$frostlang$frostc$LinkedList* _18;
frost$core$Object* _19;
org$frostlang$frostc$LinkedList$Node** _21;
org$frostlang$frostc$LinkedList$Node* _22;
frost$core$Object* _23;
org$frostlang$frostc$LinkedList$Node** _25;
org$frostlang$frostc$LinkedList* _28;
frost$core$Object* _29;
org$frostlang$frostc$LinkedList$Node** _31;
org$frostlang$frostc$LinkedList$Node* _32;
frost$core$Object* _33;
org$frostlang$frostc$LinkedList$Node** _35;
org$frostlang$frostc$LinkedList* _38;
frost$core$Int _39;
frost$core$Int* _40;
frost$collections$CollectionView* _0;
$fn48 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _14;
frost$core$Int _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:114
_18 = param0;
_19 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &_18->head;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &_18->head;
*_25 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:115
_28 = param0;
_29 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = &_28->tail;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = &_28->tail;
*_35 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:116
_38 = param0;
_39 = (frost$core$Int) {0u};
_40 = &_38->_count;
*_40 = _39;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp49 = _0->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
_1 = $tmp49->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _11, &$s51);
abort(); // unreachable

}
void org$frostlang$frostc$LinkedList$filterInPlace$$LPorg$frostlang$frostc$LinkedList$T$RP$EQ$GT$LPfrost$core$Bit$RP(org$frostlang$frostc$LinkedList* param0, frost$core$MutableMethod* param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:121
_1 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, _1);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String(org$frostlang$frostc$LinkedList* param0) {

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
frost$collections$Iterable* _25;
$fn53 _26;
frost$collections$Iterator* _27;
frost$collections$Iterator* _28;
frost$collections$Iterator* _30;
$fn54 _31;
frost$core$Bit _32;
bool _33;
frost$collections$Iterator* _36;
$fn55 _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _43;
frost$core$MutableString* _47;
frost$core$String* _48;
frost$core$Object* _51;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _58;
frost$core$Bit _59;
bool _60;
frost$core$MutableString* _63;
frost$core$Object* _64;
frost$core$Object* _65;
$fn56 _68;
frost$core$String* _69;
frost$core$Object* _71;
frost$core$MutableString* _77;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _83;
frost$core$Object* _87;
frost$core$MutableString* _90;
frost$core$MutableString* _93;
frost$core$String* _94;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$MutableString* _103;
frost$core$Object* _104;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:126
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:127
_13 = *(&local0);
frost$core$MutableString$append$frost$core$String(_13, &$s57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:128
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) &$s58);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = &$s59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:129
_24 = ((frost$collections$Iterable*) param0);
_25 = _24;
ITable* $tmp60 = _25->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp60 = $tmp60->next;
}
_26 = $tmp60->methods[0];
_27 = _26(_25);
_28 = _27;
goto block1;
block1:;
_30 = _28;
ITable* $tmp61 = _30->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp61 = $tmp61->next;
}
_31 = $tmp61->methods[0];
_32 = _31(_30);
_33 = _32.value;
if (_33) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
_36 = _28;
ITable* $tmp62 = _36->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp62 = $tmp62->next;
}
_37 = $tmp62->methods[1];
_38 = _37(_36);
_39 = _38;
_40 = _39;
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local2);
_43 = _42;
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local2) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:130
_47 = *(&local0);
_48 = *(&local1);
frost$core$MutableString$append$frost$core$String(_47, _48);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:131
_51 = ((frost$core$Object*) &$s63);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = &$s64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:132
_58 = *(&local2);
_59 = (frost$core$Bit) {true};
_60 = _59.value;
if (_60) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:133
_63 = *(&local0);
_64 = *(&local2);
_65 = _64;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkedList.frost:133:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
_68 = ($fn65) _65->$class->vtable[0];
_69 = _68(_65);
frost$core$MutableString$append$frost$core$String(_63, _69);
_71 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_71);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:136
_77 = *(&local0);
frost$core$MutableString$append$frost$core$String(_77, &$s66);
goto block5;
block5:;
_80 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = *(&local2);
_83 = _82;
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_87 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_87);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:139
_90 = *(&local0);
frost$core$MutableString$append$frost$core$String(_90, &$s67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:140
_93 = *(&local0);
_94 = frost$core$MutableString$finish$R$frost$core$String(_93);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = *(&local1);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local1) = ((frost$core$String*) NULL);
_103 = *(&local0);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local0) = ((frost$core$MutableString*) NULL);
return _94;

}
void org$frostlang$frostc$LinkedList$init(org$frostlang$frostc$LinkedList* param0) {

org$frostlang$frostc$LinkedList* _1;
frost$core$Int _2;
frost$core$Int* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:39
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->_count;
*_3 = _2;
return;

}
void org$frostlang$frostc$LinkedList$cleanup(org$frostlang$frostc$LinkedList* param0) {

frost$core$Object* _1;
org$frostlang$frostc$LinkedList* _3;
org$frostlang$frostc$LinkedList$Node** _4;
org$frostlang$frostc$LinkedList$Node* _5;
frost$core$Object* _6;
org$frostlang$frostc$LinkedList* _8;
org$frostlang$frostc$LinkedList$Node** _9;
org$frostlang$frostc$LinkedList$Node* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->head;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->tail;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}

