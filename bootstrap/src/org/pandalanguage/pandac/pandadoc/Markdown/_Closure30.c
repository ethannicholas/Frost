#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure30.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/RegularExpression.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/core/Equatable.h"
#include "panda/core/MutableMethod.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn62)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn74)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn99)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn109)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn121)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn181)(panda$core$String*);
typedef panda$core$String* (*$fn183)(panda$core$Object*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x30", 53, -5660865079504722542, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x27", 153, 1822096380931976951, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x27", 153, 1822096380931976951, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3d\x26\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x27", 105, 4326782313018756347, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 73, -4610694383028287319, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 1025
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* param0) {

// line 1025
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* local4 = NULL;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$String* local7 = NULL;
panda$core$Bit local8;
panda$core$String* local9 = NULL;
panda$core$String* local10 = NULL;
// line 1026
*(&local0) = ((panda$core$String*) NULL);
// line 1027
panda$core$Int64 $tmp7 = (panda$core$Int64) {1};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
panda$core$String* $tmp12 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local1) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($6:panda.collections.ListView.T)
// line 1028
panda$core$Int64 $tmp13 = (panda$core$Int64) {2};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
panda$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp17)));
panda$core$String* $tmp18 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local2) = ((panda$core$String*) $tmp17);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// unreffing REF($22:panda.collections.ListView.T)
// line 1029
panda$core$String* $tmp19 = *(&local2);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$String* $tmp20 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
*(&local3) = $tmp19;
// line 1030
panda$core$String* $tmp21 = *(&local3);
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit($tmp21 != NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp24 = (panda$core$Int64) {1030};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block1:;
panda$core$RegularExpression* $tmp27 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp27, &$s28);
panda$core$String* $tmp29 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp21, $tmp27, &$s30);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$String* $tmp31 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
*(&local3) = $tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($53:panda.core.RegularExpression)
// line 1031
org$pandalanguage$pandac$pandadoc$Markdown** $tmp32 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp33 = *$tmp32;
panda$collections$HashMap** $tmp34 = &$tmp33->linkDefinitions;
panda$collections$HashMap* $tmp35 = *$tmp34;
panda$core$String* $tmp36 = *(&local3);
panda$core$Bit $tmp37 = panda$core$Bit$init$builtin_bit($tmp36 != NULL);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp39 = (panda$core$Int64) {1031};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s40, $tmp39, &$s41);
abort(); // unreachable
block3:;
panda$core$Object* $tmp42 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp35, ((panda$collections$Key*) $tmp36));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp42)));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp43 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp42);
panda$core$Panda$unref$panda$core$Object$Q($tmp42);
// unreffing REF($85:panda.collections.HashMap.V?)
// line 1032
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp44 = *(&local4);
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit($tmp44 != NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block5; else goto block7;
block5:;
// line 1033
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp47 = *(&local4);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit($tmp47 != NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {1033};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block8:;
panda$core$String** $tmp53 = &$tmp47->url;
panda$core$String* $tmp54 = *$tmp53;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$core$String* $tmp55 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
*(&local5) = $tmp54;
// line 1035
panda$core$String* $tmp56 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp57 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp58 = *$tmp57;
org$pandalanguage$pandac$pandadoc$Protector** $tmp59 = &$tmp58->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp60 = *$tmp59;
$fn62 $tmp61 = ($fn62) $tmp60->$class->vtable[2];
panda$core$String* $tmp63 = $tmp61($tmp60, &$s64);
panda$core$String* $tmp65 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp56, &$s66, $tmp63);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$String* $tmp67 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
*(&local5) = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($130:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing REF($129:panda.core.String)
// line 1036
panda$core$String* $tmp68 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp69 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp70 = *$tmp69;
org$pandalanguage$pandac$pandadoc$Protector** $tmp71 = &$tmp70->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp72 = *$tmp71;
$fn74 $tmp73 = ($fn74) $tmp72->$class->vtable[2];
panda$core$String* $tmp75 = $tmp73($tmp72, &$s76);
panda$core$String* $tmp77 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp68, &$s78, $tmp75);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$String* $tmp79 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
*(&local5) = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($151:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($150:panda.core.String)
// line 1037
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp80 = *(&local4);
panda$core$Bit $tmp81 = panda$core$Bit$init$builtin_bit($tmp80 != NULL);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp83 = (panda$core$Int64) {1037};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s84, $tmp83, &$s85);
abort(); // unreachable
block10:;
panda$core$String** $tmp86 = &$tmp80->title;
panda$core$String* $tmp87 = *$tmp86;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$String* $tmp88 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local6) = $tmp87;
// line 1038
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s89));
panda$core$String* $tmp90 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
*(&local7) = &$s91;
// line 1039
panda$core$String* $tmp92 = *(&local6);
panda$core$Bit $tmp93 = panda$core$Bit$init$builtin_bit(true);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block14; else goto block15;
block14:;
panda$core$String* $tmp95 = *(&local6);
ITable* $tmp97 = ((panda$core$Equatable*) $tmp95)->$class->itable;
while ($tmp97->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[1];
panda$core$Bit $tmp100 = $tmp98(((panda$core$Equatable*) $tmp95), ((panda$core$Equatable*) &$s96));
*(&local8) = $tmp100;
goto block16;
block15:;
*(&local8) = $tmp93;
goto block16;
block16:;
panda$core$Bit $tmp101 = *(&local8);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block12; else goto block13;
block12:;
// line 1041
panda$core$String* $tmp103 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp104 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp105 = *$tmp104;
org$pandalanguage$pandac$pandadoc$Protector** $tmp106 = &$tmp105->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp107 = *$tmp106;
$fn109 $tmp108 = ($fn109) $tmp107->$class->vtable[2];
panda$core$String* $tmp110 = $tmp108($tmp107, &$s111);
panda$core$String* $tmp112 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp103, &$s113, $tmp110);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$String* $tmp114 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
*(&local6) = $tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($217:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($216:panda.core.String)
// line 1042
panda$core$String* $tmp115 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp116 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp117 = *$tmp116;
org$pandalanguage$pandac$pandadoc$Protector** $tmp118 = &$tmp117->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp119 = *$tmp118;
$fn121 $tmp120 = ($fn121) $tmp119->$class->vtable[2];
panda$core$String* $tmp122 = $tmp120($tmp119, &$s123);
panda$core$String* $tmp124 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp115, &$s125, $tmp122);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$String* $tmp126 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
*(&local6) = $tmp124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($238:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($237:panda.core.String)
// line 1043
panda$core$String* $tmp127 = *(&local6);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s129, $tmp127);
panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s131);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
panda$core$String* $tmp132 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
*(&local7) = $tmp130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($254:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($253:panda.core.String)
goto block13;
block13:;
// line 1045
panda$core$String* $tmp133 = *(&local5);
panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s135, $tmp133);
panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s137);
panda$core$String* $tmp138 = *(&local7);
panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, $tmp138);
panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp139, &$s141);
panda$core$String* $tmp142 = *(&local2);
panda$core$Bit $tmp143 = panda$core$Bit$init$builtin_bit($tmp142 != NULL);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp145 = (panda$core$Int64) {1045};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block17:;
panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, $tmp142);
panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s150);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
panda$core$String* $tmp151 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
*(&local0) = $tmp149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing REF($285:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing REF($284:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($274:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($273:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($271:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($270:panda.core.String)
panda$core$String* $tmp152 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing titleTag
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp153 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing title
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp154 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing url
*(&local5) = ((panda$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 1048
org$pandalanguage$pandac$pandadoc$Markdown** $tmp155 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp156 = *$tmp155;
panda$core$MutableMethod** $tmp157 = &$tmp156->linkResolver;
panda$core$MutableMethod* $tmp158 = *$tmp157;
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit($tmp158 != NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block19; else goto block21;
block19:;
// line 1049
org$pandalanguage$pandac$pandadoc$Markdown** $tmp161 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp162 = *$tmp161;
panda$core$MutableMethod** $tmp163 = &$tmp162->linkResolver;
panda$core$MutableMethod* $tmp164 = *$tmp163;
panda$core$String* $tmp165 = *(&local2);
panda$core$Bit $tmp166 = panda$core$Bit$init$builtin_bit($tmp165 != NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp168 = (panda$core$Int64) {1049};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s169, $tmp168, &$s170);
abort(); // unreachable
block22:;
panda$core$Bit $tmp171 = panda$core$Bit$init$builtin_bit($tmp164 != NULL);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp173 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s174, $tmp173, &$s175);
abort(); // unreachable
block24:;
panda$core$Int8** $tmp176 = &$tmp164->pointer;
panda$core$Int8* $tmp177 = *$tmp176;
panda$core$Object** $tmp178 = &$tmp164->target;
panda$core$Object* $tmp179 = *$tmp178;
bool $tmp180 = $tmp179 != ((panda$core$Object*) NULL);
if ($tmp180) goto block26; else goto block27;
block27:;
panda$core$String* $tmp182 = (($fn181) $tmp177)($tmp165);
*(&local9) = $tmp182;
goto block28;
block26:;
panda$core$String* $tmp184 = (($fn183) $tmp177)($tmp179, $tmp165);
*(&local9) = $tmp184;
goto block28;
block28:;
panda$core$String* $tmp185 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$String* $tmp186 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
*(&local0) = $tmp185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing REF($373:panda.core.String?)
// line 1050
panda$core$String* $tmp187 = *(&local0);
panda$core$Bit $tmp188 = panda$core$Bit$init$builtin_bit($tmp187 != NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block29; else goto block31;
block29:;
// line 1051
panda$core$String* $tmp190 = *(&local2);
panda$core$Bit $tmp191 = panda$core$Bit$init$builtin_bit($tmp190 != NULL);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp193 = (panda$core$Int64) {1051};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s194, $tmp193, &$s195);
abort(); // unreachable
block32:;
panda$core$String* $tmp196 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp190, &$s197, &$s198);
panda$core$String* $tmp199 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp196, &$s200, &$s201);
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
panda$core$String* $tmp202 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
*(&local10) = $tmp199;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing REF($400:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($399:panda.core.String)
// line 1052
panda$core$String* $tmp203 = *(&local0);
panda$core$Bit $tmp204 = panda$core$Bit$init$builtin_bit($tmp203 != NULL);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp206 = (panda$core$Int64) {1052};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s207, $tmp206, &$s208);
abort(); // unreachable
block34:;
panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s210, $tmp203);
panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s212);
panda$core$String* $tmp213 = *(&local10);
panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, $tmp213);
panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s216);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
panda$core$String* $tmp217 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
*(&local0) = $tmp215;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($428:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($427:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($425:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing REF($424:panda.core.String)
panda$core$String* $tmp218 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing escaped
*(&local10) = ((panda$core$String*) NULL);
goto block30;
block31:;
// line 1
// line 1055
panda$core$String* $tmp219 = *(&local2);
panda$core$Bit $tmp220 = panda$core$Bit$init$builtin_bit($tmp219 != NULL);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp222 = (panda$core$Int64) {1055};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s223, $tmp222, &$s224);
abort(); // unreachable
block36:;
panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s226, $tmp219);
panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s228);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
panda$core$String* $tmp229 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
*(&local0) = $tmp227;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing REF($466:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing REF($465:panda.core.String)
goto block30;
block30:;
goto block20;
block21:;
// line 1
// line 1059
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s230));
panda$core$String* $tmp231 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
*(&local0) = &$s230;
goto block20;
block20:;
goto block6;
block6:;
// line 1062
panda$core$String* $tmp232 = *(&local0);
panda$core$Bit $tmp233 = panda$core$Bit$init$builtin_bit($tmp232 != NULL);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp235 = (panda$core$Int64) {1062};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s236, $tmp235, &$s237);
abort(); // unreachable
block38:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp238 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing defn
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$String* $tmp239 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing id
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp240 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing linkText
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp241 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing wholeMatch
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp242 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing replacementText
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$Object*) $tmp232);

}

