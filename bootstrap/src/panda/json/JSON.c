#include "panda/json/JSON.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON/PathKey.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Equatable.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/Key.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Real64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/MapView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"

static panda$core$String $s1;
panda$json$JSON$class_type panda$json$JSON$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$json$JSON$convert$R$panda$core$String, panda$json$JSON$cleanup, panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q, panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q, panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q, panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q, panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q, panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q, panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q, panda$json$JSON$asInt$R$panda$core$Int64, panda$json$JSON$asReal$R$panda$core$Real64, panda$json$JSON$asString$R$panda$core$String, panda$json$JSON$asBit$R$panda$core$Bit, panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT, panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT} };

typedef panda$core$Bit (*$fn33)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn100)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$json$JSON* (*$fn191)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn223)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn255)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn287)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn322)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn357)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn621)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn632)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn647)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn711)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 74, 5172637184330274798, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 76, 3649344319728702780, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 78, -1718795988612819328, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, 737367192177042396, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 122, 7181716504558141706, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x41\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e", 103, 977195741375129716, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start) {
    panda$core$Char32 $match$53_92;
    panda$core$Char32 $tmp4;
    panda$core$Int32 $tmp5;
    panda$core$String$Index end7;
    panda$core$String$Index fieldStart9;
    panda$core$String$Index index11;
    panda$core$Char32 c14;
    panda$core$Char32 $tmp17;
    panda$core$Int32 $tmp18;
    panda$core$Char32 $tmp21;
    panda$core$Int32 $tmp22;
    panda$core$Equatable* $tmp27;
    panda$core$Equatable* $tmp29;
    panda$json$JSON$PathKey* $returnValue36;
    panda$json$JSON$PathKey* $tmp37;
    panda$json$JSON$PathKey* $tmp39;
    panda$json$JSON$PathKey* $tmp40;
    panda$core$Int64 $tmp42;
    panda$core$String* $tmp43;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp44;
    panda$core$Bit $tmp45;
    panda$core$Char32 $tmp48;
    panda$core$Int32 $tmp49;
    panda$core$String$Index indexStart51;
    panda$core$String$Index index53;
    panda$core$Char32 $tmp58;
    panda$core$Int32 $tmp59;
    panda$core$Int64$nullable parsed62;
    panda$core$String* $tmp63;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp64;
    panda$core$Bit $tmp65;
    panda$json$JSON$PathKey* $tmp68;
    panda$json$JSON$PathKey* $tmp70;
    panda$json$JSON$PathKey* $tmp71;
    panda$core$Int64 $tmp73;
    panda$json$JSON$PathKey* $tmp76;
    {
        panda$core$Char32 $tmp3 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, p_start);
        $match$53_92 = $tmp3;
        panda$core$Int32$init$builtin_int32(&$tmp5, 47);
        panda$core$Char32$init$panda$core$Int32(&$tmp4, $tmp5);
        panda$core$Bit $tmp6 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$53_92, $tmp4);
        if ($tmp6.value) {
        {
            panda$core$String$Index $tmp8 = panda$core$String$end$R$panda$core$String$Index(p_path);
            end7 = $tmp8;
            panda$core$String$Index $tmp10 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            fieldStart9 = $tmp10;
            index11 = fieldStart9;
            $l12:;
            {
                panda$core$Char32 $tmp15 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index11);
                c14 = $tmp15;
                panda$core$Int32$init$builtin_int32(&$tmp18, 47);
                panda$core$Char32$init$panda$core$Int32(&$tmp17, $tmp18);
                panda$core$Bit $tmp19 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c14, $tmp17);
                bool $tmp16 = $tmp19.value;
                if ($tmp16) goto $l20;
                panda$core$Int32$init$builtin_int32(&$tmp22, 91);
                panda$core$Char32$init$panda$core$Int32(&$tmp21, $tmp22);
                panda$core$Bit $tmp23 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c14, $tmp21);
                $tmp16 = $tmp23.value;
                $l20:;
                panda$core$Bit $tmp24 = { $tmp16 };
                if ($tmp24.value) {
                {
                    goto $l13;
                }
                }
                panda$core$String$Index $tmp25 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index11);
                index11 = $tmp25;
            }
            panda$core$String$Index$wrapper* $tmp28;
            $tmp28 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp28->value = index11;
            $tmp27 = ((panda$core$Equatable*) $tmp28);
            panda$core$String$Index$wrapper* $tmp30;
            $tmp30 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp30->value = end7;
            $tmp29 = ((panda$core$Equatable*) $tmp30);
            ITable* $tmp31 = $tmp27->$class->itable;
            while ($tmp31->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp31 = $tmp31->next;
            }
            $fn33 $tmp32 = $tmp31->methods[1];
            panda$core$Bit $tmp34 = $tmp32($tmp27, $tmp29);
            bool $tmp26 = $tmp34.value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
            if ($tmp26) goto $l12;
            $l13:;
            panda$core$Bit $tmp35 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(fieldStart9, index11);
            if ($tmp35.value) {
            {
                $tmp37 = NULL;
                $returnValue36 = $tmp37;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
                return $returnValue36;
            }
            }
            panda$json$JSON$PathKey* $tmp41 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Int64$init$builtin_int64(&$tmp42, 0);
            panda$core$Bit$init$builtin_bit(&$tmp45, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp44, fieldStart9, index11, $tmp45);
            panda$core$String* $tmp46 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp44);
            $tmp43 = $tmp46;
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp41, $tmp42, $tmp43, index11);
            $tmp40 = $tmp41;
            $tmp39 = $tmp40;
            $returnValue36 = $tmp39;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
            return $returnValue36;
        }
        }
        else {
        panda$core$Int32$init$builtin_int32(&$tmp49, 91);
        panda$core$Char32$init$panda$core$Int32(&$tmp48, $tmp49);
        panda$core$Bit $tmp50 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$53_92, $tmp48);
        if ($tmp50.value) {
        {
            panda$core$String$Index $tmp52 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            indexStart51 = $tmp52;
            index53 = indexStart51;
            $l54:;
            panda$core$Char32 $tmp57 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index53);
            panda$core$Int32$init$builtin_int32(&$tmp59, 93);
            panda$core$Char32$init$panda$core$Int32(&$tmp58, $tmp59);
            panda$core$Bit $tmp60 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp57, $tmp58);
            bool $tmp56 = $tmp60.value;
            if (!$tmp56) goto $l55;
            {
                panda$core$String$Index $tmp61 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index53);
                index53 = $tmp61;
            }
            goto $l54;
            $l55:;
            panda$core$Bit$init$builtin_bit(&$tmp65, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp64, indexStart51, index53, $tmp65);
            panda$core$String* $tmp66 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp64);
            $tmp63 = $tmp66;
            panda$core$Int64$nullable $tmp67 = panda$core$String$convert$R$panda$core$Int64$Q($tmp63);
            parsed62 = $tmp67;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
            if (((panda$core$Bit) { !parsed62.nonnull }).value) {
            {
                $tmp68 = NULL;
                $returnValue36 = $tmp68;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                return $returnValue36;
            }
            }
            panda$json$JSON$PathKey* $tmp72 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Int64$init$builtin_int64(&$tmp73, 1);
            panda$core$String$Index $tmp74 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index53);
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp72, $tmp73, ((panda$core$Int64) parsed62.value), $tmp74);
            $tmp71 = $tmp72;
            $tmp70 = $tmp71;
            $returnValue36 = $tmp70;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
            return $returnValue36;
        }
        }
        else {
        {
            $tmp76 = NULL;
            $returnValue36 = $tmp76;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp76));
            return $returnValue36;
        }
        }
        }
    }
    if (false) goto $l78; else goto $l79;
    $l79:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s80, (panda$core$Int64) { 52 }, &$s81);
    abort();
    $l78:;
    abort();
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index85;
    panda$core$String$Index end87;
    panda$json$JSON* current89 = NULL;
    panda$json$JSON* $tmp90;
    panda$core$Equatable* $tmp94;
    panda$core$Equatable* $tmp96;
    panda$json$JSON$PathKey* $tmp102;
    panda$core$String* $tmp107;
    panda$core$String* $tmp108;
    panda$json$JSON$PathKey* $match$106_13116 = NULL;
    panda$json$JSON$PathKey* $tmp117;
    panda$json$JSON$PathKey* $tmp118;
    panda$core$Int64 $tmp120;
    panda$core$String* field122 = NULL;
    panda$core$String$Index next124;
    panda$json$JSON* $match$108_21129 = NULL;
    panda$json$JSON* $tmp130;
    panda$core$Int64 $tmp131;
    panda$collections$ImmutableHashMap* fields133 = NULL;
    panda$json$JSON* $tmp135;
    panda$json$JSON* $tmp136;
    panda$core$Object* $tmp137;
    panda$json$JSON* $returnValue139;
    panda$json$JSON* $tmp140;
    panda$json$JSON* $tmp145;
    panda$core$Int64 $tmp151;
    panda$core$Int64 key153;
    panda$core$String$Index next155;
    panda$json$JSON* $match$119_21160 = NULL;
    panda$json$JSON* $tmp161;
    panda$core$Int64 $tmp162;
    panda$collections$ImmutableArray* nodes164 = NULL;
    panda$json$JSON* $tmp166;
    panda$json$JSON* $tmp167;
    panda$core$Object* $tmp168;
    panda$json$JSON* $tmp170;
    panda$json$JSON* $tmp177;
    int $tmp84;
    {
        panda$core$String$Index $tmp86 = panda$core$String$start$R$panda$core$String$Index(p_path);
        index85 = $tmp86;
        panda$core$String$Index $tmp88 = panda$core$String$end$R$panda$core$String$Index(p_path);
        end87 = $tmp88;
        $tmp90 = self;
        current89 = $tmp90;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
        $l91:;
        panda$core$String$Index$wrapper* $tmp95;
        $tmp95 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp95->value = index85;
        $tmp94 = ((panda$core$Equatable*) $tmp95);
        panda$core$String$Index$wrapper* $tmp97;
        $tmp97 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp97->value = end87;
        $tmp96 = ((panda$core$Equatable*) $tmp97);
        ITable* $tmp98 = $tmp94->$class->itable;
        while ($tmp98->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp98 = $tmp98->next;
        }
        $fn100 $tmp99 = $tmp98->methods[1];
        panda$core$Bit $tmp101 = $tmp99($tmp94, $tmp96);
        bool $tmp93 = $tmp101.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
        if (!$tmp93) goto $l92;
        {
            panda$json$JSON$PathKey* $tmp103 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index85);
            $tmp102 = $tmp103;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
            if (((panda$core$Bit) { $tmp102 != NULL }).value) goto $l104; else goto $l105;
            $l105:;
            panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s109, p_path);
            $tmp108 = $tmp110;
            panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s111);
            $tmp107 = $tmp112;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s106, (panda$core$Int64) { 105 }, $tmp107);
            abort();
            $l104:;
            int $tmp115;
            {
                panda$json$JSON$PathKey* $tmp119 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index85);
                $tmp118 = $tmp119;
                $tmp117 = $tmp118;
                $match$106_13116 = $tmp117;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
                panda$core$Int64$init$builtin_int64(&$tmp120, 0);
                panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_13116->$rawValue, $tmp120);
                if ($tmp121.value) {
                {
                    panda$core$String** $tmp123 = ((panda$core$String**) ((char*) $match$106_13116->$data + 0));
                    field122 = *$tmp123;
                    panda$core$String$Index* $tmp125 = ((panda$core$String$Index*) ((char*) $match$106_13116->$data + 8));
                    next124 = *$tmp125;
                    int $tmp128;
                    {
                        $tmp130 = current89;
                        $match$108_21129 = $tmp130;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
                        panda$core$Int64$init$builtin_int64(&$tmp131, 4);
                        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_21129->$rawValue, $tmp131);
                        if ($tmp132.value) {
                        {
                            panda$collections$ImmutableHashMap** $tmp134 = ((panda$collections$ImmutableHashMap**) ((char*) $match$108_21129->$data + 0));
                            fields133 = *$tmp134;
                            {
                                $tmp135 = current89;
                                panda$core$Object* $tmp138 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields133, ((panda$collections$Key*) field122));
                                $tmp137 = $tmp138;
                                $tmp136 = ((panda$json$JSON*) $tmp137);
                                current89 = $tmp136;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                                panda$core$Panda$unref$panda$core$Object($tmp137);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
                            }
                            if (((panda$core$Bit) { current89 == NULL }).value) {
                            {
                                $tmp140 = NULL;
                                $returnValue139 = $tmp140;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
                                $tmp128 = 0;
                                goto $l126;
                                $l141:;
                                $tmp115 = 0;
                                goto $l113;
                                $l142:;
                                $tmp84 = 0;
                                goto $l82;
                                $l143:;
                                return $returnValue139;
                            }
                            }
                        }
                        }
                        else {
                        {
                            $tmp145 = NULL;
                            $returnValue139 = $tmp145;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                            $tmp128 = 1;
                            goto $l126;
                            $l146:;
                            $tmp115 = 1;
                            goto $l113;
                            $l147:;
                            $tmp84 = 1;
                            goto $l82;
                            $l148:;
                            return $returnValue139;
                        }
                        }
                    }
                    $tmp128 = -1;
                    goto $l126;
                    $l126:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                    switch ($tmp128) {
                        case -1: goto $l150;
                        case 0: goto $l141;
                        case 1: goto $l146;
                    }
                    $l150:;
                    index85 = next124;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp151, 1);
                panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_13116->$rawValue, $tmp151);
                if ($tmp152.value) {
                {
                    panda$core$Int64* $tmp154 = ((panda$core$Int64*) ((char*) $match$106_13116->$data + 0));
                    key153 = *$tmp154;
                    panda$core$String$Index* $tmp156 = ((panda$core$String$Index*) ((char*) $match$106_13116->$data + 8));
                    next155 = *$tmp156;
                    int $tmp159;
                    {
                        $tmp161 = current89;
                        $match$119_21160 = $tmp161;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
                        panda$core$Int64$init$builtin_int64(&$tmp162, 5);
                        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_21160->$rawValue, $tmp162);
                        if ($tmp163.value) {
                        {
                            panda$collections$ImmutableArray** $tmp165 = ((panda$collections$ImmutableArray**) ((char*) $match$119_21160->$data + 0));
                            nodes164 = *$tmp165;
                            {
                                $tmp166 = current89;
                                panda$core$Object* $tmp169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes164, key153);
                                $tmp168 = $tmp169;
                                $tmp167 = ((panda$json$JSON*) $tmp168);
                                current89 = $tmp167;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
                                panda$core$Panda$unref$panda$core$Object($tmp168);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
                            }
                        }
                        }
                        else {
                        {
                            $tmp170 = NULL;
                            $returnValue139 = $tmp170;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
                            $tmp159 = 0;
                            goto $l157;
                            $l171:;
                            $tmp115 = 2;
                            goto $l113;
                            $l172:;
                            $tmp84 = 2;
                            goto $l82;
                            $l173:;
                            return $returnValue139;
                        }
                        }
                    }
                    $tmp159 = -1;
                    goto $l157;
                    $l157:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
                    switch ($tmp159) {
                        case -1: goto $l175;
                        case 0: goto $l171;
                    }
                    $l175:;
                    index85 = next155;
                }
                }
                }
            }
            $tmp115 = -1;
            goto $l113;
            $l113:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
            switch ($tmp115) {
                case 2: goto $l172;
                case 1: goto $l147;
                case -1: goto $l176;
                case 0: goto $l142;
            }
            $l176:;
        }
        goto $l91;
        $l92:;
        $tmp177 = current89;
        $returnValue139 = $tmp177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
        $tmp84 = 3;
        goto $l82;
        $l178:;
        return $returnValue139;
    }
    $l82:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current89));
    current89 = NULL;
    switch ($tmp84) {
        case 2: goto $l173;
        case 1: goto $l148;
        case 3: goto $l178;
        case 0: goto $l143;
    }
    $l180:;
    if (false) goto $l181; else goto $l182;
    $l182:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s183, (panda$core$Int64) { 100 }, &$s184);
    abort();
    $l181:;
    abort();
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result188 = NULL;
    panda$json$JSON* $tmp189;
    panda$json$JSON* $tmp190;
    panda$core$Int64$nullable $returnValue193;
    panda$json$JSON* $match$139_9199 = NULL;
    panda$json$JSON* $tmp200;
    panda$core$Int64 $tmp201;
    panda$core$Int64 value203;
    int $tmp187;
    {
        panda$json$JSON* $tmp192 = (($fn191) self->$class->vtable[2])(self, p_path);
        $tmp190 = $tmp192;
        $tmp189 = $tmp190;
        result188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        if (((panda$core$Bit) { result188 == NULL }).value) {
        {
            $returnValue193 = ((panda$core$Int64$nullable) { .nonnull = false });
            $tmp187 = 0;
            goto $l185;
            $l194:;
            return $returnValue193;
        }
        }
        int $tmp198;
        {
            $tmp200 = result188;
            $match$139_9199 = $tmp200;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
            panda$core$Int64$init$builtin_int64(&$tmp201, 0);
            panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_9199->$rawValue, $tmp201);
            if ($tmp202.value) {
            {
                panda$core$Int64* $tmp204 = ((panda$core$Int64*) ((char*) $match$139_9199->$data + 0));
                value203 = *$tmp204;
                $returnValue193 = ((panda$core$Int64$nullable) { value203, true });
                $tmp198 = 0;
                goto $l196;
                $l205:;
                $tmp187 = 1;
                goto $l185;
                $l206:;
                return $returnValue193;
            }
            }
            else {
            {
                $returnValue193 = ((panda$core$Int64$nullable) { .nonnull = false });
                $tmp198 = 1;
                goto $l196;
                $l208:;
                $tmp187 = 2;
                goto $l185;
                $l209:;
                return $returnValue193;
            }
            }
        }
        $tmp198 = -1;
        goto $l196;
        $l196:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
        switch ($tmp198) {
            case 0: goto $l205;
            case 1: goto $l208;
            case -1: goto $l211;
        }
        $l211:;
    }
    $tmp187 = -1;
    goto $l185;
    $l185:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result188));
    result188 = NULL;
    switch ($tmp187) {
        case -1: goto $l212;
        case 1: goto $l206;
        case 2: goto $l209;
        case 0: goto $l194;
    }
    $l212:;
    if (false) goto $l213; else goto $l214;
    $l214:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s215, (panda$core$Int64) { 134 }, &$s216);
    abort();
    $l213:;
    abort();
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result220 = NULL;
    panda$json$JSON* $tmp221;
    panda$json$JSON* $tmp222;
    panda$core$Real64$nullable $returnValue225;
    panda$json$JSON* $match$155_9231 = NULL;
    panda$json$JSON* $tmp232;
    panda$core$Int64 $tmp233;
    panda$core$Real64 value235;
    int $tmp219;
    {
        panda$json$JSON* $tmp224 = (($fn223) self->$class->vtable[2])(self, p_path);
        $tmp222 = $tmp224;
        $tmp221 = $tmp222;
        result220 = $tmp221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
        if (((panda$core$Bit) { result220 == NULL }).value) {
        {
            $returnValue225 = ((panda$core$Real64$nullable) { .nonnull = false });
            $tmp219 = 0;
            goto $l217;
            $l226:;
            return $returnValue225;
        }
        }
        int $tmp230;
        {
            $tmp232 = result220;
            $match$155_9231 = $tmp232;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
            panda$core$Int64$init$builtin_int64(&$tmp233, 1);
            panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$155_9231->$rawValue, $tmp233);
            if ($tmp234.value) {
            {
                panda$core$Real64* $tmp236 = ((panda$core$Real64*) ((char*) $match$155_9231->$data + 0));
                value235 = *$tmp236;
                $returnValue225 = ((panda$core$Real64$nullable) { value235, true });
                $tmp230 = 0;
                goto $l228;
                $l237:;
                $tmp219 = 1;
                goto $l217;
                $l238:;
                return $returnValue225;
            }
            }
            else {
            {
                $returnValue225 = ((panda$core$Real64$nullable) { .nonnull = false });
                $tmp230 = 1;
                goto $l228;
                $l240:;
                $tmp219 = 2;
                goto $l217;
                $l241:;
                return $returnValue225;
            }
            }
        }
        $tmp230 = -1;
        goto $l228;
        $l228:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        switch ($tmp230) {
            case 0: goto $l237;
            case -1: goto $l243;
            case 1: goto $l240;
        }
        $l243:;
    }
    $tmp219 = -1;
    goto $l217;
    $l217:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result220));
    result220 = NULL;
    switch ($tmp219) {
        case 2: goto $l241;
        case -1: goto $l244;
        case 0: goto $l226;
        case 1: goto $l238;
    }
    $l244:;
    if (false) goto $l245; else goto $l246;
    $l246:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s247, (panda$core$Int64) { 150 }, &$s248);
    abort();
    $l245:;
    abort();
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result252 = NULL;
    panda$json$JSON* $tmp253;
    panda$json$JSON* $tmp254;
    panda$core$Bit$nullable $returnValue257;
    panda$json$JSON* $match$171_9263 = NULL;
    panda$json$JSON* $tmp264;
    panda$core$Int64 $tmp265;
    panda$core$Bit value267;
    int $tmp251;
    {
        panda$json$JSON* $tmp256 = (($fn255) self->$class->vtable[2])(self, p_path);
        $tmp254 = $tmp256;
        $tmp253 = $tmp254;
        result252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
        if (((panda$core$Bit) { result252 == NULL }).value) {
        {
            $returnValue257 = ((panda$core$Bit$nullable) { .nonnull = false });
            $tmp251 = 0;
            goto $l249;
            $l258:;
            return $returnValue257;
        }
        }
        int $tmp262;
        {
            $tmp264 = result252;
            $match$171_9263 = $tmp264;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
            panda$core$Int64$init$builtin_int64(&$tmp265, 3);
            panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$171_9263->$rawValue, $tmp265);
            if ($tmp266.value) {
            {
                panda$core$Bit* $tmp268 = ((panda$core$Bit*) ((char*) $match$171_9263->$data + 0));
                value267 = *$tmp268;
                $returnValue257 = ((panda$core$Bit$nullable) { value267, true });
                $tmp262 = 0;
                goto $l260;
                $l269:;
                $tmp251 = 1;
                goto $l249;
                $l270:;
                return $returnValue257;
            }
            }
            else {
            {
                $returnValue257 = ((panda$core$Bit$nullable) { .nonnull = false });
                $tmp262 = 1;
                goto $l260;
                $l272:;
                $tmp251 = 2;
                goto $l249;
                $l273:;
                return $returnValue257;
            }
            }
        }
        $tmp262 = -1;
        goto $l260;
        $l260:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
        switch ($tmp262) {
            case -1: goto $l275;
            case 1: goto $l272;
            case 0: goto $l269;
        }
        $l275:;
    }
    $tmp251 = -1;
    goto $l249;
    $l249:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result252));
    result252 = NULL;
    switch ($tmp251) {
        case -1: goto $l276;
        case 2: goto $l273;
        case 1: goto $l270;
        case 0: goto $l258;
    }
    $l276:;
    if (false) goto $l277; else goto $l278;
    $l278:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s279, (panda$core$Int64) { 166 }, &$s280);
    abort();
    $l277:;
    abort();
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result284 = NULL;
    panda$json$JSON* $tmp285;
    panda$json$JSON* $tmp286;
    panda$core$String* $returnValue289;
    panda$core$String* $tmp290;
    panda$json$JSON* $match$187_9296 = NULL;
    panda$json$JSON* $tmp297;
    panda$core$Int64 $tmp298;
    panda$core$String* value300 = NULL;
    panda$core$String* $tmp302;
    panda$core$String* $tmp306;
    int $tmp283;
    {
        panda$json$JSON* $tmp288 = (($fn287) self->$class->vtable[2])(self, p_path);
        $tmp286 = $tmp288;
        $tmp285 = $tmp286;
        result284 = $tmp285;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
        if (((panda$core$Bit) { result284 == NULL }).value) {
        {
            $tmp290 = NULL;
            $returnValue289 = $tmp290;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
            $tmp283 = 0;
            goto $l281;
            $l291:;
            return $returnValue289;
        }
        }
        int $tmp295;
        {
            $tmp297 = result284;
            $match$187_9296 = $tmp297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
            panda$core$Int64$init$builtin_int64(&$tmp298, 2);
            panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_9296->$rawValue, $tmp298);
            if ($tmp299.value) {
            {
                panda$core$String** $tmp301 = ((panda$core$String**) ((char*) $match$187_9296->$data + 0));
                value300 = *$tmp301;
                $tmp302 = value300;
                $returnValue289 = $tmp302;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                $tmp295 = 0;
                goto $l293;
                $l303:;
                $tmp283 = 1;
                goto $l281;
                $l304:;
                return $returnValue289;
            }
            }
            else {
            {
                $tmp306 = NULL;
                $returnValue289 = $tmp306;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                $tmp295 = 1;
                goto $l293;
                $l307:;
                $tmp283 = 2;
                goto $l281;
                $l308:;
                return $returnValue289;
            }
            }
        }
        $tmp295 = -1;
        goto $l293;
        $l293:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
        switch ($tmp295) {
            case -1: goto $l310;
            case 1: goto $l307;
            case 0: goto $l303;
        }
        $l310:;
    }
    $tmp283 = -1;
    goto $l281;
    $l281:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result284));
    result284 = NULL;
    switch ($tmp283) {
        case 2: goto $l308;
        case -1: goto $l311;
        case 1: goto $l304;
        case 0: goto $l291;
    }
    $l311:;
    if (false) goto $l312; else goto $l313;
    $l313:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s314, (panda$core$Int64) { 182 }, &$s315);
    abort();
    $l312:;
    abort();
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result319 = NULL;
    panda$json$JSON* $tmp320;
    panda$json$JSON* $tmp321;
    panda$collections$ListView* $returnValue324;
    panda$collections$ListView* $tmp325;
    panda$json$JSON* $match$203_9331 = NULL;
    panda$json$JSON* $tmp332;
    panda$core$Int64 $tmp333;
    panda$collections$ImmutableArray* value335 = NULL;
    panda$collections$ListView* $tmp337;
    panda$collections$ListView* $tmp341;
    int $tmp318;
    {
        panda$json$JSON* $tmp323 = (($fn322) self->$class->vtable[2])(self, p_path);
        $tmp321 = $tmp323;
        $tmp320 = $tmp321;
        result319 = $tmp320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
        if (((panda$core$Bit) { result319 == NULL }).value) {
        {
            $tmp325 = NULL;
            $returnValue324 = $tmp325;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
            $tmp318 = 0;
            goto $l316;
            $l326:;
            return $returnValue324;
        }
        }
        int $tmp330;
        {
            $tmp332 = result319;
            $match$203_9331 = $tmp332;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
            panda$core$Int64$init$builtin_int64(&$tmp333, 5);
            panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$203_9331->$rawValue, $tmp333);
            if ($tmp334.value) {
            {
                panda$collections$ImmutableArray** $tmp336 = ((panda$collections$ImmutableArray**) ((char*) $match$203_9331->$data + 0));
                value335 = *$tmp336;
                $tmp337 = ((panda$collections$ListView*) value335);
                $returnValue324 = $tmp337;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
                $tmp330 = 0;
                goto $l328;
                $l338:;
                $tmp318 = 1;
                goto $l316;
                $l339:;
                return $returnValue324;
            }
            }
            else {
            {
                $tmp341 = NULL;
                $returnValue324 = $tmp341;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
                $tmp330 = 1;
                goto $l328;
                $l342:;
                $tmp318 = 2;
                goto $l316;
                $l343:;
                return $returnValue324;
            }
            }
        }
        $tmp330 = -1;
        goto $l328;
        $l328:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
        switch ($tmp330) {
            case 1: goto $l342;
            case 0: goto $l338;
            case -1: goto $l345;
        }
        $l345:;
    }
    $tmp318 = -1;
    goto $l316;
    $l316:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result319));
    result319 = NULL;
    switch ($tmp318) {
        case -1: goto $l346;
        case 1: goto $l339;
        case 0: goto $l326;
        case 2: goto $l343;
    }
    $l346:;
    if (false) goto $l347; else goto $l348;
    $l348:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s349, (panda$core$Int64) { 198 }, &$s350);
    abort();
    $l347:;
    abort();
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result354 = NULL;
    panda$json$JSON* $tmp355;
    panda$json$JSON* $tmp356;
    panda$collections$MapView* $returnValue359;
    panda$collections$MapView* $tmp360;
    panda$json$JSON* $match$219_9366 = NULL;
    panda$json$JSON* $tmp367;
    panda$core$Int64 $tmp368;
    panda$collections$ImmutableHashMap* value370 = NULL;
    panda$collections$MapView* $tmp372;
    panda$collections$MapView* $tmp376;
    int $tmp353;
    {
        panda$json$JSON* $tmp358 = (($fn357) self->$class->vtable[2])(self, p_path);
        $tmp356 = $tmp358;
        $tmp355 = $tmp356;
        result354 = $tmp355;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
        if (((panda$core$Bit) { result354 == NULL }).value) {
        {
            $tmp360 = NULL;
            $returnValue359 = $tmp360;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
            $tmp353 = 0;
            goto $l351;
            $l361:;
            return $returnValue359;
        }
        }
        int $tmp365;
        {
            $tmp367 = result354;
            $match$219_9366 = $tmp367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
            panda$core$Int64$init$builtin_int64(&$tmp368, 4);
            panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9366->$rawValue, $tmp368);
            if ($tmp369.value) {
            {
                panda$collections$ImmutableHashMap** $tmp371 = ((panda$collections$ImmutableHashMap**) ((char*) $match$219_9366->$data + 0));
                value370 = *$tmp371;
                $tmp372 = ((panda$collections$MapView*) value370);
                $returnValue359 = $tmp372;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
                $tmp365 = 0;
                goto $l363;
                $l373:;
                $tmp353 = 1;
                goto $l351;
                $l374:;
                return $returnValue359;
            }
            }
            else {
            {
                $tmp376 = NULL;
                $returnValue359 = $tmp376;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
                $tmp365 = 1;
                goto $l363;
                $l377:;
                $tmp353 = 2;
                goto $l351;
                $l378:;
                return $returnValue359;
            }
            }
        }
        $tmp365 = -1;
        goto $l363;
        $l363:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
        switch ($tmp365) {
            case -1: goto $l380;
            case 0: goto $l373;
            case 1: goto $l377;
        }
        $l380:;
    }
    $tmp353 = -1;
    goto $l351;
    $l351:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result354));
    result354 = NULL;
    switch ($tmp353) {
        case 2: goto $l378;
        case 0: goto $l361;
        case -1: goto $l381;
        case 1: goto $l374;
    }
    $l381:;
    if (false) goto $l382; else goto $l383;
    $l383:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s384, (panda$core$Int64) { 214 }, &$s385);
    abort();
    $l382:;
    abort();
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$core$Int64 $tmp386;
    panda$json$JSON* $match$232_9395 = NULL;
    panda$json$JSON* $tmp396;
    panda$core$Int64 $tmp397;
    panda$core$Int64 value399;
    panda$core$Int64 $returnValue401;
    panda$core$Bit $tmp404;
    panda$core$Int64$init$builtin_int64(&$tmp386, 0);
    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp386);
    if ($tmp387.value) goto $l388; else goto $l389;
    $l389:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s390, (panda$core$Int64) { 231 }, &$s391);
    abort();
    $l388:;
    int $tmp394;
    {
        $tmp396 = self;
        $match$232_9395 = $tmp396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
        panda$core$Int64$init$builtin_int64(&$tmp397, 0);
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$232_9395->$rawValue, $tmp397);
        if ($tmp398.value) {
        {
            panda$core$Int64* $tmp400 = ((panda$core$Int64*) ((char*) $match$232_9395->$data + 0));
            value399 = *$tmp400;
            $returnValue401 = value399;
            $tmp394 = 0;
            goto $l392;
            $l402:;
            return $returnValue401;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp404, false);
            if ($tmp404.value) goto $l405; else goto $l406;
            $l406:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s407, (panda$core$Int64) { 236 });
            abort();
            $l405:;
        }
        }
    }
    $tmp394 = -1;
    goto $l392;
    $l392:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
    switch ($tmp394) {
        case -1: goto $l408;
        case 0: goto $l402;
    }
    $l408:;
    if (false) goto $l409; else goto $l410;
    $l410:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s411, (panda$core$Int64) { 231 }, &$s412);
    abort();
    $l409:;
    abort();
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$core$Int64 $tmp413;
    panda$json$JSON* $match$245_9422 = NULL;
    panda$json$JSON* $tmp423;
    panda$core$Int64 $tmp424;
    panda$core$Real64 value426;
    panda$core$Real64 $returnValue428;
    panda$core$Bit $tmp431;
    panda$core$Int64$init$builtin_int64(&$tmp413, 1);
    panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp413);
    if ($tmp414.value) goto $l415; else goto $l416;
    $l416:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s417, (panda$core$Int64) { 244 }, &$s418);
    abort();
    $l415:;
    int $tmp421;
    {
        $tmp423 = self;
        $match$245_9422 = $tmp423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
        panda$core$Int64$init$builtin_int64(&$tmp424, 1);
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$245_9422->$rawValue, $tmp424);
        if ($tmp425.value) {
        {
            panda$core$Real64* $tmp427 = ((panda$core$Real64*) ((char*) $match$245_9422->$data + 0));
            value426 = *$tmp427;
            $returnValue428 = value426;
            $tmp421 = 0;
            goto $l419;
            $l429:;
            return $returnValue428;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp431, false);
            if ($tmp431.value) goto $l432; else goto $l433;
            $l433:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s434, (panda$core$Int64) { 249 });
            abort();
            $l432:;
        }
        }
    }
    $tmp421 = -1;
    goto $l419;
    $l419:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
    switch ($tmp421) {
        case -1: goto $l435;
        case 0: goto $l429;
    }
    $l435:;
    if (false) goto $l436; else goto $l437;
    $l437:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s438, (panda$core$Int64) { 244 }, &$s439);
    abort();
    $l436:;
    abort();
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$core$Int64 $tmp440;
    panda$json$JSON* $match$258_9449 = NULL;
    panda$json$JSON* $tmp450;
    panda$core$Int64 $tmp451;
    panda$core$String* value453 = NULL;
    panda$core$String* $returnValue455;
    panda$core$String* $tmp456;
    panda$core$Bit $tmp459;
    panda$core$Int64$init$builtin_int64(&$tmp440, 2);
    panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp440);
    if ($tmp441.value) goto $l442; else goto $l443;
    $l443:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s444, (panda$core$Int64) { 257 }, &$s445);
    abort();
    $l442:;
    int $tmp448;
    {
        $tmp450 = self;
        $match$258_9449 = $tmp450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
        panda$core$Int64$init$builtin_int64(&$tmp451, 2);
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$258_9449->$rawValue, $tmp451);
        if ($tmp452.value) {
        {
            panda$core$String** $tmp454 = ((panda$core$String**) ((char*) $match$258_9449->$data + 0));
            value453 = *$tmp454;
            $tmp456 = value453;
            $returnValue455 = $tmp456;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp456));
            $tmp448 = 0;
            goto $l446;
            $l457:;
            return $returnValue455;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp459, false);
            if ($tmp459.value) goto $l460; else goto $l461;
            $l461:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s462, (panda$core$Int64) { 262 });
            abort();
            $l460:;
        }
        }
    }
    $tmp448 = -1;
    goto $l446;
    $l446:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
    switch ($tmp448) {
        case 0: goto $l457;
        case -1: goto $l463;
    }
    $l463:;
    if (false) goto $l464; else goto $l465;
    $l465:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s466, (panda$core$Int64) { 257 }, &$s467);
    abort();
    $l464:;
    abort();
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$core$Int64 $tmp468;
    panda$json$JSON* $match$271_9477 = NULL;
    panda$json$JSON* $tmp478;
    panda$core$Int64 $tmp479;
    panda$core$Bit value481;
    panda$core$Bit $returnValue483;
    panda$core$Bit $tmp486;
    panda$core$Int64$init$builtin_int64(&$tmp468, 3);
    panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp468);
    if ($tmp469.value) goto $l470; else goto $l471;
    $l471:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s472, (panda$core$Int64) { 270 }, &$s473);
    abort();
    $l470:;
    int $tmp476;
    {
        $tmp478 = self;
        $match$271_9477 = $tmp478;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
        panda$core$Int64$init$builtin_int64(&$tmp479, 3);
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$271_9477->$rawValue, $tmp479);
        if ($tmp480.value) {
        {
            panda$core$Bit* $tmp482 = ((panda$core$Bit*) ((char*) $match$271_9477->$data + 0));
            value481 = *$tmp482;
            $returnValue483 = value481;
            $tmp476 = 0;
            goto $l474;
            $l484:;
            return $returnValue483;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp486, false);
            if ($tmp486.value) goto $l487; else goto $l488;
            $l488:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s489, (panda$core$Int64) { 275 });
            abort();
            $l487:;
        }
        }
    }
    $tmp476 = -1;
    goto $l474;
    $l474:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
    switch ($tmp476) {
        case -1: goto $l490;
        case 0: goto $l484;
    }
    $l490:;
    if (false) goto $l491; else goto $l492;
    $l492:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s493, (panda$core$Int64) { 270 }, &$s494);
    abort();
    $l491:;
    abort();
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$core$Int64 $tmp495;
    panda$json$JSON* $match$284_9504 = NULL;
    panda$json$JSON* $tmp505;
    panda$core$Int64 $tmp506;
    panda$collections$ImmutableHashMap* value508 = NULL;
    panda$collections$MapView* $returnValue510;
    panda$collections$MapView* $tmp511;
    panda$core$Bit $tmp514;
    panda$core$Int64$init$builtin_int64(&$tmp495, 4);
    panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp495);
    if ($tmp496.value) goto $l497; else goto $l498;
    $l498:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s499, (panda$core$Int64) { 283 }, &$s500);
    abort();
    $l497:;
    int $tmp503;
    {
        $tmp505 = self;
        $match$284_9504 = $tmp505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
        panda$core$Int64$init$builtin_int64(&$tmp506, 4);
        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$284_9504->$rawValue, $tmp506);
        if ($tmp507.value) {
        {
            panda$collections$ImmutableHashMap** $tmp509 = ((panda$collections$ImmutableHashMap**) ((char*) $match$284_9504->$data + 0));
            value508 = *$tmp509;
            $tmp511 = ((panda$collections$MapView*) value508);
            $returnValue510 = $tmp511;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
            $tmp503 = 0;
            goto $l501;
            $l512:;
            return $returnValue510;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp514, false);
            if ($tmp514.value) goto $l515; else goto $l516;
            $l516:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s517, (panda$core$Int64) { 288 });
            abort();
            $l515:;
        }
        }
    }
    $tmp503 = -1;
    goto $l501;
    $l501:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
    switch ($tmp503) {
        case 0: goto $l512;
        case -1: goto $l518;
    }
    $l518:;
    if (false) goto $l519; else goto $l520;
    $l520:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s521, (panda$core$Int64) { 283 }, &$s522);
    abort();
    $l519:;
    abort();
}
panda$collections$ListView* panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$core$Int64 $tmp523;
    panda$json$JSON* $match$297_9532 = NULL;
    panda$json$JSON* $tmp533;
    panda$core$Int64 $tmp534;
    panda$collections$ImmutableArray* value536 = NULL;
    panda$collections$ListView* $returnValue538;
    panda$collections$ListView* $tmp539;
    panda$core$Bit $tmp542;
    panda$core$Int64$init$builtin_int64(&$tmp523, 5);
    panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->$rawValue, $tmp523);
    if ($tmp524.value) goto $l525; else goto $l526;
    $l526:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s527, (panda$core$Int64) { 296 }, &$s528);
    abort();
    $l525:;
    int $tmp531;
    {
        $tmp533 = self;
        $match$297_9532 = $tmp533;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Int64$init$builtin_int64(&$tmp534, 5);
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$297_9532->$rawValue, $tmp534);
        if ($tmp535.value) {
        {
            panda$collections$ImmutableArray** $tmp537 = ((panda$collections$ImmutableArray**) ((char*) $match$297_9532->$data + 0));
            value536 = *$tmp537;
            $tmp539 = ((panda$collections$ListView*) value536);
            $returnValue538 = $tmp539;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp539));
            $tmp531 = 0;
            goto $l529;
            $l540:;
            return $returnValue538;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp542, false);
            if ($tmp542.value) goto $l543; else goto $l544;
            $l544:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s545, (panda$core$Int64) { 301 });
            abort();
            $l543:;
        }
        }
    }
    $tmp531 = -1;
    goto $l529;
    $l529:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
    switch ($tmp531) {
        case -1: goto $l546;
        case 0: goto $l540;
    }
    $l546:;
    if (false) goto $l547; else goto $l548;
    $l548:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s549, (panda$core$Int64) { 296 }, &$s550);
    abort();
    $l547:;
    abort();
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$310_9554 = NULL;
    panda$json$JSON* $tmp555;
    panda$core$Int64 $tmp556;
    panda$core$Int64 value558;
    panda$core$String* $returnValue560;
    panda$core$String* $tmp561;
    panda$core$String* $tmp562;
    panda$core$Int64 $tmp566;
    panda$core$Real64 value568;
    panda$core$String* $tmp570;
    panda$core$String* $tmp571;
    panda$core$Int64 $tmp575;
    panda$core$String* value577 = NULL;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    panda$core$Int64 $tmp585;
    panda$core$Bit value587;
    panda$core$String* $tmp589;
    panda$core$String* $tmp590;
    panda$core$Int64 $tmp594;
    panda$collections$ImmutableHashMap* fields596 = NULL;
    panda$core$MutableString* result601 = NULL;
    panda$core$MutableString* $tmp602;
    panda$core$MutableString* $tmp603;
    panda$core$String* separator606 = NULL;
    panda$core$String* $tmp607;
    panda$collections$Iterator* Iter$322$17612 = NULL;
    panda$collections$Iterator* $tmp613;
    panda$collections$Iterator* $tmp614;
    panda$core$String* k627 = NULL;
    panda$core$String* $tmp628;
    panda$core$Object* $tmp629;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    panda$core$String* $tmp639;
    panda$core$String* $tmp643;
    panda$core$Object* $tmp652;
    panda$core$String* $tmp657;
    panda$core$String* $tmp658;
    panda$core$String* $tmp663;
    panda$core$String* $tmp664;
    panda$core$Int64 $tmp670;
    panda$collections$ImmutableArray* nodes672 = NULL;
    panda$core$MutableString* result677 = NULL;
    panda$core$MutableString* $tmp678;
    panda$core$MutableString* $tmp679;
    panda$core$String* separator682 = NULL;
    panda$core$String* $tmp683;
    panda$collections$Iterator* Iter$331$17688 = NULL;
    panda$collections$Iterator* $tmp689;
    panda$collections$Iterator* $tmp690;
    panda$json$JSON* n706 = NULL;
    panda$json$JSON* $tmp707;
    panda$core$Object* $tmp708;
    panda$core$String* $tmp713;
    panda$core$String* $tmp714;
    panda$core$String* $tmp715;
    panda$core$String* $tmp716;
    panda$core$String* $tmp723;
    panda$core$String* $tmp724;
    panda$core$Char8 $tmp728;
    panda$core$UInt8 $tmp729;
    panda$core$String* $tmp730;
    panda$core$String* $tmp731;
    panda$core$Int64 $tmp737;
    panda$core$String* $tmp739;
    panda$core$Bit $tmp743;
    int $tmp553;
    {
        $tmp555 = self;
        $match$310_9554 = $tmp555;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
        panda$core$Int64$init$builtin_int64(&$tmp556, 0);
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9554->$rawValue, $tmp556);
        if ($tmp557.value) {
        {
            panda$core$Int64* $tmp559 = ((panda$core$Int64*) ((char*) $match$310_9554->$data + 0));
            value558 = *$tmp559;
            panda$core$String* $tmp563 = panda$core$Int64$convert$R$panda$core$String(value558);
            $tmp562 = $tmp563;
            $tmp561 = $tmp562;
            $returnValue560 = $tmp561;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
            $tmp553 = 0;
            goto $l551;
            $l564:;
            return $returnValue560;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp566, 1);
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9554->$rawValue, $tmp566);
        if ($tmp567.value) {
        {
            panda$core$Real64* $tmp569 = ((panda$core$Real64*) ((char*) $match$310_9554->$data + 0));
            value568 = *$tmp569;
            panda$core$String* $tmp572 = panda$core$Real64$convert$R$panda$core$String(value568);
            $tmp571 = $tmp572;
            $tmp570 = $tmp571;
            $returnValue560 = $tmp570;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
            $tmp553 = 1;
            goto $l551;
            $l573:;
            return $returnValue560;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp575, 2);
        panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9554->$rawValue, $tmp575);
        if ($tmp576.value) {
        {
            panda$core$String** $tmp578 = ((panda$core$String**) ((char*) $match$310_9554->$data + 0));
            value577 = *$tmp578;
            panda$core$String* $tmp582 = panda$core$String$format$panda$core$String$R$panda$core$String(value577, &$s581);
            $tmp580 = $tmp582;
            $tmp579 = $tmp580;
            $returnValue560 = $tmp579;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
            $tmp553 = 2;
            goto $l551;
            $l583:;
            return $returnValue560;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp585, 3);
        panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9554->$rawValue, $tmp585);
        if ($tmp586.value) {
        {
            panda$core$Bit* $tmp588 = ((panda$core$Bit*) ((char*) $match$310_9554->$data + 0));
            value587 = *$tmp588;
            panda$core$String* $tmp591 = panda$core$Bit$convert$R$panda$core$String(value587);
            $tmp590 = $tmp591;
            $tmp589 = $tmp590;
            $returnValue560 = $tmp589;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
            $tmp553 = 3;
            goto $l551;
            $l592:;
            return $returnValue560;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp594, 4);
        panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9554->$rawValue, $tmp594);
        if ($tmp595.value) {
        {
            panda$collections$ImmutableHashMap** $tmp597 = ((panda$collections$ImmutableHashMap**) ((char*) $match$310_9554->$data + 0));
            fields596 = *$tmp597;
            int $tmp600;
            {
                panda$core$MutableString* $tmp604 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp604, &$s605);
                $tmp603 = $tmp604;
                $tmp602 = $tmp603;
                result601 = $tmp602;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
                $tmp607 = &$s608;
                separator606 = $tmp607;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                {
                    int $tmp611;
                    {
                        panda$collections$Iterator* $tmp615 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields596);
                        $tmp614 = $tmp615;
                        $tmp613 = $tmp614;
                        Iter$322$17612 = $tmp613;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                        $l616:;
                        ITable* $tmp619 = Iter$322$17612->$class->itable;
                        while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp619 = $tmp619->next;
                        }
                        $fn621 $tmp620 = $tmp619->methods[0];
                        panda$core$Bit $tmp622 = $tmp620(Iter$322$17612);
                        panda$core$Bit $tmp623 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp622);
                        bool $tmp618 = $tmp623.value;
                        if (!$tmp618) goto $l617;
                        {
                            int $tmp626;
                            {
                                ITable* $tmp630 = Iter$322$17612->$class->itable;
                                while ($tmp630->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp630 = $tmp630->next;
                                }
                                $fn632 $tmp631 = $tmp630->methods[1];
                                panda$core$Object* $tmp633 = $tmp631(Iter$322$17612);
                                $tmp629 = $tmp633;
                                $tmp628 = ((panda$core$String*) $tmp629);
                                k627 = $tmp628;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
                                panda$core$Panda$unref$panda$core$Object($tmp629);
                                panda$core$String* $tmp640 = panda$core$String$convert$R$panda$core$String(separator606);
                                $tmp639 = $tmp640;
                                panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s641);
                                $tmp638 = $tmp642;
                                ITable* $tmp645 = ((panda$core$Formattable*) k627)->$class->itable;
                                while ($tmp645->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp645 = $tmp645->next;
                                }
                                $fn647 $tmp646 = $tmp645->methods[0];
                                panda$core$String* $tmp648 = $tmp646(((panda$core$Formattable*) k627), &$s644);
                                $tmp643 = $tmp648;
                                panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, $tmp643);
                                $tmp637 = $tmp649;
                                panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s650);
                                $tmp636 = $tmp651;
                                panda$core$Object* $tmp653 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields596, ((panda$collections$Key*) k627));
                                $tmp652 = $tmp653;
                                panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp636, ((panda$core$Object*) ((panda$json$JSON*) $tmp652)));
                                $tmp635 = $tmp654;
                                panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s655);
                                $tmp634 = $tmp656;
                                panda$core$MutableString$append$panda$core$String(result601, $tmp634);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                                panda$core$Panda$unref$panda$core$Object($tmp652);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                                {
                                    $tmp657 = separator606;
                                    $tmp658 = &$s659;
                                    separator606 = $tmp658;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp658));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
                                }
                            }
                            $tmp626 = -1;
                            goto $l624;
                            $l624:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k627));
                            k627 = NULL;
                            switch ($tmp626) {
                                case -1: goto $l660;
                            }
                            $l660:;
                        }
                        goto $l616;
                        $l617:;
                    }
                    $tmp611 = -1;
                    goto $l609;
                    $l609:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$322$17612));
                    Iter$322$17612 = NULL;
                    switch ($tmp611) {
                        case -1: goto $l661;
                    }
                    $l661:;
                }
                panda$core$MutableString$append$panda$core$String(result601, &$s662);
                panda$core$String* $tmp665 = panda$core$MutableString$finish$R$panda$core$String(result601);
                $tmp664 = $tmp665;
                $tmp663 = $tmp664;
                $returnValue560 = $tmp663;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
                $tmp600 = 0;
                goto $l598;
                $l666:;
                $tmp553 = 4;
                goto $l551;
                $l667:;
                return $returnValue560;
            }
            $l598:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result601));
            result601 = NULL;
            separator606 = NULL;
            switch ($tmp600) {
                case 0: goto $l666;
            }
            $l669:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp670, 5);
        panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9554->$rawValue, $tmp670);
        if ($tmp671.value) {
        {
            panda$collections$ImmutableArray** $tmp673 = ((panda$collections$ImmutableArray**) ((char*) $match$310_9554->$data + 0));
            nodes672 = *$tmp673;
            int $tmp676;
            {
                panda$core$MutableString* $tmp680 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp680, &$s681);
                $tmp679 = $tmp680;
                $tmp678 = $tmp679;
                result677 = $tmp678;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
                $tmp683 = &$s684;
                separator682 = $tmp683;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
                {
                    int $tmp687;
                    {
                        ITable* $tmp691 = ((panda$collections$Iterable*) nodes672)->$class->itable;
                        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp691 = $tmp691->next;
                        }
                        $fn693 $tmp692 = $tmp691->methods[0];
                        panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) nodes672));
                        $tmp690 = $tmp694;
                        $tmp689 = $tmp690;
                        Iter$331$17688 = $tmp689;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                        $l695:;
                        ITable* $tmp698 = Iter$331$17688->$class->itable;
                        while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp698 = $tmp698->next;
                        }
                        $fn700 $tmp699 = $tmp698->methods[0];
                        panda$core$Bit $tmp701 = $tmp699(Iter$331$17688);
                        panda$core$Bit $tmp702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp701);
                        bool $tmp697 = $tmp702.value;
                        if (!$tmp697) goto $l696;
                        {
                            int $tmp705;
                            {
                                ITable* $tmp709 = Iter$331$17688->$class->itable;
                                while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp709 = $tmp709->next;
                                }
                                $fn711 $tmp710 = $tmp709->methods[1];
                                panda$core$Object* $tmp712 = $tmp710(Iter$331$17688);
                                $tmp708 = $tmp712;
                                $tmp707 = ((panda$json$JSON*) $tmp708);
                                n706 = $tmp707;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
                                panda$core$Panda$unref$panda$core$Object($tmp708);
                                panda$core$String* $tmp717 = panda$core$String$convert$R$panda$core$String(separator682);
                                $tmp716 = $tmp717;
                                panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp716, &$s718);
                                $tmp715 = $tmp719;
                                panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp715, ((panda$core$Object*) n706));
                                $tmp714 = $tmp720;
                                panda$core$String* $tmp722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, &$s721);
                                $tmp713 = $tmp722;
                                panda$core$MutableString$append$panda$core$String(result677, $tmp713);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
                                {
                                    $tmp723 = separator682;
                                    $tmp724 = &$s725;
                                    separator682 = $tmp724;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp723));
                                }
                            }
                            $tmp705 = -1;
                            goto $l703;
                            $l703:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n706));
                            n706 = NULL;
                            switch ($tmp705) {
                                case -1: goto $l726;
                            }
                            $l726:;
                        }
                        goto $l695;
                        $l696:;
                    }
                    $tmp687 = -1;
                    goto $l685;
                    $l685:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$17688));
                    Iter$331$17688 = NULL;
                    switch ($tmp687) {
                        case -1: goto $l727;
                    }
                    $l727:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp729, 93);
                panda$core$Char8$init$panda$core$UInt8(&$tmp728, $tmp729);
                panda$core$MutableString$append$panda$core$Char8(result677, $tmp728);
                panda$core$String* $tmp732 = panda$core$MutableString$finish$R$panda$core$String(result677);
                $tmp731 = $tmp732;
                $tmp730 = $tmp731;
                $returnValue560 = $tmp730;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp731));
                $tmp676 = 0;
                goto $l674;
                $l733:;
                $tmp553 = 5;
                goto $l551;
                $l734:;
                return $returnValue560;
            }
            $l674:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator682));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
            result677 = NULL;
            separator682 = NULL;
            switch ($tmp676) {
                case 0: goto $l733;
            }
            $l736:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp737, 6);
        panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$310_9554->$rawValue, $tmp737);
        if ($tmp738.value) {
        {
            $tmp739 = &$s740;
            $returnValue560 = $tmp739;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
            $tmp553 = 6;
            goto $l551;
            $l741:;
            return $returnValue560;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp743, false);
            if ($tmp743.value) goto $l744; else goto $l745;
            $l745:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s746, (panda$core$Int64) { 340 });
            abort();
            $l744:;
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp553 = -1;
    goto $l551;
    $l551:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
    switch ($tmp553) {
        case 6: goto $l741;
        case 1: goto $l573;
        case 4: goto $l667;
        case 2: goto $l583;
        case 5: goto $l734;
        case 3: goto $l592;
        case -1: goto $l747;
        case 0: goto $l564;
    }
    $l747:;
    if (false) goto $l748; else goto $l749;
    $l749:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s750, (panda$core$Int64) { 309 }, &$s751);
    abort();
    $l748:;
    abort();
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$8_1758 = NULL;
    panda$json$JSON* $tmp759;
    panda$core$Int64 $tmp760;
    panda$core$Int64 _f0762;
    panda$core$Int64 $tmp764;
    panda$core$Real64 _f0766;
    panda$core$Int64 $tmp768;
    panda$core$String* _f0770 = NULL;
    panda$core$Int64 $tmp772;
    panda$core$Bit _f0774;
    panda$core$Int64 $tmp776;
    panda$collections$ImmutableHashMap* _f0778 = NULL;
    panda$core$Int64 $tmp780;
    panda$collections$ImmutableArray* _f0782 = NULL;
    panda$core$Int64 $tmp784;
    int $tmp754;
    {
        int $tmp757;
        {
            $tmp759 = self;
            $match$8_1758 = $tmp759;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp759));
            panda$core$Int64$init$builtin_int64(&$tmp760, 0);
            panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1758->$rawValue, $tmp760);
            if ($tmp761.value) {
            {
                panda$core$Int64* $tmp763 = ((panda$core$Int64*) ((char*) $match$8_1758->$data + 0));
                _f0762 = *$tmp763;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp764, 1);
            panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1758->$rawValue, $tmp764);
            if ($tmp765.value) {
            {
                panda$core$Real64* $tmp767 = ((panda$core$Real64*) ((char*) $match$8_1758->$data + 0));
                _f0766 = *$tmp767;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp768, 2);
            panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1758->$rawValue, $tmp768);
            if ($tmp769.value) {
            {
                panda$core$String** $tmp771 = ((panda$core$String**) ((char*) $match$8_1758->$data + 0));
                _f0770 = *$tmp771;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0770));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp772, 3);
            panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1758->$rawValue, $tmp772);
            if ($tmp773.value) {
            {
                panda$core$Bit* $tmp775 = ((panda$core$Bit*) ((char*) $match$8_1758->$data + 0));
                _f0774 = *$tmp775;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp776, 4);
            panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1758->$rawValue, $tmp776);
            if ($tmp777.value) {
            {
                panda$collections$ImmutableHashMap** $tmp779 = ((panda$collections$ImmutableHashMap**) ((char*) $match$8_1758->$data + 0));
                _f0778 = *$tmp779;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0778));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp780, 5);
            panda$core$Bit $tmp781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1758->$rawValue, $tmp780);
            if ($tmp781.value) {
            {
                panda$collections$ImmutableArray** $tmp783 = ((panda$collections$ImmutableArray**) ((char*) $match$8_1758->$data + 0));
                _f0782 = *$tmp783;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0782));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp784, 6);
            panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8_1758->$rawValue, $tmp784);
            if ($tmp785.value) {
            {
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp757 = -1;
        goto $l755;
        $l755:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
        switch ($tmp757) {
            case -1: goto $l786;
        }
        $l786:;
    }
    $tmp754 = -1;
    goto $l752;
    $l752:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp754) {
        case -1: goto $l787;
    }
    $l787:;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp788 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp788 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp789 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp789 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp790;
    panda$core$String* $tmp793;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp791 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp790 = *$tmp791;
        panda$core$String** $tmp792 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp793 = p_f0;
        *$tmp792 = $tmp793;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp794 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp794 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    panda$collections$ImmutableHashMap* $tmp795;
    panda$collections$ImmutableHashMap* $tmp798;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp796 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp795 = *$tmp796;
        panda$collections$ImmutableHashMap** $tmp797 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        $tmp798 = p_f0;
        *$tmp797 = $tmp798;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp798));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp799;
    panda$collections$ImmutableArray* $tmp802;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp800 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp799 = *$tmp800;
        panda$collections$ImmutableArray** $tmp801 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp802 = p_f0;
        *$tmp801 = $tmp802;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp802));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

