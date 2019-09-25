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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 2387266969933429033, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3632450878405071376, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 85, -5898724198303538291, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 71, 7268810111558341655, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x7d", 2, 559936225143567974, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

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
frost$core$String$Index _74;
frost$core$Equatable* _75;
$fn2 _76;
frost$core$Bit _77;
bool _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$String$Index _85;
frost$core$String$Index _86;
frost$core$Int _89;
frost$core$Int _90;
int64_t _93;
int64_t _94;
bool _95;
frost$core$Bit _96;
bool _99;
frost$core$Object* _102;
frost$json$JSON$PathKey* _106;
frost$core$Int _107;
frost$core$String$Index _108;
frost$core$String$Index _109;
frost$core$Bit _110;
frost$core$Range$LTfrost$core$String$Index$GT _111;
frost$core$String* _112;
frost$core$String$Index _113;
frost$json$JSON$PathKey* _115;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Int32 _123;
frost$core$Char32 _124;
int32_t _127;
int32_t _128;
bool _129;
frost$core$Bit _130;
bool _132;
frost$core$String$Index _135;
frost$core$String$Index _138;
frost$core$String$Index _142;
frost$core$Char32 _143;
frost$core$Int32 _144;
frost$core$Char32 _145;
int32_t _148;
int32_t _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$core$String$Index _156;
frost$core$String$Index _157;
frost$core$String$Index _161;
frost$core$String$Index _162;
frost$core$Bit _163;
frost$core$Range$LTfrost$core$String$Index$GT _164;
frost$core$String* _165;
frost$core$Int64$nullable _168;
frost$core$Int64$nullable _171;
bool _172;
frost$core$Bit _173;
bool _174;
frost$core$Int64$nullable _177;
bool _178;
frost$core$Bit _179;
bool _180;
frost$core$Int _182;
frost$core$Int64 _185;
int64_t _188;
int64_t _189;
frost$core$Int _190;
frost$core$Int$nullable _192;
frost$core$Int$nullable _198;
frost$core$Object* _200;
frost$core$Int$nullable _203;
bool _204;
frost$core$Bit _205;
bool _206;
frost$core$Object* _209;
frost$json$JSON$PathKey* _213;
frost$core$Int _214;
frost$core$Int$nullable _215;
bool _216;
frost$core$Bit _217;
bool _218;
frost$core$Int _220;
frost$core$Int _223;
frost$core$String$Index _224;
frost$core$String$Index _225;
frost$json$JSON$PathKey* _227;
frost$core$Object* _228;
frost$core$Object* _230;
frost$core$Object* _234;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_16 = &param0->_length;
_17 = *_16;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
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
$tmp3 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp3->value = _72;
_73 = ((frost$core$Equatable*) $tmp3);
_74 = *(&local2);
frost$core$String$Index$wrapper* $tmp4;
$tmp4 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp4->value = _74;
_75 = ((frost$core$Equatable*) $tmp4);
ITable* $tmp5 = _73->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5 = $tmp5->next;
}
_76 = $tmp5->methods[1];
_77 = _76(_73, _75);
_78 = _77.value;
_79 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_81);
if (_78) goto block7; else goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:64
_85 = *(&local3);
_86 = *(&local4);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:64:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_89 = _85.value;
_90 = _86.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_93 = _89.value;
_94 = _90.value;
_95 = _93 == _94;
_96 = (frost$core$Bit) {_95};
_99 = _96.value;
if (_99) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:65
_102 = ((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_102);
return ((frost$json$JSON$PathKey*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:67
_106 = (frost$json$JSON$PathKey*) frostObjectAlloc(sizeof(frost$json$JSON$PathKey), (frost$core$Class*) &frost$json$JSON$PathKey$class);
_107 = (frost$core$Int) {0u};
_108 = *(&local3);
_109 = *(&local4);
_110 = (frost$core$Bit) {false};
_111 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_108, _109, _110);
_112 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _111);
_113 = *(&local4);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index(_106, _107, _112, _113);
_115 = _106;
_116 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_120);
return _115;
block3:;
_123 = (frost$core$Int32) {91u};
_124 = frost$core$Char32$init$frost$core$Int32(_123);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:69:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_127 = _1.value;
_128 = _124.value;
_129 = _127 == _128;
_130 = (frost$core$Bit) {_129};
_132 = _130.value;
if (_132) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:70
_135 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local6) = _135;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:71
_138 = *(&local6);
*(&local7) = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:72
goto block22;
block22:;
_142 = *(&local7);
_143 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _142);
_144 = (frost$core$Int32) {93u};
_145 = frost$core$Char32$init$frost$core$Int32(_144);
// begin inline call to function frost.core.Char32.!=(other:frost.core.Char32):frost.core.Bit from JSON.frost:72:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:32
_148 = _143.value;
_149 = _145.value;
_150 = _148 != _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:73
_156 = *(&local7);
_157 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _156);
*(&local7) = _157;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:75
_161 = *(&local6);
_162 = *(&local7);
_163 = (frost$core$Bit) {false};
_164 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_161, _162, _163);
_165 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _164);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSON.frost:75:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_168 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_165);
*(&local9) = _168;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_171 = *(&local9);
_172 = _171.nonnull;
_173 = (frost$core$Bit) {_172};
_174 = _173.value;
if (_174) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_177 = *(&local9);
_178 = _177.nonnull;
_179 = (frost$core$Bit) {_178};
_180 = _179.value;
if (_180) goto block29; else goto block30;
block30:;
_182 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _182, &$s7);
abort(); // unreachable
block29:;
_185 = ((frost$core$Int64) _177.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_188 = _185.value;
_189 = ((int64_t) _188);
_190 = (frost$core$Int) {_189};
_192 = ((frost$core$Int$nullable) { _190, true });
*(&local8) = _192;
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local8) = ((frost$core$Int$nullable) { .nonnull = false });
goto block26;
block26:;
_198 = *(&local8);
*(&local10) = _198;
_200 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_200);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:76
_203 = *(&local10);
_204 = !_203.nonnull;
_205 = (frost$core$Bit) {_204};
_206 = _205.value;
if (_206) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:77
_209 = ((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_209);
return ((frost$json$JSON$PathKey*) NULL);
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:79
_213 = (frost$json$JSON$PathKey*) frostObjectAlloc(sizeof(frost$json$JSON$PathKey), (frost$core$Class*) &frost$json$JSON$PathKey$class);
_214 = (frost$core$Int) {1u};
_215 = *(&local10);
_216 = _215.nonnull;
_217 = (frost$core$Bit) {_216};
_218 = _217.value;
if (_218) goto block34; else goto block35;
block35:;
_220 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _220, &$s9);
abort(); // unreachable
block34:;
_223 = ((frost$core$Int) _215.value);
_224 = *(&local7);
_225 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _224);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index(_213, _214, _223, _225);
_227 = _213;
_228 = ((frost$core$Object*) _227);
frost$core$Frost$ref$frost$core$Object$Q(_228);
_230 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_230);
return _227;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:82
_234 = ((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_234);
return ((frost$json$JSON$PathKey*) NULL);
block1:;
goto block36;
block36:;

}
frost$json$JSON* frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
frost$core$String$Index _42;
frost$core$Equatable* _43;
$fn10 _44;
frost$core$Bit _45;
bool _46;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$String$Index _53;
frost$json$JSON$PathKey* _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$core$Int _59;
frost$core$String* _60;
frost$core$String* _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _68;
frost$core$String$Index _71;
frost$json$JSON$PathKey* _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _77;
frost$json$JSON$PathKey* _80;
frost$core$Int* _81;
frost$core$Int _82;
frost$core$Int _83;
int64_t _86;
int64_t _87;
bool _88;
frost$core$Bit _89;
bool _91;
frost$core$String** _93;
frost$core$String* _94;
frost$core$Object* _96;
frost$core$String* _98;
frost$core$Object* _99;
frost$core$String$Index* _102;
frost$core$String$Index _103;
frost$json$JSON* _106;
bool _107;
frost$core$Bit _108;
bool _109;
frost$core$Int _111;
frost$json$JSON* _114;
frost$core$Int* _115;
frost$core$Int _116;
frost$core$Int _117;
int64_t _120;
int64_t _121;
bool _122;
frost$core$Bit _123;
bool _125;
frost$collections$MapView** _127;
frost$collections$MapView* _128;
frost$core$Object* _130;
frost$collections$MapView* _132;
frost$core$Object* _133;
frost$collections$MapView* _137;
frost$core$String* _138;
frost$core$Object* _139;
$fn11 _140;
frost$core$Object* _141;
frost$json$JSON* _142;
frost$core$Object* _143;
frost$json$JSON* _145;
frost$core$Object* _146;
frost$core$Object* _149;
frost$json$JSON* _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Object* _158;
frost$collections$MapView* _160;
frost$core$Object* _161;
frost$core$String* _164;
frost$core$Object* _165;
frost$core$Object* _168;
frost$json$JSON* _170;
frost$core$Object* _171;
frost$collections$MapView* _175;
frost$core$Object* _176;
frost$core$String$Index _195;
frost$core$String* _197;
frost$core$Object* _198;
frost$core$Object* _181;
frost$core$String* _183;
frost$core$Object* _184;
frost$core$Object* _187;
frost$json$JSON* _189;
frost$core$Object* _190;
frost$core$Int _202;
int64_t _205;
int64_t _206;
bool _207;
frost$core$Bit _208;
bool _210;
frost$core$Int* _212;
frost$core$Int _213;
frost$core$String$Index* _215;
frost$core$String$Index _216;
frost$json$JSON* _219;
bool _220;
frost$core$Bit _221;
bool _222;
frost$core$Int _224;
frost$json$JSON* _227;
frost$core$Int* _228;
frost$core$Int _229;
frost$core$Int _230;
int64_t _233;
int64_t _234;
bool _235;
frost$core$Bit _236;
bool _238;
frost$collections$ListView** _240;
frost$collections$ListView* _241;
frost$core$Object* _243;
frost$collections$ListView* _245;
frost$core$Object* _246;
frost$collections$ListView* _250;
frost$core$Int _251;
$fn12 _252;
frost$core$Object* _253;
frost$json$JSON* _254;
frost$json$JSON* _255;
frost$core$Object* _256;
frost$json$JSON* _258;
frost$core$Object* _259;
frost$core$Object* _262;
frost$collections$ListView* _264;
frost$core$Object* _265;
frost$core$String$Index _280;
frost$core$Object* _270;
frost$core$Object* _272;
frost$json$JSON* _274;
frost$core$Object* _275;
frost$core$Object* _283;
frost$json$JSON* _287;
frost$core$Object* _288;
frost$json$JSON* _290;
frost$core$Object* _291;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:102
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSON.frost:102:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_3 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
*(&local2) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:103
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:103:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_17 = &param1->_length;
_18 = *_17;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
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
$tmp13 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp13->value = _40;
_41 = ((frost$core$Equatable*) $tmp13);
_42 = *(&local5);
frost$core$String$Index$wrapper* $tmp14;
$tmp14 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp14->value = _42;
_43 = ((frost$core$Equatable*) $tmp14);
ITable* $tmp15 = _41->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp15 = $tmp15->next;
}
_44 = $tmp15->methods[1];
_45 = _44(_41, _43);
_46 = _45.value;
_47 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_49);
if (_46) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:106
_53 = *(&local2);
_54 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, _53);
_55 = _54 != NULL;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block8; else goto block9;
block9:;
_59 = (frost$core$Int) {106u};
_60 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, param1);
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_60, &$s17);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _59, _61);
_63 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_65);
abort(); // unreachable
block8:;
_68 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_68);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:107
_71 = *(&local2);
_72 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, _71);
_73 = _72 != NULL;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block10; else goto block11;
block11:;
_77 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _77, &$s20);
abort(); // unreachable
block10:;
_80 = _72;
_81 = &_80->$rawValue;
_82 = *_81;
_83 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:108:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_86 = _82.value;
_87 = _83.value;
_88 = _86 == _87;
_89 = (frost$core$Bit) {_88};
_91 = _89.value;
if (_91) goto block13; else goto block14;
block13:;
_93 = &_72->$data.$FIELD.field0;
_94 = *_93;
*(&local7) = ((frost$core$String*) NULL);
_96 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = *(&local7);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local7) = _94;
_102 = &_72->$data.$FIELD.field1;
_103 = *_102;
*(&local8) = _103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:109
_106 = *(&local6);
_107 = _106 != NULL;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block16; else goto block17;
block17:;
_111 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _111, &$s22);
abort(); // unreachable
block16:;
_114 = _106;
_115 = &_114->$rawValue;
_116 = *_115;
_117 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:110:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_120 = _116.value;
_121 = _117.value;
_122 = _120 == _121;
_123 = (frost$core$Bit) {_122};
_125 = _123.value;
if (_125) goto block19; else goto block20;
block19:;
_127 = &_106->$data.$MAP.field0;
_128 = *_127;
*(&local9) = ((frost$collections$MapView*) NULL);
_130 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_132 = *(&local9);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local9) = _128;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:111
_137 = *(&local9);
_138 = *(&local7);
_139 = ((frost$core$Object*) _138);
ITable* $tmp23 = _137->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp23 = $tmp23->next;
}
_140 = $tmp23->methods[1];
_141 = _140(_137, _139);
_142 = ((frost$json$JSON*) _141);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = *(&local6);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local6) = _142;
_149 = _141;
frost$core$Frost$unref$frost$core$Object$Q(_149);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:112
_152 = *(&local6);
_153 = _152 == NULL;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:113
_158 = ((frost$core$Object*) ((frost$json$JSON*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_158);
_160 = *(&local9);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_161);
*(&local9) = ((frost$collections$MapView*) NULL);
_164 = *(&local7);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local7) = ((frost$core$String*) NULL);
_168 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_168);
_170 = *(&local6);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block23:;
_175 = *(&local9);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local9) = ((frost$collections$MapView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:120
_195 = *(&local8);
*(&local2) = _195;
_197 = *(&local7);
_198 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_198);
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:117
_181 = ((frost$core$Object*) ((frost$json$JSON*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_181);
_183 = *(&local7);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_184);
*(&local7) = ((frost$core$String*) NULL);
_187 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_187);
_189 = *(&local6);
_190 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_190);
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block14:;
_202 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:122:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_205 = _82.value;
_206 = _202.value;
_207 = _205 == _206;
_208 = (frost$core$Bit) {_207};
_210 = _208.value;
if (_210) goto block24; else goto block12;
block24:;
_212 = &_72->$data.$INDEX.field0;
_213 = *_212;
*(&local10) = _213;
_215 = &_72->$data.$INDEX.field1;
_216 = *_215;
*(&local11) = _216;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:123
_219 = *(&local6);
_220 = _219 != NULL;
_221 = (frost$core$Bit) {_220};
_222 = _221.value;
if (_222) goto block26; else goto block27;
block27:;
_224 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _224, &$s25);
abort(); // unreachable
block26:;
_227 = _219;
_228 = &_227->$rawValue;
_229 = *_228;
_230 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_233 = _229.value;
_234 = _230.value;
_235 = _233 == _234;
_236 = (frost$core$Bit) {_235};
_238 = _236.value;
if (_238) goto block29; else goto block30;
block29:;
_240 = &_219->$data.$LIST.field0;
_241 = *_240;
*(&local12) = ((frost$collections$ListView*) NULL);
_243 = ((frost$core$Object*) _241);
frost$core$Frost$ref$frost$core$Object$Q(_243);
_245 = *(&local12);
_246 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_246);
*(&local12) = _241;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:125
_250 = *(&local12);
_251 = *(&local10);
ITable* $tmp26 = _250->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp26 = $tmp26->next;
}
_252 = $tmp26->methods[0];
_253 = _252(_250, _251);
_254 = ((frost$json$JSON*) _253);
_255 = _254;
_256 = ((frost$core$Object*) _255);
frost$core$Frost$ref$frost$core$Object$Q(_256);
_258 = *(&local6);
_259 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_259);
*(&local6) = _255;
_262 = _253;
frost$core$Frost$unref$frost$core$Object$Q(_262);
_264 = *(&local12);
_265 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_265);
*(&local12) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:131
_280 = *(&local11);
*(&local2) = _280;
goto block12;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:128
_270 = ((frost$core$Object*) ((frost$json$JSON*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_270);
_272 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_272);
_274 = *(&local6);
_275 = ((frost$core$Object*) _274);
frost$core$Frost$unref$frost$core$Object$Q(_275);
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block12:;
_283 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_283);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:135
_287 = *(&local6);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$ref$frost$core$Object$Q(_288);
_290 = *(&local6);
_291 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_291);
*(&local6) = ((frost$json$JSON*) NULL);
return _287;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block6; else goto block7;
block6:;
_46 = &_25->$data.$INT.field0;
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
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block6; else goto block7;
block6:;
_46 = &_25->$data.$REAL.field0;
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
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block6; else goto block7;
block6:;
_46 = &_25->$data.$BIT.field0;
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
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block6; else goto block7;
block6:;
_48 = &_27->$data.$STRING.field0;
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
frost$collections$ListView* frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block6; else goto block7;
block6:;
_48 = &_27->$data.$LIST.field0;
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
frost$collections$MapView* frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block6; else goto block7;
block6:;
_48 = &_27->$data.$MAP.field0;
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
frost$core$Int64 frost$json$JSON$get_asInt$R$frost$core$Int64(void* rawSelf) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$INT.field0;
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
frost$core$Real64 frost$json$JSON$get_asReal$R$frost$core$Real64(void* rawSelf) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$REAL.field0;
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
frost$core$Bit frost$json$JSON$get_asBit$R$frost$core$Bit(void* rawSelf) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$BIT.field0;
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
frost$collections$MapView* frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(void* rawSelf) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$MAP.field0;
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
frost$collections$ListView* frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT(void* rawSelf) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$LIST.field0;
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
frost$core$String* frost$json$JSON$get_asString$R$frost$core$String(void* rawSelf) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
$fn59 _150;
frost$collections$Iterator* _151;
$fn60 _153;
frost$core$Bit _154;
bool _155;
$fn61 _158;
frost$core$Object* _159;
frost$core$String* _160;
frost$core$Object* _161;
frost$core$String* _163;
frost$core$Object* _164;
frost$core$MutableString* _168;
frost$core$String* _169;
frost$core$Object* _172;
frost$core$String* _175;
frost$core$String* _176;
frost$core$Formattable* _177;
$fn62 _178;
frost$core$String* _179;
frost$core$String* _180;
frost$core$String* _181;
frost$collections$MapView* _182;
frost$core$String* _183;
frost$core$Object* _184;
$fn63 _185;
frost$core$Object* _186;
frost$json$JSON* _187;
bool _188;
frost$core$Bit _189;
bool _190;
frost$core$Int _192;
frost$core$Object* _195;
$fn64 _198;
frost$core$String* _199;
frost$core$String* _200;
frost$core$Object* _201;
frost$core$Object* _203;
frost$core$Object* _205;
frost$core$String* _208;
frost$core$Object* _210;
frost$core$Object* _212;
frost$core$Object* _214;
frost$core$Object* _216;
frost$core$Object* _218;
frost$core$Object* _220;
frost$core$Object* _222;
frost$core$Object* _224;
frost$core$Object* _227;
frost$core$String* _229;
frost$core$Object* _230;
frost$core$Object* _233;
frost$core$String* _235;
frost$core$Object* _236;
frost$core$Object* _240;
frost$core$MutableString* _243;
frost$core$MutableString* _246;
frost$core$String* _247;
frost$core$Object* _248;
frost$core$Object* _250;
frost$core$String* _252;
frost$core$Object* _253;
frost$core$MutableString* _256;
frost$core$Object* _257;
frost$collections$MapView* _260;
frost$core$Object* _261;
frost$core$Int _265;
int64_t _268;
int64_t _269;
bool _270;
frost$core$Bit _271;
bool _273;
frost$collections$ListView** _275;
frost$collections$ListView* _276;
frost$core$Object* _278;
frost$collections$ListView* _280;
frost$core$Object* _281;
frost$core$MutableString* _285;
frost$core$Object* _288;
frost$core$MutableString* _290;
frost$core$Object* _291;
frost$core$Object* _294;
frost$core$Object* _298;
frost$core$String* _300;
frost$core$Object* _301;
frost$collections$ListView* _305;
frost$collections$Iterable* _306;
$fn65 _307;
frost$collections$Iterator* _308;
$fn66 _310;
frost$core$Bit _311;
bool _312;
$fn67 _315;
frost$core$Object* _316;
frost$json$JSON* _317;
frost$core$Object* _318;
frost$json$JSON* _320;
frost$core$Object* _321;
frost$core$MutableString* _325;
frost$core$String* _326;
frost$core$Object* _329;
frost$core$String* _332;
frost$json$JSON* _333;
frost$core$Object* _334;
$fn68 _337;
frost$core$String* _338;
frost$core$String* _339;
frost$core$Object* _340;
frost$core$Object* _342;
frost$core$Object* _344;
frost$core$String* _347;
frost$core$Object* _349;
frost$core$Object* _351;
frost$core$Object* _353;
frost$core$Object* _355;
frost$core$Object* _358;
frost$core$String* _360;
frost$core$Object* _361;
frost$core$Object* _364;
frost$json$JSON* _366;
frost$core$Object* _367;
frost$core$Object* _371;
frost$core$MutableString* _374;
frost$core$MutableString* _377;
frost$core$String* _378;
frost$core$Object* _379;
frost$core$Object* _381;
frost$core$String* _383;
frost$core$Object* _384;
frost$core$MutableString* _387;
frost$core$Object* _388;
frost$collections$ListView* _391;
frost$core$Object* _392;
frost$core$Int _396;
int64_t _399;
int64_t _400;
bool _401;
frost$core$Bit _402;
bool _404;
frost$core$Object* _407;
frost$core$Int _411;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:326
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:327:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$INT.field0;
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:328
_17 = *(&local0);
frost$core$Int$wrapper* $tmp69;
$tmp69 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _2.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block5; else goto block6;
block5:;
_38 = &param0->$data.$REAL.field0;
_39 = *_38;
*(&local1) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:331
_42 = *(&local1);
frost$core$Real64$wrapper* $tmp71;
$tmp71 = (frost$core$Real64$wrapper*) frostObjectAlloc(sizeof(frost$core$Real64$wrapper), (frost$core$Class*) &frost$core$Real64$wrapperclass);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_56 = _2.value;
_57 = _53.value;
_58 = _56 == _57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block8; else goto block9;
block8:;
_63 = &param0->$data.$STRING.field0;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_87 = _2.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block11; else goto block12;
block11:;
_94 = &param0->$data.$BIT.field0;
_95 = *_94;
*(&local3) = _95;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:337
_98 = *(&local3);
frost$core$Bit$wrapper* $tmp74;
$tmp74 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_112 = _2.value;
_113 = _109.value;
_114 = _112 == _113;
_115 = (frost$core$Bit) {_114};
_117 = _115.value;
if (_117) goto block14; else goto block15;
block14:;
_119 = &param0->$data.$MAP.field0;
_120 = *_119;
*(&local4) = ((frost$collections$MapView*) NULL);
_122 = ((frost$core$Object*) _120);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local4);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local4) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:340
_129 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
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
ITable* $tmp79 = _149->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp79 = $tmp79->next;
}
_150 = $tmp79->methods[4];
_151 = _150(_149);
goto block17;
block17:;
ITable* $tmp80 = _151->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
_153 = $tmp80->methods[0];
_154 = _153(_151);
_155 = _154.value;
if (_155) goto block19; else goto block18;
block18:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp81 = _151->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
_158 = $tmp81->methods[1];
_159 = _158(_151);
_160 = ((frost$core$String*) _159);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = *(&local7);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local7) = _160;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:343
_168 = *(&local5);
_169 = *(&local6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_172 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_172);
_175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_169, &$s82);
_176 = *(&local7);
_177 = ((frost$core$Formattable*) _176);
ITable* $tmp83 = _177->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp83 = $tmp83->next;
}
_178 = $tmp83->methods[0];
_179 = _178(_177, &$s84);
_180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_175, _179);
_181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_180, &$s85);
_182 = *(&local4);
_183 = *(&local7);
_184 = ((frost$core$Object*) _183);
ITable* $tmp86 = _182->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp86 = $tmp86->next;
}
_185 = $tmp86->methods[1];
_186 = _185(_182, _184);
_187 = ((frost$json$JSON*) _186);
_188 = _187 != NULL;
_189 = (frost$core$Bit) {_188};
_190 = _189.value;
if (_190) goto block21; else goto block22;
block22:;
_192 = (frost$core$Int) {343u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _192, &$s88);
abort(); // unreachable
block21:;
_195 = ((frost$core$Object*) _187);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_198 = ($fn89) _195->$class->vtable[0];
_199 = _198(_195);
_200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_181, _199);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$ref$frost$core$Object$Q(_201);
_203 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_203);
_205 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_205);
_208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_200, &$s90);
frost$core$MutableString$append$frost$core$String(_168, _208);
_210 = ((frost$core$Object*) _208);
frost$core$Frost$unref$frost$core$Object$Q(_210);
_212 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_212);
_214 = _186;
frost$core$Frost$unref$frost$core$Object$Q(_214);
_216 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_218);
_220 = ((frost$core$Object*) _179);
frost$core$Frost$unref$frost$core$Object$Q(_220);
_222 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_222);
_224 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_224);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:344
_227 = ((frost$core$Object*) &$s91);
frost$core$Frost$ref$frost$core$Object$Q(_227);
_229 = *(&local6);
_230 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_230);
*(&local6) = &$s92;
_233 = _159;
frost$core$Frost$unref$frost$core$Object$Q(_233);
_235 = *(&local7);
_236 = ((frost$core$Object*) _235);
frost$core$Frost$unref$frost$core$Object$Q(_236);
*(&local7) = ((frost$core$String*) NULL);
goto block17;
block19:;
_240 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_240);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:346
_243 = *(&local5);
frost$core$MutableString$append$frost$core$String(_243, &$s93);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:347
_246 = *(&local5);
_247 = frost$core$MutableString$finish$R$frost$core$String(_246);
_248 = ((frost$core$Object*) _247);
frost$core$Frost$ref$frost$core$Object$Q(_248);
_250 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_250);
_252 = *(&local6);
_253 = ((frost$core$Object*) _252);
frost$core$Frost$unref$frost$core$Object$Q(_253);
*(&local6) = ((frost$core$String*) NULL);
_256 = *(&local5);
_257 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_257);
*(&local5) = ((frost$core$MutableString*) NULL);
_260 = *(&local4);
_261 = ((frost$core$Object*) _260);
frost$core$Frost$unref$frost$core$Object$Q(_261);
*(&local4) = ((frost$collections$MapView*) NULL);
return _247;
block15:;
_265 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:349:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_268 = _2.value;
_269 = _265.value;
_270 = _268 == _269;
_271 = (frost$core$Bit) {_270};
_273 = _271.value;
if (_273) goto block24; else goto block25;
block24:;
_275 = &param0->$data.$LIST.field0;
_276 = *_275;
*(&local8) = ((frost$collections$ListView*) NULL);
_278 = ((frost$core$Object*) _276);
frost$core$Frost$ref$frost$core$Object$Q(_278);
_280 = *(&local8);
_281 = ((frost$core$Object*) _280);
frost$core$Frost$unref$frost$core$Object$Q(_281);
*(&local8) = _276;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:350
_285 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_285, &$s94);
*(&local9) = ((frost$core$MutableString*) NULL);
_288 = ((frost$core$Object*) _285);
frost$core$Frost$ref$frost$core$Object$Q(_288);
_290 = *(&local9);
_291 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_291);
*(&local9) = _285;
_294 = ((frost$core$Object*) _285);
frost$core$Frost$unref$frost$core$Object$Q(_294);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:351
*(&local10) = ((frost$core$String*) NULL);
_298 = ((frost$core$Object*) &$s95);
frost$core$Frost$ref$frost$core$Object$Q(_298);
_300 = *(&local10);
_301 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_301);
*(&local10) = &$s96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:352
_305 = *(&local8);
_306 = ((frost$collections$Iterable*) _305);
ITable* $tmp97 = _306->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp97 = $tmp97->next;
}
_307 = $tmp97->methods[0];
_308 = _307(_306);
goto block27;
block27:;
ITable* $tmp98 = _308->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
_310 = $tmp98->methods[0];
_311 = _310(_308);
_312 = _311.value;
if (_312) goto block29; else goto block28;
block28:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp99 = _308->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp99 = $tmp99->next;
}
_315 = $tmp99->methods[1];
_316 = _315(_308);
_317 = ((frost$json$JSON*) _316);
_318 = ((frost$core$Object*) _317);
frost$core$Frost$ref$frost$core$Object$Q(_318);
_320 = *(&local11);
_321 = ((frost$core$Object*) _320);
frost$core$Frost$unref$frost$core$Object$Q(_321);
*(&local11) = _317;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:353
_325 = *(&local9);
_326 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_329 = ((frost$core$Object*) _326);
frost$core$Frost$ref$frost$core$Object$Q(_329);
_332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_326, &$s100);
_333 = *(&local11);
_334 = ((frost$core$Object*) _333);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_337 = ($fn101) _334->$class->vtable[0];
_338 = _337(_334);
_339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_332, _338);
_340 = ((frost$core$Object*) _339);
frost$core$Frost$ref$frost$core$Object$Q(_340);
_342 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_342);
_344 = ((frost$core$Object*) _338);
frost$core$Frost$unref$frost$core$Object$Q(_344);
_347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_339, &$s102);
frost$core$MutableString$append$frost$core$String(_325, _347);
_349 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_349);
_351 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_351);
_353 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_353);
_355 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_355);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:354
_358 = ((frost$core$Object*) &$s103);
frost$core$Frost$ref$frost$core$Object$Q(_358);
_360 = *(&local10);
_361 = ((frost$core$Object*) _360);
frost$core$Frost$unref$frost$core$Object$Q(_361);
*(&local10) = &$s104;
_364 = _316;
frost$core$Frost$unref$frost$core$Object$Q(_364);
_366 = *(&local11);
_367 = ((frost$core$Object*) _366);
frost$core$Frost$unref$frost$core$Object$Q(_367);
*(&local11) = ((frost$json$JSON*) NULL);
goto block27;
block29:;
_371 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_371);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:356
_374 = *(&local9);
frost$core$MutableString$append$frost$core$String(_374, &$s105);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:357
_377 = *(&local9);
_378 = frost$core$MutableString$finish$R$frost$core$String(_377);
_379 = ((frost$core$Object*) _378);
frost$core$Frost$ref$frost$core$Object$Q(_379);
_381 = ((frost$core$Object*) _378);
frost$core$Frost$unref$frost$core$Object$Q(_381);
_383 = *(&local10);
_384 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_384);
*(&local10) = ((frost$core$String*) NULL);
_387 = *(&local9);
_388 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_388);
*(&local9) = ((frost$core$MutableString*) NULL);
_391 = *(&local8);
_392 = ((frost$core$Object*) _391);
frost$core$Frost$unref$frost$core$Object$Q(_392);
*(&local8) = ((frost$collections$ListView*) NULL);
return _378;
block25:;
_396 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:359:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_399 = _2.value;
_400 = _396.value;
_401 = _399 == _400;
_402 = (frost$core$Bit) {_401};
_404 = _402.value;
if (_404) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:360
_407 = ((frost$core$Object*) &$s106);
frost$core$Frost$ref$frost$core$Object$Q(_407);
return &$s107;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:363
_411 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s108, _411);
abort(); // unreachable
block1:;
goto block35;
block35:;

}
void frost$json$JSON$cleanup(void* rawSelf) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$INT.field0;
_14 = *_13;
*(&local0) = _14;
goto block1;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
_27 = &param0->$data.$REAL.field0;
_28 = *_27;
*(&local1) = _28;
goto block1;
block6:;
_31 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block8; else goto block9;
block8:;
_41 = &param0->$data.$STRING.field0;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_62 = _2.value;
_63 = _59.value;
_64 = _62 == _63;
_65 = (frost$core$Bit) {_64};
_67 = _65.value;
if (_67) goto block11; else goto block12;
block11:;
_69 = &param0->$data.$BIT.field0;
_70 = *_69;
*(&local3) = _70;
goto block1;
block12:;
_73 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_76 = _2.value;
_77 = _73.value;
_78 = _76 == _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
if (_81) goto block14; else goto block15;
block14:;
_83 = &param0->$data.$MAP.field0;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_104 = _2.value;
_105 = _101.value;
_106 = _104 == _105;
_107 = (frost$core$Bit) {_106};
_109 = _107.value;
if (_109) goto block17; else goto block18;
block17:;
_111 = &param0->$data.$LIST.field0;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
void frost$json$JSON$init$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$Int param1, frost$core$Int param2) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

frost$core$Int* _1;
frost$core$Int* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = &param0->$data.$INT.field0;
*_4 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Real64(void* rawSelf, frost$core$Int param1, frost$core$Real64 param2) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

frost$core$Int* _1;
frost$core$Real64* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = &param0->$data.$REAL.field0;
*_4 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$String(void* rawSelf, frost$core$Int param1, frost$core$String* param2) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$STRING.field0;
*_6 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Bit(void* rawSelf, frost$core$Int param1, frost$core$Bit param2) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

frost$core$Int* _1;
frost$core$Bit* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = &param0->$data.$BIT.field0;
*_4 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(void* rawSelf, frost$core$Int param1, frost$collections$MapView* param2) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
frost$collections$MapView** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$MAP.field0;
*_6 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(void* rawSelf, frost$core$Int param1, frost$collections$ListView* param2) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
frost$collections$ListView** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$LIST.field0;
*_6 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int(void* rawSelf, frost$core$Int param1) {
frost$json$JSON* param0 = (frost$json$JSON*) rawSelf;

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
_1 = &param0->$rawValue;
*_1 = param1;
return;

}

