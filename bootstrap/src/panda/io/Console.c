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
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x66\x72\x6f\x73\x74", 13, -8047080314963656368, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x27", 71, -934148035806124129, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x66\x72\x6f\x73\x74", 13, -8047080314963656368, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x27", 71, -934148035806124129, NULL };

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
panda$core$MutableString* $tmp9 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp9);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$MutableString* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
*(&local0) = $tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($1:panda.core.MutableString)
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
return ((panda$core$String*) NULL);
block6:;
// line 94
goto block2;
block4:;
// line 96
panda$core$Char8$nullable $tmp22 = *(&local1);
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit($tmp22.nonnull);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {96};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block9:;
panda$core$UInt8 $tmp28 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp29 = panda$core$Char8$init$panda$core$UInt8($tmp28);
panda$core$Bit $tmp30 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp22.value), $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block7:;
// line 97
goto block2;
block8:;
// line 99
panda$core$MutableString* $tmp32 = *(&local0);
panda$core$Char8$nullable $tmp33 = *(&local1);
panda$core$Bit $tmp34 = panda$core$Bit$init$builtin_bit($tmp33.nonnull);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s37, $tmp36, &$s38);
abort(); // unreachable
block11:;
panda$core$MutableString$append$panda$core$Char8($tmp32, ((panda$core$Char8) $tmp33.value));
goto block1;
block2:;
// line 101
panda$core$MutableString* $tmp39 = *(&local0);
panda$core$String* $tmp40 = panda$core$MutableString$finish$R$panda$core$String($tmp39);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($75:panda.core.String)
panda$core$MutableString* $tmp41 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp40;

}
void panda$io$Console$cleanup(panda$io$Console* param0) {

// line 7
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






