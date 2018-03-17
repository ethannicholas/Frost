#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

void org$pandalanguage$pandac$parser$Token$Kind$cleanup$wrappershim(org$pandalanguage$pandac$parser$Token$Kind$wrapper* self) {
    org$pandalanguage$pandac$parser$Token$Kind$cleanup(self->value);
}

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Token$Kind$class_type org$pandalanguage$pandac$parser$Token$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Token$Kind$cleanup} };

static panda$core$String $s2;
org$pandalanguage$pandac$parser$Token$Kind$wrapperclass_type org$pandalanguage$pandac$parser$Token$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Token$Kind$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 42, -5886139380304636838, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 42, -5886139380304636838, NULL };

void org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(org$pandalanguage$pandac$parser$Token$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
void org$pandalanguage$pandac$parser$Token$Kind$cleanup(org$pandalanguage$pandac$parser$Token$Kind self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$7_53;
    {
        $match$7_53 = self;
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp4.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp5.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp6.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp7.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp8.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp9.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp10.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp11.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp12.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp13.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp14.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp15.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp16.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp17.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp18.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp19.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp20.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp21.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp22.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp23.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp24.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp25.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp26.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp27.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp28.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp29.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp30.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp31.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp32.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp33.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp34.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp35.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp36.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp37.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp38.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp39.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp40.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp41.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp42.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp43.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp44.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp45.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp46.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp47.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp48.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp49.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp50.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp51.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp52.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp53.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp54.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp55.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp56.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp57.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp58.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp59.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp60.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 57 }));
        if ($tmp61.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp62.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp63.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp64.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp65.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp66.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp67.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp68.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp69.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp70.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp71.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp72.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp73.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 70 }));
        if ($tmp74.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 71 }));
        if ($tmp75.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp76.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 73 }));
        if ($tmp77.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 74 }));
        if ($tmp78.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 75 }));
        if ($tmp79.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 76 }));
        if ($tmp80.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 77 }));
        if ($tmp81.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 78 }));
        if ($tmp82.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 79 }));
        if ($tmp83.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp84 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 80 }));
        if ($tmp84.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 81 }));
        if ($tmp85.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp86 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 82 }));
        if ($tmp86.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 83 }));
        if ($tmp87.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 84 }));
        if ($tmp88.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 85 }));
        if ($tmp89.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 86 }));
        if ($tmp90.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 87 }));
        if ($tmp91.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 88 }));
        if ($tmp92.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 89 }));
        if ($tmp93.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 90 }));
        if ($tmp94.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 91 }));
        if ($tmp95.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 92 }));
        if ($tmp96.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 93 }));
        if ($tmp97.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 94 }));
        if ($tmp98.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp99.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 96 }));
        if ($tmp100.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 97 }));
        if ($tmp101.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 98 }));
        if ($tmp102.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp103.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 100 }));
        if ($tmp104.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp105.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 102 }));
        if ($tmp106.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp107.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp108.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 105 }));
        if ($tmp109.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 106 }));
        if ($tmp110.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_53.$rawValue, ((panda$core$Int64) { 107 }));
        if ($tmp111.value) {
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
        }
    }
}

