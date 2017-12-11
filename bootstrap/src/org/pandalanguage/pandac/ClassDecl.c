#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/MapView.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn22)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn41)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn58)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn64)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn70)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn108)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn120)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn134)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn140)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn146)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn148)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn155)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn167)(panda$collections$Iterator*);

static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x0A", 3, 1369166, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* p$Iter19;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p31;
    self->rawSuper = NULL;
    panda$collections$Array* $tmp1 = (panda$collections$Array*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->rawInterfaces = $tmp1;
    panda$collections$Array* $tmp3 = (panda$collections$Array*) malloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3->refCount.value = 1;
    panda$collections$Array$init($tmp3);
    self->fields = $tmp3;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) malloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    self->methods = $tmp5;
    panda$collections$Array* $tmp7 = (panda$collections$Array*) malloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp7->refCount.value = 1;
    panda$collections$Array$init($tmp7);
    self->classes = $tmp7;
    self->owner = NULL;
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp9 = (panda$collections$Array*) malloc(40);
    $tmp9->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp9->refCount.value = 1;
    panda$collections$Array$init($tmp9);
    self->virtualMethods = $tmp9;
    panda$collections$HashMap* $tmp11 = (panda$collections$HashMap*) malloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp11->refCount.value = 1;
    panda$collections$HashMap$init($tmp11);
    self->classResolutionCache = $tmp11;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    self->source = p_source;
    panda$collections$HashMap* $tmp13 = (panda$collections$HashMap*) malloc(56);
    $tmp13->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp13->refCount.value = 1;
    panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp13, p_aliases);
    self->aliases = ((panda$collections$MapView*) $tmp13);
    self->doccomment = p_doccomment;
    self->annotations = p_annotations;
    self->classKind = p_kind;
    panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp15->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp15, p_declaredSupers);
    self->declaredSupers = $tmp15;
    self->parameters = ((panda$collections$List*) p_parameters);
    org$pandalanguage$pandac$SymbolTable* $tmp17 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp17->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp17, p_parent);
    self->symbolTable = $tmp17;
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp20 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp20 = $tmp20->next;
        }
        $fn22 $tmp21 = $tmp20->methods[0];
        panda$collections$Iterator* $tmp23 = $tmp21(((panda$collections$Iterable*) p_parameters));
        p$Iter19 = $tmp23;
        $l24:;
        ITable* $tmp26 = p$Iter19->$class->itable;
        while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp26 = $tmp26->next;
        }
        $fn28 $tmp27 = $tmp26->methods[0];
        panda$core$Bit $tmp29 = $tmp27(p$Iter19);
        panda$core$Bit $tmp30 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp29);
        if (!$tmp30.value) goto $l25;
        {
            ITable* $tmp32 = p$Iter19->$class->itable;
            while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp32 = $tmp32->next;
            }
            $fn34 $tmp33 = $tmp32->methods[1];
            panda$core$Object* $tmp35 = $tmp33(p$Iter19);
            p31 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp35);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p31));
        }
        goto $l24;
        $l25:;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Position $tmp38;
    org$pandalanguage$pandac$Type* $tmp36 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp36->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp36->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp38);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp36, self->name, ((panda$core$Int64) { 10 }), $tmp38, ((panda$core$Bit) { true }));
    return $tmp36;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes45;
    panda$core$MutableString* name49;
    panda$core$String* separator53;
    panda$collections$Iterator* p$Iter55;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p67;
    org$pandalanguage$pandac$Type* t72;
    org$pandalanguage$pandac$Position $tmp78;
    org$pandalanguage$pandac$Position $tmp84;
    ITable* $tmp39 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp39->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp39 = $tmp39->next;
    }
    $fn41 $tmp40 = $tmp39->methods[0];
    panda$core$Int64 $tmp42 = $tmp40(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp42, ((panda$core$Int64) { 0 }));
    if ($tmp43.value) {
    {
        org$pandalanguage$pandac$Type* $tmp44 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        return $tmp44;
    }
    }
    panda$collections$Array* $tmp46 = (panda$collections$Array*) malloc(40);
    $tmp46->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp46->refCount.value = 1;
    panda$collections$Array$init($tmp46);
    subtypes45 = $tmp46;
    org$pandalanguage$pandac$Type* $tmp48 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes45, ((panda$core$Object*) $tmp48));
    panda$core$MutableString* $tmp50 = (panda$core$MutableString*) malloc(48);
    $tmp50->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp50->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp50, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name49 = $tmp50;
    panda$core$MutableString$append$panda$core$String(name49, &$s52);
    separator53 = &$s54;
    {
        ITable* $tmp56 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        panda$collections$Iterator* $tmp59 = $tmp57(((panda$collections$Iterable*) self->parameters));
        p$Iter55 = $tmp59;
        $l60:;
        ITable* $tmp62 = p$Iter55->$class->itable;
        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp62 = $tmp62->next;
        }
        $fn64 $tmp63 = $tmp62->methods[0];
        panda$core$Bit $tmp65 = $tmp63(p$Iter55);
        panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp65);
        if (!$tmp66.value) goto $l61;
        {
            ITable* $tmp68 = p$Iter55->$class->itable;
            while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp68 = $tmp68->next;
            }
            $fn70 $tmp69 = $tmp68->methods[1];
            panda$core$Object* $tmp71 = $tmp69(p$Iter55);
            p67 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp71);
            org$pandalanguage$pandac$Type* $tmp73 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp73->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp73->refCount.value = 1;
            panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s75);
            panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, ((org$pandalanguage$pandac$Symbol*) p67)->name);
            org$pandalanguage$pandac$Position$init(&$tmp78);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp73, $tmp77, ((panda$core$Int64) { 22 }), $tmp78, ((panda$core$Bit) { true }));
            t72 = $tmp73;
            panda$collections$Array$add$panda$collections$Array$T(subtypes45, ((panda$core$Object*) t72));
            panda$core$MutableString$append$panda$core$String(name49, separator53);
            panda$core$MutableString$append$panda$core$String(name49, ((org$pandalanguage$pandac$Symbol*) t72)->name);
            separator53 = &$s79;
        }
        goto $l60;
        $l61:;
    }
    panda$core$MutableString$append$panda$core$String(name49, &$s80);
    org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp81->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp81->refCount.value = 1;
    panda$core$String* $tmp83 = panda$core$MutableString$finish$R$panda$core$String(name49);
    org$pandalanguage$pandac$Position$init(&$tmp84);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp81, $tmp83, ((panda$core$Int64) { 21 }), $tmp84, ((panda$collections$ListView*) subtypes45), ((panda$core$Bit) { true }));
    return $tmp81;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $tmp86 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(self->name, &$s85);
    return $tmp86;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result87;
    panda$core$String* separator103;
    panda$collections$Iterator* intf$Iter105;
    org$pandalanguage$pandac$Type* intf117;
    panda$collections$Iterator* f$Iter131;
    org$pandalanguage$pandac$FieldDecl* f143;
    panda$collections$Iterator* m$Iter152;
    org$pandalanguage$pandac$MethodDecl* m164;
    panda$core$MutableString* $tmp88 = (panda$core$MutableString*) malloc(48);
    $tmp88->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp88->refCount.value = 1;
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s90, self->name);
    panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, &$s92);
    panda$core$MutableString$init$panda$core$String($tmp88, $tmp93);
    result87 = $tmp88;
    org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp95 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->rawSuper, $tmp94);
    if ($tmp95.value) {
    {
        panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s96, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
        panda$core$MutableString$append$panda$core$String(result87, $tmp99);
    }
    }
    panda$core$Int64 $tmp100 = panda$collections$Array$get_count$R$panda$core$Int64(self->rawInterfaces);
    panda$core$Bit $tmp101 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp100, ((panda$core$Int64) { 0 }));
    if ($tmp101.value) {
    {
        panda$core$MutableString$append$panda$core$String(result87, &$s102);
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
                panda$core$String* $tmp122 = panda$core$String$convert$R$panda$core$String(separator103);
                panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp124, ((panda$core$Object*) intf117));
                panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, &$s126);
                panda$core$MutableString$append$panda$core$String(result87, $tmp127);
                separator103 = &$s128;
            }
            goto $l110;
            $l111:;
        }
        panda$core$MutableString$append$panda$core$String(result87, &$s129);
    }
    }
    panda$core$MutableString$append$panda$core$String(result87, &$s130);
    {
        ITable* $tmp132 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp132->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp132 = $tmp132->next;
        }
        $fn134 $tmp133 = $tmp132->methods[0];
        panda$collections$Iterator* $tmp135 = $tmp133(((panda$collections$Iterable*) self->fields));
        f$Iter131 = $tmp135;
        $l136:;
        ITable* $tmp138 = f$Iter131->$class->itable;
        while ($tmp138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp138 = $tmp138->next;
        }
        $fn140 $tmp139 = $tmp138->methods[0];
        panda$core$Bit $tmp141 = $tmp139(f$Iter131);
        panda$core$Bit $tmp142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp141);
        if (!$tmp142.value) goto $l137;
        {
            ITable* $tmp144 = f$Iter131->$class->itable;
            while ($tmp144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp144 = $tmp144->next;
            }
            $fn146 $tmp145 = $tmp144->methods[1];
            panda$core$Object* $tmp147 = $tmp145(f$Iter131);
            f143 = ((org$pandalanguage$pandac$FieldDecl*) $tmp147);
            panda$core$String* $tmp149 = (($fn148) ((panda$core$Object*) f143)->$class->vtable[0])(((panda$core$Object*) f143));
            panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, &$s150);
            panda$core$MutableString$append$panda$core$String(result87, $tmp151);
        }
        goto $l136;
        $l137:;
    }
    {
        ITable* $tmp153 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp153 = $tmp153->next;
        }
        $fn155 $tmp154 = $tmp153->methods[0];
        panda$collections$Iterator* $tmp156 = $tmp154(((panda$collections$Iterable*) self->methods));
        m$Iter152 = $tmp156;
        $l157:;
        ITable* $tmp159 = m$Iter152->$class->itable;
        while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp159 = $tmp159->next;
        }
        $fn161 $tmp160 = $tmp159->methods[0];
        panda$core$Bit $tmp162 = $tmp160(m$Iter152);
        panda$core$Bit $tmp163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp162);
        if (!$tmp163.value) goto $l158;
        {
            ITable* $tmp165 = m$Iter152->$class->itable;
            while ($tmp165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp165 = $tmp165->next;
            }
            $fn167 $tmp166 = $tmp165->methods[1];
            panda$core$Object* $tmp168 = $tmp166(m$Iter152);
            m164 = ((org$pandalanguage$pandac$MethodDecl*) $tmp168);
            panda$core$String* $tmp169 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m164);
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s170);
            panda$core$MutableString$append$panda$core$String(result87, $tmp171);
        }
        goto $l157;
        $l158:;
    }
    panda$core$MutableString$append$panda$core$String(result87, &$s172);
    panda$core$String* $tmp173 = panda$core$MutableString$finish$R$panda$core$String(result87);
    return $tmp173;
}

