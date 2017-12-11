#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/UInt64.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/Array.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/FieldDecl.h"


org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$collections$Iterator* (*$fn23)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn29)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn35)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn72)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn81)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn83)(panda$core$Object*);
typedef panda$core$String* (*$fn85)(panda$core$Object*);
typedef panda$core$String* (*$fn88)(panda$core$Object*);
typedef panda$core$String* (*$fn91)(panda$core$Object*);
typedef panda$core$String* (*$fn115)(panda$core$Object*);

static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 22634, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x63\x6F\x6E\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6F\x62\x6A\x65\x63\x74\x3A\x20", 23, 4946569640876959339, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1361020, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x69\x6E\x64\x65\x78\x3C", 17, 6132090352458096948, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 223586327, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x44\x65\x66\x69\x6E\x69\x74\x69\x6F\x6E\x3A\x20", 26, 5856625875788916248, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1361020, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x3A\x20", 16, 5194184210777340723, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1361020, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 137627884, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x5F\x72\x61\x6E\x67\x65\x3C", 17, 6132157321476025600, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1504239, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 14893, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x49\x52\x4E\x6F\x64\x65\x3A", 8, 17339740200262864, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$Type* $tmp1 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp1, NULL, NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    org$pandalanguage$pandac$Type* $tmp2 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp2, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    org$pandalanguage$pandac$Type* $tmp3 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp3, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    org$pandalanguage$pandac$Type* $tmp4 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp4, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp5 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp5, NULL, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp6 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp6, p_payload, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, NULL, NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$UInt64 p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$String* p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable* p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, NULL, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->position = p_position;
    self->type = p_type;
    self->payload = p_payload;
    if (((panda$core$Bit) { p_children != NULL }).value) {
    {
        panda$collections$Array* $tmp7 = (panda$collections$Array*) malloc(40);
        $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp7->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp7, p_children);
        self->children = $tmp7;
    }
    }
    else {
    {
        self->children = NULL;
    }
    }
    PANDA_ASSERT(p_type->resolved.value);
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1001 }));
    bool $tmp9 = $tmp10.value;
    if ($tmp9) goto $l11;
    bool $tmp12 = ((panda$core$Bit) { p_payload != NULL }).value;
    if (!$tmp12) goto $l13;
    $tmp12 = ((org$pandalanguage$pandac$Type*) p_payload)->resolved.value;
    $l13:;
    panda$core$Bit $tmp14 = { $tmp12 };
    $tmp9 = $tmp14.value;
    $l11:;
    panda$core$Bit $tmp15 = { $tmp9 };
    PANDA_ASSERT($tmp15.value);
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    panda$core$MutableString* result16;
    panda$collections$Iterator* child$Iter20;
    org$pandalanguage$pandac$IRNode* child32;
    panda$core$String* c37;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp46;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp119;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp131;
    panda$core$MutableString* result211;
    switch (self->kind.value) {
        case 1000:
        {
            panda$core$MutableString* $tmp17 = (panda$core$MutableString*) malloc(40);
            $tmp17->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp17->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp17, &$s19);
            result16 = $tmp17;
            {
                ITable* $tmp21 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp21 = $tmp21->next;
                }
                $fn23 $tmp22 = $tmp21->methods[0];
                panda$collections$Iterator* $tmp24 = $tmp22(((panda$collections$Iterable*) self->children));
                child$Iter20 = $tmp24;
                $l25:;
                ITable* $tmp27 = child$Iter20->$class->itable;
                while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp27 = $tmp27->next;
                }
                $fn29 $tmp28 = $tmp27->methods[0];
                panda$core$Bit $tmp30 = $tmp28(child$Iter20);
                panda$core$Bit $tmp31 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp30);
                if (!$tmp31.value) goto $l26;
                {
                    ITable* $tmp33 = child$Iter20->$class->itable;
                    while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp33 = $tmp33->next;
                    }
                    $fn35 $tmp34 = $tmp33->methods[1];
                    panda$core$Object* $tmp36 = $tmp34(child$Iter20);
                    child32 = ((org$pandalanguage$pandac$IRNode*) $tmp36);
                    panda$core$String* $tmp38 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(child32);
                    c37 = $tmp38;
                    panda$core$Bit $tmp41 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c37, &$s40);
                    bool $tmp39 = $tmp41.value;
                    if (!$tmp39) goto $l42;
                    panda$core$Bit $tmp44 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c37, &$s43);
                    $tmp39 = $tmp44.value;
                    $l42:;
                    panda$core$Bit $tmp45 = { $tmp39 };
                    if ($tmp45.value) {
                    {
                        panda$core$String$Index $tmp47 = panda$core$String$start$R$panda$core$String$Index(c37);
                        panda$core$String$Index $tmp48 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c37, $tmp47);
                        panda$core$String$Index $tmp49 = panda$core$String$end$R$panda$core$String$Index(c37);
                        panda$core$String$Index $tmp50 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c37, $tmp49);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp46, $tmp48, $tmp50, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp51 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c37, $tmp46);
                        panda$core$MutableString$append$panda$core$String(result16, $tmp51);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result16, ((panda$core$Object*) child32));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result16, &$s52);
                }
                goto $l25;
                $l26:;
            }
            panda$core$MutableString$append$panda$core$String(result16, &$s53);
            panda$core$String* $tmp54 = panda$core$MutableString$finish$R$panda$core$String(result16);
            return $tmp54;
        }
        break;
        case 1002:
        {
            panda$core$Int64 $tmp55 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp56 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp55, ((panda$core$Int64) { 0 }));
            if ($tmp56.value) {
            {
                panda$core$Object* $tmp57 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp58 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp57));
                panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
                panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
                panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp61, &$s62);
                return $tmp63;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name;
        }
        break;
        case 1003:
        {
            panda$core$Int64 $tmp64 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, ((panda$core$Int64) { 1 }));
            if ($tmp65.value) {
            {
                panda$core$Object* $tmp66 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp67 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp66));
                panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s68);
                ITable* $tmp70 = ((panda$collections$ListView*) self->payload)->$class->itable;
                while ($tmp70->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp70 = $tmp70->next;
                }
                $fn72 $tmp71 = $tmp70->methods[0];
                panda$core$Object* $tmp73 = $tmp71(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp73)->value)->name);
                panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s75);
                return $tmp76;
            }
            }
            panda$core$Int64 $tmp77 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp77, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp78.value);
            ITable* $tmp79 = ((panda$collections$ListView*) self->payload)->$class->itable;
            while ($tmp79->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp79 = $tmp79->next;
            }
            $fn81 $tmp80 = $tmp79->methods[0];
            panda$core$Object* $tmp82 = $tmp80(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp82)->value)->name;
        }
        break;
        case 1001:
        {
            panda$core$String* $tmp84 = (($fn83) self->payload->$class->vtable[0])(self->payload);
            return $tmp84;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp86 = (($fn85) self->payload->$class->vtable[0])(self->payload);
            return $tmp86;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp89 = (($fn88) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s87, $tmp89);
            return $tmp90;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp92 = (($fn91) self->payload->$class->vtable[0])(self->payload);
            return $tmp92;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp93 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(self->type);
            panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
            panda$core$Object* $tmp96 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp98 = panda$collections$Array$join$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp96)->children, &$s97);
            panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, $tmp98);
            panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s100);
            return $tmp101;
        }
        break;
        case 1038:
        {
            panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s102, ((panda$core$Object*) self->type));
            panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s104);
            return $tmp105;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp106 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
            panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
            panda$core$String* $tmp110 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s109);
            panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, $tmp110);
            panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s112);
            return $tmp113;
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp116 = (($fn115) ((org$pandalanguage$pandac$IRNode*) $tmp114)->payload->$class->vtable[0])(((org$pandalanguage$pandac$IRNode*) $tmp114)->payload);
            panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s117);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp119, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp120 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self->children, $tmp119);
            panda$core$String* $tmp122 = panda$collections$Array$join$panda$core$String$R$panda$core$String($tmp120, &$s121);
            panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, $tmp122);
            panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
            return $tmp125;
        }
        break;
        case 1040:
        {
            panda$core$Object* $tmp127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s126, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp127)));
            panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp131, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp132 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self->children, $tmp131);
            panda$core$String* $tmp134 = panda$collections$Array$join$panda$core$String$R$panda$core$String($tmp132, &$s133);
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, $tmp134);
            panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s136);
            return $tmp137;
        }
        break;
        case 1009:
        {
            panda$core$Object* $tmp139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s138, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp139)));
            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, &$s141);
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp142, ((panda$core$Object*) self->type));
            panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s144);
            return $tmp145;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp146 = org$pandalanguage$pandac$Variable$convert$R$panda$core$String(((org$pandalanguage$pandac$Variable*) self->payload));
            panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s147);
            return $tmp148;
        }
        break;
        case 1023:
        {
            panda$core$Object* $tmp150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s149, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp150)));
            panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s152);
            panda$core$String* $tmp154 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, $tmp154);
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s156);
            panda$core$Object* $tmp158 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp157, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp158)));
            panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, &$s160);
            return $tmp161;
        }
        break;
        case 1025:
        {
            return &$s162;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp164 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp163));
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s165);
            panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp166, self->payload);
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s168);
            return $tmp169;
        }
        break;
        case 1028:
        {
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s170, self->payload);
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s172);
            return $tmp173;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp174 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp175 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp174));
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) self->payload))->name);
            panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s179);
            return $tmp180;
        }
        break;
        case 1030:
        {
            return &$s181;
        }
        break;
        case 1021:
        {
            panda$core$Int64 $tmp182 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp182, ((panda$core$Int64) { 1 }));
            if ($tmp183.value) {
            {
                panda$core$Object* $tmp184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp185 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp184));
                return $tmp185;
            }
            }
            panda$core$Object* $tmp186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp187 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp186));
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
            panda$core$Object* $tmp190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp189, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp190)));
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s192);
            return $tmp193;
        }
        break;
        case 1018:
        {
            panda$core$String* $tmp196 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s195);
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s194, $tmp196);
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            return $tmp199;
        }
        break;
        case 1017:
        {
            panda$core$String* $tmp202 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s201);
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s200, $tmp202);
            panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s204);
            return $tmp205;
        }
        break;
        case 1008:
        {
            panda$core$String* $tmp207 = panda$collections$Array$join$R$panda$core$String(self->children);
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s206, $tmp207);
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s209);
            return $tmp210;
        }
        break;
        case 1031:
        {
            panda$core$MutableString* $tmp212 = (panda$core$MutableString*) malloc(40);
            $tmp212->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp212->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp212, &$s214);
            result211 = $tmp212;
            panda$core$Object* $tmp215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp216 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp215)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp216.value) {
            {
                panda$core$Object* $tmp217 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result211, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp217)));
            }
            }
            if (((panda$core$Bit$wrapper*) self->payload)->value.value) {
            {
                panda$core$MutableString$append$panda$core$String(result211, &$s218);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result211, &$s219);
            }
            }
            panda$core$Object* $tmp220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp221 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp220)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp221.value) {
            {
                panda$core$Object* $tmp222 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result211, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp222)));
            }
            }
            panda$core$Int64 $tmp223 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp224 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp223, ((panda$core$Int64) { 2 }));
            if ($tmp224.value) {
            {
                panda$core$MutableString$append$panda$core$String(result211, &$s225);
                panda$core$Object* $tmp226 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result211, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp226)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result211, &$s227);
            panda$core$String* $tmp228 = panda$core$MutableString$finish$R$panda$core$String(result211);
            return $tmp228;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s229, self->payload);
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp230, &$s231);
            return $tmp232;
        }
        break;
        default:
        {
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s233, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s235);
            return $tmp236;
        }
    }
}

