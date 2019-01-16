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
typedef frost$core$Bit (*$fn93)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn141)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn180)(frost$collections$ListView*, frost$core$Int64);
typedef frost$json$JSON* (*$fn189)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn218)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn247)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn276)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn307)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn338)(frost$json$JSON*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn524)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn528)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn533)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn544)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn554)(frost$collections$MapView*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn590)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn594)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn599)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, -3431816289963872625, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x6e\x65\x78\x74\x50\x61\x74\x68\x4b\x65\x79\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, -4981898369582510646, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 85, -2998874139020269281, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x49\x6e\x74\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -4116241806709280558, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x52\x65\x61\x6c\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 100, 404194722282682396, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x42\x69\x74\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, 2768506010171987024, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x53\x74\x72\x69\x6e\x67\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, -6480585192975735344, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x41\x72\x72\x61\x79\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 5873853791740413698, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 69, -5662618449774790361, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x4f\x62\x6a\x65\x63\x74\x28\x70\x61\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 146, -655688003186421914, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 74, 7918993869362854962, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -4851895654972042440, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 5854513706805087908, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 72, -1037015571536454704, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, -3178971589441836654, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x41\x72\x72\x61\x79\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, 380575808171157334, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 71, 8016175756391173491, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -8852943738842028790, NULL };

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
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit($tmp71.nonnull);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp74 = (frost$core$Int64) {80};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s75, $tmp74, &$s76);
abort(); // unreachable
block21:;
frost$core$String$Index $tmp77 = *(&local6);
frost$core$String$Index $tmp78 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp77);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index($tmp69, $tmp70, ((frost$core$Int64) $tmp71.value), $tmp78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($139:frost.json.JSON.PathKey)
return $tmp69;
block15:;
// line 83
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block1:;
frost$core$Bit $tmp79 = frost$core$Bit$init$builtin_bit(false);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {51};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block23:;
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
frost$core$String$Index $tmp84 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp84;
// line 104
frost$core$String$Index $tmp85 = frost$core$String$get_end$R$frost$core$String$Index(param1);
*(&local1) = $tmp85;
// line 105
*(&local2) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp86 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local2) = param0;
// line 106
goto block1;
block1:;
frost$core$String$Index $tmp87 = *(&local0);
frost$core$String$Index$wrapper* $tmp88;
$tmp88 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp88->value = $tmp87;
frost$core$String$Index $tmp89 = *(&local1);
frost$core$String$Index$wrapper* $tmp90;
$tmp90 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp90->value = $tmp89;
ITable* $tmp91 = ((frost$core$Equatable*) $tmp88)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[1];
frost$core$Bit $tmp94 = $tmp92(((frost$core$Equatable*) $tmp88), ((frost$core$Equatable*) $tmp90));
bool $tmp95 = $tmp94.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp90)));
// unreffing REF($21:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp88)));
// unreffing REF($18:frost.core.Equatable<frost.core.String.Index>)
if ($tmp95) goto block2; else goto block3;
block2:;
// line 107
frost$core$String$Index $tmp96 = *(&local0);
frost$json$JSON$PathKey* $tmp97 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp96);
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit($tmp97 != NULL);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {107};
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, param1);
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s105, $tmp100, $tmp103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($40:frost.core.String)
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing REF($34:frost.json.JSON.PathKey?)
// line 108
frost$core$String$Index $tmp106 = *(&local0);
frost$json$JSON$PathKey* $tmp107 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp106);
frost$core$Bit $tmp108 = frost$core$Bit$init$builtin_bit($tmp107 != NULL);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {108};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block6:;
frost$core$Int64* $tmp113 = &$tmp107->$rawValue;
frost$core$Int64 $tmp114 = *$tmp113;
frost$core$Int64 $tmp115 = (frost$core$Int64) {0};
frost$core$Bit $tmp116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp114, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block9; else goto block10;
block9:;
frost$core$String** $tmp118 = (frost$core$String**) ($tmp107->$data + 0);
frost$core$String* $tmp119 = *$tmp118;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$String* $tmp120 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local3) = $tmp119;
frost$core$String$Index* $tmp121 = (frost$core$String$Index*) ($tmp107->$data + 8);
frost$core$String$Index $tmp122 = *$tmp121;
*(&local4) = $tmp122;
// line 110
frost$json$JSON* $tmp123 = *(&local2);
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123 != NULL);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable
block11:;
frost$core$Int64* $tmp129 = &$tmp123->$rawValue;
frost$core$Int64 $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = (frost$core$Int64) {4};
frost$core$Bit $tmp132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp130, $tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp134 = (frost$collections$MapView**) ($tmp123->$data + 0);
frost$collections$MapView* $tmp135 = *$tmp134;
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$collections$MapView* $tmp136 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local5) = $tmp135;
// line 112
frost$collections$MapView* $tmp137 = *(&local5);
frost$core$String* $tmp138 = *(&local3);
ITable* $tmp139 = $tmp137->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[1];
frost$core$Object* $tmp142 = $tmp140($tmp137, ((frost$core$Object*) $tmp138));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp142)));
frost$json$JSON* $tmp143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local2) = ((frost$json$JSON*) $tmp142);
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
// unreffing REF($113:frost.collections.MapView.V?)
// line 113
frost$json$JSON* $tmp144 = *(&local2);
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144 == NULL);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block16; else goto block17;
block16:;
// line 114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$collections$MapView* $tmp147 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing fields
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$String* $tmp148 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing field
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($55:frost.json.JSON.PathKey?)
frost$json$JSON* $tmp149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block17:;
frost$collections$MapView* $tmp150 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing fields
*(&local5) = ((frost$collections$MapView*) NULL);
goto block13;
block15:;
// line 118
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$String* $tmp151 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing field
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($55:frost.json.JSON.PathKey?)
frost$json$JSON* $tmp152 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block13:;
// line 121
frost$core$String$Index $tmp153 = *(&local4);
*(&local0) = $tmp153;
frost$core$String* $tmp154 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing field
*(&local3) = ((frost$core$String*) NULL);
goto block8;
block10:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {1};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp114, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block18; else goto block8;
block18:;
frost$core$Int64* $tmp158 = (frost$core$Int64*) ($tmp107->$data + 0);
frost$core$Int64 $tmp159 = *$tmp158;
*(&local6) = $tmp159;
frost$core$String$Index* $tmp160 = (frost$core$String$Index*) ($tmp107->$data + 8);
frost$core$String$Index $tmp161 = *$tmp160;
*(&local7) = $tmp161;
// line 124
frost$json$JSON* $tmp162 = *(&local2);
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit($tmp162 != NULL);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {124};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s166, $tmp165, &$s167);
abort(); // unreachable
block19:;
frost$core$Int64* $tmp168 = &$tmp162->$rawValue;
frost$core$Int64 $tmp169 = *$tmp168;
frost$core$Int64 $tmp170 = (frost$core$Int64) {5};
frost$core$Bit $tmp171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block22; else goto block23;
block22:;
frost$collections$ListView** $tmp173 = (frost$collections$ListView**) ($tmp162->$data + 0);
frost$collections$ListView* $tmp174 = *$tmp173;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$collections$ListView* $tmp175 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local8) = $tmp174;
// line 126
frost$collections$ListView* $tmp176 = *(&local8);
frost$core$Int64 $tmp177 = *(&local6);
ITable* $tmp178 = $tmp176->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$core$Object* $tmp181 = $tmp179($tmp176, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp181)));
frost$json$JSON* $tmp182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local2) = ((frost$json$JSON*) $tmp181);
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
// unreffing REF($224:frost.collections.ListView.T)
frost$collections$ListView* $tmp183 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing nodes
*(&local8) = ((frost$collections$ListView*) NULL);
goto block21;
block23:;
// line 129
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($55:frost.json.JSON.PathKey?)
frost$json$JSON* $tmp184 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block21:;
// line 132
frost$core$String$Index $tmp185 = *(&local7);
*(&local0) = $tmp185;
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($55:frost.json.JSON.PathKey?)
goto block1;
block3:;
// line 136
frost$json$JSON* $tmp186 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$json$JSON* $tmp187 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing current
*(&local2) = ((frost$json$JSON*) NULL);
return $tmp186;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int64 local1;
// line 143
$fn189 $tmp188 = ($fn189) param0->$class->vtable[2];
frost$json$JSON* $tmp190 = $tmp188(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$json$JSON* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local0) = $tmp190;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($2:frost.json.JSON?)
// line 144
frost$json$JSON* $tmp192 = *(&local0);
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit($tmp192 == NULL);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// line 145
frost$json$JSON* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 147
frost$json$JSON* $tmp196 = *(&local0);
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit($tmp196 != NULL);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp199 = (frost$core$Int64) {147};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s200, $tmp199, &$s201);
abort(); // unreachable
block3:;
frost$core$Int64* $tmp202 = &$tmp196->$rawValue;
frost$core$Int64 $tmp203 = *$tmp202;
frost$core$Int64 $tmp204 = (frost$core$Int64) {0};
frost$core$Bit $tmp205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp207 = (frost$core$Int64*) ($tmp196->$data + 0);
frost$core$Int64 $tmp208 = *$tmp207;
*(&local1) = $tmp208;
// line 149
frost$core$Int64 $tmp209 = *(&local1);
frost$json$JSON* $tmp210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp209, true });
block7:;
// line 152
frost$json$JSON* $tmp211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block5:;
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit(false);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {142};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s215, $tmp214, &$s216);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Real64 local1;
// line 161
$fn218 $tmp217 = ($fn218) param0->$class->vtable[2];
frost$json$JSON* $tmp219 = $tmp217(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$json$JSON* $tmp220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local0) = $tmp219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($2:frost.json.JSON?)
// line 162
frost$json$JSON* $tmp221 = *(&local0);
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit($tmp221 == NULL);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block1; else goto block2;
block1:;
// line 163
frost$json$JSON* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// line 165
frost$json$JSON* $tmp225 = *(&local0);
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit($tmp225 != NULL);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {165};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s229, $tmp228, &$s230);
abort(); // unreachable
block3:;
frost$core$Int64* $tmp231 = &$tmp225->$rawValue;
frost$core$Int64 $tmp232 = *$tmp231;
frost$core$Int64 $tmp233 = (frost$core$Int64) {1};
frost$core$Bit $tmp234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp232, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block6; else goto block7;
block6:;
frost$core$Real64* $tmp236 = (frost$core$Real64*) ($tmp225->$data + 0);
frost$core$Real64 $tmp237 = *$tmp236;
*(&local1) = $tmp237;
// line 167
frost$core$Real64 $tmp238 = *(&local1);
frost$json$JSON* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp238, true });
block7:;
// line 170
frost$json$JSON* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block5:;
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit(false);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp243 = (frost$core$Int64) {160};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s244, $tmp243, &$s245);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Bit local1;
// line 179
$fn247 $tmp246 = ($fn247) param0->$class->vtable[2];
frost$json$JSON* $tmp248 = $tmp246(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$json$JSON* $tmp249 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local0) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($2:frost.json.JSON?)
// line 180
frost$json$JSON* $tmp250 = *(&local0);
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250 == NULL);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block1; else goto block2;
block1:;
// line 181
frost$json$JSON* $tmp253 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// line 183
frost$json$JSON* $tmp254 = *(&local0);
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit($tmp254 != NULL);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp257 = (frost$core$Int64) {183};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s258, $tmp257, &$s259);
abort(); // unreachable
block3:;
frost$core$Int64* $tmp260 = &$tmp254->$rawValue;
frost$core$Int64 $tmp261 = *$tmp260;
frost$core$Int64 $tmp262 = (frost$core$Int64) {3};
frost$core$Bit $tmp263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp261, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block6; else goto block7;
block6:;
frost$core$Bit* $tmp265 = (frost$core$Bit*) ($tmp254->$data + 0);
frost$core$Bit $tmp266 = *$tmp265;
*(&local1) = $tmp266;
// line 185
frost$core$Bit $tmp267 = *(&local1);
frost$json$JSON* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp267, true });
block7:;
// line 188
frost$json$JSON* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block5:;
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit(false);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp272 = (frost$core$Int64) {178};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s273, $tmp272, &$s274);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$String* local1 = NULL;
// line 197
$fn276 $tmp275 = ($fn276) param0->$class->vtable[2];
frost$json$JSON* $tmp277 = $tmp275(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$json$JSON* $tmp278 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local0) = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($2:frost.json.JSON?)
// line 198
frost$json$JSON* $tmp279 = *(&local0);
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit($tmp279 == NULL);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// line 201
frost$json$JSON* $tmp283 = *(&local0);
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit($tmp283 != NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp286 = (frost$core$Int64) {201};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s287, $tmp286, &$s288);
abort(); // unreachable
block3:;
frost$core$Int64* $tmp289 = &$tmp283->$rawValue;
frost$core$Int64 $tmp290 = *$tmp289;
frost$core$Int64 $tmp291 = (frost$core$Int64) {2};
frost$core$Bit $tmp292 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp290, $tmp291);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block6; else goto block7;
block6:;
frost$core$String** $tmp294 = (frost$core$String**) ($tmp283->$data + 0);
frost$core$String* $tmp295 = *$tmp294;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$String* $tmp296 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local1) = $tmp295;
// line 203
frost$core$String* $tmp297 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$String* $tmp298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing value
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp297;
block7:;
// line 206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp300 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block5:;
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit(false);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp303 = (frost$core$Int64) {196};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$collections$ListView* frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// line 215
$fn307 $tmp306 = ($fn307) param0->$class->vtable[2];
frost$json$JSON* $tmp308 = $tmp306(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$json$JSON* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($2:frost.json.JSON?)
// line 216
frost$json$JSON* $tmp310 = *(&local0);
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit($tmp310 == NULL);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block1; else goto block2;
block1:;
// line 217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp313 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// line 219
frost$json$JSON* $tmp314 = *(&local0);
frost$core$Bit $tmp315 = frost$core$Bit$init$builtin_bit($tmp314 != NULL);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp317 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s318, $tmp317, &$s319);
abort(); // unreachable
block3:;
frost$core$Int64* $tmp320 = &$tmp314->$rawValue;
frost$core$Int64 $tmp321 = *$tmp320;
frost$core$Int64 $tmp322 = (frost$core$Int64) {5};
frost$core$Bit $tmp323 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp321, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block6; else goto block7;
block6:;
frost$collections$ListView** $tmp325 = (frost$collections$ListView**) ($tmp314->$data + 0);
frost$collections$ListView* $tmp326 = *$tmp325;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$collections$ListView* $tmp327 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local1) = $tmp326;
// line 221
frost$collections$ListView* $tmp328 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$collections$ListView* $tmp329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing value
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp328;
block7:;
// line 224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp331 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block5:;
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit(false);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp334 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s335, $tmp334, &$s336);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$collections$MapView* frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
// line 233
$fn338 $tmp337 = ($fn338) param0->$class->vtable[2];
frost$json$JSON* $tmp339 = $tmp337(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$json$JSON* $tmp340 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local0) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing REF($2:frost.json.JSON?)
// line 234
frost$json$JSON* $tmp341 = *(&local0);
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit($tmp341 == NULL);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block1:;
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp344 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// line 237
frost$json$JSON* $tmp345 = *(&local0);
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit($tmp345 != NULL);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {237};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s349, $tmp348, &$s350);
abort(); // unreachable
block3:;
frost$core$Int64* $tmp351 = &$tmp345->$rawValue;
frost$core$Int64 $tmp352 = *$tmp351;
frost$core$Int64 $tmp353 = (frost$core$Int64) {4};
frost$core$Bit $tmp354 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp352, $tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block6; else goto block7;
block6:;
frost$collections$MapView** $tmp356 = (frost$collections$MapView**) ($tmp345->$data + 0);
frost$collections$MapView* $tmp357 = *$tmp356;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$collections$MapView* $tmp358 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local1) = $tmp357;
// line 239
frost$collections$MapView* $tmp359 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$collections$MapView* $tmp360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing value
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp361 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp359;
block7:;
// line 242
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing result
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block5:;
frost$core$Bit $tmp363 = frost$core$Bit$init$builtin_bit(false);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp365 = (frost$core$Int64) {232};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s366, $tmp365, &$s367);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Int64 frost$json$JSON$asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int64 local0;
// line 251
frost$core$Int64* $tmp368 = &param0->$rawValue;
frost$core$Int64 $tmp369 = *$tmp368;
frost$core$Int64 $tmp370 = (frost$core$Int64) {0};
frost$core$Bit $tmp371 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp369, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp373 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp374 = *$tmp373;
*(&local0) = $tmp374;
// line 253
frost$core$Int64 $tmp375 = *(&local0);
return $tmp375;
block3:;
// line 256
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit(false);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s379, $tmp378);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp380 = frost$core$Bit$init$builtin_bit(false);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp382 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s383, $tmp382, &$s384);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$Real64 frost$json$JSON$asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// line 265
frost$core$Int64* $tmp385 = &param0->$rawValue;
frost$core$Int64 $tmp386 = *$tmp385;
frost$core$Int64 $tmp387 = (frost$core$Int64) {1};
frost$core$Bit $tmp388 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp386, $tmp387);
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp390 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp391 = *$tmp390;
*(&local0) = $tmp391;
// line 267
frost$core$Real64 $tmp392 = *(&local0);
return $tmp392;
block3:;
// line 270
frost$core$Bit $tmp393 = frost$core$Bit$init$builtin_bit(false);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp395 = (frost$core$Int64) {270};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s396, $tmp395);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit(false);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp399 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s400, $tmp399, &$s401);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* frost$json$JSON$asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$String* local0 = NULL;
// line 279
frost$core$Int64* $tmp402 = &param0->$rawValue;
frost$core$Int64 $tmp403 = *$tmp402;
frost$core$Int64 $tmp404 = (frost$core$Int64) {2};
frost$core$Bit $tmp405 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp403, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block2; else goto block3;
block2:;
frost$core$String** $tmp407 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp408 = *$tmp407;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$String* $tmp409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local0) = $tmp408;
// line 281
frost$core$String* $tmp410 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$String* $tmp411 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing value
*(&local0) = ((frost$core$String*) NULL);
return $tmp410;
block3:;
// line 284
frost$core$Bit $tmp412 = frost$core$Bit$init$builtin_bit(false);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp414 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s415, $tmp414);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit(false);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp418 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s419, $tmp418, &$s420);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$Bit frost$json$JSON$asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// line 293
frost$core$Int64* $tmp421 = &param0->$rawValue;
frost$core$Int64 $tmp422 = *$tmp421;
frost$core$Int64 $tmp423 = (frost$core$Int64) {3};
frost$core$Bit $tmp424 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp422, $tmp423);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp426 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp427 = *$tmp426;
*(&local0) = $tmp427;
// line 295
frost$core$Bit $tmp428 = *(&local0);
return $tmp428;
block3:;
// line 298
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit(false);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp431 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s432, $tmp431);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit(false);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {292};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s436, $tmp435, &$s437);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$collections$MapView* frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// line 307
frost$core$Int64* $tmp438 = &param0->$rawValue;
frost$core$Int64 $tmp439 = *$tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {4};
frost$core$Bit $tmp441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp443 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp444 = *$tmp443;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$collections$MapView* $tmp445 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local0) = $tmp444;
// line 309
frost$collections$MapView* $tmp446 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$collections$MapView* $tmp447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing value
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp446;
block3:;
// line 312
frost$core$Bit $tmp448 = frost$core$Bit$init$builtin_bit(false);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s451, $tmp450);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp452 = frost$core$Bit$init$builtin_bit(false);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp454 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s455, $tmp454, &$s456);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$collections$ListView* frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// line 321
frost$core$Int64* $tmp457 = &param0->$rawValue;
frost$core$Int64 $tmp458 = *$tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {5};
frost$core$Bit $tmp460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp458, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp462 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp463 = *$tmp462;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$collections$ListView* $tmp464 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local0) = $tmp463;
// line 323
frost$collections$ListView* $tmp465 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$collections$ListView* $tmp466 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing value
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp465;
block3:;
// line 326
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit(false);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp469 = (frost$core$Int64) {326};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s470, $tmp469);
abort(); // unreachable
block4:;
goto block1;
block1:;
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit(false);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp473 = (frost$core$Int64) {320};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s474, $tmp473, &$s475);
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
frost$core$Int64* $tmp476 = &param0->$rawValue;
frost$core$Int64 $tmp477 = *$tmp476;
frost$core$Int64 $tmp478 = (frost$core$Int64) {0};
frost$core$Bit $tmp479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp481 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp482 = *$tmp481;
*(&local0) = $tmp482;
// line 338
frost$core$Int64 $tmp483 = *(&local0);
frost$core$String* $tmp484 = frost$core$Int64$convert$R$frost$core$String($tmp483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing REF($12:frost.core.String)
return $tmp484;
block3:;
frost$core$Int64 $tmp485 = (frost$core$Int64) {1};
frost$core$Bit $tmp486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp485);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp488 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp489 = *$tmp488;
*(&local1) = $tmp489;
// line 341
frost$core$Real64 $tmp490 = *(&local1);
frost$core$String* $tmp491 = frost$core$Real64$convert$R$frost$core$String($tmp490);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
// unreffing REF($28:frost.core.String)
return $tmp491;
block5:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {2};
frost$core$Bit $tmp493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp492);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block6; else goto block7;
block6:;
frost$core$String** $tmp495 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp496 = *$tmp495;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$String* $tmp497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local2) = $tmp496;
// line 344
frost$core$String* $tmp498 = *(&local2);
frost$core$String* $tmp499 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp498, &$s500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($50:frost.core.String)
frost$core$String* $tmp501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing value
*(&local2) = ((frost$core$String*) NULL);
return $tmp499;
block7:;
frost$core$Int64 $tmp502 = (frost$core$Int64) {3};
frost$core$Bit $tmp503 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp502);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp505 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp506 = *$tmp505;
*(&local3) = $tmp506;
// line 347
frost$core$Bit $tmp507 = *(&local3);
frost$core$String* $tmp508 = frost$core$Bit$convert$R$frost$core$String($tmp507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing REF($71:frost.core.String)
return $tmp508;
block9:;
frost$core$Int64 $tmp509 = (frost$core$Int64) {4};
frost$core$Bit $tmp510 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp512 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp513 = *$tmp512;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$collections$MapView* $tmp514 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local4) = $tmp513;
// line 350
frost$core$MutableString* $tmp515 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp515, &$s516);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$MutableString* $tmp517 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local5) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing REF($92:frost.core.MutableString)
// line 351
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s518));
frost$core$String* $tmp519 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local6) = &$s520;
// line 352
frost$collections$MapView* $tmp521 = *(&local4);
ITable* $tmp522 = $tmp521->$class->itable;
while ($tmp522->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[3];
frost$collections$Iterator* $tmp525 = $tmp523($tmp521);
goto block12;
block12:;
ITable* $tmp526 = $tmp525->$class->itable;
while ($tmp526->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[0];
frost$core$Bit $tmp529 = $tmp527($tmp525);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block14; else goto block13;
block13:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp531 = $tmp525->$class->itable;
while ($tmp531->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[1];
frost$core$Object* $tmp534 = $tmp532($tmp525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp534)));
frost$core$String* $tmp535 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local7) = ((frost$core$String*) $tmp534);
// line 353
frost$core$MutableString* $tmp536 = *(&local5);
frost$core$String* $tmp537 = *(&local6);
frost$core$String* $tmp538 = frost$core$String$convert$R$frost$core$String($tmp537);
frost$core$String* $tmp539 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp538, &$s540);
frost$core$String* $tmp541 = *(&local7);
ITable* $tmp542 = ((frost$core$Formattable*) $tmp541)->$class->itable;
while ($tmp542->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[0];
frost$core$String* $tmp545 = $tmp543(((frost$core$Formattable*) $tmp541), &$s546);
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp539, $tmp545);
frost$core$String* $tmp548 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp547, &$s549);
frost$collections$MapView* $tmp550 = *(&local4);
frost$core$String* $tmp551 = *(&local7);
ITable* $tmp552 = $tmp550->$class->itable;
while ($tmp552->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp552 = $tmp552->next;
}
$fn554 $tmp553 = $tmp552->methods[1];
frost$core$Object* $tmp555 = $tmp553($tmp550, ((frost$core$Object*) $tmp551));
frost$core$Bit $tmp556 = frost$core$Bit$init$builtin_bit(((frost$json$JSON*) $tmp555) != NULL);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp558 = (frost$core$Int64) {353};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s559, $tmp558, &$s560);
abort(); // unreachable
block15:;
frost$core$String* $tmp561 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp548, ((frost$core$Object*) ((frost$json$JSON*) $tmp555)));
frost$core$String* $tmp562 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp561, &$s563);
frost$core$MutableString$append$frost$core$String($tmp536, $tmp562);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($162:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// unreffing REF($161:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp555);
// unreffing REF($151:frost.collections.MapView.V?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing REF($145:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing REF($144:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing REF($143:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing REF($139:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing REF($138:frost.core.String)
// line 354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s564));
frost$core$String* $tmp565 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local6) = &$s566;
frost$core$Frost$unref$frost$core$Object$Q($tmp534);
// unreffing REF($127:frost.collections.Iterator.T)
frost$core$String* $tmp567 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// unreffing k
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// unreffing REF($116:frost.collections.Iterator<frost.collections.MapView.K>)
// line 356
frost$core$MutableString* $tmp568 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp568, &$s569);
// line 357
frost$core$MutableString* $tmp570 = *(&local5);
frost$core$String* $tmp571 = frost$core$MutableString$finish$R$frost$core$String($tmp570);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// unreffing REF($212:frost.core.String)
frost$core$String* $tmp572 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing separator
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp573 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// unreffing result
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp574 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// unreffing fields
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp571;
block11:;
frost$core$Int64 $tmp575 = (frost$core$Int64) {5};
frost$core$Bit $tmp576 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block17; else goto block18;
block17:;
frost$collections$ListView** $tmp578 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp579 = *$tmp578;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$collections$ListView* $tmp580 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local8) = $tmp579;
// line 360
frost$core$MutableString* $tmp581 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp581, &$s582);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$MutableString* $tmp583 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local9) = $tmp581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// unreffing REF($248:frost.core.MutableString)
// line 361
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s584));
frost$core$String* $tmp585 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local10) = &$s586;
// line 362
frost$collections$ListView* $tmp587 = *(&local8);
ITable* $tmp588 = ((frost$collections$Iterable*) $tmp587)->$class->itable;
while ($tmp588->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[0];
frost$collections$Iterator* $tmp591 = $tmp589(((frost$collections$Iterable*) $tmp587));
goto block19;
block19:;
ITable* $tmp592 = $tmp591->$class->itable;
while ($tmp592->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[0];
frost$core$Bit $tmp595 = $tmp593($tmp591);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block21; else goto block20;
block20:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp597 = $tmp591->$class->itable;
while ($tmp597->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp597 = $tmp597->next;
}
$fn599 $tmp598 = $tmp597->methods[1];
frost$core$Object* $tmp600 = $tmp598($tmp591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp600)));
frost$json$JSON* $tmp601 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local11) = ((frost$json$JSON*) $tmp600);
// line 363
frost$core$MutableString* $tmp602 = *(&local9);
frost$core$String* $tmp603 = *(&local10);
frost$core$String* $tmp604 = frost$core$String$convert$R$frost$core$String($tmp603);
frost$core$String* $tmp605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp604, &$s606);
frost$json$JSON* $tmp607 = *(&local11);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp605, ((frost$core$Object*) $tmp607));
frost$core$String* $tmp609 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp608, &$s610);
frost$core$MutableString$append$frost$core$String($tmp602, $tmp609);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing REF($300:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($299:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing REF($296:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($295:frost.core.String)
// line 364
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s611));
frost$core$String* $tmp612 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local10) = &$s613;
frost$core$Frost$unref$frost$core$Object$Q($tmp600);
// unreffing REF($284:frost.collections.Iterator.T)
frost$json$JSON* $tmp614 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing n
*(&local11) = ((frost$json$JSON*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// unreffing REF($273:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 366
frost$core$MutableString* $tmp615 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp615, &$s616);
// line 367
frost$core$MutableString* $tmp617 = *(&local9);
frost$core$String* $tmp618 = frost$core$MutableString$finish$R$frost$core$String($tmp617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($338:frost.core.String)
frost$core$String* $tmp619 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing separator
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp620 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing result
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp621 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing nodes
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp618;
block18:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {6};
frost$core$Bit $tmp623 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp477, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block22; else goto block23;
block22:;
// line 370
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s625));
return &$s626;
block23:;
// line 373
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit(false);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp629 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s630, $tmp629);
abort(); // unreachable
block24:;
goto block1;
block1:;
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit(false);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp633 = (frost$core$Int64) {335};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s634, $tmp633, &$s635);
abort(); // unreachable
block26:;
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
frost$core$Int64* $tmp636 = &param0->$rawValue;
frost$core$Int64 $tmp637 = *$tmp636;
frost$core$Int64 $tmp638 = (frost$core$Int64) {0};
frost$core$Bit $tmp639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp637, $tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp641 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp642 = *$tmp641;
*(&local0) = $tmp642;
goto block1;
block3:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {1};
frost$core$Bit $tmp644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp637, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp646 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp647 = *$tmp646;
*(&local1) = $tmp647;
goto block1;
block5:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {2};
frost$core$Bit $tmp649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp637, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block6; else goto block7;
block6:;
frost$core$String** $tmp651 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp652 = *$tmp651;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$String* $tmp653 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local2) = $tmp652;
// line 1
frost$core$String* $tmp654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$String* $tmp655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing _f0
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {3};
frost$core$Bit $tmp657 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp637, $tmp656);
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp659 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp660 = *$tmp659;
*(&local3) = $tmp660;
goto block1;
block9:;
frost$core$Int64 $tmp661 = (frost$core$Int64) {4};
frost$core$Bit $tmp662 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp637, $tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp664 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp665 = *$tmp664;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$collections$MapView* $tmp666 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local4) = $tmp665;
// line 1
frost$collections$MapView* $tmp667 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$collections$MapView* $tmp668 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing _f0
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp669 = (frost$core$Int64) {5};
frost$core$Bit $tmp670 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp637, $tmp669);
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block12; else goto block13;
block12:;
frost$collections$ListView** $tmp672 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp673 = *$tmp672;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$collections$ListView* $tmp674 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local5) = $tmp673;
// line 1
frost$collections$ListView* $tmp675 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$collections$ListView* $tmp676 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing _f0
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {6};
frost$core$Bit $tmp678 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp637, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// line 6
frost$core$Int64* $tmp680 = &param0->$rawValue;
*$tmp680 = param1;
// line 6
frost$core$Int64* $tmp681 = (frost$core$Int64*) (param0->$data + 0);
*$tmp681 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Real64 param2) {

// line 6
frost$core$Int64* $tmp682 = &param0->$rawValue;
*$tmp682 = param1;
// line 6
frost$core$Real64* $tmp683 = (frost$core$Real64*) (param0->$data + 0);
*$tmp683 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 6
frost$core$Int64* $tmp684 = &param0->$rawValue;
*$tmp684 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp685 = (frost$core$String**) (param0->$data + 0);
*$tmp685 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// line 6
frost$core$Int64* $tmp686 = &param0->$rawValue;
*$tmp686 = param1;
// line 6
frost$core$Bit* $tmp687 = (frost$core$Bit*) (param0->$data + 0);
*$tmp687 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$MapView* param2) {

// line 6
frost$core$Int64* $tmp688 = &param0->$rawValue;
*$tmp688 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp689 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp689 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// line 6
frost$core$Int64* $tmp690 = &param0->$rawValue;
*$tmp690 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp691 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp691 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1) {

// line 6
frost$core$Int64* $tmp692 = &param0->$rawValue;
*$tmp692 = param1;
return;

}

