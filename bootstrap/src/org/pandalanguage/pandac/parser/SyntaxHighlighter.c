#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/collections/CollectionView.h"


static panda$core$String $s1;
org$pandalanguage$pandac$parser$SyntaxHighlighter$class_type org$pandalanguage$pandac$parser$SyntaxHighlighter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup, org$pandalanguage$pandac$parser$SyntaxHighlighter$reset, org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$rewind} };

typedef void (*$fn41)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn50)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn78)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn88)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn95)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn102)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn109)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn155)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn204)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn214)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn365)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn369)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Int64 (*$fn376)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 49, -1741021081154568297, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x70\x61\x6e\x64\x61", 23, -4185779237782815759, NULL };

void org$pandalanguage$pandac$parser$SyntaxHighlighter$reset(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0) {

// line 74
panda$collections$Array** $tmp2 = &param0->tokens;
panda$collections$Array* $tmp3 = *$tmp2;
panda$collections$Array$clear($tmp3);
// line 75
panda$collections$Stack** $tmp4 = &param0->stack;
panda$collections$Stack* $tmp5 = *$tmp4;
panda$collections$Stack$clear($tmp5);
return;

}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 79
panda$collections$Stack** $tmp6 = &param0->stack;
panda$collections$Stack* $tmp7 = *$tmp6;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp8;
$tmp8 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp8->value = param1;
panda$collections$Stack$push$panda$collections$Stack$T($tmp7, ((panda$core$Object*) $tmp8));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
return;

}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 83
panda$collections$Stack** $tmp9 = &param0->stack;
panda$collections$Stack* $tmp10 = *$tmp9;
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Object* $tmp12 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp10, $tmp11);
panda$core$Int64 $tmp13 = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp12)->value.$rawValue;
panda$core$Int64 $tmp14 = param1.$rawValue;
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp13, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp17 = (panda$core$Int64) {83};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
// line 84
panda$collections$Stack** $tmp19 = &param0->stack;
panda$collections$Stack* $tmp20 = *$tmp19;
panda$core$Object* $tmp21 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp20);
panda$core$Panda$unref$panda$core$Object$Q($tmp21);
return;

}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0, org$pandalanguage$pandac$parser$Token param1, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param2) {

// line 88
panda$collections$Array** $tmp22 = &param0->tokens;
panda$collections$Array* $tmp23 = *$tmp22;
org$pandalanguage$pandac$Pair* $tmp24 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
org$pandalanguage$pandac$parser$Token$wrapper* $tmp25;
$tmp25 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
$tmp25->value = param1;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp26;
$tmp26 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp26->value = param2;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp24, ((panda$core$Object*) $tmp25), ((panda$core$Object*) $tmp26));
panda$collections$Array$add$panda$collections$Array$T($tmp23, ((panda$core$Object*) $tmp24));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
return;

}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 92
panda$collections$Stack** $tmp27 = &param0->stack;
panda$collections$Stack* $tmp28 = *$tmp27;
panda$core$Int64 $tmp29 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp28);
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 > $tmp32;
panda$core$Bit $tmp34 = (panda$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block1; else goto block2;
block1:;
// line 93
panda$collections$Stack** $tmp36 = &param0->stack;
panda$collections$Stack* $tmp37 = *$tmp36;
panda$core$Int64 $tmp38 = (panda$core$Int64) {0};
panda$core$Object* $tmp39 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp37, $tmp38);
$fn41 $tmp40 = ($fn41) param0->$class->vtable[5];
$tmp40(param0, param1, ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp39)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
// line 94
return;
block2:;
// line 97
org$pandalanguage$pandac$parser$Token$Kind $tmp42 = param1.kind;
panda$core$Int64 $tmp43 = $tmp42.$rawValue;
panda$core$Int64 $tmp44 = (panda$core$Int64) {1};
panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block4; else goto block5;
block4:;
// line 99
panda$core$Int64 $tmp47 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp48 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp47);
$fn50 $tmp49 = ($fn50) param0->$class->vtable[5];
$tmp49(param0, param1, $tmp48);
goto block3;
block5:;
panda$core$Int64 $tmp51 = (panda$core$Int64) {3};
panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp51);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {4};
panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp57 = (panda$core$Int64) {5};
panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp57);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp60 = (panda$core$Int64) {6};
panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp63 = (panda$core$Int64) {42};
panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp63);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp66 = (panda$core$Int64) {43};
panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp66);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp69 = (panda$core$Int64) {44};
panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block6; else goto block13;
block13:;
panda$core$Int64 $tmp72 = (panda$core$Int64) {2};
panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block6; else goto block14;
block6:;
// line 103
panda$core$Int64 $tmp75 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp76 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp75);
$fn78 $tmp77 = ($fn78) param0->$class->vtable[5];
$tmp77(param0, param1, $tmp76);
goto block3;
block14:;
panda$core$Int64 $tmp79 = (panda$core$Int64) {9};
panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp82 = (panda$core$Int64) {10};
panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block15; else goto block17;
block15:;
// line 106
panda$core$Int64 $tmp85 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp86 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp85);
$fn88 $tmp87 = ($fn88) param0->$class->vtable[5];
$tmp87(param0, param1, $tmp86);
goto block3;
block17:;
panda$core$Int64 $tmp89 = (panda$core$Int64) {11};
panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block18; else goto block19;
block18:;
// line 109
panda$core$Int64 $tmp92 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp93 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp92);
$fn95 $tmp94 = ($fn95) param0->$class->vtable[5];
$tmp94(param0, param1, $tmp93);
goto block3;
block19:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {12};
panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block20; else goto block21;
block20:;
// line 112
panda$core$Int64 $tmp99 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp100 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp99);
$fn102 $tmp101 = ($fn102) param0->$class->vtable[5];
$tmp101(param0, param1, $tmp100);
goto block3;
block21:;
panda$core$Int64 $tmp103 = (panda$core$Int64) {14};
panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block22; else goto block23;
block22:;
// line 115
panda$core$Int64 $tmp106 = (panda$core$Int64) {3};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp107 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp106);
$fn109 $tmp108 = ($fn109) param0->$class->vtable[5];
$tmp108(param0, param1, $tmp107);
goto block3;
block23:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {15};
panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp113 = (panda$core$Int64) {16};
panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp113);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block24; else goto block26;
block26:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {17};
panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block24; else goto block27;
block27:;
panda$core$Int64 $tmp119 = (panda$core$Int64) {18};
panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block24; else goto block28;
block28:;
panda$core$Int64 $tmp122 = (panda$core$Int64) {19};
panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp122);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block24; else goto block29;
block29:;
panda$core$Int64 $tmp125 = (panda$core$Int64) {20};
panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block24; else goto block30;
block30:;
panda$core$Int64 $tmp128 = (panda$core$Int64) {21};
panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block24; else goto block31;
block31:;
panda$core$Int64 $tmp131 = (panda$core$Int64) {22};
panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block24; else goto block32;
block32:;
panda$core$Int64 $tmp134 = (panda$core$Int64) {24};
panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block24; else goto block33;
block33:;
panda$core$Int64 $tmp137 = (panda$core$Int64) {25};
panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block24; else goto block34;
block34:;
panda$core$Int64 $tmp140 = (panda$core$Int64) {26};
panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp140);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block24; else goto block35;
block35:;
panda$core$Int64 $tmp143 = (panda$core$Int64) {27};
panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block24; else goto block36;
block36:;
panda$core$Int64 $tmp146 = (panda$core$Int64) {34};
panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block24; else goto block37;
block37:;
panda$core$Int64 $tmp149 = (panda$core$Int64) {35};
panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block24; else goto block38;
block24:;
// line 121
panda$core$Int64 $tmp152 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp153 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp152);
$fn155 $tmp154 = ($fn155) param0->$class->vtable[5];
$tmp154(param0, param1, $tmp153);
goto block3;
block38:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {28};
panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp159 = (panda$core$Int64) {29};
panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp159);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block39; else goto block41;
block41:;
panda$core$Int64 $tmp162 = (panda$core$Int64) {30};
panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block39; else goto block42;
block42:;
panda$core$Int64 $tmp165 = (panda$core$Int64) {31};
panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block39; else goto block43;
block43:;
panda$core$Int64 $tmp168 = (panda$core$Int64) {32};
panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block39; else goto block44;
block44:;
panda$core$Int64 $tmp171 = (panda$core$Int64) {33};
panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block39; else goto block45;
block45:;
panda$core$Int64 $tmp174 = (panda$core$Int64) {36};
panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block39; else goto block46;
block46:;
panda$core$Int64 $tmp177 = (panda$core$Int64) {37};
panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp177);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block39; else goto block47;
block47:;
panda$core$Int64 $tmp180 = (panda$core$Int64) {38};
panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block39; else goto block48;
block48:;
panda$core$Int64 $tmp183 = (panda$core$Int64) {39};
panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block39; else goto block49;
block49:;
panda$core$Int64 $tmp186 = (panda$core$Int64) {40};
panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp186);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block39; else goto block50;
block50:;
panda$core$Int64 $tmp189 = (panda$core$Int64) {41};
panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block39; else goto block51;
block51:;
panda$core$Int64 $tmp192 = (panda$core$Int64) {23};
panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block39; else goto block52;
block52:;
panda$core$Int64 $tmp195 = (panda$core$Int64) {45};
panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block39; else goto block53;
block53:;
panda$core$Int64 $tmp198 = (panda$core$Int64) {46};
panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block39; else goto block54;
block39:;
// line 127
panda$core$Int64 $tmp201 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp202 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp201);
$fn204 $tmp203 = ($fn204) param0->$class->vtable[5];
$tmp203(param0, param1, $tmp202);
goto block3;
block54:;
panda$core$Int64 $tmp205 = (panda$core$Int64) {47};
panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp205);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {48};
panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block55; else goto block57;
block55:;
// line 130
panda$core$Int64 $tmp211 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp212 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp211);
$fn214 $tmp213 = ($fn214) param0->$class->vtable[5];
$tmp213(param0, param1, $tmp212);
goto block3;
block57:;
panda$core$Int64 $tmp215 = (panda$core$Int64) {50};
panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp218 = (panda$core$Int64) {51};
panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block58; else goto block60;
block60:;
panda$core$Int64 $tmp221 = (panda$core$Int64) {52};
panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block58; else goto block61;
block61:;
panda$core$Int64 $tmp224 = (panda$core$Int64) {53};
panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block58; else goto block62;
block62:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {54};
panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block58; else goto block63;
block63:;
panda$core$Int64 $tmp230 = (panda$core$Int64) {55};
panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block58; else goto block64;
block64:;
panda$core$Int64 $tmp233 = (panda$core$Int64) {56};
panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block58; else goto block65;
block65:;
panda$core$Int64 $tmp236 = (panda$core$Int64) {57};
panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block58; else goto block66;
block66:;
panda$core$Int64 $tmp239 = (panda$core$Int64) {58};
panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block58; else goto block67;
block67:;
panda$core$Int64 $tmp242 = (panda$core$Int64) {59};
panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp242);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block58; else goto block68;
block68:;
panda$core$Int64 $tmp245 = (panda$core$Int64) {60};
panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block58; else goto block69;
block69:;
panda$core$Int64 $tmp248 = (panda$core$Int64) {61};
panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp248);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block58; else goto block70;
block70:;
panda$core$Int64 $tmp251 = (panda$core$Int64) {62};
panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block58; else goto block71;
block71:;
panda$core$Int64 $tmp254 = (panda$core$Int64) {63};
panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block58; else goto block72;
block72:;
panda$core$Int64 $tmp257 = (panda$core$Int64) {64};
panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block58; else goto block73;
block73:;
panda$core$Int64 $tmp260 = (panda$core$Int64) {65};
panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp260);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block58; else goto block74;
block74:;
panda$core$Int64 $tmp263 = (panda$core$Int64) {66};
panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block58; else goto block75;
block75:;
panda$core$Int64 $tmp266 = (panda$core$Int64) {67};
panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp266);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block58; else goto block76;
block76:;
panda$core$Int64 $tmp269 = (panda$core$Int64) {68};
panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp269);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block58; else goto block77;
block77:;
panda$core$Int64 $tmp272 = (panda$core$Int64) {69};
panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block58; else goto block78;
block78:;
panda$core$Int64 $tmp275 = (panda$core$Int64) {70};
panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp275);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block58; else goto block79;
block79:;
panda$core$Int64 $tmp278 = (panda$core$Int64) {71};
panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block58; else goto block80;
block80:;
panda$core$Int64 $tmp281 = (panda$core$Int64) {72};
panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp281);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block58; else goto block81;
block81:;
panda$core$Int64 $tmp284 = (panda$core$Int64) {73};
panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block58; else goto block82;
block82:;
panda$core$Int64 $tmp287 = (panda$core$Int64) {74};
panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block58; else goto block83;
block83:;
panda$core$Int64 $tmp290 = (panda$core$Int64) {75};
panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block58; else goto block84;
block84:;
panda$core$Int64 $tmp293 = (panda$core$Int64) {76};
panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp293);
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block58; else goto block85;
block85:;
panda$core$Int64 $tmp296 = (panda$core$Int64) {77};
panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp296);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block58; else goto block86;
block86:;
panda$core$Int64 $tmp299 = (panda$core$Int64) {78};
panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp299);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block58; else goto block87;
block87:;
panda$core$Int64 $tmp302 = (panda$core$Int64) {79};
panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp302);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block58; else goto block88;
block88:;
panda$core$Int64 $tmp305 = (panda$core$Int64) {80};
panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block58; else goto block89;
block89:;
panda$core$Int64 $tmp308 = (panda$core$Int64) {81};
panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp308);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block58; else goto block90;
block90:;
panda$core$Int64 $tmp311 = (panda$core$Int64) {82};
panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block58; else goto block91;
block91:;
panda$core$Int64 $tmp314 = (panda$core$Int64) {83};
panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp314);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block58; else goto block92;
block92:;
panda$core$Int64 $tmp317 = (panda$core$Int64) {84};
panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp317);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block58; else goto block93;
block93:;
panda$core$Int64 $tmp320 = (panda$core$Int64) {85};
panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block58; else goto block94;
block94:;
panda$core$Int64 $tmp323 = (panda$core$Int64) {86};
panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp323);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block58; else goto block95;
block95:;
panda$core$Int64 $tmp326 = (panda$core$Int64) {87};
panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block58; else goto block96;
block96:;
panda$core$Int64 $tmp329 = (panda$core$Int64) {88};
panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp329);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block58; else goto block97;
block97:;
panda$core$Int64 $tmp332 = (panda$core$Int64) {89};
panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block58; else goto block98;
block98:;
panda$core$Int64 $tmp335 = (panda$core$Int64) {90};
panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block58; else goto block99;
block99:;
panda$core$Int64 $tmp338 = (panda$core$Int64) {91};
panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block58; else goto block100;
block100:;
panda$core$Int64 $tmp341 = (panda$core$Int64) {92};
panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp341);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block58; else goto block101;
block101:;
panda$core$Int64 $tmp344 = (panda$core$Int64) {93};
panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block58; else goto block102;
block102:;
panda$core$Int64 $tmp347 = (panda$core$Int64) {94};
panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block58; else goto block103;
block103:;
panda$core$Int64 $tmp350 = (panda$core$Int64) {95};
panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block58; else goto block104;
block104:;
panda$core$Int64 $tmp353 = (panda$core$Int64) {96};
panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block58; else goto block105;
block105:;
panda$core$Int64 $tmp356 = (panda$core$Int64) {97};
panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp356);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block58; else goto block106;
block106:;
panda$core$Int64 $tmp359 = (panda$core$Int64) {98};
panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, $tmp359);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block58; else goto block107;
block58:;
// line 146
panda$core$Int64 $tmp362 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp363 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp362);
$fn365 $tmp364 = ($fn365) param0->$class->vtable[5];
$tmp364(param0, param1, $tmp363);
goto block3;
block107:;
// line 149
panda$core$Int64 $tmp366 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp367 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp366);
$fn369 $tmp368 = ($fn369) param0->$class->vtable[5];
$tmp368(param0, param1, $tmp367);
goto block3;
block3:;
return;

}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$rewind(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0) {

// line 155
panda$collections$Array** $tmp370 = &param0->tokens;
panda$collections$Array* $tmp371 = *$tmp370;
panda$collections$Array** $tmp372 = &param0->tokens;
panda$collections$Array* $tmp373 = *$tmp372;
ITable* $tmp374 = ((panda$collections$CollectionView*) $tmp373)->$class->itable;
while ($tmp374->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
panda$core$Int64 $tmp377 = $tmp375(((panda$collections$CollectionView*) $tmp373));
panda$core$Int64 $tmp378 = (panda$core$Int64) {1};
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
panda$core$Int64 $tmp382 = (panda$core$Int64) {$tmp381};
panda$core$Object* $tmp383 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T($tmp371, $tmp382);
panda$core$Panda$unref$panda$core$Object$Q($tmp383);
return;

}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$init(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0) {

// line 68
panda$collections$Stack* $tmp384 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp384);
panda$collections$Stack** $tmp385 = &param0->stack;
panda$collections$Stack* $tmp386 = *$tmp385;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
panda$collections$Stack** $tmp387 = &param0->stack;
*$tmp387 = $tmp384;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
// line 71
panda$collections$Array* $tmp388 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp388);
panda$collections$Array** $tmp389 = &param0->tokens;
panda$collections$Array* $tmp390 = *$tmp389;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
panda$collections$Array** $tmp391 = &param0->tokens;
*$tmp391 = $tmp388;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
return;

}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter* param0) {

panda$collections$Stack** $tmp392 = &param0->stack;
panda$collections$Stack* $tmp393 = *$tmp392;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
panda$collections$Array** $tmp394 = &param0->tokens;
panda$collections$Array* $tmp395 = *$tmp394;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
return;

}

