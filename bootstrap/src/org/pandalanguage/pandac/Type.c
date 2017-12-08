#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
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

typedef panda$collections$Iterator* (*$fn28)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn40)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, 1 };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset) {
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit(self, p_name, p_typeKind, p_offset, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset, panda$core$Bit p_resolved) {
    self->parameter = NULL;
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
    self->parameter = NULL;
    panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp8 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s7);
    panda$core$Bit $tmp9 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp6, $tmp8);
    PANDA_ASSERT($tmp9.value);
    panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp12 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s11);
    panda$core$Bit $tmp13 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp10, $tmp12);
    PANDA_ASSERT($tmp13.value);
    panda$core$Bit $tmp14 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 22 }));
    PANDA_ASSERT($tmp14.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->offset = p_offset;
    self->resolved = p_resolved;
    panda$collections$ImmutableArray* $tmp15 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp15->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp15->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp15, p_subtypes);
    self->subtypes = $tmp15;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_offset, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name19;
    panda$core$String* separator23;
    panda$collections$Iterator* t$Iter25;
    org$pandalanguage$pandac$Type* t37;
    self->parameter = NULL;
    self->typeKind = ((panda$core$Int64) { 17 });
    panda$collections$ImmutableArray* $tmp17 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp17->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp17->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp17, p_subtypes);
    self->subtypes = $tmp17;
    panda$core$MutableString* $tmp20 = (panda$core$MutableString*) malloc(40);
    $tmp20->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp20->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp20, &$s22);
    name19 = $tmp20;
    separator23 = &$s24;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp26 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp26 = $tmp26->next;
        }
        $fn28 $tmp27 = $tmp26->methods[0];
        panda$collections$Iterator* $tmp29 = $tmp27(((panda$collections$Iterable*) p_subtypes));
        t$Iter25 = $tmp29;
        $l30:;
        ITable* $tmp32 = t$Iter25->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Bit $tmp35 = $tmp33(t$Iter25);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        if (!$tmp36.value) goto $l31;
        {
            ITable* $tmp38 = t$Iter25->$class->itable;
            while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp38 = $tmp38->next;
            }
            $fn40 $tmp39 = $tmp38->methods[1];
            panda$core$Object* $tmp41 = $tmp39(t$Iter25);
            t37 = ((org$pandalanguage$pandac$Type*) $tmp41);
            panda$core$MutableString$append$panda$core$String(name19, separator23);
            panda$core$MutableString$append$panda$core$Object(name19, ((panda$core$Object*) t37));
            separator23 = &$s42;
            bool $tmp43 = self->resolved.value;
            if (!$tmp43) goto $l44;
            $tmp43 = t37->resolved.value;
            $l44:;
            panda$core$Bit $tmp45 = { $tmp43 };
            self->resolved = $tmp45;
        }
        goto $l30;
        $l31:;
    }
    panda$core$MutableString$append$panda$core$String(name19, &$s46);
    panda$core$String* $tmp47 = panda$core$MutableString$convert$R$panda$core$String(name19);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->offset, $tmp47);
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s48, p_param->owner);
    panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, &$s50);
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s53);
    ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp54;
    self->typeKind = ((panda$core$Int64) { 22 });
    self->parameter = p_param;
    self->resolved = ((panda$core$Bit) { true });
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp55 = $tmp56.value;
    if ($tmp55) goto $l57;
    panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp55 = $tmp58.value;
    $l57:;
    panda$core$Bit $tmp59 = { $tmp55 };
    PANDA_ASSERT($tmp59.value);
    return self->offset;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp60 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp60;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp61 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp61;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp62 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp62->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp62->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp62, &$s64, ((panda$core$Int64) { 14 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp62;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp65 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp65->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp65->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp65, &$s67, ((panda$core$Int64) { 23 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp65;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp68 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp68->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp68->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp68, &$s70, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp68;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes71;
    panda$collections$Array* $tmp72 = (panda$collections$Array*) malloc(40);
    $tmp72->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp72->refCount.value = 1;
    panda$collections$Array$init($tmp72);
    subtypes71 = $tmp72;
    org$pandalanguage$pandac$Type* $tmp74 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes71, ((panda$core$Object*) $tmp74));
    org$pandalanguage$pandac$Type* $tmp75 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp75->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp75->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp75, &$s77, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes71), ((panda$core$Bit) { true }));
    return $tmp75;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp78 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp78->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp78->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp78, &$s80, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp78;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp81->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp81->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp81, &$s83, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp81;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp84 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp84->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp84->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp84, &$s86, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp84;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp87 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp87->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp87->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp87, &$s89, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp87;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp90 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp90->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp90->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp90, &$s92, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp90;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp93 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp93->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp93->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp93, &$s95, ((panda$core$Int64) { 15 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp93;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp96 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp96->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp96->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp96, &$s98, ((panda$core$Int64) { 18 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp96;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp99 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp99->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp99->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp99, &$s101, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp99;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp102 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp102->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp102->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp102, &$s104, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp102;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp105 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp105->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp105->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp105, &$s107, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp105;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp108 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp108->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp108, &$s110, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp108;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children111;
    panda$collections$Array* $tmp112 = (panda$collections$Array*) malloc(40);
    $tmp112->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp112->refCount.value = 1;
    panda$collections$Array$init($tmp112);
    children111 = $tmp112;
    org$pandalanguage$pandac$Type* $tmp114 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp114->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp114->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp114, &$s116, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children111, ((panda$core$Object*) $tmp114));
    panda$collections$Array$add$panda$collections$Array$T(children111, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp117 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp117->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp117->refCount.value = 1;
    panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s119, &$s120);
    panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s122);
    panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp123, ((panda$core$Object*) p_t));
    panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, &$s125);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp117, $tmp126, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->offset, ((panda$collections$ListView*) children111), p_t->resolved);
    return $tmp117;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp127 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp127->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp127->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp127, &$s129, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp127;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp132 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s131);
    bool $tmp130 = $tmp132.value;
    if ($tmp130) goto $l133;
    panda$core$Bit $tmp135 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s134);
    $tmp130 = $tmp135.value;
    $l133:;
    panda$core$Bit $tmp136 = { $tmp130 };
    return $tmp136;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp138 = $tmp139.value;
    if ($tmp138) goto $l140;
    panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp138 = $tmp141.value;
    $l140:;
    panda$core$Bit $tmp142 = { $tmp138 };
    bool $tmp137 = $tmp142.value;
    if ($tmp137) goto $l143;
    panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp137 = $tmp144.value;
    $l143:;
    panda$core$Bit $tmp145 = { $tmp137 };
    return $tmp145;
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
    panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp146 = $tmp147.value;
    if ($tmp146) goto $l148;
    panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp146 = $tmp149.value;
    $l148:;
    panda$core$Bit $tmp150 = { $tmp146 };
    return $tmp150;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp152 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s151);
    return $tmp152;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp153.value) {
    {
        panda$core$Object* $tmp154 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp155 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp154));
        return $tmp155;
    }
    }
    panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp156 = $tmp157.value;
    if (!$tmp156) goto $l158;
    panda$core$Object* $tmp159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp161 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp159))->name, &$s160);
    $tmp156 = $tmp161.value;
    $l158:;
    panda$core$Bit $tmp162 = { $tmp156 };
    return $tmp162;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes164;
    panda$core$Bit $tmp163 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp163.value);
    panda$collections$Array* $tmp165 = (panda$collections$Array*) malloc(40);
    $tmp165->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp165->refCount.value = 1;
    panda$collections$Array$init($tmp165);
    subtypes164 = $tmp165;
    panda$collections$Array$add$panda$collections$Array$T(subtypes164, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp167 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp167->refCount.value = 1;
    panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s169, self->name);
    panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s171);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp167, $tmp172, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes164), ((panda$core$Bit) { true }));
    return $tmp167;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp173 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp173.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp174 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp175 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp174);
    if ($tmp175.value) {
    {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp176.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp177 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp177;
    }
    }
    org$pandalanguage$pandac$Type* $tmp178 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp179 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp178);
    if ($tmp179.value) {
    {
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp180.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp181 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp181;
    }
    }
    org$pandalanguage$pandac$Type* $tmp183 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp184 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp183);
    bool $tmp182 = $tmp184.value;
    if (!$tmp182) goto $l185;
    panda$core$Bit $tmp186 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp182 = $tmp186.value;
    $l185:;
    panda$core$Bit $tmp187 = { $tmp182 };
    if ($tmp187.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp189 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp188 = $tmp189.value;
    if (!$tmp188) goto $l190;
    org$pandalanguage$pandac$Type* $tmp191 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp192 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp191);
    $tmp188 = $tmp192.value;
    $l190:;
    panda$core$Bit $tmp193 = { $tmp188 };
    if ($tmp193.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp194 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp194;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found197;
    panda$collections$Array* remapped199;
    panda$core$MutableString* name202;
    panda$core$String* separator207;
    panda$core$Range$LTpanda$core$Int64$GT $tmp209;
    org$pandalanguage$pandac$Type* child229;
    panda$collections$Array* remapped252;
    panda$core$MutableString* name255;
    panda$core$String* separator259;
    panda$core$Range$LTpanda$core$Int64$GT $tmp263;
    org$pandalanguage$pandac$Type* child284;
    org$pandalanguage$pandac$Type* child307;
    panda$core$Int64 $tmp195 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp195, ((panda$core$Int64) { 0 }));
    if ($tmp196.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp198 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found197 = ((org$pandalanguage$pandac$Type*) $tmp198);
            if (((panda$core$Bit) { found197 != NULL }).value) {
            {
                return found197;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp200 = (panda$collections$Array*) malloc(40);
            $tmp200->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp200->refCount.value = 1;
            panda$collections$Array$init($tmp200);
            remapped199 = $tmp200;
            panda$core$MutableString* $tmp203 = (panda$core$MutableString*) malloc(40);
            $tmp203->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp203->refCount.value = 1;
            panda$core$Object* $tmp205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp203, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp205))->name);
            name202 = $tmp203;
            panda$core$MutableString$append$panda$core$String(name202, &$s206);
            separator207 = &$s208;
            panda$core$Int64 $tmp210 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp209, ((panda$core$Int64) { 0 }), $tmp210, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp212 = $tmp209.start.value;
            panda$core$Int64 i211 = { $tmp212 };
            int64_t $tmp214 = $tmp209.end.value;
            int64_t $tmp215 = $tmp209.step.value;
            bool $tmp216 = $tmp209.inclusive.value;
            bool $tmp223 = $tmp215 > 0;
            if ($tmp223) goto $l221; else goto $l222;
            $l221:;
            if ($tmp216) goto $l224; else goto $l225;
            $l224:;
            if ($tmp212 <= $tmp214) goto $l217; else goto $l219;
            $l225:;
            if ($tmp212 < $tmp214) goto $l217; else goto $l219;
            $l222:;
            if ($tmp216) goto $l226; else goto $l227;
            $l226:;
            if ($tmp212 >= $tmp214) goto $l217; else goto $l219;
            $l227:;
            if ($tmp212 > $tmp214) goto $l217; else goto $l219;
            $l217:;
            {
                panda$core$Object* $tmp230 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, i211);
                org$pandalanguage$pandac$Type* $tmp231 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp230), p_types);
                child229 = $tmp231;
                panda$collections$Array$add$panda$collections$Array$T(remapped199, ((panda$core$Object*) child229));
                panda$core$Bit $tmp232 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i211, ((panda$core$Int64) { 0 }));
                if ($tmp232.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name202, separator207);
                    panda$core$MutableString$append$panda$core$String(name202, ((org$pandalanguage$pandac$Symbol*) child229)->name);
                    separator207 = &$s233;
                }
                }
            }
            $l220:;
            if ($tmp223) goto $l235; else goto $l236;
            $l235:;
            int64_t $tmp237 = $tmp214 - i211.value;
            if ($tmp216) goto $l238; else goto $l239;
            $l238:;
            if ($tmp237 >= $tmp215) goto $l234; else goto $l219;
            $l239:;
            if ($tmp237 > $tmp215) goto $l234; else goto $l219;
            $l236:;
            int64_t $tmp241 = i211.value - $tmp214;
            if ($tmp216) goto $l242; else goto $l243;
            $l242:;
            if ($tmp241 >= -$tmp215) goto $l234; else goto $l219;
            $l243:;
            if ($tmp241 > -$tmp215) goto $l234; else goto $l219;
            $l234:;
            i211.value += $tmp215;
            goto $l217;
            $l219:;
            panda$core$MutableString$append$panda$core$String(name202, &$s245);
            org$pandalanguage$pandac$Type* $tmp246 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp246->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp246->refCount.value = 1;
            panda$core$String* $tmp248 = panda$core$MutableString$convert$R$panda$core$String(name202);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp246, $tmp248, ((panda$core$Int64) { 21 }), self->offset, ((panda$collections$ListView*) remapped199), self->resolved);
            return $tmp246;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp249 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp250 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp249), p_types);
            org$pandalanguage$pandac$Type* $tmp251 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp250);
            return $tmp251;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp253 = (panda$collections$Array*) malloc(40);
            $tmp253->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp253->refCount.value = 1;
            panda$collections$Array$init($tmp253);
            remapped252 = $tmp253;
            panda$core$MutableString* $tmp256 = (panda$core$MutableString*) malloc(40);
            $tmp256->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp256->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp256, &$s258);
            name255 = $tmp256;
            separator259 = &$s260;
            panda$core$Int64 $tmp261 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp262 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp261, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp262.value);
            panda$core$Int64 $tmp264 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp265 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp264, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp263, ((panda$core$Int64) { 0 }), $tmp265, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp267 = $tmp263.start.value;
            panda$core$Int64 i266 = { $tmp267 };
            int64_t $tmp269 = $tmp263.end.value;
            int64_t $tmp270 = $tmp263.step.value;
            bool $tmp271 = $tmp263.inclusive.value;
            bool $tmp278 = $tmp270 > 0;
            if ($tmp278) goto $l276; else goto $l277;
            $l276:;
            if ($tmp271) goto $l279; else goto $l280;
            $l279:;
            if ($tmp267 <= $tmp269) goto $l272; else goto $l274;
            $l280:;
            if ($tmp267 < $tmp269) goto $l272; else goto $l274;
            $l277:;
            if ($tmp271) goto $l281; else goto $l282;
            $l281:;
            if ($tmp267 >= $tmp269) goto $l272; else goto $l274;
            $l282:;
            if ($tmp267 > $tmp269) goto $l272; else goto $l274;
            $l272:;
            {
                panda$core$Object* $tmp285 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, i266);
                org$pandalanguage$pandac$Type* $tmp286 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp285), p_types);
                child284 = $tmp286;
                panda$core$MutableString$append$panda$core$String(name255, separator259);
                panda$core$MutableString$append$panda$core$String(name255, ((org$pandalanguage$pandac$Symbol*) child284)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped252, ((panda$core$Object*) child284));
                separator259 = &$s287;
            }
            $l275:;
            if ($tmp278) goto $l289; else goto $l290;
            $l289:;
            int64_t $tmp291 = $tmp269 - i266.value;
            if ($tmp271) goto $l292; else goto $l293;
            $l292:;
            if ($tmp291 >= $tmp270) goto $l288; else goto $l274;
            $l293:;
            if ($tmp291 > $tmp270) goto $l288; else goto $l274;
            $l290:;
            int64_t $tmp295 = i266.value - $tmp269;
            if ($tmp271) goto $l296; else goto $l297;
            $l296:;
            if ($tmp295 >= -$tmp270) goto $l288; else goto $l274;
            $l297:;
            if ($tmp295 > -$tmp270) goto $l288; else goto $l274;
            $l288:;
            i266.value += $tmp270;
            goto $l272;
            $l274:;
            panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp299.value) {
            {
                panda$core$MutableString$append$panda$core$String(name255, &$s300);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name255, &$s301);
            }
            }
            panda$core$Int64 $tmp302 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp303 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp302, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp304 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, $tmp303);
            org$pandalanguage$pandac$Type* $tmp305 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp306 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp304), $tmp305);
            if ($tmp306.value) {
            {
                panda$core$Int64 $tmp308 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp309 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp308, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp310 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, $tmp309);
                org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp310), p_types);
                child307 = $tmp311;
                panda$core$MutableString$append$panda$core$String(name255, ((org$pandalanguage$pandac$Symbol*) child307)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped252, ((panda$core$Object*) child307));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp312 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped252, ((panda$core$Object*) $tmp312));
            }
            }
            panda$core$MutableString$append$panda$core$String(name255, &$s313);
            org$pandalanguage$pandac$Type* $tmp314 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp314->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp314->refCount.value = 1;
            panda$core$String* $tmp316 = panda$core$MutableString$convert$R$panda$core$String(name255);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp314, $tmp316, self->typeKind, self->offset, ((panda$collections$ListView*) remapped252), self->resolved);
            return $tmp314;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp317 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp317;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

