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
typedef panda$core$Int64 (*$fn34)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn51)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn57)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn63)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn99)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn111)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn126)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn138)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn159)(panda$collections$Iterator*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x0A", 3, 1 };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p25));
        }
        goto $l18;
        $l19:;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $tmp30 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp30->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp30->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp30, self->name, ((panda$core$Int64) { 10 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp30;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes38;
    panda$core$MutableString* name42;
    panda$core$String* separator46;
    panda$collections$Iterator* p$Iter48;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p60;
    org$pandalanguage$pandac$Type* t65;
    ITable* $tmp32 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp32->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp32 = $tmp32->next;
    }
    $fn34 $tmp33 = $tmp32->methods[0];
    panda$core$Int64 $tmp35 = $tmp33(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp35, ((panda$core$Int64) { 0 }));
    if ($tmp36.value) {
    {
        org$pandalanguage$pandac$Type* $tmp37 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        return $tmp37;
    }
    }
    panda$collections$Array* $tmp39 = (panda$collections$Array*) malloc(40);
    $tmp39->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp39->refCount.value = 1;
    panda$collections$Array$init($tmp39);
    subtypes38 = $tmp39;
    org$pandalanguage$pandac$Type* $tmp41 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes38, ((panda$core$Object*) $tmp41));
    panda$core$MutableString* $tmp43 = (panda$core$MutableString*) malloc(40);
    $tmp43->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp43->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp43, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name42 = $tmp43;
    panda$core$MutableString$append$panda$core$String(name42, &$s45);
    separator46 = &$s47;
    {
        ITable* $tmp49 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp49->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp49 = $tmp49->next;
        }
        $fn51 $tmp50 = $tmp49->methods[0];
        panda$collections$Iterator* $tmp52 = $tmp50(((panda$collections$Iterable*) self->parameters));
        p$Iter48 = $tmp52;
        $l53:;
        ITable* $tmp55 = p$Iter48->$class->itable;
        while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp55 = $tmp55->next;
        }
        $fn57 $tmp56 = $tmp55->methods[0];
        panda$core$Bit $tmp58 = $tmp56(p$Iter48);
        panda$core$Bit $tmp59 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp58);
        if (!$tmp59.value) goto $l54;
        {
            ITable* $tmp61 = p$Iter48->$class->itable;
            while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp61 = $tmp61->next;
            }
            $fn63 $tmp62 = $tmp61->methods[1];
            panda$core$Object* $tmp64 = $tmp62(p$Iter48);
            p60 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp64);
            org$pandalanguage$pandac$Type* $tmp66 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp66->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp66->refCount.value = 1;
            panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s68);
            panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, ((org$pandalanguage$pandac$Symbol*) p60)->name);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp66, $tmp70, ((panda$core$Int64) { 22 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
            t65 = $tmp66;
            panda$collections$Array$add$panda$collections$Array$T(subtypes38, ((panda$core$Object*) t65));
            panda$core$MutableString$append$panda$core$String(name42, separator46);
            panda$core$MutableString$append$panda$core$String(name42, ((org$pandalanguage$pandac$Symbol*) t65)->name);
            separator46 = &$s71;
        }
        goto $l53;
        $l54:;
    }
    panda$core$MutableString$append$panda$core$String(name42, &$s72);
    org$pandalanguage$pandac$Type* $tmp73 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp73->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp73->refCount.value = 1;
    panda$core$String* $tmp75 = panda$core$MutableString$convert$R$panda$core$String(name42);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp73, $tmp75, ((panda$core$Int64) { 21 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) subtypes38), ((panda$core$Bit) { true }));
    return $tmp73;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $tmp77 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(self->name, &$s76);
    return $tmp77;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result78;
    panda$core$String* separator94;
    panda$collections$Iterator* intf$Iter96;
    org$pandalanguage$pandac$Type* intf108;
    panda$collections$Iterator* f$Iter123;
    org$pandalanguage$pandac$FieldDecl* f135;
    panda$collections$Iterator* m$Iter144;
    org$pandalanguage$pandac$MethodDecl* m156;
    panda$core$MutableString* $tmp79 = (panda$core$MutableString*) malloc(40);
    $tmp79->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp79->refCount.value = 1;
    panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s81, self->name);
    panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s83);
    panda$core$MutableString$init$panda$core$String($tmp79, $tmp84);
    result78 = $tmp79;
    org$pandalanguage$pandac$Type* $tmp85 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp86 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->rawSuper, $tmp85);
    if ($tmp86.value) {
    {
        panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s87, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s89);
        panda$core$MutableString$append$panda$core$String(result78, $tmp90);
    }
    }
    panda$core$Int64 $tmp91 = panda$collections$Array$get_count$R$panda$core$Int64(self->rawInterfaces);
    panda$core$Bit $tmp92 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp91, ((panda$core$Int64) { 0 }));
    if ($tmp92.value) {
    {
        panda$core$MutableString$append$panda$core$String(result78, &$s93);
        separator94 = &$s95;
        {
            ITable* $tmp97 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
            while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp97 = $tmp97->next;
            }
            $fn99 $tmp98 = $tmp97->methods[0];
            panda$collections$Iterator* $tmp100 = $tmp98(((panda$collections$Iterable*) self->rawInterfaces));
            intf$Iter96 = $tmp100;
            $l101:;
            ITable* $tmp103 = intf$Iter96->$class->itable;
            while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp103 = $tmp103->next;
            }
            $fn105 $tmp104 = $tmp103->methods[0];
            panda$core$Bit $tmp106 = $tmp104(intf$Iter96);
            panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
            if (!$tmp107.value) goto $l102;
            {
                ITable* $tmp109 = intf$Iter96->$class->itable;
                while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp109 = $tmp109->next;
                }
                $fn111 $tmp110 = $tmp109->methods[1];
                panda$core$Object* $tmp112 = $tmp110(intf$Iter96);
                intf108 = ((org$pandalanguage$pandac$Type*) $tmp112);
                panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s113, separator94);
                panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s115);
                panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp116, ((panda$core$Object*) intf108));
                panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp117, &$s118);
                panda$core$MutableString$append$panda$core$String(result78, $tmp119);
                separator94 = &$s120;
            }
            goto $l101;
            $l102:;
        }
        panda$core$MutableString$append$panda$core$String(result78, &$s121);
    }
    }
    panda$core$MutableString$append$panda$core$String(result78, &$s122);
    {
        ITable* $tmp124 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp124 = $tmp124->next;
        }
        $fn126 $tmp125 = $tmp124->methods[0];
        panda$collections$Iterator* $tmp127 = $tmp125(((panda$collections$Iterable*) self->fields));
        f$Iter123 = $tmp127;
        $l128:;
        ITable* $tmp130 = f$Iter123->$class->itable;
        while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp130 = $tmp130->next;
        }
        $fn132 $tmp131 = $tmp130->methods[0];
        panda$core$Bit $tmp133 = $tmp131(f$Iter123);
        panda$core$Bit $tmp134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp133);
        if (!$tmp134.value) goto $l129;
        {
            ITable* $tmp136 = f$Iter123->$class->itable;
            while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp136 = $tmp136->next;
            }
            $fn138 $tmp137 = $tmp136->methods[1];
            panda$core$Object* $tmp139 = $tmp137(f$Iter123);
            f135 = ((org$pandalanguage$pandac$FieldDecl*) $tmp139);
            panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s140, ((panda$core$Object*) f135));
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s142);
            panda$core$MutableString$append$panda$core$String(result78, $tmp143);
        }
        goto $l128;
        $l129:;
    }
    {
        ITable* $tmp145 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp145 = $tmp145->next;
        }
        $fn147 $tmp146 = $tmp145->methods[0];
        panda$collections$Iterator* $tmp148 = $tmp146(((panda$collections$Iterable*) self->methods));
        m$Iter144 = $tmp148;
        $l149:;
        ITable* $tmp151 = m$Iter144->$class->itable;
        while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp151 = $tmp151->next;
        }
        $fn153 $tmp152 = $tmp151->methods[0];
        panda$core$Bit $tmp154 = $tmp152(m$Iter144);
        panda$core$Bit $tmp155 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp154);
        if (!$tmp155.value) goto $l150;
        {
            ITable* $tmp157 = m$Iter144->$class->itable;
            while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp157 = $tmp157->next;
            }
            $fn159 $tmp158 = $tmp157->methods[1];
            panda$core$Object* $tmp160 = $tmp158(m$Iter144);
            m156 = ((org$pandalanguage$pandac$MethodDecl*) $tmp160);
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s161, ((panda$core$Object*) m156));
            panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, &$s163);
            panda$core$MutableString$append$panda$core$String(result78, $tmp164);
        }
        goto $l149;
        $l150:;
    }
    panda$core$MutableString$append$panda$core$String(result78, &$s165);
    panda$core$String* $tmp166 = panda$core$MutableString$convert$R$panda$core$String(result78);
    return $tmp166;
}

