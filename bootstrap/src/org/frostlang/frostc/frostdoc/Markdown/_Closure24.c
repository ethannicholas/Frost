#include "org/frostlang/frostc/frostdoc/Markdown/_Closure24.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure24$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure24$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure24$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn17)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn24)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn28)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn32)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn37)(frost$core$Object*);
typedef frost$core$String* (*$fn49)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x34", 49, -4904425220760553189, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f", 2, 579162285470681020, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x0a", 2, 581129311773172049, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure24$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:783
frost$core$Int64 $tmp7 = (frost$core$Int64) {1u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:784
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Int64 $tmp14 = (frost$core$Int64) {2u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:785
org$frostlang$frostc$frostdoc$Markdown** $tmp20 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp21 = *$tmp20;
frost$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[22];
$tmp23($tmp21, $tmp22);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:786
frost$core$String* $tmp25 = *(&local0);
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from Markdown.frost:786:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:138
ITable* $tmp26 = ((frost$collections$Iterable*) $tmp25)->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
frost$collections$Iterator* $tmp29 = $tmp27(((frost$collections$Iterable*) $tmp25));
ITable* $tmp30 = $tmp29->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[2];
frost$core$Int64 $tmp33 = $tmp31($tmp29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = $tmp33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:787
frost$core$Int64 $tmp34 = *(&local2);
frost$core$Int64$wrapper* $tmp35;
$tmp35 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp35->value = $tmp34;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:787:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn37 $tmp36 = ($fn37) ((frost$core$Object*) $tmp35)->$class->vtable[0];
frost$core$String* $tmp38 = $tmp36(((frost$core$Object*) $tmp35));
frost$core$String* $tmp39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, $tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp41 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local3) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:788
frost$core$String* $tmp42 = *(&local3);
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s44, $tmp42);
frost$core$String* $tmp45 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp43, &$s46);
frost$core$MutableString* $tmp47 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:788:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn49 $tmp48 = ($fn49) ((frost$core$Object*) $tmp47)->$class->vtable[0];
frost$core$String* $tmp50 = $tmp48(((frost$core$Object*) $tmp47));
frost$core$String* $tmp51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp45, $tmp50);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp51, &$s53);
frost$core$String* $tmp54 = *(&local3);
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp52, $tmp54);
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, &$s57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp58 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local3) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp59 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp56);

}

