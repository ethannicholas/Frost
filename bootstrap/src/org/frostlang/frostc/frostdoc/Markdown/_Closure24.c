#include "org/frostlang/frostc/frostdoc/Markdown/_Closure24.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure24$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure24$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure24$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn53)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn66)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn97)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn110)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x34", 49, -5097778637230146635, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3e", 2, 15010, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 898
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure24$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0) {

// line 898
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$Bit local8;
// line 899
*(&local0) = ((frost$core$String*) NULL);
// line 900
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local1) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// unreffing REF($6:frost.collections.ListView.T)
// line 901
frost$core$Int64 $tmp13 = (frost$core$Int64) {2};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp17)));
frost$core$String* $tmp18 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local2) = ((frost$core$String*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
// unreffing REF($22:frost.collections.ListView.T)
// line 902
frost$core$Int64 $tmp19 = (frost$core$Int64) {3};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp23)));
frost$core$String* $tmp24 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local3) = ((frost$core$String*) $tmp23);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// unreffing REF($38:frost.collections.ListView.T)
// line 903
frost$core$String* $tmp25 = *(&local3);
frost$core$Bit $tmp26 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp25, &$s27);
bool $tmp28 = $tmp26.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// line 904
frost$core$String* $tmp29 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp30 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local3) = $tmp29;
goto block2;
block2:;
// line 908
org$frostlang$frostc$frostdoc$Markdown** $tmp31 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp32 = *$tmp31;
frost$collections$HashMap** $tmp33 = &$tmp32->linkDefinitions;
frost$collections$HashMap* $tmp34 = *$tmp33;
frost$core$String* $tmp35 = *(&local3);
frost$core$Object* $tmp36 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp34, ((frost$collections$Key*) $tmp35));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp36)));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp37 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp36);
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
// unreffing REF($74:frost.collections.HashMap.V?)
// line 909
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp38 = *(&local4);
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block5;
block3:;
// line 910
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp41 = *(&local4);
frost$core$String** $tmp42 = &$tmp41->url;
frost$core$String* $tmp43 = *$tmp42;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp44 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local5) = $tmp43;
// line 911
frost$core$String* $tmp45 = *(&local5);
frost$core$RegularExpression* $tmp46 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp46, &$s47);
org$frostlang$frostc$frostdoc$Markdown** $tmp48 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp49 = *$tmp48;
org$frostlang$frostc$frostdoc$Protector** $tmp50 = &$tmp49->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp51 = *$tmp50;
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[2];
frost$core$String* $tmp54 = $tmp52($tmp51, &$s55);
frost$core$String* $tmp56 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp45, $tmp46, $tmp54);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$String* $tmp57 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local5) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing REF($113:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($106:frost.core.RegularExpression)
// line 912
frost$core$String* $tmp58 = *(&local5);
frost$core$RegularExpression* $tmp59 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp59, &$s60);
org$frostlang$frostc$frostdoc$Markdown** $tmp61 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp62 = *$tmp61;
org$frostlang$frostc$frostdoc$Protector** $tmp63 = &$tmp62->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp64 = *$tmp63;
$fn66 $tmp65 = ($fn66) $tmp64->$class->vtable[2];
frost$core$String* $tmp67 = $tmp65($tmp64, &$s68);
frost$core$String* $tmp69 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp58, $tmp59, $tmp67);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$String* $tmp70 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local5) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($140:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($139:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($132:frost.core.RegularExpression)
// line 913
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp71 = *(&local4);
frost$core$String** $tmp72 = &$tmp71->title;
frost$core$String* $tmp73 = *$tmp72;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$String* $tmp74 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local6) = $tmp73;
// line 914
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s75));
frost$core$String* $tmp76 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local7) = &$s77;
// line 915
frost$core$String* $tmp78 = *(&local6);
frost$core$Bit $tmp79 = frost$core$Bit$init$builtin_bit(true);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block8; else goto block9;
block8:;
frost$core$String* $tmp81 = *(&local6);
ITable* $tmp83 = ((frost$core$Equatable*) $tmp81)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Bit $tmp86 = $tmp84(((frost$core$Equatable*) $tmp81), ((frost$core$Equatable*) &$s82));
*(&local8) = $tmp86;
goto block10;
block9:;
*(&local8) = $tmp79;
goto block10;
block10:;
frost$core$Bit $tmp87 = *(&local8);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block6; else goto block7;
block6:;
// line 916
frost$core$String* $tmp89 = *(&local6);
frost$core$RegularExpression* $tmp90 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp90, &$s91);
org$frostlang$frostc$frostdoc$Markdown** $tmp92 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp93 = *$tmp92;
org$frostlang$frostc$frostdoc$Protector** $tmp94 = &$tmp93->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp95 = *$tmp94;
$fn97 $tmp96 = ($fn97) $tmp95->$class->vtable[2];
frost$core$String* $tmp98 = $tmp96($tmp95, &$s99);
frost$core$String* $tmp100 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp89, $tmp90, $tmp98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$String* $tmp101 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local6) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($204:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($203:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($196:frost.core.RegularExpression)
// line 917
frost$core$String* $tmp102 = *(&local6);
frost$core$RegularExpression* $tmp103 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp103, &$s104);
org$frostlang$frostc$frostdoc$Markdown** $tmp105 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp106 = *$tmp105;
org$frostlang$frostc$frostdoc$Protector** $tmp107 = &$tmp106->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp108 = *$tmp107;
$fn110 $tmp109 = ($fn110) $tmp108->$class->vtable[2];
frost$core$String* $tmp111 = $tmp109($tmp108, &$s112);
frost$core$String* $tmp113 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp102, $tmp103, $tmp111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$String* $tmp114 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local6) = $tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($230:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($222:frost.core.RegularExpression)
// line 918
frost$core$String* $tmp115 = *(&local2);
frost$core$String* $tmp116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s117, $tmp115);
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp116, &$s119);
frost$core$String* $tmp120 = *(&local6);
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp118, $tmp120);
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$String* $tmp124 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local7) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($253:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($252:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($250:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($249:frost.core.String)
goto block7;
block7:;
// line 920
frost$core$String* $tmp125 = *(&local5);
frost$core$String* $tmp126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s127, $tmp125);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp126, &$s129);
frost$core$String* $tmp130 = *(&local7);
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp128, $tmp130);
frost$core$String* $tmp132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp131, &$s133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$String* $tmp134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($279:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($278:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($276:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($275:frost.core.String)
frost$core$String* $tmp135 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing titleTag
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp136 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing title
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp137 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing url
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block5:;
// line 1
// line 923
frost$core$String* $tmp138 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$String* $tmp139 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local0) = $tmp138;
goto block4;
block4:;
// line 925
frost$core$String* $tmp140 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp141 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing defn
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp142 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing id
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing altText
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp144 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing wholeMatch
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing replacementText
*(&local0) = ((frost$core$String*) NULL);
return $tmp140;

}

