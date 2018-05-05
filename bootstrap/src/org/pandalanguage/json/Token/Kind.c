#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

void org$pandalanguage$json$Token$Kind$cleanup$wrappershim(org$pandalanguage$json$Token$Kind$wrapper* self) {
    org$pandalanguage$json$Token$Kind$cleanup(self->value);
}

static panda$core$String $s1;
org$pandalanguage$json$Token$Kind$class_type org$pandalanguage$json$Token$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$json$Token$Kind$cleanup} };

static panda$core$String $s2;
org$pandalanguage$json$Token$Kind$wrapperclass_type org$pandalanguage$json$Token$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$json$Token$Kind$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 33, -5705683905561359418, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 33, -5705683905561359418, NULL };

void org$pandalanguage$json$Token$Kind$init$panda$core$Int64(org$pandalanguage$json$Token$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
void org$pandalanguage$json$Token$Kind$cleanup(org$pandalanguage$json$Token$Kind self) {
    org$pandalanguage$json$Token$Kind $match$10_53;
    {
        $match$10_53 = self;
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp4.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp5.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp6.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp7.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp8.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp9.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp10.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp11.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp12.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp13.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp14.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp15.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp16.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp17.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10_53.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp18.value) {
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

