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
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/FieldDecl.h"


org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$collections$Iterator* (*$fn38)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn44)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn50)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn91)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn98)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn101)(panda$core$Object*);
typedef panda$core$String* (*$fn104)(panda$core$Object*);
typedef panda$core$String* (*$fn108)(panda$core$Object*);
typedef panda$core$String* (*$fn112)(panda$core$Object*);

static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x63\x6F\x6E\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6F\x62\x6A\x65\x63\x74\x3A\x20", 23, 1 };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x44\x65\x66\x69\x6E\x69\x74\x69\x6F\x6E\x3A\x20", 26, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x3A\x20", 16, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x5F\x72\x61\x6E\x67\x65\x3C", 17, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x49\x52\x4E\x6F\x64\x65\x3A", 8, 1 };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

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
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    panda$core$Int64 $match$533829;
    panda$core$MutableString* result31;
    panda$collections$Iterator* child$Iter35;
    org$pandalanguage$pandac$IRNode* child47;
    panda$core$String* c52;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp61;
    panda$core$MutableString* result230;
    {
        $match$533829 = self->kind;
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1000 }));
        if ($tmp30.value) {
        {
            panda$core$MutableString* $tmp32 = (panda$core$MutableString*) malloc(40);
            $tmp32->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp32->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp32, &$s34);
            result31 = $tmp32;
            {
                ITable* $tmp36 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp36 = $tmp36->next;
                }
                $fn38 $tmp37 = $tmp36->methods[0];
                panda$collections$Iterator* $tmp39 = $tmp37(((panda$collections$Iterable*) self->children));
                child$Iter35 = $tmp39;
                $l40:;
                ITable* $tmp42 = child$Iter35->$class->itable;
                while ($tmp42->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp42 = $tmp42->next;
                }
                $fn44 $tmp43 = $tmp42->methods[0];
                panda$core$Bit $tmp45 = $tmp43(child$Iter35);
                panda$core$Bit $tmp46 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp45);
                if (!$tmp46.value) goto $l41;
                {
                    ITable* $tmp48 = child$Iter35->$class->itable;
                    while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp48 = $tmp48->next;
                    }
                    $fn50 $tmp49 = $tmp48->methods[1];
                    panda$core$Object* $tmp51 = $tmp49(child$Iter35);
                    child47 = ((org$pandalanguage$pandac$IRNode*) $tmp51);
                    panda$core$String* $tmp53 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(child47);
                    c52 = $tmp53;
                    panda$core$Bit $tmp56 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c52, &$s55);
                    bool $tmp54 = $tmp56.value;
                    if (!$tmp54) goto $l57;
                    panda$core$Bit $tmp59 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c52, &$s58);
                    $tmp54 = $tmp59.value;
                    $l57:;
                    panda$core$Bit $tmp60 = { $tmp54 };
                    if ($tmp60.value) {
                    {
                        panda$core$String$Index $tmp62 = panda$core$String$start$R$panda$core$String$Index(c52);
                        panda$core$String$Index $tmp63 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c52, $tmp62);
                        panda$core$String$Index $tmp64 = panda$core$String$end$R$panda$core$String$Index(c52);
                        panda$core$String$Index $tmp65 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c52, $tmp64);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp61, ((panda$core$String$Index$nullable) { $tmp63, true }), ((panda$core$String$Index$nullable) { $tmp65, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp66 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c52, $tmp61);
                        panda$core$MutableString$append$panda$core$String(result31, $tmp66);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result31, ((panda$core$Object*) child47));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result31, &$s67);
                }
                goto $l40;
                $l41:;
            }
            panda$core$MutableString$append$panda$core$String(result31, &$s68);
            panda$core$String* $tmp69 = panda$core$MutableString$convert$R$panda$core$String(result31);
            return $tmp69;
        }
        }
        else {
        panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1002 }));
        if ($tmp70.value) {
        {
            panda$core$Int64 $tmp71 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp72 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp71, ((panda$core$Int64) { 0 }));
            if ($tmp72.value) {
            {
                panda$core$Object* $tmp74 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s73, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp74)));
                panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp75, &$s76);
                panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
                panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp78, &$s79);
                return $tmp80;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1003 }));
        if ($tmp81.value) {
        {
            panda$core$Int64 $tmp82 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp82, ((panda$core$Int64) { 1 }));
            if ($tmp83.value) {
            {
                panda$core$Object* $tmp85 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s84, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp85)));
                panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
                ITable* $tmp89 = ((panda$collections$ListView*) self->payload)->$class->itable;
                while ($tmp89->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp89 = $tmp89->next;
                }
                $fn91 $tmp90 = $tmp89->methods[0];
                panda$core$Object* $tmp92 = $tmp90(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp92)->value)->name);
                panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
                return $tmp95;
            }
            }
            ITable* $tmp96 = ((panda$collections$ListView*) self->payload)->$class->itable;
            while ($tmp96->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp96 = $tmp96->next;
            }
            $fn98 $tmp97 = $tmp96->methods[0];
            panda$core$Object* $tmp99 = $tmp97(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp99)->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1001 }));
        if ($tmp100.value) {
        {
            panda$core$String* $tmp102 = (($fn101) self->payload->$class->vtable[0])(self->payload);
            return $tmp102;
        }
        }
        else {
        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1004 }));
        if ($tmp103.value) {
        {
            panda$core$String* $tmp105 = (($fn104) self->payload->$class->vtable[0])(self->payload);
            return $tmp105;
        }
        }
        else {
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1032 }));
        if ($tmp106.value) {
        {
            panda$core$String* $tmp109 = (($fn108) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s107, $tmp109);
            return $tmp110;
        }
        }
        else {
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1011 }));
        if ($tmp111.value) {
        {
            panda$core$String* $tmp113 = (($fn112) self->payload->$class->vtable[0])(self->payload);
            return $tmp113;
        }
        }
        else {
        panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1010 }));
        if ($tmp114.value) {
        {
            panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s115, ((panda$core$Object*) self->type));
            panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s117);
            panda$core$Object* $tmp119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp121 = panda$collections$Array$join$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp119)->children, &$s120);
            panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, $tmp121);
            panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
            return $tmp124;
        }
        }
        else {
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1038 }));
        if ($tmp125.value) {
        {
            panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s126, ((panda$core$Object*) self->type));
            panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s128);
            return $tmp129;
        }
        }
        else {
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1005 }));
        if ($tmp130.value) {
        {
            panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s131, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
            panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s133);
            panda$core$String* $tmp136 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s135);
            panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, $tmp136);
            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s138);
            return $tmp139;
        }
        }
        else {
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1009 }));
        if ($tmp140.value) {
        {
            panda$core$Object* $tmp142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s141, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp142)));
            panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s144);
            panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp145, ((panda$core$Object*) self->type));
            panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s147);
            return $tmp148;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1016 }));
        if ($tmp149.value) {
        {
            panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s150, ((panda$core$Object*) ((org$pandalanguage$pandac$Variable*) self->payload)));
            panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s152);
            return $tmp153;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1023 }));
        if ($tmp154.value) {
        {
            panda$core$Object* $tmp156 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s155, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp156)));
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, &$s158);
            panda$core$String* $tmp160 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, $tmp160);
            panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp161, &$s162);
            panda$core$Object* $tmp164 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp163, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp164)));
            panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, &$s166);
            return $tmp167;
        }
        }
        else {
        panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1025 }));
        if ($tmp168.value) {
        {
            return &$s169;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1027 }));
        if ($tmp170.value) {
        {
            panda$core$Object* $tmp172 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s171, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp172)));
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
            panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp175, self->payload);
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
            return $tmp178;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1028 }));
        if ($tmp179.value) {
        {
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s180, self->payload);
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
            return $tmp183;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1026 }));
        if ($tmp184.value) {
        {
            panda$core$Object* $tmp186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s185, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp186)));
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) self->payload))->name);
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s191);
            return $tmp192;
        }
        }
        else {
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1030 }));
        if ($tmp193.value) {
        {
            return &$s194;
        }
        }
        else {
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1021 }));
        if ($tmp195.value) {
        {
            panda$core$Int64 $tmp196 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp196, ((panda$core$Int64) { 1 }));
            if ($tmp197.value) {
            {
                panda$core$Object* $tmp198 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp199 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp198));
                return $tmp199;
            }
            }
            panda$core$Object* $tmp201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s200, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp201)));
            panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s203);
            panda$core$Object* $tmp205 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp204, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp205)));
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s207);
            return $tmp208;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1018 }));
        if ($tmp209.value) {
        {
            panda$core$String* $tmp212 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s211);
            panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s210, $tmp212);
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, &$s214);
            return $tmp215;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1017 }));
        if ($tmp216.value) {
        {
            panda$core$String* $tmp219 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s218);
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s217, $tmp219);
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
            return $tmp222;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1008 }));
        if ($tmp223.value) {
        {
            panda$core$String* $tmp225 = panda$collections$Array$join$R$panda$core$String(self->children);
            panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s224, $tmp225);
            panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s227);
            return $tmp228;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1031 }));
        if ($tmp229.value) {
        {
            panda$core$MutableString* $tmp231 = (panda$core$MutableString*) malloc(40);
            $tmp231->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp231->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp231, &$s233);
            result230 = $tmp231;
            panda$core$Object* $tmp234 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp235 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp234)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp235.value) {
            {
                panda$core$Object* $tmp236 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result230, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp236)));
            }
            }
            if (((panda$core$Bit$wrapper*) self->payload)->value.value) {
            {
                panda$core$MutableString$append$panda$core$String(result230, &$s237);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result230, &$s238);
            }
            }
            panda$core$Object* $tmp239 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp240 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp239)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp240.value) {
            {
                panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result230, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp241)));
            }
            }
            panda$core$Object* $tmp242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp243 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp242)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp243.value) {
            {
                panda$core$MutableString$append$panda$core$String(result230, &$s244);
                panda$core$Object* $tmp245 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result230, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp245)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result230, &$s246);
            panda$core$String* $tmp247 = panda$core$MutableString$convert$R$panda$core$String(result230);
            return $tmp247;
        }
        }
        else {
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533829, ((panda$core$Int64) { 1033 }));
        if ($tmp248.value) {
        {
            panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s249, self->payload);
            panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s251);
            return $tmp252;
        }
        }
        else {
        {
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s253, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, &$s255);
            return $tmp256;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}

