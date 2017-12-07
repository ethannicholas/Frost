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
#include "panda/core/SpecializedRange.LTpanda/core/String/Index.Q.GT.h"
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
typedef panda$core$String* (*$fn53)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn68)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn69)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn71)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn73)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn74)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn97)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn104)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn107)(panda$core$Object*);
typedef panda$core$String* (*$fn110)(panda$core$Object*);
typedef panda$core$String* (*$fn114)(panda$core$Object*);
typedef panda$core$String* (*$fn118)(panda$core$Object*);
typedef panda$core$String* (*$fn205)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn244)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn246)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn248)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn252)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn256)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn258)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn260)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn261)(panda$core$MutableString*);

static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x63\x6F\x6E\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6F\x62\x6A\x65\x63\x74\x3A\x20", 23, 1 };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x44\x65\x66\x69\x6E\x69\x74\x69\x6F\x6E\x3A\x20", 26, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x3A\x20", 16, 1 };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x5F\x72\x61\x6E\x67\x65\x3C", 17, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x49\x52\x4E\x6F\x64\x65\x3A", 8, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

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
    panda$core$Int64 $match$533129;
    panda$core$MutableString* result31;
    panda$collections$Iterator* child$Iter35;
    org$pandalanguage$pandac$IRNode* child47;
    panda$core$String* c52;
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT $tmp62;
    panda$core$MutableString* result237;
    {
        $match$533129 = self->kind;
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1000 }));
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
                    panda$core$String* $tmp54 = (($fn53) child47->$class->vtable[0])(child47);
                    c52 = $tmp54;
                    panda$core$Bit $tmp57 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c52, &$s56);
                    bool $tmp55 = $tmp57.value;
                    if (!$tmp55) goto $l58;
                    panda$core$Bit $tmp60 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c52, &$s59);
                    $tmp55 = $tmp60.value;
                    $l58:;
                    panda$core$Bit $tmp61 = { $tmp55 };
                    if ($tmp61.value) {
                    {
                        panda$core$String$Index $tmp63 = panda$core$String$start$R$panda$core$String$Index(c52);
                        panda$core$String$Index $tmp64 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c52, $tmp63);
                        panda$core$String$Index $tmp65 = panda$core$String$end$R$panda$core$String$Index(c52);
                        panda$core$String$Index $tmp66 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c52, $tmp65);
                        panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp62, ((panda$core$String$Index$nullable) { $tmp64, true }), ((panda$core$String$Index$nullable) { $tmp66, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp67 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c52, $tmp62);
                        (($fn68) result31->$class->vtable[3])(result31, $tmp67);
                    }
                    }
                    else {
                    {
                        (($fn69) result31->$class->vtable[5])(result31, ((panda$core$Object*) child47));
                    }
                    }
                    (($fn71) result31->$class->vtable[3])(result31, &$s70);
                }
                goto $l40;
                $l41:;
            }
            (($fn73) result31->$class->vtable[3])(result31, &$s72);
            panda$core$String* $tmp75 = (($fn74) result31->$class->vtable[0])(result31);
            return $tmp75;
        }
        }
        else {
        panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1002 }));
        if ($tmp76.value) {
        {
            panda$core$Int64 $tmp77 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp77, ((panda$core$Int64) { 0 }));
            if ($tmp78.value) {
            {
                panda$core$Object* $tmp80 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s79, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp80)));
                panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, &$s82);
                panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
                panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s85);
                return $tmp86;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1003 }));
        if ($tmp87.value) {
        {
            panda$core$Int64 $tmp88 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp88, ((panda$core$Int64) { 1 }));
            if ($tmp89.value) {
            {
                panda$core$Object* $tmp91 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s90, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp91)));
                panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s93);
                ITable* $tmp95 = ((panda$collections$ListView*) self->payload)->$class->itable;
                while ($tmp95->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp95 = $tmp95->next;
                }
                $fn97 $tmp96 = $tmp95->methods[0];
                panda$core$Object* $tmp98 = $tmp96(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp98)->value)->name);
                panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s100);
                return $tmp101;
            }
            }
            ITable* $tmp102 = ((panda$collections$ListView*) self->payload)->$class->itable;
            while ($tmp102->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp102 = $tmp102->next;
            }
            $fn104 $tmp103 = $tmp102->methods[0];
            panda$core$Object* $tmp105 = $tmp103(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp105)->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1001 }));
        if ($tmp106.value) {
        {
            panda$core$String* $tmp108 = (($fn107) self->payload->$class->vtable[0])(self->payload);
            return $tmp108;
        }
        }
        else {
        panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1004 }));
        if ($tmp109.value) {
        {
            panda$core$String* $tmp111 = (($fn110) self->payload->$class->vtable[0])(self->payload);
            return $tmp111;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1032 }));
        if ($tmp112.value) {
        {
            panda$core$String* $tmp115 = (($fn114) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s113, $tmp115);
            return $tmp116;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1011 }));
        if ($tmp117.value) {
        {
            panda$core$String* $tmp119 = (($fn118) self->payload->$class->vtable[0])(self->payload);
            return $tmp119;
        }
        }
        else {
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1010 }));
        if ($tmp120.value) {
        {
            panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s121, ((panda$core$Object*) self->type));
            panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
            panda$core$Object* $tmp125 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp127 = panda$collections$Array$join$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp125)->children, &$s126);
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, $tmp127);
            panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
            return $tmp130;
        }
        }
        else {
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1038 }));
        if ($tmp131.value) {
        {
            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s132, ((panda$core$Object*) self->type));
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
            return $tmp135;
        }
        }
        else {
        panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1005 }));
        if ($tmp136.value) {
        {
            panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s137, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s139);
            panda$core$String* $tmp142 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s141);
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, $tmp142);
            panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s144);
            return $tmp145;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1009 }));
        if ($tmp146.value) {
        {
            panda$core$Object* $tmp148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s147, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp148)));
            panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, &$s150);
            panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp151, ((panda$core$Object*) self->type));
            panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s153);
            return $tmp154;
        }
        }
        else {
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1016 }));
        if ($tmp155.value) {
        {
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s156, ((panda$core$Object*) ((org$pandalanguage$pandac$Variable*) self->payload)));
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, &$s158);
            return $tmp159;
        }
        }
        else {
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1023 }));
        if ($tmp160.value) {
        {
            panda$core$Object* $tmp162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s161, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp162)));
            panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
            panda$core$String* $tmp166 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, $tmp166);
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s168);
            panda$core$Object* $tmp170 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp169, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp170)));
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s172);
            return $tmp173;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1025 }));
        if ($tmp174.value) {
        {
            return &$s175;
        }
        }
        else {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1027 }));
        if ($tmp176.value) {
        {
            panda$core$Object* $tmp178 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s177, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp178)));
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s180);
            panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp181, self->payload);
            panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, &$s183);
            return $tmp184;
        }
        }
        else {
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1028 }));
        if ($tmp185.value) {
        {
            panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s186, self->payload);
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
            return $tmp189;
        }
        }
        else {
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1026 }));
        if ($tmp190.value) {
        {
            panda$core$Object* $tmp192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s191, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp192)));
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) self->payload))->name);
            panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
            return $tmp198;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1030 }));
        if ($tmp199.value) {
        {
            return &$s200;
        }
        }
        else {
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1021 }));
        if ($tmp201.value) {
        {
            panda$core$Int64 $tmp202 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp202, ((panda$core$Int64) { 1 }));
            if ($tmp203.value) {
            {
                panda$core$Object* $tmp204 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp206 = (($fn205) ((org$pandalanguage$pandac$IRNode*) $tmp204)->$class->vtable[0])(((org$pandalanguage$pandac$IRNode*) $tmp204));
                return $tmp206;
            }
            }
            panda$core$Object* $tmp208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s207, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp208)));
            panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s210);
            panda$core$Object* $tmp212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp211, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp212)));
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, &$s214);
            return $tmp215;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1018 }));
        if ($tmp216.value) {
        {
            panda$core$String* $tmp219 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s218);
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s217, $tmp219);
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
            return $tmp222;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1017 }));
        if ($tmp223.value) {
        {
            panda$core$String* $tmp226 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s225);
            panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s224, $tmp226);
            panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, &$s228);
            return $tmp229;
        }
        }
        else {
        panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1008 }));
        if ($tmp230.value) {
        {
            panda$core$String* $tmp232 = panda$collections$Array$join$R$panda$core$String(self->children);
            panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s231, $tmp232);
            panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp233, &$s234);
            return $tmp235;
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1031 }));
        if ($tmp236.value) {
        {
            panda$core$MutableString* $tmp238 = (panda$core$MutableString*) malloc(40);
            $tmp238->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp238->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp238, &$s240);
            result237 = $tmp238;
            panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp242 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp241)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp242.value) {
            {
                panda$core$Object* $tmp243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                (($fn244) result237->$class->vtable[5])(result237, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp243)));
            }
            }
            if (((panda$core$Bit$wrapper*) self->payload)->value.value) {
            {
                (($fn246) result237->$class->vtable[3])(result237, &$s245);
            }
            }
            else {
            {
                (($fn248) result237->$class->vtable[3])(result237, &$s247);
            }
            }
            panda$core$Object* $tmp249 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp250 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp249)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp250.value) {
            {
                panda$core$Object* $tmp251 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
                (($fn252) result237->$class->vtable[5])(result237, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp251)));
            }
            }
            panda$core$Object* $tmp253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp254 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp253)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp254.value) {
            {
                (($fn256) result237->$class->vtable[3])(result237, &$s255);
                panda$core$Object* $tmp257 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
                (($fn258) result237->$class->vtable[5])(result237, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp257)));
            }
            }
            (($fn260) result237->$class->vtable[3])(result237, &$s259);
            panda$core$String* $tmp262 = (($fn261) result237->$class->vtable[0])(result237);
            return $tmp262;
        }
        }
        else {
        panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533129, ((panda$core$Int64) { 1033 }));
        if ($tmp263.value) {
        {
            panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s264, self->payload);
            panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s266);
            return $tmp267;
        }
        }
        else {
        {
            panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s268, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s270);
            return $tmp271;
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

