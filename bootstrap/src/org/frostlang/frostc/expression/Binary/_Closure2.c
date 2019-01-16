#include "org/frostlang/frostc/expression/Binary/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Annotations.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$_Closure2$class_type org$frostlang$frostc$expression$Binary$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$expression$Binary$_Closure2$cleanup, org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, -2123360279309463525, NULL };

void org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type(org$frostlang$frostc$expression$Binary$_Closure2* param0, org$frostlang$frostc$Type* param1) {

// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp2 = &param0->left;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->left;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$expression$Binary$_Closure2$cleanup(org$frostlang$frostc$expression$Binary$_Closure2* param0) {

// line 47
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp5 = &param0->left;
org$frostlang$frostc$Type* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$_Closure2* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 47
org$frostlang$frostc$Annotations** $tmp7 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp8 = *$tmp7;
frost$core$Bit $tmp9 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp8);
org$frostlang$frostc$Type** $tmp10 = &param0->left;
org$frostlang$frostc$Type* $tmp11 = *$tmp10;
frost$core$Bit $tmp12 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp11);
frost$core$Bit $tmp13 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp9, $tmp12);
return $tmp13;

}






