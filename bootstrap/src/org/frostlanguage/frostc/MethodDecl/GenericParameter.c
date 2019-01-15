#include "org/frostlanguage/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"


static frost$core$String $s1;
org$frostlanguage$frostc$MethodDecl$GenericParameter$class_type org$frostlanguage$frostc$MethodDecl$GenericParameter$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlanguage$frostc$Symbol$class, NULL, { org$frostlanguage$frostc$MethodDecl$GenericParameter$convert$R$frost$core$String, org$frostlanguage$frostc$MethodDecl$GenericParameter$cleanup, org$frostlanguage$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 52, 3618293986766921219, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlanguage$frostc$MethodDecl$GenericParameter$init$org$frostlanguage$frostc$Position$frost$core$String$frost$core$String$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodDecl$GenericParameter* param0, org$frostlanguage$frostc$Position param1, frost$core$String* param2, frost$core$String* param3, org$frostlanguage$frostc$Type* param4) {

// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp2 = &param0->owner;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->owner;
*$tmp4 = param2;
// line 39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlanguage$frostc$Type** $tmp5 = &param0->bound;
org$frostlanguage$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlanguage$frostc$Type** $tmp7 = &param0->bound;
*$tmp7 = param4;
// line 40
frost$core$Int64 $tmp8 = (frost$core$Int64) {4};
org$frostlanguage$frostc$Symbol$Kind $tmp9 = org$frostlanguage$frostc$Symbol$Kind$init$frost$core$Int64($tmp8);
org$frostlanguage$frostc$Symbol$init$org$frostlanguage$frostc$Symbol$Kind$org$frostlanguage$frostc$Position$frost$core$String(((org$frostlanguage$frostc$Symbol*) param0), $tmp9, param1, param3);
return;

}
frost$core$String* org$frostlanguage$frostc$MethodDecl$GenericParameter$convert$R$frost$core$String(org$frostlanguage$frostc$MethodDecl$GenericParameter* param0) {

// line 45
frost$core$String** $tmp10 = &param0->owner;
frost$core$String* $tmp11 = *$tmp10;
frost$core$String* $tmp12 = frost$core$String$convert$R$frost$core$String($tmp11);
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp12, &$s14);
frost$core$String** $tmp15 = &((org$frostlanguage$frostc$Symbol*) param0)->name;
frost$core$String* $tmp16 = *$tmp15;
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, $tmp16);
frost$core$String* $tmp18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s19);
org$frostlanguage$frostc$Type** $tmp20 = &param0->bound;
org$frostlanguage$frostc$Type* $tmp21 = *$tmp20;
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp18, ((frost$core$Object*) $tmp21));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp22, &$s24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($3:frost.core.String)
return $tmp23;

}
void org$frostlanguage$frostc$MethodDecl$GenericParameter$cleanup(org$frostlanguage$frostc$MethodDecl$GenericParameter* param0) {

// line 32
org$frostlanguage$frostc$Symbol$cleanup(((org$frostlanguage$frostc$Symbol*) param0));
frost$core$String** $tmp25 = &param0->owner;
frost$core$String* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlanguage$frostc$Type** $tmp27 = &param0->bound;
org$frostlanguage$frostc$Type* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
return;

}






