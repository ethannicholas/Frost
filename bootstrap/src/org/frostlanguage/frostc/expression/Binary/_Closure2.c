#include "org/frostlanguage/frostc/expression/Binary/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/Annotations.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$Binary$_Closure2$class_type org$frostlanguage$frostc$expression$Binary$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$Binary$_Closure2$cleanup, org$frostlanguage$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 52, -3004875834665816795, NULL };

void org$frostlanguage$frostc$expression$Binary$_Closure2$init$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$expression$Binary$_Closure2* param0, org$frostlanguage$frostc$Type* param1) {

// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$Type** $tmp2 = &param0->left;
org$frostlanguage$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$Type** $tmp4 = &param0->left;
*$tmp4 = param1;
return;

}
void org$frostlanguage$frostc$expression$Binary$_Closure2$cleanup(org$frostlanguage$frostc$expression$Binary$_Closure2* param0) {

// line 47
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Type** $tmp5 = &param0->left;
org$frostlanguage$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Bit org$frostlanguage$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(org$frostlanguage$frostc$expression$Binary$_Closure2* param0, org$frostlanguage$frostc$MethodDecl* param1) {

// line 47
org$frostlanguage$frostc$Annotations** $tmp7 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp8 = *$tmp7;
frost$core$Bit $tmp9 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp8);
org$frostlanguage$frostc$Type** $tmp10 = &param0->left;
org$frostlanguage$frostc$Type* $tmp11 = *$tmp10;
frost$core$Bit $tmp12 = org$frostlanguage$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp11);
frost$core$Bit $tmp13 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp9, $tmp12);
return $tmp13;

}






