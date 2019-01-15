#include "org/frostlanguage/frostc/Variable.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/Variable/Kind.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/Variable/Storage.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"


static frost$core$String $s1;
org$frostlanguage$frostc$Variable$class_type org$frostlanguage$frostc$Variable$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlanguage$frostc$Symbol$class, NULL, { org$frostlanguage$frostc$Variable$convert$R$frost$core$String, org$frostlanguage$frostc$Variable$cleanup, org$frostlanguage$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn9)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 33, 6868644166972095848, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, -3338407113994803485, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x69\x6e\x69\x74\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x74\x6f\x72\x61\x67\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65\x29", 263, 1583122859284928929, NULL };

void org$frostlanguage$frostc$Variable$init$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$Variable$Storage(org$frostlanguage$frostc$Variable* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$Variable$Kind param2, frost$core$String* param3, org$frostlanguage$frostc$Type* param4, org$frostlanguage$frostc$Variable$Storage* param5) {

// line 28
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp2, ((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->owner;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->owner;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:frost.core.Weak<org.frostlanguage.frostc.MethodDecl?>)
org$frostlanguage$frostc$Type* $tmp6 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
ITable* $tmp7 = ((frost$core$Equatable*) param4)->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
$fn9 $tmp8 = $tmp7->methods[1];
frost$core$Bit $tmp10 = $tmp8(((frost$core$Equatable*) param4), ((frost$core$Equatable*) $tmp6));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($18:org.frostlanguage.frostc.Type)
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s13, $tmp12, &$s14);
abort(); // unreachable
block1:;
// line 32
org$frostlanguage$frostc$Variable$Kind* $tmp15 = &param0->varKind;
*$tmp15 = param2;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlanguage$frostc$Type** $tmp16 = &param0->type;
org$frostlanguage$frostc$Type* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlanguage$frostc$Type** $tmp18 = &param0->type;
*$tmp18 = param4;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlanguage$frostc$Variable$Storage** $tmp19 = &param0->storage;
org$frostlanguage$frostc$Variable$Storage* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlanguage$frostc$Variable$Storage** $tmp21 = &param0->storage;
*$tmp21 = param5;
// line 35
frost$core$Int64 $tmp22 = (frost$core$Int64) {9};
org$frostlanguage$frostc$Symbol$Kind $tmp23 = org$frostlanguage$frostc$Symbol$Kind$init$frost$core$Int64($tmp22);
org$frostlanguage$frostc$Symbol$init$org$frostlanguage$frostc$Symbol$Kind$org$frostlanguage$frostc$Position$frost$core$String(((org$frostlanguage$frostc$Symbol*) param0), $tmp23, param1, param3);
return;

}
frost$core$String* org$frostlanguage$frostc$Variable$convert$R$frost$core$String(org$frostlanguage$frostc$Variable* param0) {

// line 40
frost$core$String** $tmp24 = &((org$frostlanguage$frostc$Symbol*) param0)->name;
frost$core$String* $tmp25 = *$tmp24;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
return $tmp25;

}
void org$frostlanguage$frostc$Variable$cleanup(org$frostlanguage$frostc$Variable* param0) {

// line 7
org$frostlanguage$frostc$Symbol$cleanup(((org$frostlanguage$frostc$Symbol*) param0));
org$frostlanguage$frostc$Type** $tmp26 = &param0->type;
org$frostlanguage$frostc$Type* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlanguage$frostc$Variable$Storage** $tmp28 = &param0->storage;
org$frostlanguage$frostc$Variable$Storage* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Weak** $tmp30 = &param0->owner;
frost$core$Weak* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
return;

}

