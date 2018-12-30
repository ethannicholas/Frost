#include "org/pandalanguage/pandac/IR/Statement/ID.h" // writeImport org.pandalanguage.pandac.IR.Statement.ID
#include "panda/core/Value.h" // writeImport panda.core.Value
#include "panda/core/Class.h" // writeImport panda.core.Class
#include "panda/core/String.h" // writeImport panda.core.String
#include "panda/collections/Key.h" // writeImport panda.collections.Key
#include "panda/core/Int64.h" // writeImport panda.core.Int64
#include "panda/core/Object.h" // writeImport panda.core.Object
#include "panda/core/Equatable.h" // writeImport panda.core.Equatable
#include "panda/core/Bit.h" // writeImport panda.core.Bit
#include "panda/core/Panda.h" // writeImport panda.core.Panda

__attribute__((weak)) panda$core$Int64 org$pandalanguage$pandac$IR$Statement$ID$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = org$pandalanguage$pandac$IR$Statement$ID$get_hash$R$panda$core$Int64(((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit(((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) p0)->value, ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* org$pandalanguage$pandac$IR$Statement$ID$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$pandac$IR$Statement$ID$convert$R$panda$core$String(((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$IR$Statement$ID$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$IR$Statement$ID$cleanup(((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$IR$Statement$ID$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$IR$Statement$ID$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$IR$Statement$ID$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$IR$Statement$ID$_panda$collections$Key, { org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$IR$Statement$ID$class_type org$pandalanguage$pandac$IR$Statement$ID$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$IR$Statement$ID$_panda$core$Equatable, { org$pandalanguage$pandac$IR$Statement$ID$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$IR$Statement$ID$get_hash$R$panda$core$Int64$shim, org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit$shim, org$pandalanguage$pandac$IR$Statement$ID$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } org$pandalanguage$pandac$IR$Statement$ID$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$IR$Statement$ID$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$IR$Statement$ID$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$IR$Statement$ID$wrapper_panda$collections$Key, { org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$IR$Statement$ID$wrapperclass_type org$pandalanguage$pandac$IR$Statement$ID$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$IR$Statement$ID$wrapper_panda$core$Equatable, { org$pandalanguage$pandac$IR$Statement$ID$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 40, -6561295979793002529, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 40, -6561295979793002529, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

org$pandalanguage$pandac$IR$Statement$ID org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$IR$Statement$ID local0;
// line 153
panda$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
org$pandalanguage$pandac$IR$Statement$ID $tmp4 = *(&local0);
return $tmp4;

}
panda$core$Int64 org$pandalanguage$pandac$IR$Statement$ID$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$IR$Statement$ID param0) {

// line 158
panda$core$Int64 $tmp5 = param0.value;
return $tmp5;

}
panda$core$Bit org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit(org$pandalanguage$pandac$IR$Statement$ID param0, org$pandalanguage$pandac$IR$Statement$ID param1) {

// line 163
panda$core$Int64 $tmp6 = param0.value;
panda$core$Int64 $tmp7 = param1.value;
panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6, $tmp7);
return $tmp8;

}
panda$core$String* org$pandalanguage$pandac$IR$Statement$ID$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Statement$ID param0) {

// line 168
panda$core$Int64 $tmp9 = param0.value;
panda$core$Int64$wrapper* $tmp10;
$tmp10 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp10->value = $tmp9;
panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s12, ((panda$core$Object*) $tmp10));
panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
return $tmp13;

}
void org$pandalanguage$pandac$IR$Statement$ID$cleanup(org$pandalanguage$pandac$IR$Statement$ID param0) {

return;

}

