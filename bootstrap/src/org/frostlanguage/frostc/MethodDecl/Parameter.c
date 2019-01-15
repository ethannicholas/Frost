#include "org/frostlanguage/frostc/MethodDecl/Parameter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlanguage$frostc$MethodDecl$Parameter$class_type org$frostlanguage$frostc$MethodDecl$Parameter$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlanguage$frostc$MethodDecl$Parameter$convert$R$frost$core$String, org$frostlanguage$frostc$MethodDecl$Parameter$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 45, 8658665311004552698, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodDecl$Parameter* param0, frost$core$String* param1, org$frostlanguage$frostc$Type* param2) {

// line 19
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
// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp6 = &param0->name;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->name;
*$tmp8 = param1;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlanguage$frostc$Type** $tmp9 = &param0->type;
org$frostlanguage$frostc$Type* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlanguage$frostc$Type** $tmp11 = &param0->type;
*$tmp11 = param2;
return;

}
frost$core$String* org$frostlanguage$frostc$MethodDecl$Parameter$convert$R$frost$core$String(org$frostlanguage$frostc$MethodDecl$Parameter* param0) {

// line 28
frost$core$String** $tmp12 = &param0->name;
frost$core$String* $tmp13 = *$tmp12;
frost$core$String* $tmp14 = frost$core$String$convert$R$frost$core$String($tmp13);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, &$s16);
org$frostlanguage$frostc$Type** $tmp17 = &param0->type;
org$frostlanguage$frostc$Type* $tmp18 = *$tmp17;
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp15, ((frost$core$Object*) $tmp18));
frost$core$String* $tmp20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, &$s21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($3:frost.core.String)
return $tmp20;

}
void org$frostlanguage$frostc$MethodDecl$Parameter$cleanup(org$frostlanguage$frostc$MethodDecl$Parameter* param0) {

// line 13
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp22 = &param0->name;
frost$core$String* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlanguage$frostc$Type** $tmp24 = &param0->type;
org$frostlanguage$frostc$Type* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Weak** $tmp26 = &param0->owner;
frost$core$Weak* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
return;

}

