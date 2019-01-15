#include "frost/json/JSON.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON/PathKey.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Int32.h"
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
frost$json$JSON$class_type frost$json$JSON$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$json$JSON$convert$R$frost$core$String, frost$json$JSON$cleanup, frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q, frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q, frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q, frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q, frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q, frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q, frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q, frost$json$JSON$asInt$R$frost$core$Int64, frost$json$JSON$asReal$R$frost$core$Real64, frost$json$JSON$asString$R$frost$core$String, frost$json$JSON$asBit$R$frost$core$Bit, frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT, frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT} };

typedef frost$core$Bit (*$fn31)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn88)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn126)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn160)(frost$collections$ListView*, frost$core$Int64);
typedef frost$json$JSON* (*$fn169)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn193)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn217)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn241)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn267)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn293)(frost$json$JSON*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn474)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn478)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn483)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn494)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn504)(frost$collections$MapView*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn535)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn539)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn544)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, -3431816289963872625, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x6e\x65\x78\x74\x50\x61\x74\x68\x4b\x65\x79\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, -4981898369582510646, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x49\x6e\x74\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -4116241806709280558, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x52\x65\x61\x6c\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 100, 404194722282682396, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x42\x69\x74\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, 2768506010171987024, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x53\x74\x72\x69\x6e\x67\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, -6480585192975735344, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x41\x72\x72\x61\x79\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 5873853791740413698, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x4f\x62\x6a\x65\x63\x74\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 146, -655688003186421914, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 74, 7918993869362854962, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -4851895654972042440, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 5854513706805087908, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 72, -1037015571536454704, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, -3178971589441836654, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x41\x72\x72\x61\x79\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, 380575808171157334, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -8852943738842028790, NULL };

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Char32 local3;
frost$core$Bit local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$Int64$nullable local7;
// line 52
frost$core$Char32 $tmp2 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, param1);
frost$core$Int32 $tmp3 = (frost$core$Int32) {47};
frost$core$Char32 $tmp4 = frost$core$Char32$init$frost$core$Int32($tmp3);
frost$core$Bit $tmp5 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp2, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 54
frost$core$String$Index $tmp7 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local0) = $tmp7;
// line 55
frost$core$String$Index $tmp8 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local1) = $tmp8;
// line 56
frost$core$String$Index $tmp9 = *(&local1);
*(&local2) = $tmp9;
// line 57
goto block4;
block4:;
// line 58
frost$core$String$Index $tmp10 = *(&local2);
frost$core$Char32 $tmp11 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp10);
*(&local3) = $tmp11;
// line 59
frost$core$Char32 $tmp12 = *(&local3);
frost$core$Int32 $tmp13 = (frost$core$Int32) {47};
frost$core$Char32 $tmp14 = frost$core$Char32$init$frost$core$Int32($tmp13);
frost$core$Bit $tmp15 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp12, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block9; else goto block10;
block9:;
*(&local4) = $tmp15;
goto block11;
block10:;
frost$core$Char32 $tmp17 = *(&local3);
frost$core$Int32 $tmp18 = (frost$core$Int32) {91};
frost$core$Char32 $tmp19 = frost$core$Char32$init$frost$core$Int32($tmp18);
frost$core$Bit $tmp20 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp17, $tmp19);
*(&local4) = $tmp20;
goto block11;
block11:;
frost$core$Bit $tmp21 = *(&local4);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block7; else goto block8;
block7:;
// line 60
goto block6;
block8:;
// line 62
frost$core$String$Index $tmp23 = *(&local2);
frost$core$String$Index $tmp24 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp23);
*(&local2) = $tmp24;
goto block5;
block5:;
frost$core$String$Index $tmp25 = *(&local2);
frost$core$String$Index$wrapper* $tmp26;
$tmp26 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp26->value = $tmp25;
frost$core$String$Index $tmp27 = *(&local0);
frost$core$String$Index$wrapper* $tmp28;
$tmp28 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp28->value = $tmp27;
ITable* $tmp29 = ((frost$core$Equatable*) $tmp26)->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
$fn31 $tmp30 = $tmp29->methods[1];
frost$core$Bit $tmp32 = $tmp30(((frost$core$Equatable*) $tmp26), ((frost$core$Equatable*) $tmp28));
bool $tmp33 = $tmp32.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp28)));
// unreffing REF($51:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp26)));
// unreffing REF($48:frost.core.Equatable<frost.core.String.Index>)
if ($tmp33) goto block4; else goto block6;
block6:;
// line 65
frost$core$String$Index $tmp34 = *(&local1);
frost$core$String$Index $tmp35 = *(&local2);
frost$core$Bit $tmp36 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp34, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block12; else goto block13;
block12:;
// line 66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block13:;
// line 68
frost$json$JSON$PathKey* $tmp38 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
frost$core$String$Index $tmp40 = *(&local1);
frost$core$String$Index $tmp41 = *(&local2);
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp43 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp40, $tmp41, $tmp42);
frost$core$String* $tmp44 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp43);
frost$core$String$Index $tmp45 = *(&local2);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$String$frost$core$String$Index($tmp38, $tmp39, $tmp44, $tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing REF($73:frost.json.JSON.PathKey)
return $tmp38;
block3:;
frost$core$Int32 $tmp46 = (frost$core$Int32) {91};
frost$core$Char32 $tmp47 = frost$core$Char32$init$frost$core$Int32($tmp46);
frost$core$Bit $tmp48 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp2, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block14; else goto block15;
block14:;
// line 71
frost$core$String$Index $tmp50 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local5) = $tmp50;
// line 72
frost$core$String$Index $tmp51 = *(&local5);
*(&local6) = $tmp51;
// line 73
goto block16;
block16:;
frost$core$String$Index $tmp52 = *(&local6);
frost$core$Char32 $tmp53 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp52);
frost$core$Int32 $tmp54 = (frost$core$Int32) {93};
frost$core$Char32 $tmp55 = frost$core$Char32$init$frost$core$Int32($tmp54);
frost$core$Bit $tmp56 = frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit($tmp53, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block17; else goto block18;
block17:;
// line 74
frost$core$String$Index $tmp58 = *(&local6);
frost$core$String$Index $tmp59 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp58);
*(&local6) = $tmp59;
goto block16;
block18:;
// line 76
frost$core$String$Index $tmp60 = *(&local5);
frost$core$String$Index $tmp61 = *(&local6);
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp63 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp60, $tmp61, $tmp62);
frost$core$String* $tmp64 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp63);
frost$core$Int64$nullable $tmp65 = frost$core$String$convert$R$frost$core$Int64$Q($tmp64);
*(&local7) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($122:frost.core.String)
// line 77
frost$core$Int64$nullable $tmp66 = *(&local7);
frost$core$Bit $tmp67 = frost$core$Bit$init$builtin_bit(!$tmp66.nonnull);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block19; else goto block20;
block19:;
// line 78
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block20:;
// line 80
frost$json$JSON$PathKey* $tmp69 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {1};
frost$core$Int64$nullable $tmp71 = *(&local7);
frost$core$String$Index $tmp72 = *(&local6);
frost$core$String$Index $tmp73 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp72);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index($tmp69, $tmp70, ((frost$core$Int64) $tmp71.value), $tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($139:frost.json.JSON.PathKey)
return $tmp69;
block15:;
// line 83
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block1:;
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(false);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {51};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block21:;
abort(); // unreachable

}
frost$json$JSON* frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$json$JSON* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String$Index local4;
frost$collections$MapView* local5 = NULL;
frost$core$Int64 local6;
frost$core$String$Index local7;
frost$collections$ListView* local8 = NULL;
// line 103
frost$core$String$Index $tmp79 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp79;
// line 104
frost$core$String$Index $tmp80 = frost$core$String$get_end$R$frost$core$String$Index(param1);
*(&local1) = $tmp80;
// line 105
*(&local2) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp81 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local2) = param0;
// line 106
goto block1;
block1:;
frost$core$String$Index $tmp82 = *(&local0);
frost$core$String$Index$wrapper* $tmp83;
$tmp83 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp83->value = $tmp82;
frost$core$String$Index $tmp84 = *(&local1);
frost$core$String$Index$wrapper* $tmp85;
$tmp85 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp85->value = $tmp84;
ITable* $tmp86 = ((frost$core$Equatable*) $tmp83)->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[1];
frost$core$Bit $tmp89 = $tmp87(((frost$core$Equatable*) $tmp83), ((frost$core$Equatable*) $tmp85));
bool $tmp90 = $tmp89.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp85)));
// unreffing REF($21:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp83)));
// unreffing REF($18:frost.core.Equatable<frost.core.String.Index>)
if ($tmp90) goto block2; else goto block3;
block2:;
// line 107
frost$core$String$Index $tmp91 = *(&local0);
frost$json$JSON$PathKey* $tmp92 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp91);
frost$core$Bit $tmp93 = frost$core$Bit$init$builtin_bit($tmp92 != NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp95 = (frost$core$Int64) {107};
frost$core$String* $tmp96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s97, param1);
frost$core$String* $tmp98 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp96, &$s99);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s100, $tmp95, $tmp98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($40:frost.core.String)
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($34:frost.json.JSON.PathKey?)
// line 108
frost$core$String$Index $tmp101 = *(&local0);
frost$json$JSON$PathKey* $tmp102 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp101);
frost$core$Int64* $tmp103 = &$tmp102->$rawValue;
frost$core$Int64 $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {0};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block7; else goto block8;
block7:;
frost$core$String** $tmp108 = (frost$core$String**) ($tmp102->$data + 0);
frost$core$String* $tmp109 = *$tmp108;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$String* $tmp110 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local3) = $tmp109;
frost$core$String$Index* $tmp111 = (frost$core$String$Index*) ($tmp102->$data + 8);
frost$core$String$Index $tmp112 = *$tmp111;
*(&local4) = $tmp112;
// line 110
frost$json$JSON* $tmp113 = *(&local2);
frost$core$Int64* $tmp114 = &$tmp113->$rawValue;
frost$core$Int64 $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {4};
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp119 = (frost$collections$MapView**) ($tmp113->$data + 0);
frost$collections$MapView* $tmp120 = *$tmp119;
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$collections$MapView* $tmp121 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local5) = $tmp120;
// line 112
frost$collections$MapView* $tmp122 = *(&local5);
frost$core$String* $tmp123 = *(&local3);
ITable* $tmp124 = $tmp122->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[1];
frost$core$Object* $tmp127 = $tmp125($tmp122, ((frost$core$Object*) $tmp123));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp127)));
frost$json$JSON* $tmp128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local2) = ((frost$json$JSON*) $tmp127);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($99:frost.collections.MapView.V?)
// line 113
frost$json$JSON* $tmp129 = *(&local2);
frost$core$Bit $tmp130 = frost$core$Bit$init$builtin_bit($tmp129 == NULL);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block12; else goto block13;
block12:;
// line 114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$collections$MapView* $tmp132 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing fields
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$String* $tmp133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing field
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($55:frost.json.JSON.PathKey?)
frost$json$JSON* $tmp134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block13:;
frost$collections$MapView* $tmp135 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing fields
*(&local5) = ((frost$collections$MapView*) NULL);
goto block9;
block11:;
// line 118
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$String* $tmp136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing field
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($55:frost.json.JSON.PathKey?)
frost$json$JSON* $tmp137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block9:;
// line 121
frost$core$String$Index $tmp138 = *(&local4);
*(&local0) = $tmp138;
frost$core$String* $tmp139 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing field
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {1};
frost$core$Bit $tmp141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp140);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block14; else goto block6;
block14:;
frost$core$Int64* $tmp143 = (frost$core$Int64*) ($tmp102->$data + 0);
frost$core$Int64 $tmp144 = *$tmp143;
*(&local6) = $tmp144;
frost$core$String$Index* $tmp145 = (frost$core$String$Index*) ($tmp102->$data + 8);
frost$core$String$Index $tmp146 = *$tmp145;
*(&local7) = $tmp146;
// line 124
frost$json$JSON* $tmp147 = *(&local2);
frost$core$Int64* $tmp148 = &$tmp147->$rawValue;
frost$core$Int64 $tmp149 = *$tmp148;
frost$core$Int64 $tmp150 = (frost$core$Int64) {5};
frost$core$Bit $tmp151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp149, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block16; else goto block17;
block16:;
frost$collections$ListView** $tmp153 = (frost$collections$ListView**) ($tmp147->$data + 0);
frost$collections$ListView* $tmp154 = *$tmp153;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$ListView* $tmp155 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local8) = $tmp154;
// line 126
frost$collections$ListView* $tmp156 = *(&local8);
frost$core$Int64 $tmp157 = *(&local6);
ITable* $tmp158 = $tmp156->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$core$Object* $tmp161 = $tmp159($tmp156, $tmp157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp161)));
frost$json$JSON* $tmp162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local2) = ((frost$json$JSON*) $tmp161);
frost$core$Frost$unref$frost$core$Object$Q($tmp161);
// unreffing REF($203:frost.collections.ListView.T)
frost$collections$ListView* $tmp163 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing nodes
*(&local8) = ((frost$collections$ListView*) NULL);
goto block15;
block17:;
// line 129
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($55:frost.json.JSON.PathKey?)
frost$json$JSON* $tmp164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block15:;
// line 132
frost$core$String$Index $tmp165 = *(&local7);
*(&local0) = $tmp165;
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($55:frost.json.JSON.PathKey?)
goto block1;
block3:;
// line 136
frost$json$JSON* $tmp166 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$json$JSON* $tmp167 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return $tmp166;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int64 local1;
// line 143
$fn169 $tmp168 = ($fn169) param0->$class->vtable[2];
frost$json$JSON* $tmp170 = $tmp168(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$json$JSON* $tmp171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local0) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing REF($2:frost.json.JSON?)
// line 144
frost$json$JSON* $tmp172 = *(&local0);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit($tmp172 == NULL);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block1; else goto block2;
block1:;
// line 145
frost$json$JSON* $tmp175 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 147
frost$json$JSON* $tmp176 = *(&local0);
frost$core$Int64* $tmp177 = &$tmp176->$rawValue;
frost$core$Int64 $tmp178 = *$tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {0};
frost$core$Bit $tmp180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp178, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block4; else goto block5;
block4:;
frost$core$Int64* $tmp182 = (frost$core$Int64*) ($tmp176->$data + 0);
frost$core$Int64 $tmp183 = *$tmp182;
*(&local1) = $tmp183;
// line 149
frost$core$Int64 $tmp184 = *(&local1);
frost$json$JSON* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp184, true });
block5:;
// line 152
frost$json$JSON* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block3:;
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit(false);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {142};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s190, $tmp189, &$s191);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Real64 local1;
// line 161
$fn193 $tmp192 = ($fn193) param0->$class->vtable[2];
frost$json$JSON* $tmp194 = $tmp192(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$json$JSON* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing REF($2:frost.json.JSON?)
// line 162
frost$json$JSON* $tmp196 = *(&local0);
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit($tmp196 == NULL);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block1; else goto block2;
block1:;
// line 163
frost$json$JSON* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// line 165
frost$json$JSON* $tmp200 = *(&local0);
frost$core$Int64* $tmp201 = &$tmp200->$rawValue;
frost$core$Int64 $tmp202 = *$tmp201;
frost$core$Int64 $tmp203 = (frost$core$Int64) {1};
frost$core$Bit $tmp204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp202, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp206 = (frost$core$Real64*) ($tmp200->$data + 0);
frost$core$Real64 $tmp207 = *$tmp206;
*(&local1) = $tmp207;
// line 167
frost$core$Real64 $tmp208 = *(&local1);
frost$json$JSON* $tmp209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp208, true });
block5:;
// line 170
frost$json$JSON* $tmp210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block3:;
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit(false);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp213 = (frost$core$Int64) {160};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Bit local1;
// line 179
$fn217 $tmp216 = ($fn217) param0->$class->vtable[2];
frost$json$JSON* $tmp218 = $tmp216(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$json$JSON* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = $tmp218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($2:frost.json.JSON?)
// line 180
frost$json$JSON* $tmp220 = *(&local0);
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220 == NULL);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block1; else goto block2;
block1:;
// line 181
frost$json$JSON* $tmp223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// line 183
frost$json$JSON* $tmp224 = *(&local0);
frost$core$Int64* $tmp225 = &$tmp224->$rawValue;
frost$core$Int64 $tmp226 = *$tmp225;
frost$core$Int64 $tmp227 = (frost$core$Int64) {3};
frost$core$Bit $tmp228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp226, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block4; else goto block5;
block4:;
frost$core$Bit* $tmp230 = (frost$core$Bit*) ($tmp224->$data + 0);
frost$core$Bit $tmp231 = *$tmp230;
*(&local1) = $tmp231;
// line 185
frost$core$Bit $tmp232 = *(&local1);
frost$json$JSON* $tmp233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp232, true });
block5:;
// line 188
frost$json$JSON* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block3:;
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit(false);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {178};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s238, $tmp237, &$s239);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$String* local1 = NULL;
// line 197
$fn241 $tmp240 = ($fn241) param0->$class->vtable[2];
frost$json$JSON* $tmp242 = $tmp240(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$json$JSON* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($2:frost.json.JSON?)
// line 198
frost$json$JSON* $tmp244 = *(&local0);
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244 == NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block1; else goto block2;
block1:;
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// line 201
frost$json$JSON* $tmp248 = *(&local0);
frost$core$Int64* $tmp249 = &$tmp248->$rawValue;
frost$core$Int64 $tmp250 = *$tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {2};
frost$core$Bit $tmp252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp250, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block4; else goto block5;
block4:;
frost$core$String** $tmp254 = (frost$core$String**) ($tmp248->$data + 0);
frost$core$String* $tmp255 = *$tmp254;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$String* $tmp256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local1) = $tmp255;
// line 203
frost$core$String* $tmp257 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$String* $tmp258 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing value
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp257;
block5:;
// line 206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block3:;
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit(false);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp263 = (frost$core$Int64) {196};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s264, $tmp263, &$s265);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$collections$ListView* frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// line 215
$fn267 $tmp266 = ($fn267) param0->$class->vtable[2];
frost$json$JSON* $tmp268 = $tmp266(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$json$JSON* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($2:frost.json.JSON?)
// line 216
frost$json$JSON* $tmp270 = *(&local0);
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit($tmp270 == NULL);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// line 217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// line 219
frost$json$JSON* $tmp274 = *(&local0);
frost$core$Int64* $tmp275 = &$tmp274->$rawValue;
frost$core$Int64 $tmp276 = *$tmp275;
frost$core$Int64 $tmp277 = (frost$core$Int64) {5};
frost$core$Bit $tmp278 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp276, $tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block4; else goto block5;
block4:;
frost$collections$ListView** $tmp280 = (frost$collections$ListView**) ($tmp274->$data + 0);
frost$collections$ListView* $tmp281 = *$tmp280;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$collections$ListView* $tmp282 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local1) = $tmp281;
// line 221
frost$collections$ListView* $tmp283 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$collections$ListView* $tmp284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing value
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp283;
block5:;
// line 224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp286 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block3:;
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit(false);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp289 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s290, $tmp289, &$s291);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$collections$MapView* frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
// line 233
$fn293 $tmp292 = ($fn293) param0->$class->vtable[2];
frost$json$JSON* $tmp294 = $tmp292(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$json$JSON* $tmp295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing REF($2:frost.json.JSON?)
// line 234
frost$json$JSON* $tmp296 = *(&local0);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 == NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block1; else goto block2;
block1:;
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// line 237
frost$json$JSON* $tmp300 = *(&local0);
frost$core$Int64* $tmp301 = &$tmp300->$rawValue;
frost$core$Int64 $tmp302 = *$tmp301;
frost$core$Int64 $tmp303 = (frost$core$Int64) {4};
frost$core$Bit $tmp304 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp302, $tmp303);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block4; else goto block5;
block4:;
frost$collections$MapView** $tmp306 = (frost$collections$MapView**) ($tmp300->$data + 0);
frost$collections$MapView* $tmp307 = *$tmp306;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$collections$MapView* $tmp308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local1) = $tmp307;
// line 239
frost$collections$MapView* $tmp309 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$collections$MapView* $tmp310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing value
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp309;
block5:;
// line 242
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block3:;
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit(false);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {232};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$Int64 frost$json$JSON$asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int64 local0;
// line 251
frost$core$Int64* $tmp318 = &param0->$rawValue;
frost$core$Int64 $tmp319 = *$tmp318;
frost$core$Int64 $tmp320 = (frost$core$Int64) {0};
frost$core$Bit $tmp321 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp319, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp323 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp324 = *$tmp323;
*(&local0) = $tmp324;
// line 253
frost$core$Int64 $tmp325 = *(&local0);
return $tmp325;
block3:;
// line 256
frost$core$Bit $tmp326 = frost$core$Bit$init$builtin_bit(false);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp328 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s329, $tmp328);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit(false);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s333, $tmp332, &$s334);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$Real64 frost$json$JSON$asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// line 265
frost$core$Int64* $tmp335 = &param0->$rawValue;
frost$core$Int64 $tmp336 = *$tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {1};
frost$core$Bit $tmp338 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp336, $tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp340 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp341 = *$tmp340;
*(&local0) = $tmp341;
// line 267
frost$core$Real64 $tmp342 = *(&local0);
return $tmp342;
block3:;
// line 270
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit(false);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp345 = (frost$core$Int64) {270};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s346, $tmp345);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit(false);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* frost$json$JSON$asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$String* local0 = NULL;
// line 279
frost$core$Int64* $tmp352 = &param0->$rawValue;
frost$core$Int64 $tmp353 = *$tmp352;
frost$core$Int64 $tmp354 = (frost$core$Int64) {2};
frost$core$Bit $tmp355 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp353, $tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block2; else goto block3;
block2:;
frost$core$String** $tmp357 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp358 = *$tmp357;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$String* $tmp359 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local0) = $tmp358;
// line 281
frost$core$String* $tmp360 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$String* $tmp361 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing value
*(&local0) = ((frost$core$String*) NULL);
return $tmp360;
block3:;
// line 284
frost$core$Bit $tmp362 = frost$core$Bit$init$builtin_bit(false);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp364 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s365, $tmp364);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit(false);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp368 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s369, $tmp368, &$s370);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$Bit frost$json$JSON$asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// line 293
frost$core$Int64* $tmp371 = &param0->$rawValue;
frost$core$Int64 $tmp372 = *$tmp371;
frost$core$Int64 $tmp373 = (frost$core$Int64) {3};
frost$core$Bit $tmp374 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp372, $tmp373);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp376 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp377 = *$tmp376;
*(&local0) = $tmp377;
// line 295
frost$core$Bit $tmp378 = *(&local0);
return $tmp378;
block3:;
// line 298
frost$core$Bit $tmp379 = frost$core$Bit$init$builtin_bit(false);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp381 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s382, $tmp381);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit(false);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp385 = (frost$core$Int64) {292};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s386, $tmp385, &$s387);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$collections$MapView* frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// line 307
frost$core$Int64* $tmp388 = &param0->$rawValue;
frost$core$Int64 $tmp389 = *$tmp388;
frost$core$Int64 $tmp390 = (frost$core$Int64) {4};
frost$core$Bit $tmp391 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp389, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp393 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp394 = *$tmp393;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$collections$MapView* $tmp395 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local0) = $tmp394;
// line 309
frost$collections$MapView* $tmp396 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$collections$MapView* $tmp397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// unreffing value
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp396;
block3:;
// line 312
frost$core$Bit $tmp398 = frost$core$Bit$init$builtin_bit(false);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp400 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s401, $tmp400);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp402 = frost$core$Bit$init$builtin_bit(false);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$collections$ListView* frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// line 321
frost$core$Int64* $tmp407 = &param0->$rawValue;
frost$core$Int64 $tmp408 = *$tmp407;
frost$core$Int64 $tmp409 = (frost$core$Int64) {5};
frost$core$Bit $tmp410 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp408, $tmp409);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp412 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp413 = *$tmp412;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$collections$ListView* $tmp414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = $tmp413;
// line 323
frost$collections$ListView* $tmp415 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$collections$ListView* $tmp416 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing value
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp415;
block3:;
// line 326
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit(false);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp419 = (frost$core$Int64) {326};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s420, $tmp419);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit(false);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp423 = (frost$core$Int64) {320};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* frost$json$JSON$convert$R$frost$core$String(frost$json$JSON* param0) {

frost$core$Int64 local0;
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
// line 336
frost$core$Int64* $tmp426 = &param0->$rawValue;
frost$core$Int64 $tmp427 = *$tmp426;
frost$core$Int64 $tmp428 = (frost$core$Int64) {0};
frost$core$Bit $tmp429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp427, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp431 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp432 = *$tmp431;
*(&local0) = $tmp432;
// line 338
frost$core$Int64 $tmp433 = *(&local0);
frost$core$String* $tmp434 = frost$core$Int64$convert$R$frost$core$String($tmp433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing REF($12:frost.core.String)
return $tmp434;
block3:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {1};
frost$core$Bit $tmp436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp427, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp438 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp439 = *$tmp438;
*(&local1) = $tmp439;
// line 341
frost$core$Real64 $tmp440 = *(&local1);
frost$core$String* $tmp441 = frost$core$Real64$convert$R$frost$core$String($tmp440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($28:frost.core.String)
return $tmp441;
block5:;
frost$core$Int64 $tmp442 = (frost$core$Int64) {2};
frost$core$Bit $tmp443 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp427, $tmp442);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block6; else goto block7;
block6:;
frost$core$String** $tmp445 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp446 = *$tmp445;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$String* $tmp447 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local2) = $tmp446;
// line 344
frost$core$String* $tmp448 = *(&local2);
frost$core$String* $tmp449 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp448, &$s450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing REF($50:frost.core.String)
frost$core$String* $tmp451 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing value
*(&local2) = ((frost$core$String*) NULL);
return $tmp449;
block7:;
frost$core$Int64 $tmp452 = (frost$core$Int64) {3};
frost$core$Bit $tmp453 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp427, $tmp452);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp455 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp456 = *$tmp455;
*(&local3) = $tmp456;
// line 347
frost$core$Bit $tmp457 = *(&local3);
frost$core$String* $tmp458 = frost$core$Bit$convert$R$frost$core$String($tmp457);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing REF($71:frost.core.String)
return $tmp458;
block9:;
frost$core$Int64 $tmp459 = (frost$core$Int64) {4};
frost$core$Bit $tmp460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp427, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp462 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp463 = *$tmp462;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$collections$MapView* $tmp464 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local4) = $tmp463;
// line 350
frost$core$MutableString* $tmp465 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp465, &$s466);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$MutableString* $tmp467 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local5) = $tmp465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// unreffing REF($92:frost.core.MutableString)
// line 351
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s468));
frost$core$String* $tmp469 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local6) = &$s470;
// line 352
frost$collections$MapView* $tmp471 = *(&local4);
ITable* $tmp472 = $tmp471->$class->itable;
while ($tmp472->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[3];
frost$collections$Iterator* $tmp475 = $tmp473($tmp471);
goto block12;
block12:;
ITable* $tmp476 = $tmp475->$class->itable;
while ($tmp476->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp476 = $tmp476->next;
}
$fn478 $tmp477 = $tmp476->methods[0];
frost$core$Bit $tmp479 = $tmp477($tmp475);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block14; else goto block13;
block13:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp481 = $tmp475->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[1];
frost$core$Object* $tmp484 = $tmp482($tmp475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp484)));
frost$core$String* $tmp485 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local7) = ((frost$core$String*) $tmp484);
// line 353
frost$core$MutableString* $tmp486 = *(&local5);
frost$core$String* $tmp487 = *(&local6);
frost$core$String* $tmp488 = frost$core$String$convert$R$frost$core$String($tmp487);
frost$core$String* $tmp489 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp488, &$s490);
frost$core$String* $tmp491 = *(&local7);
ITable* $tmp492 = ((frost$core$Formattable*) $tmp491)->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[0];
frost$core$String* $tmp495 = $tmp493(((frost$core$Formattable*) $tmp491), &$s496);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp489, $tmp495);
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s499);
frost$collections$MapView* $tmp500 = *(&local4);
frost$core$String* $tmp501 = *(&local7);
ITable* $tmp502 = $tmp500->$class->itable;
while ($tmp502->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp502 = $tmp502->next;
}
$fn504 $tmp503 = $tmp502->methods[1];
frost$core$Object* $tmp505 = $tmp503($tmp500, ((frost$core$Object*) $tmp501));
frost$core$String* $tmp506 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp498, ((frost$core$Object*) ((frost$json$JSON*) $tmp505)));
frost$core$String* $tmp507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp506, &$s508);
frost$core$MutableString$append$frost$core$String($tmp486, $tmp507);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing REF($154:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp505);
// unreffing REF($151:frost.collections.MapView.V?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($145:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing REF($144:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing REF($143:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// unreffing REF($139:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing REF($138:frost.core.String)
// line 354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s509));
frost$core$String* $tmp510 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local6) = &$s511;
frost$core$Frost$unref$frost$core$Object$Q($tmp484);
// unreffing REF($127:frost.collections.Iterator.T)
frost$core$String* $tmp512 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing k
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($116:frost.collections.Iterator<frost.collections.MapView.K>)
// line 356
frost$core$MutableString* $tmp513 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp513, &$s514);
// line 357
frost$core$MutableString* $tmp515 = *(&local5);
frost$core$String* $tmp516 = frost$core$MutableString$finish$R$frost$core$String($tmp515);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing REF($205:frost.core.String)
frost$core$String* $tmp517 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing separator
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp518 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing result
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp519 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing fields
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp516;
block11:;
frost$core$Int64 $tmp520 = (frost$core$Int64) {5};
frost$core$Bit $tmp521 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp427, $tmp520);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block15; else goto block16;
block15:;
frost$collections$ListView** $tmp523 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp524 = *$tmp523;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$collections$ListView* $tmp525 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local8) = $tmp524;
// line 360
frost$core$MutableString* $tmp526 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp526, &$s527);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$MutableString* $tmp528 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local9) = $tmp526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing REF($241:frost.core.MutableString)
// line 361
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s529));
frost$core$String* $tmp530 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local10) = &$s531;
// line 362
frost$collections$ListView* $tmp532 = *(&local8);
ITable* $tmp533 = ((frost$collections$Iterable*) $tmp532)->$class->itable;
while ($tmp533->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp533 = $tmp533->next;
}
$fn535 $tmp534 = $tmp533->methods[0];
frost$collections$Iterator* $tmp536 = $tmp534(((frost$collections$Iterable*) $tmp532));
goto block17;
block17:;
ITable* $tmp537 = $tmp536->$class->itable;
while ($tmp537->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp537 = $tmp537->next;
}
$fn539 $tmp538 = $tmp537->methods[0];
frost$core$Bit $tmp540 = $tmp538($tmp536);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block19; else goto block18;
block18:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp542 = $tmp536->$class->itable;
while ($tmp542->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[1];
frost$core$Object* $tmp545 = $tmp543($tmp536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp545)));
frost$json$JSON* $tmp546 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local11) = ((frost$json$JSON*) $tmp545);
// line 363
frost$core$MutableString* $tmp547 = *(&local9);
frost$core$String* $tmp548 = *(&local10);
frost$core$String* $tmp549 = frost$core$String$convert$R$frost$core$String($tmp548);
frost$core$String* $tmp550 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp549, &$s551);
frost$json$JSON* $tmp552 = *(&local11);
frost$core$String* $tmp553 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp550, ((frost$core$Object*) $tmp552));
frost$core$String* $tmp554 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp553, &$s555);
frost$core$MutableString$append$frost$core$String($tmp547, $tmp554);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// unreffing REF($293:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing REF($292:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing REF($289:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing REF($288:frost.core.String)
// line 364
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s556));
frost$core$String* $tmp557 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local10) = &$s558;
frost$core$Frost$unref$frost$core$Object$Q($tmp545);
// unreffing REF($277:frost.collections.Iterator.T)
frost$json$JSON* $tmp559 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing n
*(&local11) = ((frost$json$JSON*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
// unreffing REF($266:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 366
frost$core$MutableString* $tmp560 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp560, &$s561);
// line 367
frost$core$MutableString* $tmp562 = *(&local9);
frost$core$String* $tmp563 = frost$core$MutableString$finish$R$frost$core$String($tmp562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// unreffing REF($331:frost.core.String)
frost$core$String* $tmp564 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing separator
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp565 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// unreffing result
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp566 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// unreffing nodes
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp563;
block16:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {6};
frost$core$Bit $tmp568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp427, $tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block20; else goto block21;
block20:;
// line 370
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s570));
return &$s571;
block21:;
// line 373
frost$core$Bit $tmp572 = frost$core$Bit$init$builtin_bit(false);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp574 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s575, $tmp574);
abort(); // unreachable
block22:;
goto block1;
block1:;
frost$core$Bit $tmp576 = frost$core$Bit$init$builtin_bit(false);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp578 = (frost$core$Int64) {335};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s579, $tmp578, &$s580);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void frost$json$JSON$cleanup(frost$json$JSON* param0) {

frost$core$Int64 local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 6
frost$core$Int64* $tmp581 = &param0->$rawValue;
frost$core$Int64 $tmp582 = *$tmp581;
frost$core$Int64 $tmp583 = (frost$core$Int64) {0};
frost$core$Bit $tmp584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp586 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp587 = *$tmp586;
*(&local0) = $tmp587;
goto block1;
block3:;
frost$core$Int64 $tmp588 = (frost$core$Int64) {1};
frost$core$Bit $tmp589 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp588);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp591 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp592 = *$tmp591;
*(&local1) = $tmp592;
goto block1;
block5:;
frost$core$Int64 $tmp593 = (frost$core$Int64) {2};
frost$core$Bit $tmp594 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block6; else goto block7;
block6:;
frost$core$String** $tmp596 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp597 = *$tmp596;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$String* $tmp598 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local2) = $tmp597;
// line 1
frost$core$String* $tmp599 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$String* $tmp600 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
// unreffing _f0
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp601 = (frost$core$Int64) {3};
frost$core$Bit $tmp602 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp601);
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp604 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp605 = *$tmp604;
*(&local3) = $tmp605;
goto block1;
block9:;
frost$core$Int64 $tmp606 = (frost$core$Int64) {4};
frost$core$Bit $tmp607 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp606);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp609 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp610 = *$tmp609;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$collections$MapView* $tmp611 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local4) = $tmp610;
// line 1
frost$collections$MapView* $tmp612 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$collections$MapView* $tmp613 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing _f0
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp614 = (frost$core$Int64) {5};
frost$core$Bit $tmp615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block12; else goto block13;
block12:;
frost$collections$ListView** $tmp617 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp618 = *$tmp617;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$collections$ListView* $tmp619 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local5) = $tmp618;
// line 1
frost$collections$ListView* $tmp620 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$collections$ListView* $tmp621 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing _f0
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {6};
frost$core$Bit $tmp623 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp582, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// line 6
frost$core$Int64* $tmp625 = &param0->$rawValue;
*$tmp625 = param1;
// line 6
frost$core$Int64* $tmp626 = (frost$core$Int64*) (param0->$data + 0);
*$tmp626 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Real64 param2) {

// line 6
frost$core$Int64* $tmp627 = &param0->$rawValue;
*$tmp627 = param1;
// line 6
frost$core$Real64* $tmp628 = (frost$core$Real64*) (param0->$data + 0);
*$tmp628 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 6
frost$core$Int64* $tmp629 = &param0->$rawValue;
*$tmp629 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp630 = (frost$core$String**) (param0->$data + 0);
*$tmp630 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// line 6
frost$core$Int64* $tmp631 = &param0->$rawValue;
*$tmp631 = param1;
// line 6
frost$core$Bit* $tmp632 = (frost$core$Bit*) (param0->$data + 0);
*$tmp632 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$MapView* param2) {

// line 6
frost$core$Int64* $tmp633 = &param0->$rawValue;
*$tmp633 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp634 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp634 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// line 6
frost$core$Int64* $tmp635 = &param0->$rawValue;
*$tmp635 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp636 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp636 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1) {

// line 6
frost$core$Int64* $tmp637 = &param0->$rawValue;
*$tmp637 = param1;
return;

}

