#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$Parameter$class_type org$frostlang$frostc$MethodDecl$Parameter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodDecl$Parameter$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$Parameter$cleanup} };

typedef frost$core$String* (*$fn19)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 41, -4772957783404417120, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$Parameter* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:19
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp6 = &param0->name;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->name;
*$tmp8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp9 = &param0->type;
org$frostlang$frostc$Type* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$Type** $tmp11 = &param0->type;
*$tmp11 = param2;
return;

}
frost$core$String* org$frostlang$frostc$MethodDecl$Parameter$get_asString$R$frost$core$String(org$frostlang$frostc$MethodDecl$Parameter* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:28
frost$core$String** $tmp12 = &param0->name;
frost$core$String* $tmp13 = *$tmp12;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:28:23
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s15);
org$frostlang$frostc$Type** $tmp16 = &param0->type;
org$frostlang$frostc$Type* $tmp17 = *$tmp16;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:28:23
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn19 $tmp18 = ($fn19) ((frost$core$Object*) $tmp17)->$class->vtable[0];
frost$core$String* $tmp20 = $tmp18(((frost$core$Object*) $tmp17));
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp21, &$s23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp22;

}
void org$frostlang$frostc$MethodDecl$Parameter$cleanup(org$frostlang$frostc$MethodDecl$Parameter* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:13
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp24 = &param0->name;
frost$core$String* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$Type** $tmp26 = &param0->type;
org$frostlang$frostc$Type* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Weak** $tmp28 = &param0->owner;
frost$core$Weak* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return;

}

