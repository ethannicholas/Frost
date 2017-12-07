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
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
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
typedef void (*$fn30)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn31)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn37)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn38)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn144)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn146)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn151)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn165)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn168)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn171)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn174)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn177)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn181)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn184)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn188)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn192)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Int64 (*$fn196)(panda$collections$HashMap*);
typedef panda$core$Object* (*$fn202)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn211)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn214)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn218)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn239)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn241)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef void (*$fn244)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn245)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn259)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn262)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn265)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn267)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef org$pandalanguage$pandac$Type* (*$fn269)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn286)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn308)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn310)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef void (*$fn312)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn313)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn328)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn330)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn331)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn334)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn337)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Int64 (*$fn340)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn343)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn345)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef void (*$fn347)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn350)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn353)(panda$core$MutableString*);

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
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x70\x65\x63\x69\x61\x6C\x69\x7A\x65\x64\x52\x61\x6E\x67\x65", 27, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x70\x65\x63\x69\x61\x6C\x69\x7A\x65\x64\x52\x61\x6E\x67\x65", 27, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x70\x65\x63\x69\x61\x6C\x69\x7A\x65\x64\x52\x61\x6E\x67\x65", 27, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

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
    panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s99, &$s100);
    panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s102);
    panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp103, ((panda$core$Object*) p_t));
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, &$s105);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp97, $tmp106, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->offset, ((panda$collections$ListView*) children91), p_t->resolved);
    return $tmp97;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp107 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp107->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp107, &$s109, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp107;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp112 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s111);
    bool $tmp110 = $tmp112.value;
    if ($tmp110) goto $l113;
    panda$core$Bit $tmp115 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s114);
    $tmp110 = $tmp115.value;
    $l113:;
    panda$core$Bit $tmp116 = { $tmp110 };
    return $tmp116;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp118 = $tmp119.value;
    if ($tmp118) goto $l120;
    panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp118 = $tmp121.value;
    $l120:;
    panda$core$Bit $tmp122 = { $tmp118 };
    bool $tmp117 = $tmp122.value;
    if ($tmp117) goto $l123;
    panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp117 = $tmp124.value;
    $l123:;
    panda$core$Bit $tmp125 = { $tmp117 };
    return $tmp125;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $match$4952126;
    {
        $match$4952126 = self->typeKind;
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4952126, ((panda$core$Int64) { 10 }));
        bool $tmp128 = $tmp129.value;
        if ($tmp128) goto $l130;
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4952126, ((panda$core$Int64) { 11 }));
        $tmp128 = $tmp131.value;
        $l130:;
        panda$core$Bit $tmp132 = { $tmp128 };
        bool $tmp127 = $tmp132.value;
        if ($tmp127) goto $l133;
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4952126, ((panda$core$Int64) { 21 }));
        $tmp127 = $tmp134.value;
        $l133:;
        panda$core$Bit $tmp135 = { $tmp127 };
        if ($tmp135.value) {
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
    panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp136 = $tmp137.value;
    if ($tmp136) goto $l138;
    panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp136 = $tmp139.value;
    $l138:;
    panda$core$Bit $tmp140 = { $tmp136 };
    return $tmp140;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp142 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s141);
    return $tmp142;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp143.value) {
    {
        panda$core$Object* $tmp145 = (($fn144) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp147 = (($fn146) ((org$pandalanguage$pandac$Type*) $tmp145)->$class->vtable[11])(((org$pandalanguage$pandac$Type*) $tmp145));
        return $tmp147;
    }
    }
    panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp148 = $tmp149.value;
    if (!$tmp148) goto $l150;
    panda$core$Object* $tmp152 = (($fn151) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp154 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp152))->name, &$s153);
    $tmp148 = $tmp154.value;
    $l150:;
    panda$core$Bit $tmp155 = { $tmp148 };
    return $tmp155;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes156;
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
    panda$core$Bit $tmp166 = (($fn165) self->$class->vtable[4])(self, ((panda$core$Object*) p_other));
    if ($tmp166.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp167 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp169 = (($fn168) self->$class->vtable[4])(self, ((panda$core$Object*) $tmp167));
    if ($tmp169.value) {
    {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp170.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp172 = (($fn171) p_other->$class->vtable[12])(p_other);
        return $tmp172;
    }
    }
    org$pandalanguage$pandac$Type* $tmp173 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp175 = (($fn174) p_other->$class->vtable[4])(p_other, ((panda$core$Object*) $tmp173));
    if ($tmp175.value) {
    {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp176.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp178 = (($fn177) self->$class->vtable[12])(self);
        return $tmp178;
    }
    }
    org$pandalanguage$pandac$Type* $tmp180 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp182 = (($fn181) self->$class->vtable[4])(self, ((panda$core$Object*) $tmp180));
    bool $tmp179 = $tmp182.value;
    if (!$tmp179) goto $l183;
    panda$core$Bit $tmp185 = (($fn184) p_other->$class->vtable[6])(p_other);
    $tmp179 = $tmp185.value;
    $l183:;
    panda$core$Bit $tmp186 = { $tmp179 };
    if ($tmp186.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp189 = (($fn188) self->$class->vtable[6])(self);
    bool $tmp187 = $tmp189.value;
    if (!$tmp187) goto $l190;
    org$pandalanguage$pandac$Type* $tmp191 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp193 = (($fn192) p_other->$class->vtable[4])(p_other, ((panda$core$Object*) $tmp191));
    $tmp187 = $tmp193.value;
    $l190:;
    panda$core$Bit $tmp194 = { $tmp187 };
    if ($tmp194.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp195 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp195;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$6588199;
    org$pandalanguage$pandac$Type* found201;
    panda$collections$Array* remapped205;
    panda$core$MutableString* name208;
    panda$core$String* separator215;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp217;
    org$pandalanguage$pandac$Type* child238;
    panda$collections$Array* remapped276;
    panda$core$MutableString* name279;
    panda$core$String* separator283;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp285;
    org$pandalanguage$pandac$Type* child307;
    org$pandalanguage$pandac$Type* child339;
    panda$core$Int64 $tmp197 = (($fn196) p_types->$class->vtable[11])(p_types);
    panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp197, ((panda$core$Int64) { 0 }));
    if ($tmp198.value) {
    {
        return self;
    }
    }
    {
        $match$6588199 = self->typeKind;
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588199, ((panda$core$Int64) { 22 }));
        if ($tmp200.value) {
        {
            panda$core$Object* $tmp203 = (($fn202) p_types->$class->vtable[3])(p_types, ((panda$core$Object*) ((panda$collections$Key*) self->name)));
            found201 = ((org$pandalanguage$pandac$Type*) $tmp203);
            if (((panda$core$Bit) { found201 != NULL }).value) {
            {
                return found201;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588199, ((panda$core$Int64) { 21 }));
        if ($tmp204.value) {
        {
            panda$collections$Array* $tmp206 = (panda$collections$Array*) malloc(40);
            $tmp206->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp206->refCount.value = 1;
            panda$collections$Array$init($tmp206);
            remapped205 = $tmp206;
            panda$core$MutableString* $tmp209 = (panda$core$MutableString*) malloc(40);
            $tmp209->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp209->refCount.value = 1;
            panda$core$Object* $tmp212 = (($fn211) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp209, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp212))->name);
            name208 = $tmp209;
            (($fn214) name208->$class->vtable[3])(name208, &$s213);
            separator215 = &$s216;
            panda$core$Int64 $tmp219 = (($fn218) self->subtypes->$class->vtable[3])(self->subtypes);
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp217, ((panda$core$Int64) { 0 }), $tmp219, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp221 = $tmp217.start.value;
            panda$core$Int64 i220 = { $tmp221 };
            int64_t $tmp223 = $tmp217.end.value;
            int64_t $tmp224 = $tmp217.step.value;
            bool $tmp225 = $tmp217.inclusive.value;
            bool $tmp232 = $tmp224 > 0;
            if ($tmp232) goto $l230; else goto $l231;
            $l230:;
            if ($tmp225) goto $l233; else goto $l234;
            $l233:;
            if ($tmp221 <= $tmp223) goto $l226; else goto $l228;
            $l234:;
            if ($tmp221 < $tmp223) goto $l226; else goto $l228;
            $l231:;
            if ($tmp225) goto $l235; else goto $l236;
            $l235:;
            if ($tmp221 >= $tmp223) goto $l226; else goto $l228;
            $l236:;
            if ($tmp221 > $tmp223) goto $l226; else goto $l228;
            $l226:;
            {
                panda$core$Object* $tmp240 = (($fn239) self->subtypes->$class->vtable[2])(self->subtypes, i220);
                org$pandalanguage$pandac$Type* $tmp242 = (($fn241) ((org$pandalanguage$pandac$Type*) $tmp240)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp240), p_types);
                child238 = $tmp242;
                panda$collections$Array$add$panda$collections$Array$T(remapped205, ((panda$core$Object*) child238));
                panda$core$Bit $tmp243 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i220, ((panda$core$Int64) { 0 }));
                if ($tmp243.value) {
                {
                    (($fn244) name208->$class->vtable[3])(name208, separator215);
                    (($fn245) name208->$class->vtable[3])(name208, ((org$pandalanguage$pandac$Symbol*) child238)->name);
                    separator215 = &$s246;
                }
                }
            }
            $l229:;
            if ($tmp232) goto $l248; else goto $l249;
            $l248:;
            int64_t $tmp250 = $tmp223 - i220.value;
            if ($tmp225) goto $l251; else goto $l252;
            $l251:;
            if ($tmp250 >= $tmp224) goto $l247; else goto $l228;
            $l252:;
            if ($tmp250 > $tmp224) goto $l247; else goto $l228;
            $l249:;
            int64_t $tmp254 = i220.value - $tmp223;
            if ($tmp225) goto $l255; else goto $l256;
            $l255:;
            if ($tmp254 >= -$tmp224) goto $l247; else goto $l228;
            $l256:;
            if ($tmp254 > -$tmp224) goto $l247; else goto $l228;
            $l247:;
            i220.value += $tmp224;
            goto $l226;
            $l228:;
            (($fn259) name208->$class->vtable[3])(name208, &$s258);
            org$pandalanguage$pandac$Type* $tmp260 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp260->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp260->refCount.value = 1;
            panda$core$String* $tmp263 = (($fn262) name208->$class->vtable[0])(name208);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp260, $tmp263, ((panda$core$Int64) { 21 }), self->offset, ((panda$collections$ListView*) remapped205), self->resolved);
            return $tmp260;
        }
        }
        else {
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588199, ((panda$core$Int64) { 11 }));
        if ($tmp264.value) {
        {
            panda$core$Object* $tmp266 = (($fn265) self->subtypes->$class->vtable[2])(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp268 = (($fn267) ((org$pandalanguage$pandac$Type*) $tmp266)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp266), p_types);
            org$pandalanguage$pandac$Type* $tmp270 = (($fn269) $tmp268->$class->vtable[12])($tmp268);
            return $tmp270;
        }
        }
        else {
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588199, ((panda$core$Int64) { 25 }));
        bool $tmp271 = $tmp272.value;
        if ($tmp271) goto $l273;
        panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588199, ((panda$core$Int64) { 24 }));
        $tmp271 = $tmp274.value;
        $l273:;
        panda$core$Bit $tmp275 = { $tmp271 };
        if ($tmp275.value) {
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
            panda$core$Int64 $tmp287 = (($fn286) self->subtypes->$class->vtable[3])(self->subtypes);
            panda$core$Int64 $tmp288 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp287, ((panda$core$Int64) { 1 }));
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp285, ((panda$core$Int64) { 0 }), $tmp288, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp290 = $tmp285.start.value;
            panda$core$Int64 i289 = { $tmp290 };
            int64_t $tmp292 = $tmp285.end.value;
            int64_t $tmp293 = $tmp285.step.value;
            bool $tmp294 = $tmp285.inclusive.value;
            bool $tmp301 = $tmp293 > 0;
            if ($tmp301) goto $l299; else goto $l300;
            $l299:;
            if ($tmp294) goto $l302; else goto $l303;
            $l302:;
            if ($tmp290 <= $tmp292) goto $l295; else goto $l297;
            $l303:;
            if ($tmp290 < $tmp292) goto $l295; else goto $l297;
            $l300:;
            if ($tmp294) goto $l304; else goto $l305;
            $l304:;
            if ($tmp290 >= $tmp292) goto $l295; else goto $l297;
            $l305:;
            if ($tmp290 > $tmp292) goto $l295; else goto $l297;
            $l295:;
            {
                panda$core$Object* $tmp309 = (($fn308) self->subtypes->$class->vtable[2])(self->subtypes, i289);
                org$pandalanguage$pandac$Type* $tmp311 = (($fn310) ((org$pandalanguage$pandac$Type*) $tmp309)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp309), p_types);
                child307 = $tmp311;
                (($fn312) name279->$class->vtable[3])(name279, separator283);
                (($fn313) name279->$class->vtable[3])(name279, ((org$pandalanguage$pandac$Symbol*) child307)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped276, ((panda$core$Object*) child307));
                separator283 = &$s314;
            }
            $l298:;
            if ($tmp301) goto $l316; else goto $l317;
            $l316:;
            int64_t $tmp318 = $tmp292 - i289.value;
            if ($tmp294) goto $l319; else goto $l320;
            $l319:;
            if ($tmp318 >= $tmp293) goto $l315; else goto $l297;
            $l320:;
            if ($tmp318 > $tmp293) goto $l315; else goto $l297;
            $l317:;
            int64_t $tmp322 = i289.value - $tmp292;
            if ($tmp294) goto $l323; else goto $l324;
            $l323:;
            if ($tmp322 >= -$tmp293) goto $l315; else goto $l297;
            $l324:;
            if ($tmp322 > -$tmp293) goto $l315; else goto $l297;
            $l315:;
            i289.value += $tmp293;
            goto $l295;
            $l297:;
            panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp326.value) {
            {
                (($fn328) name279->$class->vtable[3])(name279, &$s327);
            }
            }
            else {
            {
                (($fn330) name279->$class->vtable[3])(name279, &$s329);
            }
            }
            panda$core$Int64 $tmp332 = (($fn331) self->subtypes->$class->vtable[3])(self->subtypes);
            panda$core$Int64 $tmp333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp332, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp335 = (($fn334) self->subtypes->$class->vtable[2])(self->subtypes, $tmp333);
            org$pandalanguage$pandac$Type* $tmp336 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp338 = (($fn337) ((org$pandalanguage$pandac$Type*) $tmp335)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp335), ((panda$core$Object*) $tmp336));
            if ($tmp338.value) {
            {
                panda$core$Int64 $tmp341 = (($fn340) self->subtypes->$class->vtable[3])(self->subtypes);
                panda$core$Int64 $tmp342 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp341, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp344 = (($fn343) self->subtypes->$class->vtable[2])(self->subtypes, $tmp342);
                org$pandalanguage$pandac$Type* $tmp346 = (($fn345) ((org$pandalanguage$pandac$Type*) $tmp344)->$class->vtable[14])(((org$pandalanguage$pandac$Type*) $tmp344), p_types);
                child339 = $tmp346;
                (($fn347) name279->$class->vtable[3])(name279, ((org$pandalanguage$pandac$Symbol*) child339)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped276, ((panda$core$Object*) child339));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp348 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped276, ((panda$core$Object*) $tmp348));
            }
            }
            (($fn350) name279->$class->vtable[3])(name279, &$s349);
            org$pandalanguage$pandac$Type* $tmp351 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp351->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp351->refCount.value = 1;
            panda$core$String* $tmp354 = (($fn353) name279->$class->vtable[0])(name279);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp351, $tmp354, self->typeKind, self->offset, ((panda$collections$ListView*) remapped276), self->resolved);
            return $tmp351;
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
    panda$core$Int64 $tmp355 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp355;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

