#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Symbol/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$ChoiceCase$class_type org$frostlang$frostc$ChoiceCase$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String, org$frostlang$frostc$ChoiceCase$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 31, 2916299888878715327, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$ChoiceCase* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, frost$core$Int64 param5, frost$collections$ListView* param6) {

// line 15
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp2, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->initMethod;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->initMethod;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.MethodDecl?>)
// line 17
frost$core$Int64 $tmp6 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp7 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp6);
org$frostlang$frostc$Compiler$Resolution* $tmp8 = &param0->resolved;
*$tmp8 = $tmp7;
// line 21
frost$core$Weak* $tmp9 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp9, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->owner;
frost$core$Weak* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Weak** $tmp12 = &param0->owner;
*$tmp12 = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($22:frost.core.Weak<org.frostlang.frostc.ClassDecl>)
// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp13 = &param0->doccomment;
frost$core$String* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String** $tmp15 = &param0->doccomment;
*$tmp15 = param4;
// line 23
frost$core$Int64* $tmp16 = &param0->rawValue;
*$tmp16 = param5;
// line 24
frost$collections$Array* $tmp17 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp17, param6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$collections$Array** $tmp18 = &param0->fields;
frost$collections$Array* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$collections$Array** $tmp20 = &param0->fields;
*$tmp20 = $tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($50:frost.collections.Array<org.frostlang.frostc.Type>)
// line 25
frost$core$Int64 $tmp21 = (frost$core$Int64) {1};
org$frostlang$frostc$Symbol$Kind $tmp22 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp21);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp22, param2, param3);
return;

}
frost$core$String* org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String(org$frostlang$frostc$ChoiceCase* param0) {

// line 30
frost$core$Weak** $tmp23 = &param0->owner;
frost$core$Weak* $tmp24 = *$tmp23;
frost$core$Object* $tmp25 = frost$core$Weak$get$R$frost$core$Weak$T($tmp24);
frost$core$String** $tmp26 = &((org$frostlang$frostc$ClassDecl*) $tmp25)->name;
frost$core$String* $tmp27 = *$tmp26;
frost$core$String* $tmp28 = frost$core$String$get_asString$R$frost$core$String($tmp27);
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp28, &$s30);
frost$core$String** $tmp31 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp32 = *$tmp31;
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp29, $tmp32);
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp33, &$s35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp25);
// unreffing REF($4:frost.core.Weak.T)
return $tmp34;

}
void org$frostlang$frostc$ChoiceCase$cleanup(org$frostlang$frostc$ChoiceCase* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp36 = &param0->owner;
frost$core$Weak* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$String** $tmp38 = &param0->doccomment;
frost$core$String* $tmp39 = *$tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$collections$Array** $tmp40 = &param0->fields;
frost$collections$Array* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Weak** $tmp42 = &param0->initMethod;
frost$core$Weak* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
return;

}






