#include "org/frostlang/frostc/Compiler/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure2$class_type org$frostlang$frostc$Compiler$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure2$cleanup, org$frostlang$frostc$Compiler$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$Parameter$R$org$frostlang$frostc$MethodDecl$Parameter} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 39, 1651151128247971875, NULL };

void org$frostlang$frostc$Compiler$_Closure2$init$org$frostlang$frostc$Type$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$_Closure2* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Compiler* param2) {

// line 1419
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp2 = &param0->type;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->type;
*$tmp4 = param1;
// line 1419
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Compiler** $tmp5 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler** $tmp7 = &param0->$self;
*$tmp7 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure2$cleanup(org$frostlang$frostc$Compiler$_Closure2* param0) {

// line 1419
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp8 = &param0->type;
org$frostlang$frostc$Type* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$Compiler** $tmp10 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}
org$frostlang$frostc$MethodDecl$Parameter* org$frostlang$frostc$Compiler$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$Parameter$R$org$frostlang$frostc$MethodDecl$Parameter(org$frostlang$frostc$Compiler$_Closure2* param0, org$frostlang$frostc$MethodDecl$Parameter* param1) {

// line 1419
org$frostlang$frostc$MethodDecl$Parameter* $tmp12 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String** $tmp13 = &param1->name;
frost$core$String* $tmp14 = *$tmp13;
org$frostlang$frostc$Compiler** $tmp15 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp16 = *$tmp15;
org$frostlang$frostc$Type** $tmp17 = &param0->type;
org$frostlang$frostc$Type* $tmp18 = *$tmp17;
org$frostlang$frostc$Type** $tmp19 = &param1->type;
org$frostlang$frostc$Type* $tmp20 = *$tmp19;
org$frostlang$frostc$Type* $tmp21 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp16, $tmp18, $tmp20);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp12, $tmp14, $tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return $tmp12;

}






