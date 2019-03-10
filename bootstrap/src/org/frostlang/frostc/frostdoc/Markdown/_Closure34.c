#include "org/frostlang/frostc/frostdoc/Markdown/_Closure34.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Matcher.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure34$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure34$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure34$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$String* (*$fn37)(frost$core$Object*);
typedef void (*$fn52)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn55)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x34", 49, -4905408184155984598, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 2144065729583989714, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 1065103647703566382, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, -4368029754542842124, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 1685123786324366533, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure34$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure34* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1085
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure34$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure34* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1085
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure34* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1086
frost$core$Int64 $tmp7 = (frost$core$Int64) {2u};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1087
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp14 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp13, $tmp14);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$MutableString* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1088
frost$core$MutableString* $tmp16 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp17 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp17, &$s18);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1088:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp19 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn21 $tmp20 = ($fn21) ((frost$core$Object*) $tmp16)->$class->vtable[0];
frost$core$String* $tmp22 = $tmp20(((frost$core$Object*) $tmp16));
frost$core$Matcher* $tmp23 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp17, $tmp22);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Matcher* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp16);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp25 = *(&local2);
frost$core$Bit $tmp26 = frost$core$Matcher$find$R$frost$core$Bit($tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp28 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp28, $tmp16, &$s29, $tmp19);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp30 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp30, $tmp16);
frost$core$Matcher* $tmp31 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1089
frost$core$MutableString* $tmp32 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp33 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp33, &$s34);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1089:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp35 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn37 $tmp36 = ($fn37) ((frost$core$Object*) $tmp32)->$class->vtable[0];
frost$core$String* $tmp38 = $tmp36(((frost$core$Object*) $tmp32));
frost$core$Matcher* $tmp39 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp33, $tmp38);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Matcher* $tmp40 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local3) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp32);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp41 = *(&local3);
frost$core$Bit $tmp42 = frost$core$Matcher$find$R$frost$core$Bit($tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp44 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp44, $tmp32, &$s45, $tmp35);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp46 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp46, $tmp32);
frost$core$Matcher* $tmp47 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1090
org$frostlang$frostc$frostdoc$Markdown** $tmp48 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp49 = *$tmp48;
frost$core$MutableString* $tmp50 = *(&local1);
$fn52 $tmp51 = ($fn52) $tmp49->$class->vtable[18];
$tmp51($tmp49, $tmp50);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1091
frost$core$MutableString* $tmp53 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:1091:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn55 $tmp54 = ($fn55) ((frost$core$Object*) $tmp53)->$class->vtable[0];
frost$core$String* $tmp56 = $tmp54(((frost$core$Object*) $tmp53));
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s58, $tmp56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp57, &$s60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$MutableString* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = ((frost$core$String*) NULL);
return $tmp59;

}

