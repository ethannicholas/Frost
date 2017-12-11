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

typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn26)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn32)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn39)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn56)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn62)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn68)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn106)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn118)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn144)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn146)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$collections$Iterator*);

static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x0A", 3, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
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
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
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
    org$pandalanguage$pandac$Position $tmp36;
    org$pandalanguage$pandac$Type* $tmp34 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp34->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp34->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp36);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp34, self->name, ((panda$core$Int64) { 10 }), $tmp36, ((panda$core$Bit) { true }));
    return $tmp34;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes43;
    panda$core$MutableString* name47;
    panda$core$String* separator51;
    panda$collections$Iterator* p$Iter53;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p65;
    org$pandalanguage$pandac$Type* t70;
    org$pandalanguage$pandac$Position $tmp76;
    org$pandalanguage$pandac$Position $tmp82;
    ITable* $tmp37 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp37->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp37 = $tmp37->next;
    }
    $fn39 $tmp38 = $tmp37->methods[0];
    panda$core$Int64 $tmp40 = $tmp38(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp40, ((panda$core$Int64) { 0 }));
    if ($tmp41.value) {
    {
        org$pandalanguage$pandac$Type* $tmp42 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        return $tmp42;
    }
    }
    panda$collections$Array* $tmp44 = (panda$collections$Array*) malloc(40);
    $tmp44->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp44->refCount.value = 1;
    panda$collections$Array$init($tmp44);
    subtypes43 = $tmp44;
    org$pandalanguage$pandac$Type* $tmp46 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes43, ((panda$core$Object*) $tmp46));
    panda$core$MutableString* $tmp48 = (panda$core$MutableString*) malloc(40);
    $tmp48->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp48->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp48, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name47 = $tmp48;
    panda$core$MutableString$append$panda$core$String(name47, &$s50);
    separator51 = &$s52;
    {
        ITable* $tmp54 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp54->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp54 = $tmp54->next;
        }
        $fn56 $tmp55 = $tmp54->methods[0];
        panda$collections$Iterator* $tmp57 = $tmp55(((panda$collections$Iterable*) self->parameters));
        p$Iter53 = $tmp57;
        $l58:;
        ITable* $tmp60 = p$Iter53->$class->itable;
        while ($tmp60->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp60 = $tmp60->next;
        }
        $fn62 $tmp61 = $tmp60->methods[0];
        panda$core$Bit $tmp63 = $tmp61(p$Iter53);
        panda$core$Bit $tmp64 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp63);
        if (!$tmp64.value) goto $l59;
        {
            ITable* $tmp66 = p$Iter53->$class->itable;
            while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp66 = $tmp66->next;
            }
            $fn68 $tmp67 = $tmp66->methods[1];
            panda$core$Object* $tmp69 = $tmp67(p$Iter53);
            p65 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp69);
            org$pandalanguage$pandac$Type* $tmp71 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp71->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp71->refCount.value = 1;
            panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s73);
            panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, ((org$pandalanguage$pandac$Symbol*) p65)->name);
            org$pandalanguage$pandac$Position$init(&$tmp76);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp71, $tmp75, ((panda$core$Int64) { 22 }), $tmp76, ((panda$core$Bit) { true }));
            t70 = $tmp71;
            panda$collections$Array$add$panda$collections$Array$T(subtypes43, ((panda$core$Object*) t70));
            panda$core$MutableString$append$panda$core$String(name47, separator51);
            panda$core$MutableString$append$panda$core$String(name47, ((org$pandalanguage$pandac$Symbol*) t70)->name);
            separator51 = &$s77;
        }
        goto $l58;
        $l59:;
    }
    panda$core$MutableString$append$panda$core$String(name47, &$s78);
    org$pandalanguage$pandac$Type* $tmp79 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp79->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp79->refCount.value = 1;
    panda$core$String* $tmp81 = panda$core$MutableString$finish$R$panda$core$String(name47);
    org$pandalanguage$pandac$Position$init(&$tmp82);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp79, $tmp81, ((panda$core$Int64) { 21 }), $tmp82, ((panda$collections$ListView*) subtypes43), ((panda$core$Bit) { true }));
    return $tmp79;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $tmp84 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(self->name, &$s83);
    return $tmp84;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result85;
    panda$core$String* separator101;
    panda$collections$Iterator* intf$Iter103;
    org$pandalanguage$pandac$Type* intf115;
    panda$collections$Iterator* f$Iter129;
    org$pandalanguage$pandac$FieldDecl* f141;
    panda$collections$Iterator* m$Iter150;
    org$pandalanguage$pandac$MethodDecl* m162;
    panda$core$MutableString* $tmp86 = (panda$core$MutableString*) malloc(40);
    $tmp86->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp86->refCount.value = 1;
    panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s88, self->name);
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, &$s90);
    panda$core$MutableString$init$panda$core$String($tmp86, $tmp91);
    result85 = $tmp86;
    org$pandalanguage$pandac$Type* $tmp92 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp93 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->rawSuper, $tmp92);
    if ($tmp93.value) {
    {
        panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s94, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s96);
        panda$core$MutableString$append$panda$core$String(result85, $tmp97);
    }
    }
    panda$core$Int64 $tmp98 = panda$collections$Array$get_count$R$panda$core$Int64(self->rawInterfaces);
    panda$core$Bit $tmp99 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp98, ((panda$core$Int64) { 0 }));
    if ($tmp99.value) {
    {
        panda$core$MutableString$append$panda$core$String(result85, &$s100);
        separator101 = &$s102;
        {
            ITable* $tmp104 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
            while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp104 = $tmp104->next;
            }
            $fn106 $tmp105 = $tmp104->methods[0];
            panda$collections$Iterator* $tmp107 = $tmp105(((panda$collections$Iterable*) self->rawInterfaces));
            intf$Iter103 = $tmp107;
            $l108:;
            ITable* $tmp110 = intf$Iter103->$class->itable;
            while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp110 = $tmp110->next;
            }
            $fn112 $tmp111 = $tmp110->methods[0];
            panda$core$Bit $tmp113 = $tmp111(intf$Iter103);
            panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
            if (!$tmp114.value) goto $l109;
            {
                ITable* $tmp116 = intf$Iter103->$class->itable;
                while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp116 = $tmp116->next;
                }
                $fn118 $tmp117 = $tmp116->methods[1];
                panda$core$Object* $tmp119 = $tmp117(intf$Iter103);
                intf115 = ((org$pandalanguage$pandac$Type*) $tmp119);
                panda$core$String* $tmp120 = panda$core$String$convert$R$panda$core$String(separator101);
                panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, &$s121);
                panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp122, ((panda$core$Object*) intf115));
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
                panda$core$MutableString$append$panda$core$String(result85, $tmp125);
                separator101 = &$s126;
            }
            goto $l108;
            $l109:;
        }
        panda$core$MutableString$append$panda$core$String(result85, &$s127);
    }
    }
    panda$core$MutableString$append$panda$core$String(result85, &$s128);
    {
        ITable* $tmp130 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp130 = $tmp130->next;
        }
        $fn132 $tmp131 = $tmp130->methods[0];
        panda$collections$Iterator* $tmp133 = $tmp131(((panda$collections$Iterable*) self->fields));
        f$Iter129 = $tmp133;
        $l134:;
        ITable* $tmp136 = f$Iter129->$class->itable;
        while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp136 = $tmp136->next;
        }
        $fn138 $tmp137 = $tmp136->methods[0];
        panda$core$Bit $tmp139 = $tmp137(f$Iter129);
        panda$core$Bit $tmp140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp139);
        if (!$tmp140.value) goto $l135;
        {
            ITable* $tmp142 = f$Iter129->$class->itable;
            while ($tmp142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp142 = $tmp142->next;
            }
            $fn144 $tmp143 = $tmp142->methods[1];
            panda$core$Object* $tmp145 = $tmp143(f$Iter129);
            f141 = ((org$pandalanguage$pandac$FieldDecl*) $tmp145);
            panda$core$String* $tmp147 = (($fn146) ((panda$core$Object*) f141)->$class->vtable[0])(((panda$core$Object*) f141));
            panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s148);
            panda$core$MutableString$append$panda$core$String(result85, $tmp149);
        }
        goto $l134;
        $l135:;
    }
    {
        ITable* $tmp151 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp151 = $tmp151->next;
        }
        $fn153 $tmp152 = $tmp151->methods[0];
        panda$collections$Iterator* $tmp154 = $tmp152(((panda$collections$Iterable*) self->methods));
        m$Iter150 = $tmp154;
        $l155:;
        ITable* $tmp157 = m$Iter150->$class->itable;
        while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp157 = $tmp157->next;
        }
        $fn159 $tmp158 = $tmp157->methods[0];
        panda$core$Bit $tmp160 = $tmp158(m$Iter150);
        panda$core$Bit $tmp161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp160);
        if (!$tmp161.value) goto $l156;
        {
            ITable* $tmp163 = m$Iter150->$class->itable;
            while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp163 = $tmp163->next;
            }
            $fn165 $tmp164 = $tmp163->methods[1];
            panda$core$Object* $tmp166 = $tmp164(m$Iter150);
            m162 = ((org$pandalanguage$pandac$MethodDecl*) $tmp166);
            panda$core$String* $tmp167 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m162);
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s168);
            panda$core$MutableString$append$panda$core$String(result85, $tmp169);
        }
        goto $l155;
        $l156:;
    }
    panda$core$MutableString$append$panda$core$String(result85, &$s170);
    panda$core$String* $tmp171 = panda$core$MutableString$finish$R$panda$core$String(result85);
    return $tmp171;
}

