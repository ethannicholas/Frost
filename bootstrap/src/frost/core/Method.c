#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$String* frost$core$Method$get_asString$R$frost$core$String$shim(frost$core$Method* p0) {
    frost$core$String* result = frost$core$Method$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$Method$cleanup$shim(frost$core$Method* p0) {
    frost$core$Method$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Method$class_type frost$core$Method$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Method$get_asString$R$frost$core$String$shim, frost$core$Method$cleanup$shim} };

typedef frost$core$String* (*$fn25)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -8906398027139702963, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, -4865483885953839548, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 12, 2855817337293479608, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 79, -6934508872711881313, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, -4865483885953839548, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

void frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q(frost$core$Method* param0, frost$core$Int8* param1, frost$core$Immutable* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Immutable** $tmp3 = &param0->target;
frost$core$Immutable* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Immutable** $tmp5 = &param0->target;
*$tmp5 = param2;
return;

}
frost$core$String* frost$core$Method$get_asString$R$frost$core$String(frost$core$Method* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:43
frost$core$Immutable** $tmp6 = &param0->target;
frost$core$Immutable* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:44
frost$core$Int8** $tmp10 = &param0->pointer;
frost$core$Int8* $tmp11 = *$tmp10;
frost$core$String* $tmp12 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp11));
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, $tmp12);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
frost$core$Immutable** $tmp17 = &param0->target;
frost$core$Immutable* $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18 != NULL};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block3; else goto block4;
block4:;
frost$core$Int $tmp21 = (frost$core$Int) {44u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block3:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Method.frost:44:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn25 $tmp24 = ($fn25) ((frost$core$Object*) $tmp18)->$class->vtable[0];
frost$core$String* $tmp26 = $tmp24(((frost$core$Object*) $tmp18));
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, $tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s29);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return $tmp28;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:46
frost$core$Int8** $tmp30 = &param0->pointer;
frost$core$Int8* $tmp31 = *$tmp30;
frost$core$String* $tmp32 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp31));
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s34, $tmp32);
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp33, &$s36);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
return $tmp35;

}
void frost$core$Method$cleanup(frost$core$Method* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:7
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$Immutable** $tmp37 = &param0->target;
frost$core$Immutable* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return;

}






