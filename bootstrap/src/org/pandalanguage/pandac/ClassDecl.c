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
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
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

typedef panda$collections$Iterator* (*$fn15)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn21)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn39)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn54)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn60)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn66)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn114)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn127)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn133)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn139)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn159)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* Iter$119$912;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p24;
    self->rawSuper = NULL;
    panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2);
    self->rawInterfaces = $tmp2;
    panda$collections$Array* $tmp3 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3);
    self->fields = $tmp3;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4);
    self->methods = $tmp4;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp5);
    self->classes = $tmp5;
    panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp6);
    self->choiceEntries = $tmp6;
    self->owner = NULL;
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp7 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp7);
    self->virtualMethods = $tmp7;
    panda$collections$HashMap* $tmp8 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp8);
    self->classResolutionCache = $tmp8;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    {
        self->source = p_source;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    }
    {
        panda$collections$HashMap* $tmp9 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp9, p_aliases);
        self->aliases = ((panda$collections$MapView*) $tmp9);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->aliases));
    }
    {
        self->doccomment = p_doccomment;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    }
    {
        self->annotations = p_annotations;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    }
    self->classKind = p_kind;
    {
        panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp10, p_declaredSupers);
        self->declaredSupers = $tmp10;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->declaredSupers));
    }
    {
        self->parameters = ((panda$collections$List*) p_parameters);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    }
    {
        org$pandalanguage$pandac$SymbolTable* $tmp11 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp11, p_parent);
        self->symbolTable = $tmp11;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbolTable));
    }
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp13 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp13->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp13 = $tmp13->next;
        }
        $fn15 $tmp14 = $tmp13->methods[0];
        panda$collections$Iterator* $tmp16 = $tmp14(((panda$collections$Iterable*) p_parameters));
        Iter$119$912 = $tmp16;
        $l17:;
        ITable* $tmp19 = Iter$119$912->$class->itable;
        while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp19 = $tmp19->next;
        }
        $fn21 $tmp20 = $tmp19->methods[0];
        panda$core$Bit $tmp22 = $tmp20(Iter$119$912);
        panda$core$Bit $tmp23 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
        if (!$tmp23.value) goto $l18;
        {
            ITable* $tmp25 = Iter$119$912->$class->itable;
            while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp25 = $tmp25->next;
            }
            $fn27 $tmp26 = $tmp25->methods[1];
            panda$core$Object* $tmp28 = $tmp26(Iter$119$912);
            p24 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp28);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p24));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p24));
        }
        goto $l17;
        $l18:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$912));
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index29;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp32;
    panda$core$String$Index$nullable $tmp31 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s30);
    index29 = $tmp31;
    if (((panda$core$Bit) { !index29.nonnull }).value) {
    {
        return self->name;
    }
    }
    panda$core$String$Index $tmp33 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index29.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp32, ((panda$core$String$Index$nullable) { $tmp33, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp34 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp32);
    return $tmp34;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Position $tmp36;
    org$pandalanguage$pandac$Type* $tmp35 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp36);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp35, self->name, ((panda$core$Int64) { 10 }), $tmp36, ((panda$core$Bit) { true }));
    return $tmp35;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes43;
    panda$core$MutableString* name46;
    panda$core$Char8 $tmp48;
    panda$core$String* separator49;
    panda$collections$Iterator* Iter$145$951;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p63;
    org$pandalanguage$pandac$Type* t68;
    org$pandalanguage$pandac$Position $tmp73;
    panda$core$Char8 $tmp75;
    org$pandalanguage$pandac$Type* tmp176;
    org$pandalanguage$pandac$Position $tmp79;
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
    panda$collections$Array* $tmp44 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp44);
    subtypes43 = $tmp44;
    org$pandalanguage$pandac$Type* $tmp45 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes43, ((panda$core$Object*) $tmp45));
    panda$core$MutableString* $tmp47 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init$panda$core$String($tmp47, ((org$pandalanguage$pandac$Symbol*) self)->name);
    name46 = $tmp47;
    panda$core$Char8$init$panda$core$UInt8(&$tmp48, ((panda$core$UInt8) { 60 }));
    panda$core$MutableString$append$panda$core$Char8(name46, $tmp48);
    separator49 = &$s50;
    {
        ITable* $tmp52 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp52 = $tmp52->next;
        }
        $fn54 $tmp53 = $tmp52->methods[0];
        panda$collections$Iterator* $tmp55 = $tmp53(((panda$collections$Iterable*) self->parameters));
        Iter$145$951 = $tmp55;
        $l56:;
        ITable* $tmp58 = Iter$145$951->$class->itable;
        while ($tmp58->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp58 = $tmp58->next;
        }
        $fn60 $tmp59 = $tmp58->methods[0];
        panda$core$Bit $tmp61 = $tmp59(Iter$145$951);
        panda$core$Bit $tmp62 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp61);
        if (!$tmp62.value) goto $l57;
        {
            ITable* $tmp64 = Iter$145$951->$class->itable;
            while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp64 = $tmp64->next;
            }
            $fn66 $tmp65 = $tmp64->methods[1];
            panda$core$Object* $tmp67 = $tmp65(Iter$145$951);
            p63 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp67);
            org$pandalanguage$pandac$Type* $tmp69 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s70);
            panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, ((org$pandalanguage$pandac$Symbol*) p63)->name);
            org$pandalanguage$pandac$Position$init(&$tmp73);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp69, $tmp72, ((panda$core$Int64) { 22 }), $tmp73, ((panda$core$Bit) { true }));
            t68 = $tmp69;
            panda$collections$Array$add$panda$collections$Array$T(subtypes43, ((panda$core$Object*) t68));
            panda$core$MutableString$append$panda$core$String(name46, separator49);
            panda$core$MutableString$append$panda$core$String(name46, ((org$pandalanguage$pandac$Symbol*) t68)->name);
            {
                separator49 = &$s74;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator49));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t68));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p63));
            }
        }
        goto $l56;
        $l57:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$145$951));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp75, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name46, $tmp75);
    {
        org$pandalanguage$pandac$Type* $tmp77 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp78 = panda$core$MutableString$finish$R$panda$core$String(name46);
        org$pandalanguage$pandac$Position$init(&$tmp79);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp77, $tmp78, ((panda$core$Int64) { 21 }), $tmp79, ((panda$collections$ListView*) subtypes43), ((panda$core$Bit) { true }));
        tmp176 = $tmp77;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes43));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator49));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name46));
        }
        return tmp176;
    }
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Char8 $tmp80;
    panda$core$Char8$init$panda$core$UInt8(&$tmp80, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp81 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp80);
    return $tmp81;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result82;
    panda$core$String* separator90;
    panda$collections$Iterator* Iter$168$999;
    org$pandalanguage$pandac$Type* intf111;
    panda$collections$Iterator* Iter$173$9124;
    org$pandalanguage$pandac$ClassDecl* cl136;
    panda$collections$Iterator* Iter$176$9144;
    org$pandalanguage$pandac$FieldDecl* f156;
    panda$collections$Iterator* Iter$179$9164;
    org$pandalanguage$pandac$MethodDecl* m176;
    panda$core$Char8 $tmp184;
    panda$core$String* tmp2185;
    panda$core$MutableString* $tmp83 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp84 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s85);
    panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, self->name);
    panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s88);
    panda$core$MutableString$init$panda$core$String($tmp83, $tmp89);
    result82 = $tmp83;
    separator90 = &$s91;
    if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
    {
        panda$core$String* $tmp92 = panda$core$String$convert$R$panda$core$String(separator90);
        panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s93);
        panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp94, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s96);
        panda$core$MutableString$append$panda$core$String(result82, $tmp97);
        {
            separator90 = &$s98;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator90));
        }
    }
    }
    {
        ITable* $tmp100 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
        while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp100 = $tmp100->next;
        }
        $fn102 $tmp101 = $tmp100->methods[0];
        panda$collections$Iterator* $tmp103 = $tmp101(((panda$collections$Iterable*) self->rawInterfaces));
        Iter$168$999 = $tmp103;
        $l104:;
        ITable* $tmp106 = Iter$168$999->$class->itable;
        while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp106 = $tmp106->next;
        }
        $fn108 $tmp107 = $tmp106->methods[0];
        panda$core$Bit $tmp109 = $tmp107(Iter$168$999);
        panda$core$Bit $tmp110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp109);
        if (!$tmp110.value) goto $l105;
        {
            ITable* $tmp112 = Iter$168$999->$class->itable;
            while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp112 = $tmp112->next;
            }
            $fn114 $tmp113 = $tmp112->methods[1];
            panda$core$Object* $tmp115 = $tmp113(Iter$168$999);
            intf111 = ((org$pandalanguage$pandac$Type*) $tmp115);
            panda$core$String* $tmp116 = panda$core$String$convert$R$panda$core$String(separator90);
            panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s117);
            panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp118, ((panda$core$Object*) intf111));
            panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, &$s120);
            panda$core$MutableString$append$panda$core$String(result82, $tmp121);
            {
                separator90 = &$s122;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator90));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf111));
        }
        goto $l104;
        $l105:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$168$999));
    }
    panda$core$MutableString$append$panda$core$String(result82, &$s123);
    {
        ITable* $tmp125 = ((panda$collections$Iterable*) self->classes)->$class->itable;
        while ($tmp125->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp125 = $tmp125->next;
        }
        $fn127 $tmp126 = $tmp125->methods[0];
        panda$collections$Iterator* $tmp128 = $tmp126(((panda$collections$Iterable*) self->classes));
        Iter$173$9124 = $tmp128;
        $l129:;
        ITable* $tmp131 = Iter$173$9124->$class->itable;
        while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp131 = $tmp131->next;
        }
        $fn133 $tmp132 = $tmp131->methods[0];
        panda$core$Bit $tmp134 = $tmp132(Iter$173$9124);
        panda$core$Bit $tmp135 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp134);
        if (!$tmp135.value) goto $l130;
        {
            ITable* $tmp137 = Iter$173$9124->$class->itable;
            while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp137 = $tmp137->next;
            }
            $fn139 $tmp138 = $tmp137->methods[1];
            panda$core$Object* $tmp140 = $tmp138(Iter$173$9124);
            cl136 = ((org$pandalanguage$pandac$ClassDecl*) $tmp140);
            panda$core$String* $tmp141 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl136);
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s142);
            panda$core$MutableString$append$panda$core$String(result82, $tmp143);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl136));
        }
        goto $l129;
        $l130:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$173$9124));
    }
    {
        ITable* $tmp145 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp145 = $tmp145->next;
        }
        $fn147 $tmp146 = $tmp145->methods[0];
        panda$collections$Iterator* $tmp148 = $tmp146(((panda$collections$Iterable*) self->fields));
        Iter$176$9144 = $tmp148;
        $l149:;
        ITable* $tmp151 = Iter$176$9144->$class->itable;
        while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp151 = $tmp151->next;
        }
        $fn153 $tmp152 = $tmp151->methods[0];
        panda$core$Bit $tmp154 = $tmp152(Iter$176$9144);
        panda$core$Bit $tmp155 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp154);
        if (!$tmp155.value) goto $l150;
        {
            ITable* $tmp157 = Iter$176$9144->$class->itable;
            while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp157 = $tmp157->next;
            }
            $fn159 $tmp158 = $tmp157->methods[1];
            panda$core$Object* $tmp160 = $tmp158(Iter$176$9144);
            f156 = ((org$pandalanguage$pandac$FieldDecl*) $tmp160);
            panda$core$String* $tmp161 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f156);
            panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp161, &$s162);
            panda$core$MutableString$append$panda$core$String(result82, $tmp163);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f156));
        }
        goto $l149;
        $l150:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$176$9144));
    }
    {
        ITable* $tmp165 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp165 = $tmp165->next;
        }
        $fn167 $tmp166 = $tmp165->methods[0];
        panda$collections$Iterator* $tmp168 = $tmp166(((panda$collections$Iterable*) self->methods));
        Iter$179$9164 = $tmp168;
        $l169:;
        ITable* $tmp171 = Iter$179$9164->$class->itable;
        while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp171 = $tmp171->next;
        }
        $fn173 $tmp172 = $tmp171->methods[0];
        panda$core$Bit $tmp174 = $tmp172(Iter$179$9164);
        panda$core$Bit $tmp175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp174);
        if (!$tmp175.value) goto $l170;
        {
            ITable* $tmp177 = Iter$179$9164->$class->itable;
            while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp177 = $tmp177->next;
            }
            $fn179 $tmp178 = $tmp177->methods[1];
            panda$core$Object* $tmp180 = $tmp178(Iter$179$9164);
            m176 = ((org$pandalanguage$pandac$MethodDecl*) $tmp180);
            panda$core$String* $tmp181 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m176);
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
            panda$core$MutableString$append$panda$core$String(result82, $tmp183);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m176));
        }
        goto $l169;
        $l170:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$179$9164));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp184, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result82, $tmp184);
    {
        panda$core$String* $tmp186 = panda$core$MutableString$finish$R$panda$core$String(result82);
        tmp2185 = $tmp186;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator90));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result82));
        }
        return tmp2185;
    }
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
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

