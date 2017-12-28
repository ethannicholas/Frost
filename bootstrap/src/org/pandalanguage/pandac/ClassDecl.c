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
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
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


org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn31)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn37)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn56)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn82)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn88)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn131)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn143)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn169)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn177)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn189)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn197)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn203)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn209)(panda$collections$Iterator*);

static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* p$Iter28;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p40;
    self->rawSuper = NULL;
    panda$collections$Array* $tmp1 = (panda$collections$Array*) pandaAlloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->rawInterfaces = $tmp1;
    panda$collections$Array* $tmp3 = (panda$collections$Array*) pandaAlloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3->refCount.value = 1;
    panda$collections$Array$init($tmp3);
    self->fields = $tmp3;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaAlloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    self->methods = $tmp5;
    panda$collections$Array* $tmp7 = (panda$collections$Array*) pandaAlloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp7->refCount.value = 1;
    panda$collections$Array$init($tmp7);
    self->classes = $tmp7;
    panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaAlloc(40);
    $tmp9->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp9->refCount.value = 1;
    panda$collections$Array$init($tmp9);
    self->choiceEntries = $tmp9;
    self->owner = NULL;
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp11 = (panda$collections$Array*) pandaAlloc(40);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp11->refCount.value = 1;
    panda$collections$Array$init($tmp11);
    self->virtualMethods = $tmp11;
    panda$collections$HashMap* $tmp13 = (panda$collections$HashMap*) pandaAlloc(56);
    $tmp13->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp13->refCount.value = 1;
    panda$collections$HashMap$init($tmp13);
    self->classResolutionCache = $tmp13;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    {
        panda$core$Object* $tmp15 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_source));
        self->source = ((panda$io$File*) $tmp15);
    }
    {
        panda$collections$HashMap* $tmp16 = (panda$collections$HashMap*) pandaAlloc(56);
        $tmp16->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp16->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp16, p_aliases);
        panda$core$Object* $tmp18 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$collections$MapView*) $tmp16)));
        self->aliases = ((panda$collections$MapView*) $tmp18);
    }
    {
        panda$core$Object* $tmp19 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_doccomment));
        self->doccomment = ((panda$core$String*) $tmp19);
    }
    {
        panda$core$Object* $tmp20 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_annotations));
        self->annotations = ((org$pandalanguage$pandac$Annotations*) $tmp20);
    }
    self->classKind = p_kind;
    {
        panda$collections$Array* $tmp21 = (panda$collections$Array*) pandaAlloc(40);
        $tmp21->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp21->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp21, p_declaredSupers);
        panda$core$Object* $tmp23 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp21));
        self->declaredSupers = ((panda$collections$Array*) $tmp23);
    }
    {
        panda$core$Object* $tmp24 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$collections$List*) p_parameters)));
        self->parameters = ((panda$collections$List*) $tmp24);
    }
    {
        org$pandalanguage$pandac$SymbolTable* $tmp25 = (org$pandalanguage$pandac$SymbolTable*) pandaAlloc(48);
        $tmp25->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
        $tmp25->refCount.value = 1;
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp25, p_parent);
        panda$core$Object* $tmp27 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp25));
        self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp27);
    }
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp29 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[0];
        panda$collections$Iterator* $tmp32 = $tmp30(((panda$collections$Iterable*) p_parameters));
        p$Iter28 = $tmp32;
        $l33:;
        ITable* $tmp35 = p$Iter28->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[0];
        panda$core$Bit $tmp38 = $tmp36(p$Iter28);
        panda$core$Bit $tmp39 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp38);
        if (!$tmp39.value) goto $l34;
        {
            ITable* $tmp41 = p$Iter28->$class->itable;
            while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp41 = $tmp41->next;
            }
            $fn43 $tmp42 = $tmp41->methods[1];
            panda$core$Object* $tmp44 = $tmp42(p$Iter28);
            p40 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp44);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p40));
        }
        goto $l33;
        $l34:;
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index45;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp48;
    panda$core$String$Index$nullable $tmp47 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s46);
    index45 = $tmp47;
    if (((panda$core$Bit) { !index45.nonnull }).value) {
    {
        return self->name;
    }
    }
    panda$core$String$Index $tmp49 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index45.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp48, ((panda$core$String$Index$nullable) { $tmp49, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp50 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp48);
    return $tmp50;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Position $tmp53;
    org$pandalanguage$pandac$Type* $tmp51 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp51->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp53);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp51, self->name, ((panda$core$Int64) { 10 }), $tmp53, ((panda$core$Bit) { true }));
    return $tmp51;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes60;
    panda$core$MutableString* name65;
    panda$core$Char8 $tmp69;
    panda$core$String* separator70;
    panda$collections$Iterator* p$Iter73;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p85;
    org$pandalanguage$pandac$Type* t90;
    org$pandalanguage$pandac$Position $tmp96;
    panda$core$Char8 $tmp100;
    org$pandalanguage$pandac$Position $tmp104;
    ITable* $tmp54 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp54->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp54 = $tmp54->next;
    }
    $fn56 $tmp55 = $tmp54->methods[0];
    panda$core$Int64 $tmp57 = $tmp55(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp57, ((panda$core$Int64) { 0 }));
    if ($tmp58.value) {
    {
        org$pandalanguage$pandac$Type* $tmp59 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        return $tmp59;
    }
    }
    panda$collections$Array* $tmp61 = (panda$collections$Array*) pandaAlloc(40);
    $tmp61->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp61->refCount.value = 1;
    panda$collections$Array$init($tmp61);
    panda$core$Object* $tmp63 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp61));
    subtypes60 = ((panda$collections$Array*) $tmp63);
    org$pandalanguage$pandac$Type* $tmp64 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    panda$collections$Array$add$panda$collections$Array$T(subtypes60, ((panda$core$Object*) $tmp64));
    panda$core$MutableString* $tmp66 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp66->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp66->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp66, ((org$pandalanguage$pandac$Symbol*) self)->name);
    panda$core$Object* $tmp68 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp66));
    name65 = ((panda$core$MutableString*) $tmp68);
    panda$core$Char8$init$panda$core$UInt8(&$tmp69, ((panda$core$UInt8) { 60 }));
    panda$core$MutableString$append$panda$core$Char8(name65, $tmp69);
    panda$core$Object* $tmp72 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s71));
    separator70 = ((panda$core$String*) $tmp72);
    {
        ITable* $tmp74 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp74 = $tmp74->next;
        }
        $fn76 $tmp75 = $tmp74->methods[0];
        panda$collections$Iterator* $tmp77 = $tmp75(((panda$collections$Iterable*) self->parameters));
        p$Iter73 = $tmp77;
        $l78:;
        ITable* $tmp80 = p$Iter73->$class->itable;
        while ($tmp80->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp80 = $tmp80->next;
        }
        $fn82 $tmp81 = $tmp80->methods[0];
        panda$core$Bit $tmp83 = $tmp81(p$Iter73);
        panda$core$Bit $tmp84 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp83);
        if (!$tmp84.value) goto $l79;
        {
            ITable* $tmp86 = p$Iter73->$class->itable;
            while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp86 = $tmp86->next;
            }
            $fn88 $tmp87 = $tmp86->methods[1];
            panda$core$Object* $tmp89 = $tmp87(p$Iter73);
            p85 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp89);
            org$pandalanguage$pandac$Type* $tmp91 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
            $tmp91->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp91->refCount.value = 1;
            panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s93);
            panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, ((org$pandalanguage$pandac$Symbol*) p85)->name);
            org$pandalanguage$pandac$Position$init(&$tmp96);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp91, $tmp95, ((panda$core$Int64) { 22 }), $tmp96, ((panda$core$Bit) { true }));
            panda$core$Object* $tmp97 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp91));
            t90 = ((org$pandalanguage$pandac$Type*) $tmp97);
            panda$collections$Array$add$panda$collections$Array$T(subtypes60, ((panda$core$Object*) t90));
            panda$core$MutableString$append$panda$core$String(name65, separator70);
            panda$core$MutableString$append$panda$core$String(name65, ((org$pandalanguage$pandac$Symbol*) t90)->name);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator70));
                panda$core$Object* $tmp99 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s98));
                separator70 = ((panda$core$String*) $tmp99);
            }
        }
        goto $l78;
        $l79:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp100, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name65, $tmp100);
    org$pandalanguage$pandac$Type* $tmp101 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp101->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp101->refCount.value = 1;
    panda$core$String* $tmp103 = panda$core$MutableString$finish$R$panda$core$String(name65);
    org$pandalanguage$pandac$Position$init(&$tmp104);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp101, $tmp103, ((panda$core$Int64) { 21 }), $tmp104, ((panda$collections$ListView*) subtypes60), ((panda$core$Bit) { true }));
    return $tmp101;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Char8 $tmp105;
    panda$core$Char8$init$panda$core$UInt8(&$tmp105, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp106 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp105);
    return $tmp106;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result107;
    panda$core$String* separator117;
    panda$collections$Iterator* intf$Iter128;
    org$pandalanguage$pandac$Type* intf140;
    panda$collections$Iterator* cl$Iter154;
    org$pandalanguage$pandac$ClassDecl* cl166;
    panda$collections$Iterator* f$Iter174;
    org$pandalanguage$pandac$FieldDecl* f186;
    panda$collections$Iterator* m$Iter194;
    org$pandalanguage$pandac$MethodDecl* m206;
    panda$core$Char8 $tmp214;
    panda$core$MutableString* $tmp108 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp108->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp108->refCount.value = 1;
    panda$core$String* $tmp110 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, self->name);
    panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, &$s114);
    panda$core$MutableString$init$panda$core$String($tmp108, $tmp115);
    panda$core$Object* $tmp116 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp108));
    result107 = ((panda$core$MutableString*) $tmp116);
    panda$core$Object* $tmp119 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s118));
    separator117 = ((panda$core$String*) $tmp119);
    if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
    {
        panda$core$String* $tmp120 = panda$core$String$convert$R$panda$core$String(separator117);
        panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, &$s121);
        panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp122, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
        panda$core$MutableString$append$panda$core$String(result107, $tmp125);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator117));
            panda$core$Object* $tmp127 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s126));
            separator117 = ((panda$core$String*) $tmp127);
        }
    }
    }
    {
        ITable* $tmp129 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
        while ($tmp129->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp129 = $tmp129->next;
        }
        $fn131 $tmp130 = $tmp129->methods[0];
        panda$collections$Iterator* $tmp132 = $tmp130(((panda$collections$Iterable*) self->rawInterfaces));
        intf$Iter128 = $tmp132;
        $l133:;
        ITable* $tmp135 = intf$Iter128->$class->itable;
        while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp135 = $tmp135->next;
        }
        $fn137 $tmp136 = $tmp135->methods[0];
        panda$core$Bit $tmp138 = $tmp136(intf$Iter128);
        panda$core$Bit $tmp139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp138);
        if (!$tmp139.value) goto $l134;
        {
            ITable* $tmp141 = intf$Iter128->$class->itable;
            while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp141 = $tmp141->next;
            }
            $fn143 $tmp142 = $tmp141->methods[1];
            panda$core$Object* $tmp144 = $tmp142(intf$Iter128);
            intf140 = ((org$pandalanguage$pandac$Type*) $tmp144);
            panda$core$String* $tmp145 = panda$core$String$convert$R$panda$core$String(separator117);
            panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s146);
            panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp147, ((panda$core$Object*) intf140));
            panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s149);
            panda$core$MutableString$append$panda$core$String(result107, $tmp150);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator117));
                panda$core$Object* $tmp152 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s151));
                separator117 = ((panda$core$String*) $tmp152);
            }
        }
        goto $l133;
        $l134:;
    }
    panda$core$MutableString$append$panda$core$String(result107, &$s153);
    {
        ITable* $tmp155 = ((panda$collections$Iterable*) self->classes)->$class->itable;
        while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp155 = $tmp155->next;
        }
        $fn157 $tmp156 = $tmp155->methods[0];
        panda$collections$Iterator* $tmp158 = $tmp156(((panda$collections$Iterable*) self->classes));
        cl$Iter154 = $tmp158;
        $l159:;
        ITable* $tmp161 = cl$Iter154->$class->itable;
        while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp161 = $tmp161->next;
        }
        $fn163 $tmp162 = $tmp161->methods[0];
        panda$core$Bit $tmp164 = $tmp162(cl$Iter154);
        panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
        if (!$tmp165.value) goto $l160;
        {
            ITable* $tmp167 = cl$Iter154->$class->itable;
            while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp167 = $tmp167->next;
            }
            $fn169 $tmp168 = $tmp167->methods[1];
            panda$core$Object* $tmp170 = $tmp168(cl$Iter154);
            cl166 = ((org$pandalanguage$pandac$ClassDecl*) $tmp170);
            panda$core$String* $tmp171 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl166);
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s172);
            panda$core$MutableString$append$panda$core$String(result107, $tmp173);
        }
        goto $l159;
        $l160:;
    }
    {
        ITable* $tmp175 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp175 = $tmp175->next;
        }
        $fn177 $tmp176 = $tmp175->methods[0];
        panda$collections$Iterator* $tmp178 = $tmp176(((panda$collections$Iterable*) self->fields));
        f$Iter174 = $tmp178;
        $l179:;
        ITable* $tmp181 = f$Iter174->$class->itable;
        while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp181 = $tmp181->next;
        }
        $fn183 $tmp182 = $tmp181->methods[0];
        panda$core$Bit $tmp184 = $tmp182(f$Iter174);
        panda$core$Bit $tmp185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp184);
        if (!$tmp185.value) goto $l180;
        {
            ITable* $tmp187 = f$Iter174->$class->itable;
            while ($tmp187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp187 = $tmp187->next;
            }
            $fn189 $tmp188 = $tmp187->methods[1];
            panda$core$Object* $tmp190 = $tmp188(f$Iter174);
            f186 = ((org$pandalanguage$pandac$FieldDecl*) $tmp190);
            panda$core$String* $tmp191 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f186);
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s192);
            panda$core$MutableString$append$panda$core$String(result107, $tmp193);
        }
        goto $l179;
        $l180:;
    }
    {
        ITable* $tmp195 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp195 = $tmp195->next;
        }
        $fn197 $tmp196 = $tmp195->methods[0];
        panda$collections$Iterator* $tmp198 = $tmp196(((panda$collections$Iterable*) self->methods));
        m$Iter194 = $tmp198;
        $l199:;
        ITable* $tmp201 = m$Iter194->$class->itable;
        while ($tmp201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp201 = $tmp201->next;
        }
        $fn203 $tmp202 = $tmp201->methods[0];
        panda$core$Bit $tmp204 = $tmp202(m$Iter194);
        panda$core$Bit $tmp205 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp204);
        if (!$tmp205.value) goto $l200;
        {
            ITable* $tmp207 = m$Iter194->$class->itable;
            while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp207 = $tmp207->next;
            }
            $fn209 $tmp208 = $tmp207->methods[1];
            panda$core$Object* $tmp210 = $tmp208(m$Iter194);
            m206 = ((org$pandalanguage$pandac$MethodDecl*) $tmp210);
            panda$core$String* $tmp211 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m206);
            panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, &$s212);
            panda$core$MutableString$append$panda$core$String(result107, $tmp213);
        }
        goto $l199;
        $l200:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp214, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result107, $tmp214);
    panda$core$String* $tmp215 = panda$core$MutableString$finish$R$panda$core$String(result107);
    return $tmp215;
}

