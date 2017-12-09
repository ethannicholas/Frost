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
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Array.h"
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

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn34)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, 1 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

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
    panda$collections$ImmutableArray* $tmp4 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp4->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp4->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp4);
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
    panda$collections$ImmutableArray* $tmp10 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp10->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp10->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp10);
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
    panda$collections$ImmutableArray* $tmp21 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp21->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp21->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp21, p_subtypes);
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
    panda$collections$ImmutableArray* $tmp23 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp23->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp23->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp23, p_subtypes);
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
    panda$core$String* $tmp53 = panda$core$MutableString$convert$R$panda$core$String(name25);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp53);
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s54, p_param->owner);
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s56);
    panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
    ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp60;
    self->typeKind = ((panda$core$Int64) { 22 });
    self->parameter = p_param;
    self->resolved = ((panda$core$Bit) { true });
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp61 = $tmp62.value;
    if ($tmp61) goto $l63;
    panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp61 = $tmp64.value;
    $l63:;
    panda$core$Bit $tmp65 = { $tmp61 };
    PANDA_ASSERT($tmp65.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp66 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp66;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp67 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp71;
    org$pandalanguage$pandac$Type* $tmp68 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp68->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp68->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp71);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp68, &$s70, ((panda$core$Int64) { 14 }), $tmp71, ((panda$core$Bit) { true }));
    return $tmp68;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp75;
    org$pandalanguage$pandac$Type* $tmp72 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp72->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp72->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp75);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp72, &$s74, ((panda$core$Int64) { 23 }), $tmp75, ((panda$core$Bit) { true }));
    return $tmp72;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp79;
    org$pandalanguage$pandac$Type* $tmp76 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp76->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp76->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp79);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp76, &$s78, ((panda$core$Int64) { 10 }), $tmp79, ((panda$core$Bit) { true }));
    return $tmp76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes80;
    org$pandalanguage$pandac$Position $tmp87;
    panda$collections$Array* $tmp81 = (panda$collections$Array*) malloc(40);
    $tmp81->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp81->refCount.value = 1;
    panda$collections$Array$init($tmp81);
    subtypes80 = $tmp81;
    org$pandalanguage$pandac$Type* $tmp83 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes80, ((panda$core$Object*) $tmp83));
    org$pandalanguage$pandac$Type* $tmp84 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp84->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp84->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp87);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp84, &$s86, ((panda$core$Int64) { 11 }), $tmp87, ((panda$collections$ListView*) subtypes80), ((panda$core$Bit) { true }));
    return $tmp84;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp91;
    org$pandalanguage$pandac$Type* $tmp88 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp88->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp88->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp91);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp88, &$s90, ((panda$core$Int64) { 10 }), $tmp91, ((panda$core$Bit) { true }));
    return $tmp88;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp95;
    org$pandalanguage$pandac$Type* $tmp92 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp92->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp92->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp95);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp92, &$s94, ((panda$core$Int64) { 10 }), $tmp95, ((panda$core$Bit) { true }));
    return $tmp92;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp99;
    org$pandalanguage$pandac$Type* $tmp96 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp96->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp96->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp99);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp96, &$s98, ((panda$core$Int64) { 10 }), $tmp99, ((panda$core$Bit) { true }));
    return $tmp96;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp103;
    org$pandalanguage$pandac$Type* $tmp100 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp100->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp100->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp103);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp100, &$s102, ((panda$core$Int64) { 10 }), $tmp103, ((panda$core$Bit) { true }));
    return $tmp100;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp107;
    org$pandalanguage$pandac$Type* $tmp104 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp104->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp104->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp107);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp104, &$s106, ((panda$core$Int64) { 10 }), $tmp107, ((panda$core$Bit) { true }));
    return $tmp104;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp111;
    org$pandalanguage$pandac$Type* $tmp108 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp108->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp111);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp108, &$s110, ((panda$core$Int64) { 15 }), $tmp111, ((panda$core$Bit) { true }));
    return $tmp108;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp115;
    org$pandalanguage$pandac$Type* $tmp112 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp112->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp112->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp115);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp112, &$s114, ((panda$core$Int64) { 18 }), $tmp115, ((panda$core$Bit) { true }));
    return $tmp112;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp119;
    org$pandalanguage$pandac$Type* $tmp116 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp116->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp116->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp119);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp116, &$s118, ((panda$core$Int64) { 19 }), $tmp119, ((panda$core$Bit) { true }));
    return $tmp116;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp123;
    org$pandalanguage$pandac$Type* $tmp120 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp120->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp120->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp123);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp120, &$s122, ((panda$core$Int64) { 10 }), $tmp123, ((panda$core$Bit) { true }));
    return $tmp120;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp127;
    org$pandalanguage$pandac$Type* $tmp124 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp124->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp124->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp127);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp124, &$s126, ((panda$core$Int64) { 10 }), $tmp127, ((panda$core$Bit) { true }));
    return $tmp124;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp131;
    org$pandalanguage$pandac$Type* $tmp128 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp128->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp128->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp131);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp128, &$s130, ((panda$core$Int64) { 10 }), $tmp131, ((panda$core$Bit) { true }));
    return $tmp128;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children132;
    org$pandalanguage$pandac$Position $tmp138;
    panda$collections$Array* $tmp133 = (panda$collections$Array*) malloc(40);
    $tmp133->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp133->refCount.value = 1;
    panda$collections$Array$init($tmp133);
    children132 = $tmp133;
    org$pandalanguage$pandac$Type* $tmp135 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp135->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp135->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp138);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp135, &$s137, ((panda$core$Int64) { 10 }), $tmp138, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children132, ((panda$core$Object*) $tmp135));
    panda$collections$Array$add$panda$collections$Array$T(children132, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp139 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp139->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp139->refCount.value = 1;
    panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s141, &$s142);
    panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s144);
    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp145, ((panda$core$Object*) p_t));
    panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s147);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp139, $tmp148, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children132), p_t->resolved);
    return $tmp139;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp152;
    org$pandalanguage$pandac$Type* $tmp149 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp149->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp149->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp152);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp149, &$s151, ((panda$core$Int64) { 16 }), $tmp152, ((panda$core$Bit) { true }));
    return $tmp149;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp155 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s154);
    bool $tmp153 = $tmp155.value;
    if ($tmp153) goto $l156;
    panda$core$Bit $tmp158 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s157);
    $tmp153 = $tmp158.value;
    $l156:;
    panda$core$Bit $tmp159 = { $tmp153 };
    return $tmp159;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp161 = $tmp162.value;
    if ($tmp161) goto $l163;
    panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp161 = $tmp164.value;
    $l163:;
    panda$core$Bit $tmp165 = { $tmp161 };
    bool $tmp160 = $tmp165.value;
    if ($tmp160) goto $l166;
    panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp160 = $tmp167.value;
    $l166:;
    panda$core$Bit $tmp168 = { $tmp160 };
    return $tmp168;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    switch (self->typeKind.value) {
        case 10:
        case 11:
        case 21:
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
    panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp169 = $tmp170.value;
    if ($tmp169) goto $l171;
    panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp169 = $tmp172.value;
    $l171:;
    panda$core$Bit $tmp173 = { $tmp169 };
    return $tmp173;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp175 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s174);
    return $tmp175;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp176.value) {
    {
        panda$core$Object* $tmp177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp178 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp177));
        return $tmp178;
    }
    }
    panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp179 = $tmp180.value;
    if (!$tmp179) goto $l181;
    panda$core$Object* $tmp182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp184 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp182))->name, &$s183);
    $tmp179 = $tmp184.value;
    $l181:;
    panda$core$Bit $tmp185 = { $tmp179 };
    return $tmp185;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes187;
    org$pandalanguage$pandac$Position $tmp196;
    panda$core$Bit $tmp186 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp186.value);
    panda$collections$Array* $tmp188 = (panda$collections$Array*) malloc(40);
    $tmp188->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp188->refCount.value = 1;
    panda$collections$Array$init($tmp188);
    subtypes187 = $tmp188;
    panda$collections$Array$add$panda$collections$Array$T(subtypes187, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp190 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp190->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp190->refCount.value = 1;
    panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s192, self->name);
    panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
    org$pandalanguage$pandac$Position$init(&$tmp196);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp190, $tmp195, ((panda$core$Int64) { 11 }), $tmp196, ((panda$collections$ListView*) subtypes187), ((panda$core$Bit) { true }));
    return $tmp190;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp197 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp197.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp198 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp199 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp198);
    if ($tmp199.value) {
    {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp200.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp201 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp201;
    }
    }
    org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp203 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp202);
    if ($tmp203.value) {
    {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp204.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp205 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp205;
    }
    }
    org$pandalanguage$pandac$Type* $tmp207 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp208 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp207);
    bool $tmp206 = $tmp208.value;
    if (!$tmp206) goto $l209;
    panda$core$Bit $tmp210 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp206 = $tmp210.value;
    $l209:;
    panda$core$Bit $tmp211 = { $tmp206 };
    if ($tmp211.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp213 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp212 = $tmp213.value;
    if (!$tmp212) goto $l214;
    org$pandalanguage$pandac$Type* $tmp215 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp216 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp215);
    $tmp212 = $tmp216.value;
    $l214:;
    panda$core$Bit $tmp217 = { $tmp212 };
    if ($tmp217.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp218 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp218;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found221;
    panda$collections$Array* remapped223;
    panda$core$MutableString* name226;
    panda$core$String* separator231;
    panda$core$Range$LTpanda$core$Int64$GT $tmp233;
    org$pandalanguage$pandac$Type* child253;
    panda$collections$Array* remapped276;
    panda$core$MutableString* name279;
    panda$core$String* separator283;
    panda$core$Range$LTpanda$core$Int64$GT $tmp287;
    org$pandalanguage$pandac$Type* child308;
    org$pandalanguage$pandac$Type* child331;
    panda$core$Int64 $tmp219 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp219, ((panda$core$Int64) { 0 }));
    if ($tmp220.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp222 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found221 = ((org$pandalanguage$pandac$Type*) $tmp222);
            if (((panda$core$Bit) { found221 != NULL }).value) {
            {
                return found221;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp224 = (panda$collections$Array*) malloc(40);
            $tmp224->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp224->refCount.value = 1;
            panda$collections$Array$init($tmp224);
            remapped223 = $tmp224;
            panda$core$MutableString* $tmp227 = (panda$core$MutableString*) malloc(40);
            $tmp227->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp227->refCount.value = 1;
            panda$core$Object* $tmp229 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp227, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp229))->name);
            name226 = $tmp227;
            panda$core$MutableString$append$panda$core$String(name226, &$s230);
            separator231 = &$s232;
            panda$core$Int64 $tmp234 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp233, ((panda$core$Int64) { 0 }), $tmp234, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp236 = $tmp233.start.value;
            panda$core$Int64 i235 = { $tmp236 };
            int64_t $tmp238 = $tmp233.end.value;
            int64_t $tmp239 = $tmp233.step.value;
            bool $tmp240 = $tmp233.inclusive.value;
            bool $tmp247 = $tmp239 > 0;
            if ($tmp247) goto $l245; else goto $l246;
            $l245:;
            if ($tmp240) goto $l248; else goto $l249;
            $l248:;
            if ($tmp236 <= $tmp238) goto $l241; else goto $l243;
            $l249:;
            if ($tmp236 < $tmp238) goto $l241; else goto $l243;
            $l246:;
            if ($tmp240) goto $l250; else goto $l251;
            $l250:;
            if ($tmp236 >= $tmp238) goto $l241; else goto $l243;
            $l251:;
            if ($tmp236 > $tmp238) goto $l241; else goto $l243;
            $l241:;
            {
                panda$core$Object* $tmp254 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, i235);
                org$pandalanguage$pandac$Type* $tmp255 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp254), p_types);
                child253 = $tmp255;
                panda$collections$Array$add$panda$collections$Array$T(remapped223, ((panda$core$Object*) child253));
                panda$core$Bit $tmp256 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i235, ((panda$core$Int64) { 0 }));
                if ($tmp256.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name226, separator231);
                    panda$core$MutableString$append$panda$core$String(name226, ((org$pandalanguage$pandac$Symbol*) child253)->name);
                    separator231 = &$s257;
                }
                }
            }
            $l244:;
            if ($tmp247) goto $l259; else goto $l260;
            $l259:;
            int64_t $tmp261 = $tmp238 - i235.value;
            if ($tmp240) goto $l262; else goto $l263;
            $l262:;
            if ($tmp261 >= $tmp239) goto $l258; else goto $l243;
            $l263:;
            if ($tmp261 > $tmp239) goto $l258; else goto $l243;
            $l260:;
            int64_t $tmp265 = i235.value - $tmp238;
            if ($tmp240) goto $l266; else goto $l267;
            $l266:;
            if ($tmp265 >= -$tmp239) goto $l258; else goto $l243;
            $l267:;
            if ($tmp265 > -$tmp239) goto $l258; else goto $l243;
            $l258:;
            i235.value += $tmp239;
            goto $l241;
            $l243:;
            panda$core$MutableString$append$panda$core$String(name226, &$s269);
            org$pandalanguage$pandac$Type* $tmp270 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp270->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp270->refCount.value = 1;
            panda$core$String* $tmp272 = panda$core$MutableString$convert$R$panda$core$String(name226);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp270, $tmp272, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped223), self->resolved);
            return $tmp270;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp274 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp273), p_types);
            org$pandalanguage$pandac$Type* $tmp275 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp274);
            return $tmp275;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp277 = (panda$collections$Array*) malloc(40);
            $tmp277->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp277->refCount.value = 1;
            panda$collections$Array$init($tmp277);
            remapped276 = $tmp277;
            panda$core$MutableString* $tmp280 = (panda$core$MutableString*) malloc(40);
            $tmp280->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp280->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp280, &$s282);
            name279 = $tmp280;
            separator283 = &$s284;
            panda$core$Int64 $tmp285 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp286 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp285, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp286.value);
            panda$core$Int64 $tmp288 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp289 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp288, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp287, ((panda$core$Int64) { 0 }), $tmp289, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp291 = $tmp287.start.value;
            panda$core$Int64 i290 = { $tmp291 };
            int64_t $tmp293 = $tmp287.end.value;
            int64_t $tmp294 = $tmp287.step.value;
            bool $tmp295 = $tmp287.inclusive.value;
            bool $tmp302 = $tmp294 > 0;
            if ($tmp302) goto $l300; else goto $l301;
            $l300:;
            if ($tmp295) goto $l303; else goto $l304;
            $l303:;
            if ($tmp291 <= $tmp293) goto $l296; else goto $l298;
            $l304:;
            if ($tmp291 < $tmp293) goto $l296; else goto $l298;
            $l301:;
            if ($tmp295) goto $l305; else goto $l306;
            $l305:;
            if ($tmp291 >= $tmp293) goto $l296; else goto $l298;
            $l306:;
            if ($tmp291 > $tmp293) goto $l296; else goto $l298;
            $l296:;
            {
                panda$core$Object* $tmp309 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, i290);
                org$pandalanguage$pandac$Type* $tmp310 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp309), p_types);
                child308 = $tmp310;
                panda$core$MutableString$append$panda$core$String(name279, separator283);
                panda$core$MutableString$append$panda$core$String(name279, ((org$pandalanguage$pandac$Symbol*) child308)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped276, ((panda$core$Object*) child308));
                separator283 = &$s311;
            }
            $l299:;
            if ($tmp302) goto $l313; else goto $l314;
            $l313:;
            int64_t $tmp315 = $tmp293 - i290.value;
            if ($tmp295) goto $l316; else goto $l317;
            $l316:;
            if ($tmp315 >= $tmp294) goto $l312; else goto $l298;
            $l317:;
            if ($tmp315 > $tmp294) goto $l312; else goto $l298;
            $l314:;
            int64_t $tmp319 = i290.value - $tmp293;
            if ($tmp295) goto $l320; else goto $l321;
            $l320:;
            if ($tmp319 >= -$tmp294) goto $l312; else goto $l298;
            $l321:;
            if ($tmp319 > -$tmp294) goto $l312; else goto $l298;
            $l312:;
            i290.value += $tmp294;
            goto $l296;
            $l298:;
            panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp323.value) {
            {
                panda$core$MutableString$append$panda$core$String(name279, &$s324);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name279, &$s325);
            }
            }
            panda$core$Int64 $tmp326 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp327 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp326, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp328 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, $tmp327);
            org$pandalanguage$pandac$Type* $tmp329 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp330 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp328), $tmp329);
            if ($tmp330.value) {
            {
                panda$core$Int64 $tmp332 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp332, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, $tmp333);
                org$pandalanguage$pandac$Type* $tmp335 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp334), p_types);
                child331 = $tmp335;
                panda$core$MutableString$append$panda$core$String(name279, ((org$pandalanguage$pandac$Symbol*) child331)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped276, ((panda$core$Object*) child331));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp336 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped276, ((panda$core$Object*) $tmp336));
            }
            }
            panda$core$MutableString$append$panda$core$String(name279, &$s337);
            org$pandalanguage$pandac$Type* $tmp338 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp338->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp338->refCount.value = 1;
            panda$core$String* $tmp340 = panda$core$MutableString$convert$R$panda$core$String(name279);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp338, $tmp340, self->typeKind, self->position, ((panda$collections$ListView*) remapped276), self->resolved);
            return $tmp338;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp341 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp341;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

