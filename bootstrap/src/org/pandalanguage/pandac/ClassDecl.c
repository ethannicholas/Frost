#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/MapView.h"
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
#include "panda/core/Panda.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn25)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn31)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn37)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn50)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn67)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn79)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn118)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn130)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn143)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn155)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn163)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn169)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn175)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn183)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn189)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn195)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* p$Iter22;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p34;
    self->rawSuper = NULL;
    panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2->refCount.value = 1;
    panda$collections$Array$init($tmp2);
    self->rawInterfaces = $tmp2;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp4->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4->refCount.value = 1;
    panda$collections$Array$init($tmp4);
    self->fields = $tmp4;
    panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp6->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6->refCount.value = 1;
    panda$collections$Array$init($tmp6);
    self->methods = $tmp6;
    panda$collections$Array* $tmp8 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp8->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp8->refCount.value = 1;
    panda$collections$Array$init($tmp8);
    self->classes = $tmp8;
    panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp10->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp10->refCount.value = 1;
    panda$collections$Array$init($tmp10);
    self->choiceEntries = $tmp10;
    self->owner = NULL;
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp12 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp12->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp12->refCount.value = 1;
    panda$collections$Array$init($tmp12);
    self->virtualMethods = $tmp12;
    panda$collections$HashMap* $tmp14 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp14->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp14->refCount.value = 1;
    panda$collections$HashMap$init($tmp14);
    self->classResolutionCache = $tmp14;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    {
        self->source = p_source;
    }
    {
        panda$collections$HashMap* $tmp16 = (panda$collections$HashMap*) pandaZAlloc(56);
        $tmp16->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp16->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp16, p_aliases);
        self->aliases = ((panda$collections$MapView*) $tmp16);
    }
    {
        self->doccomment = p_doccomment;
    }
    {
        self->annotations = p_annotations;
    }
    self->classKind = p_kind;
    {
        panda$collections$Array* $tmp18 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp18->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp18->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp18, p_declaredSupers);
        self->declaredSupers = $tmp18;
    }
    {
        self->parameters = ((panda$collections$List*) p_parameters);
    }
    {
        org$pandalanguage$pandac$SymbolTable* $tmp20 = (org$pandalanguage$pandac$SymbolTable*) pandaZAlloc(48);
        $tmp20->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
        $tmp20->refCount.value = 1;
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp20, p_parent);
        self->symbolTable = $tmp20;
    }
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp23 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp23 = $tmp23->next;
        }
        $fn25 $tmp24 = $tmp23->methods[0];
        panda$collections$Iterator* $tmp26 = $tmp24(((panda$collections$Iterable*) p_parameters));
        p$Iter22 = $tmp26;
        $l27:;
        ITable* $tmp29 = p$Iter22->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[0];
        panda$core$Bit $tmp32 = $tmp30(p$Iter22);
        panda$core$Bit $tmp33 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp32);
        if (!$tmp33.value) goto $l28;
        {
            ITable* $tmp35 = p$Iter22->$class->itable;
            while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp35 = $tmp35->next;
            }
            $fn37 $tmp36 = $tmp35->methods[1];
            panda$core$Object* $tmp38 = $tmp36(p$Iter22);
            p34 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp38);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p34));
        }
        goto $l27;
        $l28:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index39;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp42;
    panda$core$String$Index$nullable $tmp41 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s40);
    index39 = $tmp41;
    if (((panda$core$Bit) { !index39.nonnull }).value) {
    {
        return self->name;
    }
    }
    panda$core$String$Index $tmp43 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index39.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp42, ((panda$core$String$Index$nullable) { $tmp43, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp44 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp42);
    return $tmp44;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Position $tmp47;
    org$pandalanguage$pandac$Type* $tmp45 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp45->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp45->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp47);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp45, self->name, ((panda$core$Int64) { 10 }), $tmp47, ((panda$core$Bit) { true }));
    return $tmp45;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes54;
    panda$core$MutableString* name58;
    panda$core$Char8 $tmp61;
    panda$core$String* separator62;
    panda$collections$Iterator* p$Iter64;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p76;
    org$pandalanguage$pandac$Type* t81;
    org$pandalanguage$pandac$Position $tmp87;
    panda$core$Char8 $tmp89;
    org$pandalanguage$pandac$Type* tmp190;
    org$pandalanguage$pandac$Position $tmp94;
    ITable* $tmp48 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp48->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp48 = $tmp48->next;
    }
    $fn50 $tmp49 = $tmp48->methods[0];
    panda$core$Int64 $tmp51 = $tmp49(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp51, ((panda$core$Int64) { 0 }));
    if ($tmp52.value) {
    {
        org$pandalanguage$pandac$Type* $tmp53 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        return $tmp53;
    }
    }
    panda$collections$Array* $tmp55 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp55->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp55->refCount.value = 1;
    panda$collections$Array$init($tmp55);
    subtypes54 = $tmp55;
    org$pandalanguage$pandac$Type* $tmp57 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes54, ((panda$core$Object*) $tmp57));
    panda$core$MutableString* $tmp59 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp59->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp59->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp59, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name58 = $tmp59;
    panda$core$Char8$init$panda$core$UInt8(&$tmp61, ((panda$core$UInt8) { 60 }));
    panda$core$MutableString$append$panda$core$Char8(name58, $tmp61);
    separator62 = &$s63;
    {
        ITable* $tmp65 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp65 = $tmp65->next;
        }
        $fn67 $tmp66 = $tmp65->methods[0];
        panda$collections$Iterator* $tmp68 = $tmp66(((panda$collections$Iterable*) self->parameters));
        p$Iter64 = $tmp68;
        $l69:;
        ITable* $tmp71 = p$Iter64->$class->itable;
        while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp71 = $tmp71->next;
        }
        $fn73 $tmp72 = $tmp71->methods[0];
        panda$core$Bit $tmp74 = $tmp72(p$Iter64);
        panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
        if (!$tmp75.value) goto $l70;
        {
            ITable* $tmp77 = p$Iter64->$class->itable;
            while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp77 = $tmp77->next;
            }
            $fn79 $tmp78 = $tmp77->methods[1];
            panda$core$Object* $tmp80 = $tmp78(p$Iter64);
            p76 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp80);
            org$pandalanguage$pandac$Type* $tmp82 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp82->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp82->refCount.value = 1;
            panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s84);
            panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, ((org$pandalanguage$pandac$Symbol*) p76)->name);
            org$pandalanguage$pandac$Position$init(&$tmp87);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp82, $tmp86, ((panda$core$Int64) { 22 }), $tmp87, ((panda$core$Bit) { true }));
            t81 = $tmp82;
            panda$collections$Array$add$panda$collections$Array$T(subtypes54, ((panda$core$Object*) t81));
            panda$core$MutableString$append$panda$core$String(name58, separator62);
            panda$core$MutableString$append$panda$core$String(name58, ((org$pandalanguage$pandac$Symbol*) t81)->name);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator62));
                separator62 = &$s88;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t81));
        }
        goto $l69;
        $l70:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp89, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name58, $tmp89);
    {
        org$pandalanguage$pandac$Type* $tmp91 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp91->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp91->refCount.value = 1;
        panda$core$String* $tmp93 = panda$core$MutableString$finish$R$panda$core$String(name58);
        org$pandalanguage$pandac$Position$init(&$tmp94);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp91, $tmp93, ((panda$core$Int64) { 21 }), $tmp94, ((panda$collections$ListView*) subtypes54), ((panda$core$Bit) { true }));
        tmp190 = $tmp91;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes54));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator62));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name58));
        }
        return tmp190;
    }
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Char8 $tmp95;
    panda$core$Char8$init$panda$core$UInt8(&$tmp95, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp96 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp95);
    return $tmp96;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result97;
    panda$core$String* separator106;
    panda$collections$Iterator* intf$Iter115;
    org$pandalanguage$pandac$Type* intf127;
    panda$collections$Iterator* cl$Iter140;
    org$pandalanguage$pandac$ClassDecl* cl152;
    panda$collections$Iterator* f$Iter160;
    org$pandalanguage$pandac$FieldDecl* f172;
    panda$collections$Iterator* m$Iter180;
    org$pandalanguage$pandac$MethodDecl* m192;
    panda$core$Char8 $tmp200;
    panda$core$String* tmp2201;
    panda$core$MutableString* $tmp98 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp98->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp98->refCount.value = 1;
    panda$core$String* $tmp100 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, &$s101);
    panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, self->name);
    panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s104);
    panda$core$MutableString$init$panda$core$String($tmp98, $tmp105);
    result97 = $tmp98;
    separator106 = &$s107;
    if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
    {
        panda$core$String* $tmp108 = panda$core$String$convert$R$panda$core$String(separator106);
        panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
        panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp110, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s112);
        panda$core$MutableString$append$panda$core$String(result97, $tmp113);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator106));
            separator106 = &$s114;
        }
    }
    }
    {
        ITable* $tmp116 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
        while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp116 = $tmp116->next;
        }
        $fn118 $tmp117 = $tmp116->methods[0];
        panda$collections$Iterator* $tmp119 = $tmp117(((panda$collections$Iterable*) self->rawInterfaces));
        intf$Iter115 = $tmp119;
        $l120:;
        ITable* $tmp122 = intf$Iter115->$class->itable;
        while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp122 = $tmp122->next;
        }
        $fn124 $tmp123 = $tmp122->methods[0];
        panda$core$Bit $tmp125 = $tmp123(intf$Iter115);
        panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
        if (!$tmp126.value) goto $l121;
        {
            ITable* $tmp128 = intf$Iter115->$class->itable;
            while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp128 = $tmp128->next;
            }
            $fn130 $tmp129 = $tmp128->methods[1];
            panda$core$Object* $tmp131 = $tmp129(intf$Iter115);
            intf127 = ((org$pandalanguage$pandac$Type*) $tmp131);
            panda$core$String* $tmp132 = panda$core$String$convert$R$panda$core$String(separator106);
            panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s133);
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp134, ((panda$core$Object*) intf127));
            panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s136);
            panda$core$MutableString$append$panda$core$String(result97, $tmp137);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator106));
                separator106 = &$s138;
            }
        }
        goto $l120;
        $l121:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    }
    panda$core$MutableString$append$panda$core$String(result97, &$s139);
    {
        ITable* $tmp141 = ((panda$collections$Iterable*) self->classes)->$class->itable;
        while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp141 = $tmp141->next;
        }
        $fn143 $tmp142 = $tmp141->methods[0];
        panda$collections$Iterator* $tmp144 = $tmp142(((panda$collections$Iterable*) self->classes));
        cl$Iter140 = $tmp144;
        $l145:;
        ITable* $tmp147 = cl$Iter140->$class->itable;
        while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp147 = $tmp147->next;
        }
        $fn149 $tmp148 = $tmp147->methods[0];
        panda$core$Bit $tmp150 = $tmp148(cl$Iter140);
        panda$core$Bit $tmp151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp150);
        if (!$tmp151.value) goto $l146;
        {
            ITable* $tmp153 = cl$Iter140->$class->itable;
            while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp153 = $tmp153->next;
            }
            $fn155 $tmp154 = $tmp153->methods[1];
            panda$core$Object* $tmp156 = $tmp154(cl$Iter140);
            cl152 = ((org$pandalanguage$pandac$ClassDecl*) $tmp156);
            panda$core$String* $tmp157 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl152);
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, &$s158);
            panda$core$MutableString$append$panda$core$String(result97, $tmp159);
        }
        goto $l145;
        $l146:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    }
    {
        ITable* $tmp161 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp161 = $tmp161->next;
        }
        $fn163 $tmp162 = $tmp161->methods[0];
        panda$collections$Iterator* $tmp164 = $tmp162(((panda$collections$Iterable*) self->fields));
        f$Iter160 = $tmp164;
        $l165:;
        ITable* $tmp167 = f$Iter160->$class->itable;
        while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp167 = $tmp167->next;
        }
        $fn169 $tmp168 = $tmp167->methods[0];
        panda$core$Bit $tmp170 = $tmp168(f$Iter160);
        panda$core$Bit $tmp171 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp170);
        if (!$tmp171.value) goto $l166;
        {
            ITable* $tmp173 = f$Iter160->$class->itable;
            while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp173 = $tmp173->next;
            }
            $fn175 $tmp174 = $tmp173->methods[1];
            panda$core$Object* $tmp176 = $tmp174(f$Iter160);
            f172 = ((org$pandalanguage$pandac$FieldDecl*) $tmp176);
            panda$core$String* $tmp177 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f172);
            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s178);
            panda$core$MutableString$append$panda$core$String(result97, $tmp179);
        }
        goto $l165;
        $l166:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
    }
    {
        ITable* $tmp181 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp181 = $tmp181->next;
        }
        $fn183 $tmp182 = $tmp181->methods[0];
        panda$collections$Iterator* $tmp184 = $tmp182(((panda$collections$Iterable*) self->methods));
        m$Iter180 = $tmp184;
        $l185:;
        ITable* $tmp187 = m$Iter180->$class->itable;
        while ($tmp187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp187 = $tmp187->next;
        }
        $fn189 $tmp188 = $tmp187->methods[0];
        panda$core$Bit $tmp190 = $tmp188(m$Iter180);
        panda$core$Bit $tmp191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp190);
        if (!$tmp191.value) goto $l186;
        {
            ITable* $tmp193 = m$Iter180->$class->itable;
            while ($tmp193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp193 = $tmp193->next;
            }
            $fn195 $tmp194 = $tmp193->methods[1];
            panda$core$Object* $tmp196 = $tmp194(m$Iter180);
            m192 = ((org$pandalanguage$pandac$MethodDecl*) $tmp196);
            panda$core$String* $tmp197 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m192);
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            panda$core$MutableString$append$panda$core$String(result97, $tmp199);
        }
        goto $l185;
        $l186:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp200, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result97, $tmp200);
    {
        panda$core$String* $tmp202 = panda$core$MutableString$finish$R$panda$core$String(result97);
        tmp2201 = $tmp202;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result97));
        }
        return tmp2201;
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

