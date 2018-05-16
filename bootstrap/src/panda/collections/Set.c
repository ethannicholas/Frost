#include "panda/collections/Set.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Key.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Collection.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
void panda$collections$Set$add$panda$collections$Set$T$shim(panda$collections$Set* self, panda$core$Object* p0) {
    panda$collections$Set$add$panda$collections$Set$T(self, ((panda$collections$Key*) p0));
}
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim(panda$collections$Set* self, panda$collections$CollectionView* p0) {
    panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(self, p0);
}
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim(panda$collections$Set* self) {
    panda$collections$Iterator* result = panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Set$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { panda$collections$Set$add$panda$collections$Set$T$shim, panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Set$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Set$_panda$collections$CollectionWriter, { panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Set$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Set$_panda$collections$Iterable, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Set$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Set$_panda$collections$Collection, { panda$collections$Set$get_count$R$panda$core$Int64} };

static panda$core$String $s1;
panda$collections$Set$class_type panda$collections$Set$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Set$_panda$collections$CollectionView, { panda$collections$Set$convert$R$panda$core$String, panda$collections$Set$cleanup, panda$collections$Set$add$panda$collections$Set$T$shim, panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$get_count$R$panda$core$Int64, panda$collections$Set$clear, panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT$shim, panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn83)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x65\x74", 21, -4500515327555646356, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$Set$init(panda$collections$Set* self) {
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
void panda$collections$Set$init$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
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
    panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(self, p_c);
}
void panda$collections$Set$add$panda$collections$Set$T(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->contents, p_value, ((panda$core$Object*) p_value));
}
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c) {
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
                    panda$collections$Set$add$panda$collections$Set$T(self, v29);
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
panda$core$Int64 panda$collections$Set$get_count$R$panda$core$Int64(panda$collections$Set* self) {
    panda$core$Int64 $finallyReturn37;
    panda$core$Int64 $tmp39 = panda$collections$HashMap$get_count$R$panda$core$Int64(self->contents);
    $finallyReturn37 = $tmp39;
    return $finallyReturn37;
}
void panda$collections$Set$clear(panda$collections$Set* self) {
    panda$collections$HashMap$clear(self->contents);
}
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(panda$collections$Set* self) {
    panda$collections$Iterator* $finallyReturn40;
    panda$collections$Iterator* $tmp42;
    panda$collections$Iterator* $tmp43;
    panda$collections$Iterator* $tmp44 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->contents);
    $tmp43 = $tmp44;
    $tmp42 = $tmp43;
    $finallyReturn40 = $tmp42;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    return $finallyReturn40;
}
panda$core$Bit panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(panda$collections$Set* self, panda$collections$Key* p_value) {
    panda$core$Bit $finallyReturn45;
    panda$core$Bit $tmp47 = panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(self->contents, p_value);
    $finallyReturn45 = $tmp47;
    return $finallyReturn45;
}
panda$core$String* panda$collections$Set$convert$R$panda$core$String(panda$collections$Set* self) {
    panda$core$MutableString* result52 = NULL;
    panda$core$MutableString* $tmp53;
    panda$core$MutableString* $tmp54;
    panda$core$String* separator57 = NULL;
    panda$core$String* $tmp58;
    panda$collections$Iterator* Iter$52$963 = NULL;
    panda$collections$Iterator* $tmp64;
    panda$collections$Iterator* $tmp65;
    panda$collections$Key* v78 = NULL;
    panda$collections$Key* $tmp79;
    panda$core$Object* $tmp80;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$Char8 $tmp91;
    panda$core$String* $finallyReturn91;
    panda$core$String* $tmp93;
    panda$core$String* $tmp94;
    int $tmp51;
    {
        panda$core$MutableString* $tmp55 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp55, &$s56);
        $tmp54 = $tmp55;
        $tmp53 = $tmp54;
        result52 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
        $tmp58 = &$s59;
        separator57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        {
            int $tmp62;
            {
                panda$collections$Iterator* $tmp66 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->contents);
                $tmp65 = $tmp66;
                $tmp64 = $tmp65;
                Iter$52$963 = $tmp64;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
                $l67:;
                ITable* $tmp70 = Iter$52$963->$class->itable;
                while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp70 = $tmp70->next;
                }
                $fn72 $tmp71 = $tmp70->methods[0];
                panda$core$Bit $tmp73 = $tmp71(Iter$52$963);
                panda$core$Bit $tmp74 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp73);
                bool $tmp69 = $tmp74.value;
                if (!$tmp69) goto $l68;
                {
                    int $tmp77;
                    {
                        ITable* $tmp81 = Iter$52$963->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[1];
                        panda$core$Object* $tmp84 = $tmp82(Iter$52$963);
                        $tmp80 = $tmp84;
                        $tmp79 = ((panda$collections$Key*) $tmp80);
                        v78 = $tmp79;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
                        panda$core$Panda$unref$panda$core$Object($tmp80);
                        panda$core$MutableString$append$panda$core$String(result52, separator57);
                        if (((panda$core$Bit) { v78 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result52, ((panda$core$Object*) v78));
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result52, &$s85);
                        }
                        }
                        {
                            $tmp86 = separator57;
                            $tmp87 = &$s88;
                            separator57 = $tmp87;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
                        }
                    }
                    $tmp77 = -1;
                    goto $l75;
                    $l75:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) v78));
                    v78 = NULL;
                    switch ($tmp77) {
                        case -1: goto $l89;
                    }
                    $l89:;
                }
                goto $l67;
                $l68:;
            }
            $tmp62 = -1;
            goto $l60;
            $l60:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$52$963));
            Iter$52$963 = NULL;
            switch ($tmp62) {
                case -1: goto $l90;
            }
            $l90:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result52, $tmp91);
        panda$core$String* $tmp95 = panda$core$MutableString$finish$R$panda$core$String(result52);
        $tmp94 = $tmp95;
        $tmp93 = $tmp94;
        $finallyReturn91 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
        $tmp51 = 0;
        goto $l49;
        $l96:;
        return $finallyReturn91;
    }
    $l49:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result52));
    result52 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator57));
    separator57 = NULL;
    switch ($tmp51) {
        case 0: goto $l96;
    }
    $l98:;
}
void panda$collections$Set$cleanup(panda$collections$Set* self) {
    int $tmp101;
    {
    }
    $tmp101 = -1;
    goto $l99;
    $l99:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp101) {
        case -1: goto $l102;
    }
    $l102:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}






