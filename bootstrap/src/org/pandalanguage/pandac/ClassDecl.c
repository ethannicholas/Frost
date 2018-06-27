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
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Int64.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"

static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$cleanup, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn63)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn70)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn81)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn114)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn154)(panda$collections$Iterator*);
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
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
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
    org$pandalanguage$pandac$Compiler$Resolution $tmp51;
    panda$core$Int64 $tmp52;
    panda$core$Object* $tmp53;
    panda$collections$Iterator* Iter$127$958 = NULL;
    panda$collections$Iterator* $tmp59;
    panda$collections$Iterator* $tmp60;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p76 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp77;
    panda$core$Object* $tmp78;
    panda$core$Object* $tmp85;
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
    self->choiceCases = NULL;
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
    self->choiceCases = $tmp15;
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
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp44, ((panda$collections$CollectionView*) p_declaredSupers));
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
    panda$core$Int64$init$builtin_int64(&$tmp52, 0);
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp51, $tmp52);
    self->resolved = $tmp51;
    panda$core$Object* $tmp54 = panda$core$Weak$get$R$panda$core$Weak$T(self->symbolTable->compiler);
    $tmp53 = $tmp54;
    panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp53)->currentClass, ((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object($tmp53);
    {
        int $tmp57;
        {
            ITable* $tmp61 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
            while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp61 = $tmp61->next;
            }
            $fn63 $tmp62 = $tmp61->methods[0];
            panda$collections$Iterator* $tmp64 = $tmp62(((panda$collections$Iterable*) p_parameters));
            $tmp60 = $tmp64;
            $tmp59 = $tmp60;
            Iter$127$958 = $tmp59;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
            $l65:;
            ITable* $tmp68 = Iter$127$958->$class->itable;
            while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp68 = $tmp68->next;
            }
            $fn70 $tmp69 = $tmp68->methods[0];
            panda$core$Bit $tmp71 = $tmp69(Iter$127$958);
            panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp71);
            bool $tmp67 = $tmp72.value;
            if (!$tmp67) goto $l66;
            {
                int $tmp75;
                {
                    ITable* $tmp79 = Iter$127$958->$class->itable;
                    while ($tmp79->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp79 = $tmp79->next;
                    }
                    $fn81 $tmp80 = $tmp79->methods[1];
                    panda$core$Object* $tmp82 = $tmp80(Iter$127$958);
                    $tmp78 = $tmp82;
                    $tmp77 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp78);
                    p76 = $tmp77;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
                    panda$core$Panda$unref$panda$core$Object($tmp78);
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p76));
                }
                $tmp75 = -1;
                goto $l73;
                $l73:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p76));
                p76 = NULL;
                switch ($tmp75) {
                    case -1: goto $l83;
                }
                $l83:;
            }
            goto $l65;
            $l66:;
        }
        $tmp57 = -1;
        goto $l55;
        $l55:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$127$958));
        Iter$127$958 = NULL;
        switch ($tmp57) {
            case -1: goto $l84;
        }
        $l84:;
    }
    panda$core$Object* $tmp86 = panda$core$Weak$get$R$panda$core$Weak$T(self->symbolTable->compiler);
    $tmp85 = $tmp86;
    panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp85)->currentClass, ((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object($tmp85);
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index87;
    panda$core$String* $returnValue90;
    panda$core$String* $tmp91;
    panda$core$String* $tmp93;
    panda$core$String* $tmp94;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp95;
    panda$core$Bit $tmp97;
    panda$core$String$Index$nullable $tmp89 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s88);
    index87 = $tmp89;
    if (((panda$core$Bit) { !index87.nonnull }).value) {
    {
        $tmp91 = self->name;
        $returnValue90 = $tmp91;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
        return $returnValue90;
    }
    }
    panda$core$String$Index $tmp96 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index87.value));
    panda$core$Bit$init$builtin_bit(&$tmp97, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp95, ((panda$core$String$Index$nullable) { $tmp96, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp97);
    panda$core$String* $tmp98 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp95);
    $tmp94 = $tmp98;
    $tmp93 = $tmp94;
    $returnValue90 = $tmp93;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
    return $returnValue90;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $returnValue100;
    org$pandalanguage$pandac$Type* $tmp101;
    org$pandalanguage$pandac$Type* $tmp102;
    org$pandalanguage$pandac$Type$Kind $tmp104;
    panda$core$Int64 $tmp105;
    org$pandalanguage$pandac$Position $tmp106;
    panda$core$Bit $tmp107;
    org$pandalanguage$pandac$Type* $tmp103 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp105, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp104, $tmp105);
    org$pandalanguage$pandac$Position$init(&$tmp106);
    panda$core$Bit$init$builtin_bit(&$tmp107, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp103, self->name, $tmp104, $tmp106, $tmp107);
    $tmp102 = $tmp103;
    $tmp101 = $tmp102;
    $returnValue100 = $tmp101;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    return $returnValue100;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Int64 $tmp116;
    org$pandalanguage$pandac$Type* $returnValue118;
    org$pandalanguage$pandac$Type* $tmp119;
    org$pandalanguage$pandac$Type* $tmp120;
    panda$collections$Array* finalParameters124 = NULL;
    panda$collections$Array* $tmp125;
    panda$collections$Array* $tmp126;
    panda$collections$Iterator* Iter$150$9131 = NULL;
    panda$collections$Iterator* $tmp132;
    panda$collections$Iterator* $tmp133;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p149 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp150;
    panda$core$Object* $tmp151;
    org$pandalanguage$pandac$Type* $tmp156;
    panda$core$String* $tmp158;
    panda$core$String* $tmp159;
    org$pandalanguage$pandac$Type$Kind $tmp163;
    panda$core$Int64 $tmp164;
    org$pandalanguage$pandac$Position $tmp165;
    panda$core$Bit $tmp166;
    org$pandalanguage$pandac$Type* $tmp169;
    org$pandalanguage$pandac$Type* $tmp170;
    org$pandalanguage$pandac$Type* $tmp171;
    int $tmp111;
    {
        ITable* $tmp112 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp112->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp112 = $tmp112->next;
        }
        $fn114 $tmp113 = $tmp112->methods[0];
        panda$core$Int64 $tmp115 = $tmp113(((panda$collections$CollectionView*) self->parameters));
        panda$core$Int64$init$builtin_int64(&$tmp116, 0);
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp115, $tmp116);
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Type* $tmp121 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
            $tmp120 = $tmp121;
            $tmp119 = $tmp120;
            $returnValue118 = $tmp119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
            $tmp111 = 0;
            goto $l109;
            $l122:;
            return $returnValue118;
        }
        }
        panda$collections$Array* $tmp127 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp127);
        $tmp126 = $tmp127;
        $tmp125 = $tmp126;
        finalParameters124 = $tmp125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
        {
            int $tmp130;
            {
                ITable* $tmp134 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp134 = $tmp134->next;
                }
                $fn136 $tmp135 = $tmp134->methods[0];
                panda$collections$Iterator* $tmp137 = $tmp135(((panda$collections$Iterable*) self->parameters));
                $tmp133 = $tmp137;
                $tmp132 = $tmp133;
                Iter$150$9131 = $tmp132;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
                $l138:;
                ITable* $tmp141 = Iter$150$9131->$class->itable;
                while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp141 = $tmp141->next;
                }
                $fn143 $tmp142 = $tmp141->methods[0];
                panda$core$Bit $tmp144 = $tmp142(Iter$150$9131);
                panda$core$Bit $tmp145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp144);
                bool $tmp140 = $tmp145.value;
                if (!$tmp140) goto $l139;
                {
                    int $tmp148;
                    {
                        ITable* $tmp152 = Iter$150$9131->$class->itable;
                        while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp152 = $tmp152->next;
                        }
                        $fn154 $tmp153 = $tmp152->methods[1];
                        panda$core$Object* $tmp155 = $tmp153(Iter$150$9131);
                        $tmp151 = $tmp155;
                        $tmp150 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp151);
                        p149 = $tmp150;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
                        panda$core$Panda$unref$panda$core$Object($tmp151);
                        org$pandalanguage$pandac$Type* $tmp157 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                        panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->name, &$s160);
                        $tmp159 = $tmp161;
                        panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, ((org$pandalanguage$pandac$Symbol*) p149)->name);
                        $tmp158 = $tmp162;
                        panda$core$Int64$init$builtin_int64(&$tmp164, 12);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp163, $tmp164);
                        org$pandalanguage$pandac$Position$init(&$tmp165);
                        panda$core$Bit$init$builtin_bit(&$tmp166, true);
                        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp157, $tmp158, $tmp163, $tmp165, $tmp166);
                        $tmp156 = $tmp157;
                        panda$collections$Array$add$panda$collections$Array$T(finalParameters124, ((panda$core$Object*) $tmp156));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
                    }
                    $tmp148 = -1;
                    goto $l146;
                    $l146:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p149));
                    p149 = NULL;
                    switch ($tmp148) {
                        case -1: goto $l167;
                    }
                    $l167:;
                }
                goto $l138;
                $l139:;
            }
            $tmp130 = -1;
            goto $l128;
            $l128:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$150$9131));
            Iter$150$9131 = NULL;
            switch ($tmp130) {
                case -1: goto $l168;
            }
            $l168:;
        }
        org$pandalanguage$pandac$Type* $tmp172 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        $tmp171 = $tmp172;
        org$pandalanguage$pandac$Type* $tmp173 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp171, ((panda$collections$ListView*) finalParameters124));
        $tmp170 = $tmp173;
        $tmp169 = $tmp170;
        $returnValue118 = $tmp169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
        $tmp111 = 1;
        goto $l109;
        $l174:;
        return $returnValue118;
    }
    $l109:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalParameters124));
    finalParameters124 = NULL;
    switch ($tmp111) {
        case 1: goto $l174;
        case 0: goto $l122;
    }
    $l176:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $returnValue177;
    panda$core$Char8 $tmp178;
    panda$core$UInt8 $tmp179;
    panda$core$UInt8$init$builtin_uint8(&$tmp179, 60);
    panda$core$Char8$init$panda$core$UInt8(&$tmp178, $tmp179);
    panda$core$Bit $tmp180 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp178);
    $returnValue177 = $tmp180;
    return $returnValue177;
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
    panda$collections$Iterator* Iter$169$9218 = NULL;
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
    panda$collections$Iterator* Iter$174$9262 = NULL;
    panda$collections$Iterator* $tmp263;
    panda$collections$Iterator* $tmp264;
    org$pandalanguage$pandac$ClassDecl* cl280 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp281;
    panda$core$Object* $tmp282;
    panda$core$String* $tmp287;
    panda$core$String* $tmp288;
    panda$collections$Iterator* Iter$177$9297 = NULL;
    panda$collections$Iterator* $tmp298;
    panda$collections$Iterator* $tmp299;
    org$pandalanguage$pandac$FieldDecl* f315 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp316;
    panda$core$Object* $tmp317;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$collections$Iterator* Iter$180$9332 = NULL;
    panda$collections$Iterator* $tmp333;
    panda$collections$Iterator* $tmp334;
    org$pandalanguage$pandac$MethodDecl* m350 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp351;
    panda$core$Object* $tmp352;
    panda$core$String* $tmp357;
    panda$core$String* $tmp358;
    panda$core$Char8 $tmp364;
    panda$core$UInt8 $tmp365;
    panda$core$String* $returnValue366;
    panda$core$String* $tmp367;
    panda$core$String* $tmp368;
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
                Iter$169$9218 = $tmp219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                $l225:;
                ITable* $tmp228 = Iter$169$9218->$class->itable;
                while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp228 = $tmp228->next;
                }
                $fn230 $tmp229 = $tmp228->methods[0];
                panda$core$Bit $tmp231 = $tmp229(Iter$169$9218);
                panda$core$Bit $tmp232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp231);
                bool $tmp227 = $tmp232.value;
                if (!$tmp227) goto $l226;
                {
                    int $tmp235;
                    {
                        ITable* $tmp239 = Iter$169$9218->$class->itable;
                        while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp239 = $tmp239->next;
                        }
                        $fn241 $tmp240 = $tmp239->methods[1];
                        panda$core$Object* $tmp242 = $tmp240(Iter$169$9218);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$169$9218));
            Iter$169$9218 = NULL;
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
                Iter$174$9262 = $tmp263;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                $l269:;
                ITable* $tmp272 = Iter$174$9262->$class->itable;
                while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp272 = $tmp272->next;
                }
                $fn274 $tmp273 = $tmp272->methods[0];
                panda$core$Bit $tmp275 = $tmp273(Iter$174$9262);
                panda$core$Bit $tmp276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp275);
                bool $tmp271 = $tmp276.value;
                if (!$tmp271) goto $l270;
                {
                    int $tmp279;
                    {
                        ITable* $tmp283 = Iter$174$9262->$class->itable;
                        while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp283 = $tmp283->next;
                        }
                        $fn285 $tmp284 = $tmp283->methods[1];
                        panda$core$Object* $tmp286 = $tmp284(Iter$174$9262);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$174$9262));
            Iter$174$9262 = NULL;
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
                Iter$177$9297 = $tmp298;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                $l304:;
                ITable* $tmp307 = Iter$177$9297->$class->itable;
                while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp307 = $tmp307->next;
                }
                $fn309 $tmp308 = $tmp307->methods[0];
                panda$core$Bit $tmp310 = $tmp308(Iter$177$9297);
                panda$core$Bit $tmp311 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp310);
                bool $tmp306 = $tmp311.value;
                if (!$tmp306) goto $l305;
                {
                    int $tmp314;
                    {
                        ITable* $tmp318 = Iter$177$9297->$class->itable;
                        while ($tmp318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp318 = $tmp318->next;
                        }
                        $fn320 $tmp319 = $tmp318->methods[1];
                        panda$core$Object* $tmp321 = $tmp319(Iter$177$9297);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$177$9297));
            Iter$177$9297 = NULL;
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
                Iter$180$9332 = $tmp333;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
                $l339:;
                ITable* $tmp342 = Iter$180$9332->$class->itable;
                while ($tmp342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp342 = $tmp342->next;
                }
                $fn344 $tmp343 = $tmp342->methods[0];
                panda$core$Bit $tmp345 = $tmp343(Iter$180$9332);
                panda$core$Bit $tmp346 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp345);
                bool $tmp341 = $tmp346.value;
                if (!$tmp341) goto $l340;
                {
                    int $tmp349;
                    {
                        ITable* $tmp353 = Iter$180$9332->$class->itable;
                        while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp353 = $tmp353->next;
                        }
                        $fn355 $tmp354 = $tmp353->methods[1];
                        panda$core$Object* $tmp356 = $tmp354(Iter$180$9332);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$180$9332));
            Iter$180$9332 = NULL;
            switch ($tmp331) {
                case -1: goto $l363;
            }
            $l363:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp365, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp364, $tmp365);
        panda$core$MutableString$append$panda$core$Char8(result185, $tmp364);
        panda$core$String* $tmp369 = panda$core$MutableString$finish$R$panda$core$String(result185);
        $tmp368 = $tmp369;
        $tmp367 = $tmp368;
        $returnValue366 = $tmp367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
        $tmp184 = 0;
        goto $l182;
        $l370:;
        return $returnValue366;
    }
    $l182:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result185));
    result185 = NULL;
    separator199 = NULL;
    switch ($tmp184) {
        case 0: goto $l370;
    }
    $l372:;
    abort();
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp375;
    {
    }
    $tmp375 = -1;
    goto $l373;
    $l373:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp375) {
        case -1: goto $l376;
    }
    $l376:;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->choiceCases));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->symbolTable));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->virtualMethods));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classResolutionCache));
}

