#include "org/frostlang/frostc/Alias.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Alias$class_type org$frostlang$frostc$Alias$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$Alias$get_asString$R$frost$core$String, org$frostlang$frostc$Alias$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6c\x69\x61\x73", 26, 7718505657240452898, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6c\x69\x61\x73\x28", 6, 1756024389231, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$Alias* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2) {

// line 8
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Symbol$Kind $tmp3 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp2);
org$frostlang$frostc$Position* $tmp4 = &((org$frostlang$frostc$Symbol*) param2)->position;
org$frostlang$frostc$Position $tmp5 = *$tmp4;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp3, $tmp5, param1);
// line 9
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp6 = &param0->type;
org$frostlang$frostc$Type* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$Type** $tmp8 = &param0->type;
*$tmp8 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Alias$get_asString$R$frost$core$String(org$frostlang$frostc$Alias* param0) {

// line 14
frost$core$String** $tmp9 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp10 = *$tmp9;
frost$core$String* $tmp11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s12, $tmp10);
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp11, &$s14);
org$frostlang$frostc$Type** $tmp15 = &param0->type;
org$frostlang$frostc$Type* $tmp16 = *$tmp15;
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp13, ((frost$core$Object*) $tmp16));
frost$core$String* $tmp18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($4:frost.core.String)
return $tmp18;

}
void org$frostlang$frostc$Alias$cleanup(org$frostlang$frostc$Alias* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$Type** $tmp20 = &param0->type;
org$frostlang$frostc$Type* $tmp21 = *$tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
return;

}






