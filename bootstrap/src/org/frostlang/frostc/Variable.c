#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Variable$class_type org$frostlang$frostc$Variable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$Variable$get_asString$R$frost$core$String, org$frostlang$frostc$Variable$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn16)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 29, -7270775788916774186, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, -3338407113994803485, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x69\x6e\x69\x74\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x74\x6f\x72\x61\x67\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65\x29", 243, -6040026194242804329, NULL };

void org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage(org$frostlang$frostc$Variable* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Variable$Kind param2, frost$core$String* param3, org$frostlang$frostc$Type* param4, org$frostlang$frostc$Variable$Storage* param5) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:28
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->owner;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->owner;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Variable.frost:30:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp6 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp7 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp8 = &(&local1)->$rawValue;
*$tmp8 = $tmp7;
org$frostlang$frostc$Type$Kind $tmp9 = *(&local1);
*(&local0) = $tmp9;
org$frostlang$frostc$Type$Kind $tmp10 = *(&local0);
org$frostlang$frostc$Position $tmp11 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp12 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp6, &$s13, $tmp10, $tmp11, $tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
ITable* $tmp14 = ((frost$core$Equatable*) param4)->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[1];
frost$core$Bit $tmp17 = $tmp15(((frost$core$Equatable*) param4), ((frost$core$Equatable*) $tmp6));
bool $tmp18 = $tmp17.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
if ($tmp18) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:32
org$frostlang$frostc$Variable$Kind* $tmp22 = &param0->varKind;
*$tmp22 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp23 = &param0->type;
org$frostlang$frostc$Type* $tmp24 = *$tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$Type** $tmp25 = &param0->type;
*$tmp25 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Variable$Storage** $tmp26 = &param0->storage;
org$frostlang$frostc$Variable$Storage* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$Variable$Storage** $tmp28 = &param0->storage;
*$tmp28 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:35
frost$core$Int64 $tmp29 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Variable.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp30 = &(&local3)->$rawValue;
*$tmp30 = $tmp29;
org$frostlang$frostc$Symbol$Kind $tmp31 = *(&local3);
*(&local2) = $tmp31;
org$frostlang$frostc$Symbol$Kind $tmp32 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp32, param1, param3);
return;

}
frost$core$String* org$frostlang$frostc$Variable$get_asString$R$frost$core$String(org$frostlang$frostc$Variable* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:40
frost$core$String** $tmp33 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp34 = *$tmp33;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
return $tmp34;

}
void org$frostlang$frostc$Variable$cleanup(org$frostlang$frostc$Variable* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:7
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$Type** $tmp35 = &param0->type;
org$frostlang$frostc$Type* $tmp36 = *$tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Variable$Storage** $tmp37 = &param0->storage;
org$frostlang$frostc$Variable$Storage* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Weak** $tmp39 = &param0->owner;
frost$core$Weak* $tmp40 = *$tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return;

}

