#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn34)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp2 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s1);
    panda$core$Bit $tmp3 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2);
    PANDA_ASSERT($tmp3.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) malloc(40);
    $tmp4->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4->refCount.value = 1;
    panda$collections$Array$init($tmp4);
    self->subtypes = $tmp4;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp9;
    self->parameter = NULL;
    panda$core$Bit $tmp7 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s6);
    panda$core$Bit $tmp8 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp7);
    PANDA_ASSERT($tmp8.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp9, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp9;
    self->resolved = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp10 = (panda$collections$Array*) malloc(40);
    $tmp10->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp10->refCount.value = 1;
    panda$collections$Array$init($tmp10);
    self->subtypes = $tmp10;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp14 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s13);
    panda$core$Bit $tmp15 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp12, $tmp14);
    PANDA_ASSERT($tmp15.value);
    panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp18 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s17);
    panda$core$Bit $tmp19 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp16, $tmp18);
    PANDA_ASSERT($tmp19.value);
    panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 22 }));
    PANDA_ASSERT($tmp20.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    panda$collections$Array* $tmp21 = (panda$collections$Array*) malloc(40);
    $tmp21->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp21->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp21, p_subtypes);
    self->subtypes = $tmp21;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name25;
    panda$core$String* separator29;
    panda$collections$Iterator* t$Iter31;
    org$pandalanguage$pandac$Type* t43;
    self->parameter = NULL;
    self->typeKind = ((panda$core$Int64) { 17 });
    panda$collections$Array* $tmp23 = (panda$collections$Array*) malloc(40);
    $tmp23->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp23->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp23, p_subtypes);
    self->subtypes = $tmp23;
    panda$core$MutableString* $tmp26 = (panda$core$MutableString*) malloc(40);
    $tmp26->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp26->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp26, &$s28);
    name25 = $tmp26;
    separator29 = &$s30;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp32 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$collections$Iterator* $tmp35 = $tmp33(((panda$collections$Iterable*) p_subtypes));
        t$Iter31 = $tmp35;
        $l36:;
        ITable* $tmp38 = t$Iter31->$class->itable;
        while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp38 = $tmp38->next;
        }
        $fn40 $tmp39 = $tmp38->methods[0];
        panda$core$Bit $tmp41 = $tmp39(t$Iter31);
        panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
        if (!$tmp42.value) goto $l37;
        {
            ITable* $tmp44 = t$Iter31->$class->itable;
            while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp44 = $tmp44->next;
            }
            $fn46 $tmp45 = $tmp44->methods[1];
            panda$core$Object* $tmp47 = $tmp45(t$Iter31);
            t43 = ((org$pandalanguage$pandac$Type*) $tmp47);
            panda$core$MutableString$append$panda$core$String(name25, separator29);
            panda$core$MutableString$append$panda$core$Object(name25, ((panda$core$Object*) t43));
            separator29 = &$s48;
            bool $tmp49 = self->resolved.value;
            if (!$tmp49) goto $l50;
            $tmp49 = t43->resolved.value;
            $l50:;
            panda$core$Bit $tmp51 = { $tmp49 };
            self->resolved = $tmp51;
        }
        goto $l36;
        $l37:;
    }
    panda$core$MutableString$append$panda$core$String(name25, &$s52);
    panda$core$String* $tmp53 = panda$core$MutableString$finish$R$panda$core$String(name25);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp53);
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    panda$core$String* $tmp54 = panda$core$String$convert$R$panda$core$String(p_param->owner);
    panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
    ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp59;
    self->typeKind = ((panda$core$Int64) { 22 });
    self->parameter = p_param;
    self->resolved = ((panda$core$Bit) { true });
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp60 = $tmp61.value;
    if ($tmp60) goto $l62;
    panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp60 = $tmp63.value;
    $l62:;
    panda$core$Bit $tmp64 = { $tmp60 };
    PANDA_ASSERT($tmp64.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp65 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp65;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp66 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp66;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp70;
    org$pandalanguage$pandac$Type* $tmp67 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp67->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp67->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp70);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp67, &$s69, ((panda$core$Int64) { 14 }), $tmp70, ((panda$core$Bit) { true }));
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp74;
    org$pandalanguage$pandac$Type* $tmp71 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp71->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp71->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp74);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp71, &$s73, ((panda$core$Int64) { 23 }), $tmp74, ((panda$core$Bit) { true }));
    return $tmp71;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp78;
    org$pandalanguage$pandac$Type* $tmp75 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp75->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp75->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp78);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp75, &$s77, ((panda$core$Int64) { 10 }), $tmp78, ((panda$core$Bit) { true }));
    return $tmp75;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes79;
    org$pandalanguage$pandac$Position $tmp86;
    panda$collections$Array* $tmp80 = (panda$collections$Array*) malloc(40);
    $tmp80->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp80->refCount.value = 1;
    panda$collections$Array$init($tmp80);
    subtypes79 = $tmp80;
    org$pandalanguage$pandac$Type* $tmp82 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes79, ((panda$core$Object*) $tmp82));
    org$pandalanguage$pandac$Type* $tmp83 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp83->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp83->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp86);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp83, &$s85, ((panda$core$Int64) { 11 }), $tmp86, ((panda$collections$ListView*) subtypes79), ((panda$core$Bit) { true }));
    return $tmp83;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp90;
    org$pandalanguage$pandac$Type* $tmp87 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp87->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp87->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp90);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp87, &$s89, ((panda$core$Int64) { 10 }), $tmp90, ((panda$core$Bit) { true }));
    return $tmp87;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp94;
    org$pandalanguage$pandac$Type* $tmp91 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp91->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp91->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp94);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp91, &$s93, ((panda$core$Int64) { 10 }), $tmp94, ((panda$core$Bit) { true }));
    return $tmp91;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp98;
    org$pandalanguage$pandac$Type* $tmp95 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp95->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp95->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp98);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp95, &$s97, ((panda$core$Int64) { 10 }), $tmp98, ((panda$core$Bit) { true }));
    return $tmp95;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp102;
    org$pandalanguage$pandac$Type* $tmp99 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp99->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp99->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp102);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp99, &$s101, ((panda$core$Int64) { 10 }), $tmp102, ((panda$core$Bit) { true }));
    return $tmp99;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp106;
    org$pandalanguage$pandac$Type* $tmp103 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp103->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp103->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp106);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp103, &$s105, ((panda$core$Int64) { 10 }), $tmp106, ((panda$core$Bit) { true }));
    return $tmp103;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp110;
    org$pandalanguage$pandac$Type* $tmp107 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp107->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp110);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp107, &$s109, ((panda$core$Int64) { 15 }), $tmp110, ((panda$core$Bit) { true }));
    return $tmp107;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp114;
    org$pandalanguage$pandac$Type* $tmp111 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp111->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp111->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp114);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp111, &$s113, ((panda$core$Int64) { 18 }), $tmp114, ((panda$core$Bit) { true }));
    return $tmp111;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp118;
    org$pandalanguage$pandac$Type* $tmp115 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp115->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp115->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp118);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp115, &$s117, ((panda$core$Int64) { 19 }), $tmp118, ((panda$core$Bit) { true }));
    return $tmp115;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp122;
    org$pandalanguage$pandac$Type* $tmp119 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp119->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp122);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp119, &$s121, ((panda$core$Int64) { 10 }), $tmp122, ((panda$core$Bit) { true }));
    return $tmp119;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp126;
    org$pandalanguage$pandac$Type* $tmp123 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp123->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp123->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp126);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp123, &$s125, ((panda$core$Int64) { 10 }), $tmp126, ((panda$core$Bit) { true }));
    return $tmp123;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp130;
    org$pandalanguage$pandac$Type* $tmp127 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp127->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp127->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp130);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp127, &$s129, ((panda$core$Int64) { 10 }), $tmp130, ((panda$core$Bit) { true }));
    return $tmp127;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children131;
    org$pandalanguage$pandac$Position $tmp137;
    panda$collections$Array* $tmp132 = (panda$collections$Array*) malloc(40);
    $tmp132->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp132->refCount.value = 1;
    panda$collections$Array$init($tmp132);
    children131 = $tmp132;
    org$pandalanguage$pandac$Type* $tmp134 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp134->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp134->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp137);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp134, &$s136, ((panda$core$Int64) { 10 }), $tmp137, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children131, ((panda$core$Object*) $tmp134));
    panda$collections$Array$add$panda$collections$Array$T(children131, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp138 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp138->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp138->refCount.value = 1;
    panda$core$String* $tmp141 = panda$core$String$convert$R$panda$core$String(&$s140);
    panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s142);
    panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp143, ((panda$core$Object*) p_t));
    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, &$s145);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp138, $tmp146, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children131), p_t->resolved);
    return $tmp138;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_endPoint, org$pandalanguage$pandac$Type* p_step) {
    panda$collections$Array* children147;
    org$pandalanguage$pandac$Position $tmp153;
    panda$collections$Array* $tmp148 = (panda$collections$Array*) malloc(40);
    $tmp148->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp148->refCount.value = 1;
    panda$collections$Array$init($tmp148);
    children147 = $tmp148;
    org$pandalanguage$pandac$Type* $tmp150 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp150->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp150->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp153);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp150, &$s152, ((panda$core$Int64) { 10 }), $tmp153, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children147, ((panda$core$Object*) $tmp150));
    panda$collections$Array$add$panda$collections$Array$T(children147, ((panda$core$Object*) p_endPoint));
    panda$collections$Array$add$panda$collections$Array$T(children147, ((panda$core$Object*) p_step));
    org$pandalanguage$pandac$Type* $tmp154 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp154->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp154->refCount.value = 1;
    panda$core$String* $tmp157 = panda$core$String$convert$R$panda$core$String(&$s156);
    panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, &$s158);
    panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp159, ((panda$core$Object*) p_endPoint));
    panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s161);
    panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp162, ((panda$core$Object*) p_step));
    panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
    bool $tmp166 = p_endPoint->resolved.value;
    if (!$tmp166) goto $l167;
    $tmp166 = p_step->resolved.value;
    $l167:;
    panda$core$Bit $tmp168 = { $tmp166 };
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp154, $tmp165, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_endPoint)->position, ((panda$collections$ListView*) children147), $tmp168);
    return $tmp154;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp172;
    org$pandalanguage$pandac$Type* $tmp169 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp169->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp169->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp172);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp169, &$s171, ((panda$core$Int64) { 16 }), $tmp172, ((panda$core$Bit) { true }));
    return $tmp169;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp175 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s174);
    bool $tmp173 = $tmp175.value;
    if ($tmp173) goto $l176;
    panda$core$Bit $tmp178 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s177);
    $tmp173 = $tmp178.value;
    $l176:;
    panda$core$Bit $tmp179 = { $tmp173 };
    return $tmp179;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp181 = $tmp182.value;
    if ($tmp181) goto $l183;
    panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp181 = $tmp184.value;
    $l183:;
    panda$core$Bit $tmp185 = { $tmp181 };
    bool $tmp180 = $tmp185.value;
    if ($tmp180) goto $l186;
    panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp180 = $tmp187.value;
    $l186:;
    panda$core$Bit $tmp188 = { $tmp180 };
    return $tmp188;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    switch (self->typeKind.value) {
        case 10:
        case 11:
        case 21:
        case 22:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp189 = $tmp190.value;
    if ($tmp189) goto $l191;
    panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp189 = $tmp192.value;
    $l191:;
    panda$core$Bit $tmp193 = { $tmp189 };
    return $tmp193;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp195 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s194);
    return $tmp195;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp196.value) {
    {
        panda$core$Object* $tmp197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp198 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp197));
        return $tmp198;
    }
    }
    panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp199 = $tmp200.value;
    if (!$tmp199) goto $l201;
    panda$core$Object* $tmp202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp204 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp202))->name, &$s203);
    $tmp199 = $tmp204.value;
    $l201:;
    panda$core$Bit $tmp205 = { $tmp199 };
    return $tmp205;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp206.value) {
    {
        panda$core$Object* $tmp207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp208 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp207));
        return $tmp208;
    }
    }
    panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp209 = $tmp210.value;
    if (!$tmp209) goto $l211;
    panda$core$Object* $tmp212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp214 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp212))->name, &$s213);
    $tmp209 = $tmp214.value;
    $l211:;
    panda$core$Bit $tmp215 = { $tmp209 };
    return $tmp215;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes217;
    org$pandalanguage$pandac$Position $tmp225;
    panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp216.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp218 = (panda$collections$Array*) malloc(40);
    $tmp218->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp218->refCount.value = 1;
    panda$collections$Array$init($tmp218);
    subtypes217 = $tmp218;
    panda$collections$Array$add$panda$collections$Array$T(subtypes217, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp220 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp220->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp220->refCount.value = 1;
    panda$core$String* $tmp222 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s223);
    org$pandalanguage$pandac$Position$init(&$tmp225);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp220, $tmp224, ((panda$core$Int64) { 11 }), $tmp225, ((panda$collections$ListView*) subtypes217), ((panda$core$Bit) { true }));
    return $tmp220;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp226 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp226.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp227 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp228 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp227);
    if ($tmp228.value) {
    {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp229.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp230 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp230;
    }
    }
    org$pandalanguage$pandac$Type* $tmp231 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp232 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp231);
    if ($tmp232.value) {
    {
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp233.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp234 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp234;
    }
    }
    org$pandalanguage$pandac$Type* $tmp236 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp237 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp236);
    bool $tmp235 = $tmp237.value;
    if (!$tmp235) goto $l238;
    panda$core$Bit $tmp239 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp235 = $tmp239.value;
    $l238:;
    panda$core$Bit $tmp240 = { $tmp235 };
    if ($tmp240.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp242 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp241 = $tmp242.value;
    if (!$tmp241) goto $l243;
    org$pandalanguage$pandac$Type* $tmp244 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp245 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp244);
    $tmp241 = $tmp245.value;
    $l243:;
    panda$core$Bit $tmp246 = { $tmp241 };
    if ($tmp246.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp247.value) {
    {
        panda$core$Object* $tmp248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp249 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp248), p_other);
        org$pandalanguage$pandac$Type* $tmp250 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp249);
        return $tmp250;
    }
    }
    panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp251.value) {
    {
        panda$core$Object* $tmp252 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp253 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp252));
        org$pandalanguage$pandac$Type* $tmp254 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp253);
        return $tmp254;
    }
    }
    org$pandalanguage$pandac$Type* $tmp255 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp255;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found258;
    panda$collections$Array* remapped260;
    panda$core$MutableString* name263;
    panda$core$String* separator268;
    panda$core$Range$LTpanda$core$Int64$GT $tmp270;
    org$pandalanguage$pandac$Type* child285;
    panda$collections$Array* remapped303;
    panda$core$MutableString* name306;
    panda$core$String* separator310;
    panda$core$Range$LTpanda$core$Int64$GT $tmp314;
    org$pandalanguage$pandac$Type* child330;
    org$pandalanguage$pandac$Type* child348;
    panda$core$Int64 $tmp256 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp256, ((panda$core$Int64) { 0 }));
    if ($tmp257.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp259 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found258 = ((org$pandalanguage$pandac$Type*) $tmp259);
            if (((panda$core$Bit) { found258 != NULL }).value) {
            {
                return found258;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp261 = (panda$collections$Array*) malloc(40);
            $tmp261->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp261->refCount.value = 1;
            panda$collections$Array$init($tmp261);
            remapped260 = $tmp261;
            panda$core$MutableString* $tmp264 = (panda$core$MutableString*) malloc(40);
            $tmp264->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp264->refCount.value = 1;
            panda$core$Object* $tmp266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp264, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp266))->name);
            name263 = $tmp264;
            panda$core$MutableString$append$panda$core$String(name263, &$s267);
            separator268 = &$s269;
            panda$core$Int64 $tmp271 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp270, ((panda$core$Int64) { 0 }), $tmp271, ((panda$core$Bit) { false }));
            int64_t $tmp273 = $tmp270.min.value;
            panda$core$Int64 i272 = { $tmp273 };
            int64_t $tmp275 = $tmp270.max.value;
            bool $tmp276 = $tmp270.inclusive.value;
            if ($tmp276) goto $l283; else goto $l284;
            $l283:;
            if ($tmp273 <= $tmp275) goto $l277; else goto $l279;
            $l284:;
            if ($tmp273 < $tmp275) goto $l277; else goto $l279;
            $l277:;
            {
                panda$core$Object* $tmp286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i272);
                org$pandalanguage$pandac$Type* $tmp287 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp286), p_types);
                child285 = $tmp287;
                panda$collections$Array$add$panda$collections$Array$T(remapped260, ((panda$core$Object*) child285));
                panda$core$Bit $tmp288 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i272, ((panda$core$Int64) { 0 }));
                if ($tmp288.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name263, separator268);
                    panda$core$MutableString$append$panda$core$String(name263, ((org$pandalanguage$pandac$Symbol*) child285)->name);
                    separator268 = &$s289;
                }
                }
            }
            $l280:;
            int64_t $tmp291 = $tmp275 - i272.value;
            if ($tmp276) goto $l292; else goto $l293;
            $l292:;
            if ($tmp291 >= 1) goto $l290; else goto $l279;
            $l293:;
            if ($tmp291 > 1) goto $l290; else goto $l279;
            $l290:;
            i272.value += 1;
            goto $l277;
            $l279:;
            panda$core$MutableString$append$panda$core$String(name263, &$s296);
            org$pandalanguage$pandac$Type* $tmp297 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp297->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp297->refCount.value = 1;
            panda$core$String* $tmp299 = panda$core$MutableString$finish$R$panda$core$String(name263);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp297, $tmp299, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped260), self->resolved);
            return $tmp297;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp301 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp300), p_types);
            org$pandalanguage$pandac$Type* $tmp302 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp301);
            return $tmp302;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp304 = (panda$collections$Array*) malloc(40);
            $tmp304->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp304->refCount.value = 1;
            panda$collections$Array$init($tmp304);
            remapped303 = $tmp304;
            panda$core$MutableString* $tmp307 = (panda$core$MutableString*) malloc(40);
            $tmp307->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp307->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp307, &$s309);
            name306 = $tmp307;
            separator310 = &$s311;
            panda$core$Int64 $tmp312 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp313 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp312, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp313.value);
            panda$core$Int64 $tmp315 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp316 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp315, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp314, ((panda$core$Int64) { 0 }), $tmp316, ((panda$core$Bit) { false }));
            int64_t $tmp318 = $tmp314.min.value;
            panda$core$Int64 i317 = { $tmp318 };
            int64_t $tmp320 = $tmp314.max.value;
            bool $tmp321 = $tmp314.inclusive.value;
            if ($tmp321) goto $l328; else goto $l329;
            $l328:;
            if ($tmp318 <= $tmp320) goto $l322; else goto $l324;
            $l329:;
            if ($tmp318 < $tmp320) goto $l322; else goto $l324;
            $l322:;
            {
                panda$core$Object* $tmp331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i317);
                org$pandalanguage$pandac$Type* $tmp332 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp331), p_types);
                child330 = $tmp332;
                panda$core$MutableString$append$panda$core$String(name306, separator310);
                panda$core$MutableString$append$panda$core$String(name306, ((org$pandalanguage$pandac$Symbol*) child330)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped303, ((panda$core$Object*) child330));
                separator310 = &$s333;
            }
            $l325:;
            int64_t $tmp335 = $tmp320 - i317.value;
            if ($tmp321) goto $l336; else goto $l337;
            $l336:;
            if ($tmp335 >= 1) goto $l334; else goto $l324;
            $l337:;
            if ($tmp335 > 1) goto $l334; else goto $l324;
            $l334:;
            i317.value += 1;
            goto $l322;
            $l324:;
            panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp340.value) {
            {
                panda$core$MutableString$append$panda$core$String(name306, &$s341);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name306, &$s342);
            }
            }
            panda$core$Int64 $tmp343 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp344 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp343, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp344);
            org$pandalanguage$pandac$Type* $tmp346 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp347 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp345), $tmp346);
            if ($tmp347.value) {
            {
                panda$core$Int64 $tmp349 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp350 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp349, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp350);
                org$pandalanguage$pandac$Type* $tmp352 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp351), p_types);
                child348 = $tmp352;
                panda$core$MutableString$append$panda$core$String(name306, ((org$pandalanguage$pandac$Symbol*) child348)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped303, ((panda$core$Object*) child348));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp353 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped303, ((panda$core$Object*) $tmp353));
            }
            }
            panda$core$MutableString$append$panda$core$String(name306, &$s354);
            org$pandalanguage$pandac$Type* $tmp355 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp355->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp355->refCount.value = 1;
            panda$core$String* $tmp357 = panda$core$MutableString$finish$R$panda$core$String(name306);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp355, $tmp357, self->typeKind, self->position, ((panda$collections$ListView*) remapped303), self->resolved);
            return $tmp355;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp358 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp358;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

