#include "org/frostlang/frostc/frostdoc/Markdown/_Closure27.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure27$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure27$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure27$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure27$$anonymous26$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn53)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn66)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn96)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn109)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x37", 49, -5097778637230146632, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3e", 2, 15010, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure27$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure27* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 898
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure27$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure27* param0) {

// line 898
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure27$$anonymous26$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure27* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
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
if ($tmp80) goto block8; else goto block7;
block8:;
frost$core$String* $tmp81 = *(&local6);
ITable* $tmp83 = ((frost$core$Equatable*) $tmp81)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Bit $tmp86 = $tmp84(((frost$core$Equatable*) $tmp81), ((frost$core$Equatable*) &$s82));
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block6; else goto block7;
block6:;
// line 916
frost$core$String* $tmp88 = *(&local6);
frost$core$RegularExpression* $tmp89 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp89, &$s90);
org$frostlang$frostc$frostdoc$Markdown** $tmp91 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp92 = *$tmp91;
org$frostlang$frostc$frostdoc$Protector** $tmp93 = &$tmp92->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp94 = *$tmp93;
$fn96 $tmp95 = ($fn96) $tmp94->$class->vtable[2];
frost$core$String* $tmp97 = $tmp95($tmp94, &$s98);
frost$core$String* $tmp99 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp88, $tmp89, $tmp97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$String* $tmp100 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local6) = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// line 917
frost$core$String* $tmp101 = *(&local6);
frost$core$RegularExpression* $tmp102 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp102, &$s103);
org$frostlang$frostc$frostdoc$Markdown** $tmp104 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp105 = *$tmp104;
org$frostlang$frostc$frostdoc$Protector** $tmp106 = &$tmp105->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp107 = *$tmp106;
$fn109 $tmp108 = ($fn109) $tmp107->$class->vtable[2];
frost$core$String* $tmp110 = $tmp108($tmp107, &$s111);
frost$core$String* $tmp112 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp101, $tmp102, $tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$String* $tmp113 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local6) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// line 918
frost$core$String* $tmp114 = *(&local2);
frost$core$String* $tmp115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s116, $tmp114);
frost$core$String* $tmp117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp115, &$s118);
frost$core$String* $tmp119 = *(&local6);
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp117, $tmp119);
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp120, &$s122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$String* $tmp123 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local7) = $tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
goto block7;
block7:;
// line 920
frost$core$String* $tmp124 = *(&local5);
frost$core$String* $tmp125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s126, $tmp124);
frost$core$String* $tmp127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp125, &$s128);
frost$core$String* $tmp129 = *(&local7);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp127, $tmp129);
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp130, &$s132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$String* $tmp133 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local0) = $tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$String* $tmp134 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp135 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp136 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block5:;
// line 1
// line 923
frost$core$String* $tmp137 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$String* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local0) = $tmp137;
goto block4;
block4:;
// line 925
frost$core$String* $tmp139 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp140 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp141 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp142 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp143 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local0) = ((frost$core$String*) NULL);
return $tmp139;

}

