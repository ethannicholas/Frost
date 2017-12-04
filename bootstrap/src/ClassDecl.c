#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/io/File.h"
#include "panda/core/Int64.h"
#include "panda/collections/MapView.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/MutableString.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef void (*$fn30)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn35)(panda$collections$CollectionView*);
org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type} };

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
typedef panda$core$Bit (*$fn92)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn98)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn102)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn108)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn120)(panda$collections$Iterator*);
typedef void (*$fn129)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn132)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn134)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn138)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn150)(panda$collections$Iterator*);
typedef void (*$fn156)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn160)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn166)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn172)(panda$collections$Iterator*);
typedef void (*$fn178)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn180)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn181)(panda$core$MutableString*);
org$pandalanguage$pandac$ClassDecl$Kind$class_type org$pandalanguage$pandac$ClassDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$ClassDecl$GenericParameter$class_type org$pandalanguage$pandac$ClassDecl$GenericParameter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x0A", 3, 1 };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result84;
    panda$core$String* separator103;
    panda$collections$Iterator* intf$Iter105;
    org$pandalanguage$pandac$Type* intf117;
    panda$collections$Iterator* f$Iter135;
    org$pandalanguage$pandac$FieldDecl* f147;
    panda$collections$Iterator* m$Iter157;
    org$pandalanguage$pandac$MethodDecl* m169;
    panda$core$MutableString* $tmp85 = (panda$core$MutableString*) malloc(40);
    $tmp85->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp85->refCount.value = 1;
    panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s87, self->name);
    panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s89);
    panda$core$MutableString$init$panda$core$String($tmp85, $tmp90);
    result84 = $tmp85;
    org$pandalanguage$pandac$Type* $tmp91 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp93 = (($fn92) self->rawSuper->$class->vtable[5])(self->rawSuper, ((panda$core$Object*) $tmp91));
    if ($tmp93.value) {
    {
        panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s94, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s96);
        (($fn98) result84->$class->vtable[3])(result84, $tmp97);
    }
    }
    panda$core$Int64 $tmp99 = panda$collections$Array$get_count$R$panda$core$Int64(self->rawInterfaces);
    panda$core$Bit $tmp100 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp99, ((panda$core$Int64) { 0 }));
    if ($tmp100.value) {
    {
        (($fn102) result84->$class->vtable[3])(result84, &$s101);
        separator103 = &$s104;
        {
            ITable* $tmp106 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
            while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp106 = $tmp106->next;
            }
            $fn108 $tmp107 = $tmp106->methods[0];
            panda$collections$Iterator* $tmp109 = $tmp107(((panda$collections$Iterable*) self->rawInterfaces));
            intf$Iter105 = $tmp109;
            $l110:;
            ITable* $tmp112 = intf$Iter105->$class->itable;
            while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp112 = $tmp112->next;
            }
            $fn114 $tmp113 = $tmp112->methods[0];
            panda$core$Bit $tmp115 = $tmp113(intf$Iter105);
            panda$core$Bit $tmp116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp115);
            if (!$tmp116.value) goto $l111;
            {
                ITable* $tmp118 = intf$Iter105->$class->itable;
                while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp118 = $tmp118->next;
                }
                $fn120 $tmp119 = $tmp118->methods[1];
                panda$core$Object* $tmp121 = $tmp119(intf$Iter105);
                intf117 = ((org$pandalanguage$pandac$Type*) $tmp121);
                panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s122, separator103);
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
                panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp125, ((panda$core$Object*) intf117));
                panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp126, &$s127);
                (($fn129) result84->$class->vtable[3])(result84, $tmp128);
                separator103 = &$s130;
            }
            goto $l110;
            $l111:;
        }
        (($fn132) result84->$class->vtable[3])(result84, &$s131);
    }
    }
    (($fn134) result84->$class->vtable[3])(result84, &$s133);
    {
        ITable* $tmp136 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp136 = $tmp136->next;
        }
        $fn138 $tmp137 = $tmp136->methods[0];
        panda$collections$Iterator* $tmp139 = $tmp137(((panda$collections$Iterable*) self->fields));
        f$Iter135 = $tmp139;
        $l140:;
        ITable* $tmp142 = f$Iter135->$class->itable;
        while ($tmp142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp142 = $tmp142->next;
        }
        $fn144 $tmp143 = $tmp142->methods[0];
        panda$core$Bit $tmp145 = $tmp143(f$Iter135);
        panda$core$Bit $tmp146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp145);
        if (!$tmp146.value) goto $l141;
        {
            ITable* $tmp148 = f$Iter135->$class->itable;
            while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp148 = $tmp148->next;
            }
            $fn150 $tmp149 = $tmp148->methods[1];
            panda$core$Object* $tmp151 = $tmp149(f$Iter135);
            f147 = ((org$pandalanguage$pandac$FieldDecl*) $tmp151);
            panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s152, ((panda$core$Object*) f147));
            panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, &$s154);
            (($fn156) result84->$class->vtable[3])(result84, $tmp155);
        }
        goto $l140;
        $l141:;
    }
    {
        ITable* $tmp158 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp158 = $tmp158->next;
        }
        $fn160 $tmp159 = $tmp158->methods[0];
        panda$collections$Iterator* $tmp161 = $tmp159(((panda$collections$Iterable*) self->methods));
        m$Iter157 = $tmp161;
        $l162:;
        ITable* $tmp164 = m$Iter157->$class->itable;
        while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp164 = $tmp164->next;
        }
        $fn166 $tmp165 = $tmp164->methods[0];
        panda$core$Bit $tmp167 = $tmp165(m$Iter157);
        panda$core$Bit $tmp168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp167);
        if (!$tmp168.value) goto $l163;
        {
            ITable* $tmp170 = m$Iter157->$class->itable;
            while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp170 = $tmp170->next;
            }
            $fn172 $tmp171 = $tmp170->methods[1];
            panda$core$Object* $tmp173 = $tmp171(m$Iter157);
            m169 = ((org$pandalanguage$pandac$MethodDecl*) $tmp173);
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s174, ((panda$core$Object*) m169));
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
            (($fn178) result84->$class->vtable[3])(result84, $tmp177);
        }
        goto $l162;
        $l163:;
    }
    (($fn180) result84->$class->vtable[3])(result84, &$s179);
    panda$core$String* $tmp182 = (($fn181) result84->$class->vtable[0])(result84);
    return $tmp182;
}
void org$pandalanguage$pandac$ClassDecl$Kind$init(org$pandalanguage$pandac$ClassDecl$Kind* self) {
}
void org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl$GenericParameter* self, panda$core$Int64 p_offset, panda$core$String* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_bound) {
    self->owner = p_owner;
    self->bound = p_bound;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 203 }), p_offset, p_name);
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl$GenericParameter* self) {
    panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s183, self->owner);
    panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s185);
    panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, self->name);
    panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
    panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp189, ((panda$core$Object*) self->bound));
    panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s191);
    return $tmp192;
}

