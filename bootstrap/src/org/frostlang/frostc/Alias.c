#include "org/frostlang/frostc/Alias.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Alias$class_type org$frostlang$frostc$Alias$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$Alias$get_asString$R$frost$core$String, org$frostlang$frostc$Alias$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$String* (*$fn20)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6c\x69\x61\x73", 26, 475752284557701908, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6c\x69\x61\x73\x28", 6, 1961570522600386317, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$Alias* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:8
frost$core$Int $tmp2 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Alias.frost:8:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp3 = &(&local1)->$rawValue;
*$tmp3 = $tmp2;
org$frostlang$frostc$Symbol$Kind $tmp4 = *(&local1);
*(&local0) = $tmp4;
org$frostlang$frostc$Symbol$Kind $tmp5 = *(&local0);
org$frostlang$frostc$Position* $tmp6 = &((org$frostlang$frostc$Symbol*) param2)->position;
org$frostlang$frostc$Position $tmp7 = *$tmp6;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp5, $tmp7, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:9
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp8 = &param0->type;
org$frostlang$frostc$Type* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$Type** $tmp10 = &param0->type;
*$tmp10 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Alias$get_asString$R$frost$core$String(org$frostlang$frostc$Alias* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:14
frost$core$String** $tmp11 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp12 = *$tmp11;
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, $tmp12);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
org$frostlang$frostc$Type** $tmp17 = &param0->type;
org$frostlang$frostc$Type* $tmp18 = *$tmp17;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Alias.frost:14:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn20 $tmp19 = ($fn20) ((frost$core$Object*) $tmp18)->$class->vtable[0];
frost$core$String* $tmp21 = $tmp19(((frost$core$Object*) $tmp18));
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, $tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp22, &$s24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp23;

}
void org$frostlang$frostc$Alias$cleanup(org$frostlang$frostc$Alias* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$Type** $tmp25 = &param0->type;
org$frostlang$frostc$Type* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
return;

}






