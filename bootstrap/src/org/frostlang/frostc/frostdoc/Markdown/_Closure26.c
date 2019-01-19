#include "org/frostlang/frostc/frostdoc/Markdown/_Closure26.h"
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
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure26$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure26$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure26$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn66)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn78)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn103)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn113)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn125)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x36", 49, -5097778637230146633, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -6696370019536876819, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -6696370019536876819, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 936
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure26$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0) {

// line 936
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$Bit local8;
// line 937
*(&local0) = ((frost$core$String*) NULL);
// line 938
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
// line 939
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
// line 940
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
// line 941
frost$core$String* $tmp25 = *(&local3);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {941};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block3:;
frost$core$Bit $tmp31 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp25, &$s32);
bool $tmp33 = $tmp31.value;
if ($tmp33) goto block1; else goto block2;
block1:;
// line 942
frost$core$String* $tmp34 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String* $tmp35 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local3) = $tmp34;
goto block2;
block2:;
// line 945
org$frostlang$frostc$frostdoc$Markdown** $tmp36 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp37 = *$tmp36;
frost$collections$HashMap** $tmp38 = &$tmp37->linkDefinitions;
frost$collections$HashMap* $tmp39 = *$tmp38;
frost$core$String* $tmp40 = *(&local3);
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit($tmp40 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {945};
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
// line 946
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp48 = *(&local4);
frost$core$Bit $tmp49 = frost$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block7; else goto block9;
block7:;
// line 947
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp51 = *(&local4);
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {947};
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
// line 949
frost$core$String* $tmp60 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp61 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp62 = *$tmp61;
org$frostlang$frostc$frostdoc$Protector** $tmp63 = &$tmp62->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp64 = *$tmp63;
$fn66 $tmp65 = ($fn66) $tmp64->$class->vtable[2];
frost$core$String* $tmp67 = $tmp65($tmp64, &$s68);
frost$core$String* $tmp69 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp60, &$s70, $tmp67);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$String* $tmp71 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local5) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($133:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($132:frost.core.String)
// line 950
frost$core$String* $tmp72 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp73 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp74 = *$tmp73;
org$frostlang$frostc$frostdoc$Protector** $tmp75 = &$tmp74->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp76 = *$tmp75;
$fn78 $tmp77 = ($fn78) $tmp76->$class->vtable[2];
frost$core$String* $tmp79 = $tmp77($tmp76, &$s80);
frost$core$String* $tmp81 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp72, &$s82, $tmp79);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp83 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local5) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($154:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($153:frost.core.String)
// line 951
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp84 = *(&local4);
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit($tmp84 != NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp87 = (frost$core$Int64) {951};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s88, $tmp87, &$s89);
abort(); // unreachable
block12:;
frost$core$String** $tmp90 = &$tmp84->title;
frost$core$String* $tmp91 = *$tmp90;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$String* $tmp92 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local6) = $tmp91;
// line 952
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s93));
frost$core$String* $tmp94 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local7) = &$s95;
// line 953
frost$core$String* $tmp96 = *(&local6);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit(true);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block16; else goto block17;
block16:;
frost$core$String* $tmp99 = *(&local6);
ITable* $tmp101 = ((frost$core$Equatable*) $tmp99)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[1];
frost$core$Bit $tmp104 = $tmp102(((frost$core$Equatable*) $tmp99), ((frost$core$Equatable*) &$s100));
*(&local8) = $tmp104;
goto block18;
block17:;
*(&local8) = $tmp97;
goto block18;
block18:;
frost$core$Bit $tmp105 = *(&local8);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block14; else goto block15;
block14:;
// line 955
frost$core$String* $tmp107 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp108 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp109 = *$tmp108;
org$frostlang$frostc$frostdoc$Protector** $tmp110 = &$tmp109->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp111 = *$tmp110;
$fn113 $tmp112 = ($fn113) $tmp111->$class->vtable[2];
frost$core$String* $tmp114 = $tmp112($tmp111, &$s115);
frost$core$String* $tmp116 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp107, &$s117, $tmp114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$String* $tmp118 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local6) = $tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($220:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($219:frost.core.String)
// line 956
frost$core$String* $tmp119 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp120 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp121 = *$tmp120;
org$frostlang$frostc$frostdoc$Protector** $tmp122 = &$tmp121->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp123 = *$tmp122;
$fn125 $tmp124 = ($fn125) $tmp123->$class->vtable[2];
frost$core$String* $tmp126 = $tmp124($tmp123, &$s127);
frost$core$String* $tmp128 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp119, &$s129, $tmp126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$String* $tmp130 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local6) = $tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($241:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($240:frost.core.String)
// line 957
frost$core$String* $tmp131 = *(&local6);
frost$core$String* $tmp132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s133, $tmp131);
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp132, &$s135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$String* $tmp136 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local7) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($257:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($256:frost.core.String)
goto block15;
block15:;
// line 959
frost$core$String* $tmp137 = *(&local5);
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s139, $tmp137);
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, &$s141);
frost$core$String* $tmp142 = *(&local7);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp140, $tmp142);
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s145);
frost$core$String* $tmp146 = *(&local2);
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit($tmp146 != NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp149 = (frost$core$Int64) {959};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s150, $tmp149, &$s151);
abort(); // unreachable
block19:;
frost$core$String* $tmp152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp144, $tmp146);
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp152, &$s154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$String* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local0) = $tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($288:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($287:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($277:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($276:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($274:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// unreffing REF($273:frost.core.String)
frost$core$String* $tmp156 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing titleTag
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp157 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing title
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp158 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing url
*(&local5) = ((frost$core$String*) NULL);
goto block8;
block9:;
// line 1
// line 962
frost$core$String* $tmp159 = *(&local1);
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159 != NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp162 = (frost$core$Int64) {962};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s163, $tmp162, &$s164);
abort(); // unreachable
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$String* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local0) = $tmp159;
goto block8;
block8:;
// line 964
frost$core$String* $tmp166 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp167 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing defn
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp168 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// unreffing id
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp169 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// unreffing linkText
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp170 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing wholeMatch
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing replacementText
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp166);

}

