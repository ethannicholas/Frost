#include "org/frostlang/frostc/frostdoc/Markdown/_Closure14.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Matcher.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure14$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure14$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure14$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn42)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x34", 49, -4907400499225924480, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, -9070757250471388869, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, -930419747099408993, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a\x0a", 3, 3447371480047673453, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 3841610313750742941, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f", 2, 579162285470681020, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x0a", 2, 581129311773172049, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure14$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:659
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:660
frost$core$Int64 $tmp13 = (frost$core$Int64) {3u};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp17)));
frost$core$String* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = ((frost$core$String*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:661
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:662
frost$core$String* $tmp19 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp20 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp20, &$s21);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from Markdown.frost:662:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp22 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp20, $tmp19);
frost$core$Bit $tmp23;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp23, $tmp22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
bool $tmp24 = $tmp23.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
if ($tmp24) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:663
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s25));
frost$core$String* $tmp26 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local2) = &$s27;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:666
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s28));
frost$core$String* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = &$s30;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:671
frost$core$String* $tmp31 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp32 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp32, &$s33);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:671:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1120
frost$core$Bit $tmp34 = (frost$core$Bit) {true};
frost$core$String* $tmp35 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp31, $tmp32, &$s36, $tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$String* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local0) = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:673
org$frostlang$frostc$frostdoc$Markdown** $tmp38 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp39 = *$tmp38;
frost$core$String* $tmp40 = *(&local0);
$fn42 $tmp41 = ($fn42) $tmp39->$class->vtable[20];
frost$core$String* $tmp43 = $tmp41($tmp39, $tmp40);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp44 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local3) = $tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:678
frost$core$String* $tmp45 = *(&local3);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp46 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp46, &$s47);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:678:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1120
frost$core$Bit $tmp48 = (frost$core$Bit) {true};
frost$core$String* $tmp49 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp45, $tmp46, &$s50, $tmp48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$String* $tmp51 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local3) = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:680
frost$core$String* $tmp52 = *(&local2);
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s54, $tmp52);
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp53, &$s56);
frost$core$String* $tmp57 = *(&local3);
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, $tmp57);
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp58, &$s60);
frost$core$String* $tmp61 = *(&local2);
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp59, $tmp61);
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, &$s64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$String* $tmp65 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp66 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp63);

}
