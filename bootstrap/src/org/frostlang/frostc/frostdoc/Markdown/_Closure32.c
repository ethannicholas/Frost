#include "org/frostlang/frostc/frostdoc/Markdown/_Closure32.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Int.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure32$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure32$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn48)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn60)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn80)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn89)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn101)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn151)(frost$core$String*);
typedef frost$core$String* (*$fn153)(frost$core$Object*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x32", 49, -4905414781225753864, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, -773016652946297676, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, -6648448206422497324, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 6240236502603552868, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 8936268775352766043, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 105, 3034230057099775913, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 6240236502603552868, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, -7980124689787216696, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -7375875842575515141, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, -499582956685639371, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -3509505023525702139, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure32* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1030
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure32$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure32* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1030
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure32* param0, frost$collections$ListView* param1) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1031
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1032
frost$core$Int $tmp7 = (frost$core$Int) {1u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1033
frost$core$Int $tmp13 = (frost$core$Int) {2u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1034
frost$core$String* $tmp19 = *(&local2);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp20 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local3) = $tmp19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1035
frost$core$String* $tmp21 = *(&local3);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp22 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp22, &$s23);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:1035:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
frost$core$Bit $tmp24 = (frost$core$Bit) {true};
frost$core$String* $tmp25 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String($tmp21, $tmp22, &$s26, $tmp24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$String* $tmp27 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local3) = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1036
org$frostlang$frostc$frostdoc$Markdown** $tmp28 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp29 = *$tmp28;
frost$collections$HashMap** $tmp30 = &$tmp29->linkDefinitions;
frost$collections$HashMap* $tmp31 = *$tmp30;
frost$core$String* $tmp32 = *(&local3);
frost$core$Object* $tmp33 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp31, ((frost$collections$Key*) $tmp32));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp33)));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp34 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) $tmp33);
frost$core$Frost$unref$frost$core$Object$Q($tmp33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1037
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp35 = *(&local4);
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35 != NULL};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block2; else goto block4;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1038
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp38 = *(&local4);
frost$core$String** $tmp39 = &$tmp38->url;
frost$core$String* $tmp40 = *$tmp39;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$String* $tmp41 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local5) = $tmp40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1040
frost$core$String* $tmp42 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp43 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp44 = *$tmp43;
org$frostlang$frostc$frostdoc$Protector** $tmp45 = &$tmp44->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp46 = *$tmp45;
$fn48 $tmp47 = ($fn48) $tmp46->$class->vtable[2];
frost$core$String* $tmp49 = $tmp47($tmp46, &$s50);
frost$core$String* $tmp51 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp42, &$s52, $tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$String* $tmp53 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local5) = $tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1041
frost$core$String* $tmp54 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp55 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp56 = *$tmp55;
org$frostlang$frostc$frostdoc$Protector** $tmp57 = &$tmp56->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp58 = *$tmp57;
$fn60 $tmp59 = ($fn60) $tmp58->$class->vtable[2];
frost$core$String* $tmp61 = $tmp59($tmp58, &$s62);
frost$core$String* $tmp63 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp54, &$s64, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$String* $tmp65 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local5) = $tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1042
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp66 = *(&local4);
frost$core$String** $tmp67 = &$tmp66->title;
frost$core$String* $tmp68 = *$tmp67;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$String* $tmp69 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local6) = $tmp68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1043
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s70));
frost$core$String* $tmp71 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local7) = &$s72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1044
frost$core$String* $tmp73 = *(&local6);
frost$core$Bit $tmp74 = (frost$core$Bit) {true};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block7; else goto block6;
block7:;
frost$core$String* $tmp76 = *(&local6);
ITable* $tmp78 = ((frost$core$Equatable*) $tmp76)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[1];
frost$core$Bit $tmp81 = $tmp79(((frost$core$Equatable*) $tmp76), ((frost$core$Equatable*) &$s77));
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1046
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1047
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1048
frost$core$String* $tmp107 = *(&local6);
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s109, $tmp107);
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, &$s111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$String* $tmp112 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local7) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1050
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$String* $tmp127 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp128 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp129 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local5) = ((frost$core$String*) NULL);
goto block3;
block4:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1053
org$frostlang$frostc$frostdoc$Markdown** $tmp130 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp131 = *$tmp130;
frost$core$MutableMethod** $tmp132 = &$tmp131->linkResolver;
frost$core$MutableMethod* $tmp133 = *$tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133 != NULL};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1054
org$frostlang$frostc$frostdoc$Markdown** $tmp136 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp137 = *$tmp136;
frost$core$MutableMethod** $tmp138 = &$tmp137->linkResolver;
frost$core$MutableMethod* $tmp139 = *$tmp138;
frost$core$String* $tmp140 = *(&local2);
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp139 != NULL};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block11; else goto block12;
block12:;
frost$core$Int $tmp143 = (frost$core$Int) {1054u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s144, $tmp143, &$s145);
abort(); // unreachable
block11:;
frost$core$Int8** $tmp146 = &$tmp139->pointer;
frost$core$Int8* $tmp147 = *$tmp146;
frost$core$Object** $tmp148 = &$tmp139->target;
frost$core$Object* $tmp149 = *$tmp148;
bool $tmp150 = $tmp149 != ((frost$core$Object*) NULL);
if ($tmp150) goto block13; else goto block14;
block14:;
frost$core$String* $tmp152 = (($fn151) $tmp147)($tmp140);
*(&local8) = $tmp152;
goto block15;
block13:;
frost$core$String* $tmp154 = (($fn153) $tmp147)($tmp149, $tmp140);
*(&local8) = $tmp154;
goto block15;
block15:;
frost$core$String* $tmp155 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$String* $tmp156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local0) = $tmp155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1055
frost$core$String* $tmp157 = *(&local0);
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157 != NULL};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1056
frost$core$String* $tmp160 = *(&local2);
frost$core$String* $tmp161 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp160, &$s162, &$s163);
frost$core$String* $tmp164 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp161, &$s165, &$s166);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$String* $tmp167 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local9) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1057
frost$core$String* $tmp168 = *(&local0);
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s170, $tmp168);
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp169, &$s172);
frost$core$String* $tmp173 = *(&local9);
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, $tmp173);
frost$core$String* $tmp175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp174, &$s176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$String* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local0) = $tmp175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$String* $tmp178 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1060
frost$core$String* $tmp179 = *(&local2);
frost$core$String* $tmp180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s181, $tmp179);
frost$core$String* $tmp182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp180, &$s183);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$String* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local0) = $tmp182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
goto block17;
block17:;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1064
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s185));
frost$core$String* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = &$s185;
goto block9;
block9:;
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1067
frost$core$String* $tmp187 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp188 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp190 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp191 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp192 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp187);

}

