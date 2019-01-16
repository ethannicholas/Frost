#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Symbol$class_type org$frostlang$frostc$Symbol$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$Symbol$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn13)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn34)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 27, 4805820476023300166, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x6d\x61\x70\x2e\x55", 30, 3740680454976621878, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x63\x74\x75\x61\x6c\x20\x76\x61\x6c\x75\x65\x3a\x20", 14, 5527027498651460954, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, 3933075217504599195, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31", 1, 150, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, 3933075217504599195, NULL };

void org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Symbol* param0, org$frostlang$frostc$Symbol$Kind param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 24
frost$core$Bit $tmp2 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param3, &$s3);
bool $tmp4 = $tmp2.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 25
org$frostlang$frostc$Type$Kind* $tmp5 = &((org$frostlang$frostc$Type*) param0)->typeKind;
org$frostlang$frostc$Type$Kind $tmp6 = *$tmp5;
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp9 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp10->value = $tmp9;
ITable* $tmp11 = ((frost$core$Equatable*) $tmp7)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Bit $tmp14 = $tmp12(((frost$core$Equatable*) $tmp7), ((frost$core$Equatable*) $tmp10));
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {25};
org$frostlang$frostc$Type$Kind* $tmp17 = &((org$frostlang$frostc$Type*) param0)->typeKind;
org$frostlang$frostc$Type$Kind $tmp18 = *$tmp17;
frost$core$Int64 $tmp19 = $tmp18.$rawValue;
frost$core$Int64$wrapper* $tmp20;
$tmp20 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp20->value = $tmp19;
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s22, ((frost$core$Object*) $tmp20));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp21, &$s24);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s25, $tmp16, $tmp23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($24:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($23:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($22:frost.core.Object)
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp10)));
// unreffing REF($12:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
// unreffing REF($8:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
goto block2;
block2:;
// line 27
org$frostlang$frostc$Symbol$Kind* $tmp26 = &param0->kind;
*$tmp26 = param1;
// line 28
org$frostlang$frostc$Position* $tmp27 = &param0->position;
*$tmp27 = param2;
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp28 = &param0->name;
frost$core$String* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String** $tmp30 = &param0->name;
*$tmp30 = param3;
// line 30
ITable* $tmp32 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp32 = $tmp32->next;
}
$fn34 $tmp33 = $tmp32->methods[1];
frost$core$Bit $tmp35 = $tmp33(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s31));
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s38, $tmp37);
abort(); // unreachable
block5:;
return;

}
frost$core$Bit org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit(org$frostlang$frostc$Symbol* param0) {

// line 34
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit(true);
return $tmp39;

}
void org$frostlang$frostc$Symbol$cleanup(org$frostlang$frostc$Symbol* param0) {

// line 3
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp40 = &param0->name;
frost$core$String* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
return;

}

