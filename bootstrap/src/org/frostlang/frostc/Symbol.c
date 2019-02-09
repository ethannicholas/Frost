#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Symbol$class_type org$frostlang$frostc$Symbol$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Symbol$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn15)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$Bit (*$fn39)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 27, 4805820476023300166, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x6d\x61\x70\x2e\x55", 30, 3740680454976621878, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x63\x74\x75\x61\x6c\x20\x76\x61\x6c\x75\x65\x3a\x20", 14, 5527027498651460954, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, 3933075217504599195, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31", 1, 150, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, 3933075217504599195, NULL };

void org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Symbol* param0, org$frostlang$frostc$Symbol$Kind param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:24
frost$core$Bit $tmp2 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param3, &$s3);
bool $tmp4 = $tmp2.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:25
org$frostlang$frostc$Type$Kind* $tmp5 = &((org$frostlang$frostc$Type*) param0)->typeKind;
org$frostlang$frostc$Type$Kind $tmp6 = *$tmp5;
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {13};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Symbol.frost:25:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp9 = &(&local1)->$rawValue;
*$tmp9 = $tmp8;
org$frostlang$frostc$Type$Kind $tmp10 = *(&local1);
*(&local0) = $tmp10;
org$frostlang$frostc$Type$Kind $tmp11 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp12;
$tmp12 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp12->value = $tmp11;
ITable* $tmp13 = ((frost$core$Equatable*) $tmp7)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Bit $tmp16 = $tmp14(((frost$core$Equatable*) $tmp7), ((frost$core$Equatable*) $tmp12));
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {25};
org$frostlang$frostc$Type$Kind* $tmp19 = &((org$frostlang$frostc$Type*) param0)->typeKind;
org$frostlang$frostc$Type$Kind $tmp20 = *$tmp19;
frost$core$Int64 $tmp21 = $tmp20.$rawValue;
frost$core$Int64$wrapper* $tmp22;
$tmp22 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp22->value = $tmp21;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Symbol.frost:25:78
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn24 $tmp23 = ($fn24) ((frost$core$Object*) $tmp22)->$class->vtable[0];
frost$core$String* $tmp25 = $tmp23(((frost$core$Object*) $tmp22));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s27, $tmp25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, &$s29);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp18, $tmp28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp12)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:27
org$frostlang$frostc$Symbol$Kind* $tmp31 = &param0->kind;
*$tmp31 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:28
org$frostlang$frostc$Position* $tmp32 = &param0->position;
*$tmp32 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp33 = &param0->name;
frost$core$String* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String** $tmp35 = &param0->name;
*$tmp35 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:30
ITable* $tmp37 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[1];
frost$core$Bit $tmp40 = $tmp38(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s36));
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp42 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s43, $tmp42);
abort(); // unreachable
block7:;
return;

}
frost$core$Bit org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit(org$frostlang$frostc$Symbol* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:34
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit(true);
return $tmp44;

}
void org$frostlang$frostc$Symbol$cleanup(org$frostlang$frostc$Symbol* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:3
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp45 = &param0->name;
frost$core$String* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
return;

}

