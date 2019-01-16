#include "org/frostlang/frostc/Compiler/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure2$class_type org$frostlang$frostc$Compiler$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure2$cleanup, org$frostlang$frostc$Compiler$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$Parameter$R$org$frostlang$frostc$MethodDecl$Parameter} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 39, 1651151128247971875, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };

void org$frostlang$frostc$Compiler$_Closure2$init$org$frostlang$frostc$Type$Q$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$_Closure2* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Compiler* param2) {

// line 1313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Type** $tmp2 = &param0->type;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->type;
*$tmp4 = param1;
// line 1313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Compiler** $tmp5 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler** $tmp7 = &param0->$self;
*$tmp7 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure2$cleanup(org$frostlang$frostc$Compiler$_Closure2* param0) {

// line 1313
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

// line 1313
org$frostlang$frostc$MethodDecl$Parameter* $tmp12 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String** $tmp13 = &param1->name;
frost$core$String* $tmp14 = *$tmp13;
org$frostlang$frostc$Compiler** $tmp15 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp16 = *$tmp15;
org$frostlang$frostc$Type** $tmp17 = &param0->type;
org$frostlang$frostc$Type* $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18 != NULL);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {1313};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
org$frostlang$frostc$Type** $tmp24 = &param1->type;
org$frostlang$frostc$Type* $tmp25 = *$tmp24;
org$frostlang$frostc$Type* $tmp26 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp16, $tmp18, $tmp25);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp12, $tmp14, $tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($18:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($1:org.frostlang.frostc.MethodDecl.Parameter)
return $tmp12;

}






