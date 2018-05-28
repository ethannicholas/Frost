#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Object.h"
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
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$cleanup, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn57)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn64)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn75)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn103)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn124)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn131)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn142)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn215)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn226)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn252)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn270)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn287)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn294)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn305)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn340)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    org$pandalanguage$pandac$Type* $tmp2;
    panda$collections$Array* $tmp3;
    panda$collections$Array* $tmp4;
    panda$collections$Array* $tmp6;
    panda$collections$Array* $tmp7;
    panda$collections$Array* $tmp9;
    panda$collections$Array* $tmp10;
    panda$collections$Array* $tmp12;
    panda$collections$Array* $tmp13;
    panda$collections$Array* $tmp15;
    panda$collections$Array* $tmp16;
    panda$core$Weak* $tmp18;
    panda$core$Weak* $tmp19;
    panda$collections$Array* $tmp21;
    panda$collections$Array* $tmp22;
    panda$collections$HashMap* $tmp24;
    panda$collections$HashMap* $tmp25;
    panda$core$String* $tmp27;
    panda$core$String* $tmp28;
    panda$io$File* $tmp29;
    panda$io$File* $tmp30;
    panda$collections$MapView* $tmp31;
    panda$collections$MapView* $tmp32;
    panda$collections$HashMap* $tmp33;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    org$pandalanguage$pandac$Annotations* $tmp37;
    org$pandalanguage$pandac$Annotations* $tmp38;
    panda$collections$Array* $tmp39;
    panda$collections$Array* $tmp40;
    panda$collections$Array* $tmp41;
    panda$collections$List* $tmp43;
    panda$collections$List* $tmp44;
    org$pandalanguage$pandac$SymbolTable* $tmp45;
    org$pandalanguage$pandac$SymbolTable* $tmp46;
    org$pandalanguage$pandac$SymbolTable* $tmp47;
    panda$collections$Iterator* Iter$126$952 = NULL;
    panda$collections$Iterator* $tmp53;
    panda$collections$Iterator* $tmp54;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p70 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp71;
    panda$core$Object* $tmp72;
    self->source = NULL;
    self->name = NULL;
    self->aliases = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->declaredSupers = NULL;
    self->rawSuper = NULL;
    self->rawInterfaces = NULL;
    self->parameters = NULL;
    self->fields = NULL;
    self->methods = NULL;
    self->classes = NULL;
    self->choiceEntries = NULL;
    self->owner = NULL;
    self->symbolTable = NULL;
    self->virtualMethods = NULL;
    self->classResolutionCache = NULL;
    $tmp2 = NULL;
    self->rawSuper = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp5);
    $tmp4 = $tmp5;
    $tmp3 = $tmp4;
    self->rawInterfaces = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    panda$collections$Array* $tmp8 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp8);
    $tmp7 = $tmp8;
    $tmp6 = $tmp7;
    self->fields = $tmp6;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    panda$collections$Array* $tmp11 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp11);
    $tmp10 = $tmp11;
    $tmp9 = $tmp10;
    self->methods = $tmp9;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$collections$Array* $tmp14 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp14);
    $tmp13 = $tmp14;
    $tmp12 = $tmp13;
    self->classes = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$collections$Array* $tmp17 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp17);
    $tmp16 = $tmp17;
    $tmp15 = $tmp16;
    self->choiceEntries = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Weak* $tmp20 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp20, ((panda$core$Object*) NULL));
    $tmp19 = $tmp20;
    $tmp18 = $tmp19;
    self->owner = $tmp18;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp23 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp23);
    $tmp22 = $tmp23;
    $tmp21 = $tmp22;
    self->virtualMethods = $tmp21;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$collections$HashMap* $tmp26 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp26);
    $tmp25 = $tmp26;
    $tmp24 = $tmp25;
    self->classResolutionCache = $tmp24;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    self->position = p_position;
    {
        $tmp27 = self->name;
        $tmp28 = p_name;
        self->name = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    }
    {
        $tmp29 = self->source;
        $tmp30 = p_source;
        self->source = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    }
    {
        $tmp31 = self->aliases;
        panda$collections$HashMap* $tmp34 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp34, p_aliases);
        $tmp33 = $tmp34;
        $tmp32 = ((panda$collections$MapView*) $tmp33);
        self->aliases = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    }
    {
        $tmp35 = self->doccomment;
        $tmp36 = p_doccomment;
        self->doccomment = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
    {
        $tmp37 = self->annotations;
        $tmp38 = p_annotations;
        self->annotations = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
    self->classKind = p_kind;
    {
        $tmp39 = self->declaredSupers;
        panda$collections$Array* $tmp42 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp42, p_declaredSupers);
        $tmp41 = $tmp42;
        $tmp40 = $tmp41;
        self->declaredSupers = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
    }
    {
        $tmp43 = self->parameters;
        $tmp44 = ((panda$collections$List*) p_parameters);
        self->parameters = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    }
    {
        $tmp45 = self->symbolTable;
        org$pandalanguage$pandac$SymbolTable* $tmp48 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp48, p_parent);
        $tmp47 = $tmp48;
        $tmp46 = $tmp47;
        self->symbolTable = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
    }
    self->resolved = ((panda$core$Bit) { false });
    {
        int $tmp51;
        {
            ITable* $tmp55 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
            while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp55 = $tmp55->next;
            }
            $fn57 $tmp56 = $tmp55->methods[0];
            panda$collections$Iterator* $tmp58 = $tmp56(((panda$collections$Iterable*) p_parameters));
            $tmp54 = $tmp58;
            $tmp53 = $tmp54;
            Iter$126$952 = $tmp53;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
            $l59:;
            ITable* $tmp62 = Iter$126$952->$class->itable;
            while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp62 = $tmp62->next;
            }
            $fn64 $tmp63 = $tmp62->methods[0];
            panda$core$Bit $tmp65 = $tmp63(Iter$126$952);
            panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp65);
            bool $tmp61 = $tmp66.value;
            if (!$tmp61) goto $l60;
            {
                int $tmp69;
                {
                    ITable* $tmp73 = Iter$126$952->$class->itable;
                    while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp73 = $tmp73->next;
                    }
                    $fn75 $tmp74 = $tmp73->methods[1];
                    panda$core$Object* $tmp76 = $tmp74(Iter$126$952);
                    $tmp72 = $tmp76;
                    $tmp71 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp72);
                    p70 = $tmp71;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
                    panda$core$Panda$unref$panda$core$Object($tmp72);
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p70));
                }
                $tmp69 = -1;
                goto $l67;
                $l67:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p70));
                p70 = NULL;
                switch ($tmp69) {
                    case -1: goto $l77;
                }
                $l77:;
            }
            goto $l59;
            $l60:;
        }
        $tmp51 = -1;
        goto $l49;
        $l49:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$126$952));
        Iter$126$952 = NULL;
        switch ($tmp51) {
            case -1: goto $l78;
        }
        $l78:;
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index79;
    panda$core$String* $returnValue82;
    panda$core$String* $tmp83;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp87;
    panda$core$String$Index$nullable $tmp81 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s80);
    index79 = $tmp81;
    if (((panda$core$Bit) { !index79.nonnull }).value) {
    {
        $tmp83 = self->name;
        $returnValue82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        return $returnValue82;
    }
    }
    panda$core$String$Index $tmp88 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index79.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp87, ((panda$core$String$Index$nullable) { $tmp88, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp89 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp87);
    $tmp86 = $tmp89;
    $tmp85 = $tmp86;
    $returnValue82 = $tmp85;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    return $returnValue82;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $returnValue91;
    org$pandalanguage$pandac$Type* $tmp92;
    org$pandalanguage$pandac$Type* $tmp93;
    org$pandalanguage$pandac$Type$Kind $tmp95;
    org$pandalanguage$pandac$Position $tmp96;
    org$pandalanguage$pandac$Type* $tmp94 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp95, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp96);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp94, self->name, $tmp95, $tmp96, ((panda$core$Bit) { true }));
    $tmp93 = $tmp94;
    $tmp92 = $tmp93;
    $returnValue91 = $tmp92;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    return $returnValue91;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $returnValue106;
    org$pandalanguage$pandac$Type* $tmp107;
    org$pandalanguage$pandac$Type* $tmp108;
    panda$collections$Array* finalParameters112 = NULL;
    panda$collections$Array* $tmp113;
    panda$collections$Array* $tmp114;
    panda$collections$Iterator* Iter$148$9119 = NULL;
    panda$collections$Iterator* $tmp120;
    panda$collections$Iterator* $tmp121;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p137 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp138;
    panda$core$Object* $tmp139;
    org$pandalanguage$pandac$Type* $tmp144;
    panda$core$String* $tmp146;
    panda$core$String* $tmp147;
    org$pandalanguage$pandac$Type$Kind $tmp151;
    org$pandalanguage$pandac$Position $tmp152;
    org$pandalanguage$pandac$Type* $tmp155;
    org$pandalanguage$pandac$Type* $tmp156;
    org$pandalanguage$pandac$Type* $tmp157;
    int $tmp100;
    {
        ITable* $tmp101 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp101->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp101 = $tmp101->next;
        }
        $fn103 $tmp102 = $tmp101->methods[0];
        panda$core$Int64 $tmp104 = $tmp102(((panda$collections$CollectionView*) self->parameters));
        panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp104, ((panda$core$Int64) { 0 }));
        if ($tmp105.value) {
        {
            org$pandalanguage$pandac$Type* $tmp109 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
            $tmp108 = $tmp109;
            $tmp107 = $tmp108;
            $returnValue106 = $tmp107;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
            $tmp100 = 0;
            goto $l98;
            $l110:;
            return $returnValue106;
        }
        }
        panda$collections$Array* $tmp115 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp115);
        $tmp114 = $tmp115;
        $tmp113 = $tmp114;
        finalParameters112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        {
            int $tmp118;
            {
                ITable* $tmp122 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp122 = $tmp122->next;
                }
                $fn124 $tmp123 = $tmp122->methods[0];
                panda$collections$Iterator* $tmp125 = $tmp123(((panda$collections$Iterable*) self->parameters));
                $tmp121 = $tmp125;
                $tmp120 = $tmp121;
                Iter$148$9119 = $tmp120;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
                $l126:;
                ITable* $tmp129 = Iter$148$9119->$class->itable;
                while ($tmp129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp129 = $tmp129->next;
                }
                $fn131 $tmp130 = $tmp129->methods[0];
                panda$core$Bit $tmp132 = $tmp130(Iter$148$9119);
                panda$core$Bit $tmp133 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp132);
                bool $tmp128 = $tmp133.value;
                if (!$tmp128) goto $l127;
                {
                    int $tmp136;
                    {
                        ITable* $tmp140 = Iter$148$9119->$class->itable;
                        while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp140 = $tmp140->next;
                        }
                        $fn142 $tmp141 = $tmp140->methods[1];
                        panda$core$Object* $tmp143 = $tmp141(Iter$148$9119);
                        $tmp139 = $tmp143;
                        $tmp138 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp139);
                        p137 = $tmp138;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
                        panda$core$Panda$unref$panda$core$Object($tmp139);
                        org$pandalanguage$pandac$Type* $tmp145 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                        panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->name, &$s148);
                        $tmp147 = $tmp149;
                        panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, ((org$pandalanguage$pandac$Symbol*) p137)->name);
                        $tmp146 = $tmp150;
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp151, ((panda$core$Int64) { 12 }));
                        org$pandalanguage$pandac$Position$init(&$tmp152);
                        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp145, $tmp146, $tmp151, $tmp152, ((panda$core$Bit) { true }));
                        $tmp144 = $tmp145;
                        panda$collections$Array$add$panda$collections$Array$T(finalParameters112, ((panda$core$Object*) $tmp144));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                    }
                    $tmp136 = -1;
                    goto $l134;
                    $l134:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p137));
                    p137 = NULL;
                    switch ($tmp136) {
                        case -1: goto $l153;
                    }
                    $l153:;
                }
                goto $l126;
                $l127:;
            }
            $tmp118 = -1;
            goto $l116;
            $l116:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$9119));
            Iter$148$9119 = NULL;
            switch ($tmp118) {
                case -1: goto $l154;
            }
            $l154:;
        }
        org$pandalanguage$pandac$Type* $tmp158 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        $tmp157 = $tmp158;
        org$pandalanguage$pandac$Type* $tmp159 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp157, ((panda$collections$ListView*) finalParameters112));
        $tmp156 = $tmp159;
        $tmp155 = $tmp156;
        $returnValue106 = $tmp155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
        $tmp100 = 1;
        goto $l98;
        $l160:;
        return $returnValue106;
    }
    $l98:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalParameters112));
    finalParameters112 = NULL;
    switch ($tmp100) {
        case 1: goto $l160;
        case 0: goto $l110;
    }
    $l162:;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $returnValue163;
    panda$core$Char8 $tmp164;
    panda$core$Char8$init$panda$core$UInt8(&$tmp164, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp165 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp164);
    $returnValue163 = $tmp165;
    return $returnValue163;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result170 = NULL;
    panda$core$MutableString* $tmp171;
    panda$core$MutableString* $tmp172;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* separator184 = NULL;
    panda$core$String* $tmp185;
    panda$core$String* $tmp187;
    panda$core$String* $tmp188;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    panda$core$String* $tmp197;
    panda$core$String* $tmp198;
    panda$collections$Iterator* Iter$167$9203 = NULL;
    panda$collections$Iterator* $tmp204;
    panda$collections$Iterator* $tmp205;
    org$pandalanguage$pandac$Type* intf221 = NULL;
    org$pandalanguage$pandac$Type* $tmp222;
    panda$core$Object* $tmp223;
    panda$core$String* $tmp228;
    panda$core$String* $tmp229;
    panda$core$String* $tmp230;
    panda$core$String* $tmp231;
    panda$core$String* $tmp238;
    panda$core$String* $tmp239;
    panda$collections$Iterator* Iter$172$9247 = NULL;
    panda$collections$Iterator* $tmp248;
    panda$collections$Iterator* $tmp249;
    org$pandalanguage$pandac$ClassDecl* cl265 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp266;
    panda$core$Object* $tmp267;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$collections$Iterator* Iter$175$9282 = NULL;
    panda$collections$Iterator* $tmp283;
    panda$collections$Iterator* $tmp284;
    org$pandalanguage$pandac$FieldDecl* f300 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp301;
    panda$core$Object* $tmp302;
    panda$core$String* $tmp307;
    panda$core$String* $tmp308;
    panda$collections$Iterator* Iter$178$9317 = NULL;
    panda$collections$Iterator* $tmp318;
    panda$collections$Iterator* $tmp319;
    org$pandalanguage$pandac$MethodDecl* m335 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp336;
    panda$core$Object* $tmp337;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$Char8 $tmp349;
    panda$core$String* $returnValue350;
    panda$core$String* $tmp351;
    panda$core$String* $tmp352;
    int $tmp169;
    {
        panda$core$MutableString* $tmp173 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp178 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp177 = $tmp178;
        panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s179);
        $tmp176 = $tmp180;
        panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, self->name);
        $tmp175 = $tmp181;
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s182);
        $tmp174 = $tmp183;
        panda$core$MutableString$init$panda$core$String($tmp173, $tmp174);
        $tmp172 = $tmp173;
        $tmp171 = $tmp172;
        result170 = $tmp171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        $tmp185 = &$s186;
        separator184 = $tmp185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
        if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
        {
            panda$core$String* $tmp191 = panda$core$String$convert$R$panda$core$String(separator184);
            $tmp190 = $tmp191;
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s192);
            $tmp189 = $tmp193;
            panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp189, ((panda$core$Object*) self->rawSuper));
            $tmp188 = $tmp194;
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s195);
            $tmp187 = $tmp196;
            panda$core$MutableString$append$panda$core$String(result170, $tmp187);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            {
                $tmp197 = separator184;
                $tmp198 = &$s199;
                separator184 = $tmp198;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
            }
        }
        }
        {
            int $tmp202;
            {
                ITable* $tmp206 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
                while ($tmp206->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp206 = $tmp206->next;
                }
                $fn208 $tmp207 = $tmp206->methods[0];
                panda$collections$Iterator* $tmp209 = $tmp207(((panda$collections$Iterable*) self->rawInterfaces));
                $tmp205 = $tmp209;
                $tmp204 = $tmp205;
                Iter$167$9203 = $tmp204;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
                $l210:;
                ITable* $tmp213 = Iter$167$9203->$class->itable;
                while ($tmp213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp213 = $tmp213->next;
                }
                $fn215 $tmp214 = $tmp213->methods[0];
                panda$core$Bit $tmp216 = $tmp214(Iter$167$9203);
                panda$core$Bit $tmp217 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp216);
                bool $tmp212 = $tmp217.value;
                if (!$tmp212) goto $l211;
                {
                    int $tmp220;
                    {
                        ITable* $tmp224 = Iter$167$9203->$class->itable;
                        while ($tmp224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp224 = $tmp224->next;
                        }
                        $fn226 $tmp225 = $tmp224->methods[1];
                        panda$core$Object* $tmp227 = $tmp225(Iter$167$9203);
                        $tmp223 = $tmp227;
                        $tmp222 = ((org$pandalanguage$pandac$Type*) $tmp223);
                        intf221 = $tmp222;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp222));
                        panda$core$Panda$unref$panda$core$Object($tmp223);
                        panda$core$String* $tmp232 = panda$core$String$convert$R$panda$core$String(separator184);
                        $tmp231 = $tmp232;
                        panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s233);
                        $tmp230 = $tmp234;
                        panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp230, ((panda$core$Object*) intf221));
                        $tmp229 = $tmp235;
                        panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s236);
                        $tmp228 = $tmp237;
                        panda$core$MutableString$append$panda$core$String(result170, $tmp228);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                        {
                            $tmp238 = separator184;
                            $tmp239 = &$s240;
                            separator184 = $tmp239;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
                        }
                    }
                    $tmp220 = -1;
                    goto $l218;
                    $l218:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf221));
                    intf221 = NULL;
                    switch ($tmp220) {
                        case -1: goto $l241;
                    }
                    $l241:;
                }
                goto $l210;
                $l211:;
            }
            $tmp202 = -1;
            goto $l200;
            $l200:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$167$9203));
            Iter$167$9203 = NULL;
            switch ($tmp202) {
                case -1: goto $l242;
            }
            $l242:;
        }
        panda$core$MutableString$append$panda$core$String(result170, &$s243);
        {
            int $tmp246;
            {
                ITable* $tmp250 = ((panda$collections$Iterable*) self->classes)->$class->itable;
                while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp250 = $tmp250->next;
                }
                $fn252 $tmp251 = $tmp250->methods[0];
                panda$collections$Iterator* $tmp253 = $tmp251(((panda$collections$Iterable*) self->classes));
                $tmp249 = $tmp253;
                $tmp248 = $tmp249;
                Iter$172$9247 = $tmp248;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                $l254:;
                ITable* $tmp257 = Iter$172$9247->$class->itable;
                while ($tmp257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp257 = $tmp257->next;
                }
                $fn259 $tmp258 = $tmp257->methods[0];
                panda$core$Bit $tmp260 = $tmp258(Iter$172$9247);
                panda$core$Bit $tmp261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp260);
                bool $tmp256 = $tmp261.value;
                if (!$tmp256) goto $l255;
                {
                    int $tmp264;
                    {
                        ITable* $tmp268 = Iter$172$9247->$class->itable;
                        while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp268 = $tmp268->next;
                        }
                        $fn270 $tmp269 = $tmp268->methods[1];
                        panda$core$Object* $tmp271 = $tmp269(Iter$172$9247);
                        $tmp267 = $tmp271;
                        $tmp266 = ((org$pandalanguage$pandac$ClassDecl*) $tmp267);
                        cl265 = $tmp266;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                        panda$core$Panda$unref$panda$core$Object($tmp267);
                        panda$core$String* $tmp274 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl265);
                        $tmp273 = $tmp274;
                        panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s275);
                        $tmp272 = $tmp276;
                        panda$core$MutableString$append$panda$core$String(result170, $tmp272);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                    }
                    $tmp264 = -1;
                    goto $l262;
                    $l262:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl265));
                    cl265 = NULL;
                    switch ($tmp264) {
                        case -1: goto $l277;
                    }
                    $l277:;
                }
                goto $l254;
                $l255:;
            }
            $tmp246 = -1;
            goto $l244;
            $l244:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$172$9247));
            Iter$172$9247 = NULL;
            switch ($tmp246) {
                case -1: goto $l278;
            }
            $l278:;
        }
        {
            int $tmp281;
            {
                ITable* $tmp285 = ((panda$collections$Iterable*) self->fields)->$class->itable;
                while ($tmp285->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp285 = $tmp285->next;
                }
                $fn287 $tmp286 = $tmp285->methods[0];
                panda$collections$Iterator* $tmp288 = $tmp286(((panda$collections$Iterable*) self->fields));
                $tmp284 = $tmp288;
                $tmp283 = $tmp284;
                Iter$175$9282 = $tmp283;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
                $l289:;
                ITable* $tmp292 = Iter$175$9282->$class->itable;
                while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp292 = $tmp292->next;
                }
                $fn294 $tmp293 = $tmp292->methods[0];
                panda$core$Bit $tmp295 = $tmp293(Iter$175$9282);
                panda$core$Bit $tmp296 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp295);
                bool $tmp291 = $tmp296.value;
                if (!$tmp291) goto $l290;
                {
                    int $tmp299;
                    {
                        ITable* $tmp303 = Iter$175$9282->$class->itable;
                        while ($tmp303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp303 = $tmp303->next;
                        }
                        $fn305 $tmp304 = $tmp303->methods[1];
                        panda$core$Object* $tmp306 = $tmp304(Iter$175$9282);
                        $tmp302 = $tmp306;
                        $tmp301 = ((org$pandalanguage$pandac$FieldDecl*) $tmp302);
                        f300 = $tmp301;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
                        panda$core$Panda$unref$panda$core$Object($tmp302);
                        panda$core$String* $tmp309 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f300);
                        $tmp308 = $tmp309;
                        panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s310);
                        $tmp307 = $tmp311;
                        panda$core$MutableString$append$panda$core$String(result170, $tmp307);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                    }
                    $tmp299 = -1;
                    goto $l297;
                    $l297:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f300));
                    f300 = NULL;
                    switch ($tmp299) {
                        case -1: goto $l312;
                    }
                    $l312:;
                }
                goto $l289;
                $l290:;
            }
            $tmp281 = -1;
            goto $l279;
            $l279:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$175$9282));
            Iter$175$9282 = NULL;
            switch ($tmp281) {
                case -1: goto $l313;
            }
            $l313:;
        }
        {
            int $tmp316;
            {
                ITable* $tmp320 = ((panda$collections$Iterable*) self->methods)->$class->itable;
                while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp320 = $tmp320->next;
                }
                $fn322 $tmp321 = $tmp320->methods[0];
                panda$collections$Iterator* $tmp323 = $tmp321(((panda$collections$Iterable*) self->methods));
                $tmp319 = $tmp323;
                $tmp318 = $tmp319;
                Iter$178$9317 = $tmp318;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                $l324:;
                ITable* $tmp327 = Iter$178$9317->$class->itable;
                while ($tmp327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp327 = $tmp327->next;
                }
                $fn329 $tmp328 = $tmp327->methods[0];
                panda$core$Bit $tmp330 = $tmp328(Iter$178$9317);
                panda$core$Bit $tmp331 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp330);
                bool $tmp326 = $tmp331.value;
                if (!$tmp326) goto $l325;
                {
                    int $tmp334;
                    {
                        ITable* $tmp338 = Iter$178$9317->$class->itable;
                        while ($tmp338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp338 = $tmp338->next;
                        }
                        $fn340 $tmp339 = $tmp338->methods[1];
                        panda$core$Object* $tmp341 = $tmp339(Iter$178$9317);
                        $tmp337 = $tmp341;
                        $tmp336 = ((org$pandalanguage$pandac$MethodDecl*) $tmp337);
                        m335 = $tmp336;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
                        panda$core$Panda$unref$panda$core$Object($tmp337);
                        panda$core$String* $tmp344 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m335);
                        $tmp343 = $tmp344;
                        panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s345);
                        $tmp342 = $tmp346;
                        panda$core$MutableString$append$panda$core$String(result170, $tmp342);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                    }
                    $tmp334 = -1;
                    goto $l332;
                    $l332:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m335));
                    m335 = NULL;
                    switch ($tmp334) {
                        case -1: goto $l347;
                    }
                    $l347:;
                }
                goto $l324;
                $l325:;
            }
            $tmp316 = -1;
            goto $l314;
            $l314:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9317));
            Iter$178$9317 = NULL;
            switch ($tmp316) {
                case -1: goto $l348;
            }
            $l348:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp349, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result170, $tmp349);
        panda$core$String* $tmp353 = panda$core$MutableString$finish$R$panda$core$String(result170);
        $tmp352 = $tmp353;
        $tmp351 = $tmp352;
        $returnValue350 = $tmp351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
        $tmp169 = 0;
        goto $l167;
        $l354:;
        return $returnValue350;
    }
    $l167:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator184));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result170));
    result170 = NULL;
    separator184 = NULL;
    switch ($tmp169) {
        case 0: goto $l354;
    }
    $l356:;
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp359;
    {
    }
    $tmp359 = -1;
    goto $l357;
    $l357:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp359) {
        case -1: goto $l360;
    }
    $l360:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
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

