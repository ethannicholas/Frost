#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "panda/core/Int64.h"
#include "panda/collections/MapView.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
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

typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn26)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn32)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn38)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn55)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn61)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn67)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn115)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn142)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn151)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn163)(panda$collections$Iterator*);

static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x0A", 3, 1 };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, panda$core$Int64 p_offset, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* p$Iter17;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p29;
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
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_offset, p_name);
    self->source = p_source;
    panda$collections$HashMap* $tmp11 = (panda$collections$HashMap*) malloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp11->refCount.value = 1;
    panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp11, p_aliases);
    self->aliases = ((panda$collections$MapView*) $tmp11);
    self->doccomment = p_doccomment;
    self->annotations = p_annotations;
    self->classKind = p_kind;
    panda$collections$Array* $tmp13 = (panda$collections$Array*) malloc(40);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp13->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp13, p_declaredSupers);
    self->declaredSupers = $tmp13;
    self->parameters = ((panda$collections$List*) p_parameters);
    org$pandalanguage$pandac$SymbolTable* $tmp15 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp15->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp15->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp15, p_parent);
    self->symbolTable = $tmp15;
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp18 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp18 = $tmp18->next;
        }
        $fn20 $tmp19 = $tmp18->methods[0];
        panda$collections$Iterator* $tmp21 = $tmp19(((panda$collections$Iterable*) p_parameters));
        p$Iter17 = $tmp21;
        $l22:;
        ITable* $tmp24 = p$Iter17->$class->itable;
        while ($tmp24->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp24 = $tmp24->next;
        }
        $fn26 $tmp25 = $tmp24->methods[0];
        panda$core$Bit $tmp27 = $tmp25(p$Iter17);
        panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
        if (!$tmp28.value) goto $l23;
        {
            ITable* $tmp30 = p$Iter17->$class->itable;
            while ($tmp30->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp30 = $tmp30->next;
            }
            $fn32 $tmp31 = $tmp30->methods[1];
            panda$core$Object* $tmp33 = $tmp31(p$Iter17);
            p29 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp33);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p29));
        }
        goto $l22;
        $l23:;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $tmp34 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp34->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp34->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp34, self->name, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp34;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes42;
    panda$core$MutableString* name46;
    panda$core$String* separator50;
    panda$collections$Iterator* p$Iter52;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p64;
    org$pandalanguage$pandac$Type* t69;
    ITable* $tmp36 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp36->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp36 = $tmp36->next;
    }
    $fn38 $tmp37 = $tmp36->methods[0];
    panda$core$Int64 $tmp39 = $tmp37(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp39, ((panda$core$Int64) { 0 }));
    if ($tmp40.value) {
    {
        org$pandalanguage$pandac$Type* $tmp41 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        return $tmp41;
    }
    }
    panda$collections$Array* $tmp43 = (panda$collections$Array*) malloc(40);
    $tmp43->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp43->refCount.value = 1;
    panda$collections$Array$init($tmp43);
    subtypes42 = $tmp43;
    org$pandalanguage$pandac$Type* $tmp45 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes42, ((panda$core$Object*) $tmp45));
    panda$core$MutableString* $tmp47 = (panda$core$MutableString*) malloc(40);
    $tmp47->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp47->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp47, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name46 = $tmp47;
    panda$core$MutableString$append$panda$core$String(name46, &$s49);
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
            org$pandalanguage$pandac$Type* $tmp70 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp70->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp70->refCount.value = 1;
            panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s72);
            panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp73, ((org$pandalanguage$pandac$Symbol*) p64)->name);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp70, $tmp74, ((panda$core$Int64) { 22 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
            t69 = $tmp70;
            panda$collections$Array$add$panda$collections$Array$T(subtypes42, ((panda$core$Object*) t69));
            panda$core$MutableString$append$panda$core$String(name46, separator50);
            panda$core$MutableString$append$panda$core$String(name46, ((org$pandalanguage$pandac$Symbol*) t69)->name);
            separator50 = &$s75;
        }
        goto $l57;
        $l58:;
    }
    panda$core$MutableString$append$panda$core$String(name46, &$s76);
    org$pandalanguage$pandac$Type* $tmp77 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp77->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp77->refCount.value = 1;
    panda$core$String* $tmp79 = panda$core$MutableString$convert$R$panda$core$String(name46);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp77, $tmp79, ((panda$core$Int64) { 21 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes42), ((panda$core$Bit) { true }));
    return $tmp77;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $tmp81 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(self->name, &$s80);
    return $tmp81;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result82;
    panda$core$String* separator98;
    panda$collections$Iterator* intf$Iter100;
    org$pandalanguage$pandac$Type* intf112;
    panda$collections$Iterator* f$Iter127;
    org$pandalanguage$pandac$FieldDecl* f139;
    panda$collections$Iterator* m$Iter148;
    org$pandalanguage$pandac$MethodDecl* m160;
    panda$core$MutableString* $tmp83 = (panda$core$MutableString*) malloc(40);
    $tmp83->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp83->refCount.value = 1;
    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s85, self->name);
    panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
    panda$core$MutableString$init$panda$core$String($tmp83, $tmp88);
    result82 = $tmp83;
    org$pandalanguage$pandac$Type* $tmp89 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp90 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->rawSuper, $tmp89);
    if ($tmp90.value) {
    {
        panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s91, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s93);
        panda$core$MutableString$append$panda$core$String(result82, $tmp94);
    }
    }
    panda$core$Int64 $tmp95 = panda$collections$Array$get_count$R$panda$core$Int64(self->rawInterfaces);
    panda$core$Bit $tmp96 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp95, ((panda$core$Int64) { 0 }));
    if ($tmp96.value) {
    {
        panda$core$MutableString$append$panda$core$String(result82, &$s97);
        separator98 = &$s99;
        {
            ITable* $tmp101 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
            while ($tmp101->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp101 = $tmp101->next;
            }
            $fn103 $tmp102 = $tmp101->methods[0];
            panda$collections$Iterator* $tmp104 = $tmp102(((panda$collections$Iterable*) self->rawInterfaces));
            intf$Iter100 = $tmp104;
            $l105:;
            ITable* $tmp107 = intf$Iter100->$class->itable;
            while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp107 = $tmp107->next;
            }
            $fn109 $tmp108 = $tmp107->methods[0];
            panda$core$Bit $tmp110 = $tmp108(intf$Iter100);
            panda$core$Bit $tmp111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp110);
            if (!$tmp111.value) goto $l106;
            {
                ITable* $tmp113 = intf$Iter100->$class->itable;
                while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp113 = $tmp113->next;
                }
                $fn115 $tmp114 = $tmp113->methods[1];
                panda$core$Object* $tmp116 = $tmp114(intf$Iter100);
                intf112 = ((org$pandalanguage$pandac$Type*) $tmp116);
                panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s117, separator98);
                panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s119);
                panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp120, ((panda$core$Object*) intf112));
                panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s122);
                panda$core$MutableString$append$panda$core$String(result82, $tmp123);
                separator98 = &$s124;
            }
            goto $l105;
            $l106:;
        }
        panda$core$MutableString$append$panda$core$String(result82, &$s125);
    }
    }
    panda$core$MutableString$append$panda$core$String(result82, &$s126);
    {
        ITable* $tmp128 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp128 = $tmp128->next;
        }
        $fn130 $tmp129 = $tmp128->methods[0];
        panda$collections$Iterator* $tmp131 = $tmp129(((panda$collections$Iterable*) self->fields));
        f$Iter127 = $tmp131;
        $l132:;
        ITable* $tmp134 = f$Iter127->$class->itable;
        while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp134 = $tmp134->next;
        }
        $fn136 $tmp135 = $tmp134->methods[0];
        panda$core$Bit $tmp137 = $tmp135(f$Iter127);
        panda$core$Bit $tmp138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp137);
        if (!$tmp138.value) goto $l133;
        {
            ITable* $tmp140 = f$Iter127->$class->itable;
            while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp140 = $tmp140->next;
            }
            $fn142 $tmp141 = $tmp140->methods[1];
            panda$core$Object* $tmp143 = $tmp141(f$Iter127);
            f139 = ((org$pandalanguage$pandac$FieldDecl*) $tmp143);
            panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s144, ((panda$core$Object*) f139));
            panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s146);
            panda$core$MutableString$append$panda$core$String(result82, $tmp147);
        }
        goto $l132;
        $l133:;
    }
    {
        ITable* $tmp149 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp149->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp149 = $tmp149->next;
        }
        $fn151 $tmp150 = $tmp149->methods[0];
        panda$collections$Iterator* $tmp152 = $tmp150(((panda$collections$Iterable*) self->methods));
        m$Iter148 = $tmp152;
        $l153:;
        ITable* $tmp155 = m$Iter148->$class->itable;
        while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp155 = $tmp155->next;
        }
        $fn157 $tmp156 = $tmp155->methods[0];
        panda$core$Bit $tmp158 = $tmp156(m$Iter148);
        panda$core$Bit $tmp159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp158);
        if (!$tmp159.value) goto $l154;
        {
            ITable* $tmp161 = m$Iter148->$class->itable;
            while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp161 = $tmp161->next;
            }
            $fn163 $tmp162 = $tmp161->methods[1];
            panda$core$Object* $tmp164 = $tmp162(m$Iter148);
            m160 = ((org$pandalanguage$pandac$MethodDecl*) $tmp164);
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s165, ((panda$core$Object*) m160));
            panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s167);
            panda$core$MutableString$append$panda$core$String(result82, $tmp168);
        }
        goto $l153;
        $l154:;
    }
    panda$core$MutableString$append$panda$core$String(result82, &$s169);
    panda$core$String* $tmp170 = panda$core$MutableString$convert$R$panda$core$String(result82);
    return $tmp170;
}

