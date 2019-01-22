#include "frost/io/Console.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"


static frost$core$String $s1;
frost$io$Console$class_type frost$io$Console$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$Console$cleanup} };

typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2730678735001696262, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void frost$io$Console$init(frost$io$Console* param0) {

return;

}
void frost$io$Console$printLine$frost$core$String(frost$core$String* param0) {

// line 45
frost$io$Console$print$frost$core$String(param0);
// line 46
frost$io$Console$printLine();
return;

}
void frost$io$Console$print$frost$core$Object(frost$core$Object* param0) {

// line 54
$fn3 $tmp2 = ($fn3) param0->$class->vtable[0];
frost$core$String* $tmp4 = $tmp2(param0);
frost$io$Console$print$frost$core$String($tmp4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
return;

}
void frost$io$Console$printLine$frost$core$Object(frost$core$Object* param0) {

// line 62
$fn6 $tmp5 = ($fn6) param0->$class->vtable[0];
frost$core$String* $tmp7 = $tmp5(param0);
frost$io$Console$printLine$frost$core$String($tmp7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
return;

}
void frost$io$Console$printLine() {

// line 70
frost$io$Console$print$frost$core$String(&$s8);
return;

}
void frost$io$Console$printErrorLine$frost$core$String(frost$core$String* param0) {

// line 85
frost$io$Console$printError$frost$core$String(param0);
// line 86
frost$io$Console$printErrorLine();
return;

}
void frost$io$Console$printError$frost$core$Object(frost$core$Object* param0) {

// line 94
$fn10 $tmp9 = ($fn10) param0->$class->vtable[0];
frost$core$String* $tmp11 = $tmp9(param0);
frost$io$Console$printError$frost$core$String($tmp11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}
void frost$io$Console$printErrorLine$frost$core$Object(frost$core$Object* param0) {

// line 102
$fn13 $tmp12 = ($fn13) param0->$class->vtable[0];
frost$core$String* $tmp14 = $tmp12(param0);
frost$io$Console$printErrorLine$frost$core$String($tmp14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
return;

}
void frost$io$Console$printErrorLine() {

// line 110
frost$io$Console$printError$frost$core$String(&$s15);
return;

}
frost$core$String* frost$io$Console$readLine$R$frost$core$String$Q() {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
// line 127
frost$core$MutableString* $tmp16 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp16);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$MutableString* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 128
goto block1;
block1:;
// line 129
frost$core$Char8$nullable $tmp18;
frost$io$Console$read$R$frost$core$Char8$Q(&$tmp18);
*(&local1) = $tmp18;
// line 130
frost$core$Char8$nullable $tmp19 = *(&local1);
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(!$tmp19.nonnull);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block4;
block3:;
// line 131
frost$core$MutableString* $tmp22 = *(&local0);
frost$core$Int64* $tmp23 = &$tmp22->_length;
frost$core$Int64 $tmp24 = *$tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {0};
frost$core$Bit $tmp26 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// line 132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// line 134
goto block2;
block4:;
// line 136
frost$core$Char8$nullable $tmp29 = *(&local1);
frost$core$UInt8 $tmp30 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp31 = frost$core$Char8$init$frost$core$UInt8($tmp30);
frost$core$Bit $tmp32 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8) $tmp29.value), $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block7; else goto block8;
block7:;
// line 137
goto block2;
block8:;
// line 139
frost$core$MutableString* $tmp34 = *(&local0);
frost$core$Char8$nullable $tmp35 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp34, ((frost$core$Char8) $tmp35.value));
goto block1;
block2:;
// line 141
frost$core$MutableString* $tmp36 = *(&local0);
frost$core$String* $tmp37 = frost$core$MutableString$finish$R$frost$core$String($tmp36);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$MutableString* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp37;

}
void frost$io$Console$cleanup(frost$io$Console* param0) {

// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






