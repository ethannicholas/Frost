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

typedef panda$collections$Iterator* (*$fn50)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn57)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn65)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn85)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn118)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn126)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn188)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn203)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn239)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn251)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn258)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn266)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn278)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn293)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent) {
    panda$collections$Iterator* Iter$119$945;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p60;
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
    org$pandalanguage$pandac$Type* $tmp2 = NULL;
    self->rawSuper = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp5);
    panda$collections$Array* $tmp4 = $tmp5;
    panda$collections$Array* $tmp3 = $tmp4;
    self->rawInterfaces = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    panda$collections$Array* $tmp8 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp8);
    panda$collections$Array* $tmp7 = $tmp8;
    panda$collections$Array* $tmp6 = $tmp7;
    self->fields = $tmp6;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    panda$collections$Array* $tmp11 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp11);
    panda$collections$Array* $tmp10 = $tmp11;
    panda$collections$Array* $tmp9 = $tmp10;
    self->methods = $tmp9;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$collections$Array* $tmp14 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp14);
    panda$collections$Array* $tmp13 = $tmp14;
    panda$collections$Array* $tmp12 = $tmp13;
    self->classes = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$collections$Array* $tmp17 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp17);
    panda$collections$Array* $tmp16 = $tmp17;
    panda$collections$Array* $tmp15 = $tmp16;
    self->choiceEntries = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    org$pandalanguage$pandac$ClassDecl* $tmp18 = NULL;
    self->owner = $tmp18;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
    self->symbolTableResolved = ((panda$core$Bit) { false });
    self->external = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp21 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp21);
    panda$collections$Array* $tmp20 = $tmp21;
    panda$collections$Array* $tmp19 = $tmp20;
    self->virtualMethods = $tmp19;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$collections$HashMap* $tmp24 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp24);
    panda$collections$HashMap* $tmp23 = $tmp24;
    panda$collections$HashMap* $tmp22 = $tmp23;
    self->classResolutionCache = $tmp22;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 201 }), p_position, p_name);
    {
        panda$io$File* $tmp25 = self->source;
        panda$io$File* $tmp26 = p_source;
        self->source = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    }
    {
        panda$collections$MapView* $tmp27 = self->aliases;
        panda$collections$HashMap* $tmp30 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp30, p_aliases);
        panda$collections$HashMap* $tmp29 = $tmp30;
        panda$collections$MapView* $tmp28 = ((panda$collections$MapView*) $tmp29);
        self->aliases = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    }
    {
        panda$core$String* $tmp31 = self->doccomment;
        panda$core$String* $tmp32 = p_doccomment;
        self->doccomment = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    }
    {
        org$pandalanguage$pandac$Annotations* $tmp33 = self->annotations;
        org$pandalanguage$pandac$Annotations* $tmp34 = p_annotations;
        self->annotations = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
    }
    self->classKind = p_kind;
    {
        panda$collections$Array* $tmp35 = self->declaredSupers;
        panda$collections$Array* $tmp38 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp38, p_declaredSupers);
        panda$collections$Array* $tmp37 = $tmp38;
        panda$collections$Array* $tmp36 = $tmp37;
        self->declaredSupers = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
    {
        panda$collections$List* $tmp39 = self->parameters;
        panda$collections$List* $tmp40 = ((panda$collections$List*) p_parameters);
        self->parameters = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
    }
    {
        org$pandalanguage$pandac$SymbolTable* $tmp41 = self->symbolTable;
        org$pandalanguage$pandac$SymbolTable* $tmp44 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp44, p_parent);
        org$pandalanguage$pandac$SymbolTable* $tmp43 = $tmp44;
        org$pandalanguage$pandac$SymbolTable* $tmp42 = $tmp43;
        self->symbolTable = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    }
    self->resolved = ((panda$core$Bit) { false });
    {
        ITable* $tmp48 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
        while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp48 = $tmp48->next;
        }
        $fn50 $tmp49 = $tmp48->methods[0];
        panda$collections$Iterator* $tmp51 = $tmp49(((panda$collections$Iterable*) p_parameters));
        panda$collections$Iterator* $tmp47 = $tmp51;
        panda$collections$Iterator* $tmp46 = $tmp47;
        Iter$119$945 = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        $l52:;
        ITable* $tmp55 = Iter$119$945->$class->itable;
        while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp55 = $tmp55->next;
        }
        $fn57 $tmp56 = $tmp55->methods[0];
        panda$core$Bit $tmp58 = $tmp56(Iter$119$945);
        panda$core$Bit $tmp59 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp58);
        bool $tmp54 = $tmp59.value;
        if (!$tmp54) goto $l53;
        {
            ITable* $tmp63 = Iter$119$945->$class->itable;
            while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp63 = $tmp63->next;
            }
            $fn65 $tmp64 = $tmp63->methods[1];
            panda$core$Object* $tmp66 = $tmp64(Iter$119$945);
            panda$core$Object* $tmp62 = $tmp66;
            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp61 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp62);
            p60 = $tmp61;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
            panda$core$Panda$unref$panda$core$Object($tmp62);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p60));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p60));
        }
        goto $l52;
        $l53:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$945));
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index67;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp75;
    panda$core$String$Index$nullable $tmp69 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s68);
    index67 = $tmp69;
    if (((panda$core$Bit) { !index67.nonnull }).value) {
    {
        panda$core$String* $tmp71 = self->name;
        panda$core$String* $tmp70 = $tmp71;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
        return $tmp70;
    }
    }
    panda$core$String$Index $tmp76 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index67.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp75, ((panda$core$String$Index$nullable) { $tmp76, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp77 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp75);
    panda$core$String* $tmp74 = $tmp77;
    panda$core$String* $tmp73 = $tmp74;
    panda$core$String* $tmp72 = $tmp73;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    return $tmp72;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Position $tmp82;
    org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp82);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp81, self->name, ((panda$core$Int64) { 10 }), $tmp82, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp80 = $tmp81;
    org$pandalanguage$pandac$Type* $tmp79 = $tmp80;
    org$pandalanguage$pandac$Type* $tmp78 = $tmp79;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    return $tmp78;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$collections$Array* subtypes92;
    panda$core$MutableString* name98;
    panda$core$Char8 $tmp102;
    panda$core$String* separator103;
    panda$collections$Iterator* Iter$145$9106;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p121;
    org$pandalanguage$pandac$Type* t128;
    org$pandalanguage$pandac$Position $tmp137;
    panda$core$Char8 $tmp141;
    org$pandalanguage$pandac$Type* tmp1142;
    org$pandalanguage$pandac$Position $tmp148;
    ITable* $tmp83 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
    while ($tmp83->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp83 = $tmp83->next;
    }
    $fn85 $tmp84 = $tmp83->methods[0];
    panda$core$Int64 $tmp86 = $tmp84(((panda$collections$CollectionView*) self->parameters));
    panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp86, ((panda$core$Int64) { 0 }));
    if ($tmp87.value) {
    {
        org$pandalanguage$pandac$Type* $tmp91 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        org$pandalanguage$pandac$Type* $tmp90 = $tmp91;
        org$pandalanguage$pandac$Type* $tmp89 = $tmp90;
        org$pandalanguage$pandac$Type* $tmp88 = $tmp89;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
        return $tmp88;
    }
    }
    panda$collections$Array* $tmp95 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp95);
    panda$collections$Array* $tmp94 = $tmp95;
    panda$collections$Array* $tmp93 = $tmp94;
    subtypes92 = $tmp93;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
    org$pandalanguage$pandac$Type* $tmp97 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
    org$pandalanguage$pandac$Type* $tmp96 = $tmp97;
    panda$collections$Array$add$panda$collections$Array$T(subtypes92, ((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$MutableString* $tmp101 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init$panda$core$String($tmp101, ((org$pandalanguage$pandac$Symbol*) self)->name);
    panda$core$MutableString* $tmp100 = $tmp101;
    panda$core$MutableString* $tmp99 = $tmp100;
    name98 = $tmp99;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
    panda$core$Char8$init$panda$core$UInt8(&$tmp102, ((panda$core$UInt8) { 60 }));
    panda$core$MutableString$append$panda$core$Char8(name98, $tmp102);
    panda$core$String* $tmp104 = &$s105;
    separator103 = $tmp104;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
    {
        ITable* $tmp109 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp109 = $tmp109->next;
        }
        $fn111 $tmp110 = $tmp109->methods[0];
        panda$collections$Iterator* $tmp112 = $tmp110(((panda$collections$Iterable*) self->parameters));
        panda$collections$Iterator* $tmp108 = $tmp112;
        panda$collections$Iterator* $tmp107 = $tmp108;
        Iter$145$9106 = $tmp107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
        $l113:;
        ITable* $tmp116 = Iter$145$9106->$class->itable;
        while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp116 = $tmp116->next;
        }
        $fn118 $tmp117 = $tmp116->methods[0];
        panda$core$Bit $tmp119 = $tmp117(Iter$145$9106);
        panda$core$Bit $tmp120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp119);
        bool $tmp115 = $tmp120.value;
        if (!$tmp115) goto $l114;
        {
            ITable* $tmp124 = Iter$145$9106->$class->itable;
            while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp124 = $tmp124->next;
            }
            $fn126 $tmp125 = $tmp124->methods[1];
            panda$core$Object* $tmp127 = $tmp125(Iter$145$9106);
            panda$core$Object* $tmp123 = $tmp127;
            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp122 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp123);
            p121 = $tmp122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
            panda$core$Panda$unref$panda$core$Object($tmp123);
            org$pandalanguage$pandac$Type* $tmp131 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self)->name, &$s134);
            panda$core$String* $tmp133 = $tmp135;
            panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, ((org$pandalanguage$pandac$Symbol*) p121)->name);
            panda$core$String* $tmp132 = $tmp136;
            org$pandalanguage$pandac$Position$init(&$tmp137);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp131, $tmp132, ((panda$core$Int64) { 22 }), $tmp137, ((panda$core$Bit) { true }));
            org$pandalanguage$pandac$Type* $tmp130 = $tmp131;
            org$pandalanguage$pandac$Type* $tmp129 = $tmp130;
            t128 = $tmp129;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
            panda$collections$Array$add$panda$collections$Array$T(subtypes92, ((panda$core$Object*) t128));
            panda$core$MutableString$append$panda$core$String(name98, separator103);
            panda$core$MutableString$append$panda$core$String(name98, ((org$pandalanguage$pandac$Symbol*) t128)->name);
            {
                panda$core$String* $tmp138 = separator103;
                panda$core$String* $tmp139 = &$s140;
                separator103 = $tmp139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p121));
            }
        }
        goto $l113;
        $l114:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$145$9106));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp141, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name98, $tmp141);
    {
        org$pandalanguage$pandac$Type* $tmp145 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp147 = panda$core$MutableString$finish$R$panda$core$String(name98);
        panda$core$String* $tmp146 = $tmp147;
        org$pandalanguage$pandac$Position$init(&$tmp148);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp145, $tmp146, ((panda$core$Int64) { 21 }), $tmp148, ((panda$collections$ListView*) subtypes92), ((panda$core$Bit) { true }));
        org$pandalanguage$pandac$Type* $tmp144 = $tmp145;
        org$pandalanguage$pandac$Type* $tmp143 = $tmp144;
        tmp1142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes92));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name98));
        }
        org$pandalanguage$pandac$Type* $tmp149 = tmp1142;
        return $tmp149;
    }
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Char8 $tmp151;
    panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 60 }));
    panda$core$Bit $tmp152 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp151);
    panda$core$Bit $tmp150 = $tmp152;
    return $tmp150;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result153;
    panda$core$String* separator167;
    panda$collections$Iterator* Iter$168$9183;
    org$pandalanguage$pandac$Type* intf198;
    panda$collections$Iterator* Iter$173$9219;
    org$pandalanguage$pandac$ClassDecl* cl234;
    panda$collections$Iterator* Iter$176$9246;
    org$pandalanguage$pandac$FieldDecl* f261;
    panda$collections$Iterator* Iter$179$9273;
    org$pandalanguage$pandac$MethodDecl* m288;
    panda$core$Char8 $tmp300;
    panda$core$String* tmp2301;
    panda$core$MutableString* $tmp156 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp161 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$String* $tmp160 = $tmp161;
    panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s162);
    panda$core$String* $tmp159 = $tmp163;
    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, self->name);
    panda$core$String* $tmp158 = $tmp164;
    panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp158, &$s165);
    panda$core$String* $tmp157 = $tmp166;
    panda$core$MutableString$init$panda$core$String($tmp156, $tmp157);
    panda$core$MutableString* $tmp155 = $tmp156;
    panda$core$MutableString* $tmp154 = $tmp155;
    result153 = $tmp154;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
    panda$core$String* $tmp168 = &$s169;
    separator167 = $tmp168;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
    if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
    {
        panda$core$String* $tmp174 = panda$core$String$convert$R$panda$core$String(separator167);
        panda$core$String* $tmp173 = $tmp174;
        panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s175);
        panda$core$String* $tmp172 = $tmp176;
        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp172, ((panda$core$Object*) self->rawSuper));
        panda$core$String* $tmp171 = $tmp177;
        panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s178);
        panda$core$String* $tmp170 = $tmp179;
        panda$core$MutableString$append$panda$core$String(result153, $tmp170);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
        {
            panda$core$String* $tmp180 = separator167;
            panda$core$String* $tmp181 = &$s182;
            separator167 = $tmp181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
        }
    }
    }
    {
        ITable* $tmp186 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
        while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp186 = $tmp186->next;
        }
        $fn188 $tmp187 = $tmp186->methods[0];
        panda$collections$Iterator* $tmp189 = $tmp187(((panda$collections$Iterable*) self->rawInterfaces));
        panda$collections$Iterator* $tmp185 = $tmp189;
        panda$collections$Iterator* $tmp184 = $tmp185;
        Iter$168$9183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        $l190:;
        ITable* $tmp193 = Iter$168$9183->$class->itable;
        while ($tmp193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp193 = $tmp193->next;
        }
        $fn195 $tmp194 = $tmp193->methods[0];
        panda$core$Bit $tmp196 = $tmp194(Iter$168$9183);
        panda$core$Bit $tmp197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp196);
        bool $tmp192 = $tmp197.value;
        if (!$tmp192) goto $l191;
        {
            ITable* $tmp201 = Iter$168$9183->$class->itable;
            while ($tmp201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp201 = $tmp201->next;
            }
            $fn203 $tmp202 = $tmp201->methods[1];
            panda$core$Object* $tmp204 = $tmp202(Iter$168$9183);
            panda$core$Object* $tmp200 = $tmp204;
            org$pandalanguage$pandac$Type* $tmp199 = ((org$pandalanguage$pandac$Type*) $tmp200);
            intf198 = $tmp199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object($tmp200);
            panda$core$String* $tmp209 = panda$core$String$convert$R$panda$core$String(separator167);
            panda$core$String* $tmp208 = $tmp209;
            panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s210);
            panda$core$String* $tmp207 = $tmp211;
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp207, ((panda$core$Object*) intf198));
            panda$core$String* $tmp206 = $tmp212;
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s213);
            panda$core$String* $tmp205 = $tmp214;
            panda$core$MutableString$append$panda$core$String(result153, $tmp205);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
            {
                panda$core$String* $tmp215 = separator167;
                panda$core$String* $tmp216 = &$s217;
                separator167 = $tmp216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf198));
        }
        goto $l190;
        $l191:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$168$9183));
    }
    panda$core$MutableString$append$panda$core$String(result153, &$s218);
    {
        ITable* $tmp222 = ((panda$collections$Iterable*) self->classes)->$class->itable;
        while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp222 = $tmp222->next;
        }
        $fn224 $tmp223 = $tmp222->methods[0];
        panda$collections$Iterator* $tmp225 = $tmp223(((panda$collections$Iterable*) self->classes));
        panda$collections$Iterator* $tmp221 = $tmp225;
        panda$collections$Iterator* $tmp220 = $tmp221;
        Iter$173$9219 = $tmp220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
        $l226:;
        ITable* $tmp229 = Iter$173$9219->$class->itable;
        while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp229 = $tmp229->next;
        }
        $fn231 $tmp230 = $tmp229->methods[0];
        panda$core$Bit $tmp232 = $tmp230(Iter$173$9219);
        panda$core$Bit $tmp233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp232);
        bool $tmp228 = $tmp233.value;
        if (!$tmp228) goto $l227;
        {
            ITable* $tmp237 = Iter$173$9219->$class->itable;
            while ($tmp237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp237 = $tmp237->next;
            }
            $fn239 $tmp238 = $tmp237->methods[1];
            panda$core$Object* $tmp240 = $tmp238(Iter$173$9219);
            panda$core$Object* $tmp236 = $tmp240;
            org$pandalanguage$pandac$ClassDecl* $tmp235 = ((org$pandalanguage$pandac$ClassDecl*) $tmp236);
            cl234 = $tmp235;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
            panda$core$Panda$unref$panda$core$Object($tmp236);
            panda$core$String* $tmp243 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl234);
            panda$core$String* $tmp242 = $tmp243;
            panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s244);
            panda$core$String* $tmp241 = $tmp245;
            panda$core$MutableString$append$panda$core$String(result153, $tmp241);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl234));
        }
        goto $l226;
        $l227:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$173$9219));
    }
    {
        ITable* $tmp249 = ((panda$collections$Iterable*) self->fields)->$class->itable;
        while ($tmp249->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp249 = $tmp249->next;
        }
        $fn251 $tmp250 = $tmp249->methods[0];
        panda$collections$Iterator* $tmp252 = $tmp250(((panda$collections$Iterable*) self->fields));
        panda$collections$Iterator* $tmp248 = $tmp252;
        panda$collections$Iterator* $tmp247 = $tmp248;
        Iter$176$9246 = $tmp247;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
        $l253:;
        ITable* $tmp256 = Iter$176$9246->$class->itable;
        while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp256 = $tmp256->next;
        }
        $fn258 $tmp257 = $tmp256->methods[0];
        panda$core$Bit $tmp259 = $tmp257(Iter$176$9246);
        panda$core$Bit $tmp260 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp259);
        bool $tmp255 = $tmp260.value;
        if (!$tmp255) goto $l254;
        {
            ITable* $tmp264 = Iter$176$9246->$class->itable;
            while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp264 = $tmp264->next;
            }
            $fn266 $tmp265 = $tmp264->methods[1];
            panda$core$Object* $tmp267 = $tmp265(Iter$176$9246);
            panda$core$Object* $tmp263 = $tmp267;
            org$pandalanguage$pandac$FieldDecl* $tmp262 = ((org$pandalanguage$pandac$FieldDecl*) $tmp263);
            f261 = $tmp262;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
            panda$core$Panda$unref$panda$core$Object($tmp263);
            panda$core$String* $tmp270 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f261);
            panda$core$String* $tmp269 = $tmp270;
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s271);
            panda$core$String* $tmp268 = $tmp272;
            panda$core$MutableString$append$panda$core$String(result153, $tmp268);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f261));
        }
        goto $l253;
        $l254:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$176$9246));
    }
    {
        ITable* $tmp276 = ((panda$collections$Iterable*) self->methods)->$class->itable;
        while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp276 = $tmp276->next;
        }
        $fn278 $tmp277 = $tmp276->methods[0];
        panda$collections$Iterator* $tmp279 = $tmp277(((panda$collections$Iterable*) self->methods));
        panda$collections$Iterator* $tmp275 = $tmp279;
        panda$collections$Iterator* $tmp274 = $tmp275;
        Iter$179$9273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
        $l280:;
        ITable* $tmp283 = Iter$179$9273->$class->itable;
        while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp283 = $tmp283->next;
        }
        $fn285 $tmp284 = $tmp283->methods[0];
        panda$core$Bit $tmp286 = $tmp284(Iter$179$9273);
        panda$core$Bit $tmp287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp286);
        bool $tmp282 = $tmp287.value;
        if (!$tmp282) goto $l281;
        {
            ITable* $tmp291 = Iter$179$9273->$class->itable;
            while ($tmp291->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp291 = $tmp291->next;
            }
            $fn293 $tmp292 = $tmp291->methods[1];
            panda$core$Object* $tmp294 = $tmp292(Iter$179$9273);
            panda$core$Object* $tmp290 = $tmp294;
            org$pandalanguage$pandac$MethodDecl* $tmp289 = ((org$pandalanguage$pandac$MethodDecl*) $tmp290);
            m288 = $tmp289;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
            panda$core$Panda$unref$panda$core$Object($tmp290);
            panda$core$String* $tmp297 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m288);
            panda$core$String* $tmp296 = $tmp297;
            panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, &$s298);
            panda$core$String* $tmp295 = $tmp299;
            panda$core$MutableString$append$panda$core$String(result153, $tmp295);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m288));
        }
        goto $l280;
        $l281:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$179$9273));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp300, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result153, $tmp300);
    {
        panda$core$String* $tmp304 = panda$core$MutableString$finish$R$panda$core$String(result153);
        panda$core$String* $tmp303 = $tmp304;
        panda$core$String* $tmp302 = $tmp303;
        tmp2301 = $tmp302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result153));
        }
        panda$core$String* $tmp305 = tmp2301;
        return $tmp305;
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

