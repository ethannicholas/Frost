#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$ClassDecl$GenericParameter$class_type org$frostlang$frostc$ClassDecl$GenericParameter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$ClassDecl$GenericParameter$get_asString$R$frost$core$String, org$frostlang$frostc$ClassDecl$GenericParameter$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$String* (*$fn24)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 47, -8768399383900831562, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl$GenericParameter* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, frost$core$String* param3, org$frostlang$frostc$Type* param4) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp2 = &param0->owner;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->owner;
*$tmp4 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp5 = &param0->bound;
org$frostlang$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Type** $tmp7 = &param0->bound;
*$tmp7 = param4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:30
frost$core$Int64 $tmp8 = (frost$core$Int64) {3u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from ClassDecl.frost:30:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp9 = &(&local1)->$rawValue;
*$tmp9 = $tmp8;
org$frostlang$frostc$Symbol$Kind $tmp10 = *(&local1);
*(&local0) = $tmp10;
org$frostlang$frostc$Symbol$Kind $tmp11 = *(&local0);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp11, param1, param3);
return;

}
frost$core$String* org$frostlang$frostc$ClassDecl$GenericParameter$get_asString$R$frost$core$String(org$frostlang$frostc$ClassDecl$GenericParameter* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:35
frost$core$String** $tmp12 = &param0->owner;
frost$core$String* $tmp13 = *$tmp12;
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:35:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s15);
frost$core$String** $tmp16 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp17 = *$tmp16;
frost$core$String* $tmp18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, $tmp17);
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp18, &$s20);
org$frostlang$frostc$Type** $tmp21 = &param0->bound;
org$frostlang$frostc$Type* $tmp22 = *$tmp21;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:35:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn24 $tmp23 = ($fn24) ((frost$core$Object*) $tmp22)->$class->vtable[0];
frost$core$String* $tmp25 = $tmp23(((frost$core$Object*) $tmp22));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, $tmp25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, &$s28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp27;

}
void org$frostlang$frostc$ClassDecl$GenericParameter$cleanup(org$frostlang$frostc$ClassDecl$GenericParameter* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:22
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$String** $tmp29 = &param0->owner;
frost$core$String* $tmp30 = *$tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$Type** $tmp31 = &param0->bound;
org$frostlang$frostc$Type* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
return;

}

