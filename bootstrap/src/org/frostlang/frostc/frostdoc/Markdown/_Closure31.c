#include "org/frostlang/frostc/frostdoc/Markdown/_Closure31.h"
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
org$frostlang$frostc$frostdoc$Markdown$_Closure31$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure31$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure31$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure31$$anonymous30$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn41)(frost$core$String*);
typedef frost$core$String* (*$fn43)(frost$core$Object*, frost$core$String*);
typedef frost$core$Error* (*$fn57)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn77)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn90)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn112)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn124)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn151)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x31", 49, -5097778637230146537, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure31$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure31* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure31$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure31* param0) {

// line 982
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure31$$anonymous30$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure31* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Error* local5 = NULL;
frost$core$MutableString* local6 = NULL;
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
// line 989
frost$core$String* $tmp47 = *(&local4);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block7:;
// line 990
*(&local5) = ((frost$core$Error*) NULL);
// line 991
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
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
goto block10;
block9:;
// line 994
frost$core$Int64 $tmp59 = (frost$core$Int64) {994};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s60, $tmp59);
abort(); // unreachable
block10:;
frost$core$Error* $tmp61 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local5) = ((frost$core$Error*) NULL);
// line 996
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s62));
frost$core$String* $tmp63 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local4) = &$s62;
goto block8;
block8:;
// line 998
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
// line 1
// line 1001
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s67));
frost$core$String* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local1) = &$s67;
goto block2;
block2:;
// line 1003
frost$core$String* $tmp69 = *(&local1);
frost$core$RegularExpression* $tmp70 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp70, &$s71);
org$frostlang$frostc$frostdoc$Markdown** $tmp72 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp73 = *$tmp72;
org$frostlang$frostc$frostdoc$Protector** $tmp74 = &$tmp73->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp75 = *$tmp74;
$fn77 $tmp76 = ($fn77) $tmp75->$class->vtable[2];
frost$core$String* $tmp78 = $tmp76($tmp75, &$s79);
frost$core$String* $tmp80 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp69, $tmp70, $tmp78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$String* $tmp81 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local1) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// line 1004
frost$core$String* $tmp82 = *(&local1);
frost$core$RegularExpression* $tmp83 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp83, &$s84);
org$frostlang$frostc$frostdoc$Markdown** $tmp85 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp86 = *$tmp85;
org$frostlang$frostc$frostdoc$Protector** $tmp87 = &$tmp86->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp88 = *$tmp87;
$fn90 $tmp89 = ($fn90) $tmp88->$class->vtable[2];
frost$core$String* $tmp91 = $tmp89($tmp88, &$s92);
frost$core$String* $tmp93 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp82, $tmp83, $tmp91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$String* $tmp94 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local1) = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// line 1005
frost$core$MutableString* $tmp95 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp95);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$MutableString* $tmp96 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local6) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// line 1006
frost$core$MutableString* $tmp97 = *(&local6);
frost$core$String* $tmp98 = *(&local1);
frost$core$String* $tmp99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s100, $tmp98);
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp99, &$s102);
frost$core$MutableString$append$frost$core$String($tmp97, $tmp101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// line 1007
frost$core$String* $tmp103 = *(&local2);
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103 != NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block13; else goto block14;
block13:;
// line 1009
frost$core$String* $tmp106 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp107 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp108 = *$tmp107;
org$frostlang$frostc$frostdoc$Protector** $tmp109 = &$tmp108->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp110 = *$tmp109;
$fn112 $tmp111 = ($fn112) $tmp110->$class->vtable[2];
frost$core$String* $tmp113 = $tmp111($tmp110, &$s114);
frost$core$String* $tmp115 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp106, &$s116, $tmp113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$String* $tmp117 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local2) = $tmp115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// line 1010
frost$core$String* $tmp118 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp119 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp120 = *$tmp119;
org$frostlang$frostc$frostdoc$Protector** $tmp121 = &$tmp120->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp122 = *$tmp121;
$fn124 $tmp123 = ($fn124) $tmp122->$class->vtable[2];
frost$core$String* $tmp125 = $tmp123($tmp122, &$s126);
frost$core$String* $tmp127 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp118, &$s128, $tmp125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$String* $tmp129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local2) = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// line 1011
frost$core$String* $tmp130 = *(&local2);
frost$core$String* $tmp131 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp130, &$s132, &$s133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$String* $tmp134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local2) = $tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// line 1012
frost$core$MutableString* $tmp135 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp135, &$s136);
// line 1013
frost$core$MutableString* $tmp137 = *(&local6);
frost$core$String* $tmp138 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp137, $tmp138);
// line 1014
frost$core$MutableString* $tmp139 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp139, &$s140);
goto block14;
block14:;
// line 1016
frost$core$MutableString* $tmp141 = *(&local6);
frost$core$String* $tmp142 = *(&local0);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s144, $tmp142);
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s146);
frost$core$MutableString$append$frost$core$String($tmp141, $tmp145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// line 1017
frost$core$MutableString* $tmp147 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp147, &$s148);
// line 1018
frost$core$MutableString* $tmp149 = *(&local6);
$fn151 $tmp150 = ($fn151) ((frost$core$Object*) $tmp149)->$class->vtable[0];
frost$core$String* $tmp152 = $tmp150(((frost$core$Object*) $tmp149));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$MutableString* $tmp153 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp154 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local0) = ((frost$core$String*) NULL);
return $tmp152;

}

