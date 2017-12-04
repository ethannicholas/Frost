#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Object.h"
#include "panda/collections/Array.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Range.h"
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}


typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef void (*$fn30)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn31)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn37)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn38)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn140)(panda$collections$ImmutableArray*, panda$core$Int64);
struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$core$Bit (*$fn142)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn147)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn161)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn164)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn167)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn170)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn173)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn177)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn180)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn184)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn188)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Int64 (*$fn192)(panda$collections$HashMap*);
typedef panda$core$Object* (*$fn198)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn207)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn210)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn214)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn235)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn237)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef void (*$fn240)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn241)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn255)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn258)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn261)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn263)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef org$pandalanguage$pandac$Type* (*$fn265)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn282)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn304)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn306)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef void (*$fn308)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn309)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn324)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn326)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn327)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn330)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn333)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Int64 (*$fn336)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn339)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn341)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef void (*$fn343)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn346)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn349)(panda$core$MutableString*);
org$pandalanguage$pandac$Type$Kind$class_type org$pandalanguage$pandac$Type$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, 1 };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, 1 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65\x3C", 17, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

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
            (($fn30) name7->$class->vtable[3])(name7, separator11);
            (($fn31) name7->$class->vtable[5])(name7, ((panda$core$Object*) t25));
            separator11 = &$s32;
            bool $tmp33 = self->resolved.value;
            if (!$tmp33) goto $l34;
            $tmp33 = t25->resolved.value;
            $l34:;
            panda$core$Bit $tmp35 = { $tmp33 };
            self->resolved = $tmp35;
        }
        goto $l18;
        $l19:;
    }
    (($fn37) name7->$class->vtable[3])(name7, &$s36);
    panda$core$String* $tmp39 = (($fn38) name7->$class->vtable[0])(name7);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->offset, $tmp39);
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    return self->offset;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp40 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp40;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp41 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp41;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp42, &$s44, ((panda$core$Int64) { 14 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp42;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp45 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp45->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp45->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp45, &$s47, ((panda$core$Int64) { 23 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp45;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp48 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp48->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp48->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp48, &$s50, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp48;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes51;
    panda$collections$Array* $tmp52 = (panda$collections$Array*) malloc(40);
    $tmp52->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp52->refCount.value = 1;
    panda$collections$Array$init($tmp52);
    subtypes51 = $tmp52;
    org$pandalanguage$pandac$Type* $tmp54 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes51, ((panda$core$Object*) $tmp54));
    org$pandalanguage$pandac$Type* $tmp55 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp55->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp55->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp55, &$s57, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes51), ((panda$core$Bit) { true }));
    return $tmp55;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp58 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp58->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp58->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp58, &$s60, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp58;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp61 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp61->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp61->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp61, &$s63, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp61;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp64 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp64->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp64->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp64, &$s66, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp64;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp67 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp67->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp67->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp67, &$s69, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp70 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp70->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp70->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp70, &$s72, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp70;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp73 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp73->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp73->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp73, &$s75, ((panda$core$Int64) { 15 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp73;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp76 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp76->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp76->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp76, &$s78, ((panda$core$Int64) { 18 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp79 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp79->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp79->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp79, &$s81, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp79;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp82 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp82->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp82->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp82, &$s84, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp82;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp85 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp85->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp85->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp85, &$s87, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp85;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp88 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp88->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp88->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp88, &$s90, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp88;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children91;
    panda$collections$Array* $tmp92 = (panda$collections$Array*) malloc(40);
    $tmp92->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp92->refCount.value = 1;
    panda$collections$Array$init($tmp92);
    children91 = $tmp92;
    org$pandalanguage$pandac$Type* $tmp94 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp94->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp94->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp94, &$s96, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children91, ((panda$core$Object*) $tmp94));
    panda$collections$Array$add$panda$collections$Array$T(children91, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp97 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp97->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp97->refCount.value = 1;
    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s99, ((panda$core$Object*) p_t));
    panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, &$s101);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp97, $tmp102, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->offset, ((panda$collections$ListView*) children91), p_t->resolved);
    return $tmp97;
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
    panda$core$Int64 $match$4945122;
    {
        $match$4945122 = self->typeKind;
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4945122, ((panda$core$Int64) { 10 }));
        bool $tmp124 = $tmp125.value;
        if ($tmp124) goto $l126;
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4945122, ((panda$core$Int64) { 11 }));
        $tmp124 = $tmp127.value;
        $l126:;
        panda$core$Bit $tmp128 = { $tmp124 };
        bool $tmp123 = $tmp128.value;
        if ($tmp123) goto $l129;
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4945122, ((panda$core$Int64) { 21 }));
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
        panda$core$Object* $tmp141 = (($fn140) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp143 = (($fn142) ((org$pandalanguage$pandac$Type*) $tmp141)->$class->vtable[11])(((org$pandalanguage$pandac$Type*) $tmp141));
        return $tmp143;
    }
    }
    panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp144 = $tmp145.value;
    if (!$tmp144) goto $l146;
    panda$core$Object* $tmp148 = (($fn147) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp150 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp148))->name, &$s149);
    $tmp144 = $tmp150.value;
    $l146:;
    panda$core$Bit $tmp151 = { $tmp144 };
    return $tmp151;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes152;
    panda$collections$Array* $tmp153 = (panda$collections$Array*) malloc(40);
    $tmp153->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp153->refCount.value = 1;
    panda$collections$Array$init($tmp153);
    subtypes152 = $tmp153;
    panda$collections$Array$add$panda$collections$Array$T(subtypes152, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp155 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp155->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp155->refCount.value = 1;
    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s157, self->name);
    panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp158, &$s159);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp155, $tmp160, ((panda$core$Int64) { 11 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes152), ((panda$core$Bit) { true }));
    return $tmp155;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp162 = (($fn161) self->$class->vtable[4])(self, ((panda$core$Object*) p_other));
    if ($tmp162.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp163 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp165 = (($fn164) self->$class->vtable[4])(self, ((panda$core$Object*) $tmp163));
    if ($tmp165.value) {
    {
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp166.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp168 = (($fn167) p_other->$class->vtable[12])(p_other);
        return $tmp168;
    }
    }
    org$pandalanguage$pandac$Type* $tmp169 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp171 = (($fn170) p_other->$class->vtable[4])(p_other, ((panda$core$Object*) $tmp169));
    if ($tmp171.value) {
    {
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp172.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp174 = (($fn173) self->$class->vtable[12])(self);
        return $tmp174;
    }
    }
    org$pandalanguage$pandac$Type* $tmp176 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp178 = (($fn177) self->$class->vtable[4])(self, ((panda$core$Object*) $tmp176));
    bool $tmp175 = $tmp178.value;
    if (!$tmp175) goto $l179;
    panda$core$Bit $tmp181 = (($fn180) p_other->$class->vtable[6])(p_other);
    $tmp175 = $tmp181.value;
    $l179:;
    panda$core$Bit $tmp182 = { $tmp175 };
    if ($tmp182.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp185 = (($fn184) self->$class->vtable[6])(self);
    bool $tmp183 = $tmp185.value;
    if (!$tmp183) goto $l186;
    org$pandalanguage$pandac$Type* $tmp187 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp189 = (($fn188) p_other->$class->vtable[4])(p_other, ((panda$core$Object*) $tmp187));
    $tmp183 = $tmp189.value;
    $l186:;
    panda$core$Bit $tmp190 = { $tmp183 };
    if ($tmp190.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp191 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp191;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$6580195;
    org$pandalanguage$pandac$Type* found197;
    panda$collections$Array* remapped201;
    panda$core$MutableString* name204;
    panda$core$String* separator211;
    panda$core$Range $tmp213;
    org$pandalanguage$pandac$Type* child234;
    panda$collections$Array* remapped272;
    panda$core$MutableString* name275;
    panda$core$String* separator279;
    panda$core$Range $tmp281;
    org$pandalanguage$pandac$Type* child303;
    org$pandalanguage$pandac$Type* child335;
    panda$core$Int64 $tmp193 = (($fn192) p_types->$class->vtable[11])(p_types);
    panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp193, ((panda$core$Int64) { 0 }));
    if ($tmp194.value) {
    {
        return self;
    }
    }
    {
        $match$6580195 = self->typeKind;
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6580195, ((panda$core$Int64) { 22 }));
        if ($tmp196.value) {
        {
            panda$core$Object* $tmp199 = (($fn198) p_types->$class->vtable[3])(p_types, ((panda$core$Object*) ((panda$collections$Key*) self->name)));
            found197 = ((org$pandalanguage$pandac$Type*) $tmp199);
            if (((panda$core$Bit) { found197 != NULL }).value) {
            {
                return found197;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6580195, ((panda$core$Int64) { 21 }));
        if ($tmp200.value) {
        {
            panda$collections$Array* $tmp202 = (panda$collections$Array*) malloc(40);
            $tmp202->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp202->refCount.value = 1;
            panda$collections$Array$init($tmp202);
            remapped201 = $tmp202;
            panda$core$MutableString* $tmp205 = (panda$core$MutableString*) malloc(40);
            $tmp205->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp205->refCount.value = 1;
            panda$core$Object* $tmp208 = (($fn207) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp205, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp208))->name);
            name204 = $tmp205;
            (($fn210) name204->$class->vtable[3])(name204, &$s209);
            separator211 = &$s212;
            panda$core$Int64 $tmp215 = (($fn214) self->subtypes->$class->vtable[3])(self->subtypes);
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp213, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp215)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp217 = ((panda$core$Int64$wrapper*) $tmp213.start)->value.value;
            panda$core$Int64 i216 = { $tmp217 };
            int64_t $tmp219 = ((panda$core$Int64$wrapper*) $tmp213.end)->value.value;
            int64_t $tmp220 = $tmp213.step.value;
            bool $tmp221 = $tmp213.inclusive.value;
            bool $tmp228 = $tmp220 > 0;
            if ($tmp228) goto $l226; else goto $l227;
            $l226:;
            if ($tmp221) goto $l229; else goto $l230;
            $l229:;
            if ($tmp217 <= $tmp219) goto $l222; else goto $l224;
            $l230:;
            if ($tmp217 < $tmp219) goto $l222; else goto $l224;
            $l227:;
            if ($tmp221) goto $l231; else goto $l232;
            $l231:;
            if ($tmp217 >= $tmp219) goto $l222; else goto $l224;
            $l232:;
            if ($tmp217 > $tmp219) goto $l222; else goto $l224;
            $l222:;
            {
                panda$core$Object* $tmp236 = (($fn235) self->subtypes->$class->vtable[2])(self->subtypes, i216);
                org$pandalanguage$pandac$Type* $tmp238 = (($fn237) ((org$pandalanguage$pandac$Type*) $tmp236)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp236), p_types);
                child234 = $tmp238;
                panda$collections$Array$add$panda$collections$Array$T(remapped201, ((panda$core$Object*) child234));
                panda$core$Bit $tmp239 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i216, ((panda$core$Int64) { 0 }));
                if ($tmp239.value) {
                {
                    (($fn240) name204->$class->vtable[3])(name204, separator211);
                    (($fn241) name204->$class->vtable[3])(name204, ((org$pandalanguage$pandac$Symbol*) child234)->name);
                    separator211 = &$s242;
                }
                }
            }
            $l225:;
            if ($tmp228) goto $l244; else goto $l245;
            $l244:;
            int64_t $tmp246 = $tmp219 - i216.value;
            if ($tmp221) goto $l247; else goto $l248;
            $l247:;
            if ($tmp246 >= $tmp220) goto $l243; else goto $l224;
            $l248:;
            if ($tmp246 > $tmp220) goto $l243; else goto $l224;
            $l245:;
            int64_t $tmp250 = i216.value - $tmp219;
            if ($tmp221) goto $l251; else goto $l252;
            $l251:;
            if ($tmp250 >= -$tmp220) goto $l243; else goto $l224;
            $l252:;
            if ($tmp250 > -$tmp220) goto $l243; else goto $l224;
            $l243:;
            i216.value += $tmp220;
            goto $l222;
            $l224:;
            (($fn255) name204->$class->vtable[3])(name204, &$s254);
            org$pandalanguage$pandac$Type* $tmp256 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp256->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp256->refCount.value = 1;
            panda$core$String* $tmp259 = (($fn258) name204->$class->vtable[0])(name204);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp256, $tmp259, ((panda$core$Int64) { 21 }), self->offset, ((panda$collections$ListView*) remapped201), self->resolved);
            return $tmp256;
        }
        }
        else {
        panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6580195, ((panda$core$Int64) { 11 }));
        if ($tmp260.value) {
        {
            panda$core$Object* $tmp262 = (($fn261) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp264 = (($fn263) ((org$pandalanguage$pandac$Type*) $tmp262)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp262), p_types);
            org$pandalanguage$pandac$Type* $tmp266 = (($fn265) $tmp264->$class->vtable[12])($tmp264);
            return $tmp266;
        }
        }
        else {
        panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6580195, ((panda$core$Int64) { 25 }));
        bool $tmp267 = $tmp268.value;
        if ($tmp267) goto $l269;
        panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6580195, ((panda$core$Int64) { 24 }));
        $tmp267 = $tmp270.value;
        $l269:;
        panda$core$Bit $tmp271 = { $tmp267 };
        if ($tmp271.value) {
        {
            panda$collections$Array* $tmp273 = (panda$collections$Array*) malloc(40);
            $tmp273->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp273->refCount.value = 1;
            panda$collections$Array$init($tmp273);
            remapped272 = $tmp273;
            panda$core$MutableString* $tmp276 = (panda$core$MutableString*) malloc(40);
            $tmp276->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp276->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp276, &$s278);
            name275 = $tmp276;
            separator279 = &$s280;
            panda$core$Int64 $tmp283 = (($fn282) self->subtypes->$class->vtable[3])(self->subtypes);
            panda$core$Int64 $tmp284 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp283, ((panda$core$Int64) { 1 }));
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp281, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp284)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp286 = ((panda$core$Int64$wrapper*) $tmp281.start)->value.value;
            panda$core$Int64 i285 = { $tmp286 };
            int64_t $tmp288 = ((panda$core$Int64$wrapper*) $tmp281.end)->value.value;
            int64_t $tmp289 = $tmp281.step.value;
            bool $tmp290 = $tmp281.inclusive.value;
            bool $tmp297 = $tmp289 > 0;
            if ($tmp297) goto $l295; else goto $l296;
            $l295:;
            if ($tmp290) goto $l298; else goto $l299;
            $l298:;
            if ($tmp286 <= $tmp288) goto $l291; else goto $l293;
            $l299:;
            if ($tmp286 < $tmp288) goto $l291; else goto $l293;
            $l296:;
            if ($tmp290) goto $l300; else goto $l301;
            $l300:;
            if ($tmp286 >= $tmp288) goto $l291; else goto $l293;
            $l301:;
            if ($tmp286 > $tmp288) goto $l291; else goto $l293;
            $l291:;
            {
                panda$core$Object* $tmp305 = (($fn304) self->subtypes->$class->vtable[2])(self->subtypes, i285);
                org$pandalanguage$pandac$Type* $tmp307 = (($fn306) ((org$pandalanguage$pandac$Type*) $tmp305)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp305), p_types);
                child303 = $tmp307;
                (($fn308) name275->$class->vtable[3])(name275, separator279);
                (($fn309) name275->$class->vtable[3])(name275, ((org$pandalanguage$pandac$Symbol*) child303)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped272, ((panda$core$Object*) child303));
                separator279 = &$s310;
            }
            $l294:;
            if ($tmp297) goto $l312; else goto $l313;
            $l312:;
            int64_t $tmp314 = $tmp288 - i285.value;
            if ($tmp290) goto $l315; else goto $l316;
            $l315:;
            if ($tmp314 >= $tmp289) goto $l311; else goto $l293;
            $l316:;
            if ($tmp314 > $tmp289) goto $l311; else goto $l293;
            $l313:;
            int64_t $tmp318 = i285.value - $tmp288;
            if ($tmp290) goto $l319; else goto $l320;
            $l319:;
            if ($tmp318 >= -$tmp289) goto $l311; else goto $l293;
            $l320:;
            if ($tmp318 > -$tmp289) goto $l311; else goto $l293;
            $l311:;
            i285.value += $tmp289;
            goto $l291;
            $l293:;
            panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp322.value) {
            {
                (($fn324) name275->$class->vtable[3])(name275, &$s323);
            }
            }
            else {
            {
                (($fn326) name275->$class->vtable[3])(name275, &$s325);
            }
            }
            panda$core$Int64 $tmp328 = (($fn327) self->subtypes->$class->vtable[3])(self->subtypes);
            panda$core$Int64 $tmp329 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp328, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp331 = (($fn330) self->subtypes->$class->vtable[2])(self->subtypes, $tmp329);
            org$pandalanguage$pandac$Type* $tmp332 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp334 = (($fn333) ((org$pandalanguage$pandac$Type*) $tmp331)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp331), ((panda$core$Object*) $tmp332));
            if ($tmp334.value) {
            {
                panda$core$Int64 $tmp337 = (($fn336) self->subtypes->$class->vtable[3])(self->subtypes);
                panda$core$Int64 $tmp338 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp337, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp340 = (($fn339) self->subtypes->$class->vtable[2])(self->subtypes, $tmp338);
                org$pandalanguage$pandac$Type* $tmp342 = (($fn341) ((org$pandalanguage$pandac$Type*) $tmp340)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp340), p_types);
                child335 = $tmp342;
                (($fn343) name275->$class->vtable[3])(name275, ((org$pandalanguage$pandac$Symbol*) child335)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped272, ((panda$core$Object*) child335));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp344 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped272, ((panda$core$Object*) $tmp344));
            }
            }
            (($fn346) name275->$class->vtable[3])(name275, &$s345);
            org$pandalanguage$pandac$Type* $tmp347 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp347->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp347->refCount.value = 1;
            panda$core$String* $tmp350 = (($fn349) name275->$class->vtable[0])(name275);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp347, $tmp350, self->typeKind, self->offset, ((panda$collections$ListView*) remapped272), self->resolved);
            return $tmp347;
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
    panda$core$Int64 $tmp351 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp351;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}
void org$pandalanguage$pandac$Type$Kind$init(org$pandalanguage$pandac$Type$Kind* self) {
}

