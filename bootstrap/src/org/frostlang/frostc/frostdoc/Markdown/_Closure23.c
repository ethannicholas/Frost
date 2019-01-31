#include "org/frostlang/frostc/frostdoc/Markdown/_Closure23.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure23$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure23$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure23$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure23$$anonymous22$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn11)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn18)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x33", 49, -5097778637230146636, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x32\x3e", 10, 751414109755816211, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x68\x32\x3e", 5, 16803214724, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure23$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure23* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure23$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure23* param0) {

// line 774
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure23$$anonymous22$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure23* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
// line 775
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp7 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Int64 $tmp8 = (frost$core$Int64) {1};
ITable* $tmp9 = param1->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
frost$core$Object* $tmp12 = $tmp10(param1, $tmp8);
frost$core$MutableString$init$frost$core$String($tmp7, ((frost$core$String*) $tmp12));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$MutableString* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// line 776
org$frostlang$frostc$frostdoc$Markdown** $tmp14 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp15 = *$tmp14;
frost$core$MutableString* $tmp16 = *(&local0);
$fn18 $tmp17 = ($fn18) $tmp15->$class->vtable[22];
$tmp17($tmp15, $tmp16);
// line 777
frost$core$Int64 $tmp19 = (frost$core$Int64) {1};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Object* $tmp23 = $tmp21(param1, $tmp19);
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s25, ((frost$core$String*) $tmp23));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s27);
frost$core$MutableString* $tmp28 = *(&local0);
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp26, ((frost$core$Object*) $tmp28));
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp29, &$s31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
frost$core$MutableString* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp30;

}

