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

typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);

static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, 1 };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset) {
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit(self, p_name, p_typeKind, p_offset, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset, panda$core$Bit p_resolved) {
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->offset = p_offset;
    self->resolved = p_resolved;
    panda$collections$ImmutableArray* $tmp1 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp1->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp1);
    self->subtypes = $tmp1;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_offset, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_offset, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->offset = p_offset;
    self->resolved = p_resolved;
    panda$collections$ImmutableArray* $tmp3 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp3->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp3->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp3, p_subtypes);
    self->subtypes = $tmp3;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_offset, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name7;
    panda$core$String* separator11;
    panda$collections$Iterator* t$Iter13;
    org$pandalanguage$pandac$Type* t25;
    self->typeKind = ((panda$core$Int64) { 17 });
    panda$collections$ImmutableArray* $tmp5 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp5->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp5->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp5, p_subtypes);
    self->subtypes = $tmp5;
    panda$core$MutableString* $tmp8 = (panda$core$MutableString*) malloc(40);
    $tmp8->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp8->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp8, &$s10);
    name7 = $tmp8;
    separator11 = &$s12;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp14 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp14 = $tmp14->next;
        }
        $fn16 $tmp15 = $tmp14->methods[0];
        panda$collections$Iterator* $tmp17 = $tmp15(((panda$collections$Iterable*) p_subtypes));
        t$Iter13 = $tmp17;
        $l18:;
        ITable* $tmp20 = t$Iter13->$class->itable;
        while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp20 = $tmp20->next;
        }
        $fn22 $tmp21 = $tmp20->methods[0];
        panda$core$Bit $tmp23 = $tmp21(t$Iter13);
        panda$core$Bit $tmp24 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
        if (!$tmp24.value) goto $l19;
        {
            ITable* $tmp26 = t$Iter13->$class->itable;
            while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp26 = $tmp26->next;
            }
            $fn28 $tmp27 = $tmp26->methods[1];
            panda$core$Object* $tmp29 = $tmp27(t$Iter13);
            t25 = ((org$pandalanguage$pandac$Type*) $tmp29);
            panda$core$MutableString$append$panda$core$String(name7, separator11);
            panda$core$MutableString$append$panda$core$Object(name7, ((panda$core$Object*) t25));
            separator11 = &$s30;
            bool $tmp31 = self->resolved.value;
            if (!$tmp31) goto $l32;
            $tmp31 = t25->resolved.value;
            $l32:;
            panda$core$Bit $tmp33 = { $tmp31 };
            self->resolved = $tmp33;
        }
        goto $l18;
        $l19:;
    }
    panda$core$MutableString$append$panda$core$String(name7, &$s34);
    panda$core$String* $tmp35 = panda$core$MutableString$convert$R$panda$core$String(name7);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->offset, $tmp35);
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    return self->offset;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp36 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp36;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp37 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp37;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp38 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp38->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp38->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp38, &$s40, ((panda$core$Int64) { 14 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp38;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp41 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp41->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp41->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp41, &$s43, ((panda$core$Int64) { 23 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp41;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp44 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp44->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp44->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp44, &$s46, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp44;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes47;
    panda$collections$Array* $tmp48 = (panda$collections$Array*) malloc(40);
    $tmp48->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp48->refCount.value = 1;
    panda$collections$Array$init($tmp48);
    subtypes47 = $tmp48;
    org$pandalanguage$pandac$Type* $tmp50 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes47, ((panda$core$Object*) $tmp50));
    org$pandalanguage$pandac$Type* $tmp51 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp51->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp51, &$s53, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes47), ((panda$core$Bit) { true }));
    return $tmp51;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp54 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp54->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp54->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp54, &$s56, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp54;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp57 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp57->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp57->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp57, &$s59, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp57;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp60 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp60->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp60->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp60, &$s62, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp60;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp63 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp63->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp63->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp63, &$s65, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp63;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp66 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp66->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp66->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp66, &$s68, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp66;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp69 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp69->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp69->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp69, &$s71, ((panda$core$Int64) { 15 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp69;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp72 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp72->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp72->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp72, &$s74, ((panda$core$Int64) { 18 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp72;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp75 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp75->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp75->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp75, &$s77, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp75;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp78 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp78->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp78->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp78, &$s80, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp78;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp81->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp81->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp81, &$s83, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp81;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp84 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp84->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp84->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp84, &$s86, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp84;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children87;
    panda$collections$Array* $tmp88 = (panda$collections$Array*) malloc(40);
    $tmp88->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp88->refCount.value = 1;
    panda$collections$Array$init($tmp88);
    children87 = $tmp88;
    org$pandalanguage$pandac$Type* $tmp90 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp90->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp90->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp90, &$s92, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children87, ((panda$core$Object*) $tmp90));
    panda$collections$Array$add$panda$collections$Array$T(children87, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp93 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp93->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp93->refCount.value = 1;
    panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s95, &$s96);
    panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp99, ((panda$core$Object*) p_t));
    panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, &$s101);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp93, $tmp102, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->offset, ((panda$collections$ListView*) children87), p_t->resolved);
    return $tmp93;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp103 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp103->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp103->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp103, &$s105, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp103;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp108 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s107);
    bool $tmp106 = $tmp108.value;
    if ($tmp106) goto $l109;
    panda$core$Bit $tmp111 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s110);
    $tmp106 = $tmp111.value;
    $l109:;
    panda$core$Bit $tmp112 = { $tmp106 };
    return $tmp112;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp114 = $tmp115.value;
    if ($tmp114) goto $l116;
    panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp114 = $tmp117.value;
    $l116:;
    panda$core$Bit $tmp118 = { $tmp114 };
    bool $tmp113 = $tmp118.value;
    if ($tmp113) goto $l119;
    panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp113 = $tmp120.value;
    $l119:;
    panda$core$Bit $tmp121 = { $tmp113 };
    return $tmp121;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $match$4959122;
    {
        $match$4959122 = self->typeKind;
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4959122, ((panda$core$Int64) { 10 }));
        bool $tmp124 = $tmp125.value;
        if ($tmp124) goto $l126;
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4959122, ((panda$core$Int64) { 11 }));
        $tmp124 = $tmp127.value;
        $l126:;
        panda$core$Bit $tmp128 = { $tmp124 };
        bool $tmp123 = $tmp128.value;
        if ($tmp123) goto $l129;
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4959122, ((panda$core$Int64) { 21 }));
        $tmp123 = $tmp130.value;
        $l129:;
        panda$core$Bit $tmp131 = { $tmp123 };
        if ($tmp131.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp132 = $tmp133.value;
    if ($tmp132) goto $l134;
    panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp132 = $tmp135.value;
    $l134:;
    panda$core$Bit $tmp136 = { $tmp132 };
    return $tmp136;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp138 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s137);
    return $tmp138;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp139.value) {
    {
        panda$core$Object* $tmp140 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp141 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp140));
        return $tmp141;
    }
    }
    panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp142 = $tmp143.value;
    if (!$tmp142) goto $l144;
    panda$core$Object* $tmp145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp147 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp145))->name, &$s146);
    $tmp142 = $tmp147.value;
    $l144:;
    panda$core$Bit $tmp148 = { $tmp142 };
    return $tmp148;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes149;
    panda$collections$Array* $tmp150 = (panda$collections$Array*) malloc(40);
    $tmp150->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp150->refCount.value = 1;
    panda$collections$Array$init($tmp150);
    subtypes149 = $tmp150;
    panda$collections$Array$add$panda$collections$Array$T(subtypes149, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp152 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp152->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp152->refCount.value = 1;
    panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s154, self->name);
    panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s156);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp152, $tmp157, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes149), ((panda$core$Bit) { true }));
    return $tmp152;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp158 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp158.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp159 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp160 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp159);
    if ($tmp160.value) {
    {
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp161.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp162 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp162;
    }
    }
    org$pandalanguage$pandac$Type* $tmp163 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp164 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp163);
    if ($tmp164.value) {
    {
        panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp165.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp166 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp166;
    }
    }
    org$pandalanguage$pandac$Type* $tmp168 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp169 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp168);
    bool $tmp167 = $tmp169.value;
    if (!$tmp167) goto $l170;
    panda$core$Bit $tmp171 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp167 = $tmp171.value;
    $l170:;
    panda$core$Bit $tmp172 = { $tmp167 };
    if ($tmp172.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp174 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp173 = $tmp174.value;
    if (!$tmp173) goto $l175;
    org$pandalanguage$pandac$Type* $tmp176 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp177 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp176);
    $tmp173 = $tmp177.value;
    $l175:;
    panda$core$Bit $tmp178 = { $tmp173 };
    if ($tmp178.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp179;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$6595182;
    org$pandalanguage$pandac$Type* found184;
    panda$collections$Array* remapped187;
    panda$core$MutableString* name190;
    panda$core$String* separator195;
    panda$core$Range$LTpanda$core$Int64$GT $tmp197;
    org$pandalanguage$pandac$Type* child217;
    panda$collections$Array* remapped246;
    panda$core$MutableString* name249;
    panda$core$String* separator253;
    panda$core$Range$LTpanda$core$Int64$GT $tmp255;
    org$pandalanguage$pandac$Type* child276;
    org$pandalanguage$pandac$Type* child299;
    panda$core$Int64 $tmp180 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp180, ((panda$core$Int64) { 0 }));
    if ($tmp181.value) {
    {
        return self;
    }
    }
    {
        $match$6595182 = self->typeKind;
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6595182, ((panda$core$Int64) { 22 }));
        if ($tmp183.value) {
        {
            panda$core$Object* $tmp185 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found184 = ((org$pandalanguage$pandac$Type*) $tmp185);
            if (((panda$core$Bit) { found184 != NULL }).value) {
            {
                return found184;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6595182, ((panda$core$Int64) { 21 }));
        if ($tmp186.value) {
        {
            panda$collections$Array* $tmp188 = (panda$collections$Array*) malloc(40);
            $tmp188->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp188->refCount.value = 1;
            panda$collections$Array$init($tmp188);
            remapped187 = $tmp188;
            panda$core$MutableString* $tmp191 = (panda$core$MutableString*) malloc(40);
            $tmp191->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp191->refCount.value = 1;
            panda$core$Object* $tmp193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp191, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp193))->name);
            name190 = $tmp191;
            panda$core$MutableString$append$panda$core$String(name190, &$s194);
            separator195 = &$s196;
            panda$core$Int64 $tmp198 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp197, ((panda$core$Int64) { 0 }), $tmp198, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp200 = $tmp197.start.value;
            panda$core$Int64 i199 = { $tmp200 };
            int64_t $tmp202 = $tmp197.end.value;
            int64_t $tmp203 = $tmp197.step.value;
            bool $tmp204 = $tmp197.inclusive.value;
            bool $tmp211 = $tmp203 > 0;
            if ($tmp211) goto $l209; else goto $l210;
            $l209:;
            if ($tmp204) goto $l212; else goto $l213;
            $l212:;
            if ($tmp200 <= $tmp202) goto $l205; else goto $l207;
            $l213:;
            if ($tmp200 < $tmp202) goto $l205; else goto $l207;
            $l210:;
            if ($tmp204) goto $l214; else goto $l215;
            $l214:;
            if ($tmp200 >= $tmp202) goto $l205; else goto $l207;
            $l215:;
            if ($tmp200 > $tmp202) goto $l205; else goto $l207;
            $l205:;
            {
                panda$core$Object* $tmp218 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, i199);
                org$pandalanguage$pandac$Type* $tmp219 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp218), p_types);
                child217 = $tmp219;
                panda$collections$Array$add$panda$collections$Array$T(remapped187, ((panda$core$Object*) child217));
                panda$core$Bit $tmp220 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i199, ((panda$core$Int64) { 0 }));
                if ($tmp220.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name190, separator195);
                    panda$core$MutableString$append$panda$core$String(name190, ((org$pandalanguage$pandac$Symbol*) child217)->name);
                    separator195 = &$s221;
                }
                }
            }
            $l208:;
            if ($tmp211) goto $l223; else goto $l224;
            $l223:;
            int64_t $tmp225 = $tmp202 - i199.value;
            if ($tmp204) goto $l226; else goto $l227;
            $l226:;
            if ($tmp225 >= $tmp203) goto $l222; else goto $l207;
            $l227:;
            if ($tmp225 > $tmp203) goto $l222; else goto $l207;
            $l224:;
            int64_t $tmp229 = i199.value - $tmp202;
            if ($tmp204) goto $l230; else goto $l231;
            $l230:;
            if ($tmp229 >= -$tmp203) goto $l222; else goto $l207;
            $l231:;
            if ($tmp229 > -$tmp203) goto $l222; else goto $l207;
            $l222:;
            i199.value += $tmp203;
            goto $l205;
            $l207:;
            panda$core$MutableString$append$panda$core$String(name190, &$s233);
            org$pandalanguage$pandac$Type* $tmp234 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp234->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp234->refCount.value = 1;
            panda$core$String* $tmp236 = panda$core$MutableString$convert$R$panda$core$String(name190);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp234, $tmp236, ((panda$core$Int64) { 21 }), self->offset, ((panda$collections$ListView*) remapped187), self->resolved);
            return $tmp234;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6595182, ((panda$core$Int64) { 11 }));
        if ($tmp237.value) {
        {
            panda$core$Object* $tmp238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp239 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp238), p_types);
            org$pandalanguage$pandac$Type* $tmp240 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp239);
            return $tmp240;
        }
        }
        else {
        panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6595182, ((panda$core$Int64) { 25 }));
        bool $tmp241 = $tmp242.value;
        if ($tmp241) goto $l243;
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6595182, ((panda$core$Int64) { 24 }));
        $tmp241 = $tmp244.value;
        $l243:;
        panda$core$Bit $tmp245 = { $tmp241 };
        if ($tmp245.value) {
        {
            panda$collections$Array* $tmp247 = (panda$collections$Array*) malloc(40);
            $tmp247->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp247->refCount.value = 1;
            panda$collections$Array$init($tmp247);
            remapped246 = $tmp247;
            panda$core$MutableString* $tmp250 = (panda$core$MutableString*) malloc(40);
            $tmp250->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp250->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp250, &$s252);
            name249 = $tmp250;
            separator253 = &$s254;
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
                panda$core$MutableString$append$panda$core$String(name249, separator253);
                panda$core$MutableString$append$panda$core$String(name249, ((org$pandalanguage$pandac$Symbol*) child276)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped246, ((panda$core$Object*) child276));
                separator253 = &$s279;
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
                panda$core$MutableString$append$panda$core$String(name249, &$s292);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name249, &$s293);
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
                panda$core$MutableString$append$panda$core$String(name249, ((org$pandalanguage$pandac$Symbol*) child299)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped246, ((panda$core$Object*) child299));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp304 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped246, ((panda$core$Object*) $tmp304));
            }
            }
            panda$core$MutableString$append$panda$core$String(name249, &$s305);
            org$pandalanguage$pandac$Type* $tmp306 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp306->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp306->refCount.value = 1;
            panda$core$String* $tmp308 = panda$core$MutableString$convert$R$panda$core$String(name249);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp306, $tmp308, self->typeKind, self->offset, ((panda$collections$ListView*) remapped246), self->resolved);
            return $tmp306;
        }
        }
        else {
        {
            return self;
        }
        }
        }
        }
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

