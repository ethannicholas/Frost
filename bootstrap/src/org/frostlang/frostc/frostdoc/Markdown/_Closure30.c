#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure30$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure30$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn47)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn59)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn79)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn88)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn100)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn145)(frost$core$String*);
typedef frost$core$String* (*$fn147)(frost$core$Object*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x30", 49, -5097778637230146538, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 1030
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0) {

// line 1030
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$String* local8 = NULL;
frost$core$String* local9 = NULL;
// line 1031
*(&local0) = ((frost$core$String*) NULL);
// line 1032
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
// line 1033
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
// line 1034
frost$core$String* $tmp19 = *(&local2);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp20 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local3) = $tmp19;
// line 1035
frost$core$String* $tmp21 = *(&local3);
frost$core$RegularExpression* $tmp22 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp22, &$s23);
frost$core$String* $tmp24 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp21, $tmp22, &$s25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$String* $tmp26 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local3) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// line 1036
org$frostlang$frostc$frostdoc$Markdown** $tmp27 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp28 = *$tmp27;
frost$collections$HashMap** $tmp29 = &$tmp28->linkDefinitions;
frost$collections$HashMap* $tmp30 = *$tmp29;
frost$core$String* $tmp31 = *(&local3);
frost$core$Object* $tmp32 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp30, ((frost$collections$Key*) $tmp31));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp32)));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp33 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp32);
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
// line 1037
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp34 = *(&local4);
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block3;
block1:;
// line 1038
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp37 = *(&local4);
frost$core$String** $tmp38 = &$tmp37->url;
frost$core$String* $tmp39 = *$tmp38;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp40 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local5) = $tmp39;
// line 1040
frost$core$String* $tmp41 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp42 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp43 = *$tmp42;
org$frostlang$frostc$frostdoc$Protector** $tmp44 = &$tmp43->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp45 = *$tmp44;
$fn47 $tmp46 = ($fn47) $tmp45->$class->vtable[2];
frost$core$String* $tmp48 = $tmp46($tmp45, &$s49);
frost$core$String* $tmp50 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp41, &$s51, $tmp48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$String* $tmp52 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local5) = $tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// line 1041
frost$core$String* $tmp53 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp54 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp55 = *$tmp54;
org$frostlang$frostc$frostdoc$Protector** $tmp56 = &$tmp55->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp57 = *$tmp56;
$fn59 $tmp58 = ($fn59) $tmp57->$class->vtable[2];
frost$core$String* $tmp60 = $tmp58($tmp57, &$s61);
frost$core$String* $tmp62 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp53, &$s63, $tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String* $tmp64 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local5) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// line 1042
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp65 = *(&local4);
frost$core$String** $tmp66 = &$tmp65->title;
frost$core$String* $tmp67 = *$tmp66;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$String* $tmp68 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local6) = $tmp67;
// line 1043
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s69));
frost$core$String* $tmp70 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local7) = &$s71;
// line 1044
frost$core$String* $tmp72 = *(&local6);
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(true);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block6; else goto block5;
block6:;
frost$core$String* $tmp75 = *(&local6);
ITable* $tmp77 = ((frost$core$Equatable*) $tmp75)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[1];
frost$core$Bit $tmp80 = $tmp78(((frost$core$Equatable*) $tmp75), ((frost$core$Equatable*) &$s76));
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block4; else goto block5;
block4:;
// line 1046
frost$core$String* $tmp82 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp83 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp84 = *$tmp83;
org$frostlang$frostc$frostdoc$Protector** $tmp85 = &$tmp84->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp86 = *$tmp85;
$fn88 $tmp87 = ($fn88) $tmp86->$class->vtable[2];
frost$core$String* $tmp89 = $tmp87($tmp86, &$s90);
frost$core$String* $tmp91 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp82, &$s92, $tmp89);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$String* $tmp93 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local6) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// line 1047
frost$core$String* $tmp94 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp95 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp96 = *$tmp95;
org$frostlang$frostc$frostdoc$Protector** $tmp97 = &$tmp96->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp98 = *$tmp97;
$fn100 $tmp99 = ($fn100) $tmp98->$class->vtable[2];
frost$core$String* $tmp101 = $tmp99($tmp98, &$s102);
frost$core$String* $tmp103 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp94, &$s104, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$String* $tmp105 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local6) = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// line 1048
frost$core$String* $tmp106 = *(&local6);
frost$core$String* $tmp107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s108, $tmp106);
frost$core$String* $tmp109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp107, &$s110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$String* $tmp111 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local7) = $tmp109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
goto block5;
block5:;
// line 1050
frost$core$String* $tmp112 = *(&local5);
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s114, $tmp112);
frost$core$String* $tmp115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp113, &$s116);
frost$core$String* $tmp117 = *(&local7);
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp115, $tmp117);
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp118, &$s120);
frost$core$String* $tmp121 = *(&local2);
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, $tmp121);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp122, &$s124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$String* $tmp125 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local0) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$String* $tmp126 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp127 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp128 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 1053
org$frostlang$frostc$frostdoc$Markdown** $tmp129 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp130 = *$tmp129;
frost$core$MutableMethod** $tmp131 = &$tmp130->linkResolver;
frost$core$MutableMethod* $tmp132 = *$tmp131;
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132 != NULL);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block7; else goto block9;
block7:;
// line 1054
org$frostlang$frostc$frostdoc$Markdown** $tmp135 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp136 = *$tmp135;
frost$core$MutableMethod** $tmp137 = &$tmp136->linkResolver;
frost$core$MutableMethod* $tmp138 = *$tmp137;
frost$core$String* $tmp139 = *(&local2);
frost$core$Int8** $tmp140 = &$tmp138->pointer;
frost$core$Int8* $tmp141 = *$tmp140;
frost$core$Object** $tmp142 = &$tmp138->target;
frost$core$Object* $tmp143 = *$tmp142;
bool $tmp144 = $tmp143 != ((frost$core$Object*) NULL);
if ($tmp144) goto block10; else goto block11;
block11:;
frost$core$String* $tmp146 = (($fn145) $tmp141)($tmp139);
*(&local8) = $tmp146;
goto block12;
block10:;
frost$core$String* $tmp148 = (($fn147) $tmp141)($tmp143, $tmp139);
*(&local8) = $tmp148;
goto block12;
block12:;
frost$core$String* $tmp149 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$String* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local0) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// line 1055
frost$core$String* $tmp151 = *(&local0);
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit($tmp151 != NULL);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block13; else goto block15;
block13:;
// line 1056
frost$core$String* $tmp154 = *(&local2);
frost$core$String* $tmp155 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp154, &$s156, &$s157);
frost$core$String* $tmp158 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp155, &$s159, &$s160);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$String* $tmp161 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local9) = $tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// line 1057
frost$core$String* $tmp162 = *(&local0);
frost$core$String* $tmp163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s164, $tmp162);
frost$core$String* $tmp165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp163, &$s166);
frost$core$String* $tmp167 = *(&local9);
frost$core$String* $tmp168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp165, $tmp167);
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp168, &$s170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$String* $tmp171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local0) = $tmp169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String* $tmp172 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local9) = ((frost$core$String*) NULL);
goto block14;
block15:;
// line 1
// line 1060
frost$core$String* $tmp173 = *(&local2);
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s175, $tmp173);
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp174, &$s177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$String* $tmp178 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local0) = $tmp176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
goto block14;
block14:;
goto block8;
block9:;
// line 1
// line 1064
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s179));
frost$core$String* $tmp180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local0) = &$s179;
goto block8;
block8:;
goto block2;
block2:;
// line 1067
frost$core$String* $tmp181 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp182 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp183 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp184 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp185 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp181);

}

