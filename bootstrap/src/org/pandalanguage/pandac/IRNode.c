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
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"


org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$collections$Iterator* (*$fn28)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn77)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn86)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn88)(panda$core$Object*);
typedef panda$core$String* (*$fn90)(panda$core$Object*);
typedef panda$core$String* (*$fn93)(panda$core$Object*);
typedef panda$core$String* (*$fn96)(panda$core$Object*);
typedef panda$core$String* (*$fn120)(panda$core$Object*);
typedef panda$core$String* (*$fn252)(panda$core$Object*);

static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x3a\x20", 23, 4946569640876959339, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x69\x6e\x64\x65\x78\x3c", 17, 6132090352458096948, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6c\x75\x65\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 26, 5856625875788916248, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6c\x75\x65\x3a\x20", 16, 5194184210777340723, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x5f\x72\x61\x6e\x67\x65\x3c", 17, 6132157321476025600, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x49\x52\x4e\x6f\x64\x65\x3a", 8, 17339740200262864, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$Type* $tmp1 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp1, NULL, NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    org$pandalanguage$pandac$Type* $tmp2 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$UInt64$wrapper* $tmp3;
    $tmp3 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3->refCount = 1;
    $tmp3->value = p_payload;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp2, ((panda$core$Object*) $tmp3), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    org$pandalanguage$pandac$Type* $tmp4 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp4, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    org$pandalanguage$pandac$Type* $tmp5 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit$wrapper* $tmp6;
    $tmp6 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp6->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp6->refCount = 1;
    $tmp6->value = p_payload;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp5, ((panda$core$Object*) $tmp6), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp7 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp7, NULL, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp8 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, $tmp8, p_payload, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, NULL, NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$UInt64 p_payload) {
    panda$core$UInt64$wrapper* $tmp9;
    $tmp9 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp9->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp9->refCount = 1;
    $tmp9->value = p_payload;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) $tmp9), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$Real64 p_payload) {
    panda$core$Real64$wrapper* $tmp10;
    $tmp10 = (panda$core$Real64$wrapper*) malloc(24);
    $tmp10->cl = (panda$core$Class*) &panda$core$Real64$wrapperclass;
    $tmp10->refCount = 1;
    $tmp10->value = p_payload;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) $tmp10), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$String* p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_payload) {
    panda$core$Bit$wrapper* $tmp11;
    $tmp11 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp11->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp11->refCount = 1;
    $tmp11->value = p_payload;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) $tmp11), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable* p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Symbol* p_payload) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$ChoiceEntry$Cpanda$core$Int64$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Pair* p_payload) {
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
        panda$collections$ImmutableArray* $tmp12 = (panda$collections$ImmutableArray*) malloc(32);
        $tmp12->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp12->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp12, p_children);
        self->children = $tmp12;
    }
    }
    else {
    {
        self->children = NULL;
    }
    }
    PANDA_ASSERT(p_type->resolved.value);
    panda$core$Bit $tmp15 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1001 }));
    bool $tmp14 = $tmp15.value;
    if ($tmp14) goto $l16;
    bool $tmp17 = ((panda$core$Bit) { p_payload != NULL }).value;
    if (!$tmp17) goto $l18;
    $tmp17 = ((org$pandalanguage$pandac$Type*) p_payload)->resolved.value;
    $l18:;
    panda$core$Bit $tmp19 = { $tmp17 };
    $tmp14 = $tmp19.value;
    $l16:;
    panda$core$Bit $tmp20 = { $tmp14 };
    PANDA_ASSERT($tmp20.value);
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    panda$core$MutableString* result21;
    panda$collections$Iterator* child$Iter25;
    org$pandalanguage$pandac$IRNode* child37;
    panda$core$String* c42;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp51;
    panda$core$Char8 $tmp57;
    panda$core$Char8 $tmp58;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp124;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp136;
    panda$core$MutableString* result217;
    panda$core$Char8 $tmp233;
    org$pandalanguage$pandac$Pair* pair254;
    switch (self->kind.value) {
        case 1000:
        {
            panda$core$MutableString* $tmp22 = (panda$core$MutableString*) malloc(48);
            $tmp22->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp22->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp22, &$s24);
            result21 = $tmp22;
            {
                ITable* $tmp26 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp26 = $tmp26->next;
                }
                $fn28 $tmp27 = $tmp26->methods[0];
                panda$collections$Iterator* $tmp29 = $tmp27(((panda$collections$Iterable*) self->children));
                child$Iter25 = $tmp29;
                $l30:;
                ITable* $tmp32 = child$Iter25->$class->itable;
                while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp32 = $tmp32->next;
                }
                $fn34 $tmp33 = $tmp32->methods[0];
                panda$core$Bit $tmp35 = $tmp33(child$Iter25);
                panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
                if (!$tmp36.value) goto $l31;
                {
                    ITable* $tmp38 = child$Iter25->$class->itable;
                    while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp38 = $tmp38->next;
                    }
                    $fn40 $tmp39 = $tmp38->methods[1];
                    panda$core$Object* $tmp41 = $tmp39(child$Iter25);
                    child37 = ((org$pandalanguage$pandac$IRNode*) $tmp41);
                    panda$core$String* $tmp43 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(child37);
                    c42 = $tmp43;
                    panda$core$Bit $tmp46 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c42, &$s45);
                    bool $tmp44 = $tmp46.value;
                    if (!$tmp44) goto $l47;
                    panda$core$Bit $tmp49 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c42, &$s48);
                    $tmp44 = $tmp49.value;
                    $l47:;
                    panda$core$Bit $tmp50 = { $tmp44 };
                    if ($tmp50.value) {
                    {
                        panda$core$String$Index $tmp52 = panda$core$String$start$R$panda$core$String$Index(c42);
                        panda$core$String$Index $tmp53 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c42, $tmp52);
                        panda$core$String$Index $tmp54 = panda$core$String$end$R$panda$core$String$Index(c42);
                        panda$core$String$Index $tmp55 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c42, $tmp54);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp51, $tmp53, $tmp55, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp56 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c42, $tmp51);
                        panda$core$MutableString$append$panda$core$String(result21, $tmp56);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result21, ((panda$core$Object*) child37));
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp57, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result21, $tmp57);
                }
                goto $l30;
                $l31:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp58, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result21, $tmp58);
            panda$core$String* $tmp59 = panda$core$MutableString$finish$R$panda$core$String(result21);
            return $tmp59;
        }
        break;
        case 1002:
        {
            panda$core$Int64 $tmp60 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp61 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp60, ((panda$core$Int64) { 0 }));
            if ($tmp61.value) {
            {
                panda$core$Object* $tmp62 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp63 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp62));
                panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s64);
                panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
                panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s67);
                return $tmp68;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name;
        }
        break;
        case 1003:
        {
            panda$core$Int64 $tmp69 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, ((panda$core$Int64) { 1 }));
            if ($tmp70.value) {
            {
                panda$core$Object* $tmp71 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp72 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp71));
                panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s73);
                ITable* $tmp75 = ((panda$collections$ListView*) self->payload)->$class->itable;
                while ($tmp75->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp75 = $tmp75->next;
                }
                $fn77 $tmp76 = $tmp75->methods[0];
                panda$core$Object* $tmp78 = $tmp76(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp78)->value)->name);
                panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp79, &$s80);
                return $tmp81;
            }
            }
            panda$core$Int64 $tmp82 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp82, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp83.value);
            ITable* $tmp84 = ((panda$collections$ListView*) self->payload)->$class->itable;
            while ($tmp84->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp84 = $tmp84->next;
            }
            $fn86 $tmp85 = $tmp84->methods[0];
            panda$core$Object* $tmp87 = $tmp85(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp87)->value)->name;
        }
        break;
        case 1001:
        {
            panda$core$String* $tmp89 = (($fn88) self->payload->$class->vtable[0])(self->payload);
            return $tmp89;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp91 = (($fn90) self->payload->$class->vtable[0])(self->payload);
            return $tmp91;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp94 = (($fn93) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s92, $tmp94);
            return $tmp95;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp97 = (($fn96) self->payload->$class->vtable[0])(self->payload);
            return $tmp97;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp98 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(self->type);
            panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
            panda$core$Object* $tmp101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp103 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp101)->children, &$s102);
            panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, $tmp103);
            panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, &$s105);
            return $tmp106;
        }
        break;
        case 1038:
        {
            panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s107, ((panda$core$Object*) self->type));
            panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
            return $tmp110;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp111 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
            panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s112);
            panda$core$String* $tmp115 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self->children, &$s114);
            panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, $tmp115);
            panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s117);
            return $tmp118;
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp119 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp121 = (($fn120) ((org$pandalanguage$pandac$IRNode*) $tmp119)->payload->$class->vtable[0])(((org$pandalanguage$pandac$IRNode*) $tmp119)->payload);
            panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s122);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp124, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp125 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp124);
            panda$core$String* $tmp127 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String($tmp125, &$s126);
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, $tmp127);
            panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
            return $tmp130;
        }
        break;
        case 1040:
        {
            panda$core$Object* $tmp132 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s131, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp132)));
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp136, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp137 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp136);
            panda$core$String* $tmp139 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String($tmp137, &$s138);
            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, $tmp139);
            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, &$s141);
            return $tmp142;
        }
        break;
        case 1009:
        {
            panda$core$Object* $tmp144 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s143, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp144)));
            panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s146);
            panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp147, ((panda$core$Object*) self->type));
            panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s149);
            return $tmp150;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp151 = org$pandalanguage$pandac$Variable$convert$R$panda$core$String(((org$pandalanguage$pandac$Variable*) self->payload));
            panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s152);
            return $tmp153;
        }
        break;
        case 1023:
        {
            panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s154, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp155)));
            panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s157);
            panda$core$String* $tmp159 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(((org$pandalanguage$pandac$parser$Token$Kind*) self->payload));
            panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp158, $tmp159);
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s161);
            panda$core$Object* $tmp163 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp164 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp163));
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s165);
            panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, $tmp166);
            return $tmp167;
        }
        break;
        case 1025:
        {
            return &$s168;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp170 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp169));
            panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s171);
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp172, self->payload);
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
            return $tmp175;
        }
        break;
        case 1028:
        {
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s176, self->payload);
            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s178);
            return $tmp179;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp181 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp180));
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
            panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) self->payload))->name);
            panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s185);
            return $tmp186;
        }
        break;
        case 1030:
        {
            return &$s187;
        }
        break;
        case 1021:
        {
            panda$core$Int64 $tmp188 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp188, ((panda$core$Int64) { 1 }));
            if ($tmp189.value) {
            {
                panda$core$Object* $tmp190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp191 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp190));
                return $tmp191;
            }
            }
            panda$core$Object* $tmp192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp193 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp192));
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
            panda$core$Object* $tmp196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp195, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp196)));
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            return $tmp199;
        }
        break;
        case 1018:
        {
            panda$core$String* $tmp202 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self->children, &$s201);
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s200, $tmp202);
            panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s204);
            return $tmp205;
        }
        break;
        case 1017:
        {
            panda$core$String* $tmp208 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self->children, &$s207);
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s206, $tmp208);
            panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s210);
            return $tmp211;
        }
        break;
        case 1008:
        {
            panda$core$String* $tmp213 = panda$collections$ImmutableArray$join$R$panda$core$String(self->children);
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s212, $tmp213);
            panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s215);
            return $tmp216;
        }
        break;
        case 1031:
        {
            panda$core$MutableString* $tmp218 = (panda$core$MutableString*) malloc(48);
            $tmp218->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp218->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp218, &$s220);
            result217 = $tmp218;
            panda$core$Object* $tmp221 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp222 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp221)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp222.value) {
            {
                panda$core$Object* $tmp223 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result217, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp223)));
            }
            }
            if (((panda$core$Bit$wrapper*) self->payload)->value.value) {
            {
                panda$core$MutableString$append$panda$core$String(result217, &$s224);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result217, &$s225);
            }
            }
            panda$core$Object* $tmp226 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp227 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp226)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp227.value) {
            {
                panda$core$Object* $tmp228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result217, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp228)));
            }
            }
            panda$core$Int64 $tmp229 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp230 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp229, ((panda$core$Int64) { 2 }));
            if ($tmp230.value) {
            {
                panda$core$MutableString$append$panda$core$String(result217, &$s231);
                panda$core$Object* $tmp232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result217, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp232)));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp233, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(result217, $tmp233);
            panda$core$String* $tmp234 = panda$core$MutableString$finish$R$panda$core$String(result217);
            return $tmp234;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s235, self->payload);
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s237);
            return $tmp238;
        }
        break;
        case 1044:
        {
            panda$core$Object* $tmp240 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s239, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp240)));
            panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
            panda$core$Object* $tmp244 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp243, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp244)));
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
            panda$core$Object* $tmp248 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp247, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp248)));
            panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp249, &$s250);
            return $tmp251;
        }
        break;
        case 1046:
        {
            panda$core$String* $tmp253 = (($fn252) self->payload->$class->vtable[0])(self->payload);
            return $tmp253;
        }
        break;
        case 1047:
        {
            pair254 = ((org$pandalanguage$pandac$Pair*) self->payload);
            panda$core$String* $tmp255 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(((org$pandalanguage$pandac$ChoiceEntry*) pair254->first));
            panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
            panda$core$Int64$wrapper* $tmp258;
            $tmp258 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp258->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp258->refCount = 1;
            $tmp258->value = ((panda$core$Int64$wrapper*) pair254->second)->value;
            panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp257, ((panda$core$Object*) $tmp258));
            panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s260);
            return $tmp261;
        }
        break;
        default:
        {
            panda$core$Int64$wrapper* $tmp263;
            $tmp263 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp263->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp263->refCount = 1;
            $tmp263->value = self->kind;
            panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s262, ((panda$core$Object*) $tmp263));
            panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s265);
            return $tmp266;
        }
    }
}

