#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "panda/core/Int64.h"
#include "panda/collections/MapView.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef void (*$fn30)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn35)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn38)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn43)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn49)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn55)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn61)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn67)(panda$collections$Iterator*);
typedef void (*$fn75)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn76)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn79)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn82)(panda$core$MutableString*);
typedef panda$core$Bit (*$fn94)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn100)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn104)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn110)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn116)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn122)(panda$collections$Iterator*);
typedef void (*$fn131)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn134)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn136)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn140)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn146)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn152)(panda$collections$Iterator*);
typedef void (*$fn158)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef void (*$fn180)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn182)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn183)(panda$core$MutableString*);

static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x0A", 3, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, panda$core$Int64 p_offset, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_rawSuper, panda$collections$Array* p_rawInterfaces, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* p$Iter13;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p25;
    panda$collections$Array* $tmp1 = (panda$collections$Array*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->fields = $tmp1;
    panda$collections$Array* $tmp3 = (panda$collections$Array*) malloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3->refCount.value = 1;
    panda$collections$Array$init($tmp3);
    self->methods = $tmp3;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) malloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    self->classes = $tmp5;
    self->owner = NULL;
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp7 = (panda$collections$Array*) malloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp7->refCount.value = 1;
    panda$collections$Array$init($tmp7);
    self->virtualMethods = $tmp7;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_offset, p_name);
    self->source = p_source;
    panda$collections$HashMap* $tmp9 = (panda$collections$HashMap*) malloc(56);
    $tmp9->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp9->refCount.value = 1;
    panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp9, p_aliases);
    self->aliases = ((panda$collections$MapView*) $tmp9);
    self->doccomment = p_doccomment;
    self->annotations = p_annotations;
    self->classKind = p_kind;
    self->rawSuper = p_rawSuper;
    self->rawInterfaces = p_rawInterfaces;
    self->parameters = ((panda$collections$List*) p_parameters);
    org$pandalanguage$pandac$SymbolTable* $tmp11 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp11->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp11->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp11, p_parent);
    self->symbolTable = $tmp11;
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp14 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp14 = $tmp14->next;
        }
        $fn16 $tmp15 = $tmp14->methods[0];
        panda$collections$Iterator* $tmp17 = $tmp15(((panda$collections$Iterable*) p_parameters));
        p$Iter13 = $tmp17;
        $l18:;
        ITable* $tmp20 = p$Iter13->$class->itable;
        while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp20 = $tmp20->next;
        }
        $fn22 $tmp21 = $tmp20->methods[0];
        panda$core$Bit $tmp23 = $tmp21(p$Iter13);
        panda$core$Bit $tmp24 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
        if (!$tmp24.value) goto $l19;
        {
            ITable* $tmp26 = p$Iter13->$class->itable;
            while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp26 = $tmp26->next;
            }
            $fn28 $tmp27 = $tmp26->methods[1];
            panda$core$Object* $tmp29 = $tmp27(p$Iter13);
            p25 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp29);
            (($fn30) self->symbolTable->$class->vtable[2])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p25));
        }
        goto $l18;
        $l19:;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $tmp31 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp31->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp31->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp31, self->name, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp31;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes40;
    panda$core$MutableString* name45;
    panda$core$String* separator50;
    panda$collections$Iterator* p$Iter52;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p64;
    org$pandalanguage$pandac$Type* t69;
    ITable* $tmp33 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp33->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp33 = $tmp33->next;
    }
    $fn35 $tmp34 = $tmp33->methods[0];
    panda$core$Int64 $tmp36 = $tmp34(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp36, ((panda$core$Int64) { 0 }));
    if ($tmp37.value) {
    {
        org$pandalanguage$pandac$Type* $tmp39 = (($fn38) self->$class->vtable[3])(self);
        return $tmp39;
    }
    }
    panda$collections$Array* $tmp41 = (panda$collections$Array*) malloc(40);
    $tmp41->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp41->refCount.value = 1;
    panda$collections$Array$init($tmp41);
    subtypes40 = $tmp41;
    org$pandalanguage$pandac$Type* $tmp44 = (($fn43) self->$class->vtable[3])(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes40, ((panda$core$Object*) $tmp44));
    panda$core$MutableString* $tmp46 = (panda$core$MutableString*) malloc(40);
    $tmp46->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp46->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp46, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name45 = $tmp46;
    (($fn49) name45->$class->vtable[3])(name45, &$s48);
    separator50 = &$s51;
    {
        ITable* $tmp53 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp53->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp53 = $tmp53->next;
        }
        $fn55 $tmp54 = $tmp53->methods[0];
        panda$collections$Iterator* $tmp56 = $tmp54(((panda$collections$Iterable*) self->parameters));
        p$Iter52 = $tmp56;
        $l57:;
        ITable* $tmp59 = p$Iter52->$class->itable;
        while ($tmp59->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp59 = $tmp59->next;
        }
        $fn61 $tmp60 = $tmp59->methods[0];
        panda$core$Bit $tmp62 = $tmp60(p$Iter52);
        panda$core$Bit $tmp63 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp62);
        if (!$tmp63.value) goto $l58;
        {
            ITable* $tmp65 = p$Iter52->$class->itable;
            while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp65 = $tmp65->next;
            }
            $fn67 $tmp66 = $tmp65->methods[1];
            panda$core$Object* $tmp68 = $tmp66(p$Iter52);
            p64 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp68);
            org$pandalanguage$pandac$Type* $tmp70 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp70->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp70->refCount.value = 1;
            panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s72);
            panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp73, ((org$pandalanguage$pandac$Symbol*) p64)->name);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp70, $tmp74, ((panda$core$Int64) { 22 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
            t69 = $tmp70;
            panda$collections$Array$add$panda$collections$Array$T(subtypes40, ((panda$core$Object*) t69));
            (($fn75) name45->$class->vtable[3])(name45, separator50);
            (($fn76) name45->$class->vtable[3])(name45, ((org$pandalanguage$pandac$Symbol*) t69)->name);
            separator50 = &$s77;
        }
        goto $l57;
        $l58:;
    }
    (($fn79) name45->$class->vtable[3])(name45, &$s78);
    org$pandalanguage$pandac$Type* $tmp80 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp80->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp80->refCount.value = 1;
    panda$core$String* $tmp83 = (($fn82) name45->$class->vtable[0])(name45);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp80, $tmp83, ((panda$core$Int64) { 21 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes40), ((panda$core$Bit) { true }));
    return $tmp80;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $tmp85 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(self->name, &$s84);
    return $tmp85;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result86;
    panda$core$String* separator105;
    panda$collections$Iterator* intf$Iter107;
    org$pandalanguage$pandac$Type* intf119;
    panda$collections$Iterator* f$Iter137;
    org$pandalanguage$pandac$FieldDecl* f149;
    panda$collections$Iterator* m$Iter159;
    org$pandalanguage$pandac$MethodDecl* m171;
    panda$core$MutableString* $tmp87 = (panda$core$MutableString*) malloc(40);
    $tmp87->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp87->refCount.value = 1;
    panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s89, self->name);
    panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s91);
    panda$core$MutableString$init$panda$core$String($tmp87, $tmp92);
    result86 = $tmp87;
    org$pandalanguage$pandac$Type* $tmp93 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp95 = (($fn94) self->rawSuper->$class->vtable[5])(self->rawSuper, ((panda$core$Object*) $tmp93));
    if ($tmp95.value) {
    {
        panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s96, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
        (($fn100) result86->$class->vtable[3])(result86, $tmp99);
    }
    }
    panda$core$Int64 $tmp101 = panda$collections$Array$get_count$R$panda$core$Int64(self->rawInterfaces);
    panda$core$Bit $tmp102 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp101, ((panda$core$Int64) { 0 }));
    if ($tmp102.value) {
    {
        (($fn104) result86->$class->vtable[3])(result86, &$s103);
        separator105 = &$s106;
        {
            ITable* $tmp108 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
            while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp108 = $tmp108->next;
            }
            $fn110 $tmp109 = $tmp108->methods[0];
            panda$collections$Iterator* $tmp111 = $tmp109(((panda$collections$Iterable*) self->rawInterfaces));
            intf$Iter107 = $tmp111;
            $l112:;
            ITable* $tmp114 = intf$Iter107->$class->itable;
            while ($tmp114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp114 = $tmp114->next;
            }
            $fn116 $tmp115 = $tmp114->methods[0];
            panda$core$Bit $tmp117 = $tmp115(intf$Iter107);
            panda$core$Bit $tmp118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp117);
            if (!$tmp118.value) goto $l113;
            {
                ITable* $tmp120 = intf$Iter107->$class->itable;
                while ($tmp120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp120 = $tmp120->next;
                }
                $fn122 $tmp121 = $tmp120->methods[1];
                panda$core$Object* $tmp123 = $tmp121(intf$Iter107);
                intf119 = ((org$pandalanguage$pandac$Type*) $tmp123);
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s124, separator105);
                panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, &$s126);
                panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp127, ((panda$core$Object*) intf119));
                panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
                (($fn131) result86->$class->vtable[3])(result86, $tmp130);
                separator105 = &$s132;
            }
            goto $l112;
            $l113:;
        }
        (($fn134) result86->$class->vtable[3])(result86, &$s133);
    }
    }
    (($fn136) result86->$class->vtable[3])(result86, &$s135);
    {
        ITable* $tmp138 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp138->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp138 = $tmp138->next;
        }
        $fn140 $tmp139 = $tmp138->methods[0];
        panda$collections$Iterator* $tmp141 = $tmp139(((panda$collections$Iterable*) self->fields));
        f$Iter137 = $tmp141;
        $l142:;
        ITable* $tmp144 = f$Iter137->$class->itable;
        while ($tmp144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp144 = $tmp144->next;
        }
        $fn146 $tmp145 = $tmp144->methods[0];
        panda$core$Bit $tmp147 = $tmp145(f$Iter137);
        panda$core$Bit $tmp148 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp147);
        if (!$tmp148.value) goto $l143;
        {
            ITable* $tmp150 = f$Iter137->$class->itable;
            while ($tmp150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp150 = $tmp150->next;
            }
            $fn152 $tmp151 = $tmp150->methods[1];
            panda$core$Object* $tmp153 = $tmp151(f$Iter137);
            f149 = ((org$pandalanguage$pandac$FieldDecl*) $tmp153);
            panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s154, ((panda$core$Object*) f149));
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s156);
            (($fn158) result86->$class->vtable[3])(result86, $tmp157);
        }
        goto $l142;
        $l143:;
    }
    {
        ITable* $tmp160 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp160 = $tmp160->next;
        }
        $fn162 $tmp161 = $tmp160->methods[0];
        panda$collections$Iterator* $tmp163 = $tmp161(((panda$collections$Iterable*) self->methods));
        m$Iter159 = $tmp163;
        $l164:;
        ITable* $tmp166 = m$Iter159->$class->itable;
        while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp166 = $tmp166->next;
        }
        $fn168 $tmp167 = $tmp166->methods[0];
        panda$core$Bit $tmp169 = $tmp167(m$Iter159);
        panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
        if (!$tmp170.value) goto $l165;
        {
            ITable* $tmp172 = m$Iter159->$class->itable;
            while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp172 = $tmp172->next;
            }
            $fn174 $tmp173 = $tmp172->methods[1];
            panda$core$Object* $tmp175 = $tmp173(m$Iter159);
            m171 = ((org$pandalanguage$pandac$MethodDecl*) $tmp175);
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s176, ((panda$core$Object*) m171));
            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s178);
            (($fn180) result86->$class->vtable[3])(result86, $tmp179);
        }
        goto $l164;
        $l165:;
    }
    (($fn182) result86->$class->vtable[3])(result86, &$s181);
    panda$core$String* $tmp184 = (($fn183) result86->$class->vtable[0])(result86);
    return $tmp184;
}

