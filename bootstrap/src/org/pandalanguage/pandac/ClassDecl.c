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
#include "panda/core/Weak.h"
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

typedef panda$collections$Iterator* (*$fn55)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn62)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn101)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn150)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn241)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn267)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn274)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn285)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn302)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn309)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn320)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn337)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn344)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn355)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$io$File* $tmp27;
    panda$io$File* $tmp28;
    panda$collections$MapView* $tmp29;
    panda$collections$MapView* $tmp30;
    panda$collections$HashMap* $tmp31;
    panda$core$String* $tmp33;
    panda$core$String* $tmp34;
    org$pandalanguage$pandac$Annotations* $tmp35;
    org$pandalanguage$pandac$Annotations* $tmp36;
    panda$collections$Array* $tmp37;
    panda$collections$Array* $tmp38;
    panda$collections$Array* $tmp39;
    panda$collections$List* $tmp41;
    panda$collections$List* $tmp42;
    org$pandalanguage$pandac$SymbolTable* $tmp43;
    org$pandalanguage$pandac$SymbolTable* $tmp44;
    org$pandalanguage$pandac$SymbolTable* $tmp45;
    panda$collections$Iterator* Iter$121$950 = NULL;
    panda$collections$Iterator* $tmp51;
    panda$collections$Iterator* $tmp52;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p68 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp69;
    panda$core$Object* $tmp70;
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
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    {
        $tmp27 = self->source;
        $tmp28 = p_source;
        self->source = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    }
    {
        $tmp29 = self->aliases;
        panda$collections$HashMap* $tmp32 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp32, p_aliases);
        $tmp31 = $tmp32;
        $tmp30 = ((panda$collections$MapView*) $tmp31);
        self->aliases = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    }
    {
        $tmp33 = self->doccomment;
        $tmp34 = p_doccomment;
        self->doccomment = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
    }
    {
        $tmp35 = self->annotations;
        $tmp36 = p_annotations;
        self->annotations = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
    self->classKind = p_kind;
    {
        $tmp37 = self->declaredSupers;
        panda$collections$Array* $tmp40 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp40, p_declaredSupers);
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        self->declaredSupers = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
    {
        $tmp41 = self->parameters;
        $tmp42 = ((panda$collections$List*) p_parameters);
        self->parameters = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    }
    {
        $tmp43 = self->symbolTable;
        org$pandalanguage$pandac$SymbolTable* $tmp46 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp46, p_parent);
        $tmp45 = $tmp46;
        $tmp44 = $tmp45;
        self->symbolTable = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    }
    self->resolved = ((panda$core$Bit) { false });
    {
        int $tmp49;
        {
            ITable* $tmp53 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
            while ($tmp53->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp53 = $tmp53->next;
            }
            $fn55 $tmp54 = $tmp53->methods[0];
            panda$collections$Iterator* $tmp56 = $tmp54(((panda$collections$Iterable*) p_parameters));
            $tmp52 = $tmp56;
            $tmp51 = $tmp52;
            Iter$121$950 = $tmp51;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
            $l57:;
            ITable* $tmp60 = Iter$121$950->$class->itable;
            while ($tmp60->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp60 = $tmp60->next;
            }
            $fn62 $tmp61 = $tmp60->methods[0];
            panda$core$Bit $tmp63 = $tmp61(Iter$121$950);
            panda$core$Bit $tmp64 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp63);
            bool $tmp59 = $tmp64.value;
            if (!$tmp59) goto $l58;
            {
                int $tmp67;
                {
                    ITable* $tmp71 = Iter$121$950->$class->itable;
                    while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp71 = $tmp71->next;
                    }
                    $fn73 $tmp72 = $tmp71->methods[1];
                    panda$core$Object* $tmp74 = $tmp72(Iter$121$950);
                    $tmp70 = $tmp74;
                    $tmp69 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp70);
                    p68 = $tmp69;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
                    panda$core$Panda$unref$panda$core$Object($tmp70);
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p68));
                }
                $tmp67 = -1;
                goto $l65;
                $l65:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p68));
                p68 = NULL;
                switch ($tmp67) {
                    case -1: goto $l75;
                }
                $l75:;
            }
            goto $l57;
            $l58:;
        }
        $tmp49 = -1;
        goto $l47;
        $l47:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$950));
        Iter$121$950 = NULL;
        switch ($tmp49) {
            case -1: goto $l76;
        }
        $l76:;
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index77;
    panda$core$String* $finallyReturn79;
    panda$core$String* $tmp81;
    panda$core$String* $finallyReturn82;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp86;
    panda$core$String$Index$nullable $tmp79 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s78);
    index77 = $tmp79;
    if (((panda$core$Bit) { !index77.nonnull }).value) {
    {
        $tmp81 = self->name;
        $finallyReturn79 = $tmp81;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
        return $finallyReturn79;
    }
    }
    panda$core$String$Index $tmp87 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index77.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp86, ((panda$core$String$Index$nullable) { $tmp87, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp88 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp86);
    $tmp85 = $tmp88;
    $tmp84 = $tmp85;
    $finallyReturn82 = $tmp84;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    return $finallyReturn82;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $finallyReturn89;
    org$pandalanguage$pandac$Type* $tmp91;
    org$pandalanguage$pandac$Type* $tmp92;
    org$pandalanguage$pandac$Position $tmp94;
    org$pandalanguage$pandac$Type* $tmp93 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp94);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp93, self->name, ((panda$core$Int64) { 10 }), $tmp94, ((panda$core$Bit) { true }));
    $tmp92 = $tmp93;
    $tmp91 = $tmp92;
    $finallyReturn89 = $tmp91;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    return $finallyReturn89;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $finallyReturn103;
    org$pandalanguage$pandac$Type* $tmp105;
    org$pandalanguage$pandac$Type* $tmp106;
    panda$collections$Array* subtypes110 = NULL;
    panda$collections$Array* $tmp111;
    panda$collections$Array* $tmp112;
    org$pandalanguage$pandac$Type* $tmp114;
    panda$core$MutableString* name116 = NULL;
    panda$core$MutableString* $tmp117;
    panda$core$MutableString* $tmp118;
    panda$core$Char8 $tmp120;
    panda$core$String* separator121 = NULL;
    panda$core$String* $tmp122;
    panda$collections$Iterator* Iter$147$9127 = NULL;
    panda$collections$Iterator* $tmp128;
    panda$collections$Iterator* $tmp129;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p145 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp146;
    panda$core$Object* $tmp147;
    org$pandalanguage$pandac$Type* t152 = NULL;
    org$pandalanguage$pandac$Type* $tmp153;
    org$pandalanguage$pandac$Type* $tmp154;
    panda$core$String* $tmp156;
    panda$core$String* $tmp157;
    org$pandalanguage$pandac$Position $tmp161;
    panda$core$String* $tmp162;
    panda$core$String* $tmp163;
    panda$core$Char8 $tmp167;
    org$pandalanguage$pandac$Type* $finallyReturn167;
    org$pandalanguage$pandac$Type* $tmp169;
    org$pandalanguage$pandac$Type* $tmp170;
    panda$core$String* $tmp172;
    org$pandalanguage$pandac$Position $tmp174;
    int $tmp98;
    {
        ITable* $tmp99 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp99->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp99 = $tmp99->next;
        }
        $fn101 $tmp100 = $tmp99->methods[0];
        panda$core$Int64 $tmp102 = $tmp100(((panda$collections$CollectionView*) self->parameters));
        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp102, ((panda$core$Int64) { 0 }));
        if ($tmp103.value) {
        {
            org$pandalanguage$pandac$Type* $tmp107 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
            $tmp106 = $tmp107;
            $tmp105 = $tmp106;
            $finallyReturn103 = $tmp105;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
            $tmp98 = 0;
            goto $l96;
            $l108:;
            return $finallyReturn103;
        }
        }
        panda$collections$Array* $tmp113 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp113);
        $tmp112 = $tmp113;
        $tmp111 = $tmp112;
        subtypes110 = $tmp111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
        org$pandalanguage$pandac$Type* $tmp115 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        $tmp114 = $tmp115;
        panda$collections$Array$add$panda$collections$Array$T(subtypes110, ((panda$core$Object*) $tmp114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$MutableString* $tmp119 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp119, ((org$pandalanguage$pandac$Symbol*) self)->name);
        $tmp118 = $tmp119;
        $tmp117 = $tmp118;
        name116 = $tmp117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
        panda$core$Char8$init$panda$core$UInt8(&$tmp120, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name116, $tmp120);
        $tmp122 = &$s123;
        separator121 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        {
            int $tmp126;
            {
                ITable* $tmp130 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp130 = $tmp130->next;
                }
                $fn132 $tmp131 = $tmp130->methods[0];
                panda$collections$Iterator* $tmp133 = $tmp131(((panda$collections$Iterable*) self->parameters));
                $tmp129 = $tmp133;
                $tmp128 = $tmp129;
                Iter$147$9127 = $tmp128;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
                $l134:;
                ITable* $tmp137 = Iter$147$9127->$class->itable;
                while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp137 = $tmp137->next;
                }
                $fn139 $tmp138 = $tmp137->methods[0];
                panda$core$Bit $tmp140 = $tmp138(Iter$147$9127);
                panda$core$Bit $tmp141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp140);
                bool $tmp136 = $tmp141.value;
                if (!$tmp136) goto $l135;
                {
                    int $tmp144;
                    {
                        ITable* $tmp148 = Iter$147$9127->$class->itable;
                        while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp148 = $tmp148->next;
                        }
                        $fn150 $tmp149 = $tmp148->methods[1];
                        panda$core$Object* $tmp151 = $tmp149(Iter$147$9127);
                        $tmp147 = $tmp151;
                        $tmp146 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp147);
                        p145 = $tmp146;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
                        panda$core$Panda$unref$panda$core$Object($tmp147);
                        org$pandalanguage$pandac$Type* $tmp155 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                        panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s158);
                        $tmp157 = $tmp159;
                        panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, ((org$pandalanguage$pandac$Symbol*) p145)->name);
                        $tmp156 = $tmp160;
                        org$pandalanguage$pandac$Position$init(&$tmp161);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp155, $tmp156, ((panda$core$Int64) { 22 }), $tmp161, ((panda$core$Bit) { true }));
                        $tmp154 = $tmp155;
                        $tmp153 = $tmp154;
                        t152 = $tmp153;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
                        panda$collections$Array$add$panda$collections$Array$T(subtypes110, ((panda$core$Object*) t152));
                        panda$core$MutableString$append$panda$core$String(name116, separator121);
                        panda$core$MutableString$append$panda$core$String(name116, ((org$pandalanguage$pandac$Symbol*) t152)->name);
                        {
                            $tmp162 = separator121;
                            $tmp163 = &$s164;
                            separator121 = $tmp163;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
                        }
                    }
                    $tmp144 = -1;
                    goto $l142;
                    $l142:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p145));
                    p145 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t152));
                    t152 = NULL;
                    switch ($tmp144) {
                        case -1: goto $l165;
                    }
                    $l165:;
                }
                goto $l134;
                $l135:;
            }
            $tmp126 = -1;
            goto $l124;
            $l124:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$147$9127));
            Iter$147$9127 = NULL;
            switch ($tmp126) {
                case -1: goto $l166;
            }
            $l166:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp167, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name116, $tmp167);
        org$pandalanguage$pandac$Type* $tmp171 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp173 = panda$core$MutableString$finish$R$panda$core$String(name116);
        $tmp172 = $tmp173;
        org$pandalanguage$pandac$Position$init(&$tmp174);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp171, $tmp172, ((panda$core$Int64) { 21 }), $tmp174, ((panda$collections$ListView*) subtypes110), ((panda$core$Bit) { true }));
        $tmp170 = $tmp171;
        $tmp169 = $tmp170;
        $finallyReturn167 = $tmp169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
        $tmp98 = 1;
        goto $l96;
        $l175:;
        return $finallyReturn167;
    }
    $l96:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes110));
    subtypes110 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name116));
    name116 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator121));
    separator121 = NULL;
    switch ($tmp98) {
        case 1: goto $l175;
        case 0: goto $l108;
    }
    $l177:;
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $finallyReturn177;
    panda$core$Char8 $tmp179;
    panda$core$Char8$init$panda$core$UInt8(&$tmp179, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp180 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp179);
    $finallyReturn177 = $tmp180;
    return $finallyReturn177;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result185 = NULL;
    panda$core$MutableString* $tmp186;
    panda$core$MutableString* $tmp187;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* separator199 = NULL;
    panda$core$String* $tmp200;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$String* $tmp204;
    panda$core$String* $tmp205;
    panda$core$String* $tmp212;
    panda$core$String* $tmp213;
    panda$collections$Iterator* Iter$170$9218 = NULL;
    panda$collections$Iterator* $tmp219;
    panda$collections$Iterator* $tmp220;
    org$pandalanguage$pandac$Type* intf236 = NULL;
    org$pandalanguage$pandac$Type* $tmp237;
    panda$core$Object* $tmp238;
    panda$core$String* $tmp243;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    panda$collections$Iterator* Iter$175$9262 = NULL;
    panda$collections$Iterator* $tmp263;
    panda$collections$Iterator* $tmp264;
    org$pandalanguage$pandac$ClassDecl* cl280 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp281;
    panda$core$Object* $tmp282;
    panda$core$String* $tmp287;
    panda$core$String* $tmp288;
    panda$collections$Iterator* Iter$178$9297 = NULL;
    panda$collections$Iterator* $tmp298;
    panda$collections$Iterator* $tmp299;
    org$pandalanguage$pandac$FieldDecl* f315 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp316;
    panda$core$Object* $tmp317;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$collections$Iterator* Iter$181$9332 = NULL;
    panda$collections$Iterator* $tmp333;
    panda$collections$Iterator* $tmp334;
    org$pandalanguage$pandac$MethodDecl* m350 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp351;
    panda$core$Object* $tmp352;
    panda$core$String* $tmp357;
    panda$core$String* $tmp358;
    panda$core$Char8 $tmp364;
    panda$core$String* $finallyReturn364;
    panda$core$String* $tmp366;
    panda$core$String* $tmp367;
    int $tmp184;
    {
        panda$core$MutableString* $tmp188 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp193 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp192 = $tmp193;
        panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s194);
        $tmp191 = $tmp195;
        panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, self->name);
        $tmp190 = $tmp196;
        panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s197);
        $tmp189 = $tmp198;
        panda$core$MutableString$init$panda$core$String($tmp188, $tmp189);
        $tmp187 = $tmp188;
        $tmp186 = $tmp187;
        result185 = $tmp186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
        $tmp200 = &$s201;
        separator199 = $tmp200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
        if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
        {
            panda$core$String* $tmp206 = panda$core$String$convert$R$panda$core$String(separator199);
            $tmp205 = $tmp206;
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, &$s207);
            $tmp204 = $tmp208;
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp204, ((panda$core$Object*) self->rawSuper));
            $tmp203 = $tmp209;
            panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s210);
            $tmp202 = $tmp211;
            panda$core$MutableString$append$panda$core$String(result185, $tmp202);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
            {
                $tmp212 = separator199;
                $tmp213 = &$s214;
                separator199 = $tmp213;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
            }
        }
        }
        {
            int $tmp217;
            {
                ITable* $tmp221 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
                while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp221 = $tmp221->next;
                }
                $fn223 $tmp222 = $tmp221->methods[0];
                panda$collections$Iterator* $tmp224 = $tmp222(((panda$collections$Iterable*) self->rawInterfaces));
                $tmp220 = $tmp224;
                $tmp219 = $tmp220;
                Iter$170$9218 = $tmp219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                $l225:;
                ITable* $tmp228 = Iter$170$9218->$class->itable;
                while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp228 = $tmp228->next;
                }
                $fn230 $tmp229 = $tmp228->methods[0];
                panda$core$Bit $tmp231 = $tmp229(Iter$170$9218);
                panda$core$Bit $tmp232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp231);
                bool $tmp227 = $tmp232.value;
                if (!$tmp227) goto $l226;
                {
                    int $tmp235;
                    {
                        ITable* $tmp239 = Iter$170$9218->$class->itable;
                        while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp239 = $tmp239->next;
                        }
                        $fn241 $tmp240 = $tmp239->methods[1];
                        panda$core$Object* $tmp242 = $tmp240(Iter$170$9218);
                        $tmp238 = $tmp242;
                        $tmp237 = ((org$pandalanguage$pandac$Type*) $tmp238);
                        intf236 = $tmp237;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
                        panda$core$Panda$unref$panda$core$Object($tmp238);
                        panda$core$String* $tmp247 = panda$core$String$convert$R$panda$core$String(separator199);
                        $tmp246 = $tmp247;
                        panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s248);
                        $tmp245 = $tmp249;
                        panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp245, ((panda$core$Object*) intf236));
                        $tmp244 = $tmp250;
                        panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s251);
                        $tmp243 = $tmp252;
                        panda$core$MutableString$append$panda$core$String(result185, $tmp243);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                        {
                            $tmp253 = separator199;
                            $tmp254 = &$s255;
                            separator199 = $tmp254;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                        }
                    }
                    $tmp235 = -1;
                    goto $l233;
                    $l233:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf236));
                    intf236 = NULL;
                    switch ($tmp235) {
                        case -1: goto $l256;
                    }
                    $l256:;
                }
                goto $l225;
                $l226:;
            }
            $tmp217 = -1;
            goto $l215;
            $l215:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$170$9218));
            Iter$170$9218 = NULL;
            switch ($tmp217) {
                case -1: goto $l257;
            }
            $l257:;
        }
        panda$core$MutableString$append$panda$core$String(result185, &$s258);
        {
            int $tmp261;
            {
                ITable* $tmp265 = ((panda$collections$Iterable*) self->classes)->$class->itable;
                while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp265 = $tmp265->next;
                }
                $fn267 $tmp266 = $tmp265->methods[0];
                panda$collections$Iterator* $tmp268 = $tmp266(((panda$collections$Iterable*) self->classes));
                $tmp264 = $tmp268;
                $tmp263 = $tmp264;
                Iter$175$9262 = $tmp263;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                $l269:;
                ITable* $tmp272 = Iter$175$9262->$class->itable;
                while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp272 = $tmp272->next;
                }
                $fn274 $tmp273 = $tmp272->methods[0];
                panda$core$Bit $tmp275 = $tmp273(Iter$175$9262);
                panda$core$Bit $tmp276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp275);
                bool $tmp271 = $tmp276.value;
                if (!$tmp271) goto $l270;
                {
                    int $tmp279;
                    {
                        ITable* $tmp283 = Iter$175$9262->$class->itable;
                        while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp283 = $tmp283->next;
                        }
                        $fn285 $tmp284 = $tmp283->methods[1];
                        panda$core$Object* $tmp286 = $tmp284(Iter$175$9262);
                        $tmp282 = $tmp286;
                        $tmp281 = ((org$pandalanguage$pandac$ClassDecl*) $tmp282);
                        cl280 = $tmp281;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
                        panda$core$Panda$unref$panda$core$Object($tmp282);
                        panda$core$String* $tmp289 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl280);
                        $tmp288 = $tmp289;
                        panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s290);
                        $tmp287 = $tmp291;
                        panda$core$MutableString$append$panda$core$String(result185, $tmp287);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                    }
                    $tmp279 = -1;
                    goto $l277;
                    $l277:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl280));
                    cl280 = NULL;
                    switch ($tmp279) {
                        case -1: goto $l292;
                    }
                    $l292:;
                }
                goto $l269;
                $l270:;
            }
            $tmp261 = -1;
            goto $l259;
            $l259:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$175$9262));
            Iter$175$9262 = NULL;
            switch ($tmp261) {
                case -1: goto $l293;
            }
            $l293:;
        }
        {
            int $tmp296;
            {
                ITable* $tmp300 = ((panda$collections$Iterable*) self->fields)->$class->itable;
                while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp300 = $tmp300->next;
                }
                $fn302 $tmp301 = $tmp300->methods[0];
                panda$collections$Iterator* $tmp303 = $tmp301(((panda$collections$Iterable*) self->fields));
                $tmp299 = $tmp303;
                $tmp298 = $tmp299;
                Iter$178$9297 = $tmp298;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                $l304:;
                ITable* $tmp307 = Iter$178$9297->$class->itable;
                while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp307 = $tmp307->next;
                }
                $fn309 $tmp308 = $tmp307->methods[0];
                panda$core$Bit $tmp310 = $tmp308(Iter$178$9297);
                panda$core$Bit $tmp311 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp310);
                bool $tmp306 = $tmp311.value;
                if (!$tmp306) goto $l305;
                {
                    int $tmp314;
                    {
                        ITable* $tmp318 = Iter$178$9297->$class->itable;
                        while ($tmp318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp318 = $tmp318->next;
                        }
                        $fn320 $tmp319 = $tmp318->methods[1];
                        panda$core$Object* $tmp321 = $tmp319(Iter$178$9297);
                        $tmp317 = $tmp321;
                        $tmp316 = ((org$pandalanguage$pandac$FieldDecl*) $tmp317);
                        f315 = $tmp316;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
                        panda$core$Panda$unref$panda$core$Object($tmp317);
                        panda$core$String* $tmp324 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f315);
                        $tmp323 = $tmp324;
                        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s325);
                        $tmp322 = $tmp326;
                        panda$core$MutableString$append$panda$core$String(result185, $tmp322);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                    }
                    $tmp314 = -1;
                    goto $l312;
                    $l312:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f315));
                    f315 = NULL;
                    switch ($tmp314) {
                        case -1: goto $l327;
                    }
                    $l327:;
                }
                goto $l304;
                $l305:;
            }
            $tmp296 = -1;
            goto $l294;
            $l294:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9297));
            Iter$178$9297 = NULL;
            switch ($tmp296) {
                case -1: goto $l328;
            }
            $l328:;
        }
        {
            int $tmp331;
            {
                ITable* $tmp335 = ((panda$collections$Iterable*) self->methods)->$class->itable;
                while ($tmp335->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp335 = $tmp335->next;
                }
                $fn337 $tmp336 = $tmp335->methods[0];
                panda$collections$Iterator* $tmp338 = $tmp336(((panda$collections$Iterable*) self->methods));
                $tmp334 = $tmp338;
                $tmp333 = $tmp334;
                Iter$181$9332 = $tmp333;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
                $l339:;
                ITable* $tmp342 = Iter$181$9332->$class->itable;
                while ($tmp342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp342 = $tmp342->next;
                }
                $fn344 $tmp343 = $tmp342->methods[0];
                panda$core$Bit $tmp345 = $tmp343(Iter$181$9332);
                panda$core$Bit $tmp346 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp345);
                bool $tmp341 = $tmp346.value;
                if (!$tmp341) goto $l340;
                {
                    int $tmp349;
                    {
                        ITable* $tmp353 = Iter$181$9332->$class->itable;
                        while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp353 = $tmp353->next;
                        }
                        $fn355 $tmp354 = $tmp353->methods[1];
                        panda$core$Object* $tmp356 = $tmp354(Iter$181$9332);
                        $tmp352 = $tmp356;
                        $tmp351 = ((org$pandalanguage$pandac$MethodDecl*) $tmp352);
                        m350 = $tmp351;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
                        panda$core$Panda$unref$panda$core$Object($tmp352);
                        panda$core$String* $tmp359 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m350);
                        $tmp358 = $tmp359;
                        panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, &$s360);
                        $tmp357 = $tmp361;
                        panda$core$MutableString$append$panda$core$String(result185, $tmp357);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
                    }
                    $tmp349 = -1;
                    goto $l347;
                    $l347:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m350));
                    m350 = NULL;
                    switch ($tmp349) {
                        case -1: goto $l362;
                    }
                    $l362:;
                }
                goto $l339;
                $l340:;
            }
            $tmp331 = -1;
            goto $l329;
            $l329:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$181$9332));
            Iter$181$9332 = NULL;
            switch ($tmp331) {
                case -1: goto $l363;
            }
            $l363:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp364, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result185, $tmp364);
        panda$core$String* $tmp368 = panda$core$MutableString$finish$R$panda$core$String(result185);
        $tmp367 = $tmp368;
        $tmp366 = $tmp367;
        $finallyReturn364 = $tmp366;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
        $tmp184 = 0;
        goto $l182;
        $l369:;
        return $finallyReturn364;
    }
    $l182:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result185));
    result185 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator199));
    separator199 = NULL;
    switch ($tmp184) {
        case 0: goto $l369;
    }
    $l371:;
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp374;
    {
    }
    $tmp374 = -1;
    goto $l372;
    $l372:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp374) {
        case -1: goto $l375;
    }
    $l375:;
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

