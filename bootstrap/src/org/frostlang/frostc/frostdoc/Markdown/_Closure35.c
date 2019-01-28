#include "org/frostlang/frostc/frostdoc/Markdown/_Closure35.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure35$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure35$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure35$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure35$$anonymous34$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn28)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x35", 49, -5097778637230146533, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 207956274426062, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 204157886156304, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, 1702543554134, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 171409136343781, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure35$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure35* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 1085
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure35$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure35* param0) {

// line 1085
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure35$$anonymous34$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure35* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
// line 1086
frost$core$Int64 $tmp7 = (frost$core$Int64) {2};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// line 1087
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp14 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp13, $tmp14);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$MutableString* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 1088
frost$core$MutableString* $tmp16 = *(&local1);
frost$core$RegularExpression* $tmp17 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp17, &$s18);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp16, $tmp17, &$s19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// line 1089
frost$core$MutableString* $tmp20 = *(&local1);
frost$core$RegularExpression* $tmp21 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp21, &$s22);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp20, $tmp21, &$s23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// line 1090
org$frostlang$frostc$frostdoc$Markdown** $tmp24 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp25 = *$tmp24;
frost$core$MutableString* $tmp26 = *(&local1);
$fn28 $tmp27 = ($fn28) $tmp25->$class->vtable[18];
$tmp27($tmp25, $tmp26);
// line 1091
frost$core$MutableString* $tmp29 = *(&local1);
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s31, ((frost$core$Object*) $tmp29));
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp30, &$s33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$MutableString* $tmp34 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = ((frost$core$String*) NULL);
return $tmp32;

}

