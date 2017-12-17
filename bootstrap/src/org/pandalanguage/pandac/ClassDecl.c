#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/MapView.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn24)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn49)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn66)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn78)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn116)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn122)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn128)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn153)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn167)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn173)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn181)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn187)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn193)(panda$collections$Iterator*);

static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* p$Iter21;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p33;
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
    panda$collections$Array* $tmp9 = (panda$collections$Array*) malloc(40);
    $tmp9->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp9->refCount.value = 1;
    panda$collections$Array$init($tmp9);
    self->choiceEntries = $tmp9;
    self->owner = NULL;
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp11 = (panda$collections$Array*) malloc(40);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp11->refCount.value = 1;
    panda$collections$Array$init($tmp11);
    self->virtualMethods = $tmp11;
    panda$collections$HashMap* $tmp13 = (panda$collections$HashMap*) malloc(56);
    $tmp13->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp13->refCount.value = 1;
    panda$collections$HashMap$init($tmp13);
    self->classResolutionCache = $tmp13;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    self->source = p_source;
    panda$collections$HashMap* $tmp15 = (panda$collections$HashMap*) malloc(56);
    $tmp15->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp15->refCount.value = 1;
    panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp15, p_aliases);
    self->aliases = ((panda$collections$MapView*) $tmp15);
    self->doccomment = p_doccomment;
    self->annotations = p_annotations;
    self->classKind = p_kind;
    panda$collections$Array* $tmp17 = (panda$collections$Array*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp17->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp17, p_declaredSupers);
    self->declaredSupers = $tmp17;
    self->parameters = ((panda$collections$List*) p_parameters);
    org$pandalanguage$pandac$SymbolTable* $tmp19 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp19->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp19->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp19, p_parent);
    self->symbolTable = $tmp19;
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp22 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp22->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp22 = $tmp22->next;
        }
        $fn24 $tmp23 = $tmp22->methods[0];
        panda$collections$Iterator* $tmp25 = $tmp23(((panda$collections$Iterable*) p_parameters));
        p$Iter21 = $tmp25;
        $l26:;
        ITable* $tmp28 = p$Iter21->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[0];
        panda$core$Bit $tmp31 = $tmp29(p$Iter21);
        panda$core$Bit $tmp32 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp31);
        if (!$tmp32.value) goto $l27;
        {
            ITable* $tmp34 = p$Iter21->$class->itable;
            while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp34 = $tmp34->next;
            }
            $fn36 $tmp35 = $tmp34->methods[1];
            panda$core$Object* $tmp37 = $tmp35(p$Iter21);
            p33 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp37);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p33));
        }
        goto $l26;
        $l27:;
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index38;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp41;
    panda$core$String$Index$nullable $tmp40 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s39);
    index38 = $tmp40;
    if (((panda$core$Bit) { !index38.nonnull }).value) {
    {
        return self->name;
    }
    }
    panda$core$String$Index $tmp42 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index38.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp41, ((panda$core$String$Index$nullable) { $tmp42, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp43 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp41);
    return $tmp43;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Position $tmp46;
    org$pandalanguage$pandac$Type* $tmp44 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp44->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp44->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp46);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp44, self->name, ((panda$core$Int64) { 10 }), $tmp46, ((panda$core$Bit) { true }));
    return $tmp44;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes53;
    panda$core$MutableString* name57;
    panda$core$Char8 $tmp60;
    panda$core$String* separator61;
    panda$collections$Iterator* p$Iter63;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p75;
    org$pandalanguage$pandac$Type* t80;
    org$pandalanguage$pandac$Position $tmp86;
    panda$core$Char8 $tmp88;
    org$pandalanguage$pandac$Position $tmp92;
    ITable* $tmp47 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp47->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp47 = $tmp47->next;
    }
    $fn49 $tmp48 = $tmp47->methods[0];
    panda$core$Int64 $tmp50 = $tmp48(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp50, ((panda$core$Int64) { 0 }));
    if ($tmp51.value) {
    {
        org$pandalanguage$pandac$Type* $tmp52 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        return $tmp52;
    }
    }
    panda$collections$Array* $tmp54 = (panda$collections$Array*) malloc(40);
    $tmp54->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp54->refCount.value = 1;
    panda$collections$Array$init($tmp54);
    subtypes53 = $tmp54;
    org$pandalanguage$pandac$Type* $tmp56 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes53, ((panda$core$Object*) $tmp56));
    panda$core$MutableString* $tmp58 = (panda$core$MutableString*) malloc(48);
    $tmp58->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp58->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp58, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name57 = $tmp58;
    panda$core$Char8$init$panda$core$UInt8(&$tmp60, ((panda$core$UInt8) { 60 }));
    panda$core$MutableString$append$panda$core$Char8(name57, $tmp60);
    separator61 = &$s62;
    {
        ITable* $tmp64 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp64 = $tmp64->next;
        }
        $fn66 $tmp65 = $tmp64->methods[0];
        panda$collections$Iterator* $tmp67 = $tmp65(((panda$collections$Iterable*) self->parameters));
        p$Iter63 = $tmp67;
        $l68:;
        ITable* $tmp70 = p$Iter63->$class->itable;
        while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp70 = $tmp70->next;
        }
        $fn72 $tmp71 = $tmp70->methods[0];
        panda$core$Bit $tmp73 = $tmp71(p$Iter63);
        panda$core$Bit $tmp74 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp73);
        if (!$tmp74.value) goto $l69;
        {
            ITable* $tmp76 = p$Iter63->$class->itable;
            while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp76 = $tmp76->next;
            }
            $fn78 $tmp77 = $tmp76->methods[1];
            panda$core$Object* $tmp79 = $tmp77(p$Iter63);
            p75 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp79);
            org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp81->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp81->refCount.value = 1;
            panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s83);
            panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, ((org$pandalanguage$pandac$Symbol*) p75)->name);
            org$pandalanguage$pandac$Position$init(&$tmp86);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp81, $tmp85, ((panda$core$Int64) { 22 }), $tmp86, ((panda$core$Bit) { true }));
            t80 = $tmp81;
            panda$collections$Array$add$panda$collections$Array$T(subtypes53, ((panda$core$Object*) t80));
            panda$core$MutableString$append$panda$core$String(name57, separator61);
            panda$core$MutableString$append$panda$core$String(name57, ((org$pandalanguage$pandac$Symbol*) t80)->name);
            separator61 = &$s87;
        }
        goto $l68;
        $l69:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name57, $tmp88);
    org$pandalanguage$pandac$Type* $tmp89 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp89->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp89->refCount.value = 1;
    panda$core$String* $tmp91 = panda$core$MutableString$finish$R$panda$core$String(name57);
    org$pandalanguage$pandac$Position$init(&$tmp92);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp89, $tmp91, ((panda$core$Int64) { 21 }), $tmp92, ((panda$collections$ListView*) subtypes53), ((panda$core$Bit) { true }));
    return $tmp89;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Char8 $tmp93;
    panda$core$Char8$init$panda$core$UInt8(&$tmp93, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp94 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp93);
    return $tmp94;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result95;
    panda$core$String* separator104;
    panda$collections$Iterator* intf$Iter113;
    org$pandalanguage$pandac$Type* intf125;
    panda$collections$Iterator* cl$Iter138;
    org$pandalanguage$pandac$ClassDecl* cl150;
    panda$collections$Iterator* f$Iter158;
    org$pandalanguage$pandac$FieldDecl* f170;
    panda$collections$Iterator* m$Iter178;
    org$pandalanguage$pandac$MethodDecl* m190;
    panda$core$Char8 $tmp198;
    panda$core$MutableString* $tmp96 = (panda$core$MutableString*) malloc(48);
    $tmp96->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp96->refCount.value = 1;
    panda$core$String* $tmp98 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
    panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, self->name);
    panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s102);
    panda$core$MutableString$init$panda$core$String($tmp96, $tmp103);
    result95 = $tmp96;
    separator104 = &$s105;
    if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
    {
        panda$core$String* $tmp106 = panda$core$String$convert$R$panda$core$String(separator104);
        panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
        panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp108, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, &$s110);
        panda$core$MutableString$append$panda$core$String(result95, $tmp111);
        separator104 = &$s112;
    }
    }
    {
        ITable* $tmp114 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
        while ($tmp114->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp114 = $tmp114->next;
        }
        $fn116 $tmp115 = $tmp114->methods[0];
        panda$collections$Iterator* $tmp117 = $tmp115(((panda$collections$Iterable*) self->rawInterfaces));
        intf$Iter113 = $tmp117;
        $l118:;
        ITable* $tmp120 = intf$Iter113->$class->itable;
        while ($tmp120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp120 = $tmp120->next;
        }
        $fn122 $tmp121 = $tmp120->methods[0];
        panda$core$Bit $tmp123 = $tmp121(intf$Iter113);
        panda$core$Bit $tmp124 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp123);
        if (!$tmp124.value) goto $l119;
        {
            ITable* $tmp126 = intf$Iter113->$class->itable;
            while ($tmp126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp126 = $tmp126->next;
            }
            $fn128 $tmp127 = $tmp126->methods[1];
            panda$core$Object* $tmp129 = $tmp127(intf$Iter113);
            intf125 = ((org$pandalanguage$pandac$Type*) $tmp129);
            panda$core$String* $tmp130 = panda$core$String$convert$R$panda$core$String(separator104);
            panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, &$s131);
            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp132, ((panda$core$Object*) intf125));
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
            panda$core$MutableString$append$panda$core$String(result95, $tmp135);
            separator104 = &$s136;
        }
        goto $l118;
        $l119:;
    }
    panda$core$MutableString$append$panda$core$String(result95, &$s137);
    {
        ITable* $tmp139 = ((panda$collections$Iterable*) self->classes)->$class->itable;
        while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp139 = $tmp139->next;
        }
        $fn141 $tmp140 = $tmp139->methods[0];
        panda$collections$Iterator* $tmp142 = $tmp140(((panda$collections$Iterable*) self->classes));
        cl$Iter138 = $tmp142;
        $l143:;
        ITable* $tmp145 = cl$Iter138->$class->itable;
        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp145 = $tmp145->next;
        }
        $fn147 $tmp146 = $tmp145->methods[0];
        panda$core$Bit $tmp148 = $tmp146(cl$Iter138);
        panda$core$Bit $tmp149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp148);
        if (!$tmp149.value) goto $l144;
        {
            ITable* $tmp151 = cl$Iter138->$class->itable;
            while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp151 = $tmp151->next;
            }
            $fn153 $tmp152 = $tmp151->methods[1];
            panda$core$Object* $tmp154 = $tmp152(cl$Iter138);
            cl150 = ((org$pandalanguage$pandac$ClassDecl*) $tmp154);
            panda$core$String* $tmp155 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl150);
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s156);
            panda$core$MutableString$append$panda$core$String(result95, $tmp157);
        }
        goto $l143;
        $l144:;
    }
    {
        ITable* $tmp159 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp159 = $tmp159->next;
        }
        $fn161 $tmp160 = $tmp159->methods[0];
        panda$collections$Iterator* $tmp162 = $tmp160(((panda$collections$Iterable*) self->fields));
        f$Iter158 = $tmp162;
        $l163:;
        ITable* $tmp165 = f$Iter158->$class->itable;
        while ($tmp165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp165 = $tmp165->next;
        }
        $fn167 $tmp166 = $tmp165->methods[0];
        panda$core$Bit $tmp168 = $tmp166(f$Iter158);
        panda$core$Bit $tmp169 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp168);
        if (!$tmp169.value) goto $l164;
        {
            ITable* $tmp171 = f$Iter158->$class->itable;
            while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp171 = $tmp171->next;
            }
            $fn173 $tmp172 = $tmp171->methods[1];
            panda$core$Object* $tmp174 = $tmp172(f$Iter158);
            f170 = ((org$pandalanguage$pandac$FieldDecl*) $tmp174);
            panda$core$String* $tmp175 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f170);
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
            panda$core$MutableString$append$panda$core$String(result95, $tmp177);
        }
        goto $l163;
        $l164:;
    }
    {
        ITable* $tmp179 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp179 = $tmp179->next;
        }
        $fn181 $tmp180 = $tmp179->methods[0];
        panda$collections$Iterator* $tmp182 = $tmp180(((panda$collections$Iterable*) self->methods));
        m$Iter178 = $tmp182;
        $l183:;
        ITable* $tmp185 = m$Iter178->$class->itable;
        while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp185 = $tmp185->next;
        }
        $fn187 $tmp186 = $tmp185->methods[0];
        panda$core$Bit $tmp188 = $tmp186(m$Iter178);
        panda$core$Bit $tmp189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp188);
        if (!$tmp189.value) goto $l184;
        {
            ITable* $tmp191 = m$Iter178->$class->itable;
            while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp191 = $tmp191->next;
            }
            $fn193 $tmp192 = $tmp191->methods[1];
            panda$core$Object* $tmp194 = $tmp192(m$Iter178);
            m190 = ((org$pandalanguage$pandac$MethodDecl*) $tmp194);
            panda$core$String* $tmp195 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m190);
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s196);
            panda$core$MutableString$append$panda$core$String(result95, $tmp197);
        }
        goto $l183;
        $l184:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp198, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result95, $tmp198);
    panda$core$String* $tmp199 = panda$core$MutableString$finish$R$panda$core$String(result95);
    return $tmp199;
}

