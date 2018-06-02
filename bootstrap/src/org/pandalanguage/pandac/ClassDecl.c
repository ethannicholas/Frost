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

typedef panda$collections$Iterator* (*$fn60)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn67)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn109)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn131)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn149)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn218)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn225)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn236)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn262)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn280)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn315)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn332)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn339)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn350)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$Bit $tmp21;
    panda$core$Bit $tmp22;
    panda$collections$Array* $tmp23;
    panda$collections$Array* $tmp24;
    panda$collections$HashMap* $tmp26;
    panda$collections$HashMap* $tmp27;
    panda$core$String* $tmp29;
    panda$core$String* $tmp30;
    panda$io$File* $tmp31;
    panda$io$File* $tmp32;
    panda$collections$MapView* $tmp33;
    panda$collections$MapView* $tmp34;
    panda$collections$HashMap* $tmp35;
    panda$core$String* $tmp37;
    panda$core$String* $tmp38;
    org$pandalanguage$pandac$Annotations* $tmp39;
    org$pandalanguage$pandac$Annotations* $tmp40;
    panda$collections$Array* $tmp41;
    panda$collections$Array* $tmp42;
    panda$collections$Array* $tmp43;
    panda$collections$List* $tmp45;
    panda$collections$List* $tmp46;
    org$pandalanguage$pandac$SymbolTable* $tmp47;
    org$pandalanguage$pandac$SymbolTable* $tmp48;
    org$pandalanguage$pandac$SymbolTable* $tmp49;
    panda$core$Bit $tmp51;
    panda$collections$Iterator* Iter$126$955 = NULL;
    panda$collections$Iterator* $tmp56;
    panda$collections$Iterator* $tmp57;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p73 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp74;
    panda$core$Object* $tmp75;
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
    panda$core$Bit$init$builtin_bit(&$tmp21, false);
    self->symbolTableResolved = $tmp21;
    panda$core$Bit$init$builtin_bit(&$tmp22, true);
    self->external = $tmp22;
    panda$collections$Array* $tmp25 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp25);
    $tmp24 = $tmp25;
    $tmp23 = $tmp24;
    self->virtualMethods = $tmp23;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    panda$collections$HashMap* $tmp28 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp28);
    $tmp27 = $tmp28;
    $tmp26 = $tmp27;
    self->classResolutionCache = $tmp26;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    self->position = p_position;
    {
        $tmp29 = self->name;
        $tmp30 = p_name;
        self->name = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    }
    {
        $tmp31 = self->source;
        $tmp32 = p_source;
        self->source = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    }
    {
        $tmp33 = self->aliases;
        panda$collections$HashMap* $tmp36 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp36, p_aliases);
        $tmp35 = $tmp36;
        $tmp34 = ((panda$collections$MapView*) $tmp35);
        self->aliases = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
    }
    {
        $tmp37 = self->doccomment;
        $tmp38 = p_doccomment;
        self->doccomment = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
    {
        $tmp39 = self->annotations;
        $tmp40 = p_annotations;
        self->annotations = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
    }
    self->classKind = p_kind;
    {
        $tmp41 = self->declaredSupers;
        panda$collections$Array* $tmp44 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp44, p_declaredSupers);
        $tmp43 = $tmp44;
        $tmp42 = $tmp43;
        self->declaredSupers = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    }
    {
        $tmp45 = self->parameters;
        $tmp46 = ((panda$collections$List*) p_parameters);
        self->parameters = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
    }
    {
        $tmp47 = self->symbolTable;
        org$pandalanguage$pandac$SymbolTable* $tmp50 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp50, p_parent);
        $tmp49 = $tmp50;
        $tmp48 = $tmp49;
        self->symbolTable = $tmp48;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
    }
    panda$core$Bit$init$builtin_bit(&$tmp51, false);
    self->resolved = $tmp51;
    {
        int $tmp54;
        {
            ITable* $tmp58 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
            while ($tmp58->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp58 = $tmp58->next;
            }
            $fn60 $tmp59 = $tmp58->methods[0];
            panda$collections$Iterator* $tmp61 = $tmp59(((panda$collections$Iterable*) p_parameters));
            $tmp57 = $tmp61;
            $tmp56 = $tmp57;
            Iter$126$955 = $tmp56;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
            $l62:;
            ITable* $tmp65 = Iter$126$955->$class->itable;
            while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp65 = $tmp65->next;
            }
            $fn67 $tmp66 = $tmp65->methods[0];
            panda$core$Bit $tmp68 = $tmp66(Iter$126$955);
            panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp68);
            bool $tmp64 = $tmp69.value;
            if (!$tmp64) goto $l63;
            {
                int $tmp72;
                {
                    ITable* $tmp76 = Iter$126$955->$class->itable;
                    while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp76 = $tmp76->next;
                    }
                    $fn78 $tmp77 = $tmp76->methods[1];
                    panda$core$Object* $tmp79 = $tmp77(Iter$126$955);
                    $tmp75 = $tmp79;
                    $tmp74 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp75);
                    p73 = $tmp74;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
                    panda$core$Panda$unref$panda$core$Object($tmp75);
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p73));
                }
                $tmp72 = -1;
                goto $l70;
                $l70:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p73));
                p73 = NULL;
                switch ($tmp72) {
                    case -1: goto $l80;
                }
                $l80:;
            }
            goto $l62;
            $l63:;
        }
        $tmp54 = -1;
        goto $l52;
        $l52:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$126$955));
        Iter$126$955 = NULL;
        switch ($tmp54) {
            case -1: goto $l81;
        }
        $l81:;
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index82;
    panda$core$String* $returnValue85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp90;
    panda$core$Bit $tmp92;
    panda$core$String$Index$nullable $tmp84 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s83);
    index82 = $tmp84;
    if (((panda$core$Bit) { !index82.nonnull }).value) {
    {
        $tmp86 = self->name;
        $returnValue85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        return $returnValue85;
    }
    }
    panda$core$String$Index $tmp91 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index82.value));
    panda$core$Bit$init$builtin_bit(&$tmp92, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp90, ((panda$core$String$Index$nullable) { $tmp91, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp92);
    panda$core$String* $tmp93 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp90);
    $tmp89 = $tmp93;
    $tmp88 = $tmp89;
    $returnValue85 = $tmp88;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    return $returnValue85;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $returnValue95;
    org$pandalanguage$pandac$Type* $tmp96;
    org$pandalanguage$pandac$Type* $tmp97;
    org$pandalanguage$pandac$Type$Kind $tmp99;
    panda$core$Int64 $tmp100;
    org$pandalanguage$pandac$Position $tmp101;
    panda$core$Bit $tmp102;
    org$pandalanguage$pandac$Type* $tmp98 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp100, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp99, $tmp100);
    org$pandalanguage$pandac$Position$init(&$tmp101);
    panda$core$Bit$init$builtin_bit(&$tmp102, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp98, self->name, $tmp99, $tmp101, $tmp102);
    $tmp97 = $tmp98;
    $tmp96 = $tmp97;
    $returnValue95 = $tmp96;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    return $returnValue95;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Int64 $tmp111;
    org$pandalanguage$pandac$Type* $returnValue113;
    org$pandalanguage$pandac$Type* $tmp114;
    org$pandalanguage$pandac$Type* $tmp115;
    panda$collections$Array* finalParameters119 = NULL;
    panda$collections$Array* $tmp120;
    panda$collections$Array* $tmp121;
    panda$collections$Iterator* Iter$148$9126 = NULL;
    panda$collections$Iterator* $tmp127;
    panda$collections$Iterator* $tmp128;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p144 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp145;
    panda$core$Object* $tmp146;
    org$pandalanguage$pandac$Type* $tmp151;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    org$pandalanguage$pandac$Type$Kind $tmp158;
    panda$core$Int64 $tmp159;
    org$pandalanguage$pandac$Position $tmp160;
    panda$core$Bit $tmp161;
    org$pandalanguage$pandac$Type* $tmp164;
    org$pandalanguage$pandac$Type* $tmp165;
    org$pandalanguage$pandac$Type* $tmp166;
    int $tmp106;
    {
        ITable* $tmp107 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp107->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp107 = $tmp107->next;
        }
        $fn109 $tmp108 = $tmp107->methods[0];
        panda$core$Int64 $tmp110 = $tmp108(((panda$collections$CollectionView*) self->parameters));
        panda$core$Int64$init$builtin_int64(&$tmp111, 0);
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp110, $tmp111);
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Type* $tmp116 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
            $tmp115 = $tmp116;
            $tmp114 = $tmp115;
            $returnValue113 = $tmp114;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
            $tmp106 = 0;
            goto $l104;
            $l117:;
            return $returnValue113;
        }
        }
        panda$collections$Array* $tmp122 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp122);
        $tmp121 = $tmp122;
        $tmp120 = $tmp121;
        finalParameters119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
        {
            int $tmp125;
            {
                ITable* $tmp129 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp129->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp129 = $tmp129->next;
                }
                $fn131 $tmp130 = $tmp129->methods[0];
                panda$collections$Iterator* $tmp132 = $tmp130(((panda$collections$Iterable*) self->parameters));
                $tmp128 = $tmp132;
                $tmp127 = $tmp128;
                Iter$148$9126 = $tmp127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                $l133:;
                ITable* $tmp136 = Iter$148$9126->$class->itable;
                while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp136 = $tmp136->next;
                }
                $fn138 $tmp137 = $tmp136->methods[0];
                panda$core$Bit $tmp139 = $tmp137(Iter$148$9126);
                panda$core$Bit $tmp140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp139);
                bool $tmp135 = $tmp140.value;
                if (!$tmp135) goto $l134;
                {
                    int $tmp143;
                    {
                        ITable* $tmp147 = Iter$148$9126->$class->itable;
                        while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp147 = $tmp147->next;
                        }
                        $fn149 $tmp148 = $tmp147->methods[1];
                        panda$core$Object* $tmp150 = $tmp148(Iter$148$9126);
                        $tmp146 = $tmp150;
                        $tmp145 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp146);
                        p144 = $tmp145;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                        panda$core$Panda$unref$panda$core$Object($tmp146);
                        org$pandalanguage$pandac$Type* $tmp152 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                        panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->name, &$s155);
                        $tmp154 = $tmp156;
                        panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp154, ((org$pandalanguage$pandac$Symbol*) p144)->name);
                        $tmp153 = $tmp157;
                        panda$core$Int64$init$builtin_int64(&$tmp159, 12);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp158, $tmp159);
                        org$pandalanguage$pandac$Position$init(&$tmp160);
                        panda$core$Bit$init$builtin_bit(&$tmp161, true);
                        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp152, $tmp153, $tmp158, $tmp160, $tmp161);
                        $tmp151 = $tmp152;
                        panda$collections$Array$add$panda$collections$Array$T(finalParameters119, ((panda$core$Object*) $tmp151));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                    }
                    $tmp143 = -1;
                    goto $l141;
                    $l141:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p144));
                    p144 = NULL;
                    switch ($tmp143) {
                        case -1: goto $l162;
                    }
                    $l162:;
                }
                goto $l133;
                $l134:;
            }
            $tmp125 = -1;
            goto $l123;
            $l123:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$9126));
            Iter$148$9126 = NULL;
            switch ($tmp125) {
                case -1: goto $l163;
            }
            $l163:;
        }
        org$pandalanguage$pandac$Type* $tmp167 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        $tmp166 = $tmp167;
        org$pandalanguage$pandac$Type* $tmp168 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp166, ((panda$collections$ListView*) finalParameters119));
        $tmp165 = $tmp168;
        $tmp164 = $tmp165;
        $returnValue113 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
        $tmp106 = 1;
        goto $l104;
        $l169:;
        return $returnValue113;
    }
    $l104:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalParameters119));
    finalParameters119 = NULL;
    switch ($tmp106) {
        case 1: goto $l169;
        case 0: goto $l117;
    }
    $l171:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $returnValue172;
    panda$core$Char8 $tmp173;
    panda$core$UInt8 $tmp174;
    panda$core$UInt8$init$builtin_uint8(&$tmp174, 60);
    panda$core$Char8$init$panda$core$UInt8(&$tmp173, $tmp174);
    panda$core$Bit $tmp175 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp173);
    $returnValue172 = $tmp175;
    return $returnValue172;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result180 = NULL;
    panda$core$MutableString* $tmp181;
    panda$core$MutableString* $tmp182;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$String* $tmp187;
    panda$core$String* separator194 = NULL;
    panda$core$String* $tmp195;
    panda$core$String* $tmp197;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$String* $tmp200;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$collections$Iterator* Iter$167$9213 = NULL;
    panda$collections$Iterator* $tmp214;
    panda$collections$Iterator* $tmp215;
    org$pandalanguage$pandac$Type* intf231 = NULL;
    org$pandalanguage$pandac$Type* $tmp232;
    panda$core$Object* $tmp233;
    panda$core$String* $tmp238;
    panda$core$String* $tmp239;
    panda$core$String* $tmp240;
    panda$core$String* $tmp241;
    panda$core$String* $tmp248;
    panda$core$String* $tmp249;
    panda$collections$Iterator* Iter$172$9257 = NULL;
    panda$collections$Iterator* $tmp258;
    panda$collections$Iterator* $tmp259;
    org$pandalanguage$pandac$ClassDecl* cl275 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp276;
    panda$core$Object* $tmp277;
    panda$core$String* $tmp282;
    panda$core$String* $tmp283;
    panda$collections$Iterator* Iter$175$9292 = NULL;
    panda$collections$Iterator* $tmp293;
    panda$collections$Iterator* $tmp294;
    org$pandalanguage$pandac$FieldDecl* f310 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp311;
    panda$core$Object* $tmp312;
    panda$core$String* $tmp317;
    panda$core$String* $tmp318;
    panda$collections$Iterator* Iter$178$9327 = NULL;
    panda$collections$Iterator* $tmp328;
    panda$collections$Iterator* $tmp329;
    org$pandalanguage$pandac$MethodDecl* m345 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp346;
    panda$core$Object* $tmp347;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$core$Char8 $tmp359;
    panda$core$UInt8 $tmp360;
    panda$core$String* $returnValue361;
    panda$core$String* $tmp362;
    panda$core$String* $tmp363;
    int $tmp179;
    {
        panda$core$MutableString* $tmp183 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp188 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp187 = $tmp188;
        panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s189);
        $tmp186 = $tmp190;
        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, self->name);
        $tmp185 = $tmp191;
        panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp185, &$s192);
        $tmp184 = $tmp193;
        panda$core$MutableString$init$panda$core$String($tmp183, $tmp184);
        $tmp182 = $tmp183;
        $tmp181 = $tmp182;
        result180 = $tmp181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        $tmp195 = &$s196;
        separator194 = $tmp195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
        if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
        {
            panda$core$String* $tmp201 = panda$core$String$convert$R$panda$core$String(separator194);
            $tmp200 = $tmp201;
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, &$s202);
            $tmp199 = $tmp203;
            panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp199, ((panda$core$Object*) self->rawSuper));
            $tmp198 = $tmp204;
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s205);
            $tmp197 = $tmp206;
            panda$core$MutableString$append$panda$core$String(result180, $tmp197);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            {
                $tmp207 = separator194;
                $tmp208 = &$s209;
                separator194 = $tmp208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
            }
        }
        }
        {
            int $tmp212;
            {
                ITable* $tmp216 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
                while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp216 = $tmp216->next;
                }
                $fn218 $tmp217 = $tmp216->methods[0];
                panda$collections$Iterator* $tmp219 = $tmp217(((panda$collections$Iterable*) self->rawInterfaces));
                $tmp215 = $tmp219;
                $tmp214 = $tmp215;
                Iter$167$9213 = $tmp214;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                $l220:;
                ITable* $tmp223 = Iter$167$9213->$class->itable;
                while ($tmp223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp223 = $tmp223->next;
                }
                $fn225 $tmp224 = $tmp223->methods[0];
                panda$core$Bit $tmp226 = $tmp224(Iter$167$9213);
                panda$core$Bit $tmp227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp226);
                bool $tmp222 = $tmp227.value;
                if (!$tmp222) goto $l221;
                {
                    int $tmp230;
                    {
                        ITable* $tmp234 = Iter$167$9213->$class->itable;
                        while ($tmp234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp234 = $tmp234->next;
                        }
                        $fn236 $tmp235 = $tmp234->methods[1];
                        panda$core$Object* $tmp237 = $tmp235(Iter$167$9213);
                        $tmp233 = $tmp237;
                        $tmp232 = ((org$pandalanguage$pandac$Type*) $tmp233);
                        intf231 = $tmp232;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
                        panda$core$Panda$unref$panda$core$Object($tmp233);
                        panda$core$String* $tmp242 = panda$core$String$convert$R$panda$core$String(separator194);
                        $tmp241 = $tmp242;
                        panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s243);
                        $tmp240 = $tmp244;
                        panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp240, ((panda$core$Object*) intf231));
                        $tmp239 = $tmp245;
                        panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s246);
                        $tmp238 = $tmp247;
                        panda$core$MutableString$append$panda$core$String(result180, $tmp238);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                        {
                            $tmp248 = separator194;
                            $tmp249 = &$s250;
                            separator194 = $tmp249;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                        }
                    }
                    $tmp230 = -1;
                    goto $l228;
                    $l228:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf231));
                    intf231 = NULL;
                    switch ($tmp230) {
                        case -1: goto $l251;
                    }
                    $l251:;
                }
                goto $l220;
                $l221:;
            }
            $tmp212 = -1;
            goto $l210;
            $l210:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$167$9213));
            Iter$167$9213 = NULL;
            switch ($tmp212) {
                case -1: goto $l252;
            }
            $l252:;
        }
        panda$core$MutableString$append$panda$core$String(result180, &$s253);
        {
            int $tmp256;
            {
                ITable* $tmp260 = ((panda$collections$Iterable*) self->classes)->$class->itable;
                while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp260 = $tmp260->next;
                }
                $fn262 $tmp261 = $tmp260->methods[0];
                panda$collections$Iterator* $tmp263 = $tmp261(((panda$collections$Iterable*) self->classes));
                $tmp259 = $tmp263;
                $tmp258 = $tmp259;
                Iter$172$9257 = $tmp258;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                $l264:;
                ITable* $tmp267 = Iter$172$9257->$class->itable;
                while ($tmp267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp267 = $tmp267->next;
                }
                $fn269 $tmp268 = $tmp267->methods[0];
                panda$core$Bit $tmp270 = $tmp268(Iter$172$9257);
                panda$core$Bit $tmp271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp270);
                bool $tmp266 = $tmp271.value;
                if (!$tmp266) goto $l265;
                {
                    int $tmp274;
                    {
                        ITable* $tmp278 = Iter$172$9257->$class->itable;
                        while ($tmp278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp278 = $tmp278->next;
                        }
                        $fn280 $tmp279 = $tmp278->methods[1];
                        panda$core$Object* $tmp281 = $tmp279(Iter$172$9257);
                        $tmp277 = $tmp281;
                        $tmp276 = ((org$pandalanguage$pandac$ClassDecl*) $tmp277);
                        cl275 = $tmp276;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
                        panda$core$Panda$unref$panda$core$Object($tmp277);
                        panda$core$String* $tmp284 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl275);
                        $tmp283 = $tmp284;
                        panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp283, &$s285);
                        $tmp282 = $tmp286;
                        panda$core$MutableString$append$panda$core$String(result180, $tmp282);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
                    }
                    $tmp274 = -1;
                    goto $l272;
                    $l272:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl275));
                    cl275 = NULL;
                    switch ($tmp274) {
                        case -1: goto $l287;
                    }
                    $l287:;
                }
                goto $l264;
                $l265:;
            }
            $tmp256 = -1;
            goto $l254;
            $l254:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$172$9257));
            Iter$172$9257 = NULL;
            switch ($tmp256) {
                case -1: goto $l288;
            }
            $l288:;
        }
        {
            int $tmp291;
            {
                ITable* $tmp295 = ((panda$collections$Iterable*) self->fields)->$class->itable;
                while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp295 = $tmp295->next;
                }
                $fn297 $tmp296 = $tmp295->methods[0];
                panda$collections$Iterator* $tmp298 = $tmp296(((panda$collections$Iterable*) self->fields));
                $tmp294 = $tmp298;
                $tmp293 = $tmp294;
                Iter$175$9292 = $tmp293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                $l299:;
                ITable* $tmp302 = Iter$175$9292->$class->itable;
                while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp302 = $tmp302->next;
                }
                $fn304 $tmp303 = $tmp302->methods[0];
                panda$core$Bit $tmp305 = $tmp303(Iter$175$9292);
                panda$core$Bit $tmp306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp305);
                bool $tmp301 = $tmp306.value;
                if (!$tmp301) goto $l300;
                {
                    int $tmp309;
                    {
                        ITable* $tmp313 = Iter$175$9292->$class->itable;
                        while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp313 = $tmp313->next;
                        }
                        $fn315 $tmp314 = $tmp313->methods[1];
                        panda$core$Object* $tmp316 = $tmp314(Iter$175$9292);
                        $tmp312 = $tmp316;
                        $tmp311 = ((org$pandalanguage$pandac$FieldDecl*) $tmp312);
                        f310 = $tmp311;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                        panda$core$Panda$unref$panda$core$Object($tmp312);
                        panda$core$String* $tmp319 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f310);
                        $tmp318 = $tmp319;
                        panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, &$s320);
                        $tmp317 = $tmp321;
                        panda$core$MutableString$append$panda$core$String(result180, $tmp317);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                    }
                    $tmp309 = -1;
                    goto $l307;
                    $l307:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f310));
                    f310 = NULL;
                    switch ($tmp309) {
                        case -1: goto $l322;
                    }
                    $l322:;
                }
                goto $l299;
                $l300:;
            }
            $tmp291 = -1;
            goto $l289;
            $l289:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$175$9292));
            Iter$175$9292 = NULL;
            switch ($tmp291) {
                case -1: goto $l323;
            }
            $l323:;
        }
        {
            int $tmp326;
            {
                ITable* $tmp330 = ((panda$collections$Iterable*) self->methods)->$class->itable;
                while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp330 = $tmp330->next;
                }
                $fn332 $tmp331 = $tmp330->methods[0];
                panda$collections$Iterator* $tmp333 = $tmp331(((panda$collections$Iterable*) self->methods));
                $tmp329 = $tmp333;
                $tmp328 = $tmp329;
                Iter$178$9327 = $tmp328;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                $l334:;
                ITable* $tmp337 = Iter$178$9327->$class->itable;
                while ($tmp337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp337 = $tmp337->next;
                }
                $fn339 $tmp338 = $tmp337->methods[0];
                panda$core$Bit $tmp340 = $tmp338(Iter$178$9327);
                panda$core$Bit $tmp341 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp340);
                bool $tmp336 = $tmp341.value;
                if (!$tmp336) goto $l335;
                {
                    int $tmp344;
                    {
                        ITable* $tmp348 = Iter$178$9327->$class->itable;
                        while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp348 = $tmp348->next;
                        }
                        $fn350 $tmp349 = $tmp348->methods[1];
                        panda$core$Object* $tmp351 = $tmp349(Iter$178$9327);
                        $tmp347 = $tmp351;
                        $tmp346 = ((org$pandalanguage$pandac$MethodDecl*) $tmp347);
                        m345 = $tmp346;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                        panda$core$Panda$unref$panda$core$Object($tmp347);
                        panda$core$String* $tmp354 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m345);
                        $tmp353 = $tmp354;
                        panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s355);
                        $tmp352 = $tmp356;
                        panda$core$MutableString$append$panda$core$String(result180, $tmp352);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                    }
                    $tmp344 = -1;
                    goto $l342;
                    $l342:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m345));
                    m345 = NULL;
                    switch ($tmp344) {
                        case -1: goto $l357;
                    }
                    $l357:;
                }
                goto $l334;
                $l335:;
            }
            $tmp326 = -1;
            goto $l324;
            $l324:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9327));
            Iter$178$9327 = NULL;
            switch ($tmp326) {
                case -1: goto $l358;
            }
            $l358:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp360, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp359, $tmp360);
        panda$core$MutableString$append$panda$core$Char8(result180, $tmp359);
        panda$core$String* $tmp364 = panda$core$MutableString$finish$R$panda$core$String(result180);
        $tmp363 = $tmp364;
        $tmp362 = $tmp363;
        $returnValue361 = $tmp362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
        $tmp179 = 0;
        goto $l177;
        $l365:;
        return $returnValue361;
    }
    $l177:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator194));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result180));
    result180 = NULL;
    separator194 = NULL;
    switch ($tmp179) {
        case 0: goto $l365;
    }
    $l367:;
    abort();
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp370;
    {
    }
    $tmp370 = -1;
    goto $l368;
    $l368:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp370) {
        case -1: goto $l371;
    }
    $l371:;
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

