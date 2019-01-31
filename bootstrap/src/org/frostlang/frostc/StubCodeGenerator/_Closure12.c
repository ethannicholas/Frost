#include "org/frostlang/frostc/StubCodeGenerator/_Closure12.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$StubCodeGenerator$_Closure12$class_type org$frostlang$frostc$StubCodeGenerator$_Closure12$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$_Closure12$cleanup, org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x32", 49, -2952568610858458563, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator(org$frostlang$frostc$StubCodeGenerator$_Closure12* param0, org$frostlang$frostc$StubCodeGenerator* param1) {

// line 182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$StubCodeGenerator** $tmp2 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$StubCodeGenerator** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$StubCodeGenerator$_Closure12$cleanup(org$frostlang$frostc$StubCodeGenerator$_Closure12* param0) {

// line 182
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$StubCodeGenerator** $tmp5 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator$_Closure12* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

// line 182
frost$core$String** $tmp7 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp8 = *$tmp7;
frost$core$String* $tmp9 = frost$core$String$get_asString$R$frost$core$String($tmp8);
frost$core$String* $tmp10 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp9, &$s11);
org$frostlang$frostc$StubCodeGenerator** $tmp12 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp13 = *$tmp12;
org$frostlang$frostc$Type** $tmp14 = &param1->bound;
org$frostlang$frostc$Type* $tmp15 = *$tmp14;
frost$core$String* $tmp16 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String($tmp13, $tmp15);
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp10, $tmp16);
frost$core$String* $tmp18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
return $tmp18;

}

