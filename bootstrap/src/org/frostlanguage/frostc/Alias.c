#include "org/frostlanguage/frostc/Alias.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Position.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlanguage$frostc$Alias$class_type org$frostlanguage$frostc$Alias$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlanguage$frostc$Symbol$class, NULL, { org$frostlanguage$frostc$Alias$convert$R$frost$core$String, org$frostlanguage$frostc$Alias$cleanup, org$frostlanguage$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6c\x69\x61\x73", 30, 4112321382033181276, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6c\x69\x61\x73\x28", 6, 1756024389231, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlanguage$frostc$Alias$init$frost$core$String$frost$core$String$org$frostlanguage$frostc$Position(org$frostlanguage$frostc$Alias* param0, frost$core$String* param1, frost$core$String* param2, org$frostlanguage$frostc$Position param3) {

// line 8
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Symbol$Kind $tmp3 = org$frostlanguage$frostc$Symbol$Kind$init$frost$core$Int64($tmp2);
org$frostlanguage$frostc$Symbol$init$org$frostlanguage$frostc$Symbol$Kind$org$frostlanguage$frostc$Position$frost$core$String(((org$frostlanguage$frostc$Symbol*) param0), $tmp3, param3, param1);
// line 9
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp4 = &param0->fullName;
frost$core$String* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$String** $tmp6 = &param0->fullName;
*$tmp6 = param2;
return;

}
frost$core$String* org$frostlanguage$frostc$Alias$convert$R$frost$core$String(org$frostlanguage$frostc$Alias* param0) {

// line 14
frost$core$String** $tmp7 = &((org$frostlanguage$frostc$Symbol*) param0)->name;
frost$core$String* $tmp8 = *$tmp7;
frost$core$String* $tmp9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, $tmp8);
frost$core$String* $tmp11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp9, &$s12);
frost$core$String** $tmp13 = &param0->fullName;
frost$core$String* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp11, $tmp14);
frost$core$String* $tmp16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, &$s17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($4:frost.core.String)
return $tmp16;

}
void org$frostlanguage$frostc$Alias$cleanup(org$frostlanguage$frostc$Alias* param0) {

// line 4
org$frostlanguage$frostc$Symbol$cleanup(((org$frostlanguage$frostc$Symbol*) param0));
frost$core$String** $tmp18 = &param0->fullName;
frost$core$String* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
return;

}






