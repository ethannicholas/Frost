#include "panda/collections/HashSet.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Key.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/MapView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
__attribute__((weak)) void panda$collections$HashSet$add$panda$collections$HashSet$T$shim(panda$collections$HashSet* p0, panda$core$Object* p1) {
    panda$collections$HashSet$add$panda$collections$HashSet$T(p0, ((panda$collections$Key*) p1));

}
__attribute__((weak)) void panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT$shim(panda$collections$HashSet* p0, panda$collections$CollectionView* p1) {
    panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(p0, p1);

}
__attribute__((weak)) panda$collections$Iterator* panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT$shim(panda$collections$HashSet* p0) {
    panda$collections$Iterator* result = panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$HashSet$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { panda$collections$HashSet$add$panda$collections$HashSet$T$shim, panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT$shim, panda$collections$HashSet$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$HashSet$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$HashSet$_panda$collections$CollectionWriter, { panda$collections$HashSet$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashSet$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$HashSet$_panda$collections$CollectionView, { panda$collections$HashSet$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashSet$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$HashSet$_panda$collections$Collection, { panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT$shim} };

static panda$core$String $s1;
panda$collections$HashSet$class_type panda$collections$HashSet$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashSet$_panda$collections$Iterable, { panda$collections$HashSet$convert$R$panda$core$String, panda$collections$HashSet$cleanup, panda$collections$HashSet$add$panda$collections$HashSet$T$shim, panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT$shim, panda$collections$HashSet$get_count$R$panda$core$Int64, panda$collections$HashSet$clear, panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT$shim, panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn41)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn86)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn97)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74", 25, -7657594595818096716, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x53\x65\x74\x2e\x70\x61\x6e\x64\x61", 13, 1882673794583885547, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x2e\x63\x6c\x65\x61\x72\x28\x29", 66, 3170336333759252531, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashSet$init(panda$collections$HashSet* self) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    self->contents = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->contents = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
}
void panda$collections$HashSet$init$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* self, panda$collections$CollectionView* p_c) {
    panda$collections$HashMap* $tmp5;
    panda$collections$HashMap* $tmp6;
    self->contents = NULL;
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->contents = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(self, p_c);
}
void panda$collections$HashSet$add$panda$collections$HashSet$T(panda$collections$HashSet* self, panda$collections$Key* p_value) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->contents, p_value, ((panda$core$Object*) p_value));
}
void panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$24$911 = NULL;
    panda$collections$Iterator* $tmp12;
    panda$collections$Iterator* $tmp13;
    panda$collections$Key* v29 = NULL;
    panda$collections$Key* $tmp30;
    panda$core$Object* $tmp31;
    {
        int $tmp10;
        {
            ITable* $tmp14 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp14 = $tmp14->next;
            }
            $fn16 $tmp15 = $tmp14->methods[0];
            panda$collections$Iterator* $tmp17 = $tmp15(((panda$collections$Iterable*) p_c));
            $tmp13 = $tmp17;
            $tmp12 = $tmp13;
            Iter$24$911 = $tmp12;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            $l18:;
            ITable* $tmp21 = Iter$24$911->$class->itable;
            while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp21 = $tmp21->next;
            }
            $fn23 $tmp22 = $tmp21->methods[0];
            panda$core$Bit $tmp24 = $tmp22(Iter$24$911);
            panda$core$Bit $tmp25 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp24);
            bool $tmp20 = $tmp25.value;
            if (!$tmp20) goto $l19;
            {
                int $tmp28;
                {
                    ITable* $tmp32 = Iter$24$911->$class->itable;
                    while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp32 = $tmp32->next;
                    }
                    $fn34 $tmp33 = $tmp32->methods[1];
                    panda$core$Object* $tmp35 = $tmp33(Iter$24$911);
                    $tmp31 = $tmp35;
                    $tmp30 = ((panda$collections$Key*) $tmp31);
                    v29 = $tmp30;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
                    panda$core$Panda$unref$panda$core$Object($tmp31);
                    panda$collections$HashSet$add$panda$collections$HashSet$T(self, v29);
                }
                $tmp28 = -1;
                goto $l26;
                $l26:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) v29));
                v29 = NULL;
                switch ($tmp28) {
                    case -1: goto $l36;
                }
                $l36:;
            }
            goto $l18;
            $l19:;
        }
        $tmp10 = -1;
        goto $l8;
        $l8:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$24$911));
        Iter$24$911 = NULL;
        switch ($tmp10) {
            case -1: goto $l37;
        }
        $l37:;
    }
}
panda$core$Int64 panda$collections$HashSet$get_count$R$panda$core$Int64(panda$collections$HashSet* self) {
    panda$core$Int64 $returnValue38;
    ITable* $tmp39 = ((panda$collections$MapView*) self->contents)->$class->itable;
    while ($tmp39->$class != (panda$core$Class*) &panda$collections$MapView$class) {
        $tmp39 = $tmp39->next;
    }
    $fn41 $tmp40 = $tmp39->methods[0];
    panda$core$Int64 $tmp42 = $tmp40(((panda$collections$MapView*) self->contents));
    $returnValue38 = $tmp42;
    return $returnValue38;
}
void panda$collections$HashSet$clear(panda$collections$HashSet* self) {
    panda$core$Int64 $tmp49;
    int $tmp46;
    {
        panda$collections$HashMap$clear(self->contents);
    }
    $tmp46 = -1;
    goto $l44;
    $l44:;
    panda$core$Int64 $tmp48 = panda$collections$HashSet$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp49, 0);
    panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp48, $tmp49);
    if ($tmp50.value) goto $l51; else goto $l52;
    $l52:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s53, (panda$core$Int64) { 35 }, &$s54);
    abort();
    $l51:;
    switch ($tmp46) {
        case -1: goto $l47;
    }
    $l47:;
}
panda$collections$Iterator* panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* self) {
    panda$collections$Iterator* $returnValue55;
    panda$collections$Iterator* $tmp56;
    panda$collections$Iterator* $tmp57;
    panda$collections$Iterator* $tmp58 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->contents);
    $tmp57 = $tmp58;
    $tmp56 = $tmp57;
    $returnValue55 = $tmp56;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
    return $returnValue55;
}
panda$core$Bit panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(panda$collections$HashSet* self, panda$collections$Key* p_value) {
    panda$core$Bit $returnValue60;
    panda$core$Bit $tmp61 = panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(self->contents, p_value);
    $returnValue60 = $tmp61;
    return $returnValue60;
}
panda$core$String* panda$collections$HashSet$convert$R$panda$core$String(panda$collections$HashSet* self) {
    panda$core$MutableString* result66 = NULL;
    panda$core$MutableString* $tmp67;
    panda$core$MutableString* $tmp68;
    panda$core$String* separator71 = NULL;
    panda$core$String* $tmp72;
    panda$collections$Iterator* Iter$52$977 = NULL;
    panda$collections$Iterator* $tmp78;
    panda$collections$Iterator* $tmp79;
    panda$collections$Key* v92 = NULL;
    panda$collections$Key* $tmp93;
    panda$core$Object* $tmp94;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$Char8 $tmp105;
    panda$core$UInt8 $tmp106;
    panda$core$String* $returnValue107;
    panda$core$String* $tmp108;
    panda$core$String* $tmp109;
    int $tmp65;
    {
        panda$core$MutableString* $tmp69 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp69, &$s70);
        $tmp68 = $tmp69;
        $tmp67 = $tmp68;
        result66 = $tmp67;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
        $tmp72 = &$s73;
        separator71 = $tmp72;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
        {
            int $tmp76;
            {
                panda$collections$Iterator* $tmp80 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->contents);
                $tmp79 = $tmp80;
                $tmp78 = $tmp79;
                Iter$52$977 = $tmp78;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
                $l81:;
                ITable* $tmp84 = Iter$52$977->$class->itable;
                while ($tmp84->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp84 = $tmp84->next;
                }
                $fn86 $tmp85 = $tmp84->methods[0];
                panda$core$Bit $tmp87 = $tmp85(Iter$52$977);
                panda$core$Bit $tmp88 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp87);
                bool $tmp83 = $tmp88.value;
                if (!$tmp83) goto $l82;
                {
                    int $tmp91;
                    {
                        ITable* $tmp95 = Iter$52$977->$class->itable;
                        while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp95 = $tmp95->next;
                        }
                        $fn97 $tmp96 = $tmp95->methods[1];
                        panda$core$Object* $tmp98 = $tmp96(Iter$52$977);
                        $tmp94 = $tmp98;
                        $tmp93 = ((panda$collections$Key*) $tmp94);
                        v92 = $tmp93;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
                        panda$core$Panda$unref$panda$core$Object($tmp94);
                        panda$core$MutableString$append$panda$core$String(result66, separator71);
                        if (((panda$core$Bit) { v92 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result66, ((panda$core$Object*) v92));
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result66, &$s99);
                        }
                        }
                        {
                            $tmp100 = separator71;
                            $tmp101 = &$s102;
                            separator71 = $tmp101;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                        }
                    }
                    $tmp91 = -1;
                    goto $l89;
                    $l89:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) v92));
                    v92 = NULL;
                    switch ($tmp91) {
                        case -1: goto $l103;
                    }
                    $l103:;
                }
                goto $l81;
                $l82:;
            }
            $tmp76 = -1;
            goto $l74;
            $l74:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$52$977));
            Iter$52$977 = NULL;
            switch ($tmp76) {
                case -1: goto $l104;
            }
            $l104:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp106, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
        panda$core$MutableString$append$panda$core$Char8(result66, $tmp105);
        panda$core$String* $tmp110 = panda$core$MutableString$finish$R$panda$core$String(result66);
        $tmp109 = $tmp110;
        $tmp108 = $tmp109;
        $returnValue107 = $tmp108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
        $tmp65 = 0;
        goto $l63;
        $l111:;
        return $returnValue107;
    }
    $l63:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result66));
    result66 = NULL;
    separator71 = NULL;
    switch ($tmp65) {
        case 0: goto $l111;
    }
    $l113:;
    abort();
}
void panda$collections$HashSet$cleanup(panda$collections$HashSet* self) {
    int $tmp116;
    {
    }
    $tmp116 = -1;
    goto $l114;
    $l114:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp116) {
        case -1: goto $l117;
    }
    $l117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}





