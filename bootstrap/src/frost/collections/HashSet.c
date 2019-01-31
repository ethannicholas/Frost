#include "frost/collections/HashSet.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/Key.h"
#include "frost/collections/Collection.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/collections/MapView.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT$shim(frost$collections$HashSet* p0) {
    frost$collections$Iterator* result = frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$HashSet$add$frost$collections$HashSet$T$shim(frost$collections$HashSet* p0, frost$core$Object* p1) {
    frost$collections$HashSet$add$frost$collections$HashSet$T(p0, ((frost$collections$Key*) p1));

}
__attribute__((weak)) void frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT$shim(frost$collections$HashSet* p0, frost$collections$CollectionView* p1) {
    frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$HashSet$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$collections$HashSet$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$HashSet$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$HashSet$_frost$collections$CollectionView, { frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$HashSet$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$HashSet$_frost$collections$Iterable, { frost$collections$HashSet$add$frost$collections$HashSet$T$shim, frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$HashSet$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$HashSet$_frost$collections$CollectionWriter, { frost$collections$HashSet$clear} };

static frost$core$String $s1;
frost$collections$HashSet$class_type frost$collections$HashSet$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashSet$_frost$collections$Collection, { frost$collections$HashSet$get_asString$R$frost$core$String, frost$collections$HashSet$cleanup, frost$collections$HashSet$add$frost$collections$HashSet$T$shim, frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$remove$frost$collections$HashSet$T, frost$collections$HashSet$get_count$R$frost$core$Int64, frost$collections$HashSet$clear, frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn14)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn34)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn40)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn52)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn67)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn71)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn76)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74", 25, -6526495327472404370, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x53\x65\x74\x2e\x66\x72\x6f\x73\x74", 13, 1882673793560808389, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x2e\x63\x6c\x65\x61\x72\x28\x29", 66, -60408321624300627, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$HashSet$init(frost$collections$HashSet* param0) {

// line 8
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->contents;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->contents;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
void frost$collections$HashSet$init$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* param0, frost$collections$CollectionView* param1) {

// line 8
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->contents;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->contents;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 14
frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(param0, param1);
return;

}
void frost$collections$HashSet$add$frost$collections$HashSet$T(frost$collections$HashSet* param0, frost$collections$Key* param1) {

// line 19
frost$collections$HashMap** $tmp10 = &param0->contents;
frost$collections$HashMap* $tmp11 = *$tmp10;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp11, param1, ((frost$core$Object*) param1));
return;

}
void frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* param0, frost$collections$CollectionView* param1) {

frost$collections$Key* local0 = NULL;
// line 24
ITable* $tmp12 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$collections$Iterator* $tmp15 = $tmp13(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp16 = $tmp15->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Bit $tmp19 = $tmp17($tmp15);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$collections$Key*) NULL);
ITable* $tmp21 = $tmp15->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[1];
frost$core$Object* $tmp24 = $tmp22($tmp15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp24)));
frost$collections$Key* $tmp25 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local0) = ((frost$collections$Key*) $tmp24);
// line 25
frost$collections$Key* $tmp26 = *(&local0);
frost$collections$HashSet$add$frost$collections$HashSet$T(param0, $tmp26);
frost$core$Frost$unref$frost$core$Object$Q($tmp24);
frost$collections$Key* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local0) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
return;

}
void frost$collections$HashSet$remove$frost$collections$HashSet$T(frost$collections$HashSet* param0, frost$collections$Key* param1) {

// line 30
frost$collections$HashMap** $tmp28 = &param0->contents;
frost$collections$HashMap* $tmp29 = *$tmp28;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp29, param1);
return;

}
frost$core$Int64 frost$collections$HashSet$get_count$R$frost$core$Int64(frost$collections$HashSet* param0) {

// line 35
frost$collections$HashMap** $tmp30 = &param0->contents;
frost$collections$HashMap* $tmp31 = *$tmp30;
ITable* $tmp32 = ((frost$collections$MapView*) $tmp31)->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp32 = $tmp32->next;
}
$fn34 $tmp33 = $tmp32->methods[0];
frost$core$Int64 $tmp35 = $tmp33(((frost$collections$MapView*) $tmp31));
return $tmp35;

}
void frost$collections$HashSet$clear(frost$collections$HashSet* param0) {

// line 40
frost$collections$HashMap** $tmp36 = &param0->contents;
frost$collections$HashMap* $tmp37 = *$tmp36;
frost$collections$HashMap$clear($tmp37);
goto block1;
block1:;
ITable* $tmp38 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$core$Int64 $tmp41 = $tmp39(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp42 = (frost$core$Int64) {0};
frost$core$Bit $tmp43 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp41, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {39};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s46, $tmp45, &$s47);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* param0) {

// line 45
frost$collections$HashMap** $tmp48 = &param0->contents;
frost$collections$HashMap* $tmp49 = *$tmp48;
ITable* $tmp50 = ((frost$collections$MapView*) $tmp49)->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[3];
frost$collections$Iterator* $tmp53 = $tmp51(((frost$collections$MapView*) $tmp49));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
return $tmp53;

}
frost$core$Bit frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit(frost$collections$HashSet* param0, frost$collections$Key* param1) {

// line 49
frost$collections$HashMap** $tmp54 = &param0->contents;
frost$collections$HashMap* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp55, param1);
return $tmp56;

}
frost$core$String* frost$collections$HashSet$get_asString$R$frost$core$String(frost$collections$HashSet* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$Key* local2 = NULL;
// line 54
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp57 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp57, &$s58);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$MutableString* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// line 55
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s60));
frost$core$String* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = &$s62;
// line 56
frost$collections$HashMap** $tmp63 = &param0->contents;
frost$collections$HashMap* $tmp64 = *$tmp63;
ITable* $tmp65 = ((frost$collections$MapView*) $tmp64)->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[3];
frost$collections$Iterator* $tmp68 = $tmp66(((frost$collections$MapView*) $tmp64));
goto block1;
block1:;
ITable* $tmp69 = $tmp68->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp69 = $tmp69->next;
}
$fn71 $tmp70 = $tmp69->methods[0];
frost$core$Bit $tmp72 = $tmp70($tmp68);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$collections$Key*) NULL);
ITable* $tmp74 = $tmp68->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[1];
frost$core$Object* $tmp77 = $tmp75($tmp68);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp77)));
frost$collections$Key* $tmp78 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local2) = ((frost$collections$Key*) $tmp77);
// line 57
frost$core$MutableString* $tmp79 = *(&local0);
frost$core$String* $tmp80 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp79, $tmp80);
// line 58
frost$collections$Key* $tmp81 = *(&local2);
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit(true);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block4; else goto block6;
block4:;
// line 59
frost$core$MutableString* $tmp84 = *(&local0);
frost$collections$Key* $tmp85 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp84, ((frost$core$Object*) $tmp85));
goto block5;
block6:;
// line 1
// line 62
frost$core$MutableString* $tmp86 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp86, &$s87);
goto block5;
block5:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s88));
frost$core$String* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local1) = &$s90;
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
frost$collections$Key* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local2) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// line 66
frost$core$MutableString* $tmp92 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp92, &$s93);
// line 67
frost$core$MutableString* $tmp94 = *(&local0);
frost$core$String* $tmp95 = frost$core$MutableString$finish$R$frost$core$String($tmp94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$String* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp95;

}
void frost$collections$HashSet$cleanup(frost$collections$HashSet* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp98 = &param0->contents;
frost$collections$HashMap* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return;

}






