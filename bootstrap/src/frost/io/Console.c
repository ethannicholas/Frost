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
frost$io$Console$class_type frost$io$Console$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$Console$cleanup} };

typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2730678735001696262, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

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
// unreffing REF($2:frost.core.String)
return;

}
void frost$io$Console$printLine$frost$core$Object(frost$core$Object* param0) {

// line 62
$fn6 $tmp5 = ($fn6) param0->$class->vtable[0];
frost$core$String* $tmp7 = $tmp5(param0);
frost$io$Console$printLine$frost$core$String($tmp7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($2:frost.core.String)
return;

}
void frost$io$Console$printLine() {

// line 70
frost$io$Console$print$frost$core$String(&$s8);
return;

}
frost$core$String* frost$io$Console$readLine$R$frost$core$String$Q() {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
// line 87
frost$core$MutableString* $tmp9 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp9);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$MutableString* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($1:frost.core.MutableString)
// line 88
goto block1;
block1:;
// line 89
frost$core$Char8$nullable $tmp11;
frost$io$Console$read$R$frost$core$Char8$Q(&$tmp11);
*(&local1) = $tmp11;
// line 90
frost$core$Char8$nullable $tmp12 = *(&local1);
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit(!$tmp12.nonnull);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block3; else goto block4;
block3:;
// line 91
frost$core$MutableString* $tmp15 = *(&local0);
frost$core$Int64* $tmp16 = &$tmp15->_length;
frost$core$Int64 $tmp17 = *$tmp16;
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
frost$core$Bit $tmp19 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp17, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block5:;
// line 92
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp21 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// line 94
goto block2;
block4:;
// line 96
frost$core$Char8$nullable $tmp22 = *(&local1);
frost$core$UInt8 $tmp23 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp24 = frost$core$Char8$init$frost$core$UInt8($tmp23);
frost$core$Bit $tmp25 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8) $tmp22.value), $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block7; else goto block8;
block7:;
// line 97
goto block2;
block8:;
// line 99
frost$core$MutableString* $tmp27 = *(&local0);
frost$core$Char8$nullable $tmp28 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp27, ((frost$core$Char8) $tmp28.value));
goto block1;
block2:;
// line 101
frost$core$MutableString* $tmp29 = *(&local0);
frost$core$String* $tmp30 = frost$core$MutableString$finish$R$frost$core$String($tmp29);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($61:frost.core.String)
frost$core$MutableString* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp30;

}
void frost$io$Console$cleanup(frost$io$Console* param0) {

// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






