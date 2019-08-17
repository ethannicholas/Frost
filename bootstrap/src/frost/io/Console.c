#include "frost/io/Console.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/UInt8.h"


static frost$core$String $s1;
frost$io$Console$class_type frost$io$Console$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$Console$cleanup} };

typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, -964513568563874098, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void frost$io$Console$init(frost$io$Console* param0) {

return;

}
void frost$io$Console$printLine$frost$core$String(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2);
return;

}
void frost$io$Console$print$frost$core$Object(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
$fn4 $tmp3 = ($fn4) param0->$class->vtable[0];
frost$core$String* $tmp5 = $tmp3(param0);
frost$io$Console$print$frost$core$String($tmp5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return;

}
void frost$io$Console$printLine$frost$core$Object(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn7 $tmp6 = ($fn7) param0->$class->vtable[0];
frost$core$String* $tmp8 = $tmp6(param0);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp8);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
return;

}
void frost$io$Console$printLine() {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s10);
return;

}
void frost$io$Console$printErrorLine$frost$core$String(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s11);
return;

}
void frost$io$Console$printError$frost$core$Object(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:94
$fn13 $tmp12 = ($fn13) param0->$class->vtable[0];
frost$core$String* $tmp14 = $tmp12(param0);
frost$io$Console$printError$frost$core$String($tmp14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
return;

}
void frost$io$Console$printErrorLine$frost$core$Object(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn16 $tmp15 = ($fn16) param0->$class->vtable[0];
frost$core$String* $tmp17 = $tmp15(param0);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp17);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
return;

}
void frost$io$Console$printErrorLine() {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s19);
return;

}
frost$core$String* frost$io$Console$readLine$R$frost$core$String$Q() {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:127
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp20 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp20);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$MutableString* $tmp21 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local0) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:128
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:129
frost$core$Char8$nullable $tmp22;
frost$io$Console$read$R$frost$core$Char8$Q(&$tmp22);
*(&local1) = $tmp22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:130
frost$core$Char8$nullable $tmp23 = *(&local1);
frost$core$Bit $tmp24 = (frost$core$Bit) {!$tmp23.nonnull};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:131
frost$core$MutableString* $tmp26 = *(&local0);
frost$core$Int* $tmp27 = &$tmp26->_length;
frost$core$Int $tmp28 = *$tmp27;
frost$core$Int $tmp29 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Console.frost:131:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:134
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:136
frost$core$Char8$nullable $tmp36 = *(&local1);
frost$core$UInt8 $tmp37 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp38 = frost$core$Char8$init$frost$core$UInt8($tmp37);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Console.frost:136:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp39 = ((frost$core$Char8) $tmp36.value).value;
uint8_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 == $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:137
goto block2;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:139
frost$core$MutableString* $tmp44 = *(&local0);
frost$core$Char8$nullable $tmp45 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp44, ((frost$core$Char8) $tmp45.value));
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:141
frost$core$MutableString* $tmp46 = *(&local0);
frost$core$String* $tmp47 = frost$core$MutableString$finish$R$frost$core$String($tmp46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$MutableString* $tmp48 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp47;

}
void frost$io$Console$cleanup(frost$io$Console* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






