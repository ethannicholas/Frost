#include "panda/json/JSON.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON/PathKey.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Int32.h"
#include "panda/core/Equatable.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/MapView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Real64.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Iterable.h"


static panda$core$String $s1;
panda$json$JSON$class_type panda$json$JSON$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$json$JSON$convert$R$panda$core$String, panda$json$JSON$cleanup, panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q, panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q, panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q, panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q, panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q, panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q, panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q, panda$json$JSON$asInt$R$panda$core$Int64, panda$json$JSON$asReal$R$panda$core$Real64, panda$json$JSON$asString$R$panda$core$String, panda$json$JSON$asBit$R$panda$core$Bit, panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT, panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT} };

typedef panda$core$Bit (*$fn31)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn93)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn141)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Object* (*$fn180)(panda$collections$ListView*, panda$core$Int64);
typedef panda$json$JSON* (*$fn189)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn218)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn247)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn276)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn307)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn338)(panda$json$JSON*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn524)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn533)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn544)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Object* (*$fn554)(panda$collections$MapView*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn590)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn594)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn599)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x6e\x65\x78\x74\x50\x61\x74\x68\x4b\x65\x79\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, -999879477833239630, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x27", 85, 1244821351223665645, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x49\x6e\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -428186142838500, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x52\x65\x61\x6c\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 100, 1641064985204290310, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x42\x69\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, 1309589565327065770, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x53\x74\x72\x69\x6e\x67\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 306928245621166922, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x41\x72\x72\x61\x79\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, -6857016778994286, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x27", 69, -4917495138763249355, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x4f\x62\x6a\x65\x63\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 146, 8716415486943877636, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 74, 8931891717197612926, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -6855485105993497876, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 371713800219408104, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 72, 7961319043562708476, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4569178082500671434, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x41\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, 5611752801805959944, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 71, 4115979193627060345, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5747596656467050326, NULL };

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$String$Index local0;
panda$core$String$Index local1;
panda$core$String$Index local2;
panda$core$Char32 local3;
panda$core$Bit local4;
panda$core$String$Index local5;
panda$core$String$Index local6;
panda$core$Int64$nullable local7;
// line 52
panda$core$Char32 $tmp2 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, param1);
panda$core$Int32 $tmp3 = (panda$core$Int32) {47};
panda$core$Char32 $tmp4 = panda$core$Char32$init$panda$core$Int32($tmp3);
panda$core$Bit $tmp5 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp2, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 54
panda$core$String$Index $tmp7 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local0) = $tmp7;
// line 55
panda$core$String$Index $tmp8 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, param1);
*(&local1) = $tmp8;
// line 56
panda$core$String$Index $tmp9 = *(&local1);
*(&local2) = $tmp9;
// line 57
goto block4;
block4:;
// line 58
panda$core$String$Index $tmp10 = *(&local2);
panda$core$Char32 $tmp11 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp10);
*(&local3) = $tmp11;
// line 59
panda$core$Char32 $tmp12 = *(&local3);
panda$core$Int32 $tmp13 = (panda$core$Int32) {47};
panda$core$Char32 $tmp14 = panda$core$Char32$init$panda$core$Int32($tmp13);
panda$core$Bit $tmp15 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp12, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block9; else goto block10;
block9:;
*(&local4) = $tmp15;
goto block11;
block10:;
panda$core$Char32 $tmp17 = *(&local3);
panda$core$Int32 $tmp18 = (panda$core$Int32) {91};
panda$core$Char32 $tmp19 = panda$core$Char32$init$panda$core$Int32($tmp18);
panda$core$Bit $tmp20 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp17, $tmp19);
*(&local4) = $tmp20;
goto block11;
block11:;
panda$core$Bit $tmp21 = *(&local4);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block7; else goto block8;
block7:;
// line 60
goto block6;
block8:;
// line 62
panda$core$String$Index $tmp23 = *(&local2);
panda$core$String$Index $tmp24 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp23);
*(&local2) = $tmp24;
goto block5;
block5:;
panda$core$String$Index $tmp25 = *(&local2);
panda$core$String$Index$wrapper* $tmp26;
$tmp26 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp26->value = $tmp25;
panda$core$String$Index $tmp27 = *(&local0);
panda$core$String$Index$wrapper* $tmp28;
$tmp28 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp28->value = $tmp27;
ITable* $tmp29 = ((panda$core$Equatable*) $tmp26)->$class->itable;
while ($tmp29->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
$fn31 $tmp30 = $tmp29->methods[1];
panda$core$Bit $tmp32 = $tmp30(((panda$core$Equatable*) $tmp26), ((panda$core$Equatable*) $tmp28));
bool $tmp33 = $tmp32.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp28)));
// unreffing REF($51:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp26)));
// unreffing REF($48:panda.core.Equatable<panda.core.String.Index>)
if ($tmp33) goto block4; else goto block6;
block6:;
// line 65
panda$core$String$Index $tmp34 = *(&local1);
panda$core$String$Index $tmp35 = *(&local2);
panda$core$Bit $tmp36 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp34, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block12; else goto block13;
block12:;
// line 66
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON$PathKey*) NULL)));
return ((panda$json$JSON$PathKey*) NULL);
block13:;
// line 68
panda$json$JSON$PathKey* $tmp38 = (panda$json$JSON$PathKey*) frostObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
panda$core$Int64 $tmp39 = (panda$core$Int64) {0};
panda$core$String$Index $tmp40 = *(&local1);
panda$core$String$Index $tmp41 = *(&local2);
panda$core$Bit $tmp42 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp43 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp40, $tmp41, $tmp42);
panda$core$String* $tmp44 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp43);
panda$core$String$Index $tmp45 = *(&local2);
panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp38, $tmp39, $tmp44, $tmp45);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($73:panda.json.JSON.PathKey)
return $tmp38;
block3:;
panda$core$Int32 $tmp46 = (panda$core$Int32) {91};
panda$core$Char32 $tmp47 = panda$core$Char32$init$panda$core$Int32($tmp46);
panda$core$Bit $tmp48 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp2, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block14; else goto block15;
block14:;
// line 71
panda$core$String$Index $tmp50 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, param1);
*(&local5) = $tmp50;
// line 72
panda$core$String$Index $tmp51 = *(&local5);
*(&local6) = $tmp51;
// line 73
goto block16;
block16:;
panda$core$String$Index $tmp52 = *(&local6);
panda$core$Char32 $tmp53 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp52);
panda$core$Int32 $tmp54 = (panda$core$Int32) {93};
panda$core$Char32 $tmp55 = panda$core$Char32$init$panda$core$Int32($tmp54);
panda$core$Bit $tmp56 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp53, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block17; else goto block18;
block17:;
// line 74
panda$core$String$Index $tmp58 = *(&local6);
panda$core$String$Index $tmp59 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp58);
*(&local6) = $tmp59;
goto block16;
block18:;
// line 76
panda$core$String$Index $tmp60 = *(&local5);
panda$core$String$Index $tmp61 = *(&local6);
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp63 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp60, $tmp61, $tmp62);
panda$core$String* $tmp64 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp63);
panda$core$Int64$nullable $tmp65 = panda$core$String$convert$R$panda$core$Int64$Q($tmp64);
*(&local7) = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($122:panda.core.String)
// line 77
panda$core$Int64$nullable $tmp66 = *(&local7);
panda$core$Bit $tmp67 = panda$core$Bit$init$builtin_bit(!$tmp66.nonnull);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block19; else goto block20;
block19:;
// line 78
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON$PathKey*) NULL)));
return ((panda$json$JSON$PathKey*) NULL);
block20:;
// line 80
panda$json$JSON$PathKey* $tmp69 = (panda$json$JSON$PathKey*) frostObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
panda$core$Int64 $tmp70 = (panda$core$Int64) {1};
panda$core$Int64$nullable $tmp71 = *(&local7);
panda$core$Bit $tmp72 = panda$core$Bit$init$builtin_bit($tmp71.nonnull);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp74 = (panda$core$Int64) {80};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s75, $tmp74, &$s76);
abort(); // unreachable
block21:;
panda$core$String$Index $tmp77 = *(&local6);
panda$core$String$Index $tmp78 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp77);
panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp69, $tmp70, ((panda$core$Int64) $tmp71.value), $tmp78);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($139:panda.json.JSON.PathKey)
return $tmp69;
block15:;
// line 83
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON$PathKey*) NULL)));
return ((panda$json$JSON$PathKey*) NULL);
block1:;
panda$core$Bit $tmp79 = panda$core$Bit$init$builtin_bit(false);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp81 = (panda$core$Int64) {51};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block23:;
abort(); // unreachable

}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$core$String$Index local0;
panda$core$String$Index local1;
panda$json$JSON* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String$Index local4;
panda$collections$MapView* local5 = NULL;
panda$core$Int64 local6;
panda$core$String$Index local7;
panda$collections$ListView* local8 = NULL;
// line 103
panda$core$String$Index $tmp84 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local0) = $tmp84;
// line 104
panda$core$String$Index $tmp85 = panda$core$String$get_end$R$panda$core$String$Index(param1);
*(&local1) = $tmp85;
// line 105
*(&local2) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
panda$json$JSON* $tmp86 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local2) = param0;
// line 106
goto block1;
block1:;
panda$core$String$Index $tmp87 = *(&local0);
panda$core$String$Index$wrapper* $tmp88;
$tmp88 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp88->value = $tmp87;
panda$core$String$Index $tmp89 = *(&local1);
panda$core$String$Index$wrapper* $tmp90;
$tmp90 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp90->value = $tmp89;
ITable* $tmp91 = ((panda$core$Equatable*) $tmp88)->$class->itable;
while ($tmp91->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[1];
panda$core$Bit $tmp94 = $tmp92(((panda$core$Equatable*) $tmp88), ((panda$core$Equatable*) $tmp90));
bool $tmp95 = $tmp94.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp90)));
// unreffing REF($21:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp88)));
// unreffing REF($18:panda.core.Equatable<panda.core.String.Index>)
if ($tmp95) goto block2; else goto block3;
block2:;
// line 107
panda$core$String$Index $tmp96 = *(&local0);
panda$json$JSON$PathKey* $tmp97 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(param1, $tmp96);
panda$core$Bit $tmp98 = panda$core$Bit$init$builtin_bit($tmp97 != NULL);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp100 = (panda$core$Int64) {107};
panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s102, param1);
panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s104);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s105, $tmp100, $tmp103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($40:panda.core.String)
abort(); // unreachable
block4:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($34:panda.json.JSON.PathKey?)
// line 108
panda$core$String$Index $tmp106 = *(&local0);
panda$json$JSON$PathKey* $tmp107 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(param1, $tmp106);
panda$core$Bit $tmp108 = panda$core$Bit$init$builtin_bit($tmp107 != NULL);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {108};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block6:;
panda$core$Int64* $tmp113 = &$tmp107->$rawValue;
panda$core$Int64 $tmp114 = *$tmp113;
panda$core$Int64 $tmp115 = (panda$core$Int64) {0};
panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp114, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block9; else goto block10;
block9:;
panda$core$String** $tmp118 = (panda$core$String**) ($tmp107->$data + 0);
panda$core$String* $tmp119 = *$tmp118;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
panda$core$String* $tmp120 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
*(&local3) = $tmp119;
panda$core$String$Index* $tmp121 = (panda$core$String$Index*) ($tmp107->$data + 8);
panda$core$String$Index $tmp122 = *$tmp121;
*(&local4) = $tmp122;
// line 110
panda$json$JSON* $tmp123 = *(&local2);
panda$core$Bit $tmp124 = panda$core$Bit$init$builtin_bit($tmp123 != NULL);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp126 = (panda$core$Int64) {110};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable
block11:;
panda$core$Int64* $tmp129 = &$tmp123->$rawValue;
panda$core$Int64 $tmp130 = *$tmp129;
panda$core$Int64 $tmp131 = (panda$core$Int64) {4};
panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block14; else goto block15;
block14:;
panda$collections$MapView** $tmp134 = (panda$collections$MapView**) ($tmp123->$data + 0);
panda$collections$MapView* $tmp135 = *$tmp134;
*(&local5) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$collections$MapView* $tmp136 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
*(&local5) = $tmp135;
// line 112
panda$collections$MapView* $tmp137 = *(&local5);
panda$core$String* $tmp138 = *(&local3);
ITable* $tmp139 = $tmp137->$class->itable;
while ($tmp139->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[1];
panda$core$Object* $tmp142 = $tmp140($tmp137, ((panda$core$Object*) $tmp138));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp142)));
panda$json$JSON* $tmp143 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
*(&local2) = ((panda$json$JSON*) $tmp142);
panda$core$Panda$unref$panda$core$Object$Q($tmp142);
// unreffing REF($113:panda.collections.MapView.V?)
// line 113
panda$json$JSON* $tmp144 = *(&local2);
panda$core$Bit $tmp145 = panda$core$Bit$init$builtin_bit($tmp144 == NULL);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block16; else goto block17;
block16:;
// line 114
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$collections$MapView* $tmp147 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing fields
*(&local5) = ((panda$collections$MapView*) NULL);
panda$core$String* $tmp148 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp149 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block17:;
panda$collections$MapView* $tmp150 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing fields
*(&local5) = ((panda$collections$MapView*) NULL);
goto block13;
block15:;
// line 118
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$core$String* $tmp151 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp152 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block13:;
// line 121
panda$core$String$Index $tmp153 = *(&local4);
*(&local0) = $tmp153;
panda$core$String* $tmp154 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
goto block8;
block10:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {1};
panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp114, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block18; else goto block8;
block18:;
panda$core$Int64* $tmp158 = (panda$core$Int64*) ($tmp107->$data + 0);
panda$core$Int64 $tmp159 = *$tmp158;
*(&local6) = $tmp159;
panda$core$String$Index* $tmp160 = (panda$core$String$Index*) ($tmp107->$data + 8);
panda$core$String$Index $tmp161 = *$tmp160;
*(&local7) = $tmp161;
// line 124
panda$json$JSON* $tmp162 = *(&local2);
panda$core$Bit $tmp163 = panda$core$Bit$init$builtin_bit($tmp162 != NULL);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp165 = (panda$core$Int64) {124};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s166, $tmp165, &$s167);
abort(); // unreachable
block19:;
panda$core$Int64* $tmp168 = &$tmp162->$rawValue;
panda$core$Int64 $tmp169 = *$tmp168;
panda$core$Int64 $tmp170 = (panda$core$Int64) {5};
panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp169, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block22; else goto block23;
block22:;
panda$collections$ListView** $tmp173 = (panda$collections$ListView**) ($tmp162->$data + 0);
panda$collections$ListView* $tmp174 = *$tmp173;
*(&local8) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
panda$collections$ListView* $tmp175 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
*(&local8) = $tmp174;
// line 126
panda$collections$ListView* $tmp176 = *(&local8);
panda$core$Int64 $tmp177 = *(&local6);
ITable* $tmp178 = $tmp176->$class->itable;
while ($tmp178->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
panda$core$Object* $tmp181 = $tmp179($tmp176, $tmp177);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp181)));
panda$json$JSON* $tmp182 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
*(&local2) = ((panda$json$JSON*) $tmp181);
panda$core$Panda$unref$panda$core$Object$Q($tmp181);
// unreffing REF($224:panda.collections.ListView.T)
panda$collections$ListView* $tmp183 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing nodes
*(&local8) = ((panda$collections$ListView*) NULL);
goto block21;
block23:;
// line 129
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp184 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block21:;
// line 132
panda$core$String$Index $tmp185 = *(&local7);
*(&local0) = $tmp185;
goto block8;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($55:panda.json.JSON.PathKey?)
goto block1;
block3:;
// line 136
panda$json$JSON* $tmp186 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
panda$json$JSON* $tmp187 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return $tmp186;

}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Int64 local1;
// line 143
$fn189 $tmp188 = ($fn189) param0->$class->vtable[2];
panda$json$JSON* $tmp190 = $tmp188(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$json$JSON* $tmp191 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
*(&local0) = $tmp190;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing REF($2:panda.json.JSON?)
// line 144
panda$json$JSON* $tmp192 = *(&local0);
panda$core$Bit $tmp193 = panda$core$Bit$init$builtin_bit($tmp192 == NULL);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// line 145
panda$json$JSON* $tmp195 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 147
panda$json$JSON* $tmp196 = *(&local0);
panda$core$Bit $tmp197 = panda$core$Bit$init$builtin_bit($tmp196 != NULL);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp199 = (panda$core$Int64) {147};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s200, $tmp199, &$s201);
abort(); // unreachable
block3:;
panda$core$Int64* $tmp202 = &$tmp196->$rawValue;
panda$core$Int64 $tmp203 = *$tmp202;
panda$core$Int64 $tmp204 = (panda$core$Int64) {0};
panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp207 = (panda$core$Int64*) ($tmp196->$data + 0);
panda$core$Int64 $tmp208 = *$tmp207;
*(&local1) = $tmp208;
// line 149
panda$core$Int64 $tmp209 = *(&local1);
panda$json$JSON* $tmp210 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { $tmp209, true });
block7:;
// line 152
panda$json$JSON* $tmp211 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { .nonnull = false });
block5:;
panda$core$Bit $tmp212 = panda$core$Bit$init$builtin_bit(false);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp214 = (panda$core$Int64) {142};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s215, $tmp214, &$s216);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Real64 local1;
// line 161
$fn218 $tmp217 = ($fn218) param0->$class->vtable[2];
panda$json$JSON* $tmp219 = $tmp217(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$json$JSON* $tmp220 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
*(&local0) = $tmp219;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing REF($2:panda.json.JSON?)
// line 162
panda$json$JSON* $tmp221 = *(&local0);
panda$core$Bit $tmp222 = panda$core$Bit$init$builtin_bit($tmp221 == NULL);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block1; else goto block2;
block1:;
// line 163
panda$json$JSON* $tmp224 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { .nonnull = false });
block2:;
// line 165
panda$json$JSON* $tmp225 = *(&local0);
panda$core$Bit $tmp226 = panda$core$Bit$init$builtin_bit($tmp225 != NULL);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp228 = (panda$core$Int64) {165};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s229, $tmp228, &$s230);
abort(); // unreachable
block3:;
panda$core$Int64* $tmp231 = &$tmp225->$rawValue;
panda$core$Int64 $tmp232 = *$tmp231;
panda$core$Int64 $tmp233 = (panda$core$Int64) {1};
panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp232, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block6; else goto block7;
block6:;
panda$core$Real64* $tmp236 = (panda$core$Real64*) ($tmp225->$data + 0);
panda$core$Real64 $tmp237 = *$tmp236;
*(&local1) = $tmp237;
// line 167
panda$core$Real64 $tmp238 = *(&local1);
panda$json$JSON* $tmp239 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { $tmp238, true });
block7:;
// line 170
panda$json$JSON* $tmp240 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { .nonnull = false });
block5:;
panda$core$Bit $tmp241 = panda$core$Bit$init$builtin_bit(false);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp243 = (panda$core$Int64) {160};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s244, $tmp243, &$s245);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Bit local1;
// line 179
$fn247 $tmp246 = ($fn247) param0->$class->vtable[2];
panda$json$JSON* $tmp248 = $tmp246(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
panda$json$JSON* $tmp249 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
*(&local0) = $tmp248;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing REF($2:panda.json.JSON?)
// line 180
panda$json$JSON* $tmp250 = *(&local0);
panda$core$Bit $tmp251 = panda$core$Bit$init$builtin_bit($tmp250 == NULL);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block1; else goto block2;
block1:;
// line 181
panda$json$JSON* $tmp253 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { .nonnull = false });
block2:;
// line 183
panda$json$JSON* $tmp254 = *(&local0);
panda$core$Bit $tmp255 = panda$core$Bit$init$builtin_bit($tmp254 != NULL);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp257 = (panda$core$Int64) {183};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s258, $tmp257, &$s259);
abort(); // unreachable
block3:;
panda$core$Int64* $tmp260 = &$tmp254->$rawValue;
panda$core$Int64 $tmp261 = *$tmp260;
panda$core$Int64 $tmp262 = (panda$core$Int64) {3};
panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp261, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block6; else goto block7;
block6:;
panda$core$Bit* $tmp265 = (panda$core$Bit*) ($tmp254->$data + 0);
panda$core$Bit $tmp266 = *$tmp265;
*(&local1) = $tmp266;
// line 185
panda$core$Bit $tmp267 = *(&local1);
panda$json$JSON* $tmp268 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { $tmp267, true });
block7:;
// line 188
panda$json$JSON* $tmp269 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { .nonnull = false });
block5:;
panda$core$Bit $tmp270 = panda$core$Bit$init$builtin_bit(false);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp272 = (panda$core$Int64) {178};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s273, $tmp272, &$s274);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$String* local1 = NULL;
// line 197
$fn276 $tmp275 = ($fn276) param0->$class->vtable[2];
panda$json$JSON* $tmp277 = $tmp275(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
panda$json$JSON* $tmp278 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
*(&local0) = $tmp277;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($2:panda.json.JSON?)
// line 198
panda$json$JSON* $tmp279 = *(&local0);
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit($tmp279 == NULL);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// line 199
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$json$JSON* $tmp282 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$String*) NULL);
block2:;
// line 201
panda$json$JSON* $tmp283 = *(&local0);
panda$core$Bit $tmp284 = panda$core$Bit$init$builtin_bit($tmp283 != NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp286 = (panda$core$Int64) {201};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s287, $tmp286, &$s288);
abort(); // unreachable
block3:;
panda$core$Int64* $tmp289 = &$tmp283->$rawValue;
panda$core$Int64 $tmp290 = *$tmp289;
panda$core$Int64 $tmp291 = (panda$core$Int64) {2};
panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp290, $tmp291);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block6; else goto block7;
block6:;
panda$core$String** $tmp294 = (panda$core$String**) ($tmp283->$data + 0);
panda$core$String* $tmp295 = *$tmp294;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
panda$core$String* $tmp296 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
*(&local1) = $tmp295;
// line 203
panda$core$String* $tmp297 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
panda$core$String* $tmp298 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing value
*(&local1) = ((panda$core$String*) NULL);
panda$json$JSON* $tmp299 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return $tmp297;
block7:;
// line 206
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$json$JSON* $tmp300 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$String*) NULL);
block5:;
panda$core$Bit $tmp301 = panda$core$Bit$init$builtin_bit(false);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp303 = (panda$core$Int64) {196};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$collections$ListView* local1 = NULL;
// line 215
$fn307 $tmp306 = ($fn307) param0->$class->vtable[2];
panda$json$JSON* $tmp308 = $tmp306(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
panda$json$JSON* $tmp309 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
*(&local0) = $tmp308;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($2:panda.json.JSON?)
// line 216
panda$json$JSON* $tmp310 = *(&local0);
panda$core$Bit $tmp311 = panda$core$Bit$init$builtin_bit($tmp310 == NULL);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block1; else goto block2;
block1:;
// line 217
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$json$JSON* $tmp313 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$ListView*) NULL);
block2:;
// line 219
panda$json$JSON* $tmp314 = *(&local0);
panda$core$Bit $tmp315 = panda$core$Bit$init$builtin_bit($tmp314 != NULL);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp317 = (panda$core$Int64) {219};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s318, $tmp317, &$s319);
abort(); // unreachable
block3:;
panda$core$Int64* $tmp320 = &$tmp314->$rawValue;
panda$core$Int64 $tmp321 = *$tmp320;
panda$core$Int64 $tmp322 = (panda$core$Int64) {5};
panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp321, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block6; else goto block7;
block6:;
panda$collections$ListView** $tmp325 = (panda$collections$ListView**) ($tmp314->$data + 0);
panda$collections$ListView* $tmp326 = *$tmp325;
*(&local1) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
panda$collections$ListView* $tmp327 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
*(&local1) = $tmp326;
// line 221
panda$collections$ListView* $tmp328 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
panda$collections$ListView* $tmp329 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing value
*(&local1) = ((panda$collections$ListView*) NULL);
panda$json$JSON* $tmp330 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return $tmp328;
block7:;
// line 224
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$json$JSON* $tmp331 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$ListView*) NULL);
block5:;
panda$core$Bit $tmp332 = panda$core$Bit$init$builtin_bit(false);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp334 = (panda$core$Int64) {214};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s335, $tmp334, &$s336);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$collections$MapView* local1 = NULL;
// line 233
$fn338 $tmp337 = ($fn338) param0->$class->vtable[2];
panda$json$JSON* $tmp339 = $tmp337(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$json$JSON* $tmp340 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
*(&local0) = $tmp339;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($2:panda.json.JSON?)
// line 234
panda$json$JSON* $tmp341 = *(&local0);
panda$core$Bit $tmp342 = panda$core$Bit$init$builtin_bit($tmp341 == NULL);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block1:;
// line 235
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) NULL)));
panda$json$JSON* $tmp344 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$MapView*) NULL);
block2:;
// line 237
panda$json$JSON* $tmp345 = *(&local0);
panda$core$Bit $tmp346 = panda$core$Bit$init$builtin_bit($tmp345 != NULL);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp348 = (panda$core$Int64) {237};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s349, $tmp348, &$s350);
abort(); // unreachable
block3:;
panda$core$Int64* $tmp351 = &$tmp345->$rawValue;
panda$core$Int64 $tmp352 = *$tmp351;
panda$core$Int64 $tmp353 = (panda$core$Int64) {4};
panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp352, $tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block6; else goto block7;
block6:;
panda$collections$MapView** $tmp356 = (panda$collections$MapView**) ($tmp345->$data + 0);
panda$collections$MapView* $tmp357 = *$tmp356;
*(&local1) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
panda$collections$MapView* $tmp358 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
*(&local1) = $tmp357;
// line 239
panda$collections$MapView* $tmp359 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
panda$collections$MapView* $tmp360 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing value
*(&local1) = ((panda$collections$MapView*) NULL);
panda$json$JSON* $tmp361 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return $tmp359;
block7:;
// line 242
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) NULL)));
panda$json$JSON* $tmp362 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$MapView*) NULL);
block5:;
panda$core$Bit $tmp363 = panda$core$Bit$init$builtin_bit(false);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp365 = (panda$core$Int64) {232};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s366, $tmp365, &$s367);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* param0) {

panda$core$Int64 local0;
// line 251
panda$core$Int64* $tmp368 = &param0->$rawValue;
panda$core$Int64 $tmp369 = *$tmp368;
panda$core$Int64 $tmp370 = (panda$core$Int64) {0};
panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp369, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp373 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp374 = *$tmp373;
*(&local0) = $tmp374;
// line 253
panda$core$Int64 $tmp375 = *(&local0);
return $tmp375;
block3:;
// line 256
panda$core$Bit $tmp376 = panda$core$Bit$init$builtin_bit(false);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp378 = (panda$core$Int64) {256};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s379, $tmp378);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp380 = panda$core$Bit$init$builtin_bit(false);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp382 = (panda$core$Int64) {250};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s383, $tmp382, &$s384);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* param0) {

panda$core$Real64 local0;
// line 265
panda$core$Int64* $tmp385 = &param0->$rawValue;
panda$core$Int64 $tmp386 = *$tmp385;
panda$core$Int64 $tmp387 = (panda$core$Int64) {1};
panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp386, $tmp387);
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block2; else goto block3;
block2:;
panda$core$Real64* $tmp390 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp391 = *$tmp390;
*(&local0) = $tmp391;
// line 267
panda$core$Real64 $tmp392 = *(&local0);
return $tmp392;
block3:;
// line 270
panda$core$Bit $tmp393 = panda$core$Bit$init$builtin_bit(false);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp395 = (panda$core$Int64) {270};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s396, $tmp395);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp397 = panda$core$Bit$init$builtin_bit(false);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp399 = (panda$core$Int64) {264};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s400, $tmp399, &$s401);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* param0) {

panda$core$String* local0 = NULL;
// line 279
panda$core$Int64* $tmp402 = &param0->$rawValue;
panda$core$Int64 $tmp403 = *$tmp402;
panda$core$Int64 $tmp404 = (panda$core$Int64) {2};
panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp403, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block2; else goto block3;
block2:;
panda$core$String** $tmp407 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp408 = *$tmp407;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
panda$core$String* $tmp409 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
*(&local0) = $tmp408;
// line 281
panda$core$String* $tmp410 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
panda$core$String* $tmp411 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing value
*(&local0) = ((panda$core$String*) NULL);
return $tmp410;
block3:;
// line 284
panda$core$Bit $tmp412 = panda$core$Bit$init$builtin_bit(false);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp414 = (panda$core$Int64) {284};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s415, $tmp414);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp416 = panda$core$Bit$init$builtin_bit(false);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp418 = (panda$core$Int64) {278};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s419, $tmp418, &$s420);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* param0) {

panda$core$Bit local0;
// line 293
panda$core$Int64* $tmp421 = &param0->$rawValue;
panda$core$Int64 $tmp422 = *$tmp421;
panda$core$Int64 $tmp423 = (panda$core$Int64) {3};
panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp422, $tmp423);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp426 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp427 = *$tmp426;
*(&local0) = $tmp427;
// line 295
panda$core$Bit $tmp428 = *(&local0);
return $tmp428;
block3:;
// line 298
panda$core$Bit $tmp429 = panda$core$Bit$init$builtin_bit(false);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp431 = (panda$core$Int64) {298};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s432, $tmp431);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp433 = panda$core$Bit$init$builtin_bit(false);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp435 = (panda$core$Int64) {292};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s436, $tmp435, &$s437);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* param0) {

panda$collections$MapView* local0 = NULL;
// line 307
panda$core$Int64* $tmp438 = &param0->$rawValue;
panda$core$Int64 $tmp439 = *$tmp438;
panda$core$Int64 $tmp440 = (panda$core$Int64) {4};
panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block2; else goto block3;
block2:;
panda$collections$MapView** $tmp443 = (panda$collections$MapView**) (param0->$data + 0);
panda$collections$MapView* $tmp444 = *$tmp443;
*(&local0) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
panda$collections$MapView* $tmp445 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
*(&local0) = $tmp444;
// line 309
panda$collections$MapView* $tmp446 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
panda$collections$MapView* $tmp447 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
// unreffing value
*(&local0) = ((panda$collections$MapView*) NULL);
return $tmp446;
block3:;
// line 312
panda$core$Bit $tmp448 = panda$core$Bit$init$builtin_bit(false);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp450 = (panda$core$Int64) {312};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s451, $tmp450);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp452 = panda$core$Bit$init$builtin_bit(false);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp454 = (panda$core$Int64) {306};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s455, $tmp454, &$s456);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$ListView* panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* param0) {

panda$collections$ListView* local0 = NULL;
// line 321
panda$core$Int64* $tmp457 = &param0->$rawValue;
panda$core$Int64 $tmp458 = *$tmp457;
panda$core$Int64 $tmp459 = (panda$core$Int64) {5};
panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp458, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block2; else goto block3;
block2:;
panda$collections$ListView** $tmp462 = (panda$collections$ListView**) (param0->$data + 0);
panda$collections$ListView* $tmp463 = *$tmp462;
*(&local0) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
panda$collections$ListView* $tmp464 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
*(&local0) = $tmp463;
// line 323
panda$collections$ListView* $tmp465 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
panda$collections$ListView* $tmp466 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
// unreffing value
*(&local0) = ((panda$collections$ListView*) NULL);
return $tmp465;
block3:;
// line 326
panda$core$Bit $tmp467 = panda$core$Bit$init$builtin_bit(false);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp469 = (panda$core$Int64) {326};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s470, $tmp469);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp471 = panda$core$Bit$init$builtin_bit(false);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp473 = (panda$core$Int64) {320};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s474, $tmp473, &$s475);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* param0) {

panda$core$Int64 local0;
panda$core$Real64 local1;
panda$core$String* local2 = NULL;
panda$core$Bit local3;
panda$collections$MapView* local4 = NULL;
panda$core$MutableString* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$String* local7 = NULL;
panda$collections$ListView* local8 = NULL;
panda$core$MutableString* local9 = NULL;
panda$core$String* local10 = NULL;
panda$json$JSON* local11 = NULL;
// line 336
panda$core$Int64* $tmp476 = &param0->$rawValue;
panda$core$Int64 $tmp477 = *$tmp476;
panda$core$Int64 $tmp478 = (panda$core$Int64) {0};
panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp481 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp482 = *$tmp481;
*(&local0) = $tmp482;
// line 338
panda$core$Int64 $tmp483 = *(&local0);
panda$core$String* $tmp484 = panda$core$Int64$convert$R$panda$core$String($tmp483);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
// unreffing REF($12:panda.core.String)
return $tmp484;
block3:;
panda$core$Int64 $tmp485 = (panda$core$Int64) {1};
panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp485);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp488 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp489 = *$tmp488;
*(&local1) = $tmp489;
// line 341
panda$core$Real64 $tmp490 = *(&local1);
panda$core$String* $tmp491 = panda$core$Real64$convert$R$panda$core$String($tmp490);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
// unreffing REF($28:panda.core.String)
return $tmp491;
block5:;
panda$core$Int64 $tmp492 = (panda$core$Int64) {2};
panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp492);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block6; else goto block7;
block6:;
panda$core$String** $tmp495 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp496 = *$tmp495;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
panda$core$String* $tmp497 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
*(&local2) = $tmp496;
// line 344
panda$core$String* $tmp498 = *(&local2);
panda$core$String* $tmp499 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp498, &$s500);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing REF($50:panda.core.String)
panda$core$String* $tmp501 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
return $tmp499;
block7:;
panda$core$Int64 $tmp502 = (panda$core$Int64) {3};
panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp502);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block8; else goto block9;
block8:;
panda$core$Bit* $tmp505 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp506 = *$tmp505;
*(&local3) = $tmp506;
// line 347
panda$core$Bit $tmp507 = *(&local3);
panda$core$String* $tmp508 = panda$core$Bit$convert$R$panda$core$String($tmp507);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// unreffing REF($71:panda.core.String)
return $tmp508;
block9:;
panda$core$Int64 $tmp509 = (panda$core$Int64) {4};
panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block10; else goto block11;
block10:;
panda$collections$MapView** $tmp512 = (panda$collections$MapView**) (param0->$data + 0);
panda$collections$MapView* $tmp513 = *$tmp512;
*(&local4) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
panda$collections$MapView* $tmp514 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
*(&local4) = $tmp513;
// line 350
panda$core$MutableString* $tmp515 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp515, &$s516);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
panda$core$MutableString* $tmp517 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
*(&local5) = $tmp515;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
// unreffing REF($92:panda.core.MutableString)
// line 351
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s518));
panda$core$String* $tmp519 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
*(&local6) = &$s520;
// line 352
panda$collections$MapView* $tmp521 = *(&local4);
ITable* $tmp522 = $tmp521->$class->itable;
while ($tmp522->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[3];
panda$collections$Iterator* $tmp525 = $tmp523($tmp521);
goto block12;
block12:;
ITable* $tmp526 = $tmp525->$class->itable;
while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[0];
panda$core$Bit $tmp529 = $tmp527($tmp525);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block14; else goto block13;
block13:;
*(&local7) = ((panda$core$String*) NULL);
ITable* $tmp531 = $tmp525->$class->itable;
while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[1];
panda$core$Object* $tmp534 = $tmp532($tmp525);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp534)));
panda$core$String* $tmp535 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
*(&local7) = ((panda$core$String*) $tmp534);
// line 353
panda$core$MutableString* $tmp536 = *(&local5);
panda$core$String* $tmp537 = *(&local6);
panda$core$String* $tmp538 = panda$core$String$convert$R$panda$core$String($tmp537);
panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s540);
panda$core$String* $tmp541 = *(&local7);
ITable* $tmp542 = ((panda$core$Formattable*) $tmp541)->$class->itable;
while ($tmp542->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[0];
panda$core$String* $tmp545 = $tmp543(((panda$core$Formattable*) $tmp541), &$s546);
panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, $tmp545);
panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s549);
panda$collections$MapView* $tmp550 = *(&local4);
panda$core$String* $tmp551 = *(&local7);
ITable* $tmp552 = $tmp550->$class->itable;
while ($tmp552->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp552 = $tmp552->next;
}
$fn554 $tmp553 = $tmp552->methods[1];
panda$core$Object* $tmp555 = $tmp553($tmp550, ((panda$core$Object*) $tmp551));
panda$core$Bit $tmp556 = panda$core$Bit$init$builtin_bit(((panda$json$JSON*) $tmp555) != NULL);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp558 = (panda$core$Int64) {353};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s559, $tmp558, &$s560);
abort(); // unreachable
block15:;
panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp548, ((panda$core$Object*) ((panda$json$JSON*) $tmp555)));
panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, &$s563);
panda$core$MutableString$append$panda$core$String($tmp536, $tmp562);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing REF($161:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp555);
// unreffing REF($151:panda.collections.MapView.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing REF($145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing REF($143:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing REF($139:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing REF($138:panda.core.String)
// line 354
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s564));
panda$core$String* $tmp565 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
*(&local6) = &$s566;
panda$core$Panda$unref$panda$core$Object$Q($tmp534);
// unreffing REF($127:panda.collections.Iterator.T)
panda$core$String* $tmp567 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing k
*(&local7) = ((panda$core$String*) NULL);
goto block12;
block14:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing REF($116:panda.collections.Iterator<panda.collections.MapView.K>)
// line 356
panda$core$MutableString* $tmp568 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp568, &$s569);
// line 357
panda$core$MutableString* $tmp570 = *(&local5);
panda$core$String* $tmp571 = panda$core$MutableString$finish$R$panda$core$String($tmp570);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing REF($212:panda.core.String)
panda$core$String* $tmp572 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing separator
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp573 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing result
*(&local5) = ((panda$core$MutableString*) NULL);
panda$collections$MapView* $tmp574 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing fields
*(&local4) = ((panda$collections$MapView*) NULL);
return $tmp571;
block11:;
panda$core$Int64 $tmp575 = (panda$core$Int64) {5};
panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block17; else goto block18;
block17:;
panda$collections$ListView** $tmp578 = (panda$collections$ListView**) (param0->$data + 0);
panda$collections$ListView* $tmp579 = *$tmp578;
*(&local8) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
panda$collections$ListView* $tmp580 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
*(&local8) = $tmp579;
// line 360
panda$core$MutableString* $tmp581 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp581, &$s582);
*(&local9) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
panda$core$MutableString* $tmp583 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
*(&local9) = $tmp581;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// unreffing REF($248:panda.core.MutableString)
// line 361
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s584));
panda$core$String* $tmp585 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
*(&local10) = &$s586;
// line 362
panda$collections$ListView* $tmp587 = *(&local8);
ITable* $tmp588 = ((panda$collections$Iterable*) $tmp587)->$class->itable;
while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[0];
panda$collections$Iterator* $tmp591 = $tmp589(((panda$collections$Iterable*) $tmp587));
goto block19;
block19:;
ITable* $tmp592 = $tmp591->$class->itable;
while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[0];
panda$core$Bit $tmp595 = $tmp593($tmp591);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block21; else goto block20;
block20:;
*(&local11) = ((panda$json$JSON*) NULL);
ITable* $tmp597 = $tmp591->$class->itable;
while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp597 = $tmp597->next;
}
$fn599 $tmp598 = $tmp597->methods[1];
panda$core$Object* $tmp600 = $tmp598($tmp591);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp600)));
panda$json$JSON* $tmp601 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
*(&local11) = ((panda$json$JSON*) $tmp600);
// line 363
panda$core$MutableString* $tmp602 = *(&local9);
panda$core$String* $tmp603 = *(&local10);
panda$core$String* $tmp604 = panda$core$String$convert$R$panda$core$String($tmp603);
panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s606);
panda$json$JSON* $tmp607 = *(&local11);
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp605, ((panda$core$Object*) $tmp607));
panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s610);
panda$core$MutableString$append$panda$core$String($tmp602, $tmp609);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing REF($300:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing REF($299:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing REF($296:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing REF($295:panda.core.String)
// line 364
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s611));
panda$core$String* $tmp612 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
*(&local10) = &$s613;
panda$core$Panda$unref$panda$core$Object$Q($tmp600);
// unreffing REF($284:panda.collections.Iterator.T)
panda$json$JSON* $tmp614 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing n
*(&local11) = ((panda$json$JSON*) NULL);
goto block19;
block21:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
// unreffing REF($273:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 366
panda$core$MutableString* $tmp615 = *(&local9);
panda$core$MutableString$append$panda$core$String($tmp615, &$s616);
// line 367
panda$core$MutableString* $tmp617 = *(&local9);
panda$core$String* $tmp618 = panda$core$MutableString$finish$R$panda$core$String($tmp617);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing REF($338:panda.core.String)
panda$core$String* $tmp619 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing separator
*(&local10) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp620 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing result
*(&local9) = ((panda$core$MutableString*) NULL);
panda$collections$ListView* $tmp621 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing nodes
*(&local8) = ((panda$collections$ListView*) NULL);
return $tmp618;
block18:;
panda$core$Int64 $tmp622 = (panda$core$Int64) {6};
panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block22; else goto block23;
block22:;
// line 370
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s625));
return &$s626;
block23:;
// line 373
panda$core$Bit $tmp627 = panda$core$Bit$init$builtin_bit(false);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp629 = (panda$core$Int64) {373};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s630, $tmp629);
abort(); // unreachable
block24:;
goto block1;
block1:;
panda$core$Bit $tmp631 = panda$core$Bit$init$builtin_bit(false);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp633 = (panda$core$Int64) {335};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s634, $tmp633, &$s635);
abort(); // unreachable
block26:;
abort(); // unreachable

}
void panda$json$JSON$cleanup(panda$json$JSON* param0) {

panda$core$Int64 local0;
panda$core$Real64 local1;
panda$core$String* local2 = NULL;
panda$core$Bit local3;
panda$collections$MapView* local4 = NULL;
panda$collections$ListView* local5 = NULL;
// line 6
panda$core$Int64* $tmp636 = &param0->$rawValue;
panda$core$Int64 $tmp637 = *$tmp636;
panda$core$Int64 $tmp638 = (panda$core$Int64) {0};
panda$core$Bit $tmp639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp641 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp642 = *$tmp641;
*(&local0) = $tmp642;
goto block1;
block3:;
panda$core$Int64 $tmp643 = (panda$core$Int64) {1};
panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp646 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp647 = *$tmp646;
*(&local1) = $tmp647;
goto block1;
block5:;
panda$core$Int64 $tmp648 = (panda$core$Int64) {2};
panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block6; else goto block7;
block6:;
panda$core$String** $tmp651 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp652 = *$tmp651;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
panda$core$String* $tmp653 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
*(&local2) = $tmp652;
// line 1
panda$core$String* $tmp654 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
panda$core$String* $tmp655 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing _f0
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp656 = (panda$core$Int64) {3};
panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp656);
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block8; else goto block9;
block8:;
panda$core$Bit* $tmp659 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp660 = *$tmp659;
*(&local3) = $tmp660;
goto block1;
block9:;
panda$core$Int64 $tmp661 = (panda$core$Int64) {4};
panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block10; else goto block11;
block10:;
panda$collections$MapView** $tmp664 = (panda$collections$MapView**) (param0->$data + 0);
panda$collections$MapView* $tmp665 = *$tmp664;
*(&local4) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
panda$collections$MapView* $tmp666 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
*(&local4) = $tmp665;
// line 1
panda$collections$MapView* $tmp667 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
panda$collections$MapView* $tmp668 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
// unreffing _f0
*(&local4) = ((panda$collections$MapView*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp669 = (panda$core$Int64) {5};
panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp669);
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block12; else goto block13;
block12:;
panda$collections$ListView** $tmp672 = (panda$collections$ListView**) (param0->$data + 0);
panda$collections$ListView* $tmp673 = *$tmp672;
*(&local5) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
panda$collections$ListView* $tmp674 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
*(&local5) = $tmp673;
// line 1
panda$collections$ListView* $tmp675 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
panda$collections$ListView* $tmp676 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing _f0
*(&local5) = ((panda$collections$ListView*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp677 = (panda$core$Int64) {6};
panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Int64 param2) {

// line 6
panda$core$Int64* $tmp680 = &param0->$rawValue;
*$tmp680 = param1;
// line 6
panda$core$Int64* $tmp681 = (panda$core$Int64*) (param0->$data + 0);
*$tmp681 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Real64 param2) {

// line 6
panda$core$Int64* $tmp682 = &param0->$rawValue;
*$tmp682 = param1;
// line 6
panda$core$Real64* $tmp683 = (panda$core$Real64*) (param0->$data + 0);
*$tmp683 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 6
panda$core$Int64* $tmp684 = &param0->$rawValue;
*$tmp684 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp685 = (panda$core$String**) (param0->$data + 0);
*$tmp685 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Bit param2) {

// line 6
panda$core$Int64* $tmp686 = &param0->$rawValue;
*$tmp686 = param1;
// line 6
panda$core$Bit* $tmp687 = (panda$core$Bit*) (param0->$data + 0);
*$tmp687 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* param0, panda$core$Int64 param1, panda$collections$MapView* param2) {

// line 6
panda$core$Int64* $tmp688 = &param0->$rawValue;
*$tmp688 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$MapView** $tmp689 = (panda$collections$MapView**) (param0->$data + 0);
*$tmp689 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* param0, panda$core$Int64 param1, panda$collections$ListView* param2) {

// line 6
panda$core$Int64* $tmp690 = &param0->$rawValue;
*$tmp690 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$ListView** $tmp691 = (panda$collections$ListView**) (param0->$data + 0);
*$tmp691 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* param0, panda$core$Int64 param1) {

// line 6
panda$core$Int64* $tmp692 = &param0->$rawValue;
*$tmp692 = param1;
return;

}

