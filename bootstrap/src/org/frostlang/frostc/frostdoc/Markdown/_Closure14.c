#include "org/frostlang/frostc/frostdoc/Markdown/_Closure14.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/RegularExpression.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure14$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure14$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure14$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn55)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x34", 49, -5097778637230146736, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x0a", 2, 16473, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 685
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure14$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0) {

// line 685
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 686
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
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
// line 687
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
// line 688
*(&local2) = ((frost$core$String*) NULL);
// line 689
frost$core$String* $tmp19 = *(&local1);
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit($tmp19 != NULL);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {689};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block3:;
frost$core$RegularExpression* $tmp25 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp25, &$s26);
frost$core$Bit $tmp27 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit($tmp19, $tmp25);
bool $tmp28 = $tmp27.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($44:frost.core.RegularExpression)
if ($tmp28) goto block1; else goto block5;
block1:;
// line 690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s29));
frost$core$String* $tmp30 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local2) = &$s31;
goto block2;
block5:;
// line 1
// line 693
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s32));
frost$core$String* $tmp33 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local2) = &$s34;
goto block2;
block2:;
// line 698
frost$core$String* $tmp35 = *(&local0);
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {698};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block6:;
frost$core$RegularExpression* $tmp41 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp41, &$s42);
frost$core$String* $tmp43 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp35, $tmp41, &$s44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local0) = $tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($81:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($79:frost.core.RegularExpression)
// line 700
org$frostlang$frostc$frostdoc$Markdown** $tmp46 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp47 = *$tmp46;
frost$core$String* $tmp48 = *(&local0);
frost$core$Bit $tmp49 = frost$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp51 = (frost$core$Int64) {700};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s52, $tmp51, &$s53);
abort(); // unreachable
block8:;
$fn55 $tmp54 = ($fn55) $tmp47->$class->vtable[20];
frost$core$String* $tmp56 = $tmp54($tmp47, $tmp48);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$String* $tmp57 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local3) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($108:frost.core.String)
// line 701
frost$core$String* $tmp58 = *(&local2);
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s60, $tmp58);
frost$core$String* $tmp61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp59, &$s62);
frost$core$String* $tmp63 = *(&local3);
frost$core$String* $tmp64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp61, $tmp63);
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp64, &$s66);
frost$core$String* $tmp67 = *(&local2);
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, $tmp67);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, &$s70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($128:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($127:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($125:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($121:frost.core.String)
frost$core$String* $tmp71 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing result
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp72 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing listType
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp73 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing listStart
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing list
*(&local0) = ((frost$core$String*) NULL);
return ((frost$core$Object*) $tmp69);

}

