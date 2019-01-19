#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoContext$class_type org$frostlang$frostc$Compiler$AutoContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoContext$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 41, 7493485927957782471, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x74\x6f\x70\x20\x6c\x65\x76\x65\x6c\x20\x63\x6f\x6e\x74\x65\x78\x74\x20\x74\x6f\x20\x62\x65\x20", 33, -9067561280904328559, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };

void org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(org$frostlang$frostc$Compiler$AutoContext* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Compiler$EnclosingContext* param2) {

// line 179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp5 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp7 = &param0->context;
*$tmp7 = param2;
// line 181
frost$collections$Stack** $tmp8 = &param1->enclosingContexts;
frost$collections$Stack* $tmp9 = *$tmp8;
frost$collections$Stack$push$frost$collections$Stack$T($tmp9, ((frost$core$Object*) param2));
return;

}
void org$frostlang$frostc$Compiler$AutoContext$cleanup(org$frostlang$frostc$Compiler$AutoContext* param0) {

// line 186
org$frostlang$frostc$Compiler** $tmp10 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp11 = *$tmp10;
frost$collections$Stack** $tmp12 = &$tmp11->enclosingContexts;
frost$collections$Stack* $tmp13 = *$tmp12;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
frost$core$Object* $tmp15 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp13, $tmp14);
org$frostlang$frostc$Compiler$EnclosingContext** $tmp16 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp17 = *$tmp16;
bool $tmp18 = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp15) == $tmp17;
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {186};
org$frostlang$frostc$Compiler$EnclosingContext** $tmp22 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp23 = *$tmp22;
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s25, ((frost$core$Object*) $tmp23));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s27);
org$frostlang$frostc$Compiler** $tmp28 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp29 = *$tmp28;
frost$collections$Stack** $tmp30 = &$tmp29->enclosingContexts;
frost$collections$Stack* $tmp31 = *$tmp30;
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp26, ((frost$core$Object*) $tmp31));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s33, $tmp21, $tmp32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($20:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($19:frost.core.String)
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
// unreffing REF($7:frost.collections.Stack.T)
// line 189
org$frostlang$frostc$Compiler** $tmp34 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp35 = *$tmp34;
frost$collections$Stack** $tmp36 = &$tmp35->enclosingContexts;
frost$collections$Stack* $tmp37 = *$tmp36;
frost$core$Object* $tmp38 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp37);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// unreffing REF($47:frost.collections.Stack.T)
// line 185
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp39 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp40 = *$tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp41 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
return;

}

