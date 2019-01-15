#include "org/frostlanguage/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/collections/Stack.h"
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/parser/Token.h"
#include "org/frostlanguage/frostc/Pair.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "frost/collections/CollectionView.h"


static frost$core$String $s1;
org$frostlanguage$frostc$parser$SyntaxHighlighter$class_type org$frostlanguage$frostc$parser$SyntaxHighlighter$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$parser$SyntaxHighlighter$cleanup, org$frostlanguage$frostc$parser$SyntaxHighlighter$reset, org$frostlanguage$frostc$parser$SyntaxHighlighter$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind, org$frostlanguage$frostc$parser$SyntaxHighlighter$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind, org$frostlanguage$frostc$parser$SyntaxHighlighter$add$org$frostlanguage$frostc$parser$Token$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind, org$frostlanguage$frostc$parser$SyntaxHighlighter$add$org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$rewind} };

typedef void (*$fn41)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn50)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn78)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn88)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn95)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn102)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn109)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn155)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn204)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn214)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn365)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn369)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Int64 (*$fn376)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 49, -1026457449884038341, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 23, -4185779238805892917, NULL };

void org$frostlanguage$frostc$parser$SyntaxHighlighter$reset(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0) {

// line 74
frost$collections$Array** $tmp2 = &param0->tokens;
frost$collections$Array* $tmp3 = *$tmp2;
frost$collections$Array$clear($tmp3);
// line 75
frost$collections$Stack** $tmp4 = &param0->stack;
frost$collections$Stack* $tmp5 = *$tmp4;
frost$collections$Stack$clear($tmp5);
return;

}
void org$frostlanguage$frostc$parser$SyntaxHighlighter$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 79
frost$collections$Stack** $tmp6 = &param0->stack;
frost$collections$Stack* $tmp7 = *$tmp6;
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp8;
$tmp8 = (org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp8->value = param1;
frost$collections$Stack$push$frost$collections$Stack$T($tmp7, ((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($4:frost.collections.Stack.T)
return;

}
void org$frostlanguage$frostc$parser$SyntaxHighlighter$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 83
frost$collections$Stack** $tmp9 = &param0->stack;
frost$collections$Stack* $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Object* $tmp12 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp10, $tmp11);
frost$core$Int64 $tmp13 = ((org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp12)->value.$rawValue;
frost$core$Int64 $tmp14 = param1.$rawValue;
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp13, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
// unreffing REF($5:frost.collections.Stack.T)
// line 84
frost$collections$Stack** $tmp19 = &param0->stack;
frost$collections$Stack* $tmp20 = *$tmp19;
frost$core$Object* $tmp21 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp20);
frost$core$Frost$unref$frost$core$Object$Q($tmp21);
// unreffing REF($22:frost.collections.Stack.T)
return;

}
void org$frostlanguage$frostc$parser$SyntaxHighlighter$add$org$frostlanguage$frostc$parser$Token$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0, org$frostlanguage$frostc$parser$Token param1, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind param2) {

// line 88
frost$collections$Array** $tmp22 = &param0->tokens;
frost$collections$Array* $tmp23 = *$tmp22;
org$frostlanguage$frostc$Pair* $tmp24 = (org$frostlanguage$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Pair$class);
org$frostlanguage$frostc$parser$Token$wrapper* $tmp25;
$tmp25 = (org$frostlanguage$frostc$parser$Token$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$wrapperclass);
$tmp25->value = param1;
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp26->value = param2;
org$frostlanguage$frostc$Pair$init$org$frostlanguage$frostc$Pair$A$org$frostlanguage$frostc$Pair$B($tmp24, ((frost$core$Object*) $tmp25), ((frost$core$Object*) $tmp26));
frost$collections$Array$add$frost$collections$Array$T($tmp23, ((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($7:org.frostlanguage.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($6:org.frostlanguage.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($4:org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.parser.Token, org.frostlanguage.frostc.parser.SyntaxHighlighter.Kind>)
return;

}
void org$frostlanguage$frostc$parser$SyntaxHighlighter$add$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0, org$frostlanguage$frostc$parser$Token param1) {

// line 92
frost$collections$Stack** $tmp27 = &param0->stack;
frost$collections$Stack* $tmp28 = *$tmp27;
frost$core$Int64 $tmp29 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp28);
frost$core$Int64 $tmp30 = (frost$core$Int64) {0};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 > $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block1; else goto block2;
block1:;
// line 93
frost$collections$Stack** $tmp36 = &param0->stack;
frost$collections$Stack* $tmp37 = *$tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
frost$core$Object* $tmp39 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp37, $tmp38);
$fn41 $tmp40 = ($fn41) param0->$class->vtable[5];
$tmp40(param0, param1, ((org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp39)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
// unreffing REF($17:frost.collections.Stack.T)
// line 94
return;
block2:;
// line 97
org$frostlanguage$frostc$parser$Token$Kind $tmp42 = param1.kind;
frost$core$Int64 $tmp43 = $tmp42.$rawValue;
frost$core$Int64 $tmp44 = (frost$core$Int64) {1};
frost$core$Bit $tmp45 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block4; else goto block5;
block4:;
// line 99
frost$core$Int64 $tmp47 = (frost$core$Int64) {11};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp48 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp47);
$fn50 $tmp49 = ($fn50) param0->$class->vtable[5];
$tmp49(param0, param1, $tmp48);
goto block3;
block5:;
frost$core$Int64 $tmp51 = (frost$core$Int64) {3};
frost$core$Bit $tmp52 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp51);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {4};
frost$core$Bit $tmp55 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp57 = (frost$core$Int64) {5};
frost$core$Bit $tmp58 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp57);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {6};
frost$core$Bit $tmp61 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp63 = (frost$core$Int64) {42};
frost$core$Bit $tmp64 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp63);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {43};
frost$core$Bit $tmp67 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp66);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp69 = (frost$core$Int64) {44};
frost$core$Bit $tmp70 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp72 = (frost$core$Int64) {2};
frost$core$Bit $tmp73 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block6; else goto block14;
block6:;
// line 103
frost$core$Int64 $tmp75 = (frost$core$Int64) {9};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp76 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp75);
$fn78 $tmp77 = ($fn78) param0->$class->vtable[5];
$tmp77(param0, param1, $tmp76);
goto block3;
block14:;
frost$core$Int64 $tmp79 = (frost$core$Int64) {9};
frost$core$Bit $tmp80 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp82 = (frost$core$Int64) {10};
frost$core$Bit $tmp83 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block15; else goto block17;
block15:;
// line 106
frost$core$Int64 $tmp85 = (frost$core$Int64) {1};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp86 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp85);
$fn88 $tmp87 = ($fn88) param0->$class->vtable[5];
$tmp87(param0, param1, $tmp86);
goto block3;
block17:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {11};
frost$core$Bit $tmp90 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block18; else goto block19;
block18:;
// line 109
frost$core$Int64 $tmp92 = (frost$core$Int64) {1};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp93 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp92);
$fn95 $tmp94 = ($fn95) param0->$class->vtable[5];
$tmp94(param0, param1, $tmp93);
goto block3;
block19:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {12};
frost$core$Bit $tmp97 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block20; else goto block21;
block20:;
// line 112
frost$core$Int64 $tmp99 = (frost$core$Int64) {2};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp100 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp99);
$fn102 $tmp101 = ($fn102) param0->$class->vtable[5];
$tmp101(param0, param1, $tmp100);
goto block3;
block21:;
frost$core$Int64 $tmp103 = (frost$core$Int64) {14};
frost$core$Bit $tmp104 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block22; else goto block23;
block22:;
// line 115
frost$core$Int64 $tmp106 = (frost$core$Int64) {3};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp107 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp106);
$fn109 $tmp108 = ($fn109) param0->$class->vtable[5];
$tmp108(param0, param1, $tmp107);
goto block3;
block23:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {15};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {16};
frost$core$Bit $tmp114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp113);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block24; else goto block26;
block26:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {17};
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block24; else goto block27;
block27:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {18};
frost$core$Bit $tmp120 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block24; else goto block28;
block28:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {19};
frost$core$Bit $tmp123 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp122);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block24; else goto block29;
block29:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {20};
frost$core$Bit $tmp126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block24; else goto block30;
block30:;
frost$core$Int64 $tmp128 = (frost$core$Int64) {21};
frost$core$Bit $tmp129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block24; else goto block31;
block31:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {22};
frost$core$Bit $tmp132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block24; else goto block32;
block32:;
frost$core$Int64 $tmp134 = (frost$core$Int64) {24};
frost$core$Bit $tmp135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block24; else goto block33;
block33:;
frost$core$Int64 $tmp137 = (frost$core$Int64) {25};
frost$core$Bit $tmp138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block24; else goto block34;
block34:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {26};
frost$core$Bit $tmp141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp140);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block24; else goto block35;
block35:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {27};
frost$core$Bit $tmp144 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block24; else goto block36;
block36:;
frost$core$Int64 $tmp146 = (frost$core$Int64) {34};
frost$core$Bit $tmp147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block24; else goto block37;
block37:;
frost$core$Int64 $tmp149 = (frost$core$Int64) {35};
frost$core$Bit $tmp150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block24; else goto block38;
block24:;
// line 121
frost$core$Int64 $tmp152 = (frost$core$Int64) {7};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp153 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp152);
$fn155 $tmp154 = ($fn155) param0->$class->vtable[5];
$tmp154(param0, param1, $tmp153);
goto block3;
block38:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {28};
frost$core$Bit $tmp157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {29};
frost$core$Bit $tmp160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp159);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block39; else goto block41;
block41:;
frost$core$Int64 $tmp162 = (frost$core$Int64) {30};
frost$core$Bit $tmp163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block39; else goto block42;
block42:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {31};
frost$core$Bit $tmp166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block39; else goto block43;
block43:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {32};
frost$core$Bit $tmp169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block39; else goto block44;
block44:;
frost$core$Int64 $tmp171 = (frost$core$Int64) {33};
frost$core$Bit $tmp172 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block39; else goto block45;
block45:;
frost$core$Int64 $tmp174 = (frost$core$Int64) {36};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block39; else goto block46;
block46:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {37};
frost$core$Bit $tmp178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp177);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block39; else goto block47;
block47:;
frost$core$Int64 $tmp180 = (frost$core$Int64) {38};
frost$core$Bit $tmp181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block39; else goto block48;
block48:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {39};
frost$core$Bit $tmp184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block39; else goto block49;
block49:;
frost$core$Int64 $tmp186 = (frost$core$Int64) {40};
frost$core$Bit $tmp187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp186);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block39; else goto block50;
block50:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {41};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block39; else goto block51;
block51:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {23};
frost$core$Bit $tmp193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block39; else goto block52;
block52:;
frost$core$Int64 $tmp195 = (frost$core$Int64) {45};
frost$core$Bit $tmp196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block39; else goto block53;
block53:;
frost$core$Int64 $tmp198 = (frost$core$Int64) {46};
frost$core$Bit $tmp199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block39; else goto block54;
block39:;
// line 127
frost$core$Int64 $tmp201 = (frost$core$Int64) {8};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp202 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp201);
$fn204 $tmp203 = ($fn204) param0->$class->vtable[5];
$tmp203(param0, param1, $tmp202);
goto block3;
block54:;
frost$core$Int64 $tmp205 = (frost$core$Int64) {47};
frost$core$Bit $tmp206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp205);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {48};
frost$core$Bit $tmp209 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block55; else goto block57;
block55:;
// line 130
frost$core$Int64 $tmp211 = (frost$core$Int64) {9};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp212 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp211);
$fn214 $tmp213 = ($fn214) param0->$class->vtable[5];
$tmp213(param0, param1, $tmp212);
goto block3;
block57:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {50};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {51};
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block58; else goto block60;
block60:;
frost$core$Int64 $tmp221 = (frost$core$Int64) {52};
frost$core$Bit $tmp222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block58; else goto block61;
block61:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {53};
frost$core$Bit $tmp225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block58; else goto block62;
block62:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {54};
frost$core$Bit $tmp228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block58; else goto block63;
block63:;
frost$core$Int64 $tmp230 = (frost$core$Int64) {55};
frost$core$Bit $tmp231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block58; else goto block64;
block64:;
frost$core$Int64 $tmp233 = (frost$core$Int64) {56};
frost$core$Bit $tmp234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block58; else goto block65;
block65:;
frost$core$Int64 $tmp236 = (frost$core$Int64) {57};
frost$core$Bit $tmp237 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block58; else goto block66;
block66:;
frost$core$Int64 $tmp239 = (frost$core$Int64) {58};
frost$core$Bit $tmp240 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block58; else goto block67;
block67:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {59};
frost$core$Bit $tmp243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp242);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block58; else goto block68;
block68:;
frost$core$Int64 $tmp245 = (frost$core$Int64) {60};
frost$core$Bit $tmp246 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block58; else goto block69;
block69:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {61};
frost$core$Bit $tmp249 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp248);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block58; else goto block70;
block70:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {62};
frost$core$Bit $tmp252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block58; else goto block71;
block71:;
frost$core$Int64 $tmp254 = (frost$core$Int64) {63};
frost$core$Bit $tmp255 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block58; else goto block72;
block72:;
frost$core$Int64 $tmp257 = (frost$core$Int64) {64};
frost$core$Bit $tmp258 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block58; else goto block73;
block73:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {65};
frost$core$Bit $tmp261 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp260);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block58; else goto block74;
block74:;
frost$core$Int64 $tmp263 = (frost$core$Int64) {66};
frost$core$Bit $tmp264 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block58; else goto block75;
block75:;
frost$core$Int64 $tmp266 = (frost$core$Int64) {67};
frost$core$Bit $tmp267 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp266);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block58; else goto block76;
block76:;
frost$core$Int64 $tmp269 = (frost$core$Int64) {68};
frost$core$Bit $tmp270 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp269);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block58; else goto block77;
block77:;
frost$core$Int64 $tmp272 = (frost$core$Int64) {69};
frost$core$Bit $tmp273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block58; else goto block78;
block78:;
frost$core$Int64 $tmp275 = (frost$core$Int64) {70};
frost$core$Bit $tmp276 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp275);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block58; else goto block79;
block79:;
frost$core$Int64 $tmp278 = (frost$core$Int64) {71};
frost$core$Bit $tmp279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block58; else goto block80;
block80:;
frost$core$Int64 $tmp281 = (frost$core$Int64) {72};
frost$core$Bit $tmp282 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp281);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block58; else goto block81;
block81:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {73};
frost$core$Bit $tmp285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block58; else goto block82;
block82:;
frost$core$Int64 $tmp287 = (frost$core$Int64) {74};
frost$core$Bit $tmp288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block58; else goto block83;
block83:;
frost$core$Int64 $tmp290 = (frost$core$Int64) {75};
frost$core$Bit $tmp291 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block58; else goto block84;
block84:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {76};
frost$core$Bit $tmp294 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp293);
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block58; else goto block85;
block85:;
frost$core$Int64 $tmp296 = (frost$core$Int64) {77};
frost$core$Bit $tmp297 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp296);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block58; else goto block86;
block86:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {78};
frost$core$Bit $tmp300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp299);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block58; else goto block87;
block87:;
frost$core$Int64 $tmp302 = (frost$core$Int64) {79};
frost$core$Bit $tmp303 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp302);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block58; else goto block88;
block88:;
frost$core$Int64 $tmp305 = (frost$core$Int64) {80};
frost$core$Bit $tmp306 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block58; else goto block89;
block89:;
frost$core$Int64 $tmp308 = (frost$core$Int64) {81};
frost$core$Bit $tmp309 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp308);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block58; else goto block90;
block90:;
frost$core$Int64 $tmp311 = (frost$core$Int64) {82};
frost$core$Bit $tmp312 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block58; else goto block91;
block91:;
frost$core$Int64 $tmp314 = (frost$core$Int64) {83};
frost$core$Bit $tmp315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp314);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block58; else goto block92;
block92:;
frost$core$Int64 $tmp317 = (frost$core$Int64) {84};
frost$core$Bit $tmp318 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp317);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block58; else goto block93;
block93:;
frost$core$Int64 $tmp320 = (frost$core$Int64) {85};
frost$core$Bit $tmp321 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block58; else goto block94;
block94:;
frost$core$Int64 $tmp323 = (frost$core$Int64) {86};
frost$core$Bit $tmp324 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp323);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block58; else goto block95;
block95:;
frost$core$Int64 $tmp326 = (frost$core$Int64) {87};
frost$core$Bit $tmp327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block58; else goto block96;
block96:;
frost$core$Int64 $tmp329 = (frost$core$Int64) {88};
frost$core$Bit $tmp330 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp329);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block58; else goto block97;
block97:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {89};
frost$core$Bit $tmp333 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block58; else goto block98;
block98:;
frost$core$Int64 $tmp335 = (frost$core$Int64) {90};
frost$core$Bit $tmp336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block58; else goto block99;
block99:;
frost$core$Int64 $tmp338 = (frost$core$Int64) {91};
frost$core$Bit $tmp339 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block58; else goto block100;
block100:;
frost$core$Int64 $tmp341 = (frost$core$Int64) {92};
frost$core$Bit $tmp342 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp341);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block58; else goto block101;
block101:;
frost$core$Int64 $tmp344 = (frost$core$Int64) {93};
frost$core$Bit $tmp345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block58; else goto block102;
block102:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {94};
frost$core$Bit $tmp348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block58; else goto block103;
block103:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {95};
frost$core$Bit $tmp351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block58; else goto block104;
block104:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {96};
frost$core$Bit $tmp354 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block58; else goto block105;
block105:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {97};
frost$core$Bit $tmp357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp356);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block58; else goto block106;
block106:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {98};
frost$core$Bit $tmp360 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp43, $tmp359);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block58; else goto block107;
block58:;
// line 146
frost$core$Int64 $tmp362 = (frost$core$Int64) {11};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp363 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp362);
$fn365 $tmp364 = ($fn365) param0->$class->vtable[5];
$tmp364(param0, param1, $tmp363);
goto block3;
block107:;
// line 149
frost$core$Int64 $tmp366 = (frost$core$Int64) {0};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp367 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp366);
$fn369 $tmp368 = ($fn369) param0->$class->vtable[5];
$tmp368(param0, param1, $tmp367);
goto block3;
block3:;
return;

}
void org$frostlanguage$frostc$parser$SyntaxHighlighter$rewind(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0) {

// line 155
frost$collections$Array** $tmp370 = &param0->tokens;
frost$collections$Array* $tmp371 = *$tmp370;
frost$collections$Array** $tmp372 = &param0->tokens;
frost$collections$Array* $tmp373 = *$tmp372;
ITable* $tmp374 = ((frost$collections$CollectionView*) $tmp373)->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
frost$core$Int64 $tmp377 = $tmp375(((frost$collections$CollectionView*) $tmp373));
frost$core$Int64 $tmp378 = (frost$core$Int64) {1};
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
frost$core$Int64 $tmp382 = (frost$core$Int64) {$tmp381};
frost$core$Object* $tmp383 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp371, $tmp382);
frost$core$Frost$unref$frost$core$Object$Q($tmp383);
// unreffing REF($14:frost.collections.Array.T)
return;

}
void org$frostlanguage$frostc$parser$SyntaxHighlighter$init(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0) {

// line 68
frost$collections$Stack* $tmp384 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$collections$Stack** $tmp385 = &param0->stack;
frost$collections$Stack* $tmp386 = *$tmp385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$collections$Stack** $tmp387 = &param0->stack;
*$tmp387 = $tmp384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// unreffing REF($1:frost.collections.Stack<org.frostlanguage.frostc.parser.SyntaxHighlighter.Kind>)
// line 71
frost$collections$Array* $tmp388 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$collections$Array** $tmp389 = &param0->tokens;
frost$collections$Array* $tmp390 = *$tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$collections$Array** $tmp391 = &param0->tokens;
*$tmp391 = $tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing REF($16:frost.collections.Array<org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.parser.Token, org.frostlanguage.frostc.parser.SyntaxHighlighter.Kind>>)
return;

}
void org$frostlanguage$frostc$parser$SyntaxHighlighter$cleanup(org$frostlanguage$frostc$parser$SyntaxHighlighter* param0) {

// line 5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Stack** $tmp392 = &param0->stack;
frost$collections$Stack* $tmp393 = *$tmp392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$collections$Array** $tmp394 = &param0->tokens;
frost$collections$Array* $tmp395 = *$tmp394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
return;

}

