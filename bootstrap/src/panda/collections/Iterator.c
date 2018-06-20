#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/collections/Iterator/FilterIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/List.h"
#include "panda/collections/Array.h"

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Iterator$class_type panda$collections$Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

typedef panda$core$Bit (*$fn12)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn18)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn45)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn46)(panda$core$Object*);
typedef panda$core$Bit (*$fn126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn137)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn150)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn169)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef void (*$fn182)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn183)(panda$core$Object*);
typedef panda$core$Bit (*$fn189)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn200)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn215)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn234)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn235)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn245)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn264)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn273)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn276)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn277)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn287)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 84, 754779096528033879, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, -6814385964810289208, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, -3998816657593608985, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 118, -3106733264210870547, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, 4736941845026332569, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, -7677722807381227033, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, 7586548203169175042, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 7271337161154683349, NULL };

panda$core$Int64 panda$collections$Iterator$count$R$panda$core$Int64(panda$collections$Iterator* self) {
    panda$core$Int64 result5;
    panda$core$Int64 $tmp6;
    panda$core$Object* $tmp15;
    panda$core$Int64 $tmp20;
    panda$core$Int64 $returnValue22;
    int $tmp4;
    {
        panda$core$Int64$init$builtin_int64(&$tmp6, 0);
        result5 = $tmp6;
        $l7:;
        ITable* $tmp10 = self->$class->itable;
        while ($tmp10->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp10 = $tmp10->next;
        }
        $fn12 $tmp11 = $tmp10->methods[0];
        panda$core$Bit $tmp13 = $tmp11(self);
        panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
        bool $tmp9 = $tmp14.value;
        if (!$tmp9) goto $l8;
        {
            ITable* $tmp16 = self->$class->itable;
            while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp16 = $tmp16->next;
            }
            $fn18 $tmp17 = $tmp16->methods[1];
            panda$core$Object* $tmp19 = $tmp17(self);
            $tmp15 = $tmp19;
            panda$core$Panda$unref$panda$core$Object($tmp15);
            panda$core$Int64$init$builtin_int64(&$tmp20, 1);
            panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result5, $tmp20);
            result5 = $tmp21;
        }
        goto $l7;
        $l8:;
        $returnValue22 = result5;
        $tmp4 = 0;
        goto $l2;
        $l23:;
        return $returnValue22;
    }
    $l2:;
    ITable* $tmp26 = self->$class->itable;
    while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp26 = $tmp26->next;
    }
    $fn28 $tmp27 = $tmp26->methods[0];
    panda$core$Bit $tmp29 = $tmp27(self);
    if ($tmp29.value) goto $l30; else goto $l31;
    $l31:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s32, (panda$core$Int64) { 120 }, &$s33);
    abort();
    $l30:;
    switch ($tmp4) {
        case 0: goto $l23;
    }
    $l25:;
    abort();
}
panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar37 = NULL;
    panda$core$MutableMethod* $tmp38;
    panda$core$Method* $tmp39;
    panda$core$Object* $tmp41;
    panda$core$Object* $tmp42;
    panda$core$Bit $returnValue43;
    panda$core$Bit $tmp44;
    int $tmp36;
    {
        panda$core$Method* $tmp40 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp40, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp39 = $tmp40;
        $tmp38 = ((panda$core$MutableMethod*) $tmp39);
        methodVar37 = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        {
            $tmp41 = methodVar37->target;
            $tmp42 = self->target;
            methodVar37->target = $tmp42;
            panda$core$Panda$ref$panda$core$Object($tmp42);
            panda$core$Panda$unref$panda$core$Object($tmp41);
        }
        if (methodVar37->target) {
            $tmp44 = (($fn45) methodVar37->pointer)(methodVar37->target, p_p0);
        } else {
            $tmp44 = (($fn46) methodVar37->pointer)(p_p0);
        }
        $returnValue43 = $tmp44;
        $tmp36 = 0;
        goto $l34;
        $l47:;
        return $returnValue43;
    }
    $l34:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar37));
    methodVar37 = NULL;
    switch ($tmp36) {
        case 0: goto $l47;
    }
    $l49:;
    abort();
}
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$MutableMethod* p_predicate) {
    panda$collections$Iterator* $returnValue50;
    panda$collections$Iterator* $tmp51;
    panda$collections$Iterator$FilterIterator* $tmp52;
    panda$collections$Iterator$FilterIterator* $tmp53 = (panda$collections$Iterator$FilterIterator*) pandaObjectAlloc(48, (panda$core$Class*) &panda$collections$Iterator$FilterIterator$class);
    panda$core$MutableMethod* $tmp54 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp54, (panda$core$Int8*) &panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit, ((panda$core$Object*) p_predicate));
    panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp53, self, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp54)));
    $tmp52 = $tmp53;
    $tmp51 = ((panda$collections$Iterator*) $tmp52);
    $returnValue50 = $tmp51;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
    return $returnValue50;
}
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range) {
    panda$core$Int64 $tmp60;
    panda$core$Int64 $tmp66;
    panda$collections$Iterator* $returnValue73;
    panda$collections$Iterator* $tmp74;
    panda$collections$Iterator$RangeIterator* $tmp75;
    panda$core$Int64 $tmp77;
    bool $tmp57 = ((panda$core$Bit) { !p_range.min.nonnull }).value;
    if ($tmp57) goto $l58;
    panda$core$Int64$init$builtin_int64(&$tmp60, 0);
    panda$core$Bit $tmp61 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp60, true }).value));
    bool $tmp59 = $tmp61.value;
    if (!$tmp59) goto $l62;
    $tmp59 = ((panda$core$Bit) { !p_range.max.nonnull }).value;
    $l62:;
    panda$core$Bit $tmp63 = { $tmp59 };
    $tmp57 = $tmp63.value;
    $l58:;
    panda$core$Bit $tmp64 = { $tmp57 };
    bool $tmp56 = $tmp64.value;
    if ($tmp56) goto $l65;
    panda$core$Int64$init$builtin_int64(&$tmp66, 0);
    panda$core$Bit $tmp67 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp66, true }).value));
    $tmp56 = $tmp67.value;
    $l65:;
    panda$core$Bit $tmp68 = { $tmp56 };
    if ($tmp68.value) goto $l69; else goto $l70;
    $l70:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s71, (panda$core$Int64) { 155 }, &$s72);
    abort();
    $l69:;
    panda$collections$Iterator$RangeIterator* $tmp76 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$core$Int64$init$builtin_int64(&$tmp77, 1);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp76, self, p_range.min, p_range.max, p_range.inclusive, $tmp77);
    $tmp75 = $tmp76;
    $tmp74 = ((panda$collections$Iterator*) $tmp75);
    $returnValue73 = $tmp74;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    return $returnValue73;
}
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_range) {
    panda$core$Int64 $tmp83;
    panda$core$Int64 $tmp90;
    panda$core$Int64 $tmp93;
    panda$collections$Iterator* $returnValue101;
    panda$collections$Iterator* $tmp102;
    panda$collections$Iterator$RangeIterator* $tmp103;
    bool $tmp80 = ((panda$core$Bit) { !p_range.start.nonnull }).value;
    if ($tmp80) goto $l81;
    panda$core$Int64$init$builtin_int64(&$tmp83, 0);
    panda$core$Bit $tmp84 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.start.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp83, true }).value));
    bool $tmp82 = $tmp84.value;
    if (!$tmp82) goto $l85;
    $tmp82 = ((panda$core$Bit) { !p_range.end.nonnull }).value;
    $l85:;
    panda$core$Bit $tmp86 = { $tmp82 };
    $tmp80 = $tmp86.value;
    $l81:;
    panda$core$Bit $tmp87 = { $tmp80 };
    bool $tmp79 = $tmp87.value;
    if ($tmp79) goto $l88;
    panda$core$Int64$init$builtin_int64(&$tmp90, 0);
    panda$core$Bit $tmp91 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.end.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp90, true }).value));
    bool $tmp89 = $tmp91.value;
    if (!$tmp89) goto $l92;
    panda$core$Int64$init$builtin_int64(&$tmp93, 0);
    panda$core$Bit $tmp94 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_range.step, $tmp93);
    $tmp89 = $tmp94.value;
    $l92:;
    panda$core$Bit $tmp95 = { $tmp89 };
    $tmp79 = $tmp95.value;
    $l88:;
    panda$core$Bit $tmp96 = { $tmp79 };
    if ($tmp96.value) goto $l97; else goto $l98;
    $l98:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s99, (panda$core$Int64) { 171 }, &$s100);
    abort();
    $l97:;
    panda$collections$Iterator$RangeIterator* $tmp104 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp104, self, p_range.start, p_range.end, p_range.inclusive, p_range.step);
    $tmp103 = $tmp104;
    $tmp102 = ((panda$collections$Iterator*) $tmp103);
    $returnValue101 = $tmp102;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    return $returnValue101;
}
panda$collections$List* panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self) {
    panda$collections$Array* result112 = NULL;
    panda$collections$Array* $tmp113;
    panda$collections$Array* $tmp114;
    panda$collections$Iterator* Iter$182$9119 = NULL;
    panda$collections$Iterator* $tmp120;
    panda$core$Object* v132 = NULL;
    panda$core$Object* $tmp133;
    panda$core$Object* $tmp134;
    panda$collections$List* $returnValue141;
    panda$collections$List* $tmp142;
    int $tmp108;
    {
        int $tmp111;
        {
            panda$collections$Array* $tmp115 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp115);
            $tmp114 = $tmp115;
            $tmp113 = $tmp114;
            result112 = $tmp113;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
            {
                int $tmp118;
                {
                    $tmp120 = self;
                    Iter$182$9119 = $tmp120;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
                    $l121:;
                    ITable* $tmp124 = Iter$182$9119->$class->itable;
                    while ($tmp124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp124 = $tmp124->next;
                    }
                    $fn126 $tmp125 = $tmp124->methods[0];
                    panda$core$Bit $tmp127 = $tmp125(Iter$182$9119);
                    panda$core$Bit $tmp128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp127);
                    bool $tmp123 = $tmp128.value;
                    if (!$tmp123) goto $l122;
                    {
                        int $tmp131;
                        {
                            ITable* $tmp135 = Iter$182$9119->$class->itable;
                            while ($tmp135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp135 = $tmp135->next;
                            }
                            $fn137 $tmp136 = $tmp135->methods[1];
                            panda$core$Object* $tmp138 = $tmp136(Iter$182$9119);
                            $tmp134 = $tmp138;
                            $tmp133 = $tmp134;
                            v132 = $tmp133;
                            panda$core$Panda$ref$panda$core$Object($tmp133);
                            panda$core$Panda$unref$panda$core$Object($tmp134);
                            panda$collections$Array$add$panda$collections$Array$T(result112, v132);
                        }
                        $tmp131 = -1;
                        goto $l129;
                        $l129:;
                        panda$core$Panda$unref$panda$core$Object(v132);
                        v132 = NULL;
                        switch ($tmp131) {
                            case -1: goto $l139;
                        }
                        $l139:;
                    }
                    goto $l121;
                    $l122:;
                }
                $tmp118 = -1;
                goto $l116;
                $l116:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$182$9119));
                Iter$182$9119 = NULL;
                switch ($tmp118) {
                    case -1: goto $l140;
                }
                $l140:;
            }
            $tmp142 = ((panda$collections$List*) result112);
            $returnValue141 = $tmp142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
            $tmp111 = 0;
            goto $l109;
            $l143:;
            $tmp108 = 0;
            goto $l106;
            $l144:;
            return $returnValue141;
        }
        $l109:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result112));
        result112 = NULL;
        switch ($tmp111) {
            case 0: goto $l143;
        }
        $l146:;
    }
    $tmp108 = -1;
    goto $l106;
    $l106:;
    ITable* $tmp148 = self->$class->itable;
    while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp148 = $tmp148->next;
    }
    $fn150 $tmp149 = $tmp148->methods[0];
    panda$core$Bit $tmp151 = $tmp149(self);
    if ($tmp151.value) goto $l152; else goto $l153;
    $l153:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s154, (panda$core$Int64) { 180 }, &$s155);
    abort();
    $l152:;
    switch ($tmp108) {
        case -1: goto $l147;
        case 0: goto $l144;
    }
    $l147:;
    abort();
}
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$198$9162 = NULL;
    panda$collections$Iterator* $tmp163;
    panda$core$Object* v175 = NULL;
    panda$core$Object* $tmp176;
    panda$core$Object* $tmp177;
    int $tmp158;
    {
        {
            int $tmp161;
            {
                $tmp163 = self;
                Iter$198$9162 = $tmp163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
                $l164:;
                ITable* $tmp167 = Iter$198$9162->$class->itable;
                while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp167 = $tmp167->next;
                }
                $fn169 $tmp168 = $tmp167->methods[0];
                panda$core$Bit $tmp170 = $tmp168(Iter$198$9162);
                panda$core$Bit $tmp171 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp170);
                bool $tmp166 = $tmp171.value;
                if (!$tmp166) goto $l165;
                {
                    int $tmp174;
                    {
                        ITable* $tmp178 = Iter$198$9162->$class->itable;
                        while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp178 = $tmp178->next;
                        }
                        $fn180 $tmp179 = $tmp178->methods[1];
                        panda$core$Object* $tmp181 = $tmp179(Iter$198$9162);
                        $tmp177 = $tmp181;
                        $tmp176 = $tmp177;
                        v175 = $tmp176;
                        panda$core$Panda$ref$panda$core$Object($tmp176);
                        panda$core$Panda$unref$panda$core$Object($tmp177);
                        if (p_m->target) {
                            (($fn182) p_m->pointer)(p_m->target, v175);
                        } else {
                            (($fn183) p_m->pointer)(v175);
                        }
                    }
                    $tmp174 = -1;
                    goto $l172;
                    $l172:;
                    panda$core$Panda$unref$panda$core$Object(v175);
                    v175 = NULL;
                    switch ($tmp174) {
                        case -1: goto $l184;
                    }
                    $l184:;
                }
                goto $l164;
                $l165:;
            }
            $tmp161 = -1;
            goto $l159;
            $l159:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$198$9162));
            Iter$198$9162 = NULL;
            switch ($tmp161) {
                case -1: goto $l185;
            }
            $l185:;
        }
    }
    $tmp158 = -1;
    goto $l156;
    $l156:;
    ITable* $tmp187 = self->$class->itable;
    while ($tmp187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp187 = $tmp187->next;
    }
    $fn189 $tmp188 = $tmp187->methods[0];
    panda$core$Bit $tmp190 = $tmp188(self);
    if ($tmp190.value) goto $l191; else goto $l192;
    $l192:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s193, (panda$core$Int64) { 197 }, &$s194);
    abort();
    $l191:;
    switch ($tmp158) {
        case -1: goto $l186;
    }
    $l186:;
}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f) {
    panda$core$Object* result210 = NULL;
    panda$core$Object* $tmp211;
    panda$core$Object* $tmp212;
    panda$core$Object* $tmp225;
    panda$core$Object* $tmp226;
    panda$core$Object* $tmp227;
    panda$core$Object* $tmp228;
    panda$core$Object* $tmp233;
    panda$core$Object* $returnValue236;
    panda$core$Object* $tmp237;
    int $tmp197;
    {
        ITable* $tmp198 = self->$class->itable;
        while ($tmp198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp198 = $tmp198->next;
        }
        $fn200 $tmp199 = $tmp198->methods[0];
        panda$core$Bit $tmp201 = $tmp199(self);
        panda$core$Bit $tmp202 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp201);
        if ($tmp202.value) goto $l203; else goto $l204;
        $l204:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s205, (panda$core$Int64) { 205 }, &$s206);
        abort();
        $l203:;
        int $tmp209;
        {
            ITable* $tmp213 = self->$class->itable;
            while ($tmp213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp213 = $tmp213->next;
            }
            $fn215 $tmp214 = $tmp213->methods[1];
            panda$core$Object* $tmp216 = $tmp214(self);
            $tmp212 = $tmp216;
            $tmp211 = $tmp212;
            result210 = $tmp211;
            panda$core$Panda$ref$panda$core$Object($tmp211);
            panda$core$Panda$unref$panda$core$Object($tmp212);
            $l217:;
            ITable* $tmp220 = self->$class->itable;
            while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp220 = $tmp220->next;
            }
            $fn222 $tmp221 = $tmp220->methods[0];
            panda$core$Bit $tmp223 = $tmp221(self);
            panda$core$Bit $tmp224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp223);
            bool $tmp219 = $tmp224.value;
            if (!$tmp219) goto $l218;
            {
                {
                    $tmp225 = result210;
                    ITable* $tmp229 = self->$class->itable;
                    while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp229 = $tmp229->next;
                    }
                    $fn231 $tmp230 = $tmp229->methods[1];
                    panda$core$Object* $tmp232 = $tmp230(self);
                    $tmp228 = $tmp232;
                    if (p_f->target) {
                        $tmp233 = (($fn234) p_f->pointer)(p_f->target, result210, $tmp228);
                    } else {
                        $tmp233 = (($fn235) p_f->pointer)(result210, $tmp228);
                    }
                    $tmp227 = $tmp233;
                    $tmp226 = $tmp227;
                    result210 = $tmp226;
                    panda$core$Panda$ref$panda$core$Object($tmp226);
                    panda$core$Panda$unref$panda$core$Object($tmp227);
                    panda$core$Panda$unref$panda$core$Object($tmp228);
                    panda$core$Panda$unref$panda$core$Object($tmp225);
                }
            }
            goto $l217;
            $l218:;
            $tmp237 = result210;
            $returnValue236 = $tmp237;
            panda$core$Panda$ref$panda$core$Object($tmp237);
            $tmp209 = 0;
            goto $l207;
            $l238:;
            $tmp197 = 0;
            goto $l195;
            $l239:;
            return $returnValue236;
        }
        $l207:;
        panda$core$Panda$unref$panda$core$Object(result210);
        result210 = NULL;
        switch ($tmp209) {
            case 0: goto $l238;
        }
        $l241:;
    }
    $tmp197 = -1;
    goto $l195;
    $l195:;
    ITable* $tmp243 = self->$class->itable;
    while ($tmp243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp243 = $tmp243->next;
    }
    $fn245 $tmp244 = $tmp243->methods[0];
    panda$core$Bit $tmp246 = $tmp244(self);
    if ($tmp246.value) goto $l247; else goto $l248;
    $l248:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s249, (panda$core$Int64) { 205 }, &$s250);
    abort();
    $l247:;
    switch ($tmp197) {
        case -1: goto $l242;
        case 0: goto $l239;
    }
    $l242:;
    abort();
}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result257 = NULL;
    panda$core$Object* $tmp258;
    panda$core$Object* $tmp267;
    panda$core$Object* $tmp268;
    panda$core$Object* $tmp269;
    panda$core$Object* $tmp270;
    panda$core$Object* $tmp275;
    panda$core$Object* $returnValue278;
    panda$core$Object* $tmp279;
    int $tmp253;
    {
        int $tmp256;
        {
            $tmp258 = p_start;
            result257 = $tmp258;
            panda$core$Panda$ref$panda$core$Object($tmp258);
            $l259:;
            ITable* $tmp262 = self->$class->itable;
            while ($tmp262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp262 = $tmp262->next;
            }
            $fn264 $tmp263 = $tmp262->methods[0];
            panda$core$Bit $tmp265 = $tmp263(self);
            panda$core$Bit $tmp266 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp265);
            bool $tmp261 = $tmp266.value;
            if (!$tmp261) goto $l260;
            {
                {
                    $tmp267 = result257;
                    ITable* $tmp271 = self->$class->itable;
                    while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp271 = $tmp271->next;
                    }
                    $fn273 $tmp272 = $tmp271->methods[1];
                    panda$core$Object* $tmp274 = $tmp272(self);
                    $tmp270 = $tmp274;
                    if (p_f->target) {
                        $tmp275 = (($fn276) p_f->pointer)(p_f->target, result257, $tmp270);
                    } else {
                        $tmp275 = (($fn277) p_f->pointer)(result257, $tmp270);
                    }
                    $tmp269 = $tmp275;
                    $tmp268 = $tmp269;
                    result257 = $tmp268;
                    panda$core$Panda$ref$panda$core$Object($tmp268);
                    panda$core$Panda$unref$panda$core$Object($tmp269);
                    panda$core$Panda$unref$panda$core$Object($tmp270);
                    panda$core$Panda$unref$panda$core$Object($tmp267);
                }
            }
            goto $l259;
            $l260:;
            $tmp279 = result257;
            $returnValue278 = $tmp279;
            panda$core$Panda$ref$panda$core$Object($tmp279);
            $tmp256 = 0;
            goto $l254;
            $l280:;
            $tmp253 = 0;
            goto $l251;
            $l281:;
            return $returnValue278;
        }
        $l254:;
        panda$core$Panda$unref$panda$core$Object(result257);
        result257 = NULL;
        switch ($tmp256) {
            case 0: goto $l280;
        }
        $l283:;
    }
    $tmp253 = -1;
    goto $l251;
    $l251:;
    ITable* $tmp285 = self->$class->itable;
    while ($tmp285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp285 = $tmp285->next;
    }
    $fn287 $tmp286 = $tmp285->methods[0];
    panda$core$Bit $tmp288 = $tmp286(self);
    if ($tmp288.value) goto $l289; else goto $l290;
    $l290:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s291, (panda$core$Int64) { 214 }, &$s292);
    abort();
    $l289:;
    switch ($tmp253) {
        case -1: goto $l284;
        case 0: goto $l281;
    }
    $l284:;
    abort();
}

