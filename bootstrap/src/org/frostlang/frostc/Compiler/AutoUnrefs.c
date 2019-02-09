#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoUnrefs$class_type org$frostlang$frostc$Compiler$AutoUnrefs$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoUnrefs$cleanup} };

typedef frost$core$Int64 (*$fn11)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn60)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn75)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x55\x6e\x72\x65\x66\x73", 40, 5370783001611764221, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };

void org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$AutoUnrefs* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:223
frost$collections$Stack** $tmp5 = &param1->enclosingContexts;
frost$collections$Stack* $tmp6 = *$tmp5;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Compiler.frost:223:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp7 = &$tmp6->contents;
frost$collections$Array* $tmp8 = *$tmp7;
ITable* $tmp9 = ((frost$collections$CollectionView*) $tmp8)->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
frost$core$Int64 $tmp12 = $tmp10(((frost$collections$CollectionView*) $tmp8));
frost$core$Int64* $tmp13 = &param0->depth;
*$tmp13 = $tmp12;
return;

}
void org$frostlang$frostc$Compiler$AutoUnrefs$cleanup(org$frostlang$frostc$Compiler$AutoUnrefs* param0) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:228
goto block1;
block1:;
org$frostlang$frostc$Compiler** $tmp14 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp15 = *$tmp14;
frost$collections$Stack** $tmp16 = &$tmp15->enclosingContexts;
frost$collections$Stack* $tmp17 = *$tmp16;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Compiler.frost:228:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp18 = &$tmp17->contents;
frost$collections$Array* $tmp19 = *$tmp18;
ITable* $tmp20 = ((frost$collections$CollectionView*) $tmp19)->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Int64 $tmp23 = $tmp21(((frost$collections$CollectionView*) $tmp19));
frost$core$Int64* $tmp24 = &param0->depth;
frost$core$Int64 $tmp25 = *$tmp24;
int64_t $tmp26 = $tmp23.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 > $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:229
org$frostlang$frostc$Compiler** $tmp31 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp32 = *$tmp31;
frost$collections$Stack** $tmp33 = &$tmp32->enclosingContexts;
frost$collections$Stack* $tmp34 = *$tmp33;
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Compiler.frost:229:56
frost$core$Int64 $tmp36 = (frost$core$Int64) {0};
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 >= $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block8; else goto block7;
block8:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp42 = &$tmp34->contents;
frost$collections$Array* $tmp43 = *$tmp42;
ITable* $tmp44 = ((frost$collections$CollectionView*) $tmp43)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Int64 $tmp47 = $tmp45(((frost$collections$CollectionView*) $tmp43));
int64_t $tmp48 = $tmp35.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 < $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp56 = &$tmp34->contents;
frost$collections$Array* $tmp57 = *$tmp56;
ITable* $tmp58 = ((frost$collections$CollectionView*) $tmp57)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Int64 $tmp61 = $tmp59(((frost$collections$CollectionView*) $tmp57));
int64_t $tmp62 = $tmp61.value;
int64_t $tmp63 = $tmp35.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s68, $tmp67);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp69 = &$tmp34->contents;
frost$collections$Array* $tmp70 = *$tmp69;
frost$collections$Array** $tmp71 = &$tmp34->contents;
frost$collections$Array* $tmp72 = *$tmp71;
ITable* $tmp73 = ((frost$collections$CollectionView*) $tmp72)->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
frost$core$Int64 $tmp76 = $tmp74(((frost$collections$CollectionView*) $tmp72));
frost$core$Int64 $tmp77 = (frost$core$Int64) {1};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 - $tmp79;
frost$core$Int64 $tmp81 = (frost$core$Int64) {$tmp80};
int64_t $tmp82 = $tmp81.value;
int64_t $tmp83 = $tmp35.value;
int64_t $tmp84 = $tmp82 - $tmp83;
frost$core$Int64 $tmp85 = (frost$core$Int64) {$tmp84};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp86 = (frost$core$Int64) {0};
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 >= $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block15; else goto block14;
block15:;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp70)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp70));
int64_t $tmp96 = $tmp85.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 < $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp104 = &$tmp70->data;
frost$core$Object** $tmp105 = *$tmp104;
int64_t $tmp106 = $tmp85.value;
frost$core$Object* $tmp107 = $tmp105[$tmp106];
frost$core$Frost$ref$frost$core$Object$Q($tmp107);
frost$core$Frost$ref$frost$core$Object$Q($tmp107);
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp107)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp107);
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:230
org$frostlang$frostc$Compiler$EnclosingContext* $tmp109 = *(&local0);
frost$core$Int64* $tmp110 = &$tmp109->$rawValue;
frost$core$Int64 $tmp111 = *$tmp110;
frost$core$Int64 $tmp112 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:231:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 == $tmp114;
frost$core$Bit $tmp116 = frost$core$Bit$init$builtin_bit($tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block17; else goto block18;
block17:;
org$frostlang$frostc$IR$Value** $tmp118 = (org$frostlang$frostc$IR$Value**) ($tmp109->$data + 0);
org$frostlang$frostc$IR$Value* $tmp119 = *$tmp118;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$IR$Value* $tmp120 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local1) = $tmp119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:232
org$frostlang$frostc$Compiler** $tmp121 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp122 = *$tmp121;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp123 = *(&local0);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext($tmp122, $tmp123);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:233
org$frostlang$frostc$Compiler** $tmp124 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp125 = *$tmp124;
frost$collections$Stack** $tmp126 = &$tmp125->enclosingContexts;
frost$collections$Stack* $tmp127 = *$tmp126;
frost$core$Object* $tmp128 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp127);
frost$core$Frost$unref$frost$core$Object$Q($tmp128);
org$frostlang$frostc$IR$Value* $tmp129 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp130 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:236
org$frostlang$frostc$Compiler$EnclosingContext* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:227
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp132 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp133 = *$tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
return;

}

