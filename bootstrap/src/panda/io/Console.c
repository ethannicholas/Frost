#include "panda/io/Console.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$io$Console$class_type panda$io$Console$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$Console$cleanup} };

typedef panda$core$String* (*$fn3)(panda$core$Object*);
typedef panda$core$String* (*$fn6)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void panda$io$Console$init(panda$io$Console* param0) {

return;

}
void panda$io$Console$printLine$panda$core$String(panda$core$String* param0) {

// line 45
panda$io$Console$print$panda$core$String(param0);
// line 46
panda$io$Console$printLine();
return;

}
void panda$io$Console$print$panda$core$Object(panda$core$Object* param0) {

// line 54
$fn3 $tmp2 = ($fn3) param0->$class->vtable[0];
panda$core$String* $tmp4 = $tmp2(param0);
panda$io$Console$print$panda$core$String($tmp4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($2:panda.core.String)
return;

}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* param0) {

// line 62
$fn6 $tmp5 = ($fn6) param0->$class->vtable[0];
panda$core$String* $tmp7 = $tmp5(param0);
panda$io$Console$printLine$panda$core$String($tmp7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($2:panda.core.String)
return;

}
void panda$io$Console$printLine() {

// line 70
panda$io$Console$print$panda$core$String(&$s8);
return;

}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {

panda$core$MutableString* local0 = NULL;
panda$core$Char8$nullable local1;
// line 87
panda$core$MutableString* $tmp9 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp9);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp9;
// line 88
goto block1;
block1:;
// line 89
panda$core$Char8$nullable $tmp11;
panda$io$Console$read$R$panda$core$Char8$Q(&$tmp11);
*(&local1) = $tmp11;
// line 90
panda$core$Char8$nullable $tmp12 = *(&local1);
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit(!$tmp12.nonnull);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block3; else goto block4;
block3:;
// line 91
panda$core$MutableString* $tmp15 = *(&local0);
panda$core$Int64* $tmp16 = &$tmp15->_length;
panda$core$Int64 $tmp17 = *$tmp16;
panda$core$Int64 $tmp18 = (panda$core$Int64) {0};
panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp17, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block5:;
// line 92
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp21 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block6:;
// line 94
goto block2;
block4:;
// line 96
panda$core$Char8$nullable $tmp22 = *(&local1);
panda$core$UInt8 $tmp23 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp24 = panda$core$Char8$init$panda$core$UInt8($tmp23);
panda$core$Bit $tmp25 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp22.value), $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block7; else goto block8;
block7:;
// line 97
goto block2;
block8:;
// line 99
panda$core$MutableString* $tmp27 = *(&local0);
panda$core$Char8$nullable $tmp28 = *(&local1);
panda$core$MutableString$append$panda$core$Char8($tmp27, ((panda$core$Char8) $tmp28.value));
goto block1;
block2:;
// line 101
panda$core$MutableString* $tmp29 = *(&local0);
panda$core$String* $tmp30 = panda$core$MutableString$finish$R$panda$core$String($tmp29);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($61:panda.core.String)
panda$core$MutableString* $tmp31 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($1:panda.core.MutableString)
return $tmp30;

}
void panda$io$Console$cleanup(panda$io$Console* param0) {

// line 7
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






