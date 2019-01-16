#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Bit.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure28$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure28$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn41)(frost$core$String*);
typedef frost$core$String* (*$fn43)(frost$core$Object*, frost$core$String*);
typedef void (*$fn57)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn73)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn86)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn108)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn120)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 49, -5097778637230146631, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0) {

// line 982
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$MutableString* local5 = NULL;
// line 983
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
// unreffing REF($4:frost.collections.ListView.T)
// line 984
frost$core$Int64 $tmp13 = (frost$core$Int64) {3};
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
// unreffing REF($20:frost.collections.ListView.T)
// line 985
frost$core$Int64 $tmp19 = (frost$core$Int64) {6};
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
// unreffing REF($36:frost.collections.ListView.T)
// line 987
org$frostlang$frostc$frostdoc$Markdown** $tmp25 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp26 = *$tmp25;
frost$core$MutableMethod** $tmp27 = &$tmp26->linkResolver;
frost$core$MutableMethod* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block3;
block1:;
// line 988
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
// unreffing REF($79:frost.core.String?)
// line 989
frost$core$String* $tmp47 = *(&local4);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block7:;
// line 990
frost$io$OutputStream* $tmp50 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp51 = *(&local1);
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s53, $tmp51);
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp52, &$s55);
$fn57 $tmp56 = ($fn57) $tmp50->$class->vtable[19];
$tmp56($tmp50, $tmp54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing REF($101:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($100:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($97:frost.io.OutputStream)
// line 991
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s58));
frost$core$String* $tmp59 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local4) = &$s58;
goto block8;
block8:;
// line 993
frost$core$String* $tmp60 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = $tmp60;
frost$core$String* $tmp62 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing newURL
*(&local4) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 996
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s63));
frost$core$String* $tmp64 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local1) = &$s63;
goto block2;
block2:;
// line 998
frost$core$String* $tmp65 = *(&local1);
frost$core$RegularExpression* $tmp66 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp66, &$s67);
org$frostlang$frostc$frostdoc$Markdown** $tmp68 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp69 = *$tmp68;
org$frostlang$frostc$frostdoc$Protector** $tmp70 = &$tmp69->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp71 = *$tmp70;
$fn73 $tmp72 = ($fn73) $tmp71->$class->vtable[2];
frost$core$String* $tmp74 = $tmp72($tmp71, &$s75);
frost$core$String* $tmp76 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp65, $tmp66, $tmp74);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$String* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($157:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($149:frost.core.RegularExpression)
// line 999
frost$core$String* $tmp78 = *(&local1);
frost$core$RegularExpression* $tmp79 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp79, &$s80);
org$frostlang$frostc$frostdoc$Markdown** $tmp81 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp82 = *$tmp81;
org$frostlang$frostc$frostdoc$Protector** $tmp83 = &$tmp82->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp84 = *$tmp83;
$fn86 $tmp85 = ($fn86) $tmp84->$class->vtable[2];
frost$core$String* $tmp87 = $tmp85($tmp84, &$s88);
frost$core$String* $tmp89 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp78, $tmp79, $tmp87);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$String* $tmp90 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local1) = $tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($185:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($177:frost.core.RegularExpression)
// line 1000
frost$core$MutableString* $tmp91 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp91);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$MutableString* $tmp92 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local5) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($203:frost.core.MutableString)
// line 1001
frost$core$MutableString* $tmp93 = *(&local5);
frost$core$String* $tmp94 = *(&local1);
frost$core$String* $tmp95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s96, $tmp94);
frost$core$String* $tmp97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp95, &$s98);
frost$core$MutableString$append$frost$core$String($tmp93, $tmp97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing REF($220:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($219:frost.core.String)
// line 1002
frost$core$String* $tmp99 = *(&local2);
frost$core$Bit $tmp100 = frost$core$Bit$init$builtin_bit($tmp99 != NULL);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block9; else goto block10;
block9:;
// line 1004
frost$core$String* $tmp102 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp103 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp104 = *$tmp103;
org$frostlang$frostc$frostdoc$Protector** $tmp105 = &$tmp104->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp106 = *$tmp105;
$fn108 $tmp107 = ($fn108) $tmp106->$class->vtable[2];
frost$core$String* $tmp109 = $tmp107($tmp106, &$s110);
frost$core$String* $tmp111 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp102, &$s112, $tmp109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$String* $tmp113 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local2) = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($242:frost.core.String)
// line 1005
frost$core$String* $tmp114 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp115 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp116 = *$tmp115;
org$frostlang$frostc$frostdoc$Protector** $tmp117 = &$tmp116->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp118 = *$tmp117;
$fn120 $tmp119 = ($fn120) $tmp118->$class->vtable[2];
frost$core$String* $tmp121 = $tmp119($tmp118, &$s122);
frost$core$String* $tmp123 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp114, &$s124, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$String* $tmp125 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local2) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($265:frost.core.String)
// line 1006
frost$core$String* $tmp126 = *(&local2);
frost$core$String* $tmp127 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp126, &$s128, &$s129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$String* $tmp130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local2) = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing REF($283:frost.core.String)
// line 1007
frost$core$MutableString* $tmp131 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp131, &$s132);
// line 1008
frost$core$MutableString* $tmp133 = *(&local5);
frost$core$String* $tmp134 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp133, $tmp134);
// line 1009
frost$core$MutableString* $tmp135 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp135, &$s136);
goto block10;
block10:;
// line 1011
frost$core$MutableString* $tmp137 = *(&local5);
frost$core$String* $tmp138 = *(&local0);
frost$core$String* $tmp139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s140, $tmp138);
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp139, &$s142);
frost$core$MutableString$append$frost$core$String($tmp137, $tmp141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($311:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($310:frost.core.String)
// line 1012
frost$core$MutableString* $tmp143 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp143, &$s144);
// line 1013
frost$core$MutableString* $tmp145 = *(&local5);
frost$core$String* $tmp146 = frost$core$MutableString$convert$R$frost$core$String($tmp145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($324:frost.core.String)
frost$core$MutableString* $tmp147 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing result
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing title
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing url
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing linkText
*(&local0) = ((frost$core$String*) NULL);
return $tmp146;

}

