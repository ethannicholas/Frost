#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
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
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure28$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure28$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn51)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn63)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn83)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn92)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn104)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 49, -4904429618807066033, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, -6648448206422497324, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 6240236502603552868, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 8936268775352766043, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:937
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:938
frost$core$Int64 $tmp7 = (frost$core$Int64) {1u};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:939
frost$core$Int64 $tmp13 = (frost$core$Int64) {2u};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:940
frost$core$Int64 $tmp19 = (frost$core$Int64) {3u};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:941
frost$core$String* $tmp25 = *(&local3);
frost$core$Bit $tmp26 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp25, &$s27);
bool $tmp28 = $tmp26.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:942
frost$core$String* $tmp29 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp30 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local3) = $tmp29;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:945
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:946
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp38 = *(&local4);
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38 != NULL};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:947
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp41 = *(&local4);
frost$core$String** $tmp42 = &$tmp41->url;
frost$core$String* $tmp43 = *$tmp42;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp44 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local5) = $tmp43;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:949
frost$core$String* $tmp45 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp46 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp47 = *$tmp46;
org$frostlang$frostc$frostdoc$Protector** $tmp48 = &$tmp47->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp49 = *$tmp48;
$fn51 $tmp50 = ($fn51) $tmp49->$class->vtable[2];
frost$core$String* $tmp52 = $tmp50($tmp49, &$s53);
frost$core$String* $tmp54 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp45, &$s55, $tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$String* $tmp56 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local5) = $tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:950
frost$core$String* $tmp57 = *(&local5);
org$frostlang$frostc$frostdoc$Markdown** $tmp58 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp59 = *$tmp58;
org$frostlang$frostc$frostdoc$Protector** $tmp60 = &$tmp59->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp61 = *$tmp60;
$fn63 $tmp62 = ($fn63) $tmp61->$class->vtable[2];
frost$core$String* $tmp64 = $tmp62($tmp61, &$s65);
frost$core$String* $tmp66 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp57, &$s67, $tmp64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$String* $tmp68 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local5) = $tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:951
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp69 = *(&local4);
frost$core$String** $tmp70 = &$tmp69->title;
frost$core$String* $tmp71 = *$tmp70;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$String* $tmp72 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local6) = $tmp71;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:952
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s73));
frost$core$String* $tmp74 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local7) = &$s75;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:953
frost$core$String* $tmp76 = *(&local6);
frost$core$Bit $tmp77 = (frost$core$Bit) {true};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block8; else goto block7;
block8:;
frost$core$String* $tmp79 = *(&local6);
ITable* $tmp81 = ((frost$core$Equatable*) $tmp79)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
frost$core$Bit $tmp84 = $tmp82(((frost$core$Equatable*) $tmp79), ((frost$core$Equatable*) &$s80));
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:955
frost$core$String* $tmp86 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp87 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp88 = *$tmp87;
org$frostlang$frostc$frostdoc$Protector** $tmp89 = &$tmp88->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp90 = *$tmp89;
$fn92 $tmp91 = ($fn92) $tmp90->$class->vtable[2];
frost$core$String* $tmp93 = $tmp91($tmp90, &$s94);
frost$core$String* $tmp95 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp86, &$s96, $tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$String* $tmp97 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local6) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:956
frost$core$String* $tmp98 = *(&local6);
org$frostlang$frostc$frostdoc$Markdown** $tmp99 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp100 = *$tmp99;
org$frostlang$frostc$frostdoc$Protector** $tmp101 = &$tmp100->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp102 = *$tmp101;
$fn104 $tmp103 = ($fn104) $tmp102->$class->vtable[2];
frost$core$String* $tmp105 = $tmp103($tmp102, &$s106);
frost$core$String* $tmp107 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp98, &$s108, $tmp105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$String* $tmp109 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local6) = $tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:957
frost$core$String* $tmp110 = *(&local6);
frost$core$String* $tmp111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s112, $tmp110);
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp111, &$s114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$String* $tmp115 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local7) = $tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:959
frost$core$String* $tmp116 = *(&local5);
frost$core$String* $tmp117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s118, $tmp116);
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp117, &$s120);
frost$core$String* $tmp121 = *(&local7);
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, $tmp121);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp122, &$s124);
frost$core$String* $tmp125 = *(&local2);
frost$core$String* $tmp126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp123, $tmp125);
frost$core$String* $tmp127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp126, &$s128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$String* $tmp129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local0) = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$String* $tmp130 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp131 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp132 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:962
frost$core$String* $tmp133 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = $tmp133;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:964
frost$core$String* $tmp135 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* $tmp136 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
frost$core$String* $tmp137 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp138 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp135);

}

