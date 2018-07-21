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
typedef panda$collections$Iterator* (*$fn227)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn245)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn271)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn289)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn306)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn313)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn324)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn341)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn348)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn359)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 34, -1990136531643469144, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, 8593454617942554921, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, 8593454617942554921, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp5);
    $tmp4 = $tmp5;
    $tmp3 = $tmp4;
    self->rawInterfaces = $tmp3;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    panda$collections$Array* $tmp8 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp8);
    $tmp7 = $tmp8;
    $tmp6 = $tmp7;
    self->fields = $tmp6;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
    panda$collections$Array* $tmp11 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp11);
    $tmp10 = $tmp11;
    $tmp9 = $tmp10;
    self->methods = $tmp9;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
    panda$collections$Array* $tmp14 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp14);
    $tmp13 = $tmp14;
    $tmp12 = $tmp13;
    self->classes = $tmp12;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
    panda$collections$Array* $tmp17 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp17);
    $tmp16 = $tmp17;
    $tmp15 = $tmp16;
    self->choiceCases = $tmp15;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
    panda$core$Weak* $tmp20 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp20, ((panda$core$Object*) NULL));
    $tmp19 = $tmp20;
    $tmp18 = $tmp19;
    self->owner = $tmp18;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
    panda$core$Bit$init$builtin_bit(&$tmp21, false);
    self->symbolTableResolved = $tmp21;
    panda$core$Bit$init$builtin_bit(&$tmp22, true);
    self->external = $tmp22;
    panda$collections$Array* $tmp25 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp25);
    $tmp24 = $tmp25;
    $tmp23 = $tmp24;
    self->virtualMethods = $tmp23;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
    panda$collections$HashMap* $tmp28 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp28);
    $tmp27 = $tmp28;
    $tmp26 = $tmp27;
    self->classResolutionCache = $tmp26;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
    self->position = p_position;
    {
        $tmp29 = self->name;
        $tmp30 = p_name;
        self->name = $tmp30;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
    }
    {
        $tmp31 = self->source;
        $tmp32 = p_source;
        self->source = $tmp32;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
    }
    {
        $tmp33 = self->aliases;
        panda$collections$HashMap* $tmp36 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp36, p_aliases);
        $tmp35 = $tmp36;
        $tmp34 = ((panda$collections$MapView*) $tmp35);
        self->aliases = $tmp34;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
    }
    {
        $tmp37 = self->doccomment;
        $tmp38 = p_doccomment;
        self->doccomment = $tmp38;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
    }
    {
        $tmp39 = self->annotations;
        $tmp40 = p_annotations;
        self->annotations = $tmp40;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
    }
    self->classKind = p_kind;
    {
        $tmp41 = self->declaredSupers;
        panda$collections$Array* $tmp44 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp44, ((panda$collections$CollectionView*) p_declaredSupers));
        $tmp43 = $tmp44;
        $tmp42 = $tmp43;
        self->declaredSupers = $tmp42;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
    }
    {
        $tmp45 = self->parameters;
        $tmp46 = ((panda$collections$List*) p_parameters);
        self->parameters = $tmp46;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
    }
    {
        $tmp47 = self->symbolTable;
        org$pandalanguage$pandac$SymbolTable* $tmp50 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
        org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp50, p_parent);
        $tmp49 = $tmp50;
        $tmp48 = $tmp49;
        self->symbolTable = $tmp48;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
    }
    panda$core$Int64$init$builtin_int64(&$tmp52, 0);
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp51, $tmp52);
    self->resolved = $tmp51;
    panda$core$Object* $tmp54 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->symbolTable->compiler);
    $tmp53 = $tmp54;
    panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp53)->currentClass, ((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object$Q($tmp53);
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
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
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
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp78);
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p76));
                }
                $tmp75 = -1;
                goto $l73;
                $l73:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p76));
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
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$127$958));
        Iter$127$958 = NULL;
        switch ($tmp57) {
            case -1: goto $l84;
        }
        $l84:;
    }
    panda$core$Object* $tmp86 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->symbolTable->compiler);
    $tmp85 = $tmp86;
    panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp85)->currentClass, ((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object$Q($tmp85);
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
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
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
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
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp151);
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
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
                    }
                    $tmp148 = -1;
                    goto $l146;
                    $l146:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p149));
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
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$150$9131));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
        $tmp111 = 1;
        goto $l109;
        $l174:;
        return $returnValue118;
    }
    $l109:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) finalParameters124));
    finalParameters124 = NULL;
    switch ($tmp111) {
        case 1: goto $l174;
        case 0: goto $l122;
    }
    $l176:;
    if (false) goto $l177; else goto $l178;
    $l178:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s179, (panda$core$Int64) { 145 }, &$s180);
    abort();
    $l177:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$Bit $returnValue181;
    panda$core$Char8 $tmp182;
    panda$core$UInt8 $tmp183;
    panda$core$UInt8$init$builtin_uint8(&$tmp183, 60);
    panda$core$Char8$init$panda$core$UInt8(&$tmp182, $tmp183);
    panda$core$Bit $tmp184 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(self->name, $tmp182);
    $returnValue181 = $tmp184;
    return $returnValue181;
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self) {
    panda$core$MutableString* result189 = NULL;
    panda$core$MutableString* $tmp190;
    panda$core$MutableString* $tmp191;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$String* separator203 = NULL;
    panda$core$String* $tmp204;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$core$String* $tmp209;
    panda$core$String* $tmp216;
    panda$core$String* $tmp217;
    panda$collections$Iterator* Iter$169$9222 = NULL;
    panda$collections$Iterator* $tmp223;
    panda$collections$Iterator* $tmp224;
    org$pandalanguage$pandac$Type* intf240 = NULL;
    org$pandalanguage$pandac$Type* $tmp241;
    panda$core$Object* $tmp242;
    panda$core$String* $tmp247;
    panda$core$String* $tmp248;
    panda$core$String* $tmp249;
    panda$core$String* $tmp250;
    panda$core$String* $tmp257;
    panda$core$String* $tmp258;
    panda$collections$Iterator* Iter$174$9266 = NULL;
    panda$collections$Iterator* $tmp267;
    panda$collections$Iterator* $tmp268;
    org$pandalanguage$pandac$ClassDecl* cl284 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp285;
    panda$core$Object* $tmp286;
    panda$core$String* $tmp291;
    panda$core$String* $tmp292;
    panda$collections$Iterator* Iter$177$9301 = NULL;
    panda$collections$Iterator* $tmp302;
    panda$collections$Iterator* $tmp303;
    org$pandalanguage$pandac$FieldDecl* f319 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp320;
    panda$core$Object* $tmp321;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$collections$Iterator* Iter$180$9336 = NULL;
    panda$collections$Iterator* $tmp337;
    panda$collections$Iterator* $tmp338;
    org$pandalanguage$pandac$MethodDecl* m354 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp355;
    panda$core$Object* $tmp356;
    panda$core$String* $tmp361;
    panda$core$String* $tmp362;
    panda$core$Char8 $tmp368;
    panda$core$UInt8 $tmp369;
    panda$core$String* $returnValue370;
    panda$core$String* $tmp371;
    panda$core$String* $tmp372;
    int $tmp188;
    {
        panda$core$MutableString* $tmp192 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp197 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp196 = $tmp197;
        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s198);
        $tmp195 = $tmp199;
        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, self->name);
        $tmp194 = $tmp200;
        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s201);
        $tmp193 = $tmp202;
        panda$core$MutableString$init$panda$core$String($tmp192, $tmp193);
        $tmp191 = $tmp192;
        $tmp190 = $tmp191;
        result189 = $tmp190;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
        $tmp204 = &$s205;
        separator203 = $tmp204;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
        if (((panda$core$Bit) { self->rawSuper != NULL }).value) {
        {
            panda$core$String* $tmp210 = panda$core$String$convert$R$panda$core$String(separator203);
            $tmp209 = $tmp210;
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s211);
            $tmp208 = $tmp212;
            panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp208, ((panda$core$Object*) self->rawSuper));
            $tmp207 = $tmp213;
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s214);
            $tmp206 = $tmp215;
            panda$core$MutableString$append$panda$core$String(result189, $tmp206);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
            {
                $tmp216 = separator203;
                $tmp217 = &$s218;
                separator203 = $tmp217;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
            }
        }
        }
        {
            int $tmp221;
            {
                ITable* $tmp225 = ((panda$collections$Iterable*) self->rawInterfaces)->$class->itable;
                while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp225 = $tmp225->next;
                }
                $fn227 $tmp226 = $tmp225->methods[0];
                panda$collections$Iterator* $tmp228 = $tmp226(((panda$collections$Iterable*) self->rawInterfaces));
                $tmp224 = $tmp228;
                $tmp223 = $tmp224;
                Iter$169$9222 = $tmp223;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
                $l229:;
                ITable* $tmp232 = Iter$169$9222->$class->itable;
                while ($tmp232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp232 = $tmp232->next;
                }
                $fn234 $tmp233 = $tmp232->methods[0];
                panda$core$Bit $tmp235 = $tmp233(Iter$169$9222);
                panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
                bool $tmp231 = $tmp236.value;
                if (!$tmp231) goto $l230;
                {
                    int $tmp239;
                    {
                        ITable* $tmp243 = Iter$169$9222->$class->itable;
                        while ($tmp243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp243 = $tmp243->next;
                        }
                        $fn245 $tmp244 = $tmp243->methods[1];
                        panda$core$Object* $tmp246 = $tmp244(Iter$169$9222);
                        $tmp242 = $tmp246;
                        $tmp241 = ((org$pandalanguage$pandac$Type*) $tmp242);
                        intf240 = $tmp241;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp242);
                        panda$core$String* $tmp251 = panda$core$String$convert$R$panda$core$String(separator203);
                        $tmp250 = $tmp251;
                        panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s252);
                        $tmp249 = $tmp253;
                        panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp249, ((panda$core$Object*) intf240));
                        $tmp248 = $tmp254;
                        panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s255);
                        $tmp247 = $tmp256;
                        panda$core$MutableString$append$panda$core$String(result189, $tmp247);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
                        {
                            $tmp257 = separator203;
                            $tmp258 = &$s259;
                            separator203 = $tmp258;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
                        }
                    }
                    $tmp239 = -1;
                    goto $l237;
                    $l237:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) intf240));
                    intf240 = NULL;
                    switch ($tmp239) {
                        case -1: goto $l260;
                    }
                    $l260:;
                }
                goto $l229;
                $l230:;
            }
            $tmp221 = -1;
            goto $l219;
            $l219:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$169$9222));
            Iter$169$9222 = NULL;
            switch ($tmp221) {
                case -1: goto $l261;
            }
            $l261:;
        }
        panda$core$MutableString$append$panda$core$String(result189, &$s262);
        {
            int $tmp265;
            {
                ITable* $tmp269 = ((panda$collections$Iterable*) self->classes)->$class->itable;
                while ($tmp269->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp269 = $tmp269->next;
                }
                $fn271 $tmp270 = $tmp269->methods[0];
                panda$collections$Iterator* $tmp272 = $tmp270(((panda$collections$Iterable*) self->classes));
                $tmp268 = $tmp272;
                $tmp267 = $tmp268;
                Iter$174$9266 = $tmp267;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
                $l273:;
                ITable* $tmp276 = Iter$174$9266->$class->itable;
                while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp276 = $tmp276->next;
                }
                $fn278 $tmp277 = $tmp276->methods[0];
                panda$core$Bit $tmp279 = $tmp277(Iter$174$9266);
                panda$core$Bit $tmp280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp279);
                bool $tmp275 = $tmp280.value;
                if (!$tmp275) goto $l274;
                {
                    int $tmp283;
                    {
                        ITable* $tmp287 = Iter$174$9266->$class->itable;
                        while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp287 = $tmp287->next;
                        }
                        $fn289 $tmp288 = $tmp287->methods[1];
                        panda$core$Object* $tmp290 = $tmp288(Iter$174$9266);
                        $tmp286 = $tmp290;
                        $tmp285 = ((org$pandalanguage$pandac$ClassDecl*) $tmp286);
                        cl284 = $tmp285;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp286);
                        panda$core$String* $tmp293 = org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(cl284);
                        $tmp292 = $tmp293;
                        panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s294);
                        $tmp291 = $tmp295;
                        panda$core$MutableString$append$panda$core$String(result189, $tmp291);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
                    }
                    $tmp283 = -1;
                    goto $l281;
                    $l281:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl284));
                    cl284 = NULL;
                    switch ($tmp283) {
                        case -1: goto $l296;
                    }
                    $l296:;
                }
                goto $l273;
                $l274:;
            }
            $tmp265 = -1;
            goto $l263;
            $l263:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$174$9266));
            Iter$174$9266 = NULL;
            switch ($tmp265) {
                case -1: goto $l297;
            }
            $l297:;
        }
        {
            int $tmp300;
            {
                ITable* $tmp304 = ((panda$collections$Iterable*) self->fields)->$class->itable;
                while ($tmp304->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp304 = $tmp304->next;
                }
                $fn306 $tmp305 = $tmp304->methods[0];
                panda$collections$Iterator* $tmp307 = $tmp305(((panda$collections$Iterable*) self->fields));
                $tmp303 = $tmp307;
                $tmp302 = $tmp303;
                Iter$177$9301 = $tmp302;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
                $l308:;
                ITable* $tmp311 = Iter$177$9301->$class->itable;
                while ($tmp311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp311 = $tmp311->next;
                }
                $fn313 $tmp312 = $tmp311->methods[0];
                panda$core$Bit $tmp314 = $tmp312(Iter$177$9301);
                panda$core$Bit $tmp315 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp314);
                bool $tmp310 = $tmp315.value;
                if (!$tmp310) goto $l309;
                {
                    int $tmp318;
                    {
                        ITable* $tmp322 = Iter$177$9301->$class->itable;
                        while ($tmp322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp322 = $tmp322->next;
                        }
                        $fn324 $tmp323 = $tmp322->methods[1];
                        panda$core$Object* $tmp325 = $tmp323(Iter$177$9301);
                        $tmp321 = $tmp325;
                        $tmp320 = ((org$pandalanguage$pandac$FieldDecl*) $tmp321);
                        f319 = $tmp320;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp321);
                        panda$core$String* $tmp328 = org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(f319);
                        $tmp327 = $tmp328;
                        panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s329);
                        $tmp326 = $tmp330;
                        panda$core$MutableString$append$panda$core$String(result189, $tmp326);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
                    }
                    $tmp318 = -1;
                    goto $l316;
                    $l316:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) f319));
                    f319 = NULL;
                    switch ($tmp318) {
                        case -1: goto $l331;
                    }
                    $l331:;
                }
                goto $l308;
                $l309:;
            }
            $tmp300 = -1;
            goto $l298;
            $l298:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$177$9301));
            Iter$177$9301 = NULL;
            switch ($tmp300) {
                case -1: goto $l332;
            }
            $l332:;
        }
        {
            int $tmp335;
            {
                ITable* $tmp339 = ((panda$collections$Iterable*) self->methods)->$class->itable;
                while ($tmp339->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp339 = $tmp339->next;
                }
                $fn341 $tmp340 = $tmp339->methods[0];
                panda$collections$Iterator* $tmp342 = $tmp340(((panda$collections$Iterable*) self->methods));
                $tmp338 = $tmp342;
                $tmp337 = $tmp338;
                Iter$180$9336 = $tmp337;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
                $l343:;
                ITable* $tmp346 = Iter$180$9336->$class->itable;
                while ($tmp346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp346 = $tmp346->next;
                }
                $fn348 $tmp347 = $tmp346->methods[0];
                panda$core$Bit $tmp349 = $tmp347(Iter$180$9336);
                panda$core$Bit $tmp350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp349);
                bool $tmp345 = $tmp350.value;
                if (!$tmp345) goto $l344;
                {
                    int $tmp353;
                    {
                        ITable* $tmp357 = Iter$180$9336->$class->itable;
                        while ($tmp357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp357 = $tmp357->next;
                        }
                        $fn359 $tmp358 = $tmp357->methods[1];
                        panda$core$Object* $tmp360 = $tmp358(Iter$180$9336);
                        $tmp356 = $tmp360;
                        $tmp355 = ((org$pandalanguage$pandac$MethodDecl*) $tmp356);
                        m354 = $tmp355;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp356);
                        panda$core$String* $tmp363 = org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(m354);
                        $tmp362 = $tmp363;
                        panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s364);
                        $tmp361 = $tmp365;
                        panda$core$MutableString$append$panda$core$String(result189, $tmp361);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
                    }
                    $tmp353 = -1;
                    goto $l351;
                    $l351:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m354));
                    m354 = NULL;
                    switch ($tmp353) {
                        case -1: goto $l366;
                    }
                    $l366:;
                }
                goto $l343;
                $l344:;
            }
            $tmp335 = -1;
            goto $l333;
            $l333:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$180$9336));
            Iter$180$9336 = NULL;
            switch ($tmp335) {
                case -1: goto $l367;
            }
            $l367:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp369, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp368, $tmp369);
        panda$core$MutableString$append$panda$core$Char8(result189, $tmp368);
        panda$core$String* $tmp373 = panda$core$MutableString$finish$R$panda$core$String(result189);
        $tmp372 = $tmp373;
        $tmp371 = $tmp372;
        $returnValue370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
        $tmp188 = 0;
        goto $l186;
        $l374:;
        return $returnValue370;
    }
    $l186:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator203));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result189));
    result189 = NULL;
    separator203 = NULL;
    switch ($tmp188) {
        case 0: goto $l374;
    }
    $l376:;
    if (false) goto $l377; else goto $l378;
    $l378:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s379, (panda$core$Int64) { 162 }, &$s380);
    abort();
    $l377:;
    abort();
}
void org$pandalanguage$pandac$ClassDecl$cleanup(org$pandalanguage$pandac$ClassDecl* self) {
    int $tmp383;
    {
    }
    $tmp383 = -1;
    goto $l381;
    $l381:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp383) {
        case -1: goto $l384;
    }
    $l384:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->name));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->aliases));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->declaredSupers));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->rawSuper));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->rawInterfaces));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->fields));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->methods));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->classes));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->choiceCases));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->symbolTable));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->virtualMethods));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->classResolutionCache));
}

