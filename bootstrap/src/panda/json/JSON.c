#include "panda/json/JSON.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON/PathKey.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Int32.h"
#include "panda/core/Equatable.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Key.h"
#include "panda/core/Real64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/MapView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Iterable.h"

__attribute__((weak)) panda$core$String* panda$json$JSON$convert$R$panda$core$String$shim(panda$json$JSON* p0) {
    panda$core$String* result = panda$json$JSON$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$json$JSON$cleanup$shim(panda$json$JSON* p0) {
    panda$json$JSON$cleanup(p0);

}

static panda$core$String $s1;
panda$json$JSON$class_type panda$json$JSON$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$json$JSON$convert$R$panda$core$String$shim, panda$json$JSON$cleanup$shim, panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q, panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q, panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q, panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q, panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q, panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q, panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q, panda$json$JSON$asInt$R$panda$core$Int64, panda$json$JSON$asReal$R$panda$core$Real64, panda$json$JSON$asString$R$panda$core$String, panda$json$JSON$asBit$R$panda$core$Bit, panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT, panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT} };

typedef panda$core$Bit (*$fn31)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn88)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$json$JSON* (*$fn163)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn187)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn211)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn235)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn261)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn287)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn469)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn474)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn485)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn523)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn527)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn532)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x6e\x65\x78\x74\x50\x61\x74\x68\x4b\x65\x79\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, -999879477833239630, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x49\x6e\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -428186142838500, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x52\x65\x61\x6c\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 100, 1641064985204290310, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x42\x69\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, 1309589565327065770, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x53\x74\x72\x69\x6e\x67\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 306928245621166922, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x41\x72\x72\x61\x79\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, -6857016778994286, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x4f\x62\x6a\x65\x63\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 146, 8716415486943877636, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 74, 8931891717197612926, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -6855485105993497876, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 371713800219408104, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 72, 7961319043562708476, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4569178082500671434, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x41\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, 5611752801805959944, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5747596656467050326, NULL };

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$String$Index local0;
panda$core$String$Index local1;
panda$core$String$Index local2;
panda$core$Char32 local3;
panda$core$Bit local4;
panda$core$String$Index local5;
panda$core$String$Index local6;
panda$core$Int64$nullable local7;
// line 53
panda$core$Char32 $tmp2 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, param1);
panda$core$Int32 $tmp3 = (panda$core$Int32) {47};
panda$core$Char32 $tmp4 = panda$core$Char32$init$panda$core$Int32($tmp3);
panda$core$Bit $tmp5 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp2, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 55
panda$core$String$Index $tmp7 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local0) = $tmp7;
// line 56
panda$core$String$Index $tmp8 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, param1);
*(&local1) = $tmp8;
// line 57
panda$core$String$Index $tmp9 = *(&local1);
*(&local2) = $tmp9;
// line 58
goto block4;
block4:;
// line 59
panda$core$String$Index $tmp10 = *(&local2);
panda$core$Char32 $tmp11 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp10);
*(&local3) = $tmp11;
// line 60
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
// line 61
goto block6;
block8:;
// line 63
panda$core$String$Index $tmp23 = *(&local2);
panda$core$String$Index $tmp24 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp23);
*(&local2) = $tmp24;
goto block5;
block5:;
panda$core$String$Index $tmp25 = *(&local2);
panda$core$String$Index$wrapper* $tmp26;
$tmp26 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp26->value = $tmp25;
panda$core$String$Index $tmp27 = *(&local0);
panda$core$String$Index$wrapper* $tmp28;
$tmp28 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
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
// line 66
panda$core$String$Index $tmp34 = *(&local1);
panda$core$String$Index $tmp35 = *(&local2);
panda$core$Bit $tmp36 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp34, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block12; else goto block13;
block12:;
// line 67
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON$PathKey*) NULL)));
return ((panda$json$JSON$PathKey*) NULL);
block13:;
// line 69
panda$json$JSON$PathKey* $tmp38 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
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
// line 72
panda$core$String$Index $tmp50 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, param1);
*(&local5) = $tmp50;
// line 73
panda$core$String$Index $tmp51 = *(&local5);
*(&local6) = $tmp51;
// line 74
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
// line 75
panda$core$String$Index $tmp58 = *(&local6);
panda$core$String$Index $tmp59 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp58);
*(&local6) = $tmp59;
goto block16;
block18:;
// line 77
panda$core$String$Index $tmp60 = *(&local5);
panda$core$String$Index $tmp61 = *(&local6);
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp63 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp60, $tmp61, $tmp62);
panda$core$String* $tmp64 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp63);
panda$core$Int64$nullable $tmp65 = panda$core$String$convert$R$panda$core$Int64$Q($tmp64);
*(&local7) = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($122:panda.core.String)
// line 78
panda$core$Int64$nullable $tmp66 = *(&local7);
panda$core$Bit $tmp67 = panda$core$Bit$init$builtin_bit(!$tmp66.nonnull);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block19; else goto block20;
block19:;
// line 79
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON$PathKey*) NULL)));
return ((panda$json$JSON$PathKey*) NULL);
block20:;
// line 81
panda$json$JSON$PathKey* $tmp69 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
panda$core$Int64 $tmp70 = (panda$core$Int64) {1};
panda$core$Int64$nullable $tmp71 = *(&local7);
panda$core$String$Index $tmp72 = *(&local6);
panda$core$String$Index $tmp73 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp72);
panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp69, $tmp70, ((panda$core$Int64) $tmp71.value), $tmp73);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($139:panda.json.JSON.PathKey)
return $tmp69;
block15:;
// line 84
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON$PathKey*) NULL)));
return ((panda$json$JSON$PathKey*) NULL);
block1:;
panda$core$Bit $tmp74 = panda$core$Bit$init$builtin_bit(false);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp76 = (panda$core$Int64) {52};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block21:;
abort(); // unreachable

}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$core$String$Index local0;
panda$core$String$Index local1;
panda$json$JSON* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String$Index local4;
panda$collections$ImmutableHashMap* local5 = NULL;
panda$core$Int64 local6;
panda$core$String$Index local7;
panda$collections$ImmutableArray* local8 = NULL;
// line 104
panda$core$String$Index $tmp79 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local0) = $tmp79;
// line 105
panda$core$String$Index $tmp80 = panda$core$String$get_end$R$panda$core$String$Index(param1);
*(&local1) = $tmp80;
// line 106
*(&local2) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
panda$json$JSON* $tmp81 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
*(&local2) = param0;
// line 107
goto block1;
block1:;
panda$core$String$Index $tmp82 = *(&local0);
panda$core$String$Index$wrapper* $tmp83;
$tmp83 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp83->value = $tmp82;
panda$core$String$Index $tmp84 = *(&local1);
panda$core$String$Index$wrapper* $tmp85;
$tmp85 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp85->value = $tmp84;
ITable* $tmp86 = ((panda$core$Equatable*) $tmp83)->$class->itable;
while ($tmp86->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[1];
panda$core$Bit $tmp89 = $tmp87(((panda$core$Equatable*) $tmp83), ((panda$core$Equatable*) $tmp85));
bool $tmp90 = $tmp89.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp85)));
// unreffing REF($21:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp83)));
// unreffing REF($18:panda.core.Equatable<panda.core.String.Index>)
if ($tmp90) goto block2; else goto block3;
block2:;
// line 108
panda$core$String$Index $tmp91 = *(&local0);
panda$json$JSON$PathKey* $tmp92 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(param1, $tmp91);
panda$core$Bit $tmp93 = panda$core$Bit$init$builtin_bit($tmp92 != NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp95 = (panda$core$Int64) {108};
panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s97, param1);
panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp96, &$s99);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s100, $tmp95, $tmp98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing REF($40:panda.core.String)
abort(); // unreachable
block4:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing REF($34:panda.json.JSON.PathKey?)
// line 109
panda$core$String$Index $tmp101 = *(&local0);
panda$json$JSON$PathKey* $tmp102 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(param1, $tmp101);
panda$core$Int64* $tmp103 = &$tmp102->$rawValue;
panda$core$Int64 $tmp104 = *$tmp103;
panda$core$Int64 $tmp105 = (panda$core$Int64) {0};
panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block7; else goto block8;
block7:;
panda$core$String** $tmp108 = (panda$core$String**) ($tmp102->$data + 0);
panda$core$String* $tmp109 = *$tmp108;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$String* $tmp110 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
*(&local3) = $tmp109;
panda$core$String$Index* $tmp111 = (panda$core$String$Index*) ($tmp102->$data + 8);
panda$core$String$Index $tmp112 = *$tmp111;
*(&local4) = $tmp112;
// line 111
panda$json$JSON* $tmp113 = *(&local2);
panda$core$Int64* $tmp114 = &$tmp113->$rawValue;
panda$core$Int64 $tmp115 = *$tmp114;
panda$core$Int64 $tmp116 = (panda$core$Int64) {4};
panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp115, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block10; else goto block11;
block10:;
panda$collections$ImmutableHashMap** $tmp119 = (panda$collections$ImmutableHashMap**) ($tmp113->$data + 0);
panda$collections$ImmutableHashMap* $tmp120 = *$tmp119;
*(&local5) = ((panda$collections$ImmutableHashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$collections$ImmutableHashMap* $tmp121 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
*(&local5) = $tmp120;
// line 113
panda$collections$ImmutableHashMap* $tmp122 = *(&local5);
panda$core$String* $tmp123 = *(&local3);
panda$core$Object* $tmp124 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q($tmp122, ((panda$collections$Key*) $tmp123));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp124)));
panda$json$JSON* $tmp125 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
*(&local2) = ((panda$json$JSON*) $tmp124);
panda$core$Panda$unref$panda$core$Object$Q($tmp124);
// unreffing REF($98:panda.collections.ImmutableHashMap.V?)
// line 114
panda$json$JSON* $tmp126 = *(&local2);
panda$core$Bit $tmp127 = panda$core$Bit$init$builtin_bit($tmp126 == NULL);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block12; else goto block13;
block12:;
// line 115
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$collections$ImmutableHashMap* $tmp129 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing fields
*(&local5) = ((panda$collections$ImmutableHashMap*) NULL);
panda$core$String* $tmp130 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp131 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block13:;
panda$collections$ImmutableHashMap* $tmp132 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing fields
*(&local5) = ((panda$collections$ImmutableHashMap*) NULL);
goto block9;
block11:;
// line 119
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$core$String* $tmp133 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp134 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block9:;
// line 122
panda$core$String$Index $tmp135 = *(&local4);
*(&local0) = $tmp135;
panda$core$String* $tmp136 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
goto block6;
block8:;
panda$core$Int64 $tmp137 = (panda$core$Int64) {1};
panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp104, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block14; else goto block6;
block14:;
panda$core$Int64* $tmp140 = (panda$core$Int64*) ($tmp102->$data + 0);
panda$core$Int64 $tmp141 = *$tmp140;
*(&local6) = $tmp141;
panda$core$String$Index* $tmp142 = (panda$core$String$Index*) ($tmp102->$data + 8);
panda$core$String$Index $tmp143 = *$tmp142;
*(&local7) = $tmp143;
// line 125
panda$json$JSON* $tmp144 = *(&local2);
panda$core$Int64* $tmp145 = &$tmp144->$rawValue;
panda$core$Int64 $tmp146 = *$tmp145;
panda$core$Int64 $tmp147 = (panda$core$Int64) {5};
panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp146, $tmp147);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block16; else goto block17;
block16:;
panda$collections$ImmutableArray** $tmp150 = (panda$collections$ImmutableArray**) ($tmp144->$data + 0);
panda$collections$ImmutableArray* $tmp151 = *$tmp150;
*(&local8) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$collections$ImmutableArray* $tmp152 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
*(&local8) = $tmp151;
// line 127
panda$collections$ImmutableArray* $tmp153 = *(&local8);
panda$core$Int64 $tmp154 = *(&local6);
panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp153, $tmp154);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp155)));
panda$json$JSON* $tmp156 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
*(&local2) = ((panda$json$JSON*) $tmp155);
panda$core$Panda$unref$panda$core$Object$Q($tmp155);
// unreffing REF($201:panda.collections.ImmutableArray.T)
panda$collections$ImmutableArray* $tmp157 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing nodes
*(&local8) = ((panda$collections$ImmutableArray*) NULL);
goto block15;
block17:;
// line 130
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp158 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block15:;
// line 133
panda$core$String$Index $tmp159 = *(&local7);
*(&local0) = $tmp159;
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($55:panda.json.JSON.PathKey?)
goto block1;
block3:;
// line 137
panda$json$JSON* $tmp160 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
panda$json$JSON* $tmp161 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return $tmp160;

}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Int64 local1;
// line 144
$fn163 $tmp162 = ($fn163) param0->$class->vtable[2];
panda$json$JSON* $tmp164 = $tmp162(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
panda$json$JSON* $tmp165 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local0) = $tmp164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing REF($2:panda.json.JSON?)
// line 145
panda$json$JSON* $tmp166 = *(&local0);
panda$core$Bit $tmp167 = panda$core$Bit$init$builtin_bit($tmp166 == NULL);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block1; else goto block2;
block1:;
// line 146
panda$json$JSON* $tmp169 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 148
panda$json$JSON* $tmp170 = *(&local0);
panda$core$Int64* $tmp171 = &$tmp170->$rawValue;
panda$core$Int64 $tmp172 = *$tmp171;
panda$core$Int64 $tmp173 = (panda$core$Int64) {0};
panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block4; else goto block5;
block4:;
panda$core$Int64* $tmp176 = (panda$core$Int64*) ($tmp170->$data + 0);
panda$core$Int64 $tmp177 = *$tmp176;
*(&local1) = $tmp177;
// line 150
panda$core$Int64 $tmp178 = *(&local1);
panda$json$JSON* $tmp179 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { $tmp178, true });
block5:;
// line 153
panda$json$JSON* $tmp180 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { .nonnull = false });
block3:;
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit(false);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp183 = (panda$core$Int64) {143};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s184, $tmp183, &$s185);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Real64 local1;
// line 162
$fn187 $tmp186 = ($fn187) param0->$class->vtable[2];
panda$json$JSON* $tmp188 = $tmp186(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
panda$json$JSON* $tmp189 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
*(&local0) = $tmp188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing REF($2:panda.json.JSON?)
// line 163
panda$json$JSON* $tmp190 = *(&local0);
panda$core$Bit $tmp191 = panda$core$Bit$init$builtin_bit($tmp190 == NULL);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block1; else goto block2;
block1:;
// line 164
panda$json$JSON* $tmp193 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { .nonnull = false });
block2:;
// line 166
panda$json$JSON* $tmp194 = *(&local0);
panda$core$Int64* $tmp195 = &$tmp194->$rawValue;
panda$core$Int64 $tmp196 = *$tmp195;
panda$core$Int64 $tmp197 = (panda$core$Int64) {1};
panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp196, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp200 = (panda$core$Real64*) ($tmp194->$data + 0);
panda$core$Real64 $tmp201 = *$tmp200;
*(&local1) = $tmp201;
// line 168
panda$core$Real64 $tmp202 = *(&local1);
panda$json$JSON* $tmp203 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { $tmp202, true });
block5:;
// line 171
panda$json$JSON* $tmp204 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { .nonnull = false });
block3:;
panda$core$Bit $tmp205 = panda$core$Bit$init$builtin_bit(false);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp207 = (panda$core$Int64) {161};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s208, $tmp207, &$s209);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Bit local1;
// line 180
$fn211 $tmp210 = ($fn211) param0->$class->vtable[2];
panda$json$JSON* $tmp212 = $tmp210(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
panda$json$JSON* $tmp213 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
*(&local0) = $tmp212;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing REF($2:panda.json.JSON?)
// line 181
panda$json$JSON* $tmp214 = *(&local0);
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit($tmp214 == NULL);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block1; else goto block2;
block1:;
// line 182
panda$json$JSON* $tmp217 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { .nonnull = false });
block2:;
// line 184
panda$json$JSON* $tmp218 = *(&local0);
panda$core$Int64* $tmp219 = &$tmp218->$rawValue;
panda$core$Int64 $tmp220 = *$tmp219;
panda$core$Int64 $tmp221 = (panda$core$Int64) {3};
panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp220, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block4; else goto block5;
block4:;
panda$core$Bit* $tmp224 = (panda$core$Bit*) ($tmp218->$data + 0);
panda$core$Bit $tmp225 = *$tmp224;
*(&local1) = $tmp225;
// line 186
panda$core$Bit $tmp226 = *(&local1);
panda$json$JSON* $tmp227 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { $tmp226, true });
block5:;
// line 189
panda$json$JSON* $tmp228 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { .nonnull = false });
block3:;
panda$core$Bit $tmp229 = panda$core$Bit$init$builtin_bit(false);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp231 = (panda$core$Int64) {179};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s232, $tmp231, &$s233);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$String* local1 = NULL;
// line 198
$fn235 $tmp234 = ($fn235) param0->$class->vtable[2];
panda$json$JSON* $tmp236 = $tmp234(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
panda$json$JSON* $tmp237 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
*(&local0) = $tmp236;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing REF($2:panda.json.JSON?)
// line 199
panda$json$JSON* $tmp238 = *(&local0);
panda$core$Bit $tmp239 = panda$core$Bit$init$builtin_bit($tmp238 == NULL);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// line 200
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$json$JSON* $tmp241 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$String*) NULL);
block2:;
// line 202
panda$json$JSON* $tmp242 = *(&local0);
panda$core$Int64* $tmp243 = &$tmp242->$rawValue;
panda$core$Int64 $tmp244 = *$tmp243;
panda$core$Int64 $tmp245 = (panda$core$Int64) {2};
panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp244, $tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block4; else goto block5;
block4:;
panda$core$String** $tmp248 = (panda$core$String**) ($tmp242->$data + 0);
panda$core$String* $tmp249 = *$tmp248;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
panda$core$String* $tmp250 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
*(&local1) = $tmp249;
// line 204
panda$core$String* $tmp251 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
panda$core$String* $tmp252 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing value
*(&local1) = ((panda$core$String*) NULL);
panda$json$JSON* $tmp253 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return $tmp251;
block5:;
// line 207
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$json$JSON* $tmp254 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$String*) NULL);
block3:;
panda$core$Bit $tmp255 = panda$core$Bit$init$builtin_bit(false);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp257 = (panda$core$Int64) {197};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s258, $tmp257, &$s259);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$collections$ImmutableArray* local1 = NULL;
// line 216
$fn261 $tmp260 = ($fn261) param0->$class->vtable[2];
panda$json$JSON* $tmp262 = $tmp260(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
panda$json$JSON* $tmp263 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
*(&local0) = $tmp262;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($2:panda.json.JSON?)
// line 217
panda$json$JSON* $tmp264 = *(&local0);
panda$core$Bit $tmp265 = panda$core$Bit$init$builtin_bit($tmp264 == NULL);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block1; else goto block2;
block1:;
// line 218
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$json$JSON* $tmp267 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$ListView*) NULL);
block2:;
// line 220
panda$json$JSON* $tmp268 = *(&local0);
panda$core$Int64* $tmp269 = &$tmp268->$rawValue;
panda$core$Int64 $tmp270 = *$tmp269;
panda$core$Int64 $tmp271 = (panda$core$Int64) {5};
panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp270, $tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block4; else goto block5;
block4:;
panda$collections$ImmutableArray** $tmp274 = (panda$collections$ImmutableArray**) ($tmp268->$data + 0);
panda$collections$ImmutableArray* $tmp275 = *$tmp274;
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$collections$ImmutableArray* $tmp276 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
*(&local1) = $tmp275;
// line 222
panda$collections$ImmutableArray* $tmp277 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp277)));
panda$collections$ImmutableArray* $tmp278 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing value
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$json$JSON* $tmp279 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$ListView*) $tmp277);
block5:;
// line 225
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$json$JSON* $tmp280 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$ListView*) NULL);
block3:;
panda$core$Bit $tmp281 = panda$core$Bit$init$builtin_bit(false);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp283 = (panda$core$Int64) {215};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s284, $tmp283, &$s285);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$collections$ImmutableHashMap* local1 = NULL;
// line 234
$fn287 $tmp286 = ($fn287) param0->$class->vtable[2];
panda$json$JSON* $tmp288 = $tmp286(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
panda$json$JSON* $tmp289 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
*(&local0) = $tmp288;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing REF($2:panda.json.JSON?)
// line 235
panda$json$JSON* $tmp290 = *(&local0);
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit($tmp290 == NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block1; else goto block2;
block1:;
// line 236
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) NULL)));
panda$json$JSON* $tmp293 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$MapView*) NULL);
block2:;
// line 238
panda$json$JSON* $tmp294 = *(&local0);
panda$core$Int64* $tmp295 = &$tmp294->$rawValue;
panda$core$Int64 $tmp296 = *$tmp295;
panda$core$Int64 $tmp297 = (panda$core$Int64) {4};
panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp296, $tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block4; else goto block5;
block4:;
panda$collections$ImmutableHashMap** $tmp300 = (panda$collections$ImmutableHashMap**) ($tmp294->$data + 0);
panda$collections$ImmutableHashMap* $tmp301 = *$tmp300;
*(&local1) = ((panda$collections$ImmutableHashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
panda$collections$ImmutableHashMap* $tmp302 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
*(&local1) = $tmp301;
// line 240
panda$collections$ImmutableHashMap* $tmp303 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) $tmp303)));
panda$collections$ImmutableHashMap* $tmp304 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing value
*(&local1) = ((panda$collections$ImmutableHashMap*) NULL);
panda$json$JSON* $tmp305 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$MapView*) $tmp303);
block5:;
// line 243
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) NULL)));
panda$json$JSON* $tmp306 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$MapView*) NULL);
block3:;
panda$core$Bit $tmp307 = panda$core$Bit$init$builtin_bit(false);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp309 = (panda$core$Int64) {233};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s310, $tmp309, &$s311);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* param0) {

panda$core$Int64 local0;
// line 252
panda$core$Int64* $tmp312 = &param0->$rawValue;
panda$core$Int64 $tmp313 = *$tmp312;
panda$core$Int64 $tmp314 = (panda$core$Int64) {0};
panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp313, $tmp314);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp317 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp318 = *$tmp317;
*(&local0) = $tmp318;
// line 254
panda$core$Int64 $tmp319 = *(&local0);
return $tmp319;
block3:;
// line 257
panda$core$Bit $tmp320 = panda$core$Bit$init$builtin_bit(false);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp322 = (panda$core$Int64) {257};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s323, $tmp322);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp324 = panda$core$Bit$init$builtin_bit(false);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp326 = (panda$core$Int64) {251};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s327, $tmp326, &$s328);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* param0) {

panda$core$Real64 local0;
// line 266
panda$core$Int64* $tmp329 = &param0->$rawValue;
panda$core$Int64 $tmp330 = *$tmp329;
panda$core$Int64 $tmp331 = (panda$core$Int64) {1};
panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp330, $tmp331);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block2; else goto block3;
block2:;
panda$core$Real64* $tmp334 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp335 = *$tmp334;
*(&local0) = $tmp335;
// line 268
panda$core$Real64 $tmp336 = *(&local0);
return $tmp336;
block3:;
// line 271
panda$core$Bit $tmp337 = panda$core$Bit$init$builtin_bit(false);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp339 = (panda$core$Int64) {271};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s340, $tmp339);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp341 = panda$core$Bit$init$builtin_bit(false);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp343 = (panda$core$Int64) {265};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s344, $tmp343, &$s345);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* param0) {

panda$core$String* local0 = NULL;
// line 280
panda$core$Int64* $tmp346 = &param0->$rawValue;
panda$core$Int64 $tmp347 = *$tmp346;
panda$core$Int64 $tmp348 = (panda$core$Int64) {2};
panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp347, $tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block2; else goto block3;
block2:;
panda$core$String** $tmp351 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp352 = *$tmp351;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
panda$core$String* $tmp353 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
*(&local0) = $tmp352;
// line 282
panda$core$String* $tmp354 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
panda$core$String* $tmp355 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
// unreffing value
*(&local0) = ((panda$core$String*) NULL);
return $tmp354;
block3:;
// line 285
panda$core$Bit $tmp356 = panda$core$Bit$init$builtin_bit(false);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp358 = (panda$core$Int64) {285};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s359, $tmp358);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp360 = panda$core$Bit$init$builtin_bit(false);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp362 = (panda$core$Int64) {279};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s363, $tmp362, &$s364);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* param0) {

panda$core$Bit local0;
// line 294
panda$core$Int64* $tmp365 = &param0->$rawValue;
panda$core$Int64 $tmp366 = *$tmp365;
panda$core$Int64 $tmp367 = (panda$core$Int64) {3};
panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp366, $tmp367);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp370 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp371 = *$tmp370;
*(&local0) = $tmp371;
// line 296
panda$core$Bit $tmp372 = *(&local0);
return $tmp372;
block3:;
// line 299
panda$core$Bit $tmp373 = panda$core$Bit$init$builtin_bit(false);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp375 = (panda$core$Int64) {299};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s376, $tmp375);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp377 = panda$core$Bit$init$builtin_bit(false);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp379 = (panda$core$Int64) {293};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s380, $tmp379, &$s381);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* param0) {

panda$collections$ImmutableHashMap* local0 = NULL;
// line 308
panda$core$Int64* $tmp382 = &param0->$rawValue;
panda$core$Int64 $tmp383 = *$tmp382;
panda$core$Int64 $tmp384 = (panda$core$Int64) {4};
panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp383, $tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block2; else goto block3;
block2:;
panda$collections$ImmutableHashMap** $tmp387 = (panda$collections$ImmutableHashMap**) (param0->$data + 0);
panda$collections$ImmutableHashMap* $tmp388 = *$tmp387;
*(&local0) = ((panda$collections$ImmutableHashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
panda$collections$ImmutableHashMap* $tmp389 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
*(&local0) = $tmp388;
// line 310
panda$collections$ImmutableHashMap* $tmp390 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) $tmp390)));
panda$collections$ImmutableHashMap* $tmp391 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
// unreffing value
*(&local0) = ((panda$collections$ImmutableHashMap*) NULL);
return ((panda$collections$MapView*) $tmp390);
block3:;
// line 313
panda$core$Bit $tmp392 = panda$core$Bit$init$builtin_bit(false);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp394 = (panda$core$Int64) {313};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s395, $tmp394);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp396 = panda$core$Bit$init$builtin_bit(false);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp398 = (panda$core$Int64) {307};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s399, $tmp398, &$s400);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$ListView* panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* param0) {

panda$collections$ImmutableArray* local0 = NULL;
// line 322
panda$core$Int64* $tmp401 = &param0->$rawValue;
panda$core$Int64 $tmp402 = *$tmp401;
panda$core$Int64 $tmp403 = (panda$core$Int64) {5};
panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp402, $tmp403);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block2; else goto block3;
block2:;
panda$collections$ImmutableArray** $tmp406 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp407 = *$tmp406;
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$collections$ImmutableArray* $tmp408 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
*(&local0) = $tmp407;
// line 324
panda$collections$ImmutableArray* $tmp409 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp409)));
panda$collections$ImmutableArray* $tmp410 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing value
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((panda$collections$ListView*) $tmp409);
block3:;
// line 327
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit(false);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp413 = (panda$core$Int64) {327};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s414, $tmp413);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp415 = panda$core$Bit$init$builtin_bit(false);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp417 = (panda$core$Int64) {321};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s418, $tmp417, &$s419);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* param0) {

panda$core$Int64 local0;
panda$core$Real64 local1;
panda$core$String* local2 = NULL;
panda$core$Bit local3;
panda$collections$ImmutableHashMap* local4 = NULL;
panda$core$MutableString* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$String* local7 = NULL;
panda$collections$ImmutableArray* local8 = NULL;
panda$core$MutableString* local9 = NULL;
panda$core$String* local10 = NULL;
panda$json$JSON* local11 = NULL;
// line 337
panda$core$Int64* $tmp420 = &param0->$rawValue;
panda$core$Int64 $tmp421 = *$tmp420;
panda$core$Int64 $tmp422 = (panda$core$Int64) {0};
panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp422);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp425 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp426 = *$tmp425;
*(&local0) = $tmp426;
// line 339
panda$core$Int64 $tmp427 = *(&local0);
panda$core$String* $tmp428 = panda$core$Int64$convert$R$panda$core$String($tmp427);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing REF($12:panda.core.String)
return $tmp428;
block3:;
panda$core$Int64 $tmp429 = (panda$core$Int64) {1};
panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp432 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp433 = *$tmp432;
*(&local1) = $tmp433;
// line 342
panda$core$Real64 $tmp434 = *(&local1);
panda$core$String* $tmp435 = panda$core$Real64$convert$R$panda$core$String($tmp434);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
// unreffing REF($28:panda.core.String)
return $tmp435;
block5:;
panda$core$Int64 $tmp436 = (panda$core$Int64) {2};
panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp436);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block6; else goto block7;
block6:;
panda$core$String** $tmp439 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp440 = *$tmp439;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
panda$core$String* $tmp441 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
*(&local2) = $tmp440;
// line 345
panda$core$String* $tmp442 = *(&local2);
panda$core$String* $tmp443 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp442, &$s444);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing REF($50:panda.core.String)
panda$core$String* $tmp445 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
return $tmp443;
block7:;
panda$core$Int64 $tmp446 = (panda$core$Int64) {3};
panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block8; else goto block9;
block8:;
panda$core$Bit* $tmp449 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp450 = *$tmp449;
*(&local3) = $tmp450;
// line 348
panda$core$Bit $tmp451 = *(&local3);
panda$core$String* $tmp452 = panda$core$Bit$convert$R$panda$core$String($tmp451);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
// unreffing REF($71:panda.core.String)
return $tmp452;
block9:;
panda$core$Int64 $tmp453 = (panda$core$Int64) {4};
panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block10; else goto block11;
block10:;
panda$collections$ImmutableHashMap** $tmp456 = (panda$collections$ImmutableHashMap**) (param0->$data + 0);
panda$collections$ImmutableHashMap* $tmp457 = *$tmp456;
*(&local4) = ((panda$collections$ImmutableHashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
panda$collections$ImmutableHashMap* $tmp458 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
*(&local4) = $tmp457;
// line 351
panda$core$MutableString* $tmp459 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp459, &$s460);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
panda$core$MutableString* $tmp461 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
*(&local5) = $tmp459;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($92:panda.core.MutableString)
// line 352
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s462));
panda$core$String* $tmp463 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
*(&local6) = &$s464;
// line 353
panda$collections$ImmutableHashMap* $tmp465 = *(&local4);
panda$collections$Iterator* $tmp466 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT($tmp465);
goto block12;
block12:;
ITable* $tmp467 = $tmp466->$class->itable;
while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp467 = $tmp467->next;
}
$fn469 $tmp468 = $tmp467->methods[0];
panda$core$Bit $tmp470 = $tmp468($tmp466);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block14; else goto block13;
block13:;
*(&local7) = ((panda$core$String*) NULL);
ITable* $tmp472 = $tmp466->$class->itable;
while ($tmp472->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[1];
panda$core$Object* $tmp475 = $tmp473($tmp466);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp475)));
panda$core$String* $tmp476 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
*(&local7) = ((panda$core$String*) $tmp475);
// line 354
panda$core$MutableString* $tmp477 = *(&local5);
panda$core$String* $tmp478 = *(&local6);
panda$core$String* $tmp479 = panda$core$String$convert$R$panda$core$String($tmp478);
panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s481);
panda$core$String* $tmp482 = *(&local7);
ITable* $tmp483 = ((panda$core$Formattable*) $tmp482)->$class->itable;
while ($tmp483->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
panda$core$String* $tmp486 = $tmp484(((panda$core$Formattable*) $tmp482), &$s487);
panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, $tmp486);
panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s490);
panda$collections$ImmutableHashMap* $tmp491 = *(&local4);
panda$core$String* $tmp492 = *(&local7);
panda$core$Object* $tmp493 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q($tmp491, ((panda$collections$Key*) $tmp492));
panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp489, ((panda$core$Object*) ((panda$json$JSON*) $tmp493)));
panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s496);
panda$core$MutableString$append$panda$core$String($tmp477, $tmp495);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
// unreffing REF($153:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
// unreffing REF($152:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp493);
// unreffing REF($149:panda.collections.ImmutableHashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
// unreffing REF($143:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// unreffing REF($142:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing REF($138:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
// unreffing REF($137:panda.core.String)
// line 355
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s497));
panda$core$String* $tmp498 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
*(&local6) = &$s499;
panda$core$Panda$unref$panda$core$Object$Q($tmp475);
// unreffing REF($126:panda.collections.Iterator.T)
panda$core$String* $tmp500 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
// unreffing k
*(&local7) = ((panda$core$String*) NULL);
goto block12;
block14:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
// unreffing REF($115:panda.collections.Iterator<panda.collections.ImmutableHashMap.K>)
// line 357
panda$core$MutableString* $tmp501 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp501, &$s502);
// line 358
panda$core$MutableString* $tmp503 = *(&local5);
panda$core$String* $tmp504 = panda$core$MutableString$finish$R$panda$core$String($tmp503);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing REF($203:panda.core.String)
panda$core$String* $tmp505 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
// unreffing separator
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp506 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
// unreffing result
*(&local5) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableHashMap* $tmp507 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing fields
*(&local4) = ((panda$collections$ImmutableHashMap*) NULL);
return $tmp504;
block11:;
panda$core$Int64 $tmp508 = (panda$core$Int64) {5};
panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block15; else goto block16;
block15:;
panda$collections$ImmutableArray** $tmp511 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp512 = *$tmp511;
*(&local8) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
panda$collections$ImmutableArray* $tmp513 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
*(&local8) = $tmp512;
// line 361
panda$core$MutableString* $tmp514 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp514, &$s515);
*(&local9) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
panda$core$MutableString* $tmp516 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
*(&local9) = $tmp514;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
// unreffing REF($239:panda.core.MutableString)
// line 362
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s517));
panda$core$String* $tmp518 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
*(&local10) = &$s519;
// line 363
panda$collections$ImmutableArray* $tmp520 = *(&local8);
ITable* $tmp521 = ((panda$collections$Iterable*) $tmp520)->$class->itable;
while ($tmp521->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[0];
panda$collections$Iterator* $tmp524 = $tmp522(((panda$collections$Iterable*) $tmp520));
goto block17;
block17:;
ITable* $tmp525 = $tmp524->$class->itable;
while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
panda$core$Bit $tmp528 = $tmp526($tmp524);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block19; else goto block18;
block18:;
*(&local11) = ((panda$json$JSON*) NULL);
ITable* $tmp530 = $tmp524->$class->itable;
while ($tmp530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp530 = $tmp530->next;
}
$fn532 $tmp531 = $tmp530->methods[1];
panda$core$Object* $tmp533 = $tmp531($tmp524);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp533)));
panda$json$JSON* $tmp534 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
*(&local11) = ((panda$json$JSON*) $tmp533);
// line 364
panda$core$MutableString* $tmp535 = *(&local9);
panda$core$String* $tmp536 = *(&local10);
panda$core$String* $tmp537 = panda$core$String$convert$R$panda$core$String($tmp536);
panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp537, &$s539);
panda$json$JSON* $tmp540 = *(&local11);
panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp538, ((panda$core$Object*) $tmp540));
panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s543);
panda$core$MutableString$append$panda$core$String($tmp535, $tmp542);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing REF($291:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing REF($290:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing REF($287:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($286:panda.core.String)
// line 365
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s544));
panda$core$String* $tmp545 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
*(&local10) = &$s546;
panda$core$Panda$unref$panda$core$Object$Q($tmp533);
// unreffing REF($275:panda.collections.Iterator.T)
panda$json$JSON* $tmp547 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing n
*(&local11) = ((panda$json$JSON*) NULL);
goto block17;
block19:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
// unreffing REF($264:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 367
panda$core$MutableString* $tmp548 = *(&local9);
panda$core$MutableString$append$panda$core$String($tmp548, &$s549);
// line 368
panda$core$MutableString* $tmp550 = *(&local9);
panda$core$String* $tmp551 = panda$core$MutableString$finish$R$panda$core$String($tmp550);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing REF($329:panda.core.String)
panda$core$String* $tmp552 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
// unreffing separator
*(&local10) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp553 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
// unreffing result
*(&local9) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp554 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
// unreffing nodes
*(&local8) = ((panda$collections$ImmutableArray*) NULL);
return $tmp551;
block16:;
panda$core$Int64 $tmp555 = (panda$core$Int64) {6};
panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp555);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block20; else goto block21;
block20:;
// line 371
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s558));
return &$s559;
block21:;
// line 374
panda$core$Bit $tmp560 = panda$core$Bit$init$builtin_bit(false);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp562 = (panda$core$Int64) {374};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s563, $tmp562);
abort(); // unreachable
block22:;
goto block1;
block1:;
panda$core$Bit $tmp564 = panda$core$Bit$init$builtin_bit(false);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp566 = (panda$core$Int64) {336};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s567, $tmp566, &$s568);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void panda$json$JSON$cleanup(panda$json$JSON* param0) {

panda$core$Int64 local0;
panda$core$Real64 local1;
panda$core$String* local2 = NULL;
panda$core$Bit local3;
panda$collections$ImmutableHashMap* local4 = NULL;
panda$collections$ImmutableArray* local5 = NULL;
// line 8
panda$core$Int64* $tmp569 = &param0->$rawValue;
panda$core$Int64 $tmp570 = *$tmp569;
panda$core$Int64 $tmp571 = (panda$core$Int64) {0};
panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp574 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp575 = *$tmp574;
*(&local0) = $tmp575;
goto block1;
block3:;
panda$core$Int64 $tmp576 = (panda$core$Int64) {1};
panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp576);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp579 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp580 = *$tmp579;
*(&local1) = $tmp580;
goto block1;
block5:;
panda$core$Int64 $tmp581 = (panda$core$Int64) {2};
panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp581);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block6; else goto block7;
block6:;
panda$core$String** $tmp584 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp585 = *$tmp584;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
panda$core$String* $tmp586 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
*(&local2) = $tmp585;
// line 1
panda$core$String* $tmp587 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
panda$core$String* $tmp588 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
// unreffing _f0
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp589 = (panda$core$Int64) {3};
panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block8; else goto block9;
block8:;
panda$core$Bit* $tmp592 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp593 = *$tmp592;
*(&local3) = $tmp593;
goto block1;
block9:;
panda$core$Int64 $tmp594 = (panda$core$Int64) {4};
panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block10; else goto block11;
block10:;
panda$collections$ImmutableHashMap** $tmp597 = (panda$collections$ImmutableHashMap**) (param0->$data + 0);
panda$collections$ImmutableHashMap* $tmp598 = *$tmp597;
*(&local4) = ((panda$collections$ImmutableHashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
panda$collections$ImmutableHashMap* $tmp599 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
*(&local4) = $tmp598;
// line 1
panda$collections$ImmutableHashMap* $tmp600 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
panda$collections$ImmutableHashMap* $tmp601 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing _f0
*(&local4) = ((panda$collections$ImmutableHashMap*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp602 = (panda$core$Int64) {5};
panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block12; else goto block13;
block12:;
panda$collections$ImmutableArray** $tmp605 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp606 = *$tmp605;
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
panda$collections$ImmutableArray* $tmp607 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
*(&local5) = $tmp606;
// line 1
panda$collections$ImmutableArray* $tmp608 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
panda$collections$ImmutableArray* $tmp609 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing _f0
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp610 = (panda$core$Int64) {6};
panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// line 8
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Int64 param2) {

// line 8
panda$core$Int64* $tmp613 = &param0->$rawValue;
*$tmp613 = param1;
// line 8
panda$core$Int64* $tmp614 = (panda$core$Int64*) (param0->$data + 0);
*$tmp614 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Real64 param2) {

// line 8
panda$core$Int64* $tmp615 = &param0->$rawValue;
*$tmp615 = param1;
// line 8
panda$core$Real64* $tmp616 = (panda$core$Real64*) (param0->$data + 0);
*$tmp616 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 8
panda$core$Int64* $tmp617 = &param0->$rawValue;
*$tmp617 = param1;
// line 8
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp618 = (panda$core$String**) (param0->$data + 0);
*$tmp618 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Bit param2) {

// line 8
panda$core$Int64* $tmp619 = &param0->$rawValue;
*$tmp619 = param1;
// line 8
panda$core$Bit* $tmp620 = (panda$core$Bit*) (param0->$data + 0);
*$tmp620 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* param0, panda$core$Int64 param1, panda$collections$ImmutableHashMap* param2) {

// line 8
panda$core$Int64* $tmp621 = &param0->$rawValue;
*$tmp621 = param1;
// line 8
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$ImmutableHashMap** $tmp622 = (panda$collections$ImmutableHashMap**) (param0->$data + 0);
*$tmp622 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* param0, panda$core$Int64 param1, panda$collections$ImmutableArray* param2) {

// line 8
panda$core$Int64* $tmp623 = &param0->$rawValue;
*$tmp623 = param1;
// line 8
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$ImmutableArray** $tmp624 = (panda$collections$ImmutableArray**) (param0->$data + 0);
*$tmp624 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* param0, panda$core$Int64 param1) {

// line 8
panda$core$Int64* $tmp625 = &param0->$rawValue;
*$tmp625 = param1;
return;

}

