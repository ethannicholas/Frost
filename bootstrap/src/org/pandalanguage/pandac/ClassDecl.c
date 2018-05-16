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
typedef panda$core$Int64 (*$fn104)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn125)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn143)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn228)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn254)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn272)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn289)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn307)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn324)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn331)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn342)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$String* $finallyReturn81;
    panda$core$String* $tmp83;
    panda$core$String* $finallyReturn84;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp88;
    panda$core$String$Index$nullable $tmp81 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s80);
    index79 = $tmp81;
    if (((panda$core$Bit) { !index79.nonnull }).value) {
    {
        $tmp83 = self->name;
        $finallyReturn81 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        return $finallyReturn81;
    }
    }
    panda$core$String$Index $tmp89 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index79.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp88, ((panda$core$String$Index$nullable) { $tmp89, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp90 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp88);
    $tmp87 = $tmp90;
    $tmp86 = $tmp87;
    $finallyReturn84 = $tmp86;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    return $finallyReturn84;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $finallyReturn91;
    org$pandalanguage$pandac$Type* $tmp93;
    org$pandalanguage$pandac$Type* $tmp94;
    org$pandalanguage$pandac$Type$Kind $tmp96;
    org$pandalanguage$pandac$Position $tmp97;
    org$pandalanguage$pandac$Type* $tmp95 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp96, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp97);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp95, self->name, $tmp96, $tmp97, ((panda$core$Bit) { true }));
    $tmp94 = $tmp95;
    $tmp93 = $tmp94;
    $finallyReturn91 = $tmp93;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
    return $finallyReturn91;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $finallyReturn106;
    org$pandalanguage$pandac$Type* $tmp108;
    org$pandalanguage$pandac$Type* $tmp109;
    panda$collections$Array* finalParameters113 = NULL;
    panda$collections$Array* $tmp114;
    panda$collections$Array* $tmp115;
    panda$collections$Iterator* Iter$148$9120 = NULL;
    panda$collections$Iterator* $tmp121;
    panda$collections$Iterator* $tmp122;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p138 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp139;
    panda$core$Object* $tmp140;
    org$pandalanguage$pandac$Type* $tmp145;
    panda$core$String* $tmp147;
    panda$core$String* $tmp148;
    org$pandalanguage$pandac$Type$Kind $tmp152;
    org$pandalanguage$pandac$Position $tmp153;
    org$pandalanguage$pandac$Type* $finallyReturn155;
    org$pandalanguage$pandac$Type* $tmp157;
    org$pandalanguage$pandac$Type* $tmp158;
    org$pandalanguage$pandac$Type* $tmp159;
    int $tmp101;
    {
        ITable* $tmp102 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp102->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp102 = $tmp102->next;
        }
        $fn104 $tmp103 = $tmp102->methods[0];
        panda$core$Int64 $tmp105 = $tmp103(((panda$collections$CollectionView*) self->parameters));
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp105, ((panda$core$Int64) { 0 }));
        if ($tmp106.value) {
        {
            org$pandalanguage$pandac$Type* $tmp110 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
            $tmp109 = $tmp110;
            $tmp108 = $tmp109;
            $finallyReturn106 = $tmp108;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
            $tmp101 = 0;
            goto $l99;
            $l111:;
            return $finallyReturn106;
        }
        }
        panda$collections$Array* $tmp116 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp116);
        $tmp115 = $tmp116;
        $tmp114 = $tmp115;
        finalParameters113 = $tmp114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
        {
            int $tmp119;
            {
                ITable* $tmp123 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp123 = $tmp123->next;
                }
                $fn125 $tmp124 = $tmp123->methods[0];
                panda$collections$Iterator* $tmp126 = $tmp124(((panda$collections$Iterable*) self->parameters));
                $tmp122 = $tmp126;
                $tmp121 = $tmp122;
                Iter$148$9120 = $tmp121;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                $l127:;
                ITable* $tmp130 = Iter$148$9120->$class->itable;
                while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp130 = $tmp130->next;
                }
                $fn132 $tmp131 = $tmp130->methods[0];
                panda$core$Bit $tmp133 = $tmp131(Iter$148$9120);
                panda$core$Bit $tmp134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp133);
                bool $tmp129 = $tmp134.value;
                if (!$tmp129) goto $l128;
                {
                    int $tmp137;
                    {
                        ITable* $tmp141 = Iter$148$9120->$class->itable;
                        while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp141 = $tmp141->next;
                        }
                        $fn143 $tmp142 = $tmp141->methods[1];
                        panda$core$Object* $tmp144 = $tmp142(Iter$148$9120);
                        $tmp140 = $tmp144;
                        $tmp139 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp140);
                        p138 = $tmp139;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                        panda$core$Panda$unref$panda$core$Object($tmp140);
                        org$pandalanguage$pandac$Type* $tmp146 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                        panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->name, &$s149);
                        $tmp148 = $tmp150;
                        panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, ((org$pandalanguage$pandac$Symbol*) p138)->name);
                        $tmp147 = $tmp151;
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp152, ((panda$core$Int64) { 12 }));
                        org$pandalanguage$pandac$Position$init(&$tmp153);
                        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp146, $tmp147, $tmp152, $tmp153, ((panda$core$Bit) { true }));
                        $tmp145 = $tmp146;
                        panda$collections$Array$add$panda$collections$Array$T(finalParameters113, ((panda$core$Object*) $tmp145));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                    }
                    $tmp137 = -1;
                    goto $l135;
                    $l135:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p138));
                    p138 = NULL;
                    switch ($tmp137) {
                        case -1: goto $l154;
                    }
                    $l154:;
                }
                goto $l127;
                $l128:;
            }
            $tmp119 = -1;
            goto $l117;
            $l117:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$9120));
            Iter$148$9120 = NULL;
            switch ($tmp119) {
                case -1: goto $l155;
            }
            $l155:;
        }
        org$pandalanguage$pandac$Type* $tmp160 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        $tmp159 = $tmp160;
        org$pandalanguage$pandac$Type* $tmp161 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp159, ((panda$collections$ListView*) finalParameters113));
        $tmp158 = $tmp161;
        $tmp157 = $tmp158;
        $finallyReturn155 = $tmp157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
        $tmp101 = 1;
        goto $l99;
        $l162:;
        return $finallyReturn155;
    }
    $l99:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalParameters113));
    finalParameters113 = NULL;
    switch ($tmp101) {
        case 1: goto $l162;
        case 0: goto $l111;
    }
    $l164:;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $finallyReturn164;
    panda$core$Char8 $tmp166;
    panda$core$Char8$init$panda$core$UInt8(&$tmp166, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp167 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp166);
    $finallyReturn164 = $tmp167;
    return $finallyReturn164;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result172 = NULL;
    panda$core$MutableString* $tmp173;
    panda$core$MutableString* $tmp174;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp178;
    panda$core$String* $tmp179;
    panda$core$String* separator186 = NULL;
    panda$core$String* $tmp187;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $tmp199;
    panda$core$String* $tmp200;
    panda$collections$Iterator* Iter$167$9205 = NULL;
    panda$collections$Iterator* $tmp206;
    panda$collections$Iterator* $tmp207;
    org$pandalanguage$pandac$Type* intf223 = NULL;
    org$pandalanguage$pandac$Type* $tmp224;
    panda$core$Object* $tmp225;
    panda$core$String* $tmp230;
    panda$core$String* $tmp231;
    panda$core$String* $tmp232;
    panda$core$String* $tmp233;
    panda$core$String* $tmp240;
    panda$core$String* $tmp241;
    panda$collections$Iterator* Iter$172$9249 = NULL;
    panda$collections$Iterator* $tmp250;
    panda$collections$Iterator* $tmp251;
    org$pandalanguage$pandac$ClassDecl* cl267 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp268;
    panda$core$Object* $tmp269;
    panda$core$String* $tmp274;
    panda$core$String* $tmp275;
    panda$collections$Iterator* Iter$175$9284 = NULL;
    panda$collections$Iterator* $tmp285;
    panda$collections$Iterator* $tmp286;
    org$pandalanguage$pandac$FieldDecl* f302 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp303;
    panda$core$Object* $tmp304;
    panda$core$String* $tmp309;
    panda$core$String* $tmp310;
    panda$collections$Iterator* Iter$178$9319 = NULL;
    panda$collections$Iterator* $tmp320;
    panda$collections$Iterator* $tmp321;
    org$pandalanguage$pandac$MethodDecl* m337 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp338;
    panda$core$Object* $tmp339;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    panda$core$Char8 $tmp351;
    panda$core$String* $finallyReturn351;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    int $tmp171;
    {
        panda$core$MutableString* $tmp175 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp180 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp179 = $tmp180;
        panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s181);
        $tmp178 = $tmp182;
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, self->name);
        $tmp177 = $tmp183;
        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s184);
        $tmp176 = $tmp185;
        panda$core$MutableString$init$panda$core$String($tmp175, $tmp176);
        $tmp174 = $tmp175;
        $tmp173 = $tmp174;
        result172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
        $tmp187 = &$s188;
        separator186 = $tmp187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
        if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
        {
            panda$core$String* $tmp193 = panda$core$String$convert$R$panda$core$String(separator186);
            $tmp192 = $tmp193;
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s194);
            $tmp191 = $tmp195;
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp191, ((panda$core$Object*) self->rawSuper));
            $tmp190 = $tmp196;
            panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s197);
            $tmp189 = $tmp198;
            panda$core$MutableString$append$panda$core$String(result172, $tmp189);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
            {
                $tmp199 = separator186;
                $tmp200 = &$s201;
                separator186 = $tmp200;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
            }
        }
        }
        {
            int $tmp204;
            {
                ITable* $tmp208 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
                while ($tmp208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp208 = $tmp208->next;
                }
                $fn210 $tmp209 = $tmp208->methods[0];
                panda$collections$Iterator* $tmp211 = $tmp209(((panda$collections$Iterable*) self->rawInterfaces));
                $tmp207 = $tmp211;
                $tmp206 = $tmp207;
                Iter$167$9205 = $tmp206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                $l212:;
                ITable* $tmp215 = Iter$167$9205->$class->itable;
                while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp215 = $tmp215->next;
                }
                $fn217 $tmp216 = $tmp215->methods[0];
                panda$core$Bit $tmp218 = $tmp216(Iter$167$9205);
                panda$core$Bit $tmp219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp218);
                bool $tmp214 = $tmp219.value;
                if (!$tmp214) goto $l213;
                {
                    int $tmp222;
                    {
                        ITable* $tmp226 = Iter$167$9205->$class->itable;
                        while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp226 = $tmp226->next;
                        }
                        $fn228 $tmp227 = $tmp226->methods[1];
                        panda$core$Object* $tmp229 = $tmp227(Iter$167$9205);
                        $tmp225 = $tmp229;
                        $tmp224 = ((org$pandalanguage$pandac$Type*) $tmp225);
                        intf223 = $tmp224;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
                        panda$core$Panda$unref$panda$core$Object($tmp225);
                        panda$core$String* $tmp234 = panda$core$String$convert$R$panda$core$String(separator186);
                        $tmp233 = $tmp234;
                        panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp233, &$s235);
                        $tmp232 = $tmp236;
                        panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp232, ((panda$core$Object*) intf223));
                        $tmp231 = $tmp237;
                        panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s238);
                        $tmp230 = $tmp239;
                        panda$core$MutableString$append$panda$core$String(result172, $tmp230);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
                        {
                            $tmp240 = separator186;
                            $tmp241 = &$s242;
                            separator186 = $tmp241;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                        }
                    }
                    $tmp222 = -1;
                    goto $l220;
                    $l220:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf223));
                    intf223 = NULL;
                    switch ($tmp222) {
                        case -1: goto $l243;
                    }
                    $l243:;
                }
                goto $l212;
                $l213:;
            }
            $tmp204 = -1;
            goto $l202;
            $l202:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$167$9205));
            Iter$167$9205 = NULL;
            switch ($tmp204) {
                case -1: goto $l244;
            }
            $l244:;
        }
        panda$core$MutableString$append$panda$core$String(result172, &$s245);
        {
            int $tmp248;
            {
                ITable* $tmp252 = ((panda$collections$Iterable*) self->classes)->$class->itable;
                while ($tmp252->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp252 = $tmp252->next;
                }
                $fn254 $tmp253 = $tmp252->methods[0];
                panda$collections$Iterator* $tmp255 = $tmp253(((panda$collections$Iterable*) self->classes));
                $tmp251 = $tmp255;
                $tmp250 = $tmp251;
                Iter$172$9249 = $tmp250;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                $l256:;
                ITable* $tmp259 = Iter$172$9249->$class->itable;
                while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp259 = $tmp259->next;
                }
                $fn261 $tmp260 = $tmp259->methods[0];
                panda$core$Bit $tmp262 = $tmp260(Iter$172$9249);
                panda$core$Bit $tmp263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp262);
                bool $tmp258 = $tmp263.value;
                if (!$tmp258) goto $l257;
                {
                    int $tmp266;
                    {
                        ITable* $tmp270 = Iter$172$9249->$class->itable;
                        while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp270 = $tmp270->next;
                        }
                        $fn272 $tmp271 = $tmp270->methods[1];
                        panda$core$Object* $tmp273 = $tmp271(Iter$172$9249);
                        $tmp269 = $tmp273;
                        $tmp268 = ((org$pandalanguage$pandac$ClassDecl*) $tmp269);
                        cl267 = $tmp268;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object($tmp269);
                        panda$core$String* $tmp276 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl267);
                        $tmp275 = $tmp276;
                        panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s277);
                        $tmp274 = $tmp278;
                        panda$core$MutableString$append$panda$core$String(result172, $tmp274);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                    }
                    $tmp266 = -1;
                    goto $l264;
                    $l264:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl267));
                    cl267 = NULL;
                    switch ($tmp266) {
                        case -1: goto $l279;
                    }
                    $l279:;
                }
                goto $l256;
                $l257:;
            }
            $tmp248 = -1;
            goto $l246;
            $l246:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$172$9249));
            Iter$172$9249 = NULL;
            switch ($tmp248) {
                case -1: goto $l280;
            }
            $l280:;
        }
        {
            int $tmp283;
            {
                ITable* $tmp287 = ((panda$collections$Iterable*) self->fields)->$class->itable;
                while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp287 = $tmp287->next;
                }
                $fn289 $tmp288 = $tmp287->methods[0];
                panda$collections$Iterator* $tmp290 = $tmp288(((panda$collections$Iterable*) self->fields));
                $tmp286 = $tmp290;
                $tmp285 = $tmp286;
                Iter$175$9284 = $tmp285;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                $l291:;
                ITable* $tmp294 = Iter$175$9284->$class->itable;
                while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp294 = $tmp294->next;
                }
                $fn296 $tmp295 = $tmp294->methods[0];
                panda$core$Bit $tmp297 = $tmp295(Iter$175$9284);
                panda$core$Bit $tmp298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp297);
                bool $tmp293 = $tmp298.value;
                if (!$tmp293) goto $l292;
                {
                    int $tmp301;
                    {
                        ITable* $tmp305 = Iter$175$9284->$class->itable;
                        while ($tmp305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp305 = $tmp305->next;
                        }
                        $fn307 $tmp306 = $tmp305->methods[1];
                        panda$core$Object* $tmp308 = $tmp306(Iter$175$9284);
                        $tmp304 = $tmp308;
                        $tmp303 = ((org$pandalanguage$pandac$FieldDecl*) $tmp304);
                        f302 = $tmp303;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                        panda$core$Panda$unref$panda$core$Object($tmp304);
                        panda$core$String* $tmp311 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f302);
                        $tmp310 = $tmp311;
                        panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp310, &$s312);
                        $tmp309 = $tmp313;
                        panda$core$MutableString$append$panda$core$String(result172, $tmp309);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                    }
                    $tmp301 = -1;
                    goto $l299;
                    $l299:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f302));
                    f302 = NULL;
                    switch ($tmp301) {
                        case -1: goto $l314;
                    }
                    $l314:;
                }
                goto $l291;
                $l292:;
            }
            $tmp283 = -1;
            goto $l281;
            $l281:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$175$9284));
            Iter$175$9284 = NULL;
            switch ($tmp283) {
                case -1: goto $l315;
            }
            $l315:;
        }
        {
            int $tmp318;
            {
                ITable* $tmp322 = ((panda$collections$Iterable*) self->methods)->$class->itable;
                while ($tmp322->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp322 = $tmp322->next;
                }
                $fn324 $tmp323 = $tmp322->methods[0];
                panda$collections$Iterator* $tmp325 = $tmp323(((panda$collections$Iterable*) self->methods));
                $tmp321 = $tmp325;
                $tmp320 = $tmp321;
                Iter$178$9319 = $tmp320;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                $l326:;
                ITable* $tmp329 = Iter$178$9319->$class->itable;
                while ($tmp329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp329 = $tmp329->next;
                }
                $fn331 $tmp330 = $tmp329->methods[0];
                panda$core$Bit $tmp332 = $tmp330(Iter$178$9319);
                panda$core$Bit $tmp333 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp332);
                bool $tmp328 = $tmp333.value;
                if (!$tmp328) goto $l327;
                {
                    int $tmp336;
                    {
                        ITable* $tmp340 = Iter$178$9319->$class->itable;
                        while ($tmp340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp340 = $tmp340->next;
                        }
                        $fn342 $tmp341 = $tmp340->methods[1];
                        panda$core$Object* $tmp343 = $tmp341(Iter$178$9319);
                        $tmp339 = $tmp343;
                        $tmp338 = ((org$pandalanguage$pandac$MethodDecl*) $tmp339);
                        m337 = $tmp338;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
                        panda$core$Panda$unref$panda$core$Object($tmp339);
                        panda$core$String* $tmp346 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m337);
                        $tmp345 = $tmp346;
                        panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s347);
                        $tmp344 = $tmp348;
                        panda$core$MutableString$append$panda$core$String(result172, $tmp344);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                    }
                    $tmp336 = -1;
                    goto $l334;
                    $l334:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m337));
                    m337 = NULL;
                    switch ($tmp336) {
                        case -1: goto $l349;
                    }
                    $l349:;
                }
                goto $l326;
                $l327:;
            }
            $tmp318 = -1;
            goto $l316;
            $l316:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9319));
            Iter$178$9319 = NULL;
            switch ($tmp318) {
                case -1: goto $l350;
            }
            $l350:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp351, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result172, $tmp351);
        panda$core$String* $tmp355 = panda$core$MutableString$finish$R$panda$core$String(result172);
        $tmp354 = $tmp355;
        $tmp353 = $tmp354;
        $finallyReturn351 = $tmp353;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
        $tmp171 = 0;
        goto $l169;
        $l356:;
        return $finallyReturn351;
    }
    $l169:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result172));
    result172 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator186));
    separator186 = NULL;
    switch ($tmp171) {
        case 0: goto $l356;
    }
    $l358:;
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp361;
    {
    }
    $tmp361 = -1;
    goto $l359;
    $l359:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp361) {
        case -1: goto $l362;
    }
    $l362:;
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

