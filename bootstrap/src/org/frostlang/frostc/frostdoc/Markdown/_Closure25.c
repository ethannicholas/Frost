#include "org/frostlang/frostc/frostdoc/Markdown/_Closure25.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure25$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure25$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure25$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure25$$anonymous24$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn17)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn24)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x35", 49, -5097778637230146634, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x0a", 2, 16473, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure25$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure25* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 782
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure25$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure25* param0) {

// line 782
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure25$$anonymous24$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure25* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
// line 783
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
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
// line 784
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
ITable* $tmp15 = param1->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$core$Object* $tmp18 = $tmp16(param1, $tmp14);
frost$core$MutableString$init$frost$core$String($tmp13, ((frost$core$String*) $tmp18));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$MutableString* $tmp19 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q($tmp18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 785
org$frostlang$frostc$frostdoc$Markdown** $tmp20 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp21 = *$tmp20;
frost$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[22];
$tmp23($tmp21, $tmp22);
// line 786
frost$core$String* $tmp25 = *(&local0);
frost$core$Int64 $tmp26 = frost$core$String$get_length$R$frost$core$Int64($tmp25);
*(&local2) = $tmp26;
// line 787
frost$core$Int64 $tmp27 = *(&local2);
frost$core$Int64$wrapper* $tmp28;
$tmp28 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp28->value = $tmp27;
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s30, ((frost$core$Object*) $tmp28));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp31 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local3) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// line 788
frost$core$String* $tmp32 = *(&local3);
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s34, $tmp32);
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp33, &$s36);
frost$core$MutableString* $tmp37 = *(&local1);
frost$core$String* $tmp38 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp35, ((frost$core$Object*) $tmp37));
frost$core$String* $tmp39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp38, &$s40);
frost$core$String* $tmp41 = *(&local3);
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp39, $tmp41);
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp42, &$s44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$String* $tmp45 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local3) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp46 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp43);

}

