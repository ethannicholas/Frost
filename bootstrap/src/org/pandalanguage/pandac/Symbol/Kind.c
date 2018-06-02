#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
__attribute__((weak)) void org$pandalanguage$pandac$Symbol$Kind$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$Symbol$Kind$cleanup(((org$pandalanguage$pandac$Symbol$Kind$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$pandac$Symbol$Kind$class_type org$pandalanguage$pandac$Symbol$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Symbol$Kind$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$pandac$Symbol$Kind$wrapperclass_type org$pandalanguage$pandac$Symbol$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Symbol$Kind$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 36, 889716255337128908, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x2e\x4b\x69\x6e\x64", 36, 889716255337128908, NULL };

void org$pandalanguage$pandac$Symbol$Kind$cleanup(org$pandalanguage$pandac$Symbol$Kind self) {
    org$pandalanguage$pandac$Symbol$Kind $match$4_53;
    panda$core$Int64 $tmp4;
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp8;
    panda$core$Int64 $tmp10;
    panda$core$Int64 $tmp12;
    panda$core$Int64 $tmp14;
    panda$core$Int64 $tmp16;
    panda$core$Int64 $tmp18;
    panda$core$Int64 $tmp20;
    {
        $match$4_53 = self;
        panda$core$Int64$init$builtin_int64(&$tmp4, 0);
        panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp4);
        if ($tmp5.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp6, 1);
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp6);
        if ($tmp7.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp8, 2);
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp8);
        if ($tmp9.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp10, 3);
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp10);
        if ($tmp11.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp12, 4);
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp12);
        if ($tmp13.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp14, 5);
        panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp14);
        if ($tmp15.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp16, 6);
        panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp16);
        if ($tmp17.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp18, 7);
        panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp18);
        if ($tmp19.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp20, 8);
        panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4_53.$rawValue, $tmp20);
        if ($tmp21.value) {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(org$pandalanguage$pandac$Symbol$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}





