#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/Position.h"

__attribute__((weak)) void org$frostlang$frostc$parser$Token$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$parser$Token$cleanup(((org$frostlang$frostc$parser$Token$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$frostc$parser$Token$class_type org$frostlang$frostc$parser$Token$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$parser$Token$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$frostc$parser$Token$wrapperclass_type org$frostlang$frostc$parser$Token$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$parser$Token$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 33, 3663597672898647980, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 33, 3663597672898647980, NULL };

org$frostlang$frostc$parser$Token org$frostlang$frostc$parser$Token$init$org$frostlang$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position(org$frostlang$frostc$parser$Token$Kind param0, frost$core$String$Index param1, frost$core$String$Index param2, org$frostlang$frostc$Position param3) {

org$frostlang$frostc$parser$Token local0;
// line 244
org$frostlang$frostc$parser$Token$Kind* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// line 245
frost$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// line 246
frost$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// line 247
org$frostlang$frostc$Position* $tmp6 = &(&local0)->position;
*$tmp6 = param3;
org$frostlang$frostc$parser$Token $tmp7 = *(&local0);
return $tmp7;

}
void org$frostlang$frostc$parser$Token$cleanup(org$frostlang$frostc$parser$Token param0) {

return;

}

