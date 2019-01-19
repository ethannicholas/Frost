#include "org/frostlang/frostc/Main/Arguments.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$Arguments$class_type org$frostlang$frostc$Main$Arguments$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$Arguments$cleanup, org$frostlang$frostc$Main$Arguments$get_done$R$frost$core$Bit, org$frostlang$frostc$Main$Arguments$next$R$frost$core$String, org$frostlang$frostc$Main$Arguments$next$frost$core$String$R$frost$core$String} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn17)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Object* (*$fn42)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn45)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Int64 (*$fn58)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn67)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn74)(org$frostlang$frostc$Main$Arguments*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 35, 4342876122100458845, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20\x27", 8, 14363451844115734, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };

void org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main$Arguments* param0, frost$collections$ListView* param1) {

// line 32
frost$core$Int64 $tmp2 = (frost$core$Int64) {1};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp4 = &param0->args;
frost$collections$ListView* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ListView** $tmp6 = &param0->args;
*$tmp6 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$Main$Arguments$get_done$R$frost$core$Bit(org$frostlang$frostc$Main$Arguments* param0) {

// line 41
frost$core$Int64* $tmp7 = &param0->index;
frost$core$Int64 $tmp8 = *$tmp7;
frost$collections$ListView** $tmp9 = &param0->args;
frost$collections$ListView* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp8, $tmp14);
return $tmp15;

}
frost$core$String* org$frostlang$frostc$Main$Arguments$next$R$frost$core$String(org$frostlang$frostc$Main$Arguments* param0) {

// line 45
$fn17 $tmp16 = ($fn17) param0->$class->vtable[2];
frost$core$Bit $tmp18 = $tmp16(param0);
frost$core$Bit $tmp19 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block1:;
// line 46
frost$core$Int64* $tmp23 = &param0->index;
frost$core$Int64 $tmp24 = *$tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {1};
int64_t $tmp26 = $tmp24.value;
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26 + $tmp27;
frost$core$Int64 $tmp29 = (frost$core$Int64) {$tmp28};
frost$core$Int64* $tmp30 = &param0->index;
*$tmp30 = $tmp29;
// line 47
frost$collections$ListView** $tmp31 = &param0->args;
frost$collections$ListView* $tmp32 = *$tmp31;
frost$core$Int64* $tmp33 = &param0->index;
frost$core$Int64 $tmp34 = *$tmp33;
frost$core$Int64 $tmp35 = (frost$core$Int64) {1};
int64_t $tmp36 = $tmp34.value;
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36 - $tmp37;
frost$core$Int64 $tmp39 = (frost$core$Int64) {$tmp38};
ITable* $tmp40 = $tmp32->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp40 = $tmp40->next;
}
$fn42 $tmp41 = $tmp40->methods[0];
frost$core$Object* $tmp43 = $tmp41($tmp32, $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp43)));
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
// unreffing REF($31:frost.collections.ListView.T)
return ((frost$core$String*) $tmp43);

}
frost$core$String* org$frostlang$frostc$Main$Arguments$next$frost$core$String$R$frost$core$String(org$frostlang$frostc$Main$Arguments* param0, frost$core$String* param1) {

// line 51
$fn45 $tmp44 = ($fn45) param0->$class->vtable[2];
frost$core$Bit $tmp46 = $tmp44(param0);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// line 52
frost$core$String* $tmp48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s49, param1);
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp48, &$s51);
frost$collections$ListView** $tmp52 = &param0->args;
frost$collections$ListView* $tmp53 = *$tmp52;
frost$collections$ListView** $tmp54 = &param0->args;
frost$collections$ListView* $tmp55 = *$tmp54;
ITable* $tmp56 = ((frost$collections$CollectionView*) $tmp55)->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[0];
frost$core$Int64 $tmp59 = $tmp57(((frost$collections$CollectionView*) $tmp55));
frost$core$Int64 $tmp60 = (frost$core$Int64) {1};
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 - $tmp62;
frost$core$Int64 $tmp64 = (frost$core$Int64) {$tmp63};
ITable* $tmp65 = $tmp53->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
frost$core$Object* $tmp68 = $tmp66($tmp53, $tmp64);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp50, ((frost$core$String*) $tmp68));
frost$core$String* $tmp70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, &$s71);
frost$io$Console$printErrorLine$frost$core$String($tmp70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($24:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp68);
// unreffing REF($22:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($6:frost.core.String)
// line 53
frost$core$Int64 $tmp72 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp72);
goto block2;
block2:;
// line 55
$fn74 $tmp73 = ($fn74) param0->$class->vtable[3];
frost$core$String* $tmp75 = $tmp73(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($48:frost.core.String)
return $tmp75;

}
void org$frostlang$frostc$Main$Arguments$cleanup(org$frostlang$frostc$Main$Arguments* param0) {

// line 27
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp76 = &param0->args;
frost$collections$ListView* $tmp77 = *$tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
return;

}






