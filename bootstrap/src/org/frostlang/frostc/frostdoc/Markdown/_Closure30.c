#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure30$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure30$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn47)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn59)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn79)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn89)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn101)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn146)(frost$core$String*);
typedef frost$core$String* (*$fn148)(frost$core$Object*, frost$core$String*);

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
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 1025
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure30$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure30* param0) {

// line 1025
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
frost$core$Bit local8;
frost$core$String* local9 = NULL;
frost$core$String* local10 = NULL;
// line 1026
*(&local0) = ((frost$core$String*) NULL);
// line 1027
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
// line 1028
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
// line 1029
frost$core$String* $tmp19 = *(&local2);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp20 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local3) = $tmp19;
// line 1030
frost$core$String* $tmp21 = *(&local3);
frost$core$RegularExpression* $tmp22 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp22, &$s23);
frost$core$String* $tmp24 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp21, $tmp22, &$s25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$String* $tmp26 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local3) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($48:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($46:frost.core.RegularExpression)
// line 1031
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
// unreffing REF($71:frost.collections.HashMap.V?)
// line 1032
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp34 = *(&local4);
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block3;
block1:;
// line 1033
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp37 = *(&local4);
frost$core$String** $tmp38 = &$tmp37->url;
frost$core$String* $tmp39 = *$tmp38;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp40 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local5) = $tmp39;
// line 1035
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
// unreffing REF($109:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($108:frost.core.String)
// line 1036
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
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($129:frost.core.String)
// line 1037
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp65 = *(&local4);
frost$core$String** $tmp66 = &$tmp65->title;
frost$core$String* $tmp67 = *$tmp66;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$String* $tmp68 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local6) = $tmp67;
// line 1038
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s69));
frost$core$String* $tmp70 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local7) = &$s71;
// line 1039
frost$core$String* $tmp72 = *(&local6);
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(true);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block6; else goto block7;
block6:;
frost$core$String* $tmp75 = *(&local6);
ITable* $tmp77 = ((frost$core$Equatable*) $tmp75)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[1];
frost$core$Bit $tmp80 = $tmp78(((frost$core$Equatable*) $tmp75), ((frost$core$Equatable*) &$s76));
*(&local8) = $tmp80;
goto block8;
block7:;
*(&local8) = $tmp73;
goto block8;
block8:;
frost$core$Bit $tmp81 = *(&local8);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block4; else goto block5;
block4:;
// line 1041
frost$core$String* $tmp83 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp84 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp85 = *$tmp84;
org$frostlang$frostc$frostdoc$Protector** $tmp86 = &$tmp85->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp87 = *$tmp86;
$fn89 $tmp88 = ($fn89) $tmp87->$class->vtable[2];
frost$core$String* $tmp90 = $tmp88($tmp87, &$s91);
frost$core$String* $tmp92 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp83, &$s93, $tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$String* $tmp94 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local6) = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($189:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($188:frost.core.String)
// line 1042
frost$core$String* $tmp95 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp96 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp97 = *$tmp96;
org$frostlang$frostc$frostdoc$Protector** $tmp98 = &$tmp97->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp99 = *$tmp98;
$fn101 $tmp100 = ($fn101) $tmp99->$class->vtable[2];
frost$core$String* $tmp102 = $tmp100($tmp99, &$s103);
frost$core$String* $tmp104 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp95, &$s105, $tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$String* $tmp106 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local6) = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($210:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($209:frost.core.String)
// line 1043
frost$core$String* $tmp107 = *(&local6);
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s109, $tmp107);
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, &$s111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$String* $tmp112 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local7) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($226:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($225:frost.core.String)
goto block5;
block5:;
// line 1045
frost$core$String* $tmp113 = *(&local5);
frost$core$String* $tmp114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s115, $tmp113);
frost$core$String* $tmp116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp114, &$s117);
frost$core$String* $tmp118 = *(&local7);
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp116, $tmp118);
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, &$s121);
frost$core$String* $tmp122 = *(&local2);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp120, $tmp122);
frost$core$String* $tmp124 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp123, &$s125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$String* $tmp126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local0) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($250:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($249:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($246:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($245:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($242:frost.core.String)
frost$core$String* $tmp127 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing titleTag
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp128 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing title
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp129 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing url
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 1048
org$frostlang$frostc$frostdoc$Markdown** $tmp130 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp131 = *$tmp130;
frost$core$MutableMethod** $tmp132 = &$tmp131->linkResolver;
frost$core$MutableMethod* $tmp133 = *$tmp132;
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133 != NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block9; else goto block11;
block9:;
// line 1049
org$frostlang$frostc$frostdoc$Markdown** $tmp136 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp137 = *$tmp136;
frost$core$MutableMethod** $tmp138 = &$tmp137->linkResolver;
frost$core$MutableMethod* $tmp139 = *$tmp138;
frost$core$String* $tmp140 = *(&local2);
frost$core$Int8** $tmp141 = &$tmp139->pointer;
frost$core$Int8* $tmp142 = *$tmp141;
frost$core$Object** $tmp143 = &$tmp139->target;
frost$core$Object* $tmp144 = *$tmp143;
bool $tmp145 = $tmp144 != ((frost$core$Object*) NULL);
if ($tmp145) goto block12; else goto block13;
block13:;
frost$core$String* $tmp147 = (($fn146) $tmp142)($tmp140);
*(&local9) = $tmp147;
goto block14;
block12:;
frost$core$String* $tmp149 = (($fn148) $tmp142)($tmp144, $tmp140);
*(&local9) = $tmp149;
goto block14;
block14:;
frost$core$String* $tmp150 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$String* $tmp151 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local0) = $tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($324:frost.core.String?)
// line 1050
frost$core$String* $tmp152 = *(&local0);
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152 != NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block15; else goto block17;
block15:;
// line 1051
frost$core$String* $tmp155 = *(&local2);
frost$core$String* $tmp156 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp155, &$s157, &$s158);
frost$core$String* $tmp159 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp156, &$s160, &$s161);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$String* $tmp162 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local10) = $tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing REF($344:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($343:frost.core.String)
// line 1052
frost$core$String* $tmp163 = *(&local0);
frost$core$String* $tmp164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s165, $tmp163);
frost$core$String* $tmp166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp164, &$s167);
frost$core$String* $tmp168 = *(&local10);
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp166, $tmp168);
frost$core$String* $tmp170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp169, &$s171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$String* $tmp172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local0) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing REF($365:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// unreffing REF($364:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($362:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// unreffing REF($361:frost.core.String)
frost$core$String* $tmp173 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing escaped
*(&local10) = ((frost$core$String*) NULL);
goto block16;
block17:;
// line 1
// line 1055
frost$core$String* $tmp174 = *(&local2);
frost$core$String* $tmp175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s176, $tmp174);
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp175, &$s178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$String* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($396:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($395:frost.core.String)
goto block16;
block16:;
goto block10;
block11:;
// line 1
// line 1059
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s180));
frost$core$String* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local0) = &$s180;
goto block10;
block10:;
goto block2;
block2:;
// line 1062
frost$core$String* $tmp182 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp183 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing defn
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp184 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing id
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing linkText
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing wholeMatch
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing replacementText
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp182);

}

