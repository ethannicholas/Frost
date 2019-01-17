#include "frost/core/Error.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$core$Error$class_type frost$core$Error$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Error$convert$R$frost$core$String, frost$core$Error$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void frost$core$Error$init$frost$core$String(frost$core$Error* param0, frost$core$String* param1) {

// line 16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->message;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->message;
*$tmp4 = param1;
return;

}
frost$core$String* frost$core$Error$convert$R$frost$core$String(frost$core$Error* param0) {

// line 21
frost$core$String** $tmp5 = &param0->message;
frost$core$String* $tmp6 = *$tmp5;
frost$core$String* $tmp7 = frost$core$String$convert$R$frost$core$String($tmp6);
frost$core$String* $tmp8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp7, &$s9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($3:frost.core.String)
return $tmp8;

}
void frost$core$Error$cleanup(frost$core$Error* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp10 = &param0->message;
frost$core$String* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}






