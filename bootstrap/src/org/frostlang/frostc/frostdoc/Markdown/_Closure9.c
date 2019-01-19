#include "org/frostlang/frostc/frostdoc/Markdown/_Closure9.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure9$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure9$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure9$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn24)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn44)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn54)(frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 48, -6077627060095498508, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20", 2, 13465, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 408
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure9$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0) {

// line 408
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(frost$collections$ListView* param0) {

// line 416
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
ITable* $tmp8 = param0->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param0, $tmp7);
frost$core$Bit $tmp12 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp11) != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {416};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s15, $tmp14, &$s16);
abort(); // unreachable
block1:;
frost$core$String* $tmp17 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(((frost$core$String*) $tmp11), &$s18, &$s19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// unreffing REF($4:frost.collections.ListView.T)
return ((frost$core$Object*) $tmp17);

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// line 409
frost$core$MutableString* $tmp20 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Int64 $tmp21 = (frost$core$Int64) {1};
ITable* $tmp22 = param1->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
frost$core$Object* $tmp25 = $tmp23(param1, $tmp21);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp25) != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {409};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block1:;
frost$core$MutableString$init$frost$core$String($tmp20, ((frost$core$String*) $tmp25));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$MutableString* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local0) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q($tmp25);
// unreffing REF($5:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($1:frost.core.MutableString)
// line 410
frost$core$MutableString* $tmp32 = *(&local0);
frost$core$RegularExpression* $tmp33 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp33, &$s34);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp32, $tmp33, &$s35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($31:frost.core.RegularExpression)
// line 411
frost$core$MutableString* $tmp36 = *(&local0);
frost$core$RegularExpression* $tmp37 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp37, &$s38);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp36, $tmp37, &$s39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($39:frost.core.RegularExpression)
// line 412
org$frostlang$frostc$frostdoc$Markdown** $tmp40 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp41 = *$tmp40;
frost$core$MutableString* $tmp42 = *(&local0);
$fn44 $tmp43 = ($fn44) $tmp41->$class->vtable[6];
$tmp43($tmp41, $tmp42);
// line 413
frost$core$MutableString* $tmp45 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp45, &$s46, &$s47);
// line 415
frost$core$RegularExpression* $tmp48 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp49 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp48, &$s50, $tmp49);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$RegularExpression* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = $tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($55:frost.core.RegularExpression)
// line 416
frost$core$MutableString* $tmp52 = *(&local0);
frost$core$RegularExpression* $tmp53 = *(&local1);
frost$core$Method* $tmp55 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp55, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Immutable*) NULL));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP($tmp52, $tmp53, ((frost$core$MutableMethod*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($72:frost.core.Method)
// line 417
frost$core$MutableString* $tmp56 = *(&local0);
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s58, ((frost$core$Object*) $tmp56));
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp57, &$s60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($83:frost.core.String)
frost$core$RegularExpression* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing p1
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$MutableString* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing blockQuote
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$Object*) $tmp59);

}

