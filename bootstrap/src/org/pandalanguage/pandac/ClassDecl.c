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
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
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
typedef panda$collections$Iterator* (*$fn133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn145)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn173)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn179)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn185)(panda$collections$Iterator*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, 1362623, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x0A", 3, 1369166, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };

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
    org$pandalanguage$pandac$SymbolTable* $tmp17 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
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
    panda$core$Char8 $tmp52;
    panda$core$String* separator53;
    panda$collections$Iterator* p$Iter55;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p67;
    org$pandalanguage$pandac$Type* t72;
    org$pandalanguage$pandac$Position $tmp78;
    panda$core$Char8 $tmp80;
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
    panda$core$Char8$init$panda$core$UInt8(&$tmp52, ((panda$core$UInt8) { 60 }));
    panda$core$MutableString$append$panda$core$Char8(name49, $tmp52);
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
    panda$core$Char8$init$panda$core$UInt8(&$tmp80, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name49, $tmp80);
    org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp81->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp81->refCount.value = 1;
    panda$core$String* $tmp83 = panda$core$MutableString$finish$R$panda$core$String(name49);
    org$pandalanguage$pandac$Position$init(&$tmp84);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp81, $tmp83, ((panda$core$Int64) { 21 }), $tmp84, ((panda$collections$ListView*) subtypes45), ((panda$core$Bit) { true }));
    return $tmp81;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Char8 $tmp85;
    panda$core$Char8$init$panda$core$UInt8(&$tmp85, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp86 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp85);
    return $tmp86;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result87;
    panda$core$String* separator96;
    panda$collections$Iterator* intf$Iter105;
    org$pandalanguage$pandac$Type* intf117;
    panda$collections$Iterator* cl$Iter130;
    org$pandalanguage$pandac$ClassDecl* cl142;
    panda$collections$Iterator* f$Iter150;
    org$pandalanguage$pandac$FieldDecl* f162;
    panda$collections$Iterator* m$Iter170;
    org$pandalanguage$pandac$MethodDecl* m182;
    panda$core$Char8 $tmp190;
    panda$core$MutableString* $tmp88 = (panda$core$MutableString*) malloc(48);
    $tmp88->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp88->refCount.value = 1;
    panda$core$String* $tmp90 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s91);
    panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, self->name);
    panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
    panda$core$MutableString$init$panda$core$String($tmp88, $tmp95);
    result87 = $tmp88;
    separator96 = &$s97;
    if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
    {
        panda$core$String* $tmp98 = panda$core$String$convert$R$panda$core$String(separator96);
        panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
        panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp100, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s102);
        panda$core$MutableString$append$panda$core$String(result87, $tmp103);
        separator96 = &$s104;
    }
    }
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
            panda$core$String* $tmp122 = panda$core$String$convert$R$panda$core$String(separator96);
            panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
            panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp124, ((panda$core$Object*) intf117));
            panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, &$s126);
            panda$core$MutableString$append$panda$core$String(result87, $tmp127);
            separator96 = &$s128;
        }
        goto $l110;
        $l111:;
    }
    panda$core$MutableString$append$panda$core$String(result87, &$s129);
    {
        ITable* $tmp131 = ((panda$collections$Iterable*) self->classes)->$class->itable;
        while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp131 = $tmp131->next;
        }
        $fn133 $tmp132 = $tmp131->methods[0];
        panda$collections$Iterator* $tmp134 = $tmp132(((panda$collections$Iterable*) self->classes));
        cl$Iter130 = $tmp134;
        $l135:;
        ITable* $tmp137 = cl$Iter130->$class->itable;
        while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp137 = $tmp137->next;
        }
        $fn139 $tmp138 = $tmp137->methods[0];
        panda$core$Bit $tmp140 = $tmp138(cl$Iter130);
        panda$core$Bit $tmp141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp140);
        if (!$tmp141.value) goto $l136;
        {
            ITable* $tmp143 = cl$Iter130->$class->itable;
            while ($tmp143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp143 = $tmp143->next;
            }
            $fn145 $tmp144 = $tmp143->methods[1];
            panda$core$Object* $tmp146 = $tmp144(cl$Iter130);
            cl142 = ((org$pandalanguage$pandac$ClassDecl*) $tmp146);
            panda$core$String* $tmp147 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl142);
            panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s148);
            panda$core$MutableString$append$panda$core$String(result87, $tmp149);
        }
        goto $l135;
        $l136:;
    }
    {
        ITable* $tmp151 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp151 = $tmp151->next;
        }
        $fn153 $tmp152 = $tmp151->methods[0];
        panda$collections$Iterator* $tmp154 = $tmp152(((panda$collections$Iterable*) self->fields));
        f$Iter150 = $tmp154;
        $l155:;
        ITable* $tmp157 = f$Iter150->$class->itable;
        while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp157 = $tmp157->next;
        }
        $fn159 $tmp158 = $tmp157->methods[0];
        panda$core$Bit $tmp160 = $tmp158(f$Iter150);
        panda$core$Bit $tmp161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp160);
        if (!$tmp161.value) goto $l156;
        {
            ITable* $tmp163 = f$Iter150->$class->itable;
            while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp163 = $tmp163->next;
            }
            $fn165 $tmp164 = $tmp163->methods[1];
            panda$core$Object* $tmp166 = $tmp164(f$Iter150);
            f162 = ((org$pandalanguage$pandac$FieldDecl*) $tmp166);
            panda$core$String* $tmp167 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f162);
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s168);
            panda$core$MutableString$append$panda$core$String(result87, $tmp169);
        }
        goto $l155;
        $l156:;
    }
    {
        ITable* $tmp171 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp171 = $tmp171->next;
        }
        $fn173 $tmp172 = $tmp171->methods[0];
        panda$collections$Iterator* $tmp174 = $tmp172(((panda$collections$Iterable*) self->methods));
        m$Iter170 = $tmp174;
        $l175:;
        ITable* $tmp177 = m$Iter170->$class->itable;
        while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp177 = $tmp177->next;
        }
        $fn179 $tmp178 = $tmp177->methods[0];
        panda$core$Bit $tmp180 = $tmp178(m$Iter170);
        panda$core$Bit $tmp181 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp180);
        if (!$tmp181.value) goto $l176;
        {
            ITable* $tmp183 = m$Iter170->$class->itable;
            while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp183 = $tmp183->next;
            }
            $fn185 $tmp184 = $tmp183->methods[1];
            panda$core$Object* $tmp186 = $tmp184(m$Iter170);
            m182 = ((org$pandalanguage$pandac$MethodDecl*) $tmp186);
            panda$core$String* $tmp187 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m182);
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
            panda$core$MutableString$append$panda$core$String(result87, $tmp189);
        }
        goto $l175;
        $l176:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp190, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result87, $tmp190);
    panda$core$String* $tmp191 = panda$core$MutableString$finish$R$panda$core$String(result87);
    return $tmp191;
}

