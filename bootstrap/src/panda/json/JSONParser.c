#include "panda/json/JSONParser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/json/Lexer.h"
#include "org/pandalanguage/json/Token.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Key.h"
#include "panda/core/Real64.h"


static panda$core$String $s1;
panda$json$JSONParser$class_type panda$json$JSONParser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$json$JSONParser$cleanup, panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON$Q, panda$json$JSONParser$next$R$org$pandalanguage$json$Token, panda$json$JSONParser$pushback$org$pandalanguage$json$Token, panda$json$JSONParser$peek$R$org$pandalanguage$json$Token, panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q, panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String, panda$json$JSONParser$array$R$panda$json$JSON, panda$json$JSONParser$object$R$panda$json$JSON, panda$json$JSONParser$string$R$panda$core$String, panda$json$JSONParser$node$R$panda$json$JSON} };

typedef panda$core$Bit (*$fn32)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn56)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn125)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn171)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -3529150264525428738, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x27", 95, -1448604240179629485, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x61\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5794856351010955204, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 6615757439154757100, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x27", 73, -3148637280429926197, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6e\x6f\x64\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -4987281448136266337, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON$Q(panda$json$JSONParser* param0, panda$core$String* param1) {

// line 26
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp2 = &param0->source;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$String** $tmp4 = &param0->source;
*$tmp4 = param1;
// line 27
org$pandalanguage$json$Lexer** $tmp5 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp6 = *$tmp5;
org$pandalanguage$json$Lexer$start$panda$core$String($tmp6, param1);
// line 28
panda$json$JSON* $tmp7 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($14:panda.json.JSON)
return $tmp7;

}
org$pandalanguage$json$Token panda$json$JSONParser$next$R$org$pandalanguage$json$Token(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token$nullable local0;
org$pandalanguage$json$Token local1;
// line 33
org$pandalanguage$json$Token$nullable* $tmp8 = &param0->pushbackToken;
org$pandalanguage$json$Token$nullable $tmp9 = *$tmp8;
panda$core$Bit $tmp10 = panda$core$Bit$init$builtin_bit($tmp9.nonnull);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 34
org$pandalanguage$json$Token$nullable* $tmp12 = &param0->pushbackToken;
org$pandalanguage$json$Token$nullable $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// line 35
org$pandalanguage$json$Token$nullable* $tmp14 = &param0->pushbackToken;
*$tmp14 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
// line 36
org$pandalanguage$json$Token$nullable $tmp15 = *(&local0);
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit($tmp15.nonnull);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp18 = (panda$core$Int64) {36};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s19, $tmp18, &$s20);
abort(); // unreachable
block3:;
return ((org$pandalanguage$json$Token) $tmp15.value);
block2:;
// line 38
org$pandalanguage$json$Lexer** $tmp21 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp22 = *$tmp21;
org$pandalanguage$json$Token $tmp23 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token($tmp22);
*(&local1) = $tmp23;
// line 39
goto block5;
block5:;
org$pandalanguage$json$Token $tmp24 = *(&local1);
org$pandalanguage$json$Token$Kind $tmp25 = $tmp24.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp26;
$tmp26 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp26->value = $tmp25;
panda$core$Int64 $tmp27 = (panda$core$Int64) {6};
org$pandalanguage$json$Token$Kind $tmp28 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp27);
org$pandalanguage$json$Token$Kind$wrapper* $tmp29;
$tmp29 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp29->value = $tmp28;
ITable* $tmp30 = ((panda$core$Equatable*) $tmp26)->$class->itable;
while ($tmp30->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
panda$core$Bit $tmp33 = $tmp31(((panda$core$Equatable*) $tmp26), ((panda$core$Equatable*) $tmp29));
bool $tmp34 = $tmp33.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp29)));
// unreffing REF($38:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp26)));
// unreffing REF($34:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp34) goto block6; else goto block7;
block6:;
// line 40
org$pandalanguage$json$Lexer** $tmp35 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp36 = *$tmp35;
org$pandalanguage$json$Token $tmp37 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token($tmp36);
*(&local1) = $tmp37;
goto block5;
block7:;
// line 42
org$pandalanguage$json$Token $tmp38 = *(&local1);
return $tmp38;

}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* param0, org$pandalanguage$json$Token param1) {

// line 47
org$pandalanguage$json$Token$nullable* $tmp39 = &param0->pushbackToken;
org$pandalanguage$json$Token$nullable $tmp40 = *$tmp39;
panda$core$Bit $tmp41 = panda$core$Bit$init$builtin_bit(!$tmp40.nonnull);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {47};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s44, $tmp43);
abort(); // unreachable
block1:;
// line 48
org$pandalanguage$json$Token$nullable* $tmp45 = &param0->pushbackToken;
*$tmp45 = ((org$pandalanguage$json$Token$nullable) { param1, true });
return;

}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
// line 53
org$pandalanguage$json$Token $tmp46 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp46;
// line 54
org$pandalanguage$json$Token $tmp47 = *(&local0);
panda$json$JSONParser$pushback$org$pandalanguage$json$Token(param0, $tmp47);
// line 55
org$pandalanguage$json$Token $tmp48 = *(&local0);
return $tmp48;

}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* param0, org$pandalanguage$json$Token$Kind param1) {

org$pandalanguage$json$Token local0;
// line 60
org$pandalanguage$json$Token $tmp49 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp49;
// line 61
org$pandalanguage$json$Token $tmp50 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp51 = $tmp50.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp52;
$tmp52 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp52->value = $tmp51;
org$pandalanguage$json$Token$Kind$wrapper* $tmp53;
$tmp53 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp53->value = param1;
ITable* $tmp54 = ((panda$core$Equatable*) $tmp52)->$class->itable;
while ($tmp54->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
panda$core$Bit $tmp57 = $tmp55(((panda$core$Equatable*) $tmp52), ((panda$core$Equatable*) $tmp53));
bool $tmp58 = $tmp57.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp53)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp52)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp58) goto block1; else goto block2;
block1:;
// line 62
org$pandalanguage$json$Token $tmp59 = *(&local0);
return ((org$pandalanguage$json$Token$nullable) { $tmp59, true });
block2:;
// line 64
org$pandalanguage$json$Token $tmp60 = *(&local0);
panda$json$JSONParser$pushback$org$pandalanguage$json$Token(param0, $tmp60);
// line 65
return ((org$pandalanguage$json$Token$nullable) { .nonnull = false });

}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* param0, org$pandalanguage$json$Token param1) {

// line 70
panda$core$String** $tmp61 = &param0->source;
panda$core$String* $tmp62 = *$tmp61;
panda$core$String$Index $tmp63 = param1.start;
panda$core$String$Index $tmp64 = param1.end;
panda$core$Bit $tmp65 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp66 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp63, $tmp64, $tmp65);
panda$core$String* $tmp67 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp62, $tmp66);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($7:panda.core.String)
return $tmp67;

}
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* param0) {

panda$collections$Array* local0 = NULL;
// line 75
panda$core$Int64 $tmp68 = (panda$core$Int64) {13};
org$pandalanguage$json$Token$Kind $tmp69 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp68);
org$pandalanguage$json$Token$nullable $tmp70 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(param0, $tmp69);
panda$core$Bit $tmp71 = panda$core$Bit$init$builtin_bit($tmp70.nonnull);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 76
panda$json$JSON* $tmp73 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp74 = (panda$core$Int64) {5};
panda$collections$Array* $tmp75 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp76 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp75, $tmp76);
panda$json$JSON$init$panda$core$Int64$panda$collections$ListView$LTpanda$json$JSON$GT($tmp73, $tmp74, ((panda$collections$ListView*) $tmp75));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($11:panda.collections.Array<panda.json.JSON>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($9:panda.json.JSON)
return $tmp73;
block2:;
// line 78
panda$collections$Array* $tmp77 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp77);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$collections$Array* $tmp78 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
*(&local0) = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($27:panda.collections.Array<panda.json.JSON>)
// line 79
goto block3;
block3:;
// line 80
panda$collections$Array* $tmp79 = *(&local0);
panda$json$JSON* $tmp80 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp79, ((panda$core$Object*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($45:panda.json.JSON)
// line 81
org$pandalanguage$json$Token $tmp81 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
org$pandalanguage$json$Token$Kind $tmp82 = $tmp81.kind;
panda$core$Int64 $tmp83 = $tmp82.$rawValue;
panda$core$Int64 $tmp84 = (panda$core$Int64) {13};
panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp83, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block6; else goto block7;
block6:;
// line 83
panda$json$JSON* $tmp87 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp88 = (panda$core$Int64) {5};
panda$collections$Array* $tmp89 = *(&local0);
panda$json$JSON$init$panda$core$Int64$panda$collections$ListView$LTpanda$json$JSON$GT($tmp87, $tmp88, ((panda$collections$ListView*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($60:panda.json.JSON)
panda$collections$Array* $tmp90 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp87;
block7:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {14};
panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp83, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block8; else goto block9;
block8:;
// line 86
goto block3;
block9:;
// line 89
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit(false);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {89};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block10:;
goto block5;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp99 = panda$core$Bit$init$builtin_bit(false);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp101 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block12:;
abort(); // unreachable

}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* param0) {

panda$collections$HashMap* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$json$Token local2;
// line 97
panda$core$Int64 $tmp104 = (panda$core$Int64) {11};
org$pandalanguage$json$Token$Kind $tmp105 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp104);
org$pandalanguage$json$Token$nullable $tmp106 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(param0, $tmp105);
panda$core$Bit $tmp107 = panda$core$Bit$init$builtin_bit($tmp106.nonnull);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
// line 98
panda$json$JSON* $tmp109 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp110 = (panda$core$Int64) {4};
panda$collections$HashMap* $tmp111 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp111);
panda$json$JSON$init$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT($tmp109, $tmp110, ((panda$collections$MapView*) $tmp111));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($11:panda.collections.HashMap<panda.core.String, panda.json.JSON>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($9:panda.json.JSON)
return $tmp109;
block2:;
// line 100
panda$collections$HashMap* $tmp112 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp112);
*(&local0) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$collections$HashMap* $tmp113 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
*(&local0) = $tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($26:panda.collections.HashMap<panda.core.String, panda.json.JSON>)
// line 101
goto block3;
block3:;
// line 102
panda$core$String* $tmp114 = panda$json$JSONParser$string$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$core$String* $tmp115 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
*(&local1) = $tmp114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($42:panda.core.String)
// line 103
org$pandalanguage$json$Token $tmp116 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local2) = $tmp116;
// line 104
org$pandalanguage$json$Token $tmp117 = *(&local2);
org$pandalanguage$json$Token$Kind $tmp118 = $tmp117.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp119;
$tmp119 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp119->value = $tmp118;
panda$core$Int64 $tmp120 = (panda$core$Int64) {15};
org$pandalanguage$json$Token$Kind $tmp121 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp120);
org$pandalanguage$json$Token$Kind$wrapper* $tmp122;
$tmp122 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp122->value = $tmp121;
ITable* $tmp123 = ((panda$core$Equatable*) $tmp119)->$class->itable;
while ($tmp123->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[1];
panda$core$Bit $tmp126 = $tmp124(((panda$core$Equatable*) $tmp119), ((panda$core$Equatable*) $tmp122));
bool $tmp127 = $tmp126.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp122)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp119)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp127) goto block5; else goto block6;
block5:;
// line 105
panda$core$Bit $tmp128 = panda$core$Bit$init$builtin_bit(false);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp130 = (panda$core$Int64) {105};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s131, $tmp130, &$s132);
abort(); // unreachable
block7:;
goto block6;
block6:;
// line 107
panda$collections$HashMap* $tmp133 = *(&local0);
panda$core$String* $tmp134 = *(&local1);
panda$json$JSON* $tmp135 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp133, ((panda$collections$Key*) $tmp134), ((panda$core$Object*) $tmp135));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
// unreffing REF($87:panda.json.JSON)
// line 108
org$pandalanguage$json$Token $tmp136 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
org$pandalanguage$json$Token$Kind $tmp137 = $tmp136.kind;
panda$core$Int64 $tmp138 = $tmp137.$rawValue;
panda$core$Int64 $tmp139 = (panda$core$Int64) {11};
panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp138, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block10; else goto block11;
block10:;
// line 110
panda$json$JSON* $tmp142 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp143 = (panda$core$Int64) {4};
panda$collections$HashMap* $tmp144 = *(&local0);
panda$json$JSON$init$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT($tmp142, $tmp143, ((panda$collections$MapView*) $tmp144));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($102:panda.json.JSON)
panda$core$String* $tmp145 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
panda$collections$HashMap* $tmp146 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing result
*(&local0) = ((panda$collections$HashMap*) NULL);
return $tmp142;
block11:;
panda$core$Int64 $tmp147 = (panda$core$Int64) {14};
panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp138, $tmp147);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block12; else goto block13;
block12:;
// line 113
panda$core$String* $tmp150 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block13:;
// line 116
panda$core$Bit $tmp151 = panda$core$Bit$init$builtin_bit(false);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp153 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s154, $tmp153, &$s155);
abort(); // unreachable
block14:;
goto block9;
block9:;
panda$core$String* $tmp156 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block4:;
panda$core$Bit $tmp157 = panda$core$Bit$init$builtin_bit(false);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp159 = (panda$core$Int64) {96};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block16:;
abort(); // unreachable

}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
panda$core$String* local1 = NULL;
// line 124
org$pandalanguage$json$Token $tmp162 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp162;
// line 125
org$pandalanguage$json$Token $tmp163 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp164 = $tmp163.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp165;
$tmp165 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp165->value = $tmp164;
panda$core$Int64 $tmp166 = (panda$core$Int64) {3};
org$pandalanguage$json$Token$Kind $tmp167 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp166);
org$pandalanguage$json$Token$Kind$wrapper* $tmp168;
$tmp168 = (org$pandalanguage$json$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp168->value = $tmp167;
ITable* $tmp169 = ((panda$core$Equatable*) $tmp165)->$class->itable;
while ($tmp169->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[1];
panda$core$Bit $tmp172 = $tmp170(((panda$core$Equatable*) $tmp165), ((panda$core$Equatable*) $tmp168));
bool $tmp173 = $tmp172.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp168)));
// unreffing REF($10:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp165)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp173) goto block1; else goto block2;
block1:;
// line 126
panda$core$Bit $tmp174 = panda$core$Bit$init$builtin_bit(false);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp176 = (panda$core$Int64) {126};
org$pandalanguage$json$Token $tmp177 = *(&local0);
panda$core$String* $tmp178 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp177);
panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s180, $tmp178);
panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s182);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s183, $tmp176, $tmp181);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing REF($28:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($27:panda.core.String)
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 128
org$pandalanguage$json$Token $tmp184 = *(&local0);
panda$core$String* $tmp185 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp184);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$String* $tmp186 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
*(&local1) = $tmp185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing REF($44:panda.core.String)
// line 129
panda$core$String* $tmp187 = *(&local1);
panda$core$String* $tmp188 = *(&local1);
panda$core$String* $tmp189 = *(&local1);
panda$core$String$Index $tmp190 = panda$core$String$get_start$R$panda$core$String$Index($tmp189);
panda$core$String$Index $tmp191 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp188, $tmp190);
panda$core$String* $tmp192 = *(&local1);
panda$core$String* $tmp193 = *(&local1);
panda$core$String$Index $tmp194 = panda$core$String$get_end$R$panda$core$String$Index($tmp193);
panda$core$String$Index $tmp195 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp192, $tmp194);
panda$core$Bit $tmp196 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp197 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp191, $tmp195, $tmp196);
panda$core$String* $tmp198 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp187, $tmp197);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($67:panda.core.String)
panda$core$String* $tmp199 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing s
*(&local1) = ((panda$core$String*) NULL);
return $tmp198;

}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
panda$core$String* local1 = NULL;
// line 134
org$pandalanguage$json$Token $tmp200 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp200;
// line 135
org$pandalanguage$json$Token $tmp201 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp202 = $tmp201.kind;
panda$core$Int64 $tmp203 = $tmp202.$rawValue;
panda$core$Int64 $tmp204 = (panda$core$Int64) {10};
panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block2; else goto block3;
block2:;
// line 137
panda$json$JSON* $tmp207 = panda$json$JSONParser$object$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing REF($12:panda.json.JSON)
return $tmp207;
block3:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {12};
panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block4; else goto block5;
block4:;
// line 140
panda$json$JSON* $tmp211 = panda$json$JSONParser$array$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($24:panda.json.JSON)
return $tmp211;
block5:;
panda$core$Int64 $tmp212 = (panda$core$Int64) {3};
panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block6; else goto block7;
block6:;
// line 143
org$pandalanguage$json$Token $tmp215 = *(&local0);
panda$core$String* $tmp216 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp215);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
panda$core$String* $tmp217 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
*(&local1) = $tmp216;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing REF($37:panda.core.String)
// line 144
panda$json$JSON* $tmp218 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp219 = (panda$core$Int64) {2};
panda$core$String* $tmp220 = *(&local1);
panda$core$String* $tmp221 = *(&local1);
panda$core$String* $tmp222 = *(&local1);
panda$core$String$Index $tmp223 = panda$core$String$get_start$R$panda$core$String$Index($tmp222);
panda$core$String$Index $tmp224 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp221, $tmp223);
panda$core$String* $tmp225 = *(&local1);
panda$core$String* $tmp226 = *(&local1);
panda$core$String$Index $tmp227 = panda$core$String$get_end$R$panda$core$String$Index($tmp226);
panda$core$String$Index $tmp228 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp225, $tmp227);
panda$core$Bit $tmp229 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp230 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp224, $tmp228, $tmp229);
panda$core$String* $tmp231 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp220, $tmp230);
panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp218, $tmp219, $tmp231);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing REF($49:panda.json.JSON)
panda$core$String* $tmp232 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing s
*(&local1) = ((panda$core$String*) NULL);
return $tmp218;
block7:;
panda$core$Int64 $tmp233 = (panda$core$Int64) {4};
panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block8; else goto block9;
block8:;
// line 147
panda$json$JSON* $tmp236 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp237 = (panda$core$Int64) {0};
org$pandalanguage$json$Token $tmp238 = *(&local0);
panda$core$String* $tmp239 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp238);
panda$core$Int64$nullable $tmp240 = panda$core$String$convert$R$panda$core$Int64$Q($tmp239);
panda$core$Bit $tmp241 = panda$core$Bit$init$builtin_bit($tmp240.nonnull);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp243 = (panda$core$Int64) {147};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s244, $tmp243, &$s245);
abort(); // unreachable
block10:;
panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp236, $tmp237, ((panda$core$Int64) $tmp240.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing REF($86:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing REF($83:panda.json.JSON)
return $tmp236;
block9:;
panda$core$Int64 $tmp246 = (panda$core$Int64) {5};
panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block12; else goto block13;
block12:;
// line 150
panda$json$JSON* $tmp249 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp250 = (panda$core$Int64) {1};
org$pandalanguage$json$Token $tmp251 = *(&local0);
panda$core$String* $tmp252 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp251);
panda$core$Real64$nullable $tmp253 = panda$core$String$convert$R$panda$core$Real64$Q($tmp252);
panda$core$Bit $tmp254 = panda$core$Bit$init$builtin_bit($tmp253.nonnull);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp256 = (panda$core$Int64) {150};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s257, $tmp256, &$s258);
abort(); // unreachable
block14:;
panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp249, $tmp250, ((panda$core$Real64) $tmp253.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
// unreffing REF($111:panda.json.JSON)
return $tmp249;
block13:;
panda$core$Int64 $tmp259 = (panda$core$Int64) {7};
panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block16; else goto block17;
block16:;
// line 153
panda$json$JSON* $tmp262 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp263 = (panda$core$Int64) {3};
panda$core$Bit $tmp264 = panda$core$Bit$init$builtin_bit(true);
panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp262, $tmp263, $tmp264);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($139:panda.json.JSON)
return $tmp262;
block17:;
panda$core$Int64 $tmp265 = (panda$core$Int64) {8};
panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block18; else goto block19;
block18:;
// line 156
panda$json$JSON* $tmp268 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp269 = (panda$core$Int64) {3};
panda$core$Bit $tmp270 = panda$core$Bit$init$builtin_bit(false);
panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp268, $tmp269, $tmp270);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($154:panda.json.JSON)
return $tmp268;
block19:;
panda$core$Int64 $tmp271 = (panda$core$Int64) {9};
panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, $tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block20; else goto block21;
block20:;
// line 159
panda$json$JSON* $tmp274 = (panda$json$JSON*) frostObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp275 = (panda$core$Int64) {6};
panda$json$JSON$init$panda$core$Int64($tmp274, $tmp275);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing REF($169:panda.json.JSON)
return $tmp274;
block21:;
// line 162
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit(false);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp278 = (panda$core$Int64) {162};
org$pandalanguage$json$Token $tmp279 = *(&local0);
panda$core$String* $tmp280 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp279);
panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s282, $tmp280);
panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s284);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s285, $tmp278, $tmp283);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing REF($186:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($185:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing REF($184:panda.core.String)
abort(); // unreachable
block22:;
goto block1;
block1:;
panda$core$Bit $tmp286 = panda$core$Bit$init$builtin_bit(false);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp288 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s289, $tmp288, &$s290);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void panda$json$JSONParser$init(panda$json$JSONParser* param0) {

// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s291));
panda$core$String** $tmp292 = &param0->source;
panda$core$String* $tmp293 = *$tmp292;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
panda$core$String** $tmp294 = &param0->source;
*$tmp294 = &$s295;
// line 15
org$pandalanguage$json$Lexer* $tmp296 = (org$pandalanguage$json$Lexer*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
org$pandalanguage$json$Lexer$init($tmp296);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
org$pandalanguage$json$Lexer** $tmp297 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp298 = *$tmp297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
org$pandalanguage$json$Lexer** $tmp299 = &param0->lexer;
*$tmp299 = $tmp296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($10:org.pandalanguage.json.Lexer)
// line 18
org$pandalanguage$json$Token$nullable* $tmp300 = &param0->pushbackToken;
*$tmp300 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
return;

}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp301 = &param0->source;
panda$core$String* $tmp302 = *$tmp301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
org$pandalanguage$json$Lexer** $tmp303 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp304 = *$tmp303;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
return;

}

