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
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
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


static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn53)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn60)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn71)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn99)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn148)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn228)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn239)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn283)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn300)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn307)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn318)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn335)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn342)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn353)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$ClassDecl* $tmp18;
    panda$collections$Array* $tmp19;
    panda$collections$Array* $tmp20;
    panda$collections$HashMap* $tmp22;
    panda$collections$HashMap* $tmp23;
    panda$io$File* $tmp25;
    panda$io$File* $tmp26;
    panda$collections$MapView* $tmp27;
    panda$collections$MapView* $tmp28;
    panda$collections$HashMap* $tmp29;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    org$pandalanguage$pandac$Annotations* $tmp33;
    org$pandalanguage$pandac$Annotations* $tmp34;
    panda$collections$Array* $tmp35;
    panda$collections$Array* $tmp36;
    panda$collections$Array* $tmp37;
    panda$collections$List* $tmp39;
    panda$collections$List* $tmp40;
    org$pandalanguage$pandac$SymbolTable* $tmp41;
    org$pandalanguage$pandac$SymbolTable* $tmp42;
    org$pandalanguage$pandac$SymbolTable* $tmp43;
    panda$collections$Iterator* Iter$119$948 = NULL;
    panda$collections$Iterator* $tmp49;
    panda$collections$Iterator* $tmp50;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p66 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp67;
    panda$core$Object* $tmp68;
    self->name = NULL;
    self->source = NULL;
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
    $tmp18 = NULL;
    self->owner = $tmp18;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp21 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp21);
    $tmp20 = $tmp21;
    $tmp19 = $tmp20;
    self->virtualMethods = $tmp19;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$collections$HashMap* $tmp24 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp24);
    $tmp23 = $tmp24;
    $tmp22 = $tmp23;
    self->classResolutionCache = $tmp22;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    {
        $tmp25 = self->source;
        $tmp26 = p_source;
        self->source = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    }
    {
        $tmp27 = self->aliases;
        panda$collections$HashMap* $tmp30 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp30, p_aliases);
        $tmp29 = $tmp30;
        $tmp28 = ((panda$collections$MapView*) $tmp29);
        self->aliases = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    }
    {
        $tmp31 = self->doccomment;
        $tmp32 = p_doccomment;
        self->doccomment = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    }
    {
        $tmp33 = self->annotations;
        $tmp34 = p_annotations;
        self->annotations = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
    }
    self->classKind = p_kind;
    {
        $tmp35 = self->declaredSupers;
        panda$collections$Array* $tmp38 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp38, p_declaredSupers);
        $tmp37 = $tmp38;
        $tmp36 = $tmp37;
        self->declaredSupers = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
    {
        $tmp39 = self->parameters;
        $tmp40 = ((panda$collections$List*) p_parameters);
        self->parameters = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
    }
    {
        $tmp41 = self->symbolTable;
        org$pandalanguage$pandac$SymbolTable* $tmp44 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp44, p_parent);
        $tmp43 = $tmp44;
        $tmp42 = $tmp43;
        self->symbolTable = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    }
    self->resolved = ((panda$core$Bit) { false });
    {
        int $tmp47;
        {
            ITable* $tmp51 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
            while ($tmp51->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp51 = $tmp51->next;
            }
            $fn53 $tmp52 = $tmp51->methods[0];
            panda$collections$Iterator* $tmp54 = $tmp52(((panda$collections$Iterable*) p_parameters));
            $tmp50 = $tmp54;
            $tmp49 = $tmp50;
            Iter$119$948 = $tmp49;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
            $l55:;
            ITable* $tmp58 = Iter$119$948->$class->itable;
            while ($tmp58->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp58 = $tmp58->next;
            }
            $fn60 $tmp59 = $tmp58->methods[0];
            panda$core$Bit $tmp61 = $tmp59(Iter$119$948);
            panda$core$Bit $tmp62 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp61);
            bool $tmp57 = $tmp62.value;
            if (!$tmp57) goto $l56;
            {
                int $tmp65;
                {
                    ITable* $tmp69 = Iter$119$948->$class->itable;
                    while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp69 = $tmp69->next;
                    }
                    $fn71 $tmp70 = $tmp69->methods[1];
                    panda$core$Object* $tmp72 = $tmp70(Iter$119$948);
                    $tmp68 = $tmp72;
                    $tmp67 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp68);
                    p66 = $tmp67;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
                    panda$core$Panda$unref$panda$core$Object($tmp68);
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p66));
                }
                $tmp65 = -1;
                goto $l63;
                $l63:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p66));
                p66 = NULL;
                switch ($tmp65) {
                    case -1: goto $l73;
                }
                $l73:;
            }
            goto $l55;
            $l56:;
        }
        $tmp47 = -1;
        goto $l45;
        $l45:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$948));
        Iter$119$948 = NULL;
        switch ($tmp47) {
            case -1: goto $l74;
        }
        $l74:;
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index75;
    panda$core$String* $finallyReturn77;
    panda$core$String* $tmp79;
    panda$core$String* $finallyReturn80;
    panda$core$String* $tmp82;
    panda$core$String* $tmp83;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp84;
    panda$core$String$Index$nullable $tmp77 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s76);
    index75 = $tmp77;
    if (((panda$core$Bit) { !index75.nonnull }).value) {
    {
        $tmp79 = self->name;
        $finallyReturn77 = $tmp79;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
        return $finallyReturn77;
    }
    }
    panda$core$String$Index $tmp85 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index75.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp84, ((panda$core$String$Index$nullable) { $tmp85, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp86 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp84);
    $tmp83 = $tmp86;
    $tmp82 = $tmp83;
    $finallyReturn80 = $tmp82;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    return $finallyReturn80;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $finallyReturn87;
    org$pandalanguage$pandac$Type* $tmp89;
    org$pandalanguage$pandac$Type* $tmp90;
    org$pandalanguage$pandac$Position $tmp92;
    org$pandalanguage$pandac$Type* $tmp91 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp92);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp91, self->name, ((panda$core$Int64) { 10 }), $tmp92, ((panda$core$Bit) { true }));
    $tmp90 = $tmp91;
    $tmp89 = $tmp90;
    $finallyReturn87 = $tmp89;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    return $finallyReturn87;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $finallyReturn101;
    org$pandalanguage$pandac$Type* $tmp103;
    org$pandalanguage$pandac$Type* $tmp104;
    panda$collections$Array* subtypes108 = NULL;
    panda$collections$Array* $tmp109;
    panda$collections$Array* $tmp110;
    org$pandalanguage$pandac$Type* $tmp112;
    panda$core$MutableString* name114 = NULL;
    panda$core$MutableString* $tmp115;
    panda$core$MutableString* $tmp116;
    panda$core$Char8 $tmp118;
    panda$core$String* separator119 = NULL;
    panda$core$String* $tmp120;
    panda$collections$Iterator* Iter$145$9125 = NULL;
    panda$collections$Iterator* $tmp126;
    panda$collections$Iterator* $tmp127;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p143 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp144;
    panda$core$Object* $tmp145;
    org$pandalanguage$pandac$Type* t150 = NULL;
    org$pandalanguage$pandac$Type* $tmp151;
    org$pandalanguage$pandac$Type* $tmp152;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    org$pandalanguage$pandac$Position $tmp159;
    panda$core$String* $tmp160;
    panda$core$String* $tmp161;
    panda$core$Char8 $tmp165;
    org$pandalanguage$pandac$Type* $finallyReturn165;
    org$pandalanguage$pandac$Type* $tmp167;
    org$pandalanguage$pandac$Type* $tmp168;
    panda$core$String* $tmp170;
    org$pandalanguage$pandac$Position $tmp172;
    int $tmp96;
    {
        ITable* $tmp97 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp97->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp97 = $tmp97->next;
        }
        $fn99 $tmp98 = $tmp97->methods[0];
        panda$core$Int64 $tmp100 = $tmp98(((panda$collections$CollectionView*) self->parameters));
        panda$core$Bit $tmp101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp100, ((panda$core$Int64) { 0 }));
        if ($tmp101.value) {
        {
            org$pandalanguage$pandac$Type* $tmp105 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
            $tmp104 = $tmp105;
            $tmp103 = $tmp104;
            $finallyReturn101 = $tmp103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
            $tmp96 = 0;
            goto $l94;
            $l106:;
            return $finallyReturn101;
        }
        }
        panda$collections$Array* $tmp111 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp111);
        $tmp110 = $tmp111;
        $tmp109 = $tmp110;
        subtypes108 = $tmp109;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
        org$pandalanguage$pandac$Type* $tmp113 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        $tmp112 = $tmp113;
        panda$collections$Array$add$panda$collections$Array$T(subtypes108, ((panda$core$Object*) $tmp112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
        panda$core$MutableString* $tmp117 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp117, ((org$pandalanguage$pandac$Symbol*) self)->name);
        $tmp116 = $tmp117;
        $tmp115 = $tmp116;
        name114 = $tmp115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
        panda$core$Char8$init$panda$core$UInt8(&$tmp118, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name114, $tmp118);
        $tmp120 = &$s121;
        separator119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        {
            int $tmp124;
            {
                ITable* $tmp128 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp128 = $tmp128->next;
                }
                $fn130 $tmp129 = $tmp128->methods[0];
                panda$collections$Iterator* $tmp131 = $tmp129(((panda$collections$Iterable*) self->parameters));
                $tmp127 = $tmp131;
                $tmp126 = $tmp127;
                Iter$145$9125 = $tmp126;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                $l132:;
                ITable* $tmp135 = Iter$145$9125->$class->itable;
                while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp135 = $tmp135->next;
                }
                $fn137 $tmp136 = $tmp135->methods[0];
                panda$core$Bit $tmp138 = $tmp136(Iter$145$9125);
                panda$core$Bit $tmp139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp138);
                bool $tmp134 = $tmp139.value;
                if (!$tmp134) goto $l133;
                {
                    int $tmp142;
                    {
                        ITable* $tmp146 = Iter$145$9125->$class->itable;
                        while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp146 = $tmp146->next;
                        }
                        $fn148 $tmp147 = $tmp146->methods[1];
                        panda$core$Object* $tmp149 = $tmp147(Iter$145$9125);
                        $tmp145 = $tmp149;
                        $tmp144 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp145);
                        p143 = $tmp144;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
                        panda$core$Panda$unref$panda$core$Object($tmp145);
                        org$pandalanguage$pandac$Type* $tmp153 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                        panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s156);
                        $tmp155 = $tmp157;
                        panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, ((org$pandalanguage$pandac$Symbol*) p143)->name);
                        $tmp154 = $tmp158;
                        org$pandalanguage$pandac$Position$init(&$tmp159);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp153, $tmp154, ((panda$core$Int64) { 22 }), $tmp159, ((panda$core$Bit) { true }));
                        $tmp152 = $tmp153;
                        $tmp151 = $tmp152;
                        t150 = $tmp151;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                        panda$collections$Array$add$panda$collections$Array$T(subtypes108, ((panda$core$Object*) t150));
                        panda$core$MutableString$append$panda$core$String(name114, separator119);
                        panda$core$MutableString$append$panda$core$String(name114, ((org$pandalanguage$pandac$Symbol*) t150)->name);
                        {
                            $tmp160 = separator119;
                            $tmp161 = &$s162;
                            separator119 = $tmp161;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
                        }
                    }
                    $tmp142 = -1;
                    goto $l140;
                    $l140:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p143));
                    p143 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t150));
                    t150 = NULL;
                    switch ($tmp142) {
                        case -1: goto $l163;
                    }
                    $l163:;
                }
                goto $l132;
                $l133:;
            }
            $tmp124 = -1;
            goto $l122;
            $l122:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$145$9125));
            Iter$145$9125 = NULL;
            switch ($tmp124) {
                case -1: goto $l164;
            }
            $l164:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp165, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name114, $tmp165);
        org$pandalanguage$pandac$Type* $tmp169 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp171 = panda$core$MutableString$finish$R$panda$core$String(name114);
        $tmp170 = $tmp171;
        org$pandalanguage$pandac$Position$init(&$tmp172);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp169, $tmp170, ((panda$core$Int64) { 21 }), $tmp172, ((panda$collections$ListView*) subtypes108), ((panda$core$Bit) { true }));
        $tmp168 = $tmp169;
        $tmp167 = $tmp168;
        $finallyReturn165 = $tmp167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
        $tmp96 = 1;
        goto $l94;
        $l173:;
        return $finallyReturn165;
    }
    $l94:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes108));
    subtypes108 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name114));
    name114 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator119));
    separator119 = NULL;
    switch ($tmp96) {
        case 0: goto $l106;
        case 1: goto $l173;
    }
    $l175:;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $finallyReturn175;
    panda$core$Char8 $tmp177;
    panda$core$Char8$init$panda$core$UInt8(&$tmp177, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp178 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp177);
    $finallyReturn175 = $tmp178;
    return $finallyReturn175;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result183 = NULL;
    panda$core$MutableString* $tmp184;
    panda$core$MutableString* $tmp185;
    panda$core$String* $tmp187;
    panda$core$String* $tmp188;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    panda$core$String* separator197 = NULL;
    panda$core$String* $tmp198;
    panda$core$String* $tmp200;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$String* $tmp210;
    panda$core$String* $tmp211;
    panda$collections$Iterator* Iter$168$9216 = NULL;
    panda$collections$Iterator* $tmp217;
    panda$collections$Iterator* $tmp218;
    org$pandalanguage$pandac$Type* intf234 = NULL;
    org$pandalanguage$pandac$Type* $tmp235;
    panda$core$Object* $tmp236;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$core$String* $tmp244;
    panda$core$String* $tmp251;
    panda$core$String* $tmp252;
    panda$collections$Iterator* Iter$173$9260 = NULL;
    panda$collections$Iterator* $tmp261;
    panda$collections$Iterator* $tmp262;
    org$pandalanguage$pandac$ClassDecl* cl278 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp279;
    panda$core$Object* $tmp280;
    panda$core$String* $tmp285;
    panda$core$String* $tmp286;
    panda$collections$Iterator* Iter$176$9295 = NULL;
    panda$collections$Iterator* $tmp296;
    panda$collections$Iterator* $tmp297;
    org$pandalanguage$pandac$FieldDecl* f313 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp314;
    panda$core$Object* $tmp315;
    panda$core$String* $tmp320;
    panda$core$String* $tmp321;
    panda$collections$Iterator* Iter$179$9330 = NULL;
    panda$collections$Iterator* $tmp331;
    panda$collections$Iterator* $tmp332;
    org$pandalanguage$pandac$MethodDecl* m348 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp349;
    panda$core$Object* $tmp350;
    panda$core$String* $tmp355;
    panda$core$String* $tmp356;
    panda$core$Char8 $tmp362;
    panda$core$String* $finallyReturn362;
    panda$core$String* $tmp364;
    panda$core$String* $tmp365;
    int $tmp182;
    {
        panda$core$MutableString* $tmp186 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp191 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp190 = $tmp191;
        panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s192);
        $tmp189 = $tmp193;
        panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, self->name);
        $tmp188 = $tmp194;
        panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s195);
        $tmp187 = $tmp196;
        panda$core$MutableString$init$panda$core$String($tmp186, $tmp187);
        $tmp185 = $tmp186;
        $tmp184 = $tmp185;
        result183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        $tmp198 = &$s199;
        separator197 = $tmp198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
        if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
        {
            panda$core$String* $tmp204 = panda$core$String$convert$R$panda$core$String(separator197);
            $tmp203 = $tmp204;
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s205);
            $tmp202 = $tmp206;
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp202, ((panda$core$Object*) self->rawSuper));
            $tmp201 = $tmp207;
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s208);
            $tmp200 = $tmp209;
            panda$core$MutableString$append$panda$core$String(result183, $tmp200);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
            {
                $tmp210 = separator197;
                $tmp211 = &$s212;
                separator197 = $tmp211;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
            }
        }
        }
        {
            int $tmp215;
            {
                ITable* $tmp219 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
                while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp219 = $tmp219->next;
                }
                $fn221 $tmp220 = $tmp219->methods[0];
                panda$collections$Iterator* $tmp222 = $tmp220(((panda$collections$Iterable*) self->rawInterfaces));
                $tmp218 = $tmp222;
                $tmp217 = $tmp218;
                Iter$168$9216 = $tmp217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                $l223:;
                ITable* $tmp226 = Iter$168$9216->$class->itable;
                while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp226 = $tmp226->next;
                }
                $fn228 $tmp227 = $tmp226->methods[0];
                panda$core$Bit $tmp229 = $tmp227(Iter$168$9216);
                panda$core$Bit $tmp230 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp229);
                bool $tmp225 = $tmp230.value;
                if (!$tmp225) goto $l224;
                {
                    int $tmp233;
                    {
                        ITable* $tmp237 = Iter$168$9216->$class->itable;
                        while ($tmp237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp237 = $tmp237->next;
                        }
                        $fn239 $tmp238 = $tmp237->methods[1];
                        panda$core$Object* $tmp240 = $tmp238(Iter$168$9216);
                        $tmp236 = $tmp240;
                        $tmp235 = ((org$pandalanguage$pandac$Type*) $tmp236);
                        intf234 = $tmp235;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                        panda$core$Panda$unref$panda$core$Object($tmp236);
                        panda$core$String* $tmp245 = panda$core$String$convert$R$panda$core$String(separator197);
                        $tmp244 = $tmp245;
                        panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s246);
                        $tmp243 = $tmp247;
                        panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp243, ((panda$core$Object*) intf234));
                        $tmp242 = $tmp248;
                        panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s249);
                        $tmp241 = $tmp250;
                        panda$core$MutableString$append$panda$core$String(result183, $tmp241);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
                        {
                            $tmp251 = separator197;
                            $tmp252 = &$s253;
                            separator197 = $tmp252;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                        }
                    }
                    $tmp233 = -1;
                    goto $l231;
                    $l231:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf234));
                    intf234 = NULL;
                    switch ($tmp233) {
                        case -1: goto $l254;
                    }
                    $l254:;
                }
                goto $l223;
                $l224:;
            }
            $tmp215 = -1;
            goto $l213;
            $l213:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$168$9216));
            Iter$168$9216 = NULL;
            switch ($tmp215) {
                case -1: goto $l255;
            }
            $l255:;
        }
        panda$core$MutableString$append$panda$core$String(result183, &$s256);
        {
            int $tmp259;
            {
                ITable* $tmp263 = ((panda$collections$Iterable*) self->classes)->$class->itable;
                while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp263 = $tmp263->next;
                }
                $fn265 $tmp264 = $tmp263->methods[0];
                panda$collections$Iterator* $tmp266 = $tmp264(((panda$collections$Iterable*) self->classes));
                $tmp262 = $tmp266;
                $tmp261 = $tmp262;
                Iter$173$9260 = $tmp261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                $l267:;
                ITable* $tmp270 = Iter$173$9260->$class->itable;
                while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp270 = $tmp270->next;
                }
                $fn272 $tmp271 = $tmp270->methods[0];
                panda$core$Bit $tmp273 = $tmp271(Iter$173$9260);
                panda$core$Bit $tmp274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp273);
                bool $tmp269 = $tmp274.value;
                if (!$tmp269) goto $l268;
                {
                    int $tmp277;
                    {
                        ITable* $tmp281 = Iter$173$9260->$class->itable;
                        while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp281 = $tmp281->next;
                        }
                        $fn283 $tmp282 = $tmp281->methods[1];
                        panda$core$Object* $tmp284 = $tmp282(Iter$173$9260);
                        $tmp280 = $tmp284;
                        $tmp279 = ((org$pandalanguage$pandac$ClassDecl*) $tmp280);
                        cl278 = $tmp279;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                        panda$core$Panda$unref$panda$core$Object($tmp280);
                        panda$core$String* $tmp287 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl278);
                        $tmp286 = $tmp287;
                        panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s288);
                        $tmp285 = $tmp289;
                        panda$core$MutableString$append$panda$core$String(result183, $tmp285);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                    }
                    $tmp277 = -1;
                    goto $l275;
                    $l275:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl278));
                    cl278 = NULL;
                    switch ($tmp277) {
                        case -1: goto $l290;
                    }
                    $l290:;
                }
                goto $l267;
                $l268:;
            }
            $tmp259 = -1;
            goto $l257;
            $l257:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$173$9260));
            Iter$173$9260 = NULL;
            switch ($tmp259) {
                case -1: goto $l291;
            }
            $l291:;
        }
        {
            int $tmp294;
            {
                ITable* $tmp298 = ((panda$collections$Iterable*) self->fields)->$class->itable;
                while ($tmp298->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp298 = $tmp298->next;
                }
                $fn300 $tmp299 = $tmp298->methods[0];
                panda$collections$Iterator* $tmp301 = $tmp299(((panda$collections$Iterable*) self->fields));
                $tmp297 = $tmp301;
                $tmp296 = $tmp297;
                Iter$176$9295 = $tmp296;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                $l302:;
                ITable* $tmp305 = Iter$176$9295->$class->itable;
                while ($tmp305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp305 = $tmp305->next;
                }
                $fn307 $tmp306 = $tmp305->methods[0];
                panda$core$Bit $tmp308 = $tmp306(Iter$176$9295);
                panda$core$Bit $tmp309 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp308);
                bool $tmp304 = $tmp309.value;
                if (!$tmp304) goto $l303;
                {
                    int $tmp312;
                    {
                        ITable* $tmp316 = Iter$176$9295->$class->itable;
                        while ($tmp316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp316 = $tmp316->next;
                        }
                        $fn318 $tmp317 = $tmp316->methods[1];
                        panda$core$Object* $tmp319 = $tmp317(Iter$176$9295);
                        $tmp315 = $tmp319;
                        $tmp314 = ((org$pandalanguage$pandac$FieldDecl*) $tmp315);
                        f313 = $tmp314;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
                        panda$core$Panda$unref$panda$core$Object($tmp315);
                        panda$core$String* $tmp322 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f313);
                        $tmp321 = $tmp322;
                        panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s323);
                        $tmp320 = $tmp324;
                        panda$core$MutableString$append$panda$core$String(result183, $tmp320);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                    }
                    $tmp312 = -1;
                    goto $l310;
                    $l310:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f313));
                    f313 = NULL;
                    switch ($tmp312) {
                        case -1: goto $l325;
                    }
                    $l325:;
                }
                goto $l302;
                $l303:;
            }
            $tmp294 = -1;
            goto $l292;
            $l292:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$176$9295));
            Iter$176$9295 = NULL;
            switch ($tmp294) {
                case -1: goto $l326;
            }
            $l326:;
        }
        {
            int $tmp329;
            {
                ITable* $tmp333 = ((panda$collections$Iterable*) self->methods)->$class->itable;
                while ($tmp333->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp333 = $tmp333->next;
                }
                $fn335 $tmp334 = $tmp333->methods[0];
                panda$collections$Iterator* $tmp336 = $tmp334(((panda$collections$Iterable*) self->methods));
                $tmp332 = $tmp336;
                $tmp331 = $tmp332;
                Iter$179$9330 = $tmp331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                $l337:;
                ITable* $tmp340 = Iter$179$9330->$class->itable;
                while ($tmp340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp340 = $tmp340->next;
                }
                $fn342 $tmp341 = $tmp340->methods[0];
                panda$core$Bit $tmp343 = $tmp341(Iter$179$9330);
                panda$core$Bit $tmp344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp343);
                bool $tmp339 = $tmp344.value;
                if (!$tmp339) goto $l338;
                {
                    int $tmp347;
                    {
                        ITable* $tmp351 = Iter$179$9330->$class->itable;
                        while ($tmp351->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp351 = $tmp351->next;
                        }
                        $fn353 $tmp352 = $tmp351->methods[1];
                        panda$core$Object* $tmp354 = $tmp352(Iter$179$9330);
                        $tmp350 = $tmp354;
                        $tmp349 = ((org$pandalanguage$pandac$MethodDecl*) $tmp350);
                        m348 = $tmp349;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
                        panda$core$Panda$unref$panda$core$Object($tmp350);
                        panda$core$String* $tmp357 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m348);
                        $tmp356 = $tmp357;
                        panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s358);
                        $tmp355 = $tmp359;
                        panda$core$MutableString$append$panda$core$String(result183, $tmp355);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                    }
                    $tmp347 = -1;
                    goto $l345;
                    $l345:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m348));
                    m348 = NULL;
                    switch ($tmp347) {
                        case -1: goto $l360;
                    }
                    $l360:;
                }
                goto $l337;
                $l338:;
            }
            $tmp329 = -1;
            goto $l327;
            $l327:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$179$9330));
            Iter$179$9330 = NULL;
            switch ($tmp329) {
                case -1: goto $l361;
            }
            $l361:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp362, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result183, $tmp362);
        panda$core$String* $tmp366 = panda$core$MutableString$finish$R$panda$core$String(result183);
        $tmp365 = $tmp366;
        $tmp364 = $tmp365;
        $finallyReturn362 = $tmp364;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
        $tmp182 = 0;
        goto $l180;
        $l367:;
        return $finallyReturn362;
    }
    $l180:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result183));
    result183 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator197));
    separator197 = NULL;
    switch ($tmp182) {
        case 0: goto $l367;
    }
    $l369:;
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp372;
    {
    }
    $tmp372 = -1;
    goto $l370;
    $l370:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp372) {
        case -1: goto $l373;
    }
    $l373:;
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

