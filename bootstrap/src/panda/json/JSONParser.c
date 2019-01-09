#include "panda/json/JSONParser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/json/Lexer.h"
#include "org/pandalanguage/json/Token.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
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

typedef panda$core$Bit (*$fn27)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn51)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn120)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn166)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -3529150264525428738, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x61\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5794856351010955204, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 6615757439154757100, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6e\x6f\x64\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -4987281448136266337, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

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
return ((org$pandalanguage$json$Token) $tmp15.value);
block2:;
// line 38
org$pandalanguage$json$Lexer** $tmp16 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp17 = *$tmp16;
org$pandalanguage$json$Token $tmp18 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token($tmp17);
*(&local1) = $tmp18;
// line 39
goto block3;
block3:;
org$pandalanguage$json$Token $tmp19 = *(&local1);
org$pandalanguage$json$Token$Kind $tmp20 = $tmp19.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp21->value = $tmp20;
panda$core$Int64 $tmp22 = (panda$core$Int64) {6};
org$pandalanguage$json$Token$Kind $tmp23 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp22);
org$pandalanguage$json$Token$Kind$wrapper* $tmp24;
$tmp24 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp24->value = $tmp23;
ITable* $tmp25 = ((panda$core$Equatable*) $tmp21)->$class->itable;
while ($tmp25->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
panda$core$Bit $tmp28 = $tmp26(((panda$core$Equatable*) $tmp21), ((panda$core$Equatable*) $tmp24));
bool $tmp29 = $tmp28.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp24)));
// unreffing REF($31:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp21)));
// unreffing REF($27:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp29) goto block4; else goto block5;
block4:;
// line 40
org$pandalanguage$json$Lexer** $tmp30 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp31 = *$tmp30;
org$pandalanguage$json$Token $tmp32 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token($tmp31);
*(&local1) = $tmp32;
goto block3;
block5:;
// line 42
org$pandalanguage$json$Token $tmp33 = *(&local1);
return $tmp33;

}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* param0, org$pandalanguage$json$Token param1) {

// line 47
org$pandalanguage$json$Token$nullable* $tmp34 = &param0->pushbackToken;
org$pandalanguage$json$Token$nullable $tmp35 = *$tmp34;
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit(!$tmp35.nonnull);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {47};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s39, $tmp38);
abort(); // unreachable
block1:;
// line 48
org$pandalanguage$json$Token$nullable* $tmp40 = &param0->pushbackToken;
*$tmp40 = ((org$pandalanguage$json$Token$nullable) { param1, true });
return;

}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
// line 53
org$pandalanguage$json$Token $tmp41 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp41;
// line 54
org$pandalanguage$json$Token $tmp42 = *(&local0);
panda$json$JSONParser$pushback$org$pandalanguage$json$Token(param0, $tmp42);
// line 55
org$pandalanguage$json$Token $tmp43 = *(&local0);
return $tmp43;

}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* param0, org$pandalanguage$json$Token$Kind param1) {

org$pandalanguage$json$Token local0;
// line 60
org$pandalanguage$json$Token $tmp44 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp44;
// line 61
org$pandalanguage$json$Token $tmp45 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp46 = $tmp45.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp47;
$tmp47 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp47->value = $tmp46;
org$pandalanguage$json$Token$Kind$wrapper* $tmp48;
$tmp48 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp48->value = param1;
ITable* $tmp49 = ((panda$core$Equatable*) $tmp47)->$class->itable;
while ($tmp49->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
panda$core$Bit $tmp52 = $tmp50(((panda$core$Equatable*) $tmp47), ((panda$core$Equatable*) $tmp48));
bool $tmp53 = $tmp52.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp48)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp47)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp53) goto block1; else goto block2;
block1:;
// line 62
org$pandalanguage$json$Token $tmp54 = *(&local0);
return ((org$pandalanguage$json$Token$nullable) { $tmp54, true });
block2:;
// line 64
org$pandalanguage$json$Token $tmp55 = *(&local0);
panda$json$JSONParser$pushback$org$pandalanguage$json$Token(param0, $tmp55);
// line 65
return ((org$pandalanguage$json$Token$nullable) { .nonnull = false });

}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* param0, org$pandalanguage$json$Token param1) {

// line 70
panda$core$String** $tmp56 = &param0->source;
panda$core$String* $tmp57 = *$tmp56;
panda$core$String$Index $tmp58 = param1.start;
panda$core$String$Index $tmp59 = param1.end;
panda$core$Bit $tmp60 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp61 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp58, $tmp59, $tmp60);
panda$core$String* $tmp62 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp57, $tmp61);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($7:panda.core.String)
return $tmp62;

}
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* param0) {

panda$collections$Array* local0 = NULL;
// line 75
panda$core$Int64 $tmp63 = (panda$core$Int64) {13};
org$pandalanguage$json$Token$Kind $tmp64 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp63);
org$pandalanguage$json$Token$nullable $tmp65 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(param0, $tmp64);
panda$core$Bit $tmp66 = panda$core$Bit$init$builtin_bit($tmp65.nonnull);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block1; else goto block2;
block1:;
// line 76
panda$json$JSON* $tmp68 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp69 = (panda$core$Int64) {5};
panda$collections$Array* $tmp70 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp71 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp70, $tmp71);
panda$json$JSON$init$panda$core$Int64$panda$collections$ListView$LTpanda$json$JSON$GT($tmp68, $tmp69, ((panda$collections$ListView*) $tmp70));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($11:panda.collections.Array<panda.json.JSON>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($9:panda.json.JSON)
return $tmp68;
block2:;
// line 78
panda$collections$Array* $tmp72 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp72);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$collections$Array* $tmp73 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local0) = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($27:panda.collections.Array<panda.json.JSON>)
// line 79
goto block3;
block3:;
// line 80
panda$collections$Array* $tmp74 = *(&local0);
panda$json$JSON* $tmp75 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp74, ((panda$core$Object*) $tmp75));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($45:panda.json.JSON)
// line 81
org$pandalanguage$json$Token $tmp76 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
org$pandalanguage$json$Token$Kind $tmp77 = $tmp76.kind;
panda$core$Int64 $tmp78 = $tmp77.$rawValue;
panda$core$Int64 $tmp79 = (panda$core$Int64) {13};
panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp78, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block6; else goto block7;
block6:;
// line 83
panda$json$JSON* $tmp82 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp83 = (panda$core$Int64) {5};
panda$collections$Array* $tmp84 = *(&local0);
panda$json$JSON$init$panda$core$Int64$panda$collections$ListView$LTpanda$json$JSON$GT($tmp82, $tmp83, ((panda$collections$ListView*) $tmp84));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($60:panda.json.JSON)
panda$collections$Array* $tmp85 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp82;
block7:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {14};
panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp78, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block8; else goto block9;
block8:;
// line 86
goto block3;
block9:;
// line 89
panda$core$Bit $tmp89 = panda$core$Bit$init$builtin_bit(false);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {89};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s92, $tmp91, &$s93);
abort(); // unreachable
block10:;
goto block5;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit(false);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block12:;
abort(); // unreachable

}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* param0) {

panda$collections$HashMap* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$json$Token local2;
// line 97
panda$core$Int64 $tmp99 = (panda$core$Int64) {11};
org$pandalanguage$json$Token$Kind $tmp100 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp99);
org$pandalanguage$json$Token$nullable $tmp101 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(param0, $tmp100);
panda$core$Bit $tmp102 = panda$core$Bit$init$builtin_bit($tmp101.nonnull);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block1:;
// line 98
panda$json$JSON* $tmp104 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp105 = (panda$core$Int64) {4};
panda$collections$HashMap* $tmp106 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp106);
panda$json$JSON$init$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT($tmp104, $tmp105, ((panda$collections$MapView*) $tmp106));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($11:panda.collections.HashMap<panda.core.String, panda.json.JSON>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($9:panda.json.JSON)
return $tmp104;
block2:;
// line 100
panda$collections$HashMap* $tmp107 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp107);
*(&local0) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$collections$HashMap* $tmp108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
*(&local0) = $tmp107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($26:panda.collections.HashMap<panda.core.String, panda.json.JSON>)
// line 101
goto block3;
block3:;
// line 102
panda$core$String* $tmp109 = panda$json$JSONParser$string$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$String* $tmp110 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
*(&local1) = $tmp109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($42:panda.core.String)
// line 103
org$pandalanguage$json$Token $tmp111 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local2) = $tmp111;
// line 104
org$pandalanguage$json$Token $tmp112 = *(&local2);
org$pandalanguage$json$Token$Kind $tmp113 = $tmp112.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp114;
$tmp114 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp114->value = $tmp113;
panda$core$Int64 $tmp115 = (panda$core$Int64) {15};
org$pandalanguage$json$Token$Kind $tmp116 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp115);
org$pandalanguage$json$Token$Kind$wrapper* $tmp117;
$tmp117 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp117->value = $tmp116;
ITable* $tmp118 = ((panda$core$Equatable*) $tmp114)->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
panda$core$Bit $tmp121 = $tmp119(((panda$core$Equatable*) $tmp114), ((panda$core$Equatable*) $tmp117));
bool $tmp122 = $tmp121.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp117)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp114)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp122) goto block5; else goto block6;
block5:;
// line 105
panda$core$Bit $tmp123 = panda$core$Bit$init$builtin_bit(false);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp125 = (panda$core$Int64) {105};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block7:;
goto block6;
block6:;
// line 107
panda$collections$HashMap* $tmp128 = *(&local0);
panda$core$String* $tmp129 = *(&local1);
panda$json$JSON* $tmp130 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp128, ((panda$collections$Key*) $tmp129), ((panda$core$Object*) $tmp130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($87:panda.json.JSON)
// line 108
org$pandalanguage$json$Token $tmp131 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
org$pandalanguage$json$Token$Kind $tmp132 = $tmp131.kind;
panda$core$Int64 $tmp133 = $tmp132.$rawValue;
panda$core$Int64 $tmp134 = (panda$core$Int64) {11};
panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block10; else goto block11;
block10:;
// line 110
panda$json$JSON* $tmp137 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp138 = (panda$core$Int64) {4};
panda$collections$HashMap* $tmp139 = *(&local0);
panda$json$JSON$init$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT($tmp137, $tmp138, ((panda$collections$MapView*) $tmp139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($102:panda.json.JSON)
panda$core$String* $tmp140 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
panda$collections$HashMap* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing result
*(&local0) = ((panda$collections$HashMap*) NULL);
return $tmp137;
block11:;
panda$core$Int64 $tmp142 = (panda$core$Int64) {14};
panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block12; else goto block13;
block12:;
// line 113
panda$core$String* $tmp145 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block13:;
// line 116
panda$core$Bit $tmp146 = panda$core$Bit$init$builtin_bit(false);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp148 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s149, $tmp148, &$s150);
abort(); // unreachable
block14:;
goto block9;
block9:;
panda$core$String* $tmp151 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block4:;
panda$core$Bit $tmp152 = panda$core$Bit$init$builtin_bit(false);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp154 = (panda$core$Int64) {96};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s155, $tmp154, &$s156);
abort(); // unreachable
block16:;
abort(); // unreachable

}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
panda$core$String* local1 = NULL;
// line 124
org$pandalanguage$json$Token $tmp157 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp157;
// line 125
org$pandalanguage$json$Token $tmp158 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp159 = $tmp158.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp160;
$tmp160 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp160->value = $tmp159;
panda$core$Int64 $tmp161 = (panda$core$Int64) {3};
org$pandalanguage$json$Token$Kind $tmp162 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp161);
org$pandalanguage$json$Token$Kind$wrapper* $tmp163;
$tmp163 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp163->value = $tmp162;
ITable* $tmp164 = ((panda$core$Equatable*) $tmp160)->$class->itable;
while ($tmp164->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[1];
panda$core$Bit $tmp167 = $tmp165(((panda$core$Equatable*) $tmp160), ((panda$core$Equatable*) $tmp163));
bool $tmp168 = $tmp167.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp163)));
// unreffing REF($10:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp160)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp168) goto block1; else goto block2;
block1:;
// line 126
panda$core$Bit $tmp169 = panda$core$Bit$init$builtin_bit(false);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp171 = (panda$core$Int64) {126};
org$pandalanguage$json$Token $tmp172 = *(&local0);
panda$core$String* $tmp173 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp172);
panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s175, $tmp173);
panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s177);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s178, $tmp171, $tmp176);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($28:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing REF($27:panda.core.String)
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 128
org$pandalanguage$json$Token $tmp179 = *(&local0);
panda$core$String* $tmp180 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp179);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
panda$core$String* $tmp181 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
*(&local1) = $tmp180;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing REF($44:panda.core.String)
// line 129
panda$core$String* $tmp182 = *(&local1);
panda$core$String* $tmp183 = *(&local1);
panda$core$String* $tmp184 = *(&local1);
panda$core$String$Index $tmp185 = panda$core$String$get_start$R$panda$core$String$Index($tmp184);
panda$core$String$Index $tmp186 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp183, $tmp185);
panda$core$String* $tmp187 = *(&local1);
panda$core$String* $tmp188 = *(&local1);
panda$core$String$Index $tmp189 = panda$core$String$get_end$R$panda$core$String$Index($tmp188);
panda$core$String$Index $tmp190 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp187, $tmp189);
panda$core$Bit $tmp191 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp192 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp186, $tmp190, $tmp191);
panda$core$String* $tmp193 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp182, $tmp192);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($67:panda.core.String)
panda$core$String* $tmp194 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing s
*(&local1) = ((panda$core$String*) NULL);
return $tmp193;

}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
panda$core$String* local1 = NULL;
// line 134
org$pandalanguage$json$Token $tmp195 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp195;
// line 135
org$pandalanguage$json$Token $tmp196 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp197 = $tmp196.kind;
panda$core$Int64 $tmp198 = $tmp197.$rawValue;
panda$core$Int64 $tmp199 = (panda$core$Int64) {10};
panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block2; else goto block3;
block2:;
// line 137
panda$json$JSON* $tmp202 = panda$json$JSONParser$object$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing REF($12:panda.json.JSON)
return $tmp202;
block3:;
panda$core$Int64 $tmp203 = (panda$core$Int64) {12};
panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block4; else goto block5;
block4:;
// line 140
panda$json$JSON* $tmp206 = panda$json$JSONParser$array$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($24:panda.json.JSON)
return $tmp206;
block5:;
panda$core$Int64 $tmp207 = (panda$core$Int64) {3};
panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block6; else goto block7;
block6:;
// line 143
org$pandalanguage$json$Token $tmp210 = *(&local0);
panda$core$String* $tmp211 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp210);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$String* $tmp212 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
*(&local1) = $tmp211;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($37:panda.core.String)
// line 144
panda$json$JSON* $tmp213 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp214 = (panda$core$Int64) {2};
panda$core$String* $tmp215 = *(&local1);
panda$core$String* $tmp216 = *(&local1);
panda$core$String* $tmp217 = *(&local1);
panda$core$String$Index $tmp218 = panda$core$String$get_start$R$panda$core$String$Index($tmp217);
panda$core$String$Index $tmp219 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp216, $tmp218);
panda$core$String* $tmp220 = *(&local1);
panda$core$String* $tmp221 = *(&local1);
panda$core$String$Index $tmp222 = panda$core$String$get_end$R$panda$core$String$Index($tmp221);
panda$core$String$Index $tmp223 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp220, $tmp222);
panda$core$Bit $tmp224 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp225 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp219, $tmp223, $tmp224);
panda$core$String* $tmp226 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp215, $tmp225);
panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp213, $tmp214, $tmp226);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($49:panda.json.JSON)
panda$core$String* $tmp227 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing s
*(&local1) = ((panda$core$String*) NULL);
return $tmp213;
block7:;
panda$core$Int64 $tmp228 = (panda$core$Int64) {4};
panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block8; else goto block9;
block8:;
// line 147
panda$json$JSON* $tmp231 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp232 = (panda$core$Int64) {0};
org$pandalanguage$json$Token $tmp233 = *(&local0);
panda$core$String* $tmp234 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp233);
panda$core$Int64$nullable $tmp235 = panda$core$String$convert$R$panda$core$Int64$Q($tmp234);
panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp231, $tmp232, ((panda$core$Int64) $tmp235.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($86:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing REF($83:panda.json.JSON)
return $tmp231;
block9:;
panda$core$Int64 $tmp236 = (panda$core$Int64) {5};
panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block10; else goto block11;
block10:;
// line 150
panda$json$JSON* $tmp239 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp240 = (panda$core$Int64) {1};
org$pandalanguage$json$Token $tmp241 = *(&local0);
panda$core$String* $tmp242 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp241);
panda$core$Real64$nullable $tmp243 = panda$core$String$convert$R$panda$core$Real64$Q($tmp242);
panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp239, $tmp240, ((panda$core$Real64) $tmp243.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($107:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing REF($104:panda.json.JSON)
return $tmp239;
block11:;
panda$core$Int64 $tmp244 = (panda$core$Int64) {7};
panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block12; else goto block13;
block12:;
// line 153
panda$json$JSON* $tmp247 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp248 = (panda$core$Int64) {3};
panda$core$Bit $tmp249 = panda$core$Bit$init$builtin_bit(true);
panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp247, $tmp248, $tmp249);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($125:panda.json.JSON)
return $tmp247;
block13:;
panda$core$Int64 $tmp250 = (panda$core$Int64) {8};
panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block14; else goto block15;
block14:;
// line 156
panda$json$JSON* $tmp253 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp254 = (panda$core$Int64) {3};
panda$core$Bit $tmp255 = panda$core$Bit$init$builtin_bit(false);
panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp253, $tmp254, $tmp255);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// unreffing REF($140:panda.json.JSON)
return $tmp253;
block15:;
panda$core$Int64 $tmp256 = (panda$core$Int64) {9};
panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, $tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block16; else goto block17;
block16:;
// line 159
panda$json$JSON* $tmp259 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp260 = (panda$core$Int64) {6};
panda$json$JSON$init$panda$core$Int64($tmp259, $tmp260);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($155:panda.json.JSON)
return $tmp259;
block17:;
// line 162
panda$core$Bit $tmp261 = panda$core$Bit$init$builtin_bit(false);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp263 = (panda$core$Int64) {162};
org$pandalanguage$json$Token $tmp264 = *(&local0);
panda$core$String* $tmp265 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp264);
panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s267, $tmp265);
panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s269);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s270, $tmp263, $tmp268);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($170:panda.core.String)
abort(); // unreachable
block18:;
goto block1;
block1:;
panda$core$Bit $tmp271 = panda$core$Bit$init$builtin_bit(false);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp273 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s274, $tmp273, &$s275);
abort(); // unreachable
block20:;
abort(); // unreachable

}
void panda$json$JSONParser$init(panda$json$JSONParser* param0) {

// line 12
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s276));
panda$core$String** $tmp277 = &param0->source;
panda$core$String* $tmp278 = *$tmp277;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
panda$core$String** $tmp279 = &param0->source;
*$tmp279 = &$s280;
// line 15
org$pandalanguage$json$Lexer* $tmp281 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
org$pandalanguage$json$Lexer$init($tmp281);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
org$pandalanguage$json$Lexer** $tmp282 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp283 = *$tmp282;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
org$pandalanguage$json$Lexer** $tmp284 = &param0->lexer;
*$tmp284 = $tmp281;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($10:org.pandalanguage.json.Lexer)
// line 18
org$pandalanguage$json$Token$nullable* $tmp285 = &param0->pushbackToken;
*$tmp285 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
return;

}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp286 = &param0->source;
panda$core$String* $tmp287 = *$tmp286;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
org$pandalanguage$json$Lexer** $tmp288 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp289 = *$tmp288;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
return;

}

