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

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Iterator$class_type panda$collections$Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

typedef panda$core$Bit (*$fn11)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn17)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn26)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn43)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn44)(panda$core$Object*);
typedef panda$core$Bit (*$fn118)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn129)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn142)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn172)(panda$collections$Iterator*);
typedef void (*$fn174)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn175)(panda$core$Object*);
typedef panda$core$Bit (*$fn181)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn192)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn207)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn214)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn223)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn226)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn227)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn237)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn269)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn279)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 84, 754779096528033879, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x72\x61\x6e\x67\x65\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 166, -5097776403610915651, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x72\x61\x6e\x67\x65\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 191, 2906768350535851312, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 118, -3106733264210870547, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, 4736941845026332569, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, -7677722807381227033, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, 7586548203169175042, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 7271337161154683349, NULL };

panda$core$Int64 panda$collections$Iterator$count$R$panda$core$Int64(panda$collections$Iterator* self) {
    panda$core$Int64 result5;
    panda$core$Object* $tmp14;
    panda$core$Int64 $returnValue20;
    int $tmp4;
    {
        result5 = ((panda$core$Int64) { 0 });
        $l6:;
        ITable* $tmp9 = self->$class->itable;
        while ($tmp9->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp9 = $tmp9->next;
        }
        $fn11 $tmp10 = $tmp9->methods[0];
        panda$core$Bit $tmp12 = $tmp10(self);
        panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
        bool $tmp8 = $tmp13.value;
        if (!$tmp8) goto $l7;
        {
            ITable* $tmp15 = self->$class->itable;
            while ($tmp15->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp15 = $tmp15->next;
            }
            $fn17 $tmp16 = $tmp15->methods[1];
            panda$core$Object* $tmp18 = $tmp16(self);
            $tmp14 = $tmp18;
            panda$core$Panda$unref$panda$core$Object($tmp14);
            panda$core$Int64 $tmp19 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result5, ((panda$core$Int64) { 1 }));
            result5 = $tmp19;
        }
        goto $l6;
        $l7:;
        $returnValue20 = result5;
        $tmp4 = 0;
        goto $l2;
        $l21:;
        return $returnValue20;
    }
    $l2:;
    ITable* $tmp24 = self->$class->itable;
    while ($tmp24->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp24 = $tmp24->next;
    }
    $fn26 $tmp25 = $tmp24->methods[0];
    panda$core$Bit $tmp27 = $tmp25(self);
    if ($tmp27.value) goto $l28; else goto $l29;
    $l29:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s30, (panda$core$Int64) { 120 }, &$s31);
    abort();
    $l28:;
    switch ($tmp4) {
        case 0: goto $l21;
    }
    $l23:;
    abort();
}
panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar35 = NULL;
    panda$core$MutableMethod* $tmp36;
    panda$core$Method* $tmp37;
    panda$core$Object* $tmp39;
    panda$core$Object* $tmp40;
    panda$core$Bit $returnValue41;
    panda$core$Bit $tmp42;
    int $tmp34;
    {
        panda$core$Method* $tmp38 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp38, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp37 = $tmp38;
        $tmp36 = ((panda$core$MutableMethod*) $tmp37);
        methodVar35 = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        {
            $tmp39 = methodVar35->target;
            $tmp40 = self->target;
            methodVar35->target = $tmp40;
            panda$core$Panda$ref$panda$core$Object($tmp40);
            panda$core$Panda$unref$panda$core$Object($tmp39);
        }
        if (methodVar35->target) {
            $tmp42 = (($fn43) methodVar35->pointer)(methodVar35->target, p_p0);
        } else {
            $tmp42 = (($fn44) methodVar35->pointer)(p_p0);
        }
        $returnValue41 = $tmp42;
        $tmp34 = 0;
        goto $l32;
        $l45:;
        return $returnValue41;
    }
    $l32:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar35));
    methodVar35 = NULL;
    switch ($tmp34) {
        case 0: goto $l45;
    }
    $l47:;
    abort();
}
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$MutableMethod* p_predicate) {
    panda$collections$Iterator* $returnValue48;
    panda$collections$Iterator* $tmp49;
    panda$collections$Iterator$FilterIterator* $tmp50;
    panda$collections$Iterator$FilterIterator* $tmp51 = (panda$collections$Iterator$FilterIterator*) pandaObjectAlloc(48, (panda$core$Class*) &panda$collections$Iterator$FilterIterator$class);
    panda$core$MutableMethod* $tmp52 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp52, (panda$core$Int8*) &panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit, ((panda$core$Object*) p_predicate));
    panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp51, self, ((panda$core$Object*) $tmp52));
    $tmp50 = $tmp51;
    $tmp49 = ((panda$collections$Iterator*) $tmp50);
    $returnValue48 = $tmp49;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    return $returnValue48;
}
panda$collections$Iterator* panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range) {
    panda$collections$Iterator* $returnValue69;
    panda$collections$Iterator* $tmp70;
    panda$collections$Iterator$RangeIterator* $tmp71;
    bool $tmp55 = ((panda$core$Bit) { !p_range.min.nonnull }).value;
    if ($tmp55) goto $l56;
    panda$core$Bit $tmp58 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    bool $tmp57 = $tmp58.value;
    if (!$tmp57) goto $l59;
    $tmp57 = ((panda$core$Bit) { !p_range.max.nonnull }).value;
    $l59:;
    panda$core$Bit $tmp60 = { $tmp57 };
    $tmp55 = $tmp60.value;
    $l56:;
    panda$core$Bit $tmp61 = { $tmp55 };
    bool $tmp54 = $tmp61.value;
    if ($tmp54) goto $l62;
    panda$core$Bit $tmp63 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    $tmp54 = $tmp63.value;
    $l62:;
    panda$core$Bit $tmp64 = { $tmp54 };
    if ($tmp64.value) goto $l65; else goto $l66;
    $l66:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s67, (panda$core$Int64) { 155 }, &$s68);
    abort();
    $l65:;
    panda$collections$Iterator$RangeIterator* $tmp72 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp72, self, p_range.min, p_range.max, p_range.inclusive, ((panda$core$Int64) { 1 }));
    $tmp71 = $tmp72;
    $tmp70 = ((panda$collections$Iterator*) $tmp71);
    $returnValue69 = $tmp70;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    return $returnValue69;
}
panda$collections$Iterator* panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_range) {
    panda$collections$Iterator* $returnValue93;
    panda$collections$Iterator* $tmp94;
    panda$collections$Iterator$RangeIterator* $tmp95;
    bool $tmp75 = ((panda$core$Bit) { !p_range.start.nonnull }).value;
    if ($tmp75) goto $l76;
    panda$core$Bit $tmp78 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.start.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    bool $tmp77 = $tmp78.value;
    if (!$tmp77) goto $l79;
    $tmp77 = ((panda$core$Bit) { !p_range.end.nonnull }).value;
    $l79:;
    panda$core$Bit $tmp80 = { $tmp77 };
    $tmp75 = $tmp80.value;
    $l76:;
    panda$core$Bit $tmp81 = { $tmp75 };
    bool $tmp74 = $tmp81.value;
    if ($tmp74) goto $l82;
    panda$core$Bit $tmp84 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.end.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true }).value));
    bool $tmp83 = $tmp84.value;
    if (!$tmp83) goto $l85;
    panda$core$Bit $tmp86 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_range.step, ((panda$core$Int64) { 0 }));
    $tmp83 = $tmp86.value;
    $l85:;
    panda$core$Bit $tmp87 = { $tmp83 };
    $tmp74 = $tmp87.value;
    $l82:;
    panda$core$Bit $tmp88 = { $tmp74 };
    if ($tmp88.value) goto $l89; else goto $l90;
    $l90:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s91, (panda$core$Int64) { 171 }, &$s92);
    abort();
    $l89:;
    panda$collections$Iterator$RangeIterator* $tmp96 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp96, self, p_range.start, p_range.end, p_range.inclusive, p_range.step);
    $tmp95 = $tmp96;
    $tmp94 = ((panda$collections$Iterator*) $tmp95);
    $returnValue93 = $tmp94;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
    return $returnValue93;
}
panda$collections$List* panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self) {
    panda$collections$Array* result104 = NULL;
    panda$collections$Array* $tmp105;
    panda$collections$Array* $tmp106;
    panda$collections$Iterator* Iter$182$9111 = NULL;
    panda$collections$Iterator* $tmp112;
    panda$core$Object* v124 = NULL;
    panda$core$Object* $tmp125;
    panda$core$Object* $tmp126;
    panda$collections$List* $returnValue133;
    panda$collections$List* $tmp134;
    int $tmp100;
    {
        int $tmp103;
        {
            panda$collections$Array* $tmp107 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp107);
            $tmp106 = $tmp107;
            $tmp105 = $tmp106;
            result104 = $tmp105;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
            {
                int $tmp110;
                {
                    $tmp112 = self;
                    Iter$182$9111 = $tmp112;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
                    $l113:;
                    ITable* $tmp116 = Iter$182$9111->$class->itable;
                    while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp116 = $tmp116->next;
                    }
                    $fn118 $tmp117 = $tmp116->methods[0];
                    panda$core$Bit $tmp119 = $tmp117(Iter$182$9111);
                    panda$core$Bit $tmp120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp119);
                    bool $tmp115 = $tmp120.value;
                    if (!$tmp115) goto $l114;
                    {
                        int $tmp123;
                        {
                            ITable* $tmp127 = Iter$182$9111->$class->itable;
                            while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp127 = $tmp127->next;
                            }
                            $fn129 $tmp128 = $tmp127->methods[1];
                            panda$core$Object* $tmp130 = $tmp128(Iter$182$9111);
                            $tmp126 = $tmp130;
                            $tmp125 = $tmp126;
                            v124 = $tmp125;
                            panda$core$Panda$ref$panda$core$Object($tmp125);
                            panda$core$Panda$unref$panda$core$Object($tmp126);
                            panda$collections$Array$add$panda$collections$Array$T(result104, v124);
                        }
                        $tmp123 = -1;
                        goto $l121;
                        $l121:;
                        panda$core$Panda$unref$panda$core$Object(v124);
                        v124 = NULL;
                        switch ($tmp123) {
                            case -1: goto $l131;
                        }
                        $l131:;
                    }
                    goto $l113;
                    $l114:;
                }
                $tmp110 = -1;
                goto $l108;
                $l108:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$182$9111));
                Iter$182$9111 = NULL;
                switch ($tmp110) {
                    case -1: goto $l132;
                }
                $l132:;
            }
            $tmp134 = ((panda$collections$List*) result104);
            $returnValue133 = $tmp134;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
            $tmp103 = 0;
            goto $l101;
            $l135:;
            $tmp100 = 0;
            goto $l98;
            $l136:;
            return $returnValue133;
        }
        $l101:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result104));
        result104 = NULL;
        switch ($tmp103) {
            case 0: goto $l135;
        }
        $l138:;
    }
    $tmp100 = -1;
    goto $l98;
    $l98:;
    ITable* $tmp140 = self->$class->itable;
    while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp140 = $tmp140->next;
    }
    $fn142 $tmp141 = $tmp140->methods[0];
    panda$core$Bit $tmp143 = $tmp141(self);
    if ($tmp143.value) goto $l144; else goto $l145;
    $l145:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s146, (panda$core$Int64) { 180 }, &$s147);
    abort();
    $l144:;
    switch ($tmp100) {
        case -1: goto $l139;
        case 0: goto $l136;
    }
    $l139:;
    abort();
}
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$198$9154 = NULL;
    panda$collections$Iterator* $tmp155;
    panda$core$Object* v167 = NULL;
    panda$core$Object* $tmp168;
    panda$core$Object* $tmp169;
    int $tmp150;
    {
        {
            int $tmp153;
            {
                $tmp155 = self;
                Iter$198$9154 = $tmp155;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
                $l156:;
                ITable* $tmp159 = Iter$198$9154->$class->itable;
                while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp159 = $tmp159->next;
                }
                $fn161 $tmp160 = $tmp159->methods[0];
                panda$core$Bit $tmp162 = $tmp160(Iter$198$9154);
                panda$core$Bit $tmp163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp162);
                bool $tmp158 = $tmp163.value;
                if (!$tmp158) goto $l157;
                {
                    int $tmp166;
                    {
                        ITable* $tmp170 = Iter$198$9154->$class->itable;
                        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp170 = $tmp170->next;
                        }
                        $fn172 $tmp171 = $tmp170->methods[1];
                        panda$core$Object* $tmp173 = $tmp171(Iter$198$9154);
                        $tmp169 = $tmp173;
                        $tmp168 = $tmp169;
                        v167 = $tmp168;
                        panda$core$Panda$ref$panda$core$Object($tmp168);
                        panda$core$Panda$unref$panda$core$Object($tmp169);
                        if (p_m->target) {
                            (($fn174) p_m->pointer)(p_m->target, v167);
                        } else {
                            (($fn175) p_m->pointer)(v167);
                        }
                    }
                    $tmp166 = -1;
                    goto $l164;
                    $l164:;
                    panda$core$Panda$unref$panda$core$Object(v167);
                    v167 = NULL;
                    switch ($tmp166) {
                        case -1: goto $l176;
                    }
                    $l176:;
                }
                goto $l156;
                $l157:;
            }
            $tmp153 = -1;
            goto $l151;
            $l151:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$198$9154));
            Iter$198$9154 = NULL;
            switch ($tmp153) {
                case -1: goto $l177;
            }
            $l177:;
        }
    }
    $tmp150 = -1;
    goto $l148;
    $l148:;
    ITable* $tmp179 = self->$class->itable;
    while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp179 = $tmp179->next;
    }
    $fn181 $tmp180 = $tmp179->methods[0];
    panda$core$Bit $tmp182 = $tmp180(self);
    if ($tmp182.value) goto $l183; else goto $l184;
    $l184:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s185, (panda$core$Int64) { 197 }, &$s186);
    abort();
    $l183:;
    switch ($tmp150) {
        case -1: goto $l178;
    }
    $l178:;
}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f) {
    panda$core$Object* result202 = NULL;
    panda$core$Object* $tmp203;
    panda$core$Object* $tmp204;
    panda$core$Object* $tmp217;
    panda$core$Object* $tmp218;
    panda$core$Object* $tmp219;
    panda$core$Object* $tmp220;
    panda$core$Object* $tmp225;
    panda$core$Object* $returnValue228;
    panda$core$Object* $tmp229;
    int $tmp189;
    {
        ITable* $tmp190 = self->$class->itable;
        while ($tmp190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp190 = $tmp190->next;
        }
        $fn192 $tmp191 = $tmp190->methods[0];
        panda$core$Bit $tmp193 = $tmp191(self);
        panda$core$Bit $tmp194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp193);
        if ($tmp194.value) goto $l195; else goto $l196;
        $l196:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s197, (panda$core$Int64) { 205 }, &$s198);
        abort();
        $l195:;
        int $tmp201;
        {
            ITable* $tmp205 = self->$class->itable;
            while ($tmp205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp205 = $tmp205->next;
            }
            $fn207 $tmp206 = $tmp205->methods[1];
            panda$core$Object* $tmp208 = $tmp206(self);
            $tmp204 = $tmp208;
            $tmp203 = $tmp204;
            result202 = $tmp203;
            panda$core$Panda$ref$panda$core$Object($tmp203);
            panda$core$Panda$unref$panda$core$Object($tmp204);
            $l209:;
            ITable* $tmp212 = self->$class->itable;
            while ($tmp212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp212 = $tmp212->next;
            }
            $fn214 $tmp213 = $tmp212->methods[0];
            panda$core$Bit $tmp215 = $tmp213(self);
            panda$core$Bit $tmp216 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp215);
            bool $tmp211 = $tmp216.value;
            if (!$tmp211) goto $l210;
            {
                {
                    $tmp217 = result202;
                    ITable* $tmp221 = self->$class->itable;
                    while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp221 = $tmp221->next;
                    }
                    $fn223 $tmp222 = $tmp221->methods[1];
                    panda$core$Object* $tmp224 = $tmp222(self);
                    $tmp220 = $tmp224;
                    if (p_f->target) {
                        $tmp225 = (($fn226) p_f->pointer)(p_f->target, result202, $tmp220);
                    } else {
                        $tmp225 = (($fn227) p_f->pointer)(result202, $tmp220);
                    }
                    $tmp219 = $tmp225;
                    $tmp218 = $tmp219;
                    result202 = $tmp218;
                    panda$core$Panda$ref$panda$core$Object($tmp218);
                    panda$core$Panda$unref$panda$core$Object($tmp219);
                    panda$core$Panda$unref$panda$core$Object($tmp220);
                    panda$core$Panda$unref$panda$core$Object($tmp217);
                }
            }
            goto $l209;
            $l210:;
            $tmp229 = result202;
            $returnValue228 = $tmp229;
            panda$core$Panda$ref$panda$core$Object($tmp229);
            $tmp201 = 0;
            goto $l199;
            $l230:;
            $tmp189 = 0;
            goto $l187;
            $l231:;
            return $returnValue228;
        }
        $l199:;
        panda$core$Panda$unref$panda$core$Object(result202);
        result202 = NULL;
        switch ($tmp201) {
            case 0: goto $l230;
        }
        $l233:;
    }
    $tmp189 = -1;
    goto $l187;
    $l187:;
    ITable* $tmp235 = self->$class->itable;
    while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp235 = $tmp235->next;
    }
    $fn237 $tmp236 = $tmp235->methods[0];
    panda$core$Bit $tmp238 = $tmp236(self);
    if ($tmp238.value) goto $l239; else goto $l240;
    $l240:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s241, (panda$core$Int64) { 205 }, &$s242);
    abort();
    $l239:;
    switch ($tmp189) {
        case 0: goto $l231;
        case -1: goto $l234;
    }
    $l234:;
    abort();
}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result249 = NULL;
    panda$core$Object* $tmp250;
    panda$core$Object* $tmp259;
    panda$core$Object* $tmp260;
    panda$core$Object* $tmp261;
    panda$core$Object* $tmp262;
    panda$core$Object* $tmp267;
    panda$core$Object* $returnValue270;
    panda$core$Object* $tmp271;
    int $tmp245;
    {
        int $tmp248;
        {
            $tmp250 = p_start;
            result249 = $tmp250;
            panda$core$Panda$ref$panda$core$Object($tmp250);
            $l251:;
            ITable* $tmp254 = self->$class->itable;
            while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp254 = $tmp254->next;
            }
            $fn256 $tmp255 = $tmp254->methods[0];
            panda$core$Bit $tmp257 = $tmp255(self);
            panda$core$Bit $tmp258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp257);
            bool $tmp253 = $tmp258.value;
            if (!$tmp253) goto $l252;
            {
                {
                    $tmp259 = result249;
                    ITable* $tmp263 = self->$class->itable;
                    while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp263 = $tmp263->next;
                    }
                    $fn265 $tmp264 = $tmp263->methods[1];
                    panda$core$Object* $tmp266 = $tmp264(self);
                    $tmp262 = $tmp266;
                    if (p_f->target) {
                        $tmp267 = (($fn268) p_f->pointer)(p_f->target, result249, $tmp262);
                    } else {
                        $tmp267 = (($fn269) p_f->pointer)(result249, $tmp262);
                    }
                    $tmp261 = $tmp267;
                    $tmp260 = $tmp261;
                    result249 = $tmp260;
                    panda$core$Panda$ref$panda$core$Object($tmp260);
                    panda$core$Panda$unref$panda$core$Object($tmp261);
                    panda$core$Panda$unref$panda$core$Object($tmp262);
                    panda$core$Panda$unref$panda$core$Object($tmp259);
                }
            }
            goto $l251;
            $l252:;
            $tmp271 = result249;
            $returnValue270 = $tmp271;
            panda$core$Panda$ref$panda$core$Object($tmp271);
            $tmp248 = 0;
            goto $l246;
            $l272:;
            $tmp245 = 0;
            goto $l243;
            $l273:;
            return $returnValue270;
        }
        $l246:;
        panda$core$Panda$unref$panda$core$Object(result249);
        result249 = NULL;
        switch ($tmp248) {
            case 0: goto $l272;
        }
        $l275:;
    }
    $tmp245 = -1;
    goto $l243;
    $l243:;
    ITable* $tmp277 = self->$class->itable;
    while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp277 = $tmp277->next;
    }
    $fn279 $tmp278 = $tmp277->methods[0];
    panda$core$Bit $tmp280 = $tmp278(self);
    if ($tmp280.value) goto $l281; else goto $l282;
    $l282:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s283, (panda$core$Int64) { 214 }, &$s284);
    abort();
    $l281:;
    switch ($tmp245) {
        case -1: goto $l276;
        case 0: goto $l273;
    }
    $l276:;
    abort();
}

