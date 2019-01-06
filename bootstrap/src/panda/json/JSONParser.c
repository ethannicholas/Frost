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
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/Key.h"
#include "panda/core/Real64.h"


static panda$core$String $s1;
panda$json$JSONParser$class_type panda$json$JSONParser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$json$JSONParser$cleanup, panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON$Q, panda$json$JSONParser$next$R$org$pandalanguage$json$Token, panda$json$JSONParser$pushback$org$pandalanguage$json$Token, panda$json$JSONParser$peek$R$org$pandalanguage$json$Token, panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q, panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String, panda$json$JSONParser$array$R$panda$json$JSON, panda$json$JSONParser$object$R$panda$json$JSON, panda$json$JSONParser$string$R$panda$core$String, panda$json$JSONParser$node$R$panda$json$JSON} };

typedef panda$core$Bit (*$fn27)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn51)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn120)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn167)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -3529150264525428738, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x61\x72\x72\x61\x79\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5794856351010955204, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6f\x62\x6a\x65\x63\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 6615757439154757100, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6e\x6f\x64\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -4987281448136266337, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON$Q(panda$json$JSONParser* param0, panda$core$String* param1) {

// line 28
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp2 = &param0->source;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$String** $tmp4 = &param0->source;
*$tmp4 = param1;
// line 29
org$pandalanguage$json$Lexer** $tmp5 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp6 = *$tmp5;
org$pandalanguage$json$Lexer$start$panda$core$String($tmp6, param1);
// line 30
panda$json$JSON* $tmp7 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($14:panda.json.JSON)
return $tmp7;

}
org$pandalanguage$json$Token panda$json$JSONParser$next$R$org$pandalanguage$json$Token(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token$nullable local0;
org$pandalanguage$json$Token local1;
// line 35
org$pandalanguage$json$Token$nullable* $tmp8 = &param0->pushbackToken;
org$pandalanguage$json$Token$nullable $tmp9 = *$tmp8;
panda$core$Bit $tmp10 = panda$core$Bit$init$builtin_bit($tmp9.nonnull);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 36
org$pandalanguage$json$Token$nullable* $tmp12 = &param0->pushbackToken;
org$pandalanguage$json$Token$nullable $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// line 37
org$pandalanguage$json$Token$nullable* $tmp14 = &param0->pushbackToken;
*$tmp14 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
// line 38
org$pandalanguage$json$Token$nullable $tmp15 = *(&local0);
return ((org$pandalanguage$json$Token) $tmp15.value);
block2:;
// line 40
org$pandalanguage$json$Lexer** $tmp16 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp17 = *$tmp16;
org$pandalanguage$json$Token $tmp18 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token($tmp17);
*(&local1) = $tmp18;
// line 41
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
// line 42
org$pandalanguage$json$Lexer** $tmp30 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp31 = *$tmp30;
org$pandalanguage$json$Token $tmp32 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token($tmp31);
*(&local1) = $tmp32;
goto block3;
block5:;
// line 44
org$pandalanguage$json$Token $tmp33 = *(&local1);
return $tmp33;

}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* param0, org$pandalanguage$json$Token param1) {

// line 49
org$pandalanguage$json$Token$nullable* $tmp34 = &param0->pushbackToken;
org$pandalanguage$json$Token$nullable $tmp35 = *$tmp34;
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit(!$tmp35.nonnull);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {49};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s39, $tmp38);
abort(); // unreachable
block1:;
// line 50
org$pandalanguage$json$Token$nullable* $tmp40 = &param0->pushbackToken;
*$tmp40 = ((org$pandalanguage$json$Token$nullable) { param1, true });
return;

}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
// line 55
org$pandalanguage$json$Token $tmp41 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp41;
// line 56
org$pandalanguage$json$Token $tmp42 = *(&local0);
panda$json$JSONParser$pushback$org$pandalanguage$json$Token(param0, $tmp42);
// line 57
org$pandalanguage$json$Token $tmp43 = *(&local0);
return $tmp43;

}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* param0, org$pandalanguage$json$Token$Kind param1) {

org$pandalanguage$json$Token local0;
// line 62
org$pandalanguage$json$Token $tmp44 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp44;
// line 63
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
// line 64
org$pandalanguage$json$Token $tmp54 = *(&local0);
return ((org$pandalanguage$json$Token$nullable) { $tmp54, true });
block2:;
// line 66
org$pandalanguage$json$Token $tmp55 = *(&local0);
panda$json$JSONParser$pushback$org$pandalanguage$json$Token(param0, $tmp55);
// line 67
return ((org$pandalanguage$json$Token$nullable) { .nonnull = false });

}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* param0, org$pandalanguage$json$Token param1) {

// line 72
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
// line 77
panda$core$Int64 $tmp63 = (panda$core$Int64) {13};
org$pandalanguage$json$Token$Kind $tmp64 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp63);
org$pandalanguage$json$Token$nullable $tmp65 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(param0, $tmp64);
panda$core$Bit $tmp66 = panda$core$Bit$init$builtin_bit($tmp65.nonnull);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block1; else goto block2;
block1:;
// line 78
panda$json$JSON* $tmp68 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp69 = (panda$core$Int64) {5};
panda$collections$ImmutableArray* $tmp70 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp70);
panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp68, $tmp69, $tmp70);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($11:panda.collections.ImmutableArray<panda.json.JSON>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($9:panda.json.JSON)
return $tmp68;
block2:;
// line 80
panda$collections$Array* $tmp71 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp71);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$collections$Array* $tmp72 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
*(&local0) = $tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($25:panda.collections.Array<panda.json.JSON>)
// line 81
goto block3;
block3:;
// line 82
panda$collections$Array* $tmp73 = *(&local0);
panda$json$JSON* $tmp74 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp73, ((panda$core$Object*) $tmp74));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($43:panda.json.JSON)
// line 83
org$pandalanguage$json$Token $tmp75 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
org$pandalanguage$json$Token$Kind $tmp76 = $tmp75.kind;
panda$core$Int64 $tmp77 = $tmp76.$rawValue;
panda$core$Int64 $tmp78 = (panda$core$Int64) {13};
panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp77, $tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block6; else goto block7;
block6:;
// line 85
panda$json$JSON* $tmp81 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp82 = (panda$core$Int64) {5};
panda$collections$Array* $tmp83 = *(&local0);
panda$collections$ImmutableArray* $tmp84 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp83);
panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp81, $tmp82, $tmp84);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($62:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($58:panda.json.JSON)
panda$collections$Array* $tmp85 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp81;
block7:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {14};
panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp77, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block8; else goto block9;
block8:;
// line 88
goto block3;
block9:;
// line 91
panda$core$Bit $tmp89 = panda$core$Bit$init$builtin_bit(false);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {91};
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
panda$core$Int64 $tmp96 = (panda$core$Int64) {76};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block12:;
abort(); // unreachable

}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* param0) {

panda$collections$HashMap* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$json$Token local2;
// line 99
panda$core$Int64 $tmp99 = (panda$core$Int64) {11};
org$pandalanguage$json$Token$Kind $tmp100 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp99);
org$pandalanguage$json$Token$nullable $tmp101 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(param0, $tmp100);
panda$core$Bit $tmp102 = panda$core$Bit$init$builtin_bit($tmp101.nonnull);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block1:;
// line 100
panda$json$JSON* $tmp104 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp105 = (panda$core$Int64) {4};
panda$collections$ImmutableHashMap* $tmp106 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
panda$collections$ImmutableHashMap$init($tmp106);
panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp104, $tmp105, $tmp106);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($11:panda.collections.ImmutableHashMap<panda.core.String, panda.json.JSON>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($9:panda.json.JSON)
return $tmp104;
block2:;
// line 102
panda$collections$HashMap* $tmp107 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp107);
*(&local0) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$collections$HashMap* $tmp108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
*(&local0) = $tmp107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($25:panda.collections.HashMap<panda.core.String, panda.json.JSON>)
// line 103
goto block3;
block3:;
// line 104
panda$core$String* $tmp109 = panda$json$JSONParser$string$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$String* $tmp110 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
*(&local1) = $tmp109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($41:panda.core.String)
// line 105
org$pandalanguage$json$Token $tmp111 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local2) = $tmp111;
// line 106
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
// unreffing REF($62:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp114)));
// unreffing REF($58:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp122) goto block5; else goto block6;
block5:;
// line 107
panda$core$Bit $tmp123 = panda$core$Bit$init$builtin_bit(false);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp125 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block7:;
goto block6;
block6:;
// line 109
panda$collections$HashMap* $tmp128 = *(&local0);
panda$core$String* $tmp129 = *(&local1);
panda$json$JSON* $tmp130 = panda$json$JSONParser$node$R$panda$json$JSON(param0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp128, ((panda$collections$Key*) $tmp129), ((panda$core$Object*) $tmp130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($86:panda.json.JSON)
// line 110
org$pandalanguage$json$Token $tmp131 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
org$pandalanguage$json$Token$Kind $tmp132 = $tmp131.kind;
panda$core$Int64 $tmp133 = $tmp132.$rawValue;
panda$core$Int64 $tmp134 = (panda$core$Int64) {11};
panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block10; else goto block11;
block10:;
// line 112
panda$json$JSON* $tmp137 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp138 = (panda$core$Int64) {4};
panda$collections$HashMap* $tmp139 = *(&local0);
panda$collections$ImmutableHashMap* $tmp140 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp139);
panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp137, $tmp138, $tmp140);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($105:panda.collections.ImmutableHashMap<panda.collections.HashMap.K, panda.collections.HashMap.V>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($101:panda.json.JSON)
panda$core$String* $tmp141 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
panda$collections$HashMap* $tmp142 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing result
*(&local0) = ((panda$collections$HashMap*) NULL);
return $tmp137;
block11:;
panda$core$Int64 $tmp143 = (panda$core$Int64) {14};
panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block12; else goto block13;
block12:;
// line 115
panda$core$String* $tmp146 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block13:;
// line 118
panda$core$Bit $tmp147 = panda$core$Bit$init$builtin_bit(false);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp149 = (panda$core$Int64) {118};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s150, $tmp149, &$s151);
abort(); // unreachable
block14:;
goto block9;
block9:;
panda$core$String* $tmp152 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing key
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block4:;
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit(false);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block16:;
abort(); // unreachable

}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
panda$core$String* local1 = NULL;
// line 126
org$pandalanguage$json$Token $tmp158 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp158;
// line 127
org$pandalanguage$json$Token $tmp159 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp160 = $tmp159.kind;
org$pandalanguage$json$Token$Kind$wrapper* $tmp161;
$tmp161 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp161->value = $tmp160;
panda$core$Int64 $tmp162 = (panda$core$Int64) {3};
org$pandalanguage$json$Token$Kind $tmp163 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp162);
org$pandalanguage$json$Token$Kind$wrapper* $tmp164;
$tmp164 = (org$pandalanguage$json$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$json$Token$Kind$wrapperclass);
$tmp164->value = $tmp163;
ITable* $tmp165 = ((panda$core$Equatable*) $tmp161)->$class->itable;
while ($tmp165->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[1];
panda$core$Bit $tmp168 = $tmp166(((panda$core$Equatable*) $tmp161), ((panda$core$Equatable*) $tmp164));
bool $tmp169 = $tmp168.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp164)));
// unreffing REF($10:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp161)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.json.Token.Kind>)
if ($tmp169) goto block1; else goto block2;
block1:;
// line 128
panda$core$Bit $tmp170 = panda$core$Bit$init$builtin_bit(false);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp172 = (panda$core$Int64) {128};
org$pandalanguage$json$Token $tmp173 = *(&local0);
panda$core$String* $tmp174 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp173);
panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s176, $tmp174);
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s178);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s179, $tmp172, $tmp177);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($28:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($27:panda.core.String)
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 130
org$pandalanguage$json$Token $tmp180 = *(&local0);
panda$core$String* $tmp181 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp180);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$String* $tmp182 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
*(&local1) = $tmp181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($44:panda.core.String)
// line 131
panda$core$String* $tmp183 = *(&local1);
panda$core$String* $tmp184 = *(&local1);
panda$core$String* $tmp185 = *(&local1);
panda$core$String$Index $tmp186 = panda$core$String$get_start$R$panda$core$String$Index($tmp185);
panda$core$String$Index $tmp187 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp184, $tmp186);
panda$core$String* $tmp188 = *(&local1);
panda$core$String* $tmp189 = *(&local1);
panda$core$String$Index $tmp190 = panda$core$String$get_end$R$panda$core$String$Index($tmp189);
panda$core$String$Index $tmp191 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp188, $tmp190);
panda$core$Bit $tmp192 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp193 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp187, $tmp191, $tmp192);
panda$core$String* $tmp194 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp183, $tmp193);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($67:panda.core.String)
panda$core$String* $tmp195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing s
*(&local1) = ((panda$core$String*) NULL);
return $tmp194;

}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* param0) {

org$pandalanguage$json$Token local0;
panda$core$String* local1 = NULL;
// line 136
org$pandalanguage$json$Token $tmp196 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(param0);
*(&local0) = $tmp196;
// line 137
org$pandalanguage$json$Token $tmp197 = *(&local0);
org$pandalanguage$json$Token$Kind $tmp198 = $tmp197.kind;
panda$core$Int64 $tmp199 = $tmp198.$rawValue;
panda$core$Int64 $tmp200 = (panda$core$Int64) {10};
panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block2; else goto block3;
block2:;
// line 139
panda$json$JSON* $tmp203 = panda$json$JSONParser$object$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($12:panda.json.JSON)
return $tmp203;
block3:;
panda$core$Int64 $tmp204 = (panda$core$Int64) {12};
panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block4; else goto block5;
block4:;
// line 142
panda$json$JSON* $tmp207 = panda$json$JSONParser$array$R$panda$json$JSON(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing REF($24:panda.json.JSON)
return $tmp207;
block5:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {3};
panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block6; else goto block7;
block6:;
// line 145
org$pandalanguage$json$Token $tmp211 = *(&local0);
panda$core$String* $tmp212 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp211);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
panda$core$String* $tmp213 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
*(&local1) = $tmp212;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing REF($37:panda.core.String)
// line 146
panda$json$JSON* $tmp214 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp215 = (panda$core$Int64) {2};
panda$core$String* $tmp216 = *(&local1);
panda$core$String* $tmp217 = *(&local1);
panda$core$String* $tmp218 = *(&local1);
panda$core$String$Index $tmp219 = panda$core$String$get_start$R$panda$core$String$Index($tmp218);
panda$core$String$Index $tmp220 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp217, $tmp219);
panda$core$String* $tmp221 = *(&local1);
panda$core$String* $tmp222 = *(&local1);
panda$core$String$Index $tmp223 = panda$core$String$get_end$R$panda$core$String$Index($tmp222);
panda$core$String$Index $tmp224 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index($tmp221, $tmp223);
panda$core$Bit $tmp225 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp226 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp220, $tmp224, $tmp225);
panda$core$String* $tmp227 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp216, $tmp226);
panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp214, $tmp215, $tmp227);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($49:panda.json.JSON)
panda$core$String* $tmp228 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
// unreffing s
*(&local1) = ((panda$core$String*) NULL);
return $tmp214;
block7:;
panda$core$Int64 $tmp229 = (panda$core$Int64) {4};
panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block8; else goto block9;
block8:;
// line 149
panda$json$JSON* $tmp232 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp233 = (panda$core$Int64) {0};
org$pandalanguage$json$Token $tmp234 = *(&local0);
panda$core$String* $tmp235 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp234);
panda$core$Int64$nullable $tmp236 = panda$core$String$convert$R$panda$core$Int64$Q($tmp235);
panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp232, $tmp233, ((panda$core$Int64) $tmp236.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($86:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($83:panda.json.JSON)
return $tmp232;
block9:;
panda$core$Int64 $tmp237 = (panda$core$Int64) {5};
panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block10; else goto block11;
block10:;
// line 152
panda$json$JSON* $tmp240 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp241 = (panda$core$Int64) {1};
org$pandalanguage$json$Token $tmp242 = *(&local0);
panda$core$String* $tmp243 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp242);
panda$core$Real64$nullable $tmp244 = panda$core$String$convert$R$panda$core$Real64$Q($tmp243);
panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp240, $tmp241, ((panda$core$Real64) $tmp244.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($107:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($104:panda.json.JSON)
return $tmp240;
block11:;
panda$core$Int64 $tmp245 = (panda$core$Int64) {7};
panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block12; else goto block13;
block12:;
// line 155
panda$json$JSON* $tmp248 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp249 = (panda$core$Int64) {3};
panda$core$Bit $tmp250 = panda$core$Bit$init$builtin_bit(true);
panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp248, $tmp249, $tmp250);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing REF($125:panda.json.JSON)
return $tmp248;
block13:;
panda$core$Int64 $tmp251 = (panda$core$Int64) {8};
panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block14; else goto block15;
block14:;
// line 158
panda$json$JSON* $tmp254 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp255 = (panda$core$Int64) {3};
panda$core$Bit $tmp256 = panda$core$Bit$init$builtin_bit(false);
panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp254, $tmp255, $tmp256);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// unreffing REF($140:panda.json.JSON)
return $tmp254;
block15:;
panda$core$Int64 $tmp257 = (panda$core$Int64) {9};
panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block16; else goto block17;
block16:;
// line 161
panda$json$JSON* $tmp260 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
panda$core$Int64 $tmp261 = (panda$core$Int64) {6};
panda$json$JSON$init$panda$core$Int64($tmp260, $tmp261);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing REF($155:panda.json.JSON)
return $tmp260;
block17:;
// line 164
panda$core$Bit $tmp262 = panda$core$Bit$init$builtin_bit(false);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp264 = (panda$core$Int64) {164};
org$pandalanguage$json$Token $tmp265 = *(&local0);
panda$core$String* $tmp266 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(param0, $tmp265);
panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s268, $tmp266);
panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, &$s270);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s271, $tmp264, $tmp269);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($170:panda.core.String)
abort(); // unreachable
block18:;
goto block1;
block1:;
panda$core$Bit $tmp272 = panda$core$Bit$init$builtin_bit(false);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp274 = (panda$core$Int64) {135};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s275, $tmp274, &$s276);
abort(); // unreachable
block20:;
abort(); // unreachable

}
void panda$json$JSONParser$init(panda$json$JSONParser* param0) {

// line 14
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s277));
panda$core$String** $tmp278 = &param0->source;
panda$core$String* $tmp279 = *$tmp278;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
panda$core$String** $tmp280 = &param0->source;
*$tmp280 = &$s281;
// line 17
org$pandalanguage$json$Lexer* $tmp282 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
org$pandalanguage$json$Lexer$init($tmp282);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
org$pandalanguage$json$Lexer** $tmp283 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp284 = *$tmp283;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
org$pandalanguage$json$Lexer** $tmp285 = &param0->lexer;
*$tmp285 = $tmp282;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing REF($10:org.pandalanguage.json.Lexer)
// line 20
org$pandalanguage$json$Token$nullable* $tmp286 = &param0->pushbackToken;
*$tmp286 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
return;

}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* param0) {

// line 12
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp287 = &param0->source;
panda$core$String* $tmp288 = *$tmp287;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
org$pandalanguage$json$Lexer** $tmp289 = &param0->lexer;
org$pandalanguage$json$Lexer* $tmp290 = *$tmp289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
return;

}

