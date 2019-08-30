#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoContext$class_type org$frostlang$frostc$Compiler$AutoContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoContext$cleanup} };

typedef frost$core$Int (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn41)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn56)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn75)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn99)(frost$core$Object*);
typedef frost$core$String* (*$fn110)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 41, -3079701472992325923, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x74\x6f\x70\x20\x6c\x65\x76\x65\x6c\x20\x63\x6f\x6e\x74\x65\x78\x74\x20\x74\x6f\x20\x62\x65\x20", 33, -8596321363108449265, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 3820956024483964812, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(org$frostlang$frostc$Compiler$AutoContext* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Compiler$EnclosingContext* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp5 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp7 = &param0->context;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:137
frost$collections$Stack** $tmp8 = &param1->enclosingContexts;
frost$collections$Stack* $tmp9 = *$tmp8;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Compiler.frost:137:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp10 = &$tmp9->contents;
frost$collections$Array* $tmp11 = *$tmp10;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) param2));
return;

}
void org$frostlang$frostc$Compiler$AutoContext$cleanup(org$frostlang$frostc$Compiler$AutoContext* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:142
org$frostlang$frostc$Compiler** $tmp12 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp13 = *$tmp12;
frost$collections$Stack** $tmp14 = &$tmp13->enclosingContexts;
frost$collections$Stack* $tmp15 = *$tmp14;
frost$core$Int $tmp16 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Compiler.frost:142:46
frost$core$Int $tmp17 = (frost$core$Int) {0u};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 >= $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp23 = &$tmp15->contents;
frost$collections$Array* $tmp24 = *$tmp23;
ITable* $tmp25 = ((frost$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
int64_t $tmp29 = $tmp16.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 < $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block2; else goto block3;
block3:;
frost$core$Int $tmp34 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, $tmp34, &$s36);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp37 = &$tmp15->contents;
frost$collections$Array* $tmp38 = *$tmp37;
ITable* $tmp39 = ((frost$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
frost$core$Int $tmp42 = $tmp40(((frost$collections$CollectionView*) $tmp38));
int64_t $tmp43 = $tmp42.value;
int64_t $tmp44 = $tmp16.value;
bool $tmp45 = $tmp43 > $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block6; else goto block7;
block7:;
frost$core$Int $tmp48 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s49, $tmp48);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp50 = &$tmp15->contents;
frost$collections$Array* $tmp51 = *$tmp50;
frost$collections$Array** $tmp52 = &$tmp15->contents;
frost$collections$Array* $tmp53 = *$tmp52;
ITable* $tmp54 = ((frost$collections$CollectionView*) $tmp53)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Int $tmp57 = $tmp55(((frost$collections$CollectionView*) $tmp53));
frost$core$Int $tmp58 = (frost$core$Int) {1u};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
frost$core$Int $tmp62 = (frost$core$Int) {$tmp61};
int64_t $tmp63 = $tmp62.value;
int64_t $tmp64 = $tmp16.value;
int64_t $tmp65 = $tmp63 - $tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {$tmp65};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp67 = (frost$core$Int) {0u};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 >= $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block11; else goto block10;
block11:;
ITable* $tmp73 = ((frost$collections$CollectionView*) $tmp51)->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
frost$core$Int $tmp76 = $tmp74(((frost$collections$CollectionView*) $tmp51));
int64_t $tmp77 = $tmp66.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 < $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block9; else goto block10;
block10:;
frost$core$Int $tmp82 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, $tmp82, &$s84);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp85 = &$tmp51->data;
frost$core$Object** $tmp86 = *$tmp85;
frost$core$Int64 $tmp87 = frost$core$Int64$init$frost$core$Int($tmp66);
int64_t $tmp88 = $tmp87.value;
frost$core$Object* $tmp89 = $tmp86[$tmp88];
frost$core$Frost$ref$frost$core$Object$Q($tmp89);
frost$core$Frost$ref$frost$core$Object$Q($tmp89);
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
org$frostlang$frostc$Compiler$EnclosingContext** $tmp90 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp91 = *$tmp90;
bool $tmp92 = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp89) == $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block12; else goto block13;
block13:;
frost$core$Int $tmp95 = (frost$core$Int) {142u};
org$frostlang$frostc$Compiler$EnclosingContext** $tmp96 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp97 = *$tmp96;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:143:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn99 $tmp98 = ($fn99) ((frost$core$Object*) $tmp97)->$class->vtable[0];
frost$core$String* $tmp100 = $tmp98(((frost$core$Object*) $tmp97));
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, $tmp100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
org$frostlang$frostc$Compiler** $tmp105 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp106 = *$tmp105;
frost$collections$Stack** $tmp107 = &$tmp106->enclosingContexts;
frost$collections$Stack* $tmp108 = *$tmp107;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:143:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn110 $tmp109 = ($fn110) ((frost$core$Object*) $tmp108)->$class->vtable[0];
frost$core$String* $tmp111 = $tmp109(((frost$core$Object*) $tmp108));
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp103, $tmp111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, $tmp95, $tmp112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:145
org$frostlang$frostc$Compiler** $tmp114 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp115 = *$tmp114;
frost$collections$Stack** $tmp116 = &$tmp115->enclosingContexts;
frost$collections$Stack* $tmp117 = *$tmp116;
frost$core$Object* $tmp118 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:141
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp119 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp120 = *$tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp121 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp122 = *$tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
return;

}

