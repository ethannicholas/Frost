#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
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

typedef panda$collections$Iterator* (*$fn27)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn39)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, 1 };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset) {
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit(self, p_name, p_typeKind, p_offset, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset, panda$core$Bit p_resolved) {
    panda$core$Bit $tmp2 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s1);
    panda$core$Bit $tmp3 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2);
    PANDA_ASSERT($tmp3.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->offset = p_offset;
    self->resolved = p_resolved;
    panda$collections$ImmutableArray* $tmp4 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp4->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp4->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp4);
    self->subtypes = $tmp4;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_offset, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp8 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s7);
    panda$core$Bit $tmp9 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp6, $tmp8);
    PANDA_ASSERT($tmp9.value);
    panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp12 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s11);
    panda$core$Bit $tmp13 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp10, $tmp12);
    PANDA_ASSERT($tmp13.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->offset = p_offset;
    self->resolved = p_resolved;
    panda$collections$ImmutableArray* $tmp14 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp14->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp14->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp14, p_subtypes);
    self->subtypes = $tmp14;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_offset, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name18;
    panda$core$String* separator22;
    panda$collections$Iterator* t$Iter24;
    org$pandalanguage$pandac$Type* t36;
    self->typeKind = ((panda$core$Int64) { 17 });
    panda$collections$ImmutableArray* $tmp16 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp16->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp16->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp16, p_subtypes);
    self->subtypes = $tmp16;
    panda$core$MutableString* $tmp19 = (panda$core$MutableString*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp19->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp19, &$s21);
    name18 = $tmp19;
    separator22 = &$s23;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp25 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp25 = $tmp25->next;
        }
        $fn27 $tmp26 = $tmp25->methods[0];
        panda$collections$Iterator* $tmp28 = $tmp26(((panda$collections$Iterable*) p_subtypes));
        t$Iter24 = $tmp28;
        $l29:;
        ITable* $tmp31 = t$Iter24->$class->itable;
        while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp31 = $tmp31->next;
        }
        $fn33 $tmp32 = $tmp31->methods[0];
        panda$core$Bit $tmp34 = $tmp32(t$Iter24);
        panda$core$Bit $tmp35 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp34);
        if (!$tmp35.value) goto $l30;
        {
            ITable* $tmp37 = t$Iter24->$class->itable;
            while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp37 = $tmp37->next;
            }
            $fn39 $tmp38 = $tmp37->methods[1];
            panda$core$Object* $tmp40 = $tmp38(t$Iter24);
            t36 = ((org$pandalanguage$pandac$Type*) $tmp40);
            panda$core$MutableString$append$panda$core$String(name18, separator22);
            panda$core$MutableString$append$panda$core$Object(name18, ((panda$core$Object*) t36));
            separator22 = &$s41;
            bool $tmp42 = self->resolved.value;
            if (!$tmp42) goto $l43;
            $tmp42 = t36->resolved.value;
            $l43:;
            panda$core$Bit $tmp44 = { $tmp42 };
            self->resolved = $tmp44;
        }
        goto $l29;
        $l30:;
    }
    panda$core$MutableString$append$panda$core$String(name18, &$s45);
    panda$core$String* $tmp46 = panda$core$MutableString$convert$R$panda$core$String(name18);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->offset, $tmp46);
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp47 = $tmp48.value;
    if ($tmp47) goto $l49;
    panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp47 = $tmp50.value;
    $l49:;
    panda$core$Bit $tmp51 = { $tmp47 };
    PANDA_ASSERT($tmp51.value);
    return self->offset;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp52 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp52;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp53 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp53;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp54 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp54->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp54->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp54, &$s56, ((panda$core$Int64) { 14 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp54;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp57 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp57->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp57->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp57, &$s59, ((panda$core$Int64) { 23 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp57;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp60 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp60->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp60->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp60, &$s62, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp60;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes63;
    panda$collections$Array* $tmp64 = (panda$collections$Array*) malloc(40);
    $tmp64->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp64->refCount.value = 1;
    panda$collections$Array$init($tmp64);
    subtypes63 = $tmp64;
    org$pandalanguage$pandac$Type* $tmp66 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes63, ((panda$core$Object*) $tmp66));
    org$pandalanguage$pandac$Type* $tmp67 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp67->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp67->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp67, &$s69, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes63), ((panda$core$Bit) { true }));
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp70 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp70->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp70->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp70, &$s72, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp70;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp73 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp73->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp73->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp73, &$s75, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp73;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp76 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp76->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp76->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp76, &$s78, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp79 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp79->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp79->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp79, &$s81, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp79;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp82 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp82->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp82->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp82, &$s84, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp82;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp85 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp85->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp85->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp85, &$s87, ((panda$core$Int64) { 15 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp85;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp88 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp88->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp88->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp88, &$s90, ((panda$core$Int64) { 18 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp88;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp91 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp91->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp91->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp91, &$s93, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp91;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp94 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp94->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp94->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp94, &$s96, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp94;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp97 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp97->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp97->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp97, &$s99, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp97;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp100 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp100->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp100->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp100, &$s102, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp100;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children103;
    panda$collections$Array* $tmp104 = (panda$collections$Array*) malloc(40);
    $tmp104->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp104->refCount.value = 1;
    panda$collections$Array$init($tmp104);
    children103 = $tmp104;
    org$pandalanguage$pandac$Type* $tmp106 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp106->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp106->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp106, &$s108, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children103, ((panda$core$Object*) $tmp106));
    panda$collections$Array$add$panda$collections$Array$T(children103, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp109 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp109->refCount.value = 1;
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s111, &$s112);
    panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, &$s114);
    panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp115, ((panda$core$Object*) p_t));
    panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s117);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp109, $tmp118, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->offset, ((panda$collections$ListView*) children103), p_t->resolved);
    return $tmp109;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp119 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp119->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp119, &$s121, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp119;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp124 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s123);
    bool $tmp122 = $tmp124.value;
    if ($tmp122) goto $l125;
    panda$core$Bit $tmp127 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s126);
    $tmp122 = $tmp127.value;
    $l125:;
    panda$core$Bit $tmp128 = { $tmp122 };
    return $tmp128;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp130 = $tmp131.value;
    if ($tmp130) goto $l132;
    panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp130 = $tmp133.value;
    $l132:;
    panda$core$Bit $tmp134 = { $tmp130 };
    bool $tmp129 = $tmp134.value;
    if ($tmp129) goto $l135;
    panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp129 = $tmp136.value;
    $l135:;
    panda$core$Bit $tmp137 = { $tmp129 };
    return $tmp137;
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
    panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp138 = $tmp139.value;
    if ($tmp138) goto $l140;
    panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp138 = $tmp141.value;
    $l140:;
    panda$core$Bit $tmp142 = { $tmp138 };
    return $tmp142;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp144 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s143);
    return $tmp144;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp145.value) {
    {
        panda$core$Object* $tmp146 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp147 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp146));
        return $tmp147;
    }
    }
    panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp148 = $tmp149.value;
    if (!$tmp148) goto $l150;
    panda$core$Object* $tmp151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp153 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp151))->name, &$s152);
    $tmp148 = $tmp153.value;
    $l150:;
    panda$core$Bit $tmp154 = { $tmp148 };
    return $tmp154;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes156;
    panda$core$Bit $tmp155 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp155.value);
    panda$collections$Array* $tmp157 = (panda$collections$Array*) malloc(40);
    $tmp157->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp157->refCount.value = 1;
    panda$collections$Array$init($tmp157);
    subtypes156 = $tmp157;
    panda$collections$Array$add$panda$collections$Array$T(subtypes156, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp159 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp159->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp159->refCount.value = 1;
    panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s161, self->name);
    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, &$s163);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp159, $tmp164, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes156), ((panda$core$Bit) { true }));
    return $tmp159;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp165 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp165.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp166 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp167 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp166);
    if ($tmp167.value) {
    {
        panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp168.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp169 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp169;
    }
    }
    org$pandalanguage$pandac$Type* $tmp170 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp171 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp170);
    if ($tmp171.value) {
    {
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp172.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp173 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp173;
    }
    }
    org$pandalanguage$pandac$Type* $tmp175 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp176 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp175);
    bool $tmp174 = $tmp176.value;
    if (!$tmp174) goto $l177;
    panda$core$Bit $tmp178 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp174 = $tmp178.value;
    $l177:;
    panda$core$Bit $tmp179 = { $tmp174 };
    if ($tmp179.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp181 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp180 = $tmp181.value;
    if (!$tmp180) goto $l182;
    org$pandalanguage$pandac$Type* $tmp183 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp184 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp183);
    $tmp180 = $tmp184.value;
    $l182:;
    panda$core$Bit $tmp185 = { $tmp180 };
    if ($tmp185.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp186;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found189;
    panda$collections$Array* remapped191;
    panda$core$MutableString* name194;
    panda$core$String* separator199;
    panda$core$Range$LTpanda$core$Int64$GT $tmp201;
    org$pandalanguage$pandac$Type* child221;
    panda$collections$Array* remapped244;
    panda$core$MutableString* name247;
    panda$core$String* separator251;
    panda$core$Range$LTpanda$core$Int64$GT $tmp255;
    org$pandalanguage$pandac$Type* child276;
    org$pandalanguage$pandac$Type* child299;
    panda$core$Int64 $tmp187 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp187, ((panda$core$Int64) { 0 }));
    if ($tmp188.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp190 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found189 = ((org$pandalanguage$pandac$Type*) $tmp190);
            if (((panda$core$Bit) { found189 != NULL }).value) {
            {
                return found189;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp192 = (panda$collections$Array*) malloc(40);
            $tmp192->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp192->refCount.value = 1;
            panda$collections$Array$init($tmp192);
            remapped191 = $tmp192;
            panda$core$MutableString* $tmp195 = (panda$core$MutableString*) malloc(40);
            $tmp195->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp195->refCount.value = 1;
            panda$core$Object* $tmp197 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp195, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp197))->name);
            name194 = $tmp195;
            panda$core$MutableString$append$panda$core$String(name194, &$s198);
            separator199 = &$s200;
            panda$core$Int64 $tmp202 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp201, ((panda$core$Int64) { 0 }), $tmp202, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp204 = $tmp201.start.value;
            panda$core$Int64 i203 = { $tmp204 };
            int64_t $tmp206 = $tmp201.end.value;
            int64_t $tmp207 = $tmp201.step.value;
            bool $tmp208 = $tmp201.inclusive.value;
            bool $tmp215 = $tmp207 > 0;
            if ($tmp215) goto $l213; else goto $l214;
            $l213:;
            if ($tmp208) goto $l216; else goto $l217;
            $l216:;
            if ($tmp204 <= $tmp206) goto $l209; else goto $l211;
            $l217:;
            if ($tmp204 < $tmp206) goto $l209; else goto $l211;
            $l214:;
            if ($tmp208) goto $l218; else goto $l219;
            $l218:;
            if ($tmp204 >= $tmp206) goto $l209; else goto $l211;
            $l219:;
            if ($tmp204 > $tmp206) goto $l209; else goto $l211;
            $l209:;
            {
                panda$core$Object* $tmp222 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, i203);
                org$pandalanguage$pandac$Type* $tmp223 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp222), p_types);
                child221 = $tmp223;
                panda$collections$Array$add$panda$collections$Array$T(remapped191, ((panda$core$Object*) child221));
                panda$core$Bit $tmp224 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i203, ((panda$core$Int64) { 0 }));
                if ($tmp224.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name194, separator199);
                    panda$core$MutableString$append$panda$core$String(name194, ((org$pandalanguage$pandac$Symbol*) child221)->name);
                    separator199 = &$s225;
                }
                }
            }
            $l212:;
            if ($tmp215) goto $l227; else goto $l228;
            $l227:;
            int64_t $tmp229 = $tmp206 - i203.value;
            if ($tmp208) goto $l230; else goto $l231;
            $l230:;
            if ($tmp229 >= $tmp207) goto $l226; else goto $l211;
            $l231:;
            if ($tmp229 > $tmp207) goto $l226; else goto $l211;
            $l228:;
            int64_t $tmp233 = i203.value - $tmp206;
            if ($tmp208) goto $l234; else goto $l235;
            $l234:;
            if ($tmp233 >= -$tmp207) goto $l226; else goto $l211;
            $l235:;
            if ($tmp233 > -$tmp207) goto $l226; else goto $l211;
            $l226:;
            i203.value += $tmp207;
            goto $l209;
            $l211:;
            panda$core$MutableString$append$panda$core$String(name194, &$s237);
            org$pandalanguage$pandac$Type* $tmp238 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp238->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp238->refCount.value = 1;
            panda$core$String* $tmp240 = panda$core$MutableString$convert$R$panda$core$String(name194);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp238, $tmp240, ((panda$core$Int64) { 21 }), self->offset, ((panda$collections$ListView*) remapped191), self->resolved);
            return $tmp238;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp241 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp242 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp241), p_types);
            org$pandalanguage$pandac$Type* $tmp243 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp242);
            return $tmp243;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp245 = (panda$collections$Array*) malloc(40);
            $tmp245->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp245->refCount.value = 1;
            panda$collections$Array$init($tmp245);
            remapped244 = $tmp245;
            panda$core$MutableString* $tmp248 = (panda$core$MutableString*) malloc(40);
            $tmp248->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp248->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp248, &$s250);
            name247 = $tmp248;
            separator251 = &$s252;
            panda$core$Int64 $tmp253 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp254 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp253, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp254.value);
            panda$core$Int64 $tmp256 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp257 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp256, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp255, ((panda$core$Int64) { 0 }), $tmp257, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp259 = $tmp255.start.value;
            panda$core$Int64 i258 = { $tmp259 };
            int64_t $tmp261 = $tmp255.end.value;
            int64_t $tmp262 = $tmp255.step.value;
            bool $tmp263 = $tmp255.inclusive.value;
            bool $tmp270 = $tmp262 > 0;
            if ($tmp270) goto $l268; else goto $l269;
            $l268:;
            if ($tmp263) goto $l271; else goto $l272;
            $l271:;
            if ($tmp259 <= $tmp261) goto $l264; else goto $l266;
            $l272:;
            if ($tmp259 < $tmp261) goto $l264; else goto $l266;
            $l269:;
            if ($tmp263) goto $l273; else goto $l274;
            $l273:;
            if ($tmp259 >= $tmp261) goto $l264; else goto $l266;
            $l274:;
            if ($tmp259 > $tmp261) goto $l264; else goto $l266;
            $l264:;
            {
                panda$core$Object* $tmp277 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, i258);
                org$pandalanguage$pandac$Type* $tmp278 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp277), p_types);
                child276 = $tmp278;
                panda$core$MutableString$append$panda$core$String(name247, separator251);
                panda$core$MutableString$append$panda$core$String(name247, ((org$pandalanguage$pandac$Symbol*) child276)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped244, ((panda$core$Object*) child276));
                separator251 = &$s279;
            }
            $l267:;
            if ($tmp270) goto $l281; else goto $l282;
            $l281:;
            int64_t $tmp283 = $tmp261 - i258.value;
            if ($tmp263) goto $l284; else goto $l285;
            $l284:;
            if ($tmp283 >= $tmp262) goto $l280; else goto $l266;
            $l285:;
            if ($tmp283 > $tmp262) goto $l280; else goto $l266;
            $l282:;
            int64_t $tmp287 = i258.value - $tmp261;
            if ($tmp263) goto $l288; else goto $l289;
            $l288:;
            if ($tmp287 >= -$tmp262) goto $l280; else goto $l266;
            $l289:;
            if ($tmp287 > -$tmp262) goto $l280; else goto $l266;
            $l280:;
            i258.value += $tmp262;
            goto $l264;
            $l266:;
            panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp291.value) {
            {
                panda$core$MutableString$append$panda$core$String(name247, &$s292);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name247, &$s293);
            }
            }
            panda$core$Int64 $tmp294 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp295 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp294, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp296 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, $tmp295);
            org$pandalanguage$pandac$Type* $tmp297 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp298 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp296), $tmp297);
            if ($tmp298.value) {
            {
                panda$core$Int64 $tmp300 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp301 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp300, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, $tmp301);
                org$pandalanguage$pandac$Type* $tmp303 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp302), p_types);
                child299 = $tmp303;
                panda$core$MutableString$append$panda$core$String(name247, ((org$pandalanguage$pandac$Symbol*) child299)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped244, ((panda$core$Object*) child299));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp304 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped244, ((panda$core$Object*) $tmp304));
            }
            }
            panda$core$MutableString$append$panda$core$String(name247, &$s305);
            org$pandalanguage$pandac$Type* $tmp306 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp306->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp306->refCount.value = 1;
            panda$core$String* $tmp308 = panda$core$MutableString$convert$R$panda$core$String(name247);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp306, $tmp308, self->typeKind, self->offset, ((panda$collections$ListView*) remapped244), self->resolved);
            return $tmp306;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp309 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp309;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

