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
org$frostlang$frostc$frostdoc$Markdown$_Closure24$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure24$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure24$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn68)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn81)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn105)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn117)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn130)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x34", 49, -5097778637230146635, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -6696370019536876819, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -6696370019536876819, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3e", 2, 15010, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };

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
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {903};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block3:;
frost$core$Bit $tmp31 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp25, &$s32);
bool $tmp33 = $tmp31.value;
if ($tmp33) goto block1; else goto block2;
block1:;
// line 904
frost$core$String* $tmp34 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String* $tmp35 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local3) = $tmp34;
goto block2;
block2:;
// line 908
org$frostlang$frostc$frostdoc$Markdown** $tmp36 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp37 = *$tmp36;
frost$collections$HashMap** $tmp38 = &$tmp37->linkDefinitions;
frost$collections$HashMap* $tmp39 = *$tmp38;
frost$core$String* $tmp40 = *(&local3);
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit($tmp40 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {908};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block5:;
frost$core$Object* $tmp46 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp39, ((frost$collections$Key*) $tmp40));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp46)));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp47 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp46);
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
// unreffing REF($88:frost.collections.HashMap.V?)
// line 909
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp48 = *(&local4);
frost$core$Bit $tmp49 = frost$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block7; else goto block9;
block7:;
// line 910
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp51 = *(&local4);
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {910};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block10:;
frost$core$String** $tmp57 = &$tmp51->url;
frost$core$String* $tmp58 = *$tmp57;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$String* $tmp59 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local5) = $tmp58;
// line 911
frost$core$String* $tmp60 = *(&local5);
frost$core$RegularExpression* $tmp61 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp61, &$s62);
org$frostlang$frostc$frostdoc$Markdown** $tmp63 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp64 = *$tmp63;
org$frostlang$frostc$frostdoc$Protector** $tmp65 = &$tmp64->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp66 = *$tmp65;
$fn68 $tmp67 = ($fn68) $tmp66->$class->vtable[2];
frost$core$String* $tmp69 = $tmp67($tmp66, &$s70);
frost$core$String* $tmp71 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp60, $tmp61, $tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$String* $tmp72 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local5) = $tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($135:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($134:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($127:frost.core.RegularExpression)
// line 912
frost$core$String* $tmp73 = *(&local5);
frost$core$RegularExpression* $tmp74 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp74, &$s75);
org$frostlang$frostc$frostdoc$Markdown** $tmp76 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp77 = *$tmp76;
org$frostlang$frostc$frostdoc$Protector** $tmp78 = &$tmp77->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp79 = *$tmp78;
$fn81 $tmp80 = ($fn81) $tmp79->$class->vtable[2];
frost$core$String* $tmp82 = $tmp80($tmp79, &$s83);
frost$core$String* $tmp84 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp73, $tmp74, $tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$String* $tmp85 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local5) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($161:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($160:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($153:frost.core.RegularExpression)
// line 913
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp86 = *(&local4);
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {913};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block12:;
frost$core$String** $tmp92 = &$tmp86->title;
frost$core$String* $tmp93 = *$tmp92;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$String* $tmp94 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local6) = $tmp93;
// line 914
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s95));
frost$core$String* $tmp96 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local7) = &$s97;
// line 915
frost$core$String* $tmp98 = *(&local6);
frost$core$Bit $tmp99 = frost$core$Bit$init$builtin_bit(true);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block16; else goto block17;
block16:;
frost$core$String* $tmp101 = *(&local6);
ITable* $tmp103 = ((frost$core$Equatable*) $tmp101)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[1];
frost$core$Bit $tmp106 = $tmp104(((frost$core$Equatable*) $tmp101), ((frost$core$Equatable*) &$s102));
*(&local8) = $tmp106;
goto block18;
block17:;
*(&local8) = $tmp99;
goto block18;
block18:;
frost$core$Bit $tmp107 = *(&local8);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block14; else goto block15;
block14:;
// line 916
frost$core$String* $tmp109 = *(&local6);
frost$core$RegularExpression* $tmp110 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp110, &$s111);
org$frostlang$frostc$frostdoc$Markdown** $tmp112 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp113 = *$tmp112;
org$frostlang$frostc$frostdoc$Protector** $tmp114 = &$tmp113->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp115 = *$tmp114;
$fn117 $tmp116 = ($fn117) $tmp115->$class->vtable[2];
frost$core$String* $tmp118 = $tmp116($tmp115, &$s119);
frost$core$String* $tmp120 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp109, $tmp110, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp121 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local6) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($232:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($231:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($224:frost.core.RegularExpression)
// line 917
frost$core$String* $tmp122 = *(&local6);
frost$core$RegularExpression* $tmp123 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp123, &$s124);
org$frostlang$frostc$frostdoc$Markdown** $tmp125 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp126 = *$tmp125;
org$frostlang$frostc$frostdoc$Protector** $tmp127 = &$tmp126->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp128 = *$tmp127;
$fn130 $tmp129 = ($fn130) $tmp128->$class->vtable[2];
frost$core$String* $tmp131 = $tmp129($tmp128, &$s132);
frost$core$String* $tmp133 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp122, $tmp123, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp134 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local6) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($258:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($257:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($250:frost.core.RegularExpression)
// line 918
frost$core$String* $tmp135 = *(&local2);
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135 != NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {918};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block19:;
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s142, $tmp135);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp141, &$s144);
frost$core$String* $tmp145 = *(&local6);
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, $tmp145);
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, &$s148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$String* $tmp149 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local7) = $tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($288:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($287:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($285:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($284:frost.core.String)
goto block15;
block15:;
// line 920
frost$core$String* $tmp150 = *(&local5);
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s152, $tmp150);
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp151, &$s154);
frost$core$String* $tmp155 = *(&local7);
frost$core$String* $tmp156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp153, $tmp155);
frost$core$String* $tmp157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp156, &$s158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$String* $tmp159 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local0) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing REF($314:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($313:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($311:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($310:frost.core.String)
frost$core$String* $tmp160 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing titleTag
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp161 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing title
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp162 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing url
*(&local5) = ((frost$core$String*) NULL);
goto block8;
block9:;
// line 1
// line 923
frost$core$String* $tmp163 = *(&local1);
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163 != NULL);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {923};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s167, $tmp166, &$s168);
abort(); // unreachable
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String* $tmp169 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local0) = $tmp163;
goto block8;
block8:;
// line 925
frost$core$String* $tmp170 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp171 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing defn
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp172 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing id
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing altText
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing wholeMatch
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp175 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing replacementText
*(&local0) = ((frost$core$String*) NULL);
return $tmp170;

}

