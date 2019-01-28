#include "org/frostlang/frostc/frostdoc/Markdown/_Closure9.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure9$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure9$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure9$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn19)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn34)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn44)(frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 48, -6077627060095498508, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20", 2, 13465, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };

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
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous36$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(frost$collections$ListView* param0) {

// line 416
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
ITable* $tmp8 = param0->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param0, $tmp7);
frost$core$String* $tmp12 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(((frost$core$String*) $tmp11), &$s13, &$s14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
return ((frost$core$Object*) $tmp12);

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// line 409
frost$core$MutableString* $tmp15 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Int64 $tmp16 = (frost$core$Int64) {1};
ITable* $tmp17 = param1->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Object* $tmp20 = $tmp18(param1, $tmp16);
frost$core$MutableString$init$frost$core$String($tmp15, ((frost$core$String*) $tmp20));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$MutableString* $tmp21 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local0) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// line 410
frost$core$MutableString* $tmp22 = *(&local0);
frost$core$RegularExpression* $tmp23 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp23, &$s24);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp22, $tmp23, &$s25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// line 411
frost$core$MutableString* $tmp26 = *(&local0);
frost$core$RegularExpression* $tmp27 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp27, &$s28);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp26, $tmp27, &$s29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// line 412
org$frostlang$frostc$frostdoc$Markdown** $tmp30 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp31 = *$tmp30;
frost$core$MutableString* $tmp32 = *(&local0);
$fn34 $tmp33 = ($fn34) $tmp31->$class->vtable[6];
$tmp33($tmp31, $tmp32);
// line 413
frost$core$MutableString* $tmp35 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp35, &$s36, &$s37);
// line 415
frost$core$RegularExpression* $tmp38 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp39 = (frost$core$Int64) {4};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp38, &$s40, $tmp39);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$RegularExpression* $tmp41 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local1) = $tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// line 416
frost$core$MutableString* $tmp42 = *(&local0);
frost$core$RegularExpression* $tmp43 = *(&local1);
frost$core$Method* $tmp45 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp45, ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous36$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object), ((frost$core$Immutable*) NULL));
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP($tmp42, $tmp43, ((frost$core$MutableMethod*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// line 417
frost$core$MutableString* $tmp46 = *(&local0);
frost$core$String* $tmp47 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s48, ((frost$core$Object*) $tmp46));
frost$core$String* $tmp49 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp47, &$s50);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$RegularExpression* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$MutableString* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$Object*) $tmp49);

}

