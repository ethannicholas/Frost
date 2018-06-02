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
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Int64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"

static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$cleanup, org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn61)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn68)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn79)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn110)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn150)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn219)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn226)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn237)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn270)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn281)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn305)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn333)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn340)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn351)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$collections$Iterator* Iter$126$956 = NULL;
    panda$collections$Iterator* $tmp57;
    panda$collections$Iterator* $tmp58;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p74 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp75;
    panda$core$Object* $tmp76;
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
    panda$core$Int64$init$builtin_int64(&$tmp52, 0);
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp51, $tmp52);
    self->resolved = $tmp51;
    {
        int $tmp55;
        {
            ITable* $tmp59 = ((panda$collections$Iterable*) p_parameters)->$class->itable;
            while ($tmp59->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp59 = $tmp59->next;
            }
            $fn61 $tmp60 = $tmp59->methods[0];
            panda$collections$Iterator* $tmp62 = $tmp60(((panda$collections$Iterable*) p_parameters));
            $tmp58 = $tmp62;
            $tmp57 = $tmp58;
            Iter$126$956 = $tmp57;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
            $l63:;
            ITable* $tmp66 = Iter$126$956->$class->itable;
            while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp66 = $tmp66->next;
            }
            $fn68 $tmp67 = $tmp66->methods[0];
            panda$core$Bit $tmp69 = $tmp67(Iter$126$956);
            panda$core$Bit $tmp70 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp69);
            bool $tmp65 = $tmp70.value;
            if (!$tmp65) goto $l64;
            {
                int $tmp73;
                {
                    ITable* $tmp77 = Iter$126$956->$class->itable;
                    while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp77 = $tmp77->next;
                    }
                    $fn79 $tmp78 = $tmp77->methods[1];
                    panda$core$Object* $tmp80 = $tmp78(Iter$126$956);
                    $tmp76 = $tmp80;
                    $tmp75 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp76);
                    p74 = $tmp75;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
                    panda$core$Panda$unref$panda$core$Object($tmp76);
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p74));
                }
                $tmp73 = -1;
                goto $l71;
                $l71:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p74));
                p74 = NULL;
                switch ($tmp73) {
                    case -1: goto $l81;
                }
                $l81:;
            }
            goto $l63;
            $l64:;
        }
        $tmp55 = -1;
        goto $l53;
        $l53:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$126$956));
        Iter$126$956 = NULL;
        switch ($tmp55) {
            case -1: goto $l82;
        }
        $l82:;
    }
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$String$Index$nullable index83;
    panda$core$String* $returnValue86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp91;
    panda$core$Bit $tmp93;
    panda$core$String$Index$nullable $tmp85 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->name, &$s84);
    index83 = $tmp85;
    if (((panda$core$Bit) { !index83.nonnull }).value) {
    {
        $tmp87 = self->name;
        $returnValue86 = $tmp87;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
        return $returnValue86;
    }
    }
    panda$core$String$Index $tmp92 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->name, ((panda$core$String$Index) index83.value));
    panda$core$Bit$init$builtin_bit(&$tmp93, false);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp91, ((panda$core$String$Index$nullable) { $tmp92, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp93);
    panda$core$String* $tmp94 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->name, $tmp91);
    $tmp90 = $tmp94;
    $tmp89 = $tmp90;
    $returnValue86 = $tmp89;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    return $returnValue86;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    org$pandalanguage$pandac$Type* $returnValue96;
    org$pandalanguage$pandac$Type* $tmp97;
    org$pandalanguage$pandac$Type* $tmp98;
    org$pandalanguage$pandac$Type$Kind $tmp100;
    panda$core$Int64 $tmp101;
    org$pandalanguage$pandac$Position $tmp102;
    panda$core$Bit $tmp103;
    org$pandalanguage$pandac$Type* $tmp99 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp101, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp100, $tmp101);
    org$pandalanguage$pandac$Position$init(&$tmp102);
    panda$core$Bit$init$builtin_bit(&$tmp103, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp99, self->name, $tmp100, $tmp102, $tmp103);
    $tmp98 = $tmp99;
    $tmp97 = $tmp98;
    $returnValue96 = $tmp97;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    return $returnValue96;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Int64 $tmp112;
    org$pandalanguage$pandac$Type* $returnValue114;
    org$pandalanguage$pandac$Type* $tmp115;
    org$pandalanguage$pandac$Type* $tmp116;
    panda$collections$Array* finalParameters120 = NULL;
    panda$collections$Array* $tmp121;
    panda$collections$Array* $tmp122;
    panda$collections$Iterator* Iter$148$9127 = NULL;
    panda$collections$Iterator* $tmp128;
    panda$collections$Iterator* $tmp129;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p145 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp146;
    panda$core$Object* $tmp147;
    org$pandalanguage$pandac$Type* $tmp152;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    org$pandalanguage$pandac$Type$Kind $tmp159;
    panda$core$Int64 $tmp160;
    org$pandalanguage$pandac$Position $tmp161;
    panda$core$Bit $tmp162;
    org$pandalanguage$pandac$Type* $tmp165;
    org$pandalanguage$pandac$Type* $tmp166;
    org$pandalanguage$pandac$Type* $tmp167;
    int $tmp107;
    {
        ITable* $tmp108 = ((panda$collections$CollectionView*) self->parameters)->$class->itable;
        while ($tmp108->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp108 = $tmp108->next;
        }
        $fn110 $tmp109 = $tmp108->methods[0];
        panda$core$Int64 $tmp111 = $tmp109(((panda$collections$CollectionView*) self->parameters));
        panda$core$Int64$init$builtin_int64(&$tmp112, 0);
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp111, $tmp112);
        if ($tmp113.value) {
        {
            org$pandalanguage$pandac$Type* $tmp117 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
            $tmp116 = $tmp117;
            $tmp115 = $tmp116;
            $returnValue114 = $tmp115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
            $tmp107 = 0;
            goto $l105;
            $l118:;
            return $returnValue114;
        }
        }
        panda$collections$Array* $tmp123 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp123);
        $tmp122 = $tmp123;
        $tmp121 = $tmp122;
        finalParameters120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
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
                Iter$148$9127 = $tmp128;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
                $l134:;
                ITable* $tmp137 = Iter$148$9127->$class->itable;
                while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp137 = $tmp137->next;
                }
                $fn139 $tmp138 = $tmp137->methods[0];
                panda$core$Bit $tmp140 = $tmp138(Iter$148$9127);
                panda$core$Bit $tmp141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp140);
                bool $tmp136 = $tmp141.value;
                if (!$tmp136) goto $l135;
                {
                    int $tmp144;
                    {
                        ITable* $tmp148 = Iter$148$9127->$class->itable;
                        while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp148 = $tmp148->next;
                        }
                        $fn150 $tmp149 = $tmp148->methods[1];
                        panda$core$Object* $tmp151 = $tmp149(Iter$148$9127);
                        $tmp147 = $tmp151;
                        $tmp146 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp147);
                        p145 = $tmp146;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
                        panda$core$Panda$unref$panda$core$Object($tmp147);
                        org$pandalanguage$pandac$Type* $tmp153 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                        panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->name, &$s156);
                        $tmp155 = $tmp157;
                        panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, ((org$pandalanguage$pandac$Symbol*) p145)->name);
                        $tmp154 = $tmp158;
                        panda$core$Int64$init$builtin_int64(&$tmp160, 12);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp159, $tmp160);
                        org$pandalanguage$pandac$Position$init(&$tmp161);
                        panda$core$Bit$init$builtin_bit(&$tmp162, true);
                        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp153, $tmp154, $tmp159, $tmp161, $tmp162);
                        $tmp152 = $tmp153;
                        panda$collections$Array$add$panda$collections$Array$T(finalParameters120, ((panda$core$Object*) $tmp152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                    }
                    $tmp144 = -1;
                    goto $l142;
                    $l142:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p145));
                    p145 = NULL;
                    switch ($tmp144) {
                        case -1: goto $l163;
                    }
                    $l163:;
                }
                goto $l134;
                $l135:;
            }
            $tmp126 = -1;
            goto $l124;
            $l124:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$9127));
            Iter$148$9127 = NULL;
            switch ($tmp126) {
                case -1: goto $l164;
            }
            $l164:;
        }
        org$pandalanguage$pandac$Type* $tmp168 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self);
        $tmp167 = $tmp168;
        org$pandalanguage$pandac$Type* $tmp169 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp167, ((panda$collections$ListView*) finalParameters120));
        $tmp166 = $tmp169;
        $tmp165 = $tmp166;
        $returnValue114 = $tmp165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
        $tmp107 = 1;
        goto $l105;
        $l170:;
        return $returnValue114;
    }
    $l105:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalParameters120));
    finalParameters120 = NULL;
    switch ($tmp107) {
        case 0: goto $l118;
        case 1: goto $l170;
    }
    $l172:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $returnValue173;
    panda$core$Char8 $tmp174;
    panda$core$UInt8 $tmp175;
    panda$core$UInt8$init$builtin_uint8(&$tmp175, 60);
    panda$core$Char8$init$panda$core$UInt8(&$tmp174, $tmp175);
    panda$core$Bit $tmp176 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp174);
    $returnValue173 = $tmp176;
    return $returnValue173;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result181 = NULL;
    panda$core$MutableString* $tmp182;
    panda$core$MutableString* $tmp183;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$String* $tmp187;
    panda$core$String* $tmp188;
    panda$core$String* separator195 = NULL;
    panda$core$String* $tmp196;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$String* $tmp200;
    panda$core$String* $tmp201;
    panda$core$String* $tmp208;
    panda$core$String* $tmp209;
    panda$collections$Iterator* Iter$167$9214 = NULL;
    panda$collections$Iterator* $tmp215;
    panda$collections$Iterator* $tmp216;
    org$pandalanguage$pandac$Type* intf232 = NULL;
    org$pandalanguage$pandac$Type* $tmp233;
    panda$core$Object* $tmp234;
    panda$core$String* $tmp239;
    panda$core$String* $tmp240;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp249;
    panda$core$String* $tmp250;
    panda$collections$Iterator* Iter$172$9258 = NULL;
    panda$collections$Iterator* $tmp259;
    panda$collections$Iterator* $tmp260;
    org$pandalanguage$pandac$ClassDecl* cl276 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp277;
    panda$core$Object* $tmp278;
    panda$core$String* $tmp283;
    panda$core$String* $tmp284;
    panda$collections$Iterator* Iter$175$9293 = NULL;
    panda$collections$Iterator* $tmp294;
    panda$collections$Iterator* $tmp295;
    org$pandalanguage$pandac$FieldDecl* f311 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp312;
    panda$core$Object* $tmp313;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$collections$Iterator* Iter$178$9328 = NULL;
    panda$collections$Iterator* $tmp329;
    panda$collections$Iterator* $tmp330;
    org$pandalanguage$pandac$MethodDecl* m346 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp347;
    panda$core$Object* $tmp348;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    panda$core$Char8 $tmp360;
    panda$core$UInt8 $tmp361;
    panda$core$String* $returnValue362;
    panda$core$String* $tmp363;
    panda$core$String* $tmp364;
    int $tmp180;
    {
        panda$core$MutableString* $tmp184 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp189 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp188 = $tmp189;
        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s190);
        $tmp187 = $tmp191;
        panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, self->name);
        $tmp186 = $tmp192;
        panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s193);
        $tmp185 = $tmp194;
        panda$core$MutableString$init$panda$core$String($tmp184, $tmp185);
        $tmp183 = $tmp184;
        $tmp182 = $tmp183;
        result181 = $tmp182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
        $tmp196 = &$s197;
        separator195 = $tmp196;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
        if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
        {
            panda$core$String* $tmp202 = panda$core$String$convert$R$panda$core$String(separator195);
            $tmp201 = $tmp202;
            panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s203);
            $tmp200 = $tmp204;
            panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp200, ((panda$core$Object*) self->rawSuper));
            $tmp199 = $tmp205;
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s206);
            $tmp198 = $tmp207;
            panda$core$MutableString$append$panda$core$String(result181, $tmp198);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
            {
                $tmp208 = separator195;
                $tmp209 = &$s210;
                separator195 = $tmp209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
            }
        }
        }
        {
            int $tmp213;
            {
                ITable* $tmp217 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
                while ($tmp217->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp217 = $tmp217->next;
                }
                $fn219 $tmp218 = $tmp217->methods[0];
                panda$collections$Iterator* $tmp220 = $tmp218(((panda$collections$Iterable*) self->rawInterfaces));
                $tmp216 = $tmp220;
                $tmp215 = $tmp216;
                Iter$167$9214 = $tmp215;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
                $l221:;
                ITable* $tmp224 = Iter$167$9214->$class->itable;
                while ($tmp224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp224 = $tmp224->next;
                }
                $fn226 $tmp225 = $tmp224->methods[0];
                panda$core$Bit $tmp227 = $tmp225(Iter$167$9214);
                panda$core$Bit $tmp228 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp227);
                bool $tmp223 = $tmp228.value;
                if (!$tmp223) goto $l222;
                {
                    int $tmp231;
                    {
                        ITable* $tmp235 = Iter$167$9214->$class->itable;
                        while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp235 = $tmp235->next;
                        }
                        $fn237 $tmp236 = $tmp235->methods[1];
                        panda$core$Object* $tmp238 = $tmp236(Iter$167$9214);
                        $tmp234 = $tmp238;
                        $tmp233 = ((org$pandalanguage$pandac$Type*) $tmp234);
                        intf232 = $tmp233;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
                        panda$core$Panda$unref$panda$core$Object($tmp234);
                        panda$core$String* $tmp243 = panda$core$String$convert$R$panda$core$String(separator195);
                        $tmp242 = $tmp243;
                        panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s244);
                        $tmp241 = $tmp245;
                        panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp241, ((panda$core$Object*) intf232));
                        $tmp240 = $tmp246;
                        panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s247);
                        $tmp239 = $tmp248;
                        panda$core$MutableString$append$panda$core$String(result181, $tmp239);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                        {
                            $tmp249 = separator195;
                            $tmp250 = &$s251;
                            separator195 = $tmp250;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                        }
                    }
                    $tmp231 = -1;
                    goto $l229;
                    $l229:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf232));
                    intf232 = NULL;
                    switch ($tmp231) {
                        case -1: goto $l252;
                    }
                    $l252:;
                }
                goto $l221;
                $l222:;
            }
            $tmp213 = -1;
            goto $l211;
            $l211:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$167$9214));
            Iter$167$9214 = NULL;
            switch ($tmp213) {
                case -1: goto $l253;
            }
            $l253:;
        }
        panda$core$MutableString$append$panda$core$String(result181, &$s254);
        {
            int $tmp257;
            {
                ITable* $tmp261 = ((panda$collections$Iterable*) self->classes)->$class->itable;
                while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp261 = $tmp261->next;
                }
                $fn263 $tmp262 = $tmp261->methods[0];
                panda$collections$Iterator* $tmp264 = $tmp262(((panda$collections$Iterable*) self->classes));
                $tmp260 = $tmp264;
                $tmp259 = $tmp260;
                Iter$172$9258 = $tmp259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
                $l265:;
                ITable* $tmp268 = Iter$172$9258->$class->itable;
                while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp268 = $tmp268->next;
                }
                $fn270 $tmp269 = $tmp268->methods[0];
                panda$core$Bit $tmp271 = $tmp269(Iter$172$9258);
                panda$core$Bit $tmp272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp271);
                bool $tmp267 = $tmp272.value;
                if (!$tmp267) goto $l266;
                {
                    int $tmp275;
                    {
                        ITable* $tmp279 = Iter$172$9258->$class->itable;
                        while ($tmp279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp279 = $tmp279->next;
                        }
                        $fn281 $tmp280 = $tmp279->methods[1];
                        panda$core$Object* $tmp282 = $tmp280(Iter$172$9258);
                        $tmp278 = $tmp282;
                        $tmp277 = ((org$pandalanguage$pandac$ClassDecl*) $tmp278);
                        cl276 = $tmp277;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
                        panda$core$Panda$unref$panda$core$Object($tmp278);
                        panda$core$String* $tmp285 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl276);
                        $tmp284 = $tmp285;
                        panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s286);
                        $tmp283 = $tmp287;
                        panda$core$MutableString$append$panda$core$String(result181, $tmp283);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
                    }
                    $tmp275 = -1;
                    goto $l273;
                    $l273:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl276));
                    cl276 = NULL;
                    switch ($tmp275) {
                        case -1: goto $l288;
                    }
                    $l288:;
                }
                goto $l265;
                $l266:;
            }
            $tmp257 = -1;
            goto $l255;
            $l255:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$172$9258));
            Iter$172$9258 = NULL;
            switch ($tmp257) {
                case -1: goto $l289;
            }
            $l289:;
        }
        {
            int $tmp292;
            {
                ITable* $tmp296 = ((panda$collections$Iterable*) self->fields)->$class->itable;
                while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp296 = $tmp296->next;
                }
                $fn298 $tmp297 = $tmp296->methods[0];
                panda$collections$Iterator* $tmp299 = $tmp297(((panda$collections$Iterable*) self->fields));
                $tmp295 = $tmp299;
                $tmp294 = $tmp295;
                Iter$175$9293 = $tmp294;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
                $l300:;
                ITable* $tmp303 = Iter$175$9293->$class->itable;
                while ($tmp303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp303 = $tmp303->next;
                }
                $fn305 $tmp304 = $tmp303->methods[0];
                panda$core$Bit $tmp306 = $tmp304(Iter$175$9293);
                panda$core$Bit $tmp307 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp306);
                bool $tmp302 = $tmp307.value;
                if (!$tmp302) goto $l301;
                {
                    int $tmp310;
                    {
                        ITable* $tmp314 = Iter$175$9293->$class->itable;
                        while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp314 = $tmp314->next;
                        }
                        $fn316 $tmp315 = $tmp314->methods[1];
                        panda$core$Object* $tmp317 = $tmp315(Iter$175$9293);
                        $tmp313 = $tmp317;
                        $tmp312 = ((org$pandalanguage$pandac$FieldDecl*) $tmp313);
                        f311 = $tmp312;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                        panda$core$Panda$unref$panda$core$Object($tmp313);
                        panda$core$String* $tmp320 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f311);
                        $tmp319 = $tmp320;
                        panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s321);
                        $tmp318 = $tmp322;
                        panda$core$MutableString$append$panda$core$String(result181, $tmp318);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                    }
                    $tmp310 = -1;
                    goto $l308;
                    $l308:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f311));
                    f311 = NULL;
                    switch ($tmp310) {
                        case -1: goto $l323;
                    }
                    $l323:;
                }
                goto $l300;
                $l301:;
            }
            $tmp292 = -1;
            goto $l290;
            $l290:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$175$9293));
            Iter$175$9293 = NULL;
            switch ($tmp292) {
                case -1: goto $l324;
            }
            $l324:;
        }
        {
            int $tmp327;
            {
                ITable* $tmp331 = ((panda$collections$Iterable*) self->methods)->$class->itable;
                while ($tmp331->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp331 = $tmp331->next;
                }
                $fn333 $tmp332 = $tmp331->methods[0];
                panda$collections$Iterator* $tmp334 = $tmp332(((panda$collections$Iterable*) self->methods));
                $tmp330 = $tmp334;
                $tmp329 = $tmp330;
                Iter$178$9328 = $tmp329;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                $l335:;
                ITable* $tmp338 = Iter$178$9328->$class->itable;
                while ($tmp338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp338 = $tmp338->next;
                }
                $fn340 $tmp339 = $tmp338->methods[0];
                panda$core$Bit $tmp341 = $tmp339(Iter$178$9328);
                panda$core$Bit $tmp342 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp341);
                bool $tmp337 = $tmp342.value;
                if (!$tmp337) goto $l336;
                {
                    int $tmp345;
                    {
                        ITable* $tmp349 = Iter$178$9328->$class->itable;
                        while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp349 = $tmp349->next;
                        }
                        $fn351 $tmp350 = $tmp349->methods[1];
                        panda$core$Object* $tmp352 = $tmp350(Iter$178$9328);
                        $tmp348 = $tmp352;
                        $tmp347 = ((org$pandalanguage$pandac$MethodDecl*) $tmp348);
                        m346 = $tmp347;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
                        panda$core$Panda$unref$panda$core$Object($tmp348);
                        panda$core$String* $tmp355 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m346);
                        $tmp354 = $tmp355;
                        panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s356);
                        $tmp353 = $tmp357;
                        panda$core$MutableString$append$panda$core$String(result181, $tmp353);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                    }
                    $tmp345 = -1;
                    goto $l343;
                    $l343:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m346));
                    m346 = NULL;
                    switch ($tmp345) {
                        case -1: goto $l358;
                    }
                    $l358:;
                }
                goto $l335;
                $l336:;
            }
            $tmp327 = -1;
            goto $l325;
            $l325:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9328));
            Iter$178$9328 = NULL;
            switch ($tmp327) {
                case -1: goto $l359;
            }
            $l359:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp361, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp360, $tmp361);
        panda$core$MutableString$append$panda$core$Char8(result181, $tmp360);
        panda$core$String* $tmp365 = panda$core$MutableString$finish$R$panda$core$String(result181);
        $tmp364 = $tmp365;
        $tmp363 = $tmp364;
        $returnValue362 = $tmp363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
        $tmp180 = 0;
        goto $l178;
        $l366:;
        return $returnValue362;
    }
    $l178:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator195));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result181));
    result181 = NULL;
    separator195 = NULL;
    switch ($tmp180) {
        case 0: goto $l366;
    }
    $l368:;
    abort();
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp371;
    {
    }
    $tmp371 = -1;
    goto $l369;
    $l369:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp371) {
        case -1: goto $l372;
    }
    $l372:;
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

