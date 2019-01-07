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
typedef panda$core$Bit (*$fn88)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn126)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Object* (*$fn160)(panda$collections$ListView*, panda$core$Int64);
typedef panda$json$JSON* (*$fn169)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn193)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn217)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn241)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn267)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn293)(panda$json$JSON*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn474)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn478)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn483)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn494)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Object* (*$fn504)(panda$collections$MapView*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn535)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn539)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn544)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x6e\x65\x78\x74\x50\x61\x74\x68\x4b\x65\x79\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, -999879477833239630, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x49\x6e\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -428186142838500, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x52\x65\x61\x6c\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 100, 1641064985204290310, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x42\x69\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, 1309589565327065770, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x53\x74\x72\x69\x6e\x67\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 306928245621166922, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x41\x72\x72\x61\x79\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, -6857016778994286, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x67\x65\x74\x4f\x62\x6a\x65\x63\x74\x28\x70\x61\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 146, 8716415486943877636, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x49\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 74, 8931891717197612926, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x52\x65\x61\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -6855485105993497876, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 371713800219408104, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x42\x69\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 72, 7961319043562708476, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x4f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4569178082500671434, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x61\x73\x41\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, 5611752801805959944, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x70\x61\x6e\x64\x61", 10, 7834806211412799717, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5747596656467050326, NULL };

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
panda$collections$MapView* local5 = NULL;
panda$core$Int64 local6;
panda$core$String$Index local7;
panda$collections$ListView* local8 = NULL;
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
panda$collections$MapView** $tmp119 = (panda$collections$MapView**) ($tmp113->$data + 0);
panda$collections$MapView* $tmp120 = *$tmp119;
*(&local5) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$collections$MapView* $tmp121 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
*(&local5) = $tmp120;
// line 113
panda$collections$MapView* $tmp122 = *(&local5);
panda$core$String* $tmp123 = *(&local3);
ITable* $tmp124 = $tmp122->$class->itable;
while ($tmp124->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[1];
panda$core$Object* $tmp127 = $tmp125($tmp122, ((panda$core$Object*) $tmp123));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp127)));
panda$json$JSON* $tmp128 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
*(&local2) = ((panda$json$JSON*) $tmp127);
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing REF($99:panda.collections.MapView.V?)
// line 114
panda$json$JSON* $tmp129 = *(&local2);
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit($tmp129 == NULL);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block12; else goto block13;
block12:;
// line 115
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$collections$MapView* $tmp132 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing fields
*(&local5) = ((panda$collections$MapView*) NULL);
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
block13:;
panda$collections$MapView* $tmp135 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
// unreffing fields
*(&local5) = ((panda$collections$MapView*) NULL);
goto block9;
block11:;
// line 119
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$core$String* $tmp136 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp137 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block9:;
// line 122
panda$core$String$Index $tmp138 = *(&local4);
*(&local0) = $tmp138;
panda$core$String* $tmp139 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing field
*(&local3) = ((panda$core$String*) NULL);
goto block6;
block8:;
panda$core$Int64 $tmp140 = (panda$core$Int64) {1};
panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp104, $tmp140);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block14; else goto block6;
block14:;
panda$core$Int64* $tmp143 = (panda$core$Int64*) ($tmp102->$data + 0);
panda$core$Int64 $tmp144 = *$tmp143;
*(&local6) = $tmp144;
panda$core$String$Index* $tmp145 = (panda$core$String$Index*) ($tmp102->$data + 8);
panda$core$String$Index $tmp146 = *$tmp145;
*(&local7) = $tmp146;
// line 125
panda$json$JSON* $tmp147 = *(&local2);
panda$core$Int64* $tmp148 = &$tmp147->$rawValue;
panda$core$Int64 $tmp149 = *$tmp148;
panda$core$Int64 $tmp150 = (panda$core$Int64) {5};
panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block16; else goto block17;
block16:;
panda$collections$ListView** $tmp153 = (panda$collections$ListView**) ($tmp147->$data + 0);
panda$collections$ListView* $tmp154 = *$tmp153;
*(&local8) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
panda$collections$ListView* $tmp155 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
*(&local8) = $tmp154;
// line 127
panda$collections$ListView* $tmp156 = *(&local8);
panda$core$Int64 $tmp157 = *(&local6);
ITable* $tmp158 = $tmp156->$class->itable;
while ($tmp158->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
panda$core$Object* $tmp161 = $tmp159($tmp156, $tmp157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp161)));
panda$json$JSON* $tmp162 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
*(&local2) = ((panda$json$JSON*) $tmp161);
panda$core$Panda$unref$panda$core$Object$Q($tmp161);
// unreffing REF($203:panda.collections.ListView.T)
panda$collections$ListView* $tmp163 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing nodes
*(&local8) = ((panda$collections$ListView*) NULL);
goto block15;
block17:;
// line 130
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) NULL)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($55:panda.json.JSON.PathKey?)
panda$json$JSON* $tmp164 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return ((panda$json$JSON*) NULL);
block15:;
// line 133
panda$core$String$Index $tmp165 = *(&local7);
*(&local0) = $tmp165;
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($55:panda.json.JSON.PathKey?)
goto block1;
block3:;
// line 137
panda$json$JSON* $tmp166 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
panda$json$JSON* $tmp167 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing current
*(&local2) = ((panda$json$JSON*) NULL);
return $tmp166;

}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Int64 local1;
// line 144
$fn169 $tmp168 = ($fn169) param0->$class->vtable[2];
panda$json$JSON* $tmp170 = $tmp168(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
panda$json$JSON* $tmp171 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
*(&local0) = $tmp170;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($2:panda.json.JSON?)
// line 145
panda$json$JSON* $tmp172 = *(&local0);
panda$core$Bit $tmp173 = panda$core$Bit$init$builtin_bit($tmp172 == NULL);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block1; else goto block2;
block1:;
// line 146
panda$json$JSON* $tmp175 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 148
panda$json$JSON* $tmp176 = *(&local0);
panda$core$Int64* $tmp177 = &$tmp176->$rawValue;
panda$core$Int64 $tmp178 = *$tmp177;
panda$core$Int64 $tmp179 = (panda$core$Int64) {0};
panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp178, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block4; else goto block5;
block4:;
panda$core$Int64* $tmp182 = (panda$core$Int64*) ($tmp176->$data + 0);
panda$core$Int64 $tmp183 = *$tmp182;
*(&local1) = $tmp183;
// line 150
panda$core$Int64 $tmp184 = *(&local1);
panda$json$JSON* $tmp185 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { $tmp184, true });
block5:;
// line 153
panda$json$JSON* $tmp186 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Int64$nullable) { .nonnull = false });
block3:;
panda$core$Bit $tmp187 = panda$core$Bit$init$builtin_bit(false);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp189 = (panda$core$Int64) {143};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s190, $tmp189, &$s191);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Real64 local1;
// line 162
$fn193 $tmp192 = ($fn193) param0->$class->vtable[2];
panda$json$JSON* $tmp194 = $tmp192(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$json$JSON* $tmp195 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
*(&local0) = $tmp194;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($2:panda.json.JSON?)
// line 163
panda$json$JSON* $tmp196 = *(&local0);
panda$core$Bit $tmp197 = panda$core$Bit$init$builtin_bit($tmp196 == NULL);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block1; else goto block2;
block1:;
// line 164
panda$json$JSON* $tmp199 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { .nonnull = false });
block2:;
// line 166
panda$json$JSON* $tmp200 = *(&local0);
panda$core$Int64* $tmp201 = &$tmp200->$rawValue;
panda$core$Int64 $tmp202 = *$tmp201;
panda$core$Int64 $tmp203 = (panda$core$Int64) {1};
panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp202, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp206 = (panda$core$Real64*) ($tmp200->$data + 0);
panda$core$Real64 $tmp207 = *$tmp206;
*(&local1) = $tmp207;
// line 168
panda$core$Real64 $tmp208 = *(&local1);
panda$json$JSON* $tmp209 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { $tmp208, true });
block5:;
// line 171
panda$json$JSON* $tmp210 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Real64$nullable) { .nonnull = false });
block3:;
panda$core$Bit $tmp211 = panda$core$Bit$init$builtin_bit(false);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp213 = (panda$core$Int64) {161};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$Bit local1;
// line 180
$fn217 $tmp216 = ($fn217) param0->$class->vtable[2];
panda$json$JSON* $tmp218 = $tmp216(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
panda$json$JSON* $tmp219 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
*(&local0) = $tmp218;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing REF($2:panda.json.JSON?)
// line 181
panda$json$JSON* $tmp220 = *(&local0);
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit($tmp220 == NULL);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block1; else goto block2;
block1:;
// line 182
panda$json$JSON* $tmp223 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { .nonnull = false });
block2:;
// line 184
panda$json$JSON* $tmp224 = *(&local0);
panda$core$Int64* $tmp225 = &$tmp224->$rawValue;
panda$core$Int64 $tmp226 = *$tmp225;
panda$core$Int64 $tmp227 = (panda$core$Int64) {3};
panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp226, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block4; else goto block5;
block4:;
panda$core$Bit* $tmp230 = (panda$core$Bit*) ($tmp224->$data + 0);
panda$core$Bit $tmp231 = *$tmp230;
*(&local1) = $tmp231;
// line 186
panda$core$Bit $tmp232 = *(&local1);
panda$json$JSON* $tmp233 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { $tmp232, true });
block5:;
// line 189
panda$json$JSON* $tmp234 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$Bit$nullable) { .nonnull = false });
block3:;
panda$core$Bit $tmp235 = panda$core$Bit$init$builtin_bit(false);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp237 = (panda$core$Int64) {179};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s238, $tmp237, &$s239);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$core$String* local1 = NULL;
// line 198
$fn241 $tmp240 = ($fn241) param0->$class->vtable[2];
panda$json$JSON* $tmp242 = $tmp240(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
panda$json$JSON* $tmp243 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
*(&local0) = $tmp242;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($2:panda.json.JSON?)
// line 199
panda$json$JSON* $tmp244 = *(&local0);
panda$core$Bit $tmp245 = panda$core$Bit$init$builtin_bit($tmp244 == NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block1; else goto block2;
block1:;
// line 200
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$json$JSON* $tmp247 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$String*) NULL);
block2:;
// line 202
panda$json$JSON* $tmp248 = *(&local0);
panda$core$Int64* $tmp249 = &$tmp248->$rawValue;
panda$core$Int64 $tmp250 = *$tmp249;
panda$core$Int64 $tmp251 = (panda$core$Int64) {2};
panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp250, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block4; else goto block5;
block4:;
panda$core$String** $tmp254 = (panda$core$String**) ($tmp248->$data + 0);
panda$core$String* $tmp255 = *$tmp254;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
panda$core$String* $tmp256 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
*(&local1) = $tmp255;
// line 204
panda$core$String* $tmp257 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
panda$core$String* $tmp258 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing value
*(&local1) = ((panda$core$String*) NULL);
panda$json$JSON* $tmp259 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return $tmp257;
block5:;
// line 207
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$json$JSON* $tmp260 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$core$String*) NULL);
block3:;
panda$core$Bit $tmp261 = panda$core$Bit$init$builtin_bit(false);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp263 = (panda$core$Int64) {197};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s264, $tmp263, &$s265);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$collections$ListView* local1 = NULL;
// line 216
$fn267 $tmp266 = ($fn267) param0->$class->vtable[2];
panda$json$JSON* $tmp268 = $tmp266(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
panda$json$JSON* $tmp269 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
*(&local0) = $tmp268;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($2:panda.json.JSON?)
// line 217
panda$json$JSON* $tmp270 = *(&local0);
panda$core$Bit $tmp271 = panda$core$Bit$init$builtin_bit($tmp270 == NULL);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// line 218
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$json$JSON* $tmp273 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$ListView*) NULL);
block2:;
// line 220
panda$json$JSON* $tmp274 = *(&local0);
panda$core$Int64* $tmp275 = &$tmp274->$rawValue;
panda$core$Int64 $tmp276 = *$tmp275;
panda$core$Int64 $tmp277 = (panda$core$Int64) {5};
panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp276, $tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block4; else goto block5;
block4:;
panda$collections$ListView** $tmp280 = (panda$collections$ListView**) ($tmp274->$data + 0);
panda$collections$ListView* $tmp281 = *$tmp280;
*(&local1) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
panda$collections$ListView* $tmp282 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
*(&local1) = $tmp281;
// line 222
panda$collections$ListView* $tmp283 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
panda$collections$ListView* $tmp284 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing value
*(&local1) = ((panda$collections$ListView*) NULL);
panda$json$JSON* $tmp285 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return $tmp283;
block5:;
// line 225
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$json$JSON* $tmp286 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$ListView*) NULL);
block3:;
panda$core$Bit $tmp287 = panda$core$Bit$init$builtin_bit(false);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp289 = (panda$core$Int64) {215};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s290, $tmp289, &$s291);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* param0, panda$core$String* param1) {

panda$json$JSON* local0 = NULL;
panda$collections$MapView* local1 = NULL;
// line 234
$fn293 $tmp292 = ($fn293) param0->$class->vtable[2];
panda$json$JSON* $tmp294 = $tmp292(param0, param1);
*(&local0) = ((panda$json$JSON*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$json$JSON* $tmp295 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
*(&local0) = $tmp294;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($2:panda.json.JSON?)
// line 235
panda$json$JSON* $tmp296 = *(&local0);
panda$core$Bit $tmp297 = panda$core$Bit$init$builtin_bit($tmp296 == NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block1; else goto block2;
block1:;
// line 236
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) NULL)));
panda$json$JSON* $tmp299 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$MapView*) NULL);
block2:;
// line 238
panda$json$JSON* $tmp300 = *(&local0);
panda$core$Int64* $tmp301 = &$tmp300->$rawValue;
panda$core$Int64 $tmp302 = *$tmp301;
panda$core$Int64 $tmp303 = (panda$core$Int64) {4};
panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp302, $tmp303);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block4; else goto block5;
block4:;
panda$collections$MapView** $tmp306 = (panda$collections$MapView**) ($tmp300->$data + 0);
panda$collections$MapView* $tmp307 = *$tmp306;
*(&local1) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$collections$MapView* $tmp308 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
*(&local1) = $tmp307;
// line 240
panda$collections$MapView* $tmp309 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
panda$collections$MapView* $tmp310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing value
*(&local1) = ((panda$collections$MapView*) NULL);
panda$json$JSON* $tmp311 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return $tmp309;
block5:;
// line 243
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$MapView*) NULL)));
panda$json$JSON* $tmp312 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing result
*(&local0) = ((panda$json$JSON*) NULL);
return ((panda$collections$MapView*) NULL);
block3:;
panda$core$Bit $tmp313 = panda$core$Bit$init$builtin_bit(false);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp315 = (panda$core$Int64) {233};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* param0) {

panda$core$Int64 local0;
// line 252
panda$core$Int64* $tmp318 = &param0->$rawValue;
panda$core$Int64 $tmp319 = *$tmp318;
panda$core$Int64 $tmp320 = (panda$core$Int64) {0};
panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp319, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp323 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp324 = *$tmp323;
*(&local0) = $tmp324;
// line 254
panda$core$Int64 $tmp325 = *(&local0);
return $tmp325;
block3:;
// line 257
panda$core$Bit $tmp326 = panda$core$Bit$init$builtin_bit(false);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp328 = (panda$core$Int64) {257};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s329, $tmp328);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp330 = panda$core$Bit$init$builtin_bit(false);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp332 = (panda$core$Int64) {251};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s333, $tmp332, &$s334);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* param0) {

panda$core$Real64 local0;
// line 266
panda$core$Int64* $tmp335 = &param0->$rawValue;
panda$core$Int64 $tmp336 = *$tmp335;
panda$core$Int64 $tmp337 = (panda$core$Int64) {1};
panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp336, $tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block2; else goto block3;
block2:;
panda$core$Real64* $tmp340 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp341 = *$tmp340;
*(&local0) = $tmp341;
// line 268
panda$core$Real64 $tmp342 = *(&local0);
return $tmp342;
block3:;
// line 271
panda$core$Bit $tmp343 = panda$core$Bit$init$builtin_bit(false);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp345 = (panda$core$Int64) {271};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s346, $tmp345);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp347 = panda$core$Bit$init$builtin_bit(false);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp349 = (panda$core$Int64) {265};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* param0) {

panda$core$String* local0 = NULL;
// line 280
panda$core$Int64* $tmp352 = &param0->$rawValue;
panda$core$Int64 $tmp353 = *$tmp352;
panda$core$Int64 $tmp354 = (panda$core$Int64) {2};
panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp353, $tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block2; else goto block3;
block2:;
panda$core$String** $tmp357 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp358 = *$tmp357;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$String* $tmp359 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
*(&local0) = $tmp358;
// line 282
panda$core$String* $tmp360 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
panda$core$String* $tmp361 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing value
*(&local0) = ((panda$core$String*) NULL);
return $tmp360;
block3:;
// line 285
panda$core$Bit $tmp362 = panda$core$Bit$init$builtin_bit(false);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp364 = (panda$core$Int64) {285};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s365, $tmp364);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp366 = panda$core$Bit$init$builtin_bit(false);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp368 = (panda$core$Int64) {279};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s369, $tmp368, &$s370);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* param0) {

panda$core$Bit local0;
// line 294
panda$core$Int64* $tmp371 = &param0->$rawValue;
panda$core$Int64 $tmp372 = *$tmp371;
panda$core$Int64 $tmp373 = (panda$core$Int64) {3};
panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp372, $tmp373);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp376 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp377 = *$tmp376;
*(&local0) = $tmp377;
// line 296
panda$core$Bit $tmp378 = *(&local0);
return $tmp378;
block3:;
// line 299
panda$core$Bit $tmp379 = panda$core$Bit$init$builtin_bit(false);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp381 = (panda$core$Int64) {299};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s382, $tmp381);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp383 = panda$core$Bit$init$builtin_bit(false);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp385 = (panda$core$Int64) {293};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s386, $tmp385, &$s387);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* param0) {

panda$collections$MapView* local0 = NULL;
// line 308
panda$core$Int64* $tmp388 = &param0->$rawValue;
panda$core$Int64 $tmp389 = *$tmp388;
panda$core$Int64 $tmp390 = (panda$core$Int64) {4};
panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp389, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block2; else goto block3;
block2:;
panda$collections$MapView** $tmp393 = (panda$collections$MapView**) (param0->$data + 0);
panda$collections$MapView* $tmp394 = *$tmp393;
*(&local0) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
panda$collections$MapView* $tmp395 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
*(&local0) = $tmp394;
// line 310
panda$collections$MapView* $tmp396 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
panda$collections$MapView* $tmp397 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing value
*(&local0) = ((panda$collections$MapView*) NULL);
return $tmp396;
block3:;
// line 313
panda$core$Bit $tmp398 = panda$core$Bit$init$builtin_bit(false);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp400 = (panda$core$Int64) {313};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s401, $tmp400);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp402 = panda$core$Bit$init$builtin_bit(false);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp404 = (panda$core$Int64) {307};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block6:;
abort(); // unreachable

}
panda$collections$ListView* panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* param0) {

panda$collections$ListView* local0 = NULL;
// line 322
panda$core$Int64* $tmp407 = &param0->$rawValue;
panda$core$Int64 $tmp408 = *$tmp407;
panda$core$Int64 $tmp409 = (panda$core$Int64) {5};
panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp408, $tmp409);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block2; else goto block3;
block2:;
panda$collections$ListView** $tmp412 = (panda$collections$ListView**) (param0->$data + 0);
panda$collections$ListView* $tmp413 = *$tmp412;
*(&local0) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
panda$collections$ListView* $tmp414 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
*(&local0) = $tmp413;
// line 324
panda$collections$ListView* $tmp415 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
panda$collections$ListView* $tmp416 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
// unreffing value
*(&local0) = ((panda$collections$ListView*) NULL);
return $tmp415;
block3:;
// line 327
panda$core$Bit $tmp417 = panda$core$Bit$init$builtin_bit(false);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp419 = (panda$core$Int64) {327};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s420, $tmp419);
abort(); // unreachable
block4:;
goto block1;
block1:;
panda$core$Bit $tmp421 = panda$core$Bit$init$builtin_bit(false);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp423 = (panda$core$Int64) {321};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s424, $tmp423, &$s425);
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
// line 337
panda$core$Int64* $tmp426 = &param0->$rawValue;
panda$core$Int64 $tmp427 = *$tmp426;
panda$core$Int64 $tmp428 = (panda$core$Int64) {0};
panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp431 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp432 = *$tmp431;
*(&local0) = $tmp432;
// line 339
panda$core$Int64 $tmp433 = *(&local0);
panda$core$String* $tmp434 = panda$core$Int64$convert$R$panda$core$String($tmp433);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// unreffing REF($12:panda.core.String)
return $tmp434;
block3:;
panda$core$Int64 $tmp435 = (panda$core$Int64) {1};
panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp438 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp439 = *$tmp438;
*(&local1) = $tmp439;
// line 342
panda$core$Real64 $tmp440 = *(&local1);
panda$core$String* $tmp441 = panda$core$Real64$convert$R$panda$core$String($tmp440);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing REF($28:panda.core.String)
return $tmp441;
block5:;
panda$core$Int64 $tmp442 = (panda$core$Int64) {2};
panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp442);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block6; else goto block7;
block6:;
panda$core$String** $tmp445 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp446 = *$tmp445;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
panda$core$String* $tmp447 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
*(&local2) = $tmp446;
// line 345
panda$core$String* $tmp448 = *(&local2);
panda$core$String* $tmp449 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp448, &$s450);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
// unreffing REF($50:panda.core.String)
panda$core$String* $tmp451 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
return $tmp449;
block7:;
panda$core$Int64 $tmp452 = (panda$core$Int64) {3};
panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp452);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block8; else goto block9;
block8:;
panda$core$Bit* $tmp455 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp456 = *$tmp455;
*(&local3) = $tmp456;
// line 348
panda$core$Bit $tmp457 = *(&local3);
panda$core$String* $tmp458 = panda$core$Bit$convert$R$panda$core$String($tmp457);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing REF($71:panda.core.String)
return $tmp458;
block9:;
panda$core$Int64 $tmp459 = (panda$core$Int64) {4};
panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block10; else goto block11;
block10:;
panda$collections$MapView** $tmp462 = (panda$collections$MapView**) (param0->$data + 0);
panda$collections$MapView* $tmp463 = *$tmp462;
*(&local4) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
panda$collections$MapView* $tmp464 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
*(&local4) = $tmp463;
// line 351
panda$core$MutableString* $tmp465 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp465, &$s466);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
panda$core$MutableString* $tmp467 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
*(&local5) = $tmp465;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
// unreffing REF($92:panda.core.MutableString)
// line 352
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s468));
panda$core$String* $tmp469 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
*(&local6) = &$s470;
// line 353
panda$collections$MapView* $tmp471 = *(&local4);
ITable* $tmp472 = $tmp471->$class->itable;
while ($tmp472->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[3];
panda$collections$Iterator* $tmp475 = $tmp473($tmp471);
goto block12;
block12:;
ITable* $tmp476 = $tmp475->$class->itable;
while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp476 = $tmp476->next;
}
$fn478 $tmp477 = $tmp476->methods[0];
panda$core$Bit $tmp479 = $tmp477($tmp475);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block14; else goto block13;
block13:;
*(&local7) = ((panda$core$String*) NULL);
ITable* $tmp481 = $tmp475->$class->itable;
while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[1];
panda$core$Object* $tmp484 = $tmp482($tmp475);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp484)));
panda$core$String* $tmp485 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
*(&local7) = ((panda$core$String*) $tmp484);
// line 354
panda$core$MutableString* $tmp486 = *(&local5);
panda$core$String* $tmp487 = *(&local6);
panda$core$String* $tmp488 = panda$core$String$convert$R$panda$core$String($tmp487);
panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s490);
panda$core$String* $tmp491 = *(&local7);
ITable* $tmp492 = ((panda$core$Formattable*) $tmp491)->$class->itable;
while ($tmp492->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[0];
panda$core$String* $tmp495 = $tmp493(((panda$core$Formattable*) $tmp491), &$s496);
panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp489, $tmp495);
panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp497, &$s499);
panda$collections$MapView* $tmp500 = *(&local4);
panda$core$String* $tmp501 = *(&local7);
ITable* $tmp502 = $tmp500->$class->itable;
while ($tmp502->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp502 = $tmp502->next;
}
$fn504 $tmp503 = $tmp502->methods[1];
panda$core$Object* $tmp505 = $tmp503($tmp500, ((panda$core$Object*) $tmp501));
panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp498, ((panda$core$Object*) ((panda$json$JSON*) $tmp505)));
panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, &$s508);
panda$core$MutableString$append$panda$core$String($tmp486, $tmp507);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing REF($155:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
// unreffing REF($154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp505);
// unreffing REF($151:panda.collections.MapView.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing REF($145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
// unreffing REF($143:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($139:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
// unreffing REF($138:panda.core.String)
// line 355
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s509));
panda$core$String* $tmp510 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
*(&local6) = &$s511;
panda$core$Panda$unref$panda$core$Object$Q($tmp484);
// unreffing REF($127:panda.collections.Iterator.T)
panda$core$String* $tmp512 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing k
*(&local7) = ((panda$core$String*) NULL);
goto block12;
block14:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing REF($116:panda.collections.Iterator<panda.collections.MapView.K>)
// line 357
panda$core$MutableString* $tmp513 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp513, &$s514);
// line 358
panda$core$MutableString* $tmp515 = *(&local5);
panda$core$String* $tmp516 = panda$core$MutableString$finish$R$panda$core$String($tmp515);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing REF($205:panda.core.String)
panda$core$String* $tmp517 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing separator
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp518 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing result
*(&local5) = ((panda$core$MutableString*) NULL);
panda$collections$MapView* $tmp519 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing fields
*(&local4) = ((panda$collections$MapView*) NULL);
return $tmp516;
block11:;
panda$core$Int64 $tmp520 = (panda$core$Int64) {5};
panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp520);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block15; else goto block16;
block15:;
panda$collections$ListView** $tmp523 = (panda$collections$ListView**) (param0->$data + 0);
panda$collections$ListView* $tmp524 = *$tmp523;
*(&local8) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
panda$collections$ListView* $tmp525 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
*(&local8) = $tmp524;
// line 361
panda$core$MutableString* $tmp526 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp526, &$s527);
*(&local9) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
panda$core$MutableString* $tmp528 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
*(&local9) = $tmp526;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing REF($241:panda.core.MutableString)
// line 362
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s529));
panda$core$String* $tmp530 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
*(&local10) = &$s531;
// line 363
panda$collections$ListView* $tmp532 = *(&local8);
ITable* $tmp533 = ((panda$collections$Iterable*) $tmp532)->$class->itable;
while ($tmp533->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp533 = $tmp533->next;
}
$fn535 $tmp534 = $tmp533->methods[0];
panda$collections$Iterator* $tmp536 = $tmp534(((panda$collections$Iterable*) $tmp532));
goto block17;
block17:;
ITable* $tmp537 = $tmp536->$class->itable;
while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp537 = $tmp537->next;
}
$fn539 $tmp538 = $tmp537->methods[0];
panda$core$Bit $tmp540 = $tmp538($tmp536);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block19; else goto block18;
block18:;
*(&local11) = ((panda$json$JSON*) NULL);
ITable* $tmp542 = $tmp536->$class->itable;
while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[1];
panda$core$Object* $tmp545 = $tmp543($tmp536);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$json$JSON*) $tmp545)));
panda$json$JSON* $tmp546 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
*(&local11) = ((panda$json$JSON*) $tmp545);
// line 364
panda$core$MutableString* $tmp547 = *(&local9);
panda$core$String* $tmp548 = *(&local10);
panda$core$String* $tmp549 = panda$core$String$convert$R$panda$core$String($tmp548);
panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s551);
panda$json$JSON* $tmp552 = *(&local11);
panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp550, ((panda$core$Object*) $tmp552));
panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s555);
panda$core$MutableString$append$panda$core$String($tmp547, $tmp554);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
// unreffing REF($293:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
// unreffing REF($292:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($289:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing REF($288:panda.core.String)
// line 365
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s556));
panda$core$String* $tmp557 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
*(&local10) = &$s558;
panda$core$Panda$unref$panda$core$Object$Q($tmp545);
// unreffing REF($277:panda.collections.Iterator.T)
panda$json$JSON* $tmp559 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
// unreffing n
*(&local11) = ((panda$json$JSON*) NULL);
goto block17;
block19:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing REF($266:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 367
panda$core$MutableString* $tmp560 = *(&local9);
panda$core$MutableString$append$panda$core$String($tmp560, &$s561);
// line 368
panda$core$MutableString* $tmp562 = *(&local9);
panda$core$String* $tmp563 = panda$core$MutableString$finish$R$panda$core$String($tmp562);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// unreffing REF($331:panda.core.String)
panda$core$String* $tmp564 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing separator
*(&local10) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp565 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing result
*(&local9) = ((panda$core$MutableString*) NULL);
panda$collections$ListView* $tmp566 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing nodes
*(&local8) = ((panda$collections$ListView*) NULL);
return $tmp563;
block16:;
panda$core$Int64 $tmp567 = (panda$core$Int64) {6};
panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block20; else goto block21;
block20:;
// line 371
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s570));
return &$s571;
block21:;
// line 374
panda$core$Bit $tmp572 = panda$core$Bit$init$builtin_bit(false);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp574 = (panda$core$Int64) {374};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s575, $tmp574);
abort(); // unreachable
block22:;
goto block1;
block1:;
panda$core$Bit $tmp576 = panda$core$Bit$init$builtin_bit(false);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp578 = (panda$core$Int64) {336};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s579, $tmp578, &$s580);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void panda$json$JSON$cleanup(panda$json$JSON* param0) {

panda$core$Int64 local0;
panda$core$Real64 local1;
panda$core$String* local2 = NULL;
panda$core$Bit local3;
panda$collections$MapView* local4 = NULL;
panda$collections$ListView* local5 = NULL;
// line 8
panda$core$Int64* $tmp581 = &param0->$rawValue;
panda$core$Int64 $tmp582 = *$tmp581;
panda$core$Int64 $tmp583 = (panda$core$Int64) {0};
panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp586 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp587 = *$tmp586;
*(&local0) = $tmp587;
goto block1;
block3:;
panda$core$Int64 $tmp588 = (panda$core$Int64) {1};
panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp588);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block4; else goto block5;
block4:;
panda$core$Real64* $tmp591 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp592 = *$tmp591;
*(&local1) = $tmp592;
goto block1;
block5:;
panda$core$Int64 $tmp593 = (panda$core$Int64) {2};
panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block6; else goto block7;
block6:;
panda$core$String** $tmp596 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp597 = *$tmp596;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$String* $tmp598 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
*(&local2) = $tmp597;
// line 1
panda$core$String* $tmp599 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
panda$core$String* $tmp600 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
// unreffing _f0
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp601 = (panda$core$Int64) {3};
panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp601);
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block8; else goto block9;
block8:;
panda$core$Bit* $tmp604 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp605 = *$tmp604;
*(&local3) = $tmp605;
goto block1;
block9:;
panda$core$Int64 $tmp606 = (panda$core$Int64) {4};
panda$core$Bit $tmp607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp606);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block10; else goto block11;
block10:;
panda$collections$MapView** $tmp609 = (panda$collections$MapView**) (param0->$data + 0);
panda$collections$MapView* $tmp610 = *$tmp609;
*(&local4) = ((panda$collections$MapView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
panda$collections$MapView* $tmp611 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
*(&local4) = $tmp610;
// line 1
panda$collections$MapView* $tmp612 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
panda$collections$MapView* $tmp613 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing _f0
*(&local4) = ((panda$collections$MapView*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp614 = (panda$core$Int64) {5};
panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block12; else goto block13;
block12:;
panda$collections$ListView** $tmp617 = (panda$collections$ListView**) (param0->$data + 0);
panda$collections$ListView* $tmp618 = *$tmp617;
*(&local5) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
panda$collections$ListView* $tmp619 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
*(&local5) = $tmp618;
// line 1
panda$collections$ListView* $tmp620 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
panda$collections$ListView* $tmp621 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing _f0
*(&local5) = ((panda$collections$ListView*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp622 = (panda$core$Int64) {6};
panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Int64 param2) {

// line 8
panda$core$Int64* $tmp625 = &param0->$rawValue;
*$tmp625 = param1;
// line 8
panda$core$Int64* $tmp626 = (panda$core$Int64*) (param0->$data + 0);
*$tmp626 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Real64 param2) {

// line 8
panda$core$Int64* $tmp627 = &param0->$rawValue;
*$tmp627 = param1;
// line 8
panda$core$Real64* $tmp628 = (panda$core$Real64*) (param0->$data + 0);
*$tmp628 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 8
panda$core$Int64* $tmp629 = &param0->$rawValue;
*$tmp629 = param1;
// line 8
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp630 = (panda$core$String**) (param0->$data + 0);
*$tmp630 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* param0, panda$core$Int64 param1, panda$core$Bit param2) {

// line 8
panda$core$Int64* $tmp631 = &param0->$rawValue;
*$tmp631 = param1;
// line 8
panda$core$Bit* $tmp632 = (panda$core$Bit*) (param0->$data + 0);
*$tmp632 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* param0, panda$core$Int64 param1, panda$collections$MapView* param2) {

// line 8
panda$core$Int64* $tmp633 = &param0->$rawValue;
*$tmp633 = param1;
// line 8
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$MapView** $tmp634 = (panda$collections$MapView**) (param0->$data + 0);
*$tmp634 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* param0, panda$core$Int64 param1, panda$collections$ListView* param2) {

// line 8
panda$core$Int64* $tmp635 = &param0->$rawValue;
*$tmp635 = param1;
// line 8
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$ListView** $tmp636 = (panda$collections$ListView**) (param0->$data + 0);
*$tmp636 = param2;
return;

}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* param0, panda$core$Int64 param1) {

// line 8
panda$core$Int64* $tmp637 = &param0->$rawValue;
*$tmp637 = param1;
return;

}

