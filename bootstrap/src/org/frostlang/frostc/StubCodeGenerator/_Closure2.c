#include "org/frostlang/frostc/StubCodeGenerator/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$StubCodeGenerator$_Closure2$class_type org$frostlang$frostc$StubCodeGenerator$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$_Closure2$cleanup, org$frostlang$frostc$StubCodeGenerator$_Closure2$$anonymous1$org$frostlang$frostc$Type$R$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, -5873746326431327824, NULL };

void org$frostlang$frostc$StubCodeGenerator$_Closure2$init$org$frostlang$frostc$StubCodeGenerator(org$frostlang$frostc$StubCodeGenerator$_Closure2* param0, org$frostlang$frostc$StubCodeGenerator* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$StubCodeGenerator** $tmp2 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$StubCodeGenerator** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$StubCodeGenerator$_Closure2$cleanup(org$frostlang$frostc$StubCodeGenerator$_Closure2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$StubCodeGenerator** $tmp5 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$_Closure2$$anonymous1$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator$_Closure2* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
org$frostlang$frostc$StubCodeGenerator** $tmp7 = &param0->$self;
org$frostlang$frostc$StubCodeGenerator* $tmp8 = *$tmp7;
frost$core$String* $tmp9 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String($tmp8, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
return $tmp9;

}






