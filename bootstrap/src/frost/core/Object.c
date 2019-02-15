#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$core$Object$class_type frost$core$Object$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, NULL, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -3731481016707133325, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

frost$core$String* frost$core$Object$get_asString$R$frost$core$String(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Object.frost:25
frost$core$Class** $tmp2 = &param0->$class;
frost$core$Class* $tmp3 = *$tmp2;
frost$core$String** $tmp4 = &$tmp3->name;
frost$core$String* $tmp5 = *$tmp4;
frost$core$String* $tmp6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s7, $tmp5);
frost$core$String* $tmp8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6, &$s9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return $tmp8;

}
void frost$core$Object$cleanup(frost$core$Object* param0) {

frost$core$Class** $tmp10 = &param0->$class;
frost$core$Class* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}
void frost$core$Object$init(frost$core$Object* param0) {

return;

}






