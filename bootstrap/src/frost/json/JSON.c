#include "frost/json/JSON.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON/PathKey.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/core/Int32.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/Frost.h"
#include "frost/collections/MapView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Real64.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Formattable.h"
#include "frost/collections/Iterable.h"


static frost$core$String $s1;
frost$json$JSON$class_type frost$json$JSON$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$json$JSON$get_asString$R$frost$core$String, frost$json$JSON$cleanup, frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q, frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q, frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q, frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q, frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q, frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q, frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q, frost$json$JSON$get_asInt$R$frost$core$Int64, frost$json$JSON$get_asReal$R$frost$core$Real64, frost$json$JSON$get_asBit$R$frost$core$Bit, frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT, frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn11)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn12)(frost$collections$ListView*, frost$core$Int);
typedef frost$json$JSON* (*$fn27)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn28)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn31)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn32)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn35)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn36)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn39)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn40)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn43)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn44)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn47)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn48)(frost$json$JSON*, frost$core$String*);
typedef frost$core$String* (*$fn56)(frost$core$Object*);
typedef frost$core$String* (*$fn57)(frost$core$Object*);
typedef frost$core$String* (*$fn58)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn59)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn60)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn61)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn62)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn63)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$String* (*$fn64)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn65)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn66)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn67)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn68)(frost$core$Object*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);
typedef frost$core$String* (*$fn72)(frost$core$Object*);
typedef frost$core$String* (*$fn75)(frost$core$Object*);
typedef frost$core$String* (*$fn89)(frost$core$Object*);
typedef frost$core$String* (*$fn101)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 2387266969933429033, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x73\x74\x75\x62", 11, 8383436683640999078, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3632450878405071376, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 85, -5898724198303538291, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 71, 7268810111558341655, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7d", 2, 559936225143567974, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Char32 local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$Int$nullable local8;
frost$core$Int64$nullable local9;
frost$core$Int$nullable local10;
frost$core$Char32 _1;
frost$core$Int32 _2;
frost$core$Char32 _3;
int32_t _6;
int32_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Int* _20;
frost$core$String$Index _22;
frost$core$String$Index _25;
frost$core$String$Index _29;
frost$core$String$Index _32;
frost$core$String$Index _37;
frost$core$Char32 _38;
frost$core$Char32 _41;
frost$core$Int32 _42;
frost$core$Char32 _43;
int32_t _46;
int32_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$core$Char32 _53;
frost$core$Int32 _54;
frost$core$Char32 _55;
int32_t _58;
int32_t _59;
bool _60;
frost$core$Bit _61;
bool _63;
frost$core$String$Index _68;
frost$core$String$Index _69;
frost$core$String$Index _72;
frost$core$Equatable* _73;
frost$core$Equatable* _74;
frost$core$String$Index _75;
frost$core$Equatable* _76;
$fn2 _77;
frost$core$Bit _78;
bool _79;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$String$Index _86;
frost$core$String$Index _87;
frost$core$Int _90;
frost$core$Int _91;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _100;
frost$core$Object* _103;
frost$json$JSON$PathKey* _107;
frost$core$Int _108;
frost$core$String$Index _109;
frost$core$String$Index _110;
frost$core$Bit _111;
frost$core$Range$LTfrost$core$String$Index$GT _112;
frost$core$String* _113;
frost$core$String$Index _114;
frost$json$JSON$PathKey* _116;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _121;
frost$core$Int32 _124;
frost$core$Char32 _125;
int32_t _128;
int32_t _129;
bool _130;
frost$core$Bit _131;
bool _133;
frost$core$String$Index _136;
frost$core$String$Index _139;
frost$core$String$Index _143;
frost$core$Char32 _144;
frost$core$Int32 _145;
frost$core$Char32 _146;
int32_t _149;
int32_t _150;
bool _151;
frost$core$Bit _152;
bool _154;
frost$core$String$Index _157;
frost$core$String$Index _158;
frost$core$String$Index _162;
frost$core$String$Index _163;
frost$core$Bit _164;
frost$core$Range$LTfrost$core$String$Index$GT _165;
frost$core$String* _166;
frost$core$Int64$nullable _169;
frost$core$Int64$nullable _172;
bool _173;
frost$core$Bit _174;
bool _175;
frost$core$Int64$nullable _178;
bool _179;
frost$core$Bit _180;
bool _181;
frost$core$Int _183;
frost$core$Int64 _186;
int64_t _189;
int64_t _190;
frost$core$Int _191;
frost$core$Int$nullable _193;
frost$core$Int$nullable _199;
frost$core$Object* _201;
frost$core$Int$nullable _204;
bool _205;
frost$core$Bit _206;
bool _207;
frost$core$Object* _210;
frost$json$JSON$PathKey* _214;
frost$core$Int _215;
frost$core$Int$nullable _216;
bool _217;
frost$core$Bit _218;
bool _219;
frost$core$Int _221;
frost$core$Int _224;
frost$core$String$Index _225;
frost$core$String$Index _226;
frost$json$JSON$PathKey* _228;
frost$core$Object* _229;
frost$core$Object* _231;
frost$core$Object* _235;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:51
_1 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, param1);
_2 = (frost$core$Int32) {47u};
_3 = frost$core$Char32$init$frost$core$Int32(_2);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:52:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_6 = _1.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:53
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:53:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:288
_16 = &param0->_length;
_17 = *_16;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.stub:288:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
_20 = &(&local1)->value;
*_20 = _17;
_22 = *(&local1);
*(&local0) = _22;
_25 = *(&local0);
*(&local2) = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:54
_29 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local3) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:55
_32 = *(&local3);
*(&local4) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:56
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:57
_37 = *(&local4);
_38 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _37);
*(&local5) = _38;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:58
_41 = *(&local5);
_42 = (frost$core$Int32) {47u};
_43 = frost$core$Char32$init$frost$core$Int32(_42);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_46 = _41.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block10; else goto block12;
block12:;
_53 = *(&local5);
_54 = (frost$core$Int32) {91u};
_55 = frost$core$Char32$init$frost$core$Int32(_54);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:58:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_58 = _53.value;
_59 = _55.value;
_60 = _58 == _59;
_61 = (frost$core$Bit) {_60};
_63 = _61.value;
if (_63) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:59
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:61
_68 = *(&local4);
_69 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _68);
*(&local4) = _69;
_72 = *(&local4);
frost$core$String$Index$wrapper* $tmp3;
$tmp3 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp3->value = _72;
_73 = ((frost$core$Equatable*) $tmp3);
_74 = _73;
_75 = *(&local2);
frost$core$String$Index$wrapper* $tmp4;
$tmp4 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp4->value = _75;
_76 = ((frost$core$Equatable*) $tmp4);
ITable* $tmp5 = _74->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5 = $tmp5->next;
}
_77 = $tmp5->methods[1];
_78 = _77(_74, _76);
_79 = _78.value;
_80 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_82);
if (_79) goto block7; else goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:64
_86 = *(&local3);
_87 = *(&local4);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:64:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:15
_90 = _86.value;
_91 = _87.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.stub:15:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_94 = _90.value;
_95 = _91.value;
_96 = _94 == _95;
_97 = (frost$core$Bit) {_96};
_100 = _97.value;
if (_100) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:65
_103 = ((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_103);
return ((frost$json$JSON$PathKey*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:67
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
_107 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
_108 = (frost$core$Int) {0u};
_109 = *(&local3);
_110 = *(&local4);
_111 = (frost$core$Bit) {false};
_112 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_109, _110, _111);
_113 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _112);
_114 = *(&local4);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index(_107, _108, _113, _114);
_116 = _107;
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_121);
return _116;
block3:;
_124 = (frost$core$Int32) {91u};
_125 = frost$core$Char32$init$frost$core$Int32(_124);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:69:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_128 = _1.value;
_129 = _125.value;
_130 = _128 == _129;
_131 = (frost$core$Bit) {_130};
_133 = _131.value;
if (_133) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:70
_136 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local6) = _136;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:71
_139 = *(&local6);
*(&local7) = _139;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:72
goto block22;
block22:;
_143 = *(&local7);
_144 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _143);
_145 = (frost$core$Int32) {93u};
_146 = frost$core$Char32$init$frost$core$Int32(_145);
// begin inline call to function frost.core.Char32.!=(other:frost.core.Char32):frost.core.Bit from JSON.frost:72:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:32
_149 = _144.value;
_150 = _146.value;
_151 = _149 != _150;
_152 = (frost$core$Bit) {_151};
_154 = _152.value;
if (_154) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:73
_157 = *(&local7);
_158 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _157);
*(&local7) = _158;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:75
_162 = *(&local6);
_163 = *(&local7);
_164 = (frost$core$Bit) {false};
_165 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_162, _163, _164);
_166 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _165);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSON.frost:75:66
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:329
_169 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_166);
*(&local9) = _169;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:330
_172 = *(&local9);
_173 = _172.nonnull;
_174 = (frost$core$Bit) {_173};
_175 = _174.value;
if (_175) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:331
_178 = *(&local9);
_179 = _178.nonnull;
_180 = (frost$core$Bit) {_179};
_181 = _180.value;
if (_181) goto block29; else goto block30;
block30:;
_183 = (frost$core$Int) {331u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _183, &$s7);
abort(); // unreachable
block29:;
_186 = ((frost$core$Int64) _178.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.stub:331:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:447
_189 = _186.value;
_190 = ((int64_t) _189);
_191 = (frost$core$Int) {_190};
_193 = ((frost$core$Int$nullable) { _191, true });
*(&local8) = _193;
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:333
*(&local8) = ((frost$core$Int$nullable) { .nonnull = false });
goto block26;
block26:;
_199 = *(&local8);
*(&local10) = _199;
_201 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_201);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:76
_204 = *(&local10);
_205 = !_204.nonnull;
_206 = (frost$core$Bit) {_205};
_207 = _206.value;
if (_207) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:77
_210 = ((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_210);
return ((frost$json$JSON$PathKey*) NULL);
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:79
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
_214 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
_215 = (frost$core$Int) {1u};
_216 = *(&local10);
_217 = _216.nonnull;
_218 = (frost$core$Bit) {_217};
_219 = _218.value;
if (_219) goto block34; else goto block35;
block35:;
_221 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _221, &$s9);
abort(); // unreachable
block34:;
_224 = ((frost$core$Int) _216.value);
_225 = *(&local7);
_226 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _225);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index(_214, _215, _224, _226);
_228 = _214;
_229 = ((frost$core$Object*) _228);
frost$core$Frost$ref$frost$core$Object$Q(_229);
_231 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_231);
return _228;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:82
_235 = ((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_235);
return ((frost$json$JSON$PathKey*) NULL);
block1:;
goto block36;
block36:;

}
frost$json$JSON* frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$json$JSON* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$String$Index local8;
frost$collections$MapView* local9 = NULL;
frost$core$Int local10;
frost$core$String$Index local11;
frost$collections$ListView* local12 = NULL;
frost$core$Int _3;
frost$core$Int* _6;
frost$core$String$Index _8;
frost$core$String$Index _11;
frost$core$Int* _17;
frost$core$Int _18;
frost$core$Int* _21;
frost$core$String$Index _23;
frost$core$String$Index _26;
frost$json$JSON* _30;
frost$core$Object* _32;
frost$json$JSON* _34;
frost$core$Object* _35;
frost$core$String$Index _40;
frost$core$Equatable* _41;
frost$core$Equatable* _42;
frost$core$String$Index _43;
frost$core$Equatable* _44;
$fn10 _45;
frost$core$Bit _46;
bool _47;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$String$Index _54;
frost$json$JSON$PathKey* _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$Int _60;
frost$core$String* _61;
frost$core$String* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _69;
frost$core$String$Index _72;
frost$json$JSON$PathKey* _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$json$JSON$PathKey* _81;
frost$core$Int* _82;
frost$core$Int _83;
frost$core$Int _84;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$core$String** _94;
frost$core$String* _95;
frost$core$Object* _97;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$String$Index* _103;
frost$core$String$Index _104;
frost$json$JSON* _107;
bool _108;
frost$core$Bit _109;
bool _110;
frost$core$Int _112;
frost$json$JSON* _115;
frost$core$Int* _116;
frost$core$Int _117;
frost$core$Int _118;
int64_t _121;
int64_t _122;
bool _123;
frost$core$Bit _124;
bool _126;
frost$collections$MapView** _128;
frost$collections$MapView* _129;
frost$core$Object* _131;
frost$collections$MapView* _133;
frost$core$Object* _134;
frost$collections$MapView* _138;
frost$collections$MapView* _139;
frost$core$String* _140;
frost$core$Object* _141;
$fn11 _142;
frost$core$Object* _143;
frost$json$JSON* _144;
frost$core$Object* _145;
frost$json$JSON* _147;
frost$core$Object* _148;
frost$core$Object* _151;
frost$json$JSON* _154;
bool _155;
frost$core$Bit _156;
bool _157;
frost$core$Object* _160;
frost$collections$MapView* _162;
frost$core$Object* _163;
frost$core$String* _166;
frost$core$Object* _167;
frost$core$Object* _170;
frost$json$JSON* _172;
frost$core$Object* _173;
frost$collections$MapView* _177;
frost$core$Object* _178;
frost$core$String$Index _197;
frost$core$String* _199;
frost$core$Object* _200;
frost$core$Object* _183;
frost$core$String* _185;
frost$core$Object* _186;
frost$core$Object* _189;
frost$json$JSON* _191;
frost$core$Object* _192;
frost$core$Int _204;
int64_t _207;
int64_t _208;
bool _209;
frost$core$Bit _210;
bool _212;
frost$core$Int* _214;
frost$core$Int _215;
frost$core$String$Index* _217;
frost$core$String$Index _218;
frost$json$JSON* _221;
bool _222;
frost$core$Bit _223;
bool _224;
frost$core$Int _226;
frost$json$JSON* _229;
frost$core$Int* _230;
frost$core$Int _231;
frost$core$Int _232;
int64_t _235;
int64_t _236;
bool _237;
frost$core$Bit _238;
bool _240;
frost$collections$ListView** _242;
frost$collections$ListView* _243;
frost$core$Object* _245;
frost$collections$ListView* _247;
frost$core$Object* _248;
frost$collections$ListView* _252;
frost$collections$ListView* _253;
frost$core$Int _254;
$fn12 _255;
frost$core$Object* _256;
frost$json$JSON* _257;
frost$json$JSON* _258;
frost$core$Object* _259;
frost$json$JSON* _261;
frost$core$Object* _262;
frost$core$Object* _265;
frost$collections$ListView* _267;
frost$core$Object* _268;
frost$core$String$Index _283;
frost$core$Object* _273;
frost$core$Object* _275;
frost$json$JSON* _277;
frost$core$Object* _278;
frost$core$Object* _286;
frost$json$JSON* _290;
frost$core$Object* _291;
frost$json$JSON* _293;
frost$core$Object* _294;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:102
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSON.frost:102:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:284
_3 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.stub:284:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
*(&local2) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:103
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:103:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:288
_17 = &param1->_length;
_18 = *_17;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.stub:288:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
_21 = &(&local4)->value;
*_21 = _18;
_23 = *(&local4);
*(&local3) = _23;
_26 = *(&local3);
*(&local5) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:104
_30 = param0;
*(&local6) = ((frost$json$JSON*) NULL);
_32 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local6);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local6) = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:105
goto block5;
block5:;
_40 = *(&local2);
frost$core$String$Index$wrapper* $tmp13;
$tmp13 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp13->value = _40;
_41 = ((frost$core$Equatable*) $tmp13);
_42 = _41;
_43 = *(&local5);
frost$core$String$Index$wrapper* $tmp14;
$tmp14 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp14->value = _43;
_44 = ((frost$core$Equatable*) $tmp14);
ITable* $tmp15 = _42->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp15 = $tmp15->next;
}
_45 = $tmp15->methods[1];
_46 = _45(_42, _44);
_47 = _46.value;
_48 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_50);
if (_47) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:106
_54 = *(&local2);
_55 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, _54);
_56 = _55 != NULL;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block8; else goto block9;
block9:;
_60 = (frost$core$Int) {106u};
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, param1);
_62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_61, &$s17);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _60, _62);
_64 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_66);
abort(); // unreachable
block8:;
_69 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_69);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:107
_72 = *(&local2);
_73 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, _72);
_74 = _73 != NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block10; else goto block11;
block11:;
_78 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _78, &$s20);
abort(); // unreachable
block10:;
_81 = _73;
_82 = &_81->$rawValue;
_83 = *_82;
_84 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:108:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_87 = _83.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block13; else goto block14;
block13:;
_94 = (frost$core$String**) (_73->$data + 0);
_95 = *_94;
*(&local7) = ((frost$core$String*) NULL);
_97 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_97);
_99 = *(&local7);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local7) = _95;
_103 = (frost$core$String$Index*) (_73->$data + 8);
_104 = *_103;
*(&local8) = _104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:109
_107 = *(&local6);
_108 = _107 != NULL;
_109 = (frost$core$Bit) {_108};
_110 = _109.value;
if (_110) goto block16; else goto block17;
block17:;
_112 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _112, &$s22);
abort(); // unreachable
block16:;
_115 = _107;
_116 = &_115->$rawValue;
_117 = *_116;
_118 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:110:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_121 = _117.value;
_122 = _118.value;
_123 = _121 == _122;
_124 = (frost$core$Bit) {_123};
_126 = _124.value;
if (_126) goto block19; else goto block20;
block19:;
_128 = (frost$collections$MapView**) (_107->$data + 0);
_129 = *_128;
*(&local9) = ((frost$collections$MapView*) NULL);
_131 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_131);
_133 = *(&local9);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local9) = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:111
_138 = *(&local9);
_139 = _138;
_140 = *(&local7);
_141 = ((frost$core$Object*) _140);
ITable* $tmp23 = _139->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp23 = $tmp23->next;
}
_142 = $tmp23->methods[1];
_143 = _142(_139, _141);
_144 = ((frost$json$JSON*) _143);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = *(&local6);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
*(&local6) = _144;
_151 = _143;
frost$core$Frost$unref$frost$core$Object$Q(_151);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:112
_154 = *(&local6);
_155 = _154 == NULL;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:113
_160 = ((frost$core$Object*) ((frost$json$JSON*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_160);
_162 = *(&local9);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local9) = ((frost$collections$MapView*) NULL);
_166 = *(&local7);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local7) = ((frost$core$String*) NULL);
_170 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_170);
_172 = *(&local6);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block23:;
_177 = *(&local9);
_178 = ((frost$core$Object*) _177);
frost$core$Frost$unref$frost$core$Object$Q(_178);
*(&local9) = ((frost$collections$MapView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:120
_197 = *(&local8);
*(&local2) = _197;
_199 = *(&local7);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:117
_183 = ((frost$core$Object*) ((frost$json$JSON*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_183);
_185 = *(&local7);
_186 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_186);
*(&local7) = ((frost$core$String*) NULL);
_189 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_189);
_191 = *(&local6);
_192 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_192);
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block14:;
_204 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:122:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_207 = _83.value;
_208 = _204.value;
_209 = _207 == _208;
_210 = (frost$core$Bit) {_209};
_212 = _210.value;
if (_212) goto block24; else goto block12;
block24:;
_214 = (frost$core$Int*) (_73->$data + 0);
_215 = *_214;
*(&local10) = _215;
_217 = (frost$core$String$Index*) (_73->$data + 8);
_218 = *_217;
*(&local11) = _218;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:123
_221 = *(&local6);
_222 = _221 != NULL;
_223 = (frost$core$Bit) {_222};
_224 = _223.value;
if (_224) goto block26; else goto block27;
block27:;
_226 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _226, &$s25);
abort(); // unreachable
block26:;
_229 = _221;
_230 = &_229->$rawValue;
_231 = *_230;
_232 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_235 = _231.value;
_236 = _232.value;
_237 = _235 == _236;
_238 = (frost$core$Bit) {_237};
_240 = _238.value;
if (_240) goto block29; else goto block30;
block29:;
_242 = (frost$collections$ListView**) (_221->$data + 0);
_243 = *_242;
*(&local12) = ((frost$collections$ListView*) NULL);
_245 = ((frost$core$Object*) _243);
frost$core$Frost$ref$frost$core$Object$Q(_245);
_247 = *(&local12);
_248 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_248);
*(&local12) = _243;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:125
_252 = *(&local12);
_253 = _252;
_254 = *(&local10);
ITable* $tmp26 = _253->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp26 = $tmp26->next;
}
_255 = $tmp26->methods[0];
_256 = _255(_253, _254);
_257 = ((frost$json$JSON*) _256);
_258 = _257;
_259 = ((frost$core$Object*) _258);
frost$core$Frost$ref$frost$core$Object$Q(_259);
_261 = *(&local6);
_262 = ((frost$core$Object*) _261);
frost$core$Frost$unref$frost$core$Object$Q(_262);
*(&local6) = _258;
_265 = _256;
frost$core$Frost$unref$frost$core$Object$Q(_265);
_267 = *(&local12);
_268 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_268);
*(&local12) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:131
_283 = *(&local11);
*(&local2) = _283;
goto block12;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:128
_273 = ((frost$core$Object*) ((frost$json$JSON*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_273);
_275 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_275);
_277 = *(&local6);
_278 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_278);
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block12:;
_286 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_286);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:135
_290 = *(&local6);
_291 = ((frost$core$Object*) _290);
frost$core$Frost$ref$frost$core$Object$Q(_291);
_293 = *(&local6);
_294 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_294);
*(&local6) = ((frost$json$JSON*) NULL);
return _290;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int local1;
$fn27 _1;
frost$json$JSON* _2;
frost$core$Object* _4;
frost$json$JSON* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$json$JSON* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$json$JSON* _19;
frost$core$Object* _20;
frost$json$JSON* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$json$JSON* _33;
frost$core$Int* _34;
frost$core$Int _35;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$Int* _46;
frost$core$Int _47;
frost$core$Int _50;
frost$core$Int64 _51;
frost$core$Int64$nullable _52;
frost$json$JSON* _53;
frost$core$Object* _54;
frost$json$JSON* _59;
frost$core$Object* _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:142
_1 = ($fn28) param0->$class->vtable[2];
_2 = _1(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:143
_13 = *(&local0);
_14 = _13 == NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:144
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:146
_25 = *(&local0);
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block3; else goto block4;
block4:;
_30 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _30, &$s30);
abort(); // unreachable
block3:;
_33 = _25;
_34 = &_33->$rawValue;
_35 = *_34;
_36 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:147:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block6; else goto block7;
block6:;
_46 = (frost$core$Int*) (_25->$data + 0);
_47 = *_46;
*(&local1) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:148
_50 = *(&local1);
_51 = frost$core$Int64$init$frost$core$Int(_50);
_52 = ((frost$core$Int64$nullable) { _51, true });
_53 = *(&local0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = ((frost$json$JSON*) NULL);
return _52;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:151
_59 = *(&local0);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block5:;
goto block9;
block9:;

}
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Real64 local1;
$fn31 _1;
frost$json$JSON* _2;
frost$core$Object* _4;
frost$json$JSON* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$json$JSON* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$json$JSON* _19;
frost$core$Object* _20;
frost$json$JSON* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$json$JSON* _33;
frost$core$Int* _34;
frost$core$Int _35;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$Real64* _46;
frost$core$Real64 _47;
frost$core$Real64 _50;
frost$core$Real64$nullable _51;
frost$json$JSON* _52;
frost$core$Object* _53;
frost$json$JSON* _58;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:160
_1 = ($fn32) param0->$class->vtable[2];
_2 = _1(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:161
_13 = *(&local0);
_14 = _13 == NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:162
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:164
_25 = *(&local0);
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block3; else goto block4;
block4:;
_30 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, _30, &$s34);
abort(); // unreachable
block3:;
_33 = _25;
_34 = &_33->$rawValue;
_35 = *_34;
_36 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:165:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block6; else goto block7;
block6:;
_46 = (frost$core$Real64*) (_25->$data + 0);
_47 = *_46;
*(&local1) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:166
_50 = *(&local1);
_51 = ((frost$core$Real64$nullable) { _50, true });
_52 = *(&local0);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local0) = ((frost$json$JSON*) NULL);
return _51;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:169
_58 = *(&local0);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block5:;
goto block9;
block9:;

}
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Bit local1;
$fn35 _1;
frost$json$JSON* _2;
frost$core$Object* _4;
frost$json$JSON* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$json$JSON* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$json$JSON* _19;
frost$core$Object* _20;
frost$json$JSON* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$json$JSON* _33;
frost$core$Int* _34;
frost$core$Int _35;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$Bit* _46;
frost$core$Bit _47;
frost$core$Bit _50;
frost$core$Bit$nullable _51;
frost$json$JSON* _52;
frost$core$Object* _53;
frost$json$JSON* _58;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:178
_1 = ($fn36) param0->$class->vtable[2];
_2 = _1(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:179
_13 = *(&local0);
_14 = _13 == NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:180
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:182
_25 = *(&local0);
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block3; else goto block4;
block4:;
_30 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _30, &$s38);
abort(); // unreachable
block3:;
_33 = _25;
_34 = &_33->$rawValue;
_35 = *_34;
_36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:183:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block6; else goto block7;
block6:;
_46 = (frost$core$Bit*) (_25->$data + 0);
_47 = *_46;
*(&local1) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:184
_50 = *(&local1);
_51 = ((frost$core$Bit$nullable) { _50, true });
_52 = *(&local0);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local0) = ((frost$json$JSON*) NULL);
return _51;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:187
_58 = *(&local0);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block5:;
goto block9;
block9:;

}
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$String* local1 = NULL;
$fn39 _1;
frost$json$JSON* _2;
frost$core$Object* _4;
frost$json$JSON* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$json$JSON* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _19;
frost$json$JSON* _21;
frost$core$Object* _22;
frost$json$JSON* _27;
bool _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _32;
frost$json$JSON* _35;
frost$core$Int* _36;
frost$core$Int _37;
frost$core$Int _38;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _46;
frost$core$String** _48;
frost$core$String* _49;
frost$core$Object* _51;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$String* _58;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$String* _62;
frost$core$Object* _63;
frost$json$JSON* _66;
frost$core$Object* _67;
frost$core$Object* _72;
frost$json$JSON* _74;
frost$core$Object* _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:196
_1 = ($fn40) param0->$class->vtable[2];
_2 = _1(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:197
_13 = *(&local0);
_14 = _13 == NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:198
_19 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:200
_27 = *(&local0);
_28 = _27 != NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block3; else goto block4;
block4:;
_32 = (frost$core$Int) {200u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _32, &$s42);
abort(); // unreachable
block3:;
_35 = _27;
_36 = &_35->$rawValue;
_37 = *_36;
_38 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:201:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block6; else goto block7;
block6:;
_48 = (frost$core$String**) (_27->$data + 0);
_49 = *_48;
*(&local1) = ((frost$core$String*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:202
_58 = *(&local1);
_59 = _58;
_60 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = *(&local1);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local1) = ((frost$core$String*) NULL);
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local0) = ((frost$json$JSON*) NULL);
return _59;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:205
_72 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = *(&local0);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block5:;
goto block9;
block9:;

}
frost$collections$ListView* frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
$fn43 _1;
frost$json$JSON* _2;
frost$core$Object* _4;
frost$json$JSON* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$json$JSON* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _19;
frost$json$JSON* _21;
frost$core$Object* _22;
frost$json$JSON* _27;
bool _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _32;
frost$json$JSON* _35;
frost$core$Int* _36;
frost$core$Int _37;
frost$core$Int _38;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _46;
frost$collections$ListView** _48;
frost$collections$ListView* _49;
frost$core$Object* _51;
frost$collections$ListView* _53;
frost$core$Object* _54;
frost$collections$ListView* _58;
frost$collections$ListView* _59;
frost$core$Object* _60;
frost$collections$ListView* _62;
frost$core$Object* _63;
frost$json$JSON* _66;
frost$core$Object* _67;
frost$core$Object* _72;
frost$json$JSON* _74;
frost$core$Object* _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:214
_1 = ($fn44) param0->$class->vtable[2];
_2 = _1(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:215
_13 = *(&local0);
_14 = _13 == NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:216
_19 = ((frost$core$Object*) ((frost$collections$ListView*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:218
_27 = *(&local0);
_28 = _27 != NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block3; else goto block4;
block4:;
_32 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _32, &$s46);
abort(); // unreachable
block3:;
_35 = _27;
_36 = &_35->$rawValue;
_37 = *_36;
_38 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:219:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block6; else goto block7;
block6:;
_48 = (frost$collections$ListView**) (_27->$data + 0);
_49 = *_48;
*(&local1) = ((frost$collections$ListView*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:220
_58 = *(&local1);
_59 = _58;
_60 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = *(&local1);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local1) = ((frost$collections$ListView*) NULL);
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local0) = ((frost$json$JSON*) NULL);
return _59;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:223
_72 = ((frost$core$Object*) ((frost$collections$ListView*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = *(&local0);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block5:;
goto block9;
block9:;

}
frost$collections$MapView* frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
$fn47 _1;
frost$json$JSON* _2;
frost$core$Object* _4;
frost$json$JSON* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$json$JSON* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _19;
frost$json$JSON* _21;
frost$core$Object* _22;
frost$json$JSON* _27;
bool _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _32;
frost$json$JSON* _35;
frost$core$Int* _36;
frost$core$Int _37;
frost$core$Int _38;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _46;
frost$collections$MapView** _48;
frost$collections$MapView* _49;
frost$core$Object* _51;
frost$collections$MapView* _53;
frost$core$Object* _54;
frost$collections$MapView* _58;
frost$collections$MapView* _59;
frost$core$Object* _60;
frost$collections$MapView* _62;
frost$core$Object* _63;
frost$json$JSON* _66;
frost$core$Object* _67;
frost$core$Object* _72;
frost$json$JSON* _74;
frost$core$Object* _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:232
_1 = ($fn48) param0->$class->vtable[2];
_2 = _1(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:233
_13 = *(&local0);
_14 = _13 == NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:234
_19 = ((frost$core$Object*) ((frost$collections$MapView*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:236
_27 = *(&local0);
_28 = _27 != NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block3; else goto block4;
block4:;
_32 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _32, &$s50);
abort(); // unreachable
block3:;
_35 = _27;
_36 = &_35->$rawValue;
_37 = *_36;
_38 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:237:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block6; else goto block7;
block6:;
_48 = (frost$collections$MapView**) (_27->$data + 0);
_49 = *_48;
*(&local1) = ((frost$collections$MapView*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:238
_58 = *(&local1);
_59 = _58;
_60 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = *(&local1);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local1) = ((frost$collections$MapView*) NULL);
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local0) = ((frost$json$JSON*) NULL);
return _59;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:241
_72 = ((frost$core$Object*) ((frost$collections$MapView*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = *(&local0);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block5:;
goto block9;
block9:;

}
frost$core$Int64 frost$json$JSON$get_asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int _17;
frost$core$Int64 _18;
frost$core$Int _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:251
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:252:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$Int*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:253
_17 = *(&local0);
_18 = frost$core$Int64$init$frost$core$Int(_17);
return _18;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:256
_21 = (frost$core$Int) {256u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s51, _21);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Real64 frost$json$JSON$get_asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Real64* _13;
frost$core$Real64 _14;
frost$core$Real64 _17;
frost$core$Int _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:266
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:267:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$Real64*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:268
_17 = *(&local0);
return _17;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:271
_20 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, _20);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Bit frost$json$JSON$get_asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Bit* _13;
frost$core$Bit _14;
frost$core$Bit _17;
frost$core$Int _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:281
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:282:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$Bit*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:283
_17 = *(&local0);
return _17;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:286
_20 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _20);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$MapView* frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$collections$MapView** _13;
frost$collections$MapView* _14;
frost$core$Object* _16;
frost$collections$MapView* _18;
frost$core$Object* _19;
frost$collections$MapView* _23;
frost$core$Object* _24;
frost$collections$MapView* _26;
frost$core$Object* _27;
frost$core$Int _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:296
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:297:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$collections$MapView**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$collections$MapView*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:298
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = *(&local0);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
*(&local0) = ((frost$collections$MapView*) NULL);
return _23;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:301
_32 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s54, _32);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$ListView* frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$collections$ListView** _13;
frost$collections$ListView* _14;
frost$core$Object* _16;
frost$collections$ListView* _18;
frost$core$Object* _19;
frost$collections$ListView* _23;
frost$core$Object* _24;
frost$collections$ListView* _26;
frost$core$Object* _27;
frost$core$Int _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:311
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:312:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$collections$ListView**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$collections$ListView*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:313
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = *(&local0);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
*(&local0) = ((frost$collections$ListView*) NULL);
return _23;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:316
_32 = (frost$core$Int) {316u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s55, _32);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$String* frost$json$JSON$get_asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$Int local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$core$MutableString* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$collections$ListView* local8 = NULL;
frost$core$MutableString* local9 = NULL;
frost$core$String* local10 = NULL;
frost$json$JSON* local11 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int _17;
frost$core$Object* _18;
$fn56 _19;
frost$core$String* _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Int _28;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _36;
frost$core$Real64* _38;
frost$core$Real64 _39;
frost$core$Real64 _42;
frost$core$Object* _43;
$fn57 _44;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Int _53;
int64_t _56;
int64_t _57;
bool _58;
frost$core$Bit _59;
bool _61;
frost$core$String** _63;
frost$core$String* _64;
frost$core$Object* _66;
frost$core$String* _68;
frost$core$Object* _69;
frost$core$String* _73;
frost$core$String* _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$Int _84;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$core$Bit* _94;
frost$core$Bit _95;
frost$core$Bit _98;
frost$core$Object* _99;
$fn58 _100;
frost$core$String* _101;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Object* _106;
frost$core$Int _109;
int64_t _112;
int64_t _113;
bool _114;
frost$core$Bit _115;
bool _117;
frost$collections$MapView** _119;
frost$collections$MapView* _120;
frost$core$Object* _122;
frost$collections$MapView* _124;
frost$core$Object* _125;
frost$core$MutableString* _129;
frost$core$Object* _132;
frost$core$MutableString* _134;
frost$core$Object* _135;
frost$core$Object* _138;
frost$core$Object* _142;
frost$core$String* _144;
frost$core$Object* _145;
frost$collections$MapView* _149;
frost$collections$MapView* _150;
$fn59 _151;
frost$collections$Iterator* _152;
frost$collections$Iterator* _153;
frost$collections$Iterator* _155;
$fn60 _156;
frost$core$Bit _157;
bool _158;
frost$collections$Iterator* _161;
$fn61 _162;
frost$core$Object* _163;
frost$core$String* _164;
frost$core$Object* _165;
frost$core$String* _167;
frost$core$Object* _168;
frost$core$MutableString* _172;
frost$core$String* _173;
frost$core$Object* _176;
frost$core$String* _179;
frost$core$String* _180;
frost$core$Formattable* _181;
$fn62 _182;
frost$core$String* _183;
frost$core$String* _184;
frost$core$String* _185;
frost$collections$MapView* _186;
frost$collections$MapView* _187;
frost$core$String* _188;
frost$core$Object* _189;
$fn63 _190;
frost$core$Object* _191;
frost$json$JSON* _192;
bool _193;
frost$core$Bit _194;
bool _195;
frost$core$Int _197;
frost$core$Object* _200;
$fn64 _203;
frost$core$String* _204;
frost$core$String* _205;
frost$core$Object* _206;
frost$core$Object* _208;
frost$core$Object* _210;
frost$core$String* _213;
frost$core$Object* _215;
frost$core$Object* _217;
frost$core$Object* _219;
frost$core$Object* _221;
frost$core$Object* _223;
frost$core$Object* _225;
frost$core$Object* _227;
frost$core$Object* _229;
frost$core$Object* _232;
frost$core$String* _234;
frost$core$Object* _235;
frost$core$Object* _238;
frost$core$String* _240;
frost$core$Object* _241;
frost$core$Object* _245;
frost$core$MutableString* _248;
frost$core$MutableString* _251;
frost$core$String* _252;
frost$core$Object* _253;
frost$core$Object* _255;
frost$core$String* _257;
frost$core$Object* _258;
frost$core$MutableString* _261;
frost$core$Object* _262;
frost$collections$MapView* _265;
frost$core$Object* _266;
frost$core$Int _270;
int64_t _273;
int64_t _274;
bool _275;
frost$core$Bit _276;
bool _278;
frost$collections$ListView** _280;
frost$collections$ListView* _281;
frost$core$Object* _283;
frost$collections$ListView* _285;
frost$core$Object* _286;
frost$core$MutableString* _290;
frost$core$Object* _293;
frost$core$MutableString* _295;
frost$core$Object* _296;
frost$core$Object* _299;
frost$core$Object* _303;
frost$core$String* _305;
frost$core$Object* _306;
frost$collections$ListView* _310;
frost$collections$Iterable* _311;
frost$collections$Iterable* _312;
$fn65 _313;
frost$collections$Iterator* _314;
frost$collections$Iterator* _315;
frost$collections$Iterator* _317;
$fn66 _318;
frost$core$Bit _319;
bool _320;
frost$collections$Iterator* _323;
$fn67 _324;
frost$core$Object* _325;
frost$json$JSON* _326;
frost$core$Object* _327;
frost$json$JSON* _329;
frost$core$Object* _330;
frost$core$MutableString* _334;
frost$core$String* _335;
frost$core$Object* _338;
frost$core$String* _341;
frost$json$JSON* _342;
frost$core$Object* _343;
$fn68 _346;
frost$core$String* _347;
frost$core$String* _348;
frost$core$Object* _349;
frost$core$Object* _351;
frost$core$Object* _353;
frost$core$String* _356;
frost$core$Object* _358;
frost$core$Object* _360;
frost$core$Object* _362;
frost$core$Object* _364;
frost$core$Object* _367;
frost$core$String* _369;
frost$core$Object* _370;
frost$core$Object* _373;
frost$json$JSON* _375;
frost$core$Object* _376;
frost$core$Object* _380;
frost$core$MutableString* _383;
frost$core$MutableString* _386;
frost$core$String* _387;
frost$core$Object* _388;
frost$core$Object* _390;
frost$core$String* _392;
frost$core$Object* _393;
frost$core$MutableString* _396;
frost$core$Object* _397;
frost$collections$ListView* _400;
frost$core$Object* _401;
frost$core$Int _405;
int64_t _408;
int64_t _409;
bool _410;
frost$core$Bit _411;
bool _413;
frost$core$Object* _416;
frost$core$Int _420;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:326
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:327:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$Int*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:328
_17 = *(&local0);
frost$core$Int$wrapper* $tmp69;
$tmp69 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp69->value = _17;
_18 = ((frost$core$Object*) $tmp69);
_19 = ($fn70) _18->$class->vtable[0];
_20 = _19(_18);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_25);
return _20;
block3:;
_28 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:330:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_31 = _2.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block5; else goto block6;
block5:;
_38 = (frost$core$Real64*) (param0->$data + 0);
_39 = *_38;
*(&local1) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:331
_42 = *(&local1);
frost$core$Real64$wrapper* $tmp71;
$tmp71 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp71->value = _42;
_43 = ((frost$core$Object*) $tmp71);
_44 = ($fn72) _43->$class->vtable[0];
_45 = _44(_43);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_50);
return _45;
block6:;
_53 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:333:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_56 = _2.value;
_57 = _53.value;
_58 = _56 == _57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block8; else goto block9;
block8:;
_63 = (frost$core$String**) (param0->$data + 0);
_64 = *_63;
*(&local2) = ((frost$core$String*) NULL);
_66 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local2);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local2) = _64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:334
_73 = *(&local2);
_74 = frost$core$String$format$frost$core$String$R$frost$core$String(_73, &$s73);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = *(&local2);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local2) = ((frost$core$String*) NULL);
return _74;
block9:;
_84 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:336:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_87 = _2.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block11; else goto block12;
block11:;
_94 = (frost$core$Bit*) (param0->$data + 0);
_95 = *_94;
*(&local3) = _95;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:337
_98 = *(&local3);
frost$core$Bit$wrapper* $tmp74;
$tmp74 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp74->value = _98;
_99 = ((frost$core$Object*) $tmp74);
_100 = ($fn75) _99->$class->vtable[0];
_101 = _100(_99);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = _99;
frost$core$Frost$unref$frost$core$Object$Q(_106);
return _101;
block12:;
_109 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:339:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_112 = _2.value;
_113 = _109.value;
_114 = _112 == _113;
_115 = (frost$core$Bit) {_114};
_117 = _115.value;
if (_117) goto block14; else goto block15;
block14:;
_119 = (frost$collections$MapView**) (param0->$data + 0);
_120 = *_119;
*(&local4) = ((frost$collections$MapView*) NULL);
_122 = ((frost$core$Object*) _120);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local4);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local4) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:340
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_129 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_129, &$s76);
*(&local5) = ((frost$core$MutableString*) NULL);
_132 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_132);
_134 = *(&local5);
_135 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_135);
*(&local5) = _129;
_138 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_138);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:341
*(&local6) = ((frost$core$String*) NULL);
_142 = ((frost$core$Object*) &$s77);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local6);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local6) = &$s78;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:342
_149 = *(&local4);
_150 = _149;
ITable* $tmp79 = _150->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp79 = $tmp79->next;
}
_151 = $tmp79->methods[4];
_152 = _151(_150);
_153 = _152;
goto block17;
block17:;
_155 = _153;
ITable* $tmp80 = _155->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
_156 = $tmp80->methods[0];
_157 = _156(_155);
_158 = _157.value;
if (_158) goto block19; else goto block18;
block18:;
*(&local7) = ((frost$core$String*) NULL);
_161 = _153;
ITable* $tmp81 = _161->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
_162 = $tmp81->methods[1];
_163 = _162(_161);
_164 = ((frost$core$String*) _163);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = *(&local7);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local7) = _164;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:343
_172 = *(&local5);
_173 = *(&local6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:112
_176 = ((frost$core$Object*) _173);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_173, &$s82);
_180 = *(&local7);
_181 = ((frost$core$Formattable*) _180);
ITable* $tmp83 = _181->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp83 = $tmp83->next;
}
_182 = $tmp83->methods[0];
_183 = _182(_181, &$s84);
_184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_179, _183);
_185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_184, &$s85);
_186 = *(&local4);
_187 = _186;
_188 = *(&local7);
_189 = ((frost$core$Object*) _188);
ITable* $tmp86 = _187->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp86 = $tmp86->next;
}
_190 = $tmp86->methods[1];
_191 = _190(_187, _189);
_192 = ((frost$json$JSON*) _191);
_193 = _192 != NULL;
_194 = (frost$core$Bit) {_193};
_195 = _194.value;
if (_195) goto block21; else goto block22;
block22:;
_197 = (frost$core$Int) {343u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _197, &$s88);
abort(); // unreachable
block21:;
_200 = ((frost$core$Object*) _192);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_203 = ($fn89) _200->$class->vtable[0];
_204 = _203(_200);
_205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_185, _204);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$ref$frost$core$Object$Q(_206);
_208 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_208);
_210 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_210);
_213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_205, &$s90);
frost$core$MutableString$append$frost$core$String(_172, _213);
_215 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_215);
_217 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_217);
_219 = _191;
frost$core$Frost$unref$frost$core$Object$Q(_219);
_221 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_221);
_223 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_223);
_225 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_225);
_227 = ((frost$core$Object*) _179);
frost$core$Frost$unref$frost$core$Object$Q(_227);
_229 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_229);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:344
_232 = ((frost$core$Object*) &$s91);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = *(&local6);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_235);
*(&local6) = &$s92;
_238 = _163;
frost$core$Frost$unref$frost$core$Object$Q(_238);
_240 = *(&local7);
_241 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_241);
*(&local7) = ((frost$core$String*) NULL);
goto block17;
block19:;
_245 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_245);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:346
_248 = *(&local5);
frost$core$MutableString$append$frost$core$String(_248, &$s93);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:347
_251 = *(&local5);
_252 = frost$core$MutableString$finish$R$frost$core$String(_251);
_253 = ((frost$core$Object*) _252);
frost$core$Frost$ref$frost$core$Object$Q(_253);
_255 = ((frost$core$Object*) _252);
frost$core$Frost$unref$frost$core$Object$Q(_255);
_257 = *(&local6);
_258 = ((frost$core$Object*) _257);
frost$core$Frost$unref$frost$core$Object$Q(_258);
*(&local6) = ((frost$core$String*) NULL);
_261 = *(&local5);
_262 = ((frost$core$Object*) _261);
frost$core$Frost$unref$frost$core$Object$Q(_262);
*(&local5) = ((frost$core$MutableString*) NULL);
_265 = *(&local4);
_266 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_266);
*(&local4) = ((frost$collections$MapView*) NULL);
return _252;
block15:;
_270 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:349:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_273 = _2.value;
_274 = _270.value;
_275 = _273 == _274;
_276 = (frost$core$Bit) {_275};
_278 = _276.value;
if (_278) goto block24; else goto block25;
block24:;
_280 = (frost$collections$ListView**) (param0->$data + 0);
_281 = *_280;
*(&local8) = ((frost$collections$ListView*) NULL);
_283 = ((frost$core$Object*) _281);
frost$core$Frost$ref$frost$core$Object$Q(_283);
_285 = *(&local8);
_286 = ((frost$core$Object*) _285);
frost$core$Frost$unref$frost$core$Object$Q(_286);
*(&local8) = _281;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:350
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_290 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_290, &$s94);
*(&local9) = ((frost$core$MutableString*) NULL);
_293 = ((frost$core$Object*) _290);
frost$core$Frost$ref$frost$core$Object$Q(_293);
_295 = *(&local9);
_296 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_296);
*(&local9) = _290;
_299 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_299);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:351
*(&local10) = ((frost$core$String*) NULL);
_303 = ((frost$core$Object*) &$s95);
frost$core$Frost$ref$frost$core$Object$Q(_303);
_305 = *(&local10);
_306 = ((frost$core$Object*) _305);
frost$core$Frost$unref$frost$core$Object$Q(_306);
*(&local10) = &$s96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:352
_310 = *(&local8);
_311 = ((frost$collections$Iterable*) _310);
_312 = _311;
ITable* $tmp97 = _312->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp97 = $tmp97->next;
}
_313 = $tmp97->methods[0];
_314 = _313(_312);
_315 = _314;
goto block27;
block27:;
_317 = _315;
ITable* $tmp98 = _317->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
_318 = $tmp98->methods[0];
_319 = _318(_317);
_320 = _319.value;
if (_320) goto block29; else goto block28;
block28:;
*(&local11) = ((frost$json$JSON*) NULL);
_323 = _315;
ITable* $tmp99 = _323->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp99 = $tmp99->next;
}
_324 = $tmp99->methods[1];
_325 = _324(_323);
_326 = ((frost$json$JSON*) _325);
_327 = ((frost$core$Object*) _326);
frost$core$Frost$ref$frost$core$Object$Q(_327);
_329 = *(&local11);
_330 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_330);
*(&local11) = _326;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:353
_334 = *(&local9);
_335 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:112
_338 = ((frost$core$Object*) _335);
frost$core$Frost$ref$frost$core$Object$Q(_338);
_341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_335, &$s100);
_342 = *(&local11);
_343 = ((frost$core$Object*) _342);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_346 = ($fn101) _343->$class->vtable[0];
_347 = _346(_343);
_348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_341, _347);
_349 = ((frost$core$Object*) _348);
frost$core$Frost$ref$frost$core$Object$Q(_349);
_351 = ((frost$core$Object*) _348);
frost$core$Frost$unref$frost$core$Object$Q(_351);
_353 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_353);
_356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_348, &$s102);
frost$core$MutableString$append$frost$core$String(_334, _356);
_358 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_358);
_360 = ((frost$core$Object*) _348);
frost$core$Frost$unref$frost$core$Object$Q(_360);
_362 = ((frost$core$Object*) _341);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_364 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_364);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:354
_367 = ((frost$core$Object*) &$s103);
frost$core$Frost$ref$frost$core$Object$Q(_367);
_369 = *(&local10);
_370 = ((frost$core$Object*) _369);
frost$core$Frost$unref$frost$core$Object$Q(_370);
*(&local10) = &$s104;
_373 = _325;
frost$core$Frost$unref$frost$core$Object$Q(_373);
_375 = *(&local11);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_376);
*(&local11) = ((frost$json$JSON*) NULL);
goto block27;
block29:;
_380 = ((frost$core$Object*) _314);
frost$core$Frost$unref$frost$core$Object$Q(_380);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:356
_383 = *(&local9);
frost$core$MutableString$append$frost$core$String(_383, &$s105);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:357
_386 = *(&local9);
_387 = frost$core$MutableString$finish$R$frost$core$String(_386);
_388 = ((frost$core$Object*) _387);
frost$core$Frost$ref$frost$core$Object$Q(_388);
_390 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_390);
_392 = *(&local10);
_393 = ((frost$core$Object*) _392);
frost$core$Frost$unref$frost$core$Object$Q(_393);
*(&local10) = ((frost$core$String*) NULL);
_396 = *(&local9);
_397 = ((frost$core$Object*) _396);
frost$core$Frost$unref$frost$core$Object$Q(_397);
*(&local9) = ((frost$core$MutableString*) NULL);
_400 = *(&local8);
_401 = ((frost$core$Object*) _400);
frost$core$Frost$unref$frost$core$Object$Q(_401);
*(&local8) = ((frost$collections$ListView*) NULL);
return _387;
block25:;
_405 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:359:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_408 = _2.value;
_409 = _405.value;
_410 = _408 == _409;
_411 = (frost$core$Bit) {_410};
_413 = _411.value;
if (_413) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:360
_416 = ((frost$core$Object*) &$s106);
frost$core$Frost$ref$frost$core$Object$Q(_416);
return &$s107;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:363
_420 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s108, _420);
abort(); // unreachable
block1:;
goto block35;
block35:;

}
void frost$json$JSON$cleanup(frost$json$JSON* param0) {

frost$core$Int local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$collections$ListView* local5 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Real64* _27;
frost$core$Real64 _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$String** _41;
frost$core$String* _42;
frost$core$Object* _44;
frost$core$String* _46;
frost$core$Object* _47;
frost$core$String* _51;
frost$core$Object* _52;
frost$core$String* _54;
frost$core$Object* _55;
frost$core$Int _59;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _67;
frost$core$Bit* _69;
frost$core$Bit _70;
frost$core$Int _73;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _81;
frost$collections$MapView** _83;
frost$collections$MapView* _84;
frost$core$Object* _86;
frost$collections$MapView* _88;
frost$core$Object* _89;
frost$collections$MapView* _93;
frost$core$Object* _94;
frost$collections$MapView* _96;
frost$core$Object* _97;
frost$core$Int _101;
int64_t _104;
int64_t _105;
bool _106;
frost$core$Bit _107;
bool _109;
frost$collections$ListView** _111;
frost$collections$ListView* _112;
frost$core$Object* _114;
frost$collections$ListView* _116;
frost$core$Object* _117;
frost$collections$ListView* _121;
frost$core$Object* _122;
frost$collections$ListView* _124;
frost$core$Object* _125;
frost$core$Int _129;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _137;
frost$core$Object* _141;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$Int*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
goto block1;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
_27 = (frost$core$Real64*) (param0->$data + 0);
_28 = *_27;
*(&local1) = _28;
goto block1;
block6:;
_31 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block8; else goto block9;
block8:;
_41 = (frost$core$String**) (param0->$data + 0);
_42 = *_41;
*(&local2) = ((frost$core$String*) NULL);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local2);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local2) = _42;
// <no location>
_51 = *(&local2);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = *(&local2);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block9:;
_59 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_62 = _2.value;
_63 = _59.value;
_64 = _62 == _63;
_65 = (frost$core$Bit) {_64};
_67 = _65.value;
if (_67) goto block11; else goto block12;
block11:;
_69 = (frost$core$Bit*) (param0->$data + 0);
_70 = *_69;
*(&local3) = _70;
goto block1;
block12:;
_73 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_76 = _2.value;
_77 = _73.value;
_78 = _76 == _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
if (_81) goto block14; else goto block15;
block14:;
_83 = (frost$collections$MapView**) (param0->$data + 0);
_84 = *_83;
*(&local4) = ((frost$collections$MapView*) NULL);
_86 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = *(&local4);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local4) = _84;
// <no location>
_93 = *(&local4);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local4);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block15:;
_101 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_104 = _2.value;
_105 = _101.value;
_106 = _104 == _105;
_107 = (frost$core$Bit) {_106};
_109 = _107.value;
if (_109) goto block17; else goto block18;
block17:;
_111 = (frost$collections$ListView**) (param0->$data + 0);
_112 = *_111;
*(&local5) = ((frost$collections$ListView*) NULL);
_114 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = *(&local5);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local5) = _112;
// <no location>
_121 = *(&local5);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = *(&local5);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block18:;
_129 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_132 = _2.value;
_133 = _129.value;
_134 = _132 == _133;
_135 = (frost$core$Bit) {_134};
_137 = _135.value;
if (_137) goto block20; else goto block1;
block20:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_141 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_141);
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Int(frost$json$JSON* param0, frost$core$Int param1, frost$core$Int param2) {

frost$core$Int* _1;
frost$core$Int* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = (frost$core$Int*) (param0->$data + 0);
*_4 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Real64(frost$json$JSON* param0, frost$core$Int param1, frost$core$Real64 param2) {

frost$core$Int* _1;
frost$core$Real64* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = (frost$core$Real64*) (param0->$data + 0);
*_4 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$String(frost$json$JSON* param0, frost$core$Int param1, frost$core$String* param2) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$core$String**) (param0->$data + 0);
*_6 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Bit(frost$json$JSON* param0, frost$core$Int param1, frost$core$Bit param2) {

frost$core$Int* _1;
frost$core$Bit* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = (frost$core$Bit*) (param0->$data + 0);
*_4 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int param1, frost$collections$MapView* param2) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$collections$MapView** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$collections$MapView**) (param0->$data + 0);
*_6 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int param1, frost$collections$ListView* param2) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$collections$ListView** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$collections$ListView**) (param0->$data + 0);
*_6 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int(frost$json$JSON* param0, frost$core$Int param1) {

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
return;

}

