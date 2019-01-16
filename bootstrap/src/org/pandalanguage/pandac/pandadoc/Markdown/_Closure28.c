#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure28.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Bit.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/core/RegularExpression.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn51)(panda$core$String*);
typedef panda$core$String* (*$fn53)(panda$core$Object*, panda$core$String*);
typedef void (*$fn72)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn93)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn111)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn143)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn160)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 53, -5660865079504722635, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3d\x26\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x27", 105, 4326782313018756347, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 982
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* param0) {

// line 982
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
panda$core$MutableString* local5 = NULL;
// line 983
panda$core$Int64 $tmp7 = (panda$core$Int64) {2};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
// line 984
panda$core$Int64 $tmp13 = (panda$core$Int64) {3};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
panda$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp17)));
panda$core$String* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local1) = ((panda$core$String*) $tmp17);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// unreffing REF($20:panda.collections.ListView.T)
// line 985
panda$core$Int64 $tmp19 = (panda$core$Int64) {6};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
panda$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp23)));
panda$core$String* $tmp24 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local2) = ((panda$core$String*) $tmp23);
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// unreffing REF($36:panda.collections.ListView.T)
// line 987
org$pandalanguage$pandac$pandadoc$Markdown** $tmp25 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp26 = *$tmp25;
panda$core$MutableMethod** $tmp27 = &$tmp26->linkResolver;
panda$core$MutableMethod* $tmp28 = *$tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block3;
block1:;
// line 988
org$pandalanguage$pandac$pandadoc$Markdown** $tmp31 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp32 = *$tmp31;
panda$core$MutableMethod** $tmp33 = &$tmp32->linkResolver;
panda$core$MutableMethod* $tmp34 = *$tmp33;
panda$core$String* $tmp35 = *(&local1);
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {988};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block4:;
panda$core$Bit $tmp41 = panda$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block6:;
panda$core$Int8** $tmp46 = &$tmp34->pointer;
panda$core$Int8* $tmp47 = *$tmp46;
panda$core$Object** $tmp48 = &$tmp34->target;
panda$core$Object* $tmp49 = *$tmp48;
bool $tmp50 = $tmp49 != ((panda$core$Object*) NULL);
if ($tmp50) goto block8; else goto block9;
block9:;
panda$core$String* $tmp52 = (($fn51) $tmp47)($tmp35);
*(&local3) = $tmp52;
goto block10;
block8:;
panda$core$String* $tmp54 = (($fn53) $tmp47)($tmp49, $tmp35);
*(&local3) = $tmp54;
goto block10;
block10:;
panda$core$String* $tmp55 = *(&local3);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$core$String* $tmp56 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local4) = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($93:panda.core.String?)
// line 989
panda$core$String* $tmp57 = *(&local4);
panda$core$Bit $tmp58 = panda$core$Bit$init$builtin_bit($tmp57 == NULL);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block11; else goto block12;
block11:;
// line 990
panda$io$OutputStream* $tmp60 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp61 = *(&local1);
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit($tmp61 != NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp64 = (panda$core$Int64) {990};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block13:;
panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s68, $tmp61);
panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s70);
$fn72 $tmp71 = ($fn72) $tmp60->$class->vtable[19];
$tmp71($tmp60, $tmp69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($111:panda.io.OutputStream)
// line 991
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s73));
panda$core$String* $tmp74 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
*(&local4) = &$s73;
goto block12;
block12:;
// line 993
panda$core$String* $tmp75 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$core$String* $tmp76 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
*(&local1) = $tmp75;
panda$core$String* $tmp77 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing newURL
*(&local4) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 996
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s78));
panda$core$String* $tmp79 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
*(&local1) = &$s78;
goto block2;
block2:;
// line 998
panda$core$String* $tmp80 = *(&local1);
panda$core$Bit $tmp81 = panda$core$Bit$init$builtin_bit($tmp80 != NULL);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp83 = (panda$core$Int64) {998};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s84, $tmp83, &$s85);
abort(); // unreachable
block15:;
panda$core$RegularExpression* $tmp86 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp86, &$s87);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp88 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp89 = *$tmp88;
org$pandalanguage$pandac$pandadoc$Protector** $tmp90 = &$tmp89->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp91 = *$tmp90;
$fn93 $tmp92 = ($fn93) $tmp91->$class->vtable[2];
panda$core$String* $tmp94 = $tmp92($tmp91, &$s95);
panda$core$String* $tmp96 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp80, $tmp86, $tmp94);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
panda$core$String* $tmp97 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
*(&local1) = $tmp96;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing REF($185:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
// unreffing REF($177:panda.core.RegularExpression)
// line 999
panda$core$String* $tmp98 = *(&local1);
panda$core$Bit $tmp99 = panda$core$Bit$init$builtin_bit($tmp98 != NULL);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp101 = (panda$core$Int64) {999};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block17:;
panda$core$RegularExpression* $tmp104 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp104, &$s105);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp106 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp107 = *$tmp106;
org$pandalanguage$pandac$pandadoc$Protector** $tmp108 = &$tmp107->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp109 = *$tmp108;
$fn111 $tmp110 = ($fn111) $tmp109->$class->vtable[2];
panda$core$String* $tmp112 = $tmp110($tmp109, &$s113);
panda$core$String* $tmp114 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp98, $tmp104, $tmp112);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$core$String* $tmp115 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
*(&local1) = $tmp114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($220:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($219:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($212:panda.core.RegularExpression)
// line 1000
panda$core$MutableString* $tmp116 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp116);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$core$MutableString* $tmp117 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
*(&local5) = $tmp116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($238:panda.core.MutableString)
// line 1001
panda$core$MutableString* $tmp118 = *(&local5);
panda$core$String* $tmp119 = *(&local1);
panda$core$Bit $tmp120 = panda$core$Bit$init$builtin_bit($tmp119 != NULL);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp122 = (panda$core$Int64) {1001};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s123, $tmp122, &$s124);
abort(); // unreachable
block19:;
panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s126, $tmp119);
panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, &$s128);
panda$core$MutableString$append$panda$core$String($tmp118, $tmp127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing REF($262:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($261:panda.core.String)
// line 1002
panda$core$String* $tmp129 = *(&local2);
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit($tmp129 != NULL);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block21; else goto block22;
block21:;
// line 1004
panda$core$String* $tmp132 = *(&local2);
panda$core$Bit $tmp133 = panda$core$Bit$init$builtin_bit($tmp132 != NULL);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp135 = (panda$core$Int64) {1004};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s136, $tmp135, &$s137);
abort(); // unreachable
block23:;
org$pandalanguage$pandac$pandadoc$Markdown** $tmp138 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp139 = *$tmp138;
org$pandalanguage$pandac$pandadoc$Protector** $tmp140 = &$tmp139->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp141 = *$tmp140;
$fn143 $tmp142 = ($fn143) $tmp141->$class->vtable[2];
panda$core$String* $tmp144 = $tmp142($tmp141, &$s145);
panda$core$String* $tmp146 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp132, &$s147, $tmp144);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$String* $tmp148 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
*(&local2) = $tmp146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($292:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($291:panda.core.String)
// line 1005
panda$core$String* $tmp149 = *(&local2);
panda$core$Bit $tmp150 = panda$core$Bit$init$builtin_bit($tmp149 != NULL);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp152 = (panda$core$Int64) {1005};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block25:;
org$pandalanguage$pandac$pandadoc$Markdown** $tmp155 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp156 = *$tmp155;
org$pandalanguage$pandac$pandadoc$Protector** $tmp157 = &$tmp156->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp158 = *$tmp157;
$fn160 $tmp159 = ($fn160) $tmp158->$class->vtable[2];
panda$core$String* $tmp161 = $tmp159($tmp158, &$s162);
panda$core$String* $tmp163 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp149, &$s164, $tmp161);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$String* $tmp165 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local2) = $tmp163;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing REF($322:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($321:panda.core.String)
// line 1006
panda$core$String* $tmp166 = *(&local2);
panda$core$Bit $tmp167 = panda$core$Bit$init$builtin_bit($tmp166 != NULL);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp169 = (panda$core$Int64) {1006};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s170, $tmp169, &$s171);
abort(); // unreachable
block27:;
panda$core$String* $tmp172 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp166, &$s173, &$s174);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
panda$core$String* $tmp175 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
*(&local2) = $tmp172;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($346:panda.core.String)
// line 1007
panda$core$MutableString* $tmp176 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp176, &$s177);
// line 1008
panda$core$MutableString* $tmp178 = *(&local5);
panda$core$String* $tmp179 = *(&local2);
panda$core$Bit $tmp180 = panda$core$Bit$init$builtin_bit($tmp179 != NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp182 = (panda$core$Int64) {1008};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s183, $tmp182, &$s184);
abort(); // unreachable
block29:;
panda$core$MutableString$append$panda$core$String($tmp178, $tmp179);
// line 1009
panda$core$MutableString* $tmp185 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp185, &$s186);
goto block22;
block22:;
// line 1011
panda$core$MutableString* $tmp187 = *(&local5);
panda$core$String* $tmp188 = *(&local0);
panda$core$Bit $tmp189 = panda$core$Bit$init$builtin_bit($tmp188 != NULL);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp191 = (panda$core$Int64) {1011};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s192, $tmp191, &$s193);
abort(); // unreachable
block31:;
panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s195, $tmp188);
panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s197);
panda$core$MutableString$append$panda$core$String($tmp187, $tmp196);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($388:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($387:panda.core.String)
// line 1012
panda$core$MutableString* $tmp198 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp198, &$s199);
// line 1013
panda$core$MutableString* $tmp200 = *(&local5);
panda$core$String* $tmp201 = panda$core$MutableString$convert$R$panda$core$String($tmp200);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($401:panda.core.String)
panda$core$MutableString* $tmp202 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing result
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp203 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing title
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp204 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing url
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp205 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing linkText
*(&local0) = ((panda$core$String*) NULL);
return $tmp201;

}

