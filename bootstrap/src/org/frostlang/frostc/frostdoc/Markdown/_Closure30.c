#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Error.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Bit.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure30$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure30$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn41)(frost$core$String*);
typedef frost$core$String* (*$fn43)(frost$core$Object*, frost$core$String*);
typedef frost$core$Error* (*$fn57)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn77)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn91)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn114)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn126)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn153)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x30", 49, -4905412582202497442, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 8235988314998121606, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 7239430034457774538, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, 6838930604228990514, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 6240236502603552868, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, -8530148639892707939, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, -6648448206422497324, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 8936268775352766043, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:982
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Error* local5 = NULL;
frost$core$MutableString* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:983
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:984
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:985
frost$core$Int64 $tmp19 = (frost$core$Int64) {6u};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp23)));
frost$core$String* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = ((frost$core$String*) $tmp23);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:987
org$frostlang$frostc$frostdoc$Markdown** $tmp25 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp26 = *$tmp25;
frost$core$MutableMethod** $tmp27 = &$tmp26->linkResolver;
frost$core$MutableMethod* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28 != NULL};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:988
org$frostlang$frostc$frostdoc$Markdown** $tmp31 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp32 = *$tmp31;
frost$core$MutableMethod** $tmp33 = &$tmp32->linkResolver;
frost$core$MutableMethod* $tmp34 = *$tmp33;
frost$core$String* $tmp35 = *(&local1);
frost$core$Int8** $tmp36 = &$tmp34->pointer;
frost$core$Int8* $tmp37 = *$tmp36;
frost$core$Object** $tmp38 = &$tmp34->target;
frost$core$Object* $tmp39 = *$tmp38;
bool $tmp40 = $tmp39 != ((frost$core$Object*) NULL);
if ($tmp40) goto block4; else goto block5;
block5:;
frost$core$String* $tmp42 = (($fn41) $tmp37)($tmp35);
*(&local3) = $tmp42;
goto block6;
block4:;
frost$core$String* $tmp44 = (($fn43) $tmp37)($tmp39, $tmp35);
*(&local3) = $tmp44;
goto block6;
block6:;
frost$core$String* $tmp45 = *(&local3);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$String* $tmp46 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local4) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:989
frost$core$String* $tmp47 = *(&local4);
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47 == NULL};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:990
*(&local5) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:991
frost$io$OutputStream* $tmp50 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp51 = *(&local1);
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s53, $tmp51);
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp52, &$s55);
$fn57 $tmp56 = ($fn57) $tmp50->$class->vtable[19];
frost$core$Error* $tmp58 = $tmp56($tmp50, $tmp54);
if ($tmp58 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local5) = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:994
frost$core$Int64 $tmp59 = (frost$core$Int64) {994u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s60, $tmp59);
abort(); // unreachable
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Error* $tmp61 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local5) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:996
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s62));
frost$core$String* $tmp63 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local4) = &$s62;
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:998
frost$core$String* $tmp64 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$String* $tmp65 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local1) = $tmp64;
frost$core$String* $tmp66 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local4) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1001
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s67));
frost$core$String* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local1) = &$s67;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1003
frost$core$String* $tmp69 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp70 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp70, &$s71);
org$frostlang$frostc$frostdoc$Markdown** $tmp72 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp73 = *$tmp72;
org$frostlang$frostc$frostdoc$Protector** $tmp74 = &$tmp73->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp75 = *$tmp74;
$fn77 $tmp76 = ($fn77) $tmp75->$class->vtable[2];
frost$core$String* $tmp78 = $tmp76($tmp75, &$s79);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:1003:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:257
frost$core$Bit $tmp80 = (frost$core$Bit) {true};
frost$core$String* $tmp81 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp69, $tmp70, $tmp78, $tmp80);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp82 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local1) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1004
frost$core$String* $tmp83 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp84 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp84, &$s85);
org$frostlang$frostc$frostdoc$Markdown** $tmp86 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp87 = *$tmp86;
org$frostlang$frostc$frostdoc$Protector** $tmp88 = &$tmp87->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp89 = *$tmp88;
$fn91 $tmp90 = ($fn91) $tmp89->$class->vtable[2];
frost$core$String* $tmp92 = $tmp90($tmp89, &$s93);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:1004:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:257
frost$core$Bit $tmp94 = (frost$core$Bit) {true};
frost$core$String* $tmp95 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp83, $tmp84, $tmp92, $tmp94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$String* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1005
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp97 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp97);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$MutableString* $tmp98 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local6) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1006
frost$core$MutableString* $tmp99 = *(&local6);
frost$core$String* $tmp100 = *(&local1);
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, $tmp100);
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
frost$core$MutableString$append$frost$core$String($tmp99, $tmp103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1007
frost$core$String* $tmp105 = *(&local2);
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105 != NULL};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1009
frost$core$String* $tmp108 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp109 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp110 = *$tmp109;
org$frostlang$frostc$frostdoc$Protector** $tmp111 = &$tmp110->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp112 = *$tmp111;
$fn114 $tmp113 = ($fn114) $tmp112->$class->vtable[2];
frost$core$String* $tmp115 = $tmp113($tmp112, &$s116);
frost$core$String* $tmp117 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp108, &$s118, $tmp115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$String* $tmp119 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local2) = $tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1010
frost$core$String* $tmp120 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp121 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp122 = *$tmp121;
org$frostlang$frostc$frostdoc$Protector** $tmp123 = &$tmp122->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp124 = *$tmp123;
$fn126 $tmp125 = ($fn126) $tmp124->$class->vtable[2];
frost$core$String* $tmp127 = $tmp125($tmp124, &$s128);
frost$core$String* $tmp129 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp120, &$s130, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$String* $tmp131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local2) = $tmp129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1011
frost$core$String* $tmp132 = *(&local2);
frost$core$String* $tmp133 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp132, &$s134, &$s135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp136 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local2) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1012
frost$core$MutableString* $tmp137 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp137, &$s138);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1013
frost$core$MutableString* $tmp139 = *(&local6);
frost$core$String* $tmp140 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp139, $tmp140);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1014
frost$core$MutableString* $tmp141 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp141, &$s142);
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1016
frost$core$MutableString* $tmp143 = *(&local6);
frost$core$String* $tmp144 = *(&local0);
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s146, $tmp144);
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp145, &$s148);
frost$core$MutableString$append$frost$core$String($tmp143, $tmp147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1017
frost$core$MutableString* $tmp149 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp149, &$s150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1018
frost$core$MutableString* $tmp151 = *(&local6);
$fn153 $tmp152 = ($fn153) ((frost$core$Object*) $tmp151)->$class->vtable[0];
frost$core$String* $tmp154 = $tmp152(((frost$core$Object*) $tmp151));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$MutableString* $tmp155 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp157 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = ((frost$core$String*) NULL);
return $tmp154;

}

