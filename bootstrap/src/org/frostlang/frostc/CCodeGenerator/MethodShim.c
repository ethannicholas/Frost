#include "org/frostlang/frostc/CCodeGenerator/MethodShim.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$MethodShim$class_type org$frostlang$frostc$CCodeGenerator$MethodShim$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$MethodShim$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 46, 8367062381160596545, NULL };

void org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$MethodShim* param0, frost$core$String* param1, frost$core$String* param2) {

// line 175
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->name;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->name;
*$tmp4 = param1;
// line 176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp5 = &param0->type;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->type;
*$tmp7 = param2;
return;

}
void org$frostlang$frostc$CCodeGenerator$MethodShim$cleanup(org$frostlang$frostc$CCodeGenerator$MethodShim* param0) {

// line 170
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp8 = &param0->name;
frost$core$String* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$String** $tmp10 = &param0->type;
frost$core$String* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}

