#include "org/frostlanguage/frostc/Compiler/Error.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/io/File.h"
#include "org/frostlanguage/frostc/Position.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void org$frostlanguage$frostc$Compiler$Error$cleanup$shim(org$frostlanguage$frostc$Compiler$Error* p0) {
    org$frostlanguage$frostc$Compiler$Error$cleanup(p0);

}

static frost$core$String $s1;
org$frostlanguage$frostc$Compiler$Error$class_type org$frostlanguage$frostc$Compiler$Error$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Compiler$Error$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x72\x72\x6f\x72", 39, 7797481259544068373, NULL };

void org$frostlanguage$frostc$Compiler$Error$init$frost$io$File$org$frostlanguage$frostc$Position$frost$core$String(org$frostlanguage$frostc$Compiler$Error* param0, frost$io$File* param1, org$frostlanguage$frostc$Position param2, frost$core$String* param3) {

// line 70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2 = &param0->file;
frost$io$File* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$io$File** $tmp4 = &param0->file;
*$tmp4 = param1;
// line 71
org$frostlanguage$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp6 = &param0->message;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->message;
*$tmp8 = param3;
return;

}
void org$frostlanguage$frostc$Compiler$Error$cleanup(org$frostlanguage$frostc$Compiler$Error* param0) {

// line 62
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$io$File** $tmp9 = &param0->file;
frost$io$File* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$String** $tmp11 = &param0->message;
frost$core$String* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return;

}

