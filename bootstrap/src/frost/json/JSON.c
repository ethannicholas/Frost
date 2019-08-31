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
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/collections/MapView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Real64.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Formattable.h"
#include "frost/collections/Iterable.h"


static frost$core$String $s1;
frost$json$JSON$class_type frost$json$JSON$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$json$JSON$get_asString$R$frost$core$String, frost$json$JSON$cleanup, frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q, frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q, frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q, frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q, frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q, frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q, frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q, frost$json$JSON$get_asInt$R$frost$core$Int64, frost$json$JSON$get_asReal$R$frost$core$Real64, frost$json$JSON$get_asBit$R$frost$core$Bit, frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT, frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT} };

typedef frost$core$Bit (*$fn43)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn130)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn184)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn229)(frost$collections$ListView*, frost$core$Int);
typedef frost$json$JSON* (*$fn238)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn266)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn293)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn320)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn349)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn378)(frost$json$JSON*, frost$core$String*);
typedef frost$core$String* (*$fn489)(frost$core$Object*);
typedef frost$core$String* (*$fn502)(frost$core$Object*);
typedef frost$core$String* (*$fn528)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn548)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn552)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn557)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn567)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn577)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$String* (*$fn585)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn619)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn623)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn628)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn637)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 2387266969933429033, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3632450878405071376, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 85, -5898724198303538291, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5833405357432179147, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 71, 7268810111558341655, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7d", 2, 559936225143567974, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:51
frost$core$Char32 $tmp2 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, param1);
frost$core$Int32 $tmp3 = (frost$core$Int32) {47u};
frost$core$Char32 $tmp4 = frost$core$Char32$init$frost$core$Int32($tmp3);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:52:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp5 = $tmp2.value;
int32_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:53
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:53:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp10 = &param0->_length;
frost$core$Int $tmp11 = *$tmp10;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp12 = &(&local1)->value;
*$tmp12 = $tmp11;
frost$core$String$Index $tmp13 = *(&local1);
*(&local0) = $tmp13;
frost$core$String$Index $tmp14 = *(&local0);
*(&local2) = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:54
frost$core$String$Index $tmp15 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local3) = $tmp15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:55
frost$core$String$Index $tmp16 = *(&local3);
*(&local4) = $tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:56
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:57
frost$core$String$Index $tmp17 = *(&local4);
frost$core$Char32 $tmp18 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp17);
*(&local5) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:58
frost$core$Char32 $tmp19 = *(&local5);
frost$core$Int32 $tmp20 = (frost$core$Int32) {47u};
frost$core$Char32 $tmp21 = frost$core$Char32$init$frost$core$Int32($tmp20);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp22 = $tmp19.value;
int32_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block10; else goto block12;
block12:;
frost$core$Char32 $tmp27 = *(&local5);
frost$core$Int32 $tmp28 = (frost$core$Int32) {91u};
frost$core$Char32 $tmp29 = frost$core$Char32$init$frost$core$Int32($tmp28);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:58:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp30 = $tmp27.value;
int32_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:59
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:61
frost$core$String$Index $tmp35 = *(&local4);
frost$core$String$Index $tmp36 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp35);
*(&local4) = $tmp36;
frost$core$String$Index $tmp37 = *(&local4);
frost$core$String$Index$wrapper* $tmp38;
$tmp38 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp38->value = $tmp37;
frost$core$String$Index $tmp39 = *(&local2);
frost$core$String$Index$wrapper* $tmp40;
$tmp40 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp40->value = $tmp39;
ITable* $tmp41 = ((frost$core$Equatable*) $tmp38)->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[1];
frost$core$Bit $tmp44 = $tmp42(((frost$core$Equatable*) $tmp38), ((frost$core$Equatable*) $tmp40));
bool $tmp45 = $tmp44.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp40)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
if ($tmp45) goto block7; else goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:64
frost$core$String$Index $tmp46 = *(&local3);
frost$core$String$Index $tmp47 = *(&local4);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:64:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
frost$core$Int $tmp48 = $tmp46.value;
frost$core$Int $tmp49 = $tmp47.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 == $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:67
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp55 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int $tmp56 = (frost$core$Int) {0u};
frost$core$String$Index $tmp57 = *(&local3);
frost$core$String$Index $tmp58 = *(&local4);
frost$core$Bit $tmp59 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp60 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp57, $tmp58, $tmp59);
frost$core$String* $tmp61 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp60);
frost$core$String$Index $tmp62 = *(&local4);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index($tmp55, $tmp56, $tmp61, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
return $tmp55;
block3:;
frost$core$Int32 $tmp63 = (frost$core$Int32) {91u};
frost$core$Char32 $tmp64 = frost$core$Char32$init$frost$core$Int32($tmp63);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:69:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp65 = $tmp2.value;
int32_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:70
frost$core$String$Index $tmp70 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local6) = $tmp70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:71
frost$core$String$Index $tmp71 = *(&local6);
*(&local7) = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:72
goto block22;
block22:;
frost$core$String$Index $tmp72 = *(&local7);
frost$core$Char32 $tmp73 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp72);
frost$core$Int32 $tmp74 = (frost$core$Int32) {93u};
frost$core$Char32 $tmp75 = frost$core$Char32$init$frost$core$Int32($tmp74);
// begin inline call to function frost.core.Char32.!=(other:frost.core.Char32):frost.core.Bit from JSON.frost:72:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:32
int32_t $tmp76 = $tmp73.value;
int32_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:73
frost$core$String$Index $tmp81 = *(&local7);
frost$core$String$Index $tmp82 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp81);
*(&local7) = $tmp82;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:75
frost$core$String$Index $tmp83 = *(&local6);
frost$core$String$Index $tmp84 = *(&local7);
frost$core$Bit $tmp85 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp86 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp83, $tmp84, $tmp85);
frost$core$String* $tmp87 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp86);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSON.frost:75:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp88 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp87);
*(&local9) = $tmp88;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp89 = *(&local9);
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89.nonnull};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp92 = *(&local9);
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92.nonnull};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block29; else goto block30;
block30:;
frost$core$Int $tmp95 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, $tmp95, &$s97);
abort(); // unreachable
block29:;
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp98 = ((frost$core$Int64) $tmp92.value).value;
frost$core$Int $tmp99 = (frost$core$Int) {((int64_t) $tmp98)};
*(&local8) = ((frost$core$Int$nullable) { $tmp99, true });
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local8) = ((frost$core$Int$nullable) { .nonnull = false });
goto block26;
block26:;
frost$core$Int$nullable $tmp100 = *(&local8);
*(&local10) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:76
frost$core$Int$nullable $tmp101 = *(&local10);
frost$core$Bit $tmp102 = (frost$core$Bit) {!$tmp101.nonnull};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:77
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:79
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp104 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int $tmp105 = (frost$core$Int) {1u};
frost$core$Int$nullable $tmp106 = *(&local10);
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106.nonnull};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block34; else goto block35;
block35:;
frost$core$Int $tmp109 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s110, $tmp109, &$s111);
abort(); // unreachable
block34:;
frost$core$String$Index $tmp112 = *(&local7);
frost$core$String$Index $tmp113 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp112);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index($tmp104, $tmp105, ((frost$core$Int) $tmp106.value), $tmp113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
return $tmp104;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:102
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSON.frost:102:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp114 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp115 = &(&local1)->value;
*$tmp115 = $tmp114;
frost$core$String$Index $tmp116 = *(&local1);
*(&local0) = $tmp116;
frost$core$String$Index $tmp117 = *(&local0);
*(&local2) = $tmp117;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:103
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:103:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp118 = &param1->_length;
frost$core$Int $tmp119 = *$tmp118;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp120 = &(&local4)->value;
*$tmp120 = $tmp119;
frost$core$String$Index $tmp121 = *(&local4);
*(&local3) = $tmp121;
frost$core$String$Index $tmp122 = *(&local3);
*(&local5) = $tmp122;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:104
*(&local6) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp123 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local6) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:105
goto block5;
block5:;
frost$core$String$Index $tmp124 = *(&local2);
frost$core$String$Index$wrapper* $tmp125;
$tmp125 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp125->value = $tmp124;
frost$core$String$Index $tmp126 = *(&local5);
frost$core$String$Index$wrapper* $tmp127;
$tmp127 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp127->value = $tmp126;
ITable* $tmp128 = ((frost$core$Equatable*) $tmp125)->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[1];
frost$core$Bit $tmp131 = $tmp129(((frost$core$Equatable*) $tmp125), ((frost$core$Equatable*) $tmp127));
bool $tmp132 = $tmp131.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp127)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp125)));
if ($tmp132) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:106
frost$core$String$Index $tmp133 = *(&local2);
frost$json$JSON$PathKey* $tmp134 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp133);
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134 != NULL};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block8; else goto block9;
block9:;
frost$core$Int $tmp137 = (frost$core$Int) {106u};
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s139, param1);
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, &$s141);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, $tmp137, $tmp140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:107
frost$core$String$Index $tmp143 = *(&local2);
frost$json$JSON$PathKey* $tmp144 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp143);
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144 != NULL};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block10; else goto block11;
block11:;
frost$core$Int $tmp147 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s148, $tmp147, &$s149);
abort(); // unreachable
block10:;
frost$core$Int* $tmp150 = &$tmp144->$rawValue;
frost$core$Int $tmp151 = *$tmp150;
frost$core$Int $tmp152 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:108:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 == $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block13; else goto block14;
block13:;
frost$core$String** $tmp158 = (frost$core$String**) ($tmp144->$data + 0);
frost$core$String* $tmp159 = *$tmp158;
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$String* $tmp160 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local7) = $tmp159;
frost$core$String$Index* $tmp161 = (frost$core$String$Index*) ($tmp144->$data + 8);
frost$core$String$Index $tmp162 = *$tmp161;
*(&local8) = $tmp162;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:109
frost$json$JSON* $tmp163 = *(&local6);
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163 != NULL};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block16; else goto block17;
block17:;
frost$core$Int $tmp166 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, $tmp166, &$s168);
abort(); // unreachable
block16:;
frost$core$Int* $tmp169 = &$tmp163->$rawValue;
frost$core$Int $tmp170 = *$tmp169;
frost$core$Int $tmp171 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:110:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 == $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block19; else goto block20;
block19:;
frost$collections$MapView** $tmp177 = (frost$collections$MapView**) ($tmp163->$data + 0);
frost$collections$MapView* $tmp178 = *$tmp177;
*(&local9) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$collections$MapView* $tmp179 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local9) = $tmp178;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:111
frost$collections$MapView* $tmp180 = *(&local9);
frost$core$String* $tmp181 = *(&local7);
ITable* $tmp182 = $tmp180->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[1];
frost$core$Object* $tmp185 = $tmp183($tmp180, ((frost$core$Object*) $tmp181));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp185)));
frost$json$JSON* $tmp186 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local6) = ((frost$json$JSON*) $tmp185);
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:112
frost$json$JSON* $tmp187 = *(&local6);
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187 == NULL};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:113
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$collections$MapView* $tmp190 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local9) = ((frost$collections$MapView*) NULL);
frost$core$String* $tmp191 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$json$JSON* $tmp192 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block23:;
frost$collections$MapView* $tmp193 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local9) = ((frost$collections$MapView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:120
frost$core$String$Index $tmp194 = *(&local8);
*(&local2) = $tmp194;
frost$core$String* $tmp195 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$String* $tmp196 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$json$JSON* $tmp197 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block14:;
frost$core$Int $tmp198 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:122:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp199 = $tmp151.value;
int64_t $tmp200 = $tmp198.value;
bool $tmp201 = $tmp199 == $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block24; else goto block12;
block24:;
frost$core$Int* $tmp204 = (frost$core$Int*) ($tmp144->$data + 0);
frost$core$Int $tmp205 = *$tmp204;
*(&local10) = $tmp205;
frost$core$String$Index* $tmp206 = (frost$core$String$Index*) ($tmp144->$data + 8);
frost$core$String$Index $tmp207 = *$tmp206;
*(&local11) = $tmp207;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:123
frost$json$JSON* $tmp208 = *(&local6);
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208 != NULL};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block26; else goto block27;
block27:;
frost$core$Int $tmp211 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s212, $tmp211, &$s213);
abort(); // unreachable
block26:;
frost$core$Int* $tmp214 = &$tmp208->$rawValue;
frost$core$Int $tmp215 = *$tmp214;
frost$core$Int $tmp216 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 == $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block29; else goto block30;
block29:;
frost$collections$ListView** $tmp222 = (frost$collections$ListView**) ($tmp208->$data + 0);
frost$collections$ListView* $tmp223 = *$tmp222;
*(&local12) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$collections$ListView* $tmp224 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local12) = $tmp223;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:125
frost$collections$ListView* $tmp225 = *(&local12);
frost$core$Int $tmp226 = *(&local10);
ITable* $tmp227 = $tmp225->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[0];
frost$core$Object* $tmp230 = $tmp228($tmp225, $tmp226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp230)));
frost$json$JSON* $tmp231 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local6) = ((frost$json$JSON*) $tmp230);
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
frost$collections$ListView* $tmp232 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local12) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:131
frost$core$String$Index $tmp233 = *(&local11);
*(&local2) = $tmp233;
goto block12;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$json$JSON* $tmp234 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:135
frost$json$JSON* $tmp235 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$json$JSON* $tmp236 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local6) = ((frost$json$JSON*) NULL);
return $tmp235;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:142
$fn238 $tmp237 = ($fn238) param0->$class->vtable[2];
frost$json$JSON* $tmp239 = $tmp237(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$json$JSON* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local0) = $tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:143
frost$json$JSON* $tmp241 = *(&local0);
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241 == NULL};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:144
frost$json$JSON* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:146
frost$json$JSON* $tmp245 = *(&local0);
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245 != NULL};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block3; else goto block4;
block4:;
frost$core$Int $tmp248 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s249, $tmp248, &$s250);
abort(); // unreachable
block3:;
frost$core$Int* $tmp251 = &$tmp245->$rawValue;
frost$core$Int $tmp252 = *$tmp251;
frost$core$Int $tmp253 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:147:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 == $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block6; else goto block7;
block6:;
frost$core$Int* $tmp259 = (frost$core$Int*) ($tmp245->$data + 0);
frost$core$Int $tmp260 = *$tmp259;
*(&local1) = $tmp260;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:148
frost$core$Int $tmp261 = *(&local1);
frost$core$Int64 $tmp262 = frost$core$Int64$init$frost$core$Int($tmp261);
frost$json$JSON* $tmp263 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp262, true });
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:151
frost$json$JSON* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block5:;
goto block9;
block9:;

}
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Real64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:160
$fn266 $tmp265 = ($fn266) param0->$class->vtable[2];
frost$json$JSON* $tmp267 = $tmp265(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$json$JSON* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local0) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:161
frost$json$JSON* $tmp269 = *(&local0);
frost$core$Bit $tmp270 = (frost$core$Bit) {$tmp269 == NULL};
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:162
frost$json$JSON* $tmp272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:164
frost$json$JSON* $tmp273 = *(&local0);
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273 != NULL};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block3; else goto block4;
block4:;
frost$core$Int $tmp276 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s277, $tmp276, &$s278);
abort(); // unreachable
block3:;
frost$core$Int* $tmp279 = &$tmp273->$rawValue;
frost$core$Int $tmp280 = *$tmp279;
frost$core$Int $tmp281 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:165:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281.value;
bool $tmp284 = $tmp282 == $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block6; else goto block7;
block6:;
frost$core$Real64* $tmp287 = (frost$core$Real64*) ($tmp273->$data + 0);
frost$core$Real64 $tmp288 = *$tmp287;
*(&local1) = $tmp288;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:166
frost$core$Real64 $tmp289 = *(&local1);
frost$json$JSON* $tmp290 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp289, true });
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:169
frost$json$JSON* $tmp291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block5:;
goto block9;
block9:;

}
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:178
$fn293 $tmp292 = ($fn293) param0->$class->vtable[2];
frost$json$JSON* $tmp294 = $tmp292(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$json$JSON* $tmp295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:179
frost$json$JSON* $tmp296 = *(&local0);
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296 == NULL};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:180
frost$json$JSON* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:182
frost$json$JSON* $tmp300 = *(&local0);
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300 != NULL};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block3; else goto block4;
block4:;
frost$core$Int $tmp303 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block3:;
frost$core$Int* $tmp306 = &$tmp300->$rawValue;
frost$core$Int $tmp307 = *$tmp306;
frost$core$Int $tmp308 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:183:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 == $tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block6; else goto block7;
block6:;
frost$core$Bit* $tmp314 = (frost$core$Bit*) ($tmp300->$data + 0);
frost$core$Bit $tmp315 = *$tmp314;
*(&local1) = $tmp315;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:184
frost$core$Bit $tmp316 = *(&local1);
frost$json$JSON* $tmp317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp316, true });
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:187
frost$json$JSON* $tmp318 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block5:;
goto block9;
block9:;

}
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:196
$fn320 $tmp319 = ($fn320) param0->$class->vtable[2];
frost$json$JSON* $tmp321 = $tmp319(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$json$JSON* $tmp322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:197
frost$json$JSON* $tmp323 = *(&local0);
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323 == NULL};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:198
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:200
frost$json$JSON* $tmp327 = *(&local0);
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327 != NULL};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block3; else goto block4;
block4:;
frost$core$Int $tmp330 = (frost$core$Int) {200u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s331, $tmp330, &$s332);
abort(); // unreachable
block3:;
frost$core$Int* $tmp333 = &$tmp327->$rawValue;
frost$core$Int $tmp334 = *$tmp333;
frost$core$Int $tmp335 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:201:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
bool $tmp338 = $tmp336 == $tmp337;
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block6; else goto block7;
block6:;
frost$core$String** $tmp341 = (frost$core$String**) ($tmp327->$data + 0);
frost$core$String* $tmp342 = *$tmp341;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$String* $tmp343 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local1) = $tmp342;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:202
frost$core$String* $tmp344 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$String* $tmp345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp346 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp344;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:205
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block5:;
goto block9;
block9:;

}
frost$collections$ListView* frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:214
$fn349 $tmp348 = ($fn349) param0->$class->vtable[2];
frost$json$JSON* $tmp350 = $tmp348(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$json$JSON* $tmp351 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local0) = $tmp350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:215
frost$json$JSON* $tmp352 = *(&local0);
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352 == NULL};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp355 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:218
frost$json$JSON* $tmp356 = *(&local0);
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356 != NULL};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block3; else goto block4;
block4:;
frost$core$Int $tmp359 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block3:;
frost$core$Int* $tmp362 = &$tmp356->$rawValue;
frost$core$Int $tmp363 = *$tmp362;
frost$core$Int $tmp364 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:219:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp365 = $tmp363.value;
int64_t $tmp366 = $tmp364.value;
bool $tmp367 = $tmp365 == $tmp366;
frost$core$Bit $tmp368 = (frost$core$Bit) {$tmp367};
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block6; else goto block7;
block6:;
frost$collections$ListView** $tmp370 = (frost$collections$ListView**) ($tmp356->$data + 0);
frost$collections$ListView* $tmp371 = *$tmp370;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$collections$ListView* $tmp372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local1) = $tmp371;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:220
frost$collections$ListView* $tmp373 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$collections$ListView* $tmp374 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp373;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp376 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block5:;
goto block9;
block9:;

}
frost$collections$MapView* frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:232
$fn378 $tmp377 = ($fn378) param0->$class->vtable[2];
frost$json$JSON* $tmp379 = $tmp377(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$json$JSON* $tmp380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local0) = $tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:233
frost$json$JSON* $tmp381 = *(&local0);
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381 == NULL};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:236
frost$json$JSON* $tmp385 = *(&local0);
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385 != NULL};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block3; else goto block4;
block4:;
frost$core$Int $tmp388 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s389, $tmp388, &$s390);
abort(); // unreachable
block3:;
frost$core$Int* $tmp391 = &$tmp385->$rawValue;
frost$core$Int $tmp392 = *$tmp391;
frost$core$Int $tmp393 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:237:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp394 = $tmp392.value;
int64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block6; else goto block7;
block6:;
frost$collections$MapView** $tmp399 = (frost$collections$MapView**) ($tmp385->$data + 0);
frost$collections$MapView* $tmp400 = *$tmp399;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$collections$MapView* $tmp401 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local1) = $tmp400;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:238
frost$collections$MapView* $tmp402 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$collections$MapView* $tmp403 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp404 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp402;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp405 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block5:;
goto block9;
block9:;

}
frost$core$Int64 frost$json$JSON$get_asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:251
frost$core$Int* $tmp406 = &param0->$rawValue;
frost$core$Int $tmp407 = *$tmp406;
frost$core$Int $tmp408 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:252:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp409 = $tmp407.value;
int64_t $tmp410 = $tmp408.value;
bool $tmp411 = $tmp409 == $tmp410;
frost$core$Bit $tmp412 = (frost$core$Bit) {$tmp411};
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp414 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp415 = *$tmp414;
*(&local0) = $tmp415;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:253
frost$core$Int $tmp416 = *(&local0);
frost$core$Int64 $tmp417 = frost$core$Int64$init$frost$core$Int($tmp416);
return $tmp417;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:256
frost$core$Int $tmp418 = (frost$core$Int) {256u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s419, $tmp418);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Real64 frost$json$JSON$get_asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:266
frost$core$Int* $tmp420 = &param0->$rawValue;
frost$core$Int $tmp421 = *$tmp420;
frost$core$Int $tmp422 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:267:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp423 = $tmp421.value;
int64_t $tmp424 = $tmp422.value;
bool $tmp425 = $tmp423 == $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp428 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp429 = *$tmp428;
*(&local0) = $tmp429;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:268
frost$core$Real64 $tmp430 = *(&local0);
return $tmp430;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:271
frost$core$Int $tmp431 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s432, $tmp431);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Bit frost$json$JSON$get_asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:281
frost$core$Int* $tmp433 = &param0->$rawValue;
frost$core$Int $tmp434 = *$tmp433;
frost$core$Int $tmp435 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:282:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435.value;
bool $tmp438 = $tmp436 == $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp441 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp442 = *$tmp441;
*(&local0) = $tmp442;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:283
frost$core$Bit $tmp443 = *(&local0);
return $tmp443;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:286
frost$core$Int $tmp444 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s445, $tmp444);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$MapView* frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:296
frost$core$Int* $tmp446 = &param0->$rawValue;
frost$core$Int $tmp447 = *$tmp446;
frost$core$Int $tmp448 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:297:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448.value;
bool $tmp451 = $tmp449 == $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp454 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp455 = *$tmp454;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$collections$MapView* $tmp456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local0) = $tmp455;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:298
frost$collections$MapView* $tmp457 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$collections$MapView* $tmp458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp457;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:301
frost$core$Int $tmp459 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s460, $tmp459);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$ListView* frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:311
frost$core$Int* $tmp461 = &param0->$rawValue;
frost$core$Int $tmp462 = *$tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:312:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp464 = $tmp462.value;
int64_t $tmp465 = $tmp463.value;
bool $tmp466 = $tmp464 == $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp469 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp470 = *$tmp469;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$collections$ListView* $tmp471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local0) = $tmp470;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:313
frost$collections$ListView* $tmp472 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$collections$ListView* $tmp473 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp472;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:316
frost$core$Int $tmp474 = (frost$core$Int) {316u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s475, $tmp474);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:326
frost$core$Int* $tmp476 = &param0->$rawValue;
frost$core$Int $tmp477 = *$tmp476;
frost$core$Int $tmp478 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:327:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478.value;
bool $tmp481 = $tmp479 == $tmp480;
frost$core$Bit $tmp482 = (frost$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp484 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp485 = *$tmp484;
*(&local0) = $tmp485;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:328
frost$core$Int $tmp486 = *(&local0);
frost$core$Int$wrapper* $tmp487;
$tmp487 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp487->value = $tmp486;
$fn489 $tmp488 = ($fn489) ((frost$core$Object*) $tmp487)->$class->vtable[0];
frost$core$String* $tmp490 = $tmp488(((frost$core$Object*) $tmp487));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
return $tmp490;
block3:;
frost$core$Int $tmp491 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:330:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp492 = $tmp477.value;
int64_t $tmp493 = $tmp491.value;
bool $tmp494 = $tmp492 == $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp497 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp498 = *$tmp497;
*(&local1) = $tmp498;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:331
frost$core$Real64 $tmp499 = *(&local1);
frost$core$Real64$wrapper* $tmp500;
$tmp500 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp500->value = $tmp499;
$fn502 $tmp501 = ($fn502) ((frost$core$Object*) $tmp500)->$class->vtable[0];
frost$core$String* $tmp503 = $tmp501(((frost$core$Object*) $tmp500));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
return $tmp503;
block6:;
frost$core$Int $tmp504 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:333:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp505 = $tmp477.value;
int64_t $tmp506 = $tmp504.value;
bool $tmp507 = $tmp505 == $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block8; else goto block9;
block8:;
frost$core$String** $tmp510 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp511 = *$tmp510;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$String* $tmp512 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local2) = $tmp511;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:334
frost$core$String* $tmp513 = *(&local2);
frost$core$String* $tmp514 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp513, &$s515);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$String* $tmp516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local2) = ((frost$core$String*) NULL);
return $tmp514;
block9:;
frost$core$Int $tmp517 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:336:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp518 = $tmp477.value;
int64_t $tmp519 = $tmp517.value;
bool $tmp520 = $tmp518 == $tmp519;
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp523 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp524 = *$tmp523;
*(&local3) = $tmp524;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:337
frost$core$Bit $tmp525 = *(&local3);
frost$core$Bit$wrapper* $tmp526;
$tmp526 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp526->value = $tmp525;
$fn528 $tmp527 = ($fn528) ((frost$core$Object*) $tmp526)->$class->vtable[0];
frost$core$String* $tmp529 = $tmp527(((frost$core$Object*) $tmp526));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
return $tmp529;
block12:;
frost$core$Int $tmp530 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:339:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp531 = $tmp477.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 == $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp536 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp537 = *$tmp536;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$collections$MapView* $tmp538 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local4) = $tmp537;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:340
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp539 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp539, &$s540);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$MutableString* $tmp541 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local5) = $tmp539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:341
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s542));
frost$core$String* $tmp543 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local6) = &$s544;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:342
frost$collections$MapView* $tmp545 = *(&local4);
ITable* $tmp546 = $tmp545->$class->itable;
while ($tmp546->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp546 = $tmp546->next;
}
$fn548 $tmp547 = $tmp546->methods[4];
frost$collections$Iterator* $tmp549 = $tmp547($tmp545);
goto block17;
block17:;
ITable* $tmp550 = $tmp549->$class->itable;
while ($tmp550->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp550 = $tmp550->next;
}
$fn552 $tmp551 = $tmp550->methods[0];
frost$core$Bit $tmp553 = $tmp551($tmp549);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block19; else goto block18;
block18:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp555 = $tmp549->$class->itable;
while ($tmp555->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp555 = $tmp555->next;
}
$fn557 $tmp556 = $tmp555->methods[1];
frost$core$Object* $tmp558 = $tmp556($tmp549);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp558)));
frost$core$String* $tmp559 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local7) = ((frost$core$String*) $tmp558);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:343
frost$core$MutableString* $tmp560 = *(&local5);
frost$core$String* $tmp561 = *(&local6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
frost$core$String* $tmp562 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp561, &$s563);
frost$core$String* $tmp564 = *(&local7);
ITable* $tmp565 = ((frost$core$Formattable*) $tmp564)->$class->itable;
while ($tmp565->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp565 = $tmp565->next;
}
$fn567 $tmp566 = $tmp565->methods[0];
frost$core$String* $tmp568 = $tmp566(((frost$core$Formattable*) $tmp564), &$s569);
frost$core$String* $tmp570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp562, $tmp568);
frost$core$String* $tmp571 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp570, &$s572);
frost$collections$MapView* $tmp573 = *(&local4);
frost$core$String* $tmp574 = *(&local7);
ITable* $tmp575 = $tmp573->$class->itable;
while ($tmp575->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp575 = $tmp575->next;
}
$fn577 $tmp576 = $tmp575->methods[1];
frost$core$Object* $tmp578 = $tmp576($tmp573, ((frost$core$Object*) $tmp574));
frost$core$Bit $tmp579 = (frost$core$Bit) {((frost$json$JSON*) $tmp578) != NULL};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block21; else goto block22;
block22:;
frost$core$Int $tmp581 = (frost$core$Int) {343u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block21:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn585 $tmp584 = ($fn585) ((frost$core$Object*) ((frost$json$JSON*) $tmp578))->$class->vtable[0];
frost$core$String* $tmp586 = $tmp584(((frost$core$Object*) ((frost$json$JSON*) $tmp578)));
frost$core$String* $tmp587 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp571, $tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$String* $tmp588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp587, &$s589);
frost$core$MutableString$append$frost$core$String($tmp560, $tmp588);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:344
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s590));
frost$core$String* $tmp591 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local6) = &$s592;
frost$core$Frost$unref$frost$core$Object$Q($tmp558);
frost$core$String* $tmp593 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local7) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:346
frost$core$MutableString* $tmp594 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp594, &$s595);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:347
frost$core$MutableString* $tmp596 = *(&local5);
frost$core$String* $tmp597 = frost$core$MutableString$finish$R$frost$core$String($tmp596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$String* $tmp598 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp599 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp600 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp597;
block15:;
frost$core$Int $tmp601 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:349:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp602 = $tmp477.value;
int64_t $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 == $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block24; else goto block25;
block24:;
frost$collections$ListView** $tmp607 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp608 = *$tmp607;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$collections$ListView* $tmp609 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local8) = $tmp608;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:350
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp610 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp610, &$s611);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$MutableString* $tmp612 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local9) = $tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:351
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s613));
frost$core$String* $tmp614 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local10) = &$s615;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:352
frost$collections$ListView* $tmp616 = *(&local8);
ITable* $tmp617 = ((frost$collections$Iterable*) $tmp616)->$class->itable;
while ($tmp617->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp617 = $tmp617->next;
}
$fn619 $tmp618 = $tmp617->methods[0];
frost$collections$Iterator* $tmp620 = $tmp618(((frost$collections$Iterable*) $tmp616));
goto block27;
block27:;
ITable* $tmp621 = $tmp620->$class->itable;
while ($tmp621->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp621 = $tmp621->next;
}
$fn623 $tmp622 = $tmp621->methods[0];
frost$core$Bit $tmp624 = $tmp622($tmp620);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block29; else goto block28;
block28:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp626 = $tmp620->$class->itable;
while ($tmp626->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp626 = $tmp626->next;
}
$fn628 $tmp627 = $tmp626->methods[1];
frost$core$Object* $tmp629 = $tmp627($tmp620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp629)));
frost$json$JSON* $tmp630 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local11) = ((frost$json$JSON*) $tmp629);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:353
frost$core$MutableString* $tmp631 = *(&local9);
frost$core$String* $tmp632 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$String* $tmp633 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp632, &$s634);
frost$json$JSON* $tmp635 = *(&local11);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn637 $tmp636 = ($fn637) ((frost$core$Object*) $tmp635)->$class->vtable[0];
frost$core$String* $tmp638 = $tmp636(((frost$core$Object*) $tmp635));
frost$core$String* $tmp639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp633, $tmp638);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$String* $tmp640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp639, &$s641);
frost$core$MutableString$append$frost$core$String($tmp631, $tmp640);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s642));
frost$core$String* $tmp643 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local10) = &$s644;
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
frost$json$JSON* $tmp645 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local11) = ((frost$json$JSON*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:356
frost$core$MutableString* $tmp646 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp646, &$s647);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:357
frost$core$MutableString* $tmp648 = *(&local9);
frost$core$String* $tmp649 = frost$core$MutableString$finish$R$frost$core$String($tmp648);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$String* $tmp650 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp651 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp652 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp649;
block25:;
frost$core$Int $tmp653 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:359:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp654 = $tmp477.value;
int64_t $tmp655 = $tmp653.value;
bool $tmp656 = $tmp654 == $tmp655;
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s659));
return &$s660;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:363
frost$core$Int $tmp661 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s662, $tmp661);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp663 = &param0->$rawValue;
frost$core$Int $tmp664 = *$tmp663;
frost$core$Int $tmp665 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665.value;
bool $tmp668 = $tmp666 == $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp671 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp672 = *$tmp671;
*(&local0) = $tmp672;
goto block1;
block3:;
frost$core$Int $tmp673 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp674 = $tmp664.value;
int64_t $tmp675 = $tmp673.value;
bool $tmp676 = $tmp674 == $tmp675;
frost$core$Bit $tmp677 = (frost$core$Bit) {$tmp676};
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp679 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp680 = *$tmp679;
*(&local1) = $tmp680;
goto block1;
block6:;
frost$core$Int $tmp681 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp682 = $tmp664.value;
int64_t $tmp683 = $tmp681.value;
bool $tmp684 = $tmp682 == $tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block8; else goto block9;
block8:;
frost$core$String** $tmp687 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp688 = *$tmp687;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$String* $tmp689 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local2) = $tmp688;
// <no location>
frost$core$String* $tmp690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$String* $tmp691 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int $tmp692 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp693 = $tmp664.value;
int64_t $tmp694 = $tmp692.value;
bool $tmp695 = $tmp693 == $tmp694;
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp698 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp699 = *$tmp698;
*(&local3) = $tmp699;
goto block1;
block12:;
frost$core$Int $tmp700 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp701 = $tmp664.value;
int64_t $tmp702 = $tmp700.value;
bool $tmp703 = $tmp701 == $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp706 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp707 = *$tmp706;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$collections$MapView* $tmp708 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local4) = $tmp707;
// <no location>
frost$collections$MapView* $tmp709 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$collections$MapView* $tmp710 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block15:;
frost$core$Int $tmp711 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp712 = $tmp664.value;
int64_t $tmp713 = $tmp711.value;
bool $tmp714 = $tmp712 == $tmp713;
frost$core$Bit $tmp715 = (frost$core$Bit) {$tmp714};
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block17; else goto block18;
block17:;
frost$collections$ListView** $tmp717 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp718 = *$tmp717;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$collections$ListView* $tmp719 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local5) = $tmp718;
// <no location>
frost$collections$ListView* $tmp720 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$collections$ListView* $tmp721 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block18:;
frost$core$Int $tmp722 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp723 = $tmp664.value;
int64_t $tmp724 = $tmp722.value;
bool $tmp725 = $tmp723 == $tmp724;
frost$core$Bit $tmp726 = (frost$core$Bit) {$tmp725};
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block20; else goto block1;
block20:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Int(frost$json$JSON* param0, frost$core$Int param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp728 = &param0->$rawValue;
*$tmp728 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp729 = (frost$core$Int*) (param0->$data + 0);
*$tmp729 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Real64(frost$json$JSON* param0, frost$core$Int param1, frost$core$Real64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp730 = &param0->$rawValue;
*$tmp730 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Real64* $tmp731 = (frost$core$Real64*) (param0->$data + 0);
*$tmp731 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$String(frost$json$JSON* param0, frost$core$Int param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp732 = &param0->$rawValue;
*$tmp732 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp733 = (frost$core$String**) (param0->$data + 0);
*$tmp733 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Bit(frost$json$JSON* param0, frost$core$Int param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp734 = &param0->$rawValue;
*$tmp734 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Bit* $tmp735 = (frost$core$Bit*) (param0->$data + 0);
*$tmp735 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int param1, frost$collections$MapView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp736 = &param0->$rawValue;
*$tmp736 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp737 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp737 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp738 = &param0->$rawValue;
*$tmp738 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp739 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp739 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int(frost$json$JSON* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp740 = &param0->$rawValue;
*$tmp740 = param1;
return;

}

