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
org$frostlang$frostc$StubCodeGenerator$_Closure12$class_type org$frostlang$frostc$StubCodeGenerator$_Closure12$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$_Closure12$cleanup, org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x32", 49, -4075122157118335311, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator(org$frostlang$frostc$StubCodeGenerator$_Closure12* param0, org$frostlang$frostc$StubCodeGenerator* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$StubCodeGenerator** $tmp2 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$StubCodeGenerator** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$StubCodeGenerator$_Closure12$cleanup(org$frostlang$frostc$StubCodeGenerator$_Closure12* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:191
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$StubCodeGenerator** $tmp5 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator$_Closure12* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:191
frost$core$String** $tmp7 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp8 = *$tmp7;
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:191:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String* $tmp9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp8, &$s10);
org$frostlang$frostc$StubCodeGenerator** $tmp11 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp12 = *$tmp11;
org$frostlang$frostc$Type** $tmp13 = &param1->bound;
org$frostlang$frostc$Type* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String($tmp12, $tmp14);
frost$core$String* $tmp16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp9, $tmp15);
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp16, &$s18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
return $tmp17;

}

