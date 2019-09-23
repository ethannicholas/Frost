#include "frost/collections/Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/Iterator/EnumerationIterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterator/MapIterator.h"


struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$class_type frost$collections$Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn24)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn30)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn31)(frost$collections$Iterator*);
typedef void (*$fn32)(frost$core$Object*);
typedef void (*$fn33)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn34)(frost$collections$Iterator*);
typedef void (*$fn37)(frost$core$Object*);
typedef void (*$fn38)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn42)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn43)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn44)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn45)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn46)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn47)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn48)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn55)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn56)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn60)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn61)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn62)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn63)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn64)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn67)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn68)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, -1097572881872230442, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 82, -9195155761664035373, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 161, -4860379017368185990, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 184, 1735570260536253795, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 119, 7827293719992239742, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, -1654707735221343335, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 2762823990384886483, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, -2621365002582485228, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 176965375957697823, NULL };

frost$core$Int frost$collections$Iterator$count$R$frost$core$Int(void* rawSelf) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int _10;
$fn2 _14;
frost$core$Bit _15;
bool _18;
bool _19;
frost$core$Bit _20;
bool _22;
$fn3 _25;
frost$core$Object* _26;
frost$core$Object* _27;
frost$core$Int _30;
frost$core$Int _31;
int64_t _32;
int64_t _33;
int64_t _34;
frost$core$Int _35;
frost$core$Int _39;
$fn4 _0;
frost$core$Bit _1;
bool _5;
frost$core$Int _7;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:175
_10 = (frost$core$Int) {0u};
*(&local1) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:176
goto block4;
block4:;
ITable* $tmp5 = param0->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5 = $tmp5->next;
}
_14 = $tmp5->methods[0];
_15 = _14(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:176:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_18 = _15.value;
_19 = !_18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:177
ITable* $tmp6 = param0->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_25 = $tmp6->methods[1];
_26 = _25(param0);
_27 = _26;
frost$core$Frost$unref$frost$core$Object$Q(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:178
_30 = *(&local1);
_31 = (frost$core$Int) {1u};
_32 = _30.value;
_33 = _31.value;
_34 = _32 + _33;
_35 = (frost$core$Int) {_34};
*(&local1) = _35;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:180
_39 = *(&local1);
*(&local0) = _39;
ITable* $tmp7 = param0->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_0 = $tmp7->methods[0];
_1 = _0(param0);
_5 = _1.value;
if (_5) goto block2; else goto block3;
block2:;
_7 = *(&local0);
return _7;
block3:;
_2 = (frost$core$Int) {174u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _2, &$s9);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT(void* rawSelf) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$collections$Iterator$EnumerationIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:192
_1 = (frost$collections$Iterator$EnumerationIterator*) frostObjectAlloc(sizeof(frost$collections$Iterator$EnumerationIterator), (frost$core$Class*) &frost$collections$Iterator$EnumerationIterator$class);
frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$collections$Iterator$FilterIterator* _1;
frost$core$MutableMethod* _2;
frost$collections$Iterator* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:202
_1 = (frost$collections$Iterator$FilterIterator*) frostObjectAlloc(sizeof(frost$collections$Iterator$FilterIterator), (frost$core$Class*) &frost$collections$Iterator$FilterIterator$class);
_2 = param1;
frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP(_1, param0, _2);
_4 = ((frost$collections$Iterator*) _1);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(void* rawSelf, frost$core$Range$LTfrost$core$Int$Q$GT param1) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$core$Int$nullable _0;
bool _1;
frost$core$Bit _2;
bool _3;
frost$core$Int$nullable _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$Int _13;
frost$core$Int _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int$nullable _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int$nullable _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$core$Int _34;
frost$core$Int _35;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$collections$Iterator$RangeIterator* _46;
frost$core$Int$nullable _47;
frost$core$Int$nullable _48;
frost$core$Bit _49;
frost$core$Int _50;
frost$collections$Iterator* _52;
frost$core$Object* _53;
frost$core$Object* _55;
_0 = param1.min;
_1 = !_0.nonnull;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block4;
block4:;
_5 = param1.min;
_6 = _5.nonnull;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block6; else goto block7;
block7:;
_10 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _10, &$s11);
abort(); // unreachable
block6:;
_13 = ((frost$core$Int) _5.value);
_14 = (frost$core$Int) {0u};
_15 = _13.value;
_16 = _14.value;
_17 = _15 >= _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block5; else goto block3;
block5:;
_21 = param1.max;
_22 = !_21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block3;
block3:;
_26 = param1.max;
_27 = _26.nonnull;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block8; else goto block9;
block9:;
_31 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _31, &$s13);
abort(); // unreachable
block8:;
_34 = ((frost$core$Int) _26.value);
_35 = (frost$core$Int) {0u};
_36 = _34.value;
_37 = _35.value;
_38 = _36 >= _37;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block1; else goto block2;
block2:;
_42 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _42, &$s15);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:223
_46 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(sizeof(frost$collections$Iterator$RangeIterator), (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
_47 = param1.min;
_48 = param1.max;
_49 = param1.inclusive;
_50 = (frost$core$Int) {1u};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(_46, param0, _47, _48, _49, _50);
_52 = ((frost$collections$Iterator*) _46);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_55);
return _52;

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$core$Int$nullable _0;
bool _1;
frost$core$Bit _2;
bool _3;
frost$core$Int$nullable _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$Int _13;
frost$core$Int _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int$nullable _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int$nullable _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$core$Int _34;
frost$core$Int _35;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$core$Int _43;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Int _50;
frost$collections$Iterator$RangeIterator* _54;
frost$core$Int$nullable _55;
frost$core$Int$nullable _56;
frost$core$Bit _57;
frost$core$Int _58;
frost$collections$Iterator* _60;
frost$core$Object* _61;
frost$core$Object* _63;
_0 = param1.start;
_1 = !_0.nonnull;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block4;
block4:;
_5 = param1.start;
_6 = _5.nonnull;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block6; else goto block7;
block7:;
_10 = (frost$core$Int) {238u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _10, &$s17);
abort(); // unreachable
block6:;
_13 = ((frost$core$Int) _5.value);
_14 = (frost$core$Int) {0u};
_15 = _13.value;
_16 = _14.value;
_17 = _15 >= _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block5; else goto block3;
block5:;
_21 = param1.end;
_22 = !_21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block3;
block3:;
_26 = param1.end;
_27 = _26.nonnull;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block9; else goto block10;
block10:;
_31 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _31, &$s19);
abort(); // unreachable
block9:;
_34 = ((frost$core$Int) _26.value);
_35 = (frost$core$Int) {0u};
_36 = _34.value;
_37 = _35.value;
_38 = _36 >= _37;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block8; else goto block2;
block8:;
_42 = param1.step;
_43 = (frost$core$Int) {0u};
_44 = _42.value;
_45 = _43.value;
_46 = _44 > _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block1; else goto block2;
block2:;
_50 = (frost$core$Int) {240u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _50, &$s21);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:241
_54 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(sizeof(frost$collections$Iterator$RangeIterator), (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
_55 = param1.start;
_56 = param1.end;
_57 = param1.inclusive;
_58 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(_54, param0, _55, _56, _57, _58);
_60 = ((frost$collections$Iterator*) _54);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_63);
return _60;

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(void* rawSelf) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$Array* _10;
frost$core$Object* _13;
frost$collections$Array* _15;
frost$core$Object* _16;
frost$core$Object* _19;
$fn22 _23;
frost$core$Bit _24;
bool _25;
$fn23 _28;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _33;
frost$collections$Array* _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _44;
frost$collections$Array* _49;
frost$core$Object* _50;
frost$collections$Array* _52;
frost$core$Object* _53;
$fn24 _0;
frost$core$Bit _1;
bool _5;
frost$collections$Array* _7;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:251
_10 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_10);
*(&local1) = ((frost$collections$Array*) NULL);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local1);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local1) = _10;
_19 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_19);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:252
goto block4;
block4:;
ITable* $tmp25 = param0->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
_23 = $tmp25->methods[0];
_24 = _23(param0);
_25 = _24.value;
if (_25) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp26 = param0->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_28 = $tmp26->methods[1];
_29 = _28(param0);
_30 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local2);
_33 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local2) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:253
_37 = *(&local1);
_38 = *(&local2);
_39 = _38;
frost$collections$Array$add$frost$collections$Array$T(_37, _39);
_41 = _29;
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = *(&local2);
_44 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:255
_49 = *(&local1);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = ((frost$collections$Array*) NULL);
*(&local0) = _49;
ITable* $tmp27 = param0->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_0 = $tmp27->methods[0];
_1 = _0(param0);
_5 = _1.value;
if (_5) goto block2; else goto block3;
block2:;
_7 = *(&local0);
return _7;
block3:;
_2 = (frost$core$Int) {250u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _2, &$s29);
abort(); // unreachable

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$core$Object* local0 = NULL;
$fn30 _10;
frost$core$Bit _11;
bool _12;
$fn31 _15;
frost$core$Object* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _24;
frost$core$MutableMethod* _25;
frost$core$Int8** _26;
frost$core$Int8* _27;
frost$core$Object** _28;
frost$core$Object* _29;
bool _30;
$fn32 _32;
$fn33 _35;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _41;
$fn34 _0;
frost$core$Bit _1;
bool _5;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:269
goto block4;
block4:;
ITable* $tmp35 = param0->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
_10 = $tmp35->methods[0];
_11 = _10(param0);
_12 = _11.value;
if (_12) goto block6; else goto block5;
block5:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp36 = param0->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
_15 = $tmp36->methods[1];
_16 = _15(param0);
_17 = _16;
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:270
_24 = *(&local0);
_25 = param1;
_26 = &_25->pointer;
_27 = *_26;
_28 = &_25->target;
_29 = *_28;
_30 = _29 != ((frost$core$Object*) NULL);
if (_30) goto block7; else goto block8;
block8:;
_32 = (($fn37) _27);
_32(_24);
goto block9;
block7:;
_35 = (($fn38) _27);
_35(_29, _24);
goto block9;
block9:;
_38 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = *(&local0);
_41 = _40;
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local0) = ((frost$core$Object*) NULL);
goto block4;
block6:;
ITable* $tmp39 = param0->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp39 = $tmp39->next;
}
_0 = $tmp39->methods[0];
_1 = _0(param0);
_5 = _1.value;
if (_5) goto block2; else goto block3;
block2:;
return;
block3:;
_2 = (frost$core$Int) {268u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _2, &$s41);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
$fn42 _0;
frost$core$Bit _1;
bool _4;
bool _5;
frost$core$Bit _6;
bool _8;
frost$core$Int _10;
$fn43 _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$Object* _32;
$fn44 _36;
frost$core$Bit _37;
bool _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$Object* _47;
$fn45 _48;
frost$core$Object* _49;
frost$core$MutableMethod* _50;
frost$core$Int8** _51;
frost$core$Int8* _52;
frost$core$Object** _53;
frost$core$Object* _54;
bool _55;
$fn46 _57;
frost$core$Object* _58;
$fn47 _61;
frost$core$Object* _62;
frost$core$Object* _65;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _69;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Object* _82;
$fn48 _13;
frost$core$Bit _14;
bool _18;
frost$core$Object* _20;
frost$core$Int _15;
ITable* $tmp49 = param0->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
_0 = $tmp49->methods[0];
_1 = _0(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:299:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _10, &$s51);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:302
ITable* $tmp52 = param0->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp52 = $tmp52->next;
}
_23 = $tmp52->methods[1];
_24 = _23(param0);
*(&local1) = ((frost$core$Object*) NULL);
_26 = _24;
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = *(&local1);
_29 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_29);
*(&local1) = _24;
_32 = _24;
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:303
goto block7;
block7:;
ITable* $tmp53 = param0->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp53 = $tmp53->next;
}
_36 = $tmp53->methods[0];
_37 = _36(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:303:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_40 = _37.value;
_41 = !_40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:304
_47 = *(&local1);
ITable* $tmp54 = param0->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp54 = $tmp54->next;
}
_48 = $tmp54->methods[1];
_49 = _48(param0);
_50 = param1;
_51 = &_50->pointer;
_52 = *_51;
_53 = &_50->target;
_54 = *_53;
_55 = _54 != ((frost$core$Object*) NULL);
if (_55) goto block11; else goto block12;
block12:;
_57 = (($fn55) _52);
_58 = _57(_47, _49);
*(&local2) = _58;
goto block13;
block11:;
_61 = (($fn56) _52);
_62 = _61(_54, _47, _49);
*(&local2) = _62;
goto block13;
block13:;
_65 = *(&local2);
_66 = _65;
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local1);
_69 = _68;
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local1) = _65;
_72 = _65;
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = _49;
frost$core$Frost$unref$frost$core$Object$Q(_74);
goto block7;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:306
_78 = *(&local1);
_79 = _78;
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = *(&local1);
_82 = _81;
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = _78;
ITable* $tmp57 = param0->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
_13 = $tmp57->methods[0];
_14 = _13(param0);
_18 = _14.value;
if (_18) goto block5; else goto block6;
block5:;
_20 = *(&local0);
return _20;
block6:;
_15 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _15, &$s59);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(void* rawSelf, frost$core$MutableMethod* param1, frost$core$Object* param2) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Object* _14;
$fn60 _19;
frost$core$Bit _20;
bool _23;
bool _24;
frost$core$Bit _25;
bool _27;
frost$core$Object* _30;
$fn61 _31;
frost$core$Object* _32;
frost$core$MutableMethod* _33;
frost$core$Int8** _34;
frost$core$Int8* _35;
frost$core$Object** _36;
frost$core$Object* _37;
bool _38;
$fn62 _40;
frost$core$Object* _41;
$fn63 _44;
frost$core$Object* _45;
frost$core$Object* _48;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _52;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Object* _61;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _65;
$fn64 _0;
frost$core$Bit _1;
bool _5;
frost$core$Object* _7;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:323
*(&local1) = ((frost$core$Object*) NULL);
_11 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = *(&local1);
_14 = _13;
frost$core$Frost$unref$frost$core$Object$Q(_14);
*(&local1) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:324
goto block4;
block4:;
ITable* $tmp65 = param0->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
_19 = $tmp65->methods[0];
_20 = _19(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:324:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_23 = _20.value;
_24 = !_23;
_25 = (frost$core$Bit) {_24};
_27 = _25.value;
if (_27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:325
_30 = *(&local1);
ITable* $tmp66 = param0->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
_31 = $tmp66->methods[1];
_32 = _31(param0);
_33 = param1;
_34 = &_33->pointer;
_35 = *_34;
_36 = &_33->target;
_37 = *_36;
_38 = _37 != ((frost$core$Object*) NULL);
if (_38) goto block8; else goto block9;
block9:;
_40 = (($fn67) _35);
_41 = _40(_30, _32);
*(&local2) = _41;
goto block10;
block8:;
_44 = (($fn68) _35);
_45 = _44(_37, _30, _32);
*(&local2) = _45;
goto block10;
block10:;
_48 = *(&local2);
_49 = _48;
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local1);
_52 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local1) = _48;
_55 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_57);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:327
_61 = *(&local1);
_62 = _61;
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local1);
_65 = _64;
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = _61;
ITable* $tmp69 = param0->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp69 = $tmp69->next;
}
_0 = $tmp69->methods[0];
_1 = _0(param0);
_5 = _1.value;
if (_5) goto block2; else goto block3;
block2:;
_7 = *(&local0);
return _7;
block3:;
_2 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _2, &$s71);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$Iterator* param0 = (frost$collections$Iterator*) rawSelf;

frost$collections$Iterator$MapIterator* _1;
frost$core$MutableMethod* _2;
frost$collections$Iterator* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:340
_1 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(sizeof(frost$collections$Iterator$MapIterator), (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
_2 = param1;
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP(_1, param0, _2);
_4 = ((frost$collections$Iterator*) _1);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}

