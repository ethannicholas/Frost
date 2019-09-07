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

frost$core$Int frost$collections$Iterator$count$R$frost$core$Int(frost$collections$Iterator* param0) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int _11;
frost$collections$Iterator* _15;
$fn2 _16;
frost$core$Bit _17;
bool _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$collections$Iterator* _27;
$fn3 _28;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Int _33;
frost$core$Int _34;
int64_t _35;
int64_t _36;
int64_t _37;
frost$core$Int _38;
frost$core$Int _42;
frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _6;
frost$core$Int _8;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:175
_11 = (frost$core$Int) {0u};
*(&local1) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:176
goto block4;
block4:;
_15 = param0;
ITable* $tmp5 = _15->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5 = $tmp5->next;
}
_16 = $tmp5->methods[0];
_17 = _16(_15);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:176:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_20 = _17.value;
_21 = !_20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:177
_27 = param0;
ITable* $tmp6 = _27->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_28 = $tmp6->methods[1];
_29 = _28(_27);
_30 = _29;
frost$core$Frost$unref$frost$core$Object$Q(_30);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:178
_33 = *(&local1);
_34 = (frost$core$Int) {1u};
_35 = _33.value;
_36 = _34.value;
_37 = _35 + _36;
_38 = (frost$core$Int) {_37};
*(&local1) = _38;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:180
_42 = *(&local1);
*(&local0) = _42;
_0 = param0;
ITable* $tmp7 = _0->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_1 = $tmp7->methods[0];
_2 = _1(_0);
_6 = _2.value;
if (_6) goto block2; else goto block3;
block2:;
_8 = *(&local0);
return _8;
block3:;
_3 = (frost$core$Int) {174u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _3, &$s9);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT(frost$collections$Iterator* param0) {

frost$collections$Iterator$EnumerationIterator* _1;
frost$collections$Iterator$EnumerationIterator* _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:192
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$EnumerationIterator));
_1 = (frost$collections$Iterator$EnumerationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$EnumerationIterator$class);
_2 = _1;
_3 = param0;
frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT(_2, _3);
_5 = ((frost$collections$Iterator*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator$FilterIterator* _1;
frost$collections$Iterator$FilterIterator* _2;
frost$collections$Iterator* _3;
frost$core$MutableMethod* _4;
frost$collections$Iterator* _6;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:202
FROST_ASSERT(48 == sizeof(frost$collections$Iterator$FilterIterator));
_1 = (frost$collections$Iterator$FilterIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$Iterator$FilterIterator$class);
_2 = _1;
_3 = param0;
_4 = param1;
frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP(_2, _3, _4);
_6 = ((frost$collections$Iterator*) _1);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return _6;

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1) {

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
frost$collections$Iterator$RangeIterator* _47;
frost$collections$Iterator* _48;
frost$core$Int$nullable _49;
frost$core$Int$nullable _50;
frost$core$Bit _51;
frost$core$Int _52;
frost$collections$Iterator* _54;
frost$core$Object* _55;
frost$core$Object* _57;
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
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
_46 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
_47 = _46;
_48 = param0;
_49 = param1.min;
_50 = param1.max;
_51 = param1.inclusive;
_52 = (frost$core$Int) {1u};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(_47, _48, _49, _50, _51, _52);
_54 = ((frost$collections$Iterator*) _46);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_57);
return _54;

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

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
frost$collections$Iterator$RangeIterator* _55;
frost$collections$Iterator* _56;
frost$core$Int$nullable _57;
frost$core$Int$nullable _58;
frost$core$Bit _59;
frost$core$Int _60;
frost$collections$Iterator* _62;
frost$core$Object* _63;
frost$core$Object* _65;
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
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
_54 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
_55 = _54;
_56 = param0;
_57 = param1.start;
_58 = param1.end;
_59 = param1.inclusive;
_60 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(_55, _56, _57, _58, _59, _60);
_62 = ((frost$collections$Iterator*) _54);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_65);
return _62;

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$Array* _11;
frost$collections$Array* _12;
frost$core$Object* _15;
frost$collections$Array* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$collections$Iterator* _25;
$fn22 _26;
frost$core$Bit _27;
bool _28;
frost$collections$Iterator* _31;
$fn23 _32;
frost$core$Object* _33;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _37;
frost$collections$Array* _41;
frost$collections$Array* _42;
frost$core$Object* _43;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _49;
frost$collections$Array* _54;
frost$core$Object* _55;
frost$collections$Array* _57;
frost$core$Object* _58;
frost$collections$Iterator* _0;
$fn24 _1;
frost$core$Bit _2;
bool _6;
frost$collections$Array* _8;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:251
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_11 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_12 = _11;
frost$collections$Array$init(_12);
*(&local1) = ((frost$collections$Array*) NULL);
_15 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local1);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local1) = _11;
_21 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:252
goto block4;
block4:;
_25 = param0;
ITable* $tmp25 = _25->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
_26 = $tmp25->methods[0];
_27 = _26(_25);
_28 = _27.value;
if (_28) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
_31 = param0;
ITable* $tmp26 = _31->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_32 = $tmp26->methods[1];
_33 = _32(_31);
_34 = _33;
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local2);
_37 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local2) = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:253
_41 = *(&local1);
_42 = _41;
_43 = *(&local2);
_44 = _43;
frost$collections$Array$add$frost$collections$Array$T(_42, _44);
_46 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = *(&local2);
_49 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:255
_54 = *(&local1);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = *(&local1);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local1) = ((frost$collections$Array*) NULL);
*(&local0) = _54;
_0 = param0;
ITable* $tmp27 = _0->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_1 = $tmp27->methods[0];
_2 = _1(_0);
_6 = _2.value;
if (_6) goto block2; else goto block3;
block2:;
_8 = *(&local0);
return _8;
block3:;
_3 = (frost$core$Int) {250u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _3, &$s29);
abort(); // unreachable

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _11;
$fn30 _12;
frost$core$Bit _13;
bool _14;
frost$collections$Iterator* _17;
$fn31 _18;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _23;
frost$core$Object* _27;
frost$core$MutableMethod* _28;
frost$core$Int8** _29;
frost$core$Int8* _30;
frost$core$Object** _31;
frost$core$Object* _32;
bool _33;
$fn32 _35;
$fn33 _38;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _44;
frost$collections$Iterator* _0;
$fn34 _1;
frost$core$Bit _2;
bool _6;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:269
goto block4;
block4:;
_11 = param0;
ITable* $tmp35 = _11->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
_12 = $tmp35->methods[0];
_13 = _12(_11);
_14 = _13.value;
if (_14) goto block6; else goto block5;
block5:;
*(&local0) = ((frost$core$Object*) NULL);
_17 = param0;
ITable* $tmp36 = _17->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
_18 = $tmp36->methods[1];
_19 = _18(_17);
_20 = _19;
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:270
_27 = *(&local0);
_28 = param1;
_29 = &_28->pointer;
_30 = *_29;
_31 = &_28->target;
_32 = *_31;
_33 = _32 != ((frost$core$Object*) NULL);
if (_33) goto block7; else goto block8;
block8:;
_35 = (($fn37) _30);
_35(_27);
goto block9;
block7:;
_38 = (($fn38) _30);
_38(_32, _27);
goto block9;
block9:;
_41 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = *(&local0);
_44 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = ((frost$core$Object*) NULL);
goto block4;
block6:;
_0 = param0;
ITable* $tmp39 = _0->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp39 = $tmp39->next;
}
_1 = $tmp39->methods[0];
_2 = _1(_0);
_6 = _2.value;
if (_6) goto block2; else goto block3;
block2:;
return;
block3:;
_3 = (frost$core$Int) {268u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _3, &$s41);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$Iterator* _0;
$fn42 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Iterator* _25;
$fn43 _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _35;
frost$collections$Iterator* _39;
$fn44 _40;
frost$core$Bit _41;
bool _44;
bool _45;
frost$core$Bit _46;
bool _48;
frost$core$Object* _51;
frost$collections$Iterator* _52;
$fn45 _53;
frost$core$Object* _54;
frost$core$MutableMethod* _55;
frost$core$Int8** _56;
frost$core$Int8* _57;
frost$core$Object** _58;
frost$core$Object* _59;
bool _60;
$fn46 _62;
frost$core$Object* _63;
$fn47 _66;
frost$core$Object* _67;
frost$core$Object* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _74;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Object* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _87;
frost$collections$Iterator* _14;
$fn48 _15;
frost$core$Bit _16;
bool _20;
frost$core$Object* _22;
frost$core$Int _17;
_0 = param0;
ITable* $tmp49 = _0->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
_1 = $tmp49->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:299:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _11, &$s51);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:302
_25 = param0;
ITable* $tmp52 = _25->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp52 = $tmp52->next;
}
_26 = $tmp52->methods[1];
_27 = _26(_25);
*(&local1) = ((frost$core$Object*) NULL);
_29 = _27;
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = *(&local1);
_32 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local1) = _27;
_35 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:303
goto block7;
block7:;
_39 = param0;
ITable* $tmp53 = _39->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp53 = $tmp53->next;
}
_40 = $tmp53->methods[0];
_41 = _40(_39);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:303:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_44 = _41.value;
_45 = !_44;
_46 = (frost$core$Bit) {_45};
_48 = _46.value;
if (_48) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:304
_51 = *(&local1);
_52 = param0;
ITable* $tmp54 = _52->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp54 = $tmp54->next;
}
_53 = $tmp54->methods[1];
_54 = _53(_52);
_55 = param1;
_56 = &_55->pointer;
_57 = *_56;
_58 = &_55->target;
_59 = *_58;
_60 = _59 != ((frost$core$Object*) NULL);
if (_60) goto block11; else goto block12;
block12:;
_62 = (($fn55) _57);
_63 = _62(_51, _54);
*(&local2) = _63;
goto block13;
block11:;
_66 = (($fn56) _57);
_67 = _66(_59, _51, _54);
*(&local2) = _67;
goto block13;
block13:;
_70 = *(&local2);
_71 = _70;
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = *(&local1);
_74 = _73;
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local1) = _70;
_77 = _70;
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = _54;
frost$core$Frost$unref$frost$core$Object$Q(_79);
goto block7;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:306
_83 = *(&local1);
_84 = _83;
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = *(&local1);
_87 = _86;
frost$core$Frost$unref$frost$core$Object$Q(_87);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = _83;
_14 = param0;
ITable* $tmp57 = _14->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
_15 = $tmp57->methods[0];
_16 = _15(_14);
_20 = _16.value;
if (_20) goto block5; else goto block6;
block5:;
_22 = *(&local0);
return _22;
block6:;
_17 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _17, &$s59);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _15;
frost$collections$Iterator* _20;
$fn60 _21;
frost$core$Bit _22;
bool _25;
bool _26;
frost$core$Bit _27;
bool _29;
frost$core$Object* _32;
frost$collections$Iterator* _33;
$fn61 _34;
frost$core$Object* _35;
frost$core$MutableMethod* _36;
frost$core$Int8** _37;
frost$core$Int8* _38;
frost$core$Object** _39;
frost$core$Object* _40;
bool _41;
$fn62 _43;
frost$core$Object* _44;
$fn63 _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _68;
frost$collections$Iterator* _0;
$fn64 _1;
frost$core$Bit _2;
bool _6;
frost$core$Object* _8;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:323
*(&local1) = ((frost$core$Object*) NULL);
_12 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local1);
_15 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local1) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:324
goto block4;
block4:;
_20 = param0;
ITable* $tmp65 = _20->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
_21 = $tmp65->methods[0];
_22 = _21(_20);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:324:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_25 = _22.value;
_26 = !_25;
_27 = (frost$core$Bit) {_26};
_29 = _27.value;
if (_29) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:325
_32 = *(&local1);
_33 = param0;
ITable* $tmp66 = _33->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
_34 = $tmp66->methods[1];
_35 = _34(_33);
_36 = param1;
_37 = &_36->pointer;
_38 = *_37;
_39 = &_36->target;
_40 = *_39;
_41 = _40 != ((frost$core$Object*) NULL);
if (_41) goto block8; else goto block9;
block9:;
_43 = (($fn67) _38);
_44 = _43(_32, _35);
*(&local2) = _44;
goto block10;
block8:;
_47 = (($fn68) _38);
_48 = _47(_40, _32, _35);
*(&local2) = _48;
goto block10;
block10:;
_51 = *(&local2);
_52 = _51;
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local1);
_55 = _54;
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local1) = _51;
_58 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_60);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:327
_64 = *(&local1);
_65 = _64;
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = *(&local1);
_68 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = _64;
_0 = param0;
ITable* $tmp69 = _0->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp69 = $tmp69->next;
}
_1 = $tmp69->methods[0];
_2 = _1(_0);
_6 = _2.value;
if (_6) goto block2; else goto block3;
block2:;
_8 = *(&local0);
return _8;
block3:;
_3 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _3, &$s71);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator$MapIterator* _1;
frost$collections$Iterator$MapIterator* _2;
frost$collections$Iterator* _3;
frost$core$MutableMethod* _4;
frost$collections$Iterator* _6;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:340
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$MapIterator));
_1 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
_2 = _1;
_3 = param0;
_4 = param1;
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP(_2, _3, _4);
_6 = ((frost$collections$Iterator*) _1);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return _6;

}

