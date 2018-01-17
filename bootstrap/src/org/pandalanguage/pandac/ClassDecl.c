#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/MapView.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Object.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn24)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn49)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn66)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn78)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn117)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn129)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn142)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn148)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn154)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn182)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn188)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn194)(panda$collections$Iterator*);

static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* p$Iter21;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p33;
    self->rawSuper = NULL;
    panda$collections$Array* $tmp1 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->rawInterfaces = $tmp1;
    panda$collections$Array* $tmp3 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3->refCount.value = 1;
    panda$collections$Array$init($tmp3);
    self->fields = $tmp3;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    self->methods = $tmp5;
    panda$collections$Array* $tmp7 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp7->refCount.value = 1;
    panda$collections$Array$init($tmp7);
    self->classes = $tmp7;
    panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp9->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp9->refCount.value = 1;
    panda$collections$Array$init($tmp9);
    self->choiceEntries = $tmp9;
    self->owner = NULL;
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp11 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp11->refCount.value = 1;
    panda$collections$Array$init($tmp11);
    self->virtualMethods = $tmp11;
    panda$collections$HashMap* $tmp13 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp13->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp13->refCount.value = 1;
    panda$collections$HashMap$init($tmp13);
    self->classResolutionCache = $tmp13;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    {
        self->source = p_source;
    }
    {
        panda$collections$HashMap* $tmp15 = (panda$collections$HashMap*) pandaZAlloc(56);
        $tmp15->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp15->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp15, p_aliases);
        self->aliases = ((panda$collections$MapView*) $tmp15);
    }
    {
        self->doccomment = p_doccomment;
    }
    {
        self->annotations = p_annotations;
    }
    self->classKind = p_kind;
    {
        panda$collections$Array* $tmp17 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp17->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp17, p_declaredSupers);
        self->declaredSupers = $tmp17;
    }
    {
        self->parameters = ((panda$collections$List*) p_parameters);
    }
    {
        org$pandalanguage$pandac$SymbolTable* $tmp19 = (org$pandalanguage$pandac$SymbolTable*) pandaZAlloc(48);
        $tmp19->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
        $tmp19->refCount.value = 1;
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp19, p_parent);
        self->symbolTable = $tmp19;
    }
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
    org$pandalanguage$pandac$Type* $tmp44 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
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
    org$pandalanguage$pandac$Type* tmp189;
    org$pandalanguage$pandac$Position $tmp93;
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
    panda$collections$Array* $tmp54 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp54->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp54->refCount.value = 1;
    panda$collections$Array$init($tmp54);
    subtypes53 = $tmp54;
    org$pandalanguage$pandac$Type* $tmp56 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes53, ((panda$core$Object*) $tmp56));
    panda$core$MutableString* $tmp58 = (panda$core$MutableString*) pandaZAlloc(48);
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
            org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
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
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator61));
                separator61 = &$s87;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t80));
        }
        goto $l68;
        $l69:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name57, $tmp88);
    {
        org$pandalanguage$pandac$Type* $tmp90 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp90->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp90->refCount.value = 1;
        panda$core$String* $tmp92 = panda$core$MutableString$finish$R$panda$core$String(name57);
        org$pandalanguage$pandac$Position$init(&$tmp93);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp90, $tmp92, ((panda$core$Int64) { 21 }), $tmp93, ((panda$collections$ListView*) subtypes53), ((panda$core$Bit) { true }));
        tmp189 = $tmp90;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes53));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator61));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name57));
        }
        return tmp189;
    }
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Char8 $tmp94;
    panda$core$Char8$init$panda$core$UInt8(&$tmp94, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp95 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp94);
    return $tmp95;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result96;
    panda$core$String* separator105;
    panda$collections$Iterator* intf$Iter114;
    org$pandalanguage$pandac$Type* intf126;
    panda$collections$Iterator* cl$Iter139;
    org$pandalanguage$pandac$ClassDecl* cl151;
    panda$collections$Iterator* f$Iter159;
    org$pandalanguage$pandac$FieldDecl* f171;
    panda$collections$Iterator* m$Iter179;
    org$pandalanguage$pandac$MethodDecl* m191;
    panda$core$Char8 $tmp199;
    panda$core$String* tmp2200;
    panda$core$MutableString* $tmp97 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp97->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp97->refCount.value = 1;
    panda$core$String* $tmp99 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s100);
    panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, self->name);
    panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, &$s103);
    panda$core$MutableString$init$panda$core$String($tmp97, $tmp104);
    result96 = $tmp97;
    separator105 = &$s106;
    if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
    {
        panda$core$String* $tmp107 = panda$core$String$convert$R$panda$core$String(separator105);
        panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s108);
        panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp109, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
        panda$core$MutableString$append$panda$core$String(result96, $tmp112);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator105));
            separator105 = &$s113;
        }
    }
    }
    {
        ITable* $tmp115 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
        while ($tmp115->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp115 = $tmp115->next;
        }
        $fn117 $tmp116 = $tmp115->methods[0];
        panda$collections$Iterator* $tmp118 = $tmp116(((panda$collections$Iterable*) self->rawInterfaces));
        intf$Iter114 = $tmp118;
        $l119:;
        ITable* $tmp121 = intf$Iter114->$class->itable;
        while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp121 = $tmp121->next;
        }
        $fn123 $tmp122 = $tmp121->methods[0];
        panda$core$Bit $tmp124 = $tmp122(intf$Iter114);
        panda$core$Bit $tmp125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp124);
        if (!$tmp125.value) goto $l120;
        {
            ITable* $tmp127 = intf$Iter114->$class->itable;
            while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp127 = $tmp127->next;
            }
            $fn129 $tmp128 = $tmp127->methods[1];
            panda$core$Object* $tmp130 = $tmp128(intf$Iter114);
            intf126 = ((org$pandalanguage$pandac$Type*) $tmp130);
            panda$core$String* $tmp131 = panda$core$String$convert$R$panda$core$String(separator105);
            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
            panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp133, ((panda$core$Object*) intf126));
            panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
            panda$core$MutableString$append$panda$core$String(result96, $tmp136);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator105));
                separator105 = &$s137;
            }
        }
        goto $l119;
        $l120:;
    }
    panda$core$MutableString$append$panda$core$String(result96, &$s138);
    {
        ITable* $tmp140 = ((panda$collections$Iterable*) self->classes)->$class->itable;
        while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp140 = $tmp140->next;
        }
        $fn142 $tmp141 = $tmp140->methods[0];
        panda$collections$Iterator* $tmp143 = $tmp141(((panda$collections$Iterable*) self->classes));
        cl$Iter139 = $tmp143;
        $l144:;
        ITable* $tmp146 = cl$Iter139->$class->itable;
        while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp146 = $tmp146->next;
        }
        $fn148 $tmp147 = $tmp146->methods[0];
        panda$core$Bit $tmp149 = $tmp147(cl$Iter139);
        panda$core$Bit $tmp150 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp149);
        if (!$tmp150.value) goto $l145;
        {
            ITable* $tmp152 = cl$Iter139->$class->itable;
            while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp152 = $tmp152->next;
            }
            $fn154 $tmp153 = $tmp152->methods[1];
            panda$core$Object* $tmp155 = $tmp153(cl$Iter139);
            cl151 = ((org$pandalanguage$pandac$ClassDecl*) $tmp155);
            panda$core$String* $tmp156 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl151);
            panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s157);
            panda$core$MutableString$append$panda$core$String(result96, $tmp158);
        }
        goto $l144;
        $l145:;
    }
    {
        ITable* $tmp160 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp160 = $tmp160->next;
        }
        $fn162 $tmp161 = $tmp160->methods[0];
        panda$collections$Iterator* $tmp163 = $tmp161(((panda$collections$Iterable*) self->fields));
        f$Iter159 = $tmp163;
        $l164:;
        ITable* $tmp166 = f$Iter159->$class->itable;
        while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp166 = $tmp166->next;
        }
        $fn168 $tmp167 = $tmp166->methods[0];
        panda$core$Bit $tmp169 = $tmp167(f$Iter159);
        panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
        if (!$tmp170.value) goto $l165;
        {
            ITable* $tmp172 = f$Iter159->$class->itable;
            while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp172 = $tmp172->next;
            }
            $fn174 $tmp173 = $tmp172->methods[1];
            panda$core$Object* $tmp175 = $tmp173(f$Iter159);
            f171 = ((org$pandalanguage$pandac$FieldDecl*) $tmp175);
            panda$core$String* $tmp176 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f171);
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
            panda$core$MutableString$append$panda$core$String(result96, $tmp178);
        }
        goto $l164;
        $l165:;
    }
    {
        ITable* $tmp180 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp180 = $tmp180->next;
        }
        $fn182 $tmp181 = $tmp180->methods[0];
        panda$collections$Iterator* $tmp183 = $tmp181(((panda$collections$Iterable*) self->methods));
        m$Iter179 = $tmp183;
        $l184:;
        ITable* $tmp186 = m$Iter179->$class->itable;
        while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp186 = $tmp186->next;
        }
        $fn188 $tmp187 = $tmp186->methods[0];
        panda$core$Bit $tmp189 = $tmp187(m$Iter179);
        panda$core$Bit $tmp190 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp189);
        if (!$tmp190.value) goto $l185;
        {
            ITable* $tmp192 = m$Iter179->$class->itable;
            while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp192 = $tmp192->next;
            }
            $fn194 $tmp193 = $tmp192->methods[1];
            panda$core$Object* $tmp195 = $tmp193(m$Iter179);
            m191 = ((org$pandalanguage$pandac$MethodDecl*) $tmp195);
            panda$core$String* $tmp196 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m191);
            panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
            panda$core$MutableString$append$panda$core$String(result96, $tmp198);
        }
        goto $l184;
        $l185:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp199, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result96, $tmp199);
    {
        panda$core$String* $tmp201 = panda$core$MutableString$finish$R$panda$core$String(result96);
        tmp2200 = $tmp201;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result96));
        }
        return tmp2200;
    }
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->aliases));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->declaredSupers));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawSuper));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawInterfaces));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->fields));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->choiceEntries));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbolTable));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->virtualMethods));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classResolutionCache));
}

