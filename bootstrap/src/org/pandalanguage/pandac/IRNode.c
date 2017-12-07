#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt64.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/FieldDecl.h"


org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$Object* (*$fn34)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn64)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn73)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn84)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn96)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn135)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn144)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn146)(panda$core$Object*);
typedef panda$core$String* (*$fn148)(panda$core$Object*);
typedef panda$core$String* (*$fn151)(panda$core$Object*);
typedef panda$core$String* (*$fn154)(panda$core$Object*);

static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x63\x6F\x6E\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6F\x62\x6A\x65\x63\x74\x3A\x20", 23, 1 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x44\x65\x66\x69\x6E\x69\x74\x69\x6F\x6E\x3A\x20", 26, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x3A\x20", 16, 1 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x5F\x72\x61\x6E\x67\x65\x3C", 17, 1 };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x49\x52\x4E\x6F\x64\x65\x3A", 8, 1 };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset) {
    org$pandalanguage$pandac$Type* $tmp1 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp2 = (panda$collections$Array*) malloc(40);
    $tmp2->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2->refCount.value = 1;
    panda$collections$Array$init($tmp2);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, $tmp1, NULL, ((panda$collections$ListView*) $tmp2));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$UInt64 p_payload) {
    org$pandalanguage$pandac$Type* $tmp4 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp5 = (panda$collections$Array*) malloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, $tmp4, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp5));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_payload) {
    org$pandalanguage$pandac$Type* $tmp7 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp8 = (panda$collections$Array*) malloc(40);
    $tmp8->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp8->refCount.value = 1;
    panda$collections$Array$init($tmp8);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, $tmp7, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp8));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Bit p_payload) {
    org$pandalanguage$pandac$Type* $tmp10 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp11 = (panda$collections$Array*) malloc(40);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp11->refCount.value = 1;
    panda$collections$Array$init($tmp11);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, $tmp10, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp11));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp13 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, $tmp13, NULL, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp14 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, $tmp14, p_payload, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type) {
    panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp15->refCount.value = 1;
    panda$collections$Array$init($tmp15);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, p_type, NULL, ((panda$collections$ListView*) $tmp15));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$UInt64 p_payload) {
    panda$collections$Array* $tmp17 = (panda$collections$Array*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp17->refCount.value = 1;
    panda$collections$Array$init($tmp17);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, p_type, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp17));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$String* p_payload) {
    panda$collections$Array* $tmp19 = (panda$collections$Array*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp19->refCount.value = 1;
    panda$collections$Array$init($tmp19);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, p_type, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp19));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_payload) {
    panda$collections$Array* $tmp21 = (panda$collections$Array*) malloc(40);
    $tmp21->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp21->refCount.value = 1;
    panda$collections$Array$init($tmp21);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, p_type, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp21));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_payload) {
    panda$collections$Array* $tmp23 = (panda$collections$Array*) malloc(40);
    $tmp23->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp23->refCount.value = 1;
    panda$collections$Array$init($tmp23);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, p_type, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp23));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable* p_payload) {
    panda$collections$Array* $tmp25 = (panda$collections$Array*) malloc(40);
    $tmp25->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp25->refCount.value = 1;
    panda$collections$Array$init($tmp25);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, p_type, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp25));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_offset, p_type, NULL, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->offset = p_offset;
    self->type = p_type;
    self->payload = p_payload;
    panda$collections$Array* $tmp27 = (panda$collections$Array*) malloc(40);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp27->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp27, p_children);
    self->children = $tmp27;
    panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1009 }));
    bool $tmp29 = $tmp30.value;
    if ($tmp29) goto $l31;
    ITable* $tmp32 = p_children->$class->itable;
    while ($tmp32->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp32 = $tmp32->next;
    }
    $fn34 $tmp33 = $tmp32->methods[0];
    panda$core$Object* $tmp35 = $tmp33(p_children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp36 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp37 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp35)->type, $tmp36);
    $tmp29 = $tmp37.value;
    $l31:;
    panda$core$Bit $tmp38 = { $tmp29 };
    PANDA_ASSERT($tmp38.value);
    panda$core$Bit $tmp40 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1009 }));
    bool $tmp39 = $tmp40.value;
    if ($tmp39) goto $l41;
    panda$core$Bit $tmp43 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_type)->name, &$s42);
    $tmp39 = $tmp43.value;
    $l41:;
    panda$core$Bit $tmp44 = { $tmp39 };
    PANDA_ASSERT($tmp44.value);
    panda$core$Bit $tmp46 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1009 }));
    bool $tmp45 = $tmp46.value;
    if ($tmp45) goto $l47;
    panda$core$Bit $tmp48 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_type)->kind, ((panda$core$Int64) { 17 }));
    $tmp45 = $tmp48.value;
    $l47:;
    panda$core$Bit $tmp49 = { $tmp45 };
    PANDA_ASSERT($tmp49.value);
    panda$core$Bit $tmp51 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1009 }));
    bool $tmp50 = $tmp51.value;
    if ($tmp50) goto $l52;
    ITable* $tmp53 = p_children->$class->itable;
    while ($tmp53->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp53 = $tmp53->next;
    }
    $fn55 $tmp54 = $tmp53->methods[0];
    panda$core$Object* $tmp56 = $tmp54(p_children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp57 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp56)->kind, ((panda$core$Int64) { 1040 }));
    $tmp50 = $tmp57.value;
    $l52:;
    panda$core$Bit $tmp58 = { $tmp50 };
    PANDA_ASSERT($tmp58.value);
    panda$core$Bit $tmp60 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1009 }));
    bool $tmp59 = $tmp60.value;
    if ($tmp59) goto $l61;
    ITable* $tmp62 = p_children->$class->itable;
    while ($tmp62->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp62 = $tmp62->next;
    }
    $fn64 $tmp63 = $tmp62->methods[0];
    panda$core$Object* $tmp65 = $tmp63(p_children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp66 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$IRNode*) $tmp65)->type)->kind, ((panda$core$Int64) { 17 }));
    $tmp59 = $tmp66.value;
    $l61:;
    panda$core$Bit $tmp67 = { $tmp59 };
    PANDA_ASSERT($tmp67.value);
    panda$core$Bit $tmp69 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1003 }));
    bool $tmp68 = $tmp69.value;
    if ($tmp68) goto $l70;
    ITable* $tmp71 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) p_payload))->$class->itable;
    while ($tmp71->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp71 = $tmp71->next;
    }
    $fn73 $tmp72 = $tmp71->methods[0];
    panda$core$Int64 $tmp74 = $tmp72(((panda$collections$CollectionView*) ((panda$collections$ListView*) p_payload)));
    panda$core$Bit $tmp75 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp74, ((panda$core$Int64) { 0 }));
    $tmp68 = $tmp75.value;
    $l70:;
    panda$core$Bit $tmp76 = { $tmp68 };
    PANDA_ASSERT($tmp76.value);
    PANDA_ASSERT(p_type->resolved.value);
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    panda$core$MutableString* result77;
    panda$collections$Iterator* child$Iter81;
    org$pandalanguage$pandac$IRNode* child93;
    panda$core$String* c98;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp107;
    panda$core$MutableString* result256;
    switch (self->kind.value) {
        case 1000:
        {
            panda$core$MutableString* $tmp78 = (panda$core$MutableString*) malloc(40);
            $tmp78->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp78->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp78, &$s80);
            result77 = $tmp78;
            {
                ITable* $tmp82 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp82->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp82 = $tmp82->next;
                }
                $fn84 $tmp83 = $tmp82->methods[0];
                panda$collections$Iterator* $tmp85 = $tmp83(((panda$collections$Iterable*) self->children));
                child$Iter81 = $tmp85;
                $l86:;
                ITable* $tmp88 = child$Iter81->$class->itable;
                while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp88 = $tmp88->next;
                }
                $fn90 $tmp89 = $tmp88->methods[0];
                panda$core$Bit $tmp91 = $tmp89(child$Iter81);
                panda$core$Bit $tmp92 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp91);
                if (!$tmp92.value) goto $l87;
                {
                    ITable* $tmp94 = child$Iter81->$class->itable;
                    while ($tmp94->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp94 = $tmp94->next;
                    }
                    $fn96 $tmp95 = $tmp94->methods[1];
                    panda$core$Object* $tmp97 = $tmp95(child$Iter81);
                    child93 = ((org$pandalanguage$pandac$IRNode*) $tmp97);
                    panda$core$String* $tmp99 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(child93);
                    c98 = $tmp99;
                    panda$core$Bit $tmp102 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c98, &$s101);
                    bool $tmp100 = $tmp102.value;
                    if (!$tmp100) goto $l103;
                    panda$core$Bit $tmp105 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c98, &$s104);
                    $tmp100 = $tmp105.value;
                    $l103:;
                    panda$core$Bit $tmp106 = { $tmp100 };
                    if ($tmp106.value) {
                    {
                        panda$core$String$Index $tmp108 = panda$core$String$start$R$panda$core$String$Index(c98);
                        panda$core$String$Index $tmp109 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c98, $tmp108);
                        panda$core$String$Index $tmp110 = panda$core$String$end$R$panda$core$String$Index(c98);
                        panda$core$String$Index $tmp111 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c98, $tmp110);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp107, ((panda$core$String$Index$nullable) { $tmp109, true }), ((panda$core$String$Index$nullable) { $tmp111, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp112 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c98, $tmp107);
                        panda$core$MutableString$append$panda$core$String(result77, $tmp112);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result77, ((panda$core$Object*) child93));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result77, &$s113);
                }
                goto $l86;
                $l87:;
            }
            panda$core$MutableString$append$panda$core$String(result77, &$s114);
            panda$core$String* $tmp115 = panda$core$MutableString$convert$R$panda$core$String(result77);
            return $tmp115;
        }
        break;
        case 1002:
        {
            panda$core$Int64 $tmp116 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp117 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp116, ((panda$core$Int64) { 0 }));
            if ($tmp117.value) {
            {
                panda$core$Object* $tmp119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s118, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp119)));
                panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, &$s121);
                panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
                return $tmp125;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name;
        }
        break;
        case 1003:
        {
            panda$core$Int64 $tmp126 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, ((panda$core$Int64) { 1 }));
            if ($tmp127.value) {
            {
                panda$core$Object* $tmp129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s128, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp129)));
                panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, &$s131);
                ITable* $tmp133 = ((panda$collections$ListView*) self->payload)->$class->itable;
                while ($tmp133->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp133 = $tmp133->next;
                }
                $fn135 $tmp134 = $tmp133->methods[0];
                panda$core$Object* $tmp136 = $tmp134(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp136)->value)->name);
                panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s138);
                return $tmp139;
            }
            }
            panda$core$Int64 $tmp140 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp140, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp141.value);
            ITable* $tmp142 = ((panda$collections$ListView*) self->payload)->$class->itable;
            while ($tmp142->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp142 = $tmp142->next;
            }
            $fn144 $tmp143 = $tmp142->methods[0];
            panda$core$Object* $tmp145 = $tmp143(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp145)->value)->name;
        }
        break;
        case 1001:
        {
            panda$core$String* $tmp147 = (($fn146) self->payload->$class->vtable[0])(self->payload);
            return $tmp147;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp149 = (($fn148) self->payload->$class->vtable[0])(self->payload);
            return $tmp149;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp152 = (($fn151) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s150, $tmp152);
            return $tmp153;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp155 = (($fn154) self->payload->$class->vtable[0])(self->payload);
            return $tmp155;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s156, ((panda$core$Object*) self->type));
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, &$s158);
            panda$core$Object* $tmp160 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp162 = panda$collections$Array$join$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp160)->children, &$s161);
            panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, $tmp162);
            panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
            return $tmp165;
        }
        break;
        case 1038:
        {
            panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s166, ((panda$core$Object*) self->type));
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s168);
            return $tmp169;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s170, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s172);
            panda$core$String* $tmp175 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s174);
            panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, $tmp175);
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
            return $tmp178;
        }
        break;
        case 1009:
        {
            panda$core$Object* $tmp180 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s179, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp180)));
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
            panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp183, ((panda$core$Object*) self->type));
            panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s185);
            return $tmp186;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s187, ((panda$core$Object*) ((org$pandalanguage$pandac$Variable*) self->payload)));
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s189);
            return $tmp190;
        }
        break;
        case 1023:
        {
            panda$core$Object* $tmp192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s191, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp192)));
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
            panda$core$String* $tmp196 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, $tmp196);
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            panda$core$Object* $tmp200 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp199, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp200)));
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s202);
            return $tmp203;
        }
        break;
        case 1025:
        {
            return &$s204;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp206 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s205, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp206)));
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s208);
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp209, self->payload);
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s211);
            return $tmp212;
        }
        break;
        case 1028:
        {
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s213, self->payload);
            panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s215);
            return $tmp216;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s217, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp218)));
            panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s220);
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) self->payload))->name);
            panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s223);
            return $tmp224;
        }
        break;
        case 1030:
        {
            return &$s225;
        }
        break;
        case 1021:
        {
            panda$core$Int64 $tmp226 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp226, ((panda$core$Int64) { 1 }));
            if ($tmp227.value) {
            {
                panda$core$Object* $tmp228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp229 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp228));
                return $tmp229;
            }
            }
            panda$core$Object* $tmp231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s230, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp231)));
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
            panda$core$Object* $tmp235 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp234, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp235)));
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s237);
            return $tmp238;
        }
        break;
        case 1018:
        {
            panda$core$String* $tmp241 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s240);
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s239, $tmp241);
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s243);
            return $tmp244;
        }
        break;
        case 1017:
        {
            panda$core$String* $tmp247 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s246);
            panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s245, $tmp247);
            panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s249);
            return $tmp250;
        }
        break;
        case 1008:
        {
            panda$core$String* $tmp252 = panda$collections$Array$join$R$panda$core$String(self->children);
            panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s251, $tmp252);
            panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, &$s254);
            return $tmp255;
        }
        break;
        case 1031:
        {
            panda$core$MutableString* $tmp257 = (panda$core$MutableString*) malloc(40);
            $tmp257->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp257->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp257, &$s259);
            result256 = $tmp257;
            panda$core$Object* $tmp260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp261 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp260)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp261.value) {
            {
                panda$core$Object* $tmp262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result256, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp262)));
            }
            }
            if (((panda$core$Bit$wrapper*) self->payload)->value.value) {
            {
                panda$core$MutableString$append$panda$core$String(result256, &$s263);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result256, &$s264);
            }
            }
            panda$core$Object* $tmp265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp266 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp265)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp266.value) {
            {
                panda$core$Object* $tmp267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result256, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp267)));
            }
            }
            panda$core$Object* $tmp268 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp269 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp268)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp269.value) {
            {
                panda$core$MutableString$append$panda$core$String(result256, &$s270);
                panda$core$Object* $tmp271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result256, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp271)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result256, &$s272);
            panda$core$String* $tmp273 = panda$core$MutableString$convert$R$panda$core$String(result256);
            return $tmp273;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s274, self->payload);
            panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s276);
            return $tmp277;
        }
        break;
        default:
        {
            panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s278, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s280);
            return $tmp281;
        }
    }
}

