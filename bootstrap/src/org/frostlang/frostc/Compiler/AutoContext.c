#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoContext$class_type org$frostlang$frostc$Compiler$AutoContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoContext$cleanup} };

typedef frost$core$Int64 (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn41)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn56)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn75)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn98)(frost$core$Object*);
typedef frost$core$String* (*$fn109)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 41, -3079701472992325923, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x74\x6f\x70\x20\x6c\x65\x76\x65\x6c\x20\x63\x6f\x6e\x74\x65\x78\x74\x20\x74\x6f\x20\x62\x65\x20", 33, -8596321363108449265, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 3820956024483964812, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(org$frostlang$frostc$Compiler$AutoContext* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Compiler$EnclosingContext* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:202
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp5 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp7 = &param0->context;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:204
frost$collections$Stack** $tmp8 = &param1->enclosingContexts;
frost$collections$Stack* $tmp9 = *$tmp8;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Compiler.frost:204:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp10 = &$tmp9->contents;
frost$collections$Array* $tmp11 = *$tmp10;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) param2));
return;

}
void org$frostlang$frostc$Compiler$AutoContext$cleanup(org$frostlang$frostc$Compiler$AutoContext* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:209
org$frostlang$frostc$Compiler** $tmp12 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp13 = *$tmp12;
frost$collections$Stack** $tmp14 = &$tmp13->enclosingContexts;
frost$collections$Stack* $tmp15 = *$tmp14;
frost$core$Int64 $tmp16 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Compiler.frost:209:46
frost$core$Int64 $tmp17 = (frost$core$Int64) {0u};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 >= $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp23 = &$tmp15->contents;
frost$collections$Array* $tmp24 = *$tmp23;
ITable* $tmp25 = ((frost$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int64 $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
int64_t $tmp29 = $tmp16.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 < $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s35, $tmp34, &$s36);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp37 = &$tmp15->contents;
frost$collections$Array* $tmp38 = *$tmp37;
ITable* $tmp39 = ((frost$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
frost$core$Int64 $tmp42 = $tmp40(((frost$collections$CollectionView*) $tmp38));
int64_t $tmp43 = $tmp42.value;
int64_t $tmp44 = $tmp16.value;
bool $tmp45 = $tmp43 > $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp48 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s49, $tmp48);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp50 = &$tmp15->contents;
frost$collections$Array* $tmp51 = *$tmp50;
frost$collections$Array** $tmp52 = &$tmp15->contents;
frost$collections$Array* $tmp53 = *$tmp52;
ITable* $tmp54 = ((frost$collections$CollectionView*) $tmp53)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Int64 $tmp57 = $tmp55(((frost$collections$CollectionView*) $tmp53));
frost$core$Int64 $tmp58 = (frost$core$Int64) {1u};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
int64_t $tmp63 = $tmp62.value;
int64_t $tmp64 = $tmp16.value;
int64_t $tmp65 = $tmp63 - $tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp67 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp76 = $tmp74(((frost$collections$CollectionView*) $tmp51));
int64_t $tmp77 = $tmp66.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 < $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp82 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s83, $tmp82, &$s84);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp85 = &$tmp51->data;
frost$core$Object** $tmp86 = *$tmp85;
int64_t $tmp87 = $tmp66.value;
frost$core$Object* $tmp88 = $tmp86[$tmp87];
frost$core$Frost$ref$frost$core$Object$Q($tmp88);
frost$core$Frost$ref$frost$core$Object$Q($tmp88);
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
org$frostlang$frostc$Compiler$EnclosingContext** $tmp89 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp90 = *$tmp89;
bool $tmp91 = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp88) == $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {209u};
org$frostlang$frostc$Compiler$EnclosingContext** $tmp95 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp96 = *$tmp95;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:210:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn98 $tmp97 = ($fn98) ((frost$core$Object*) $tmp96)->$class->vtable[0];
frost$core$String* $tmp99 = $tmp97(((frost$core$Object*) $tmp96));
frost$core$String* $tmp100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s101, $tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$String* $tmp102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp100, &$s103);
org$frostlang$frostc$Compiler** $tmp104 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp105 = *$tmp104;
frost$collections$Stack** $tmp106 = &$tmp105->enclosingContexts;
frost$collections$Stack* $tmp107 = *$tmp106;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:210:79
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn109 $tmp108 = ($fn109) ((frost$core$Object*) $tmp107)->$class->vtable[0];
frost$core$String* $tmp110 = $tmp108(((frost$core$Object*) $tmp107));
frost$core$String* $tmp111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp102, $tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s112, $tmp94, $tmp111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:212
org$frostlang$frostc$Compiler** $tmp113 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp114 = *$tmp113;
frost$collections$Stack** $tmp115 = &$tmp114->enclosingContexts;
frost$collections$Stack* $tmp116 = *$tmp115;
frost$core$Object* $tmp117 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp116);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:208
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp118 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp119 = *$tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$Compiler$EnclosingContext** $tmp120 = &param0->context;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp121 = *$tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return;

}

