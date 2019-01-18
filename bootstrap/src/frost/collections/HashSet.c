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
frost$collections$HashSet$class_type frost$collections$HashSet$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashSet$_frost$collections$Collection, { frost$collections$HashSet$convert$R$frost$core$String, frost$collections$HashSet$cleanup, frost$collections$HashSet$add$frost$collections$HashSet$T$shim, frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$get_count$R$frost$core$Int64, frost$collections$HashSet$clear, frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn14)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn32)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn40)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn55)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn59)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn64)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74", 25, -6526495327472404370, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$HashSet$init(frost$collections$HashSet* param0) {

// line 8
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->contents;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->contents;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($2:frost.collections.HashMap<frost.collections.HashSet.T, frost.collections.HashSet.T>)
return;

}
void frost$collections$HashSet$init$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* param0, frost$collections$CollectionView* param1) {

// line 8
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->contents;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->contents;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($2:frost.collections.HashMap<frost.collections.HashSet.T, frost.collections.HashSet.T>)
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
// unreffing REF($15:frost.collections.Iterator.T)
frost$collections$Key* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing v
*(&local0) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
frost$core$Int64 frost$collections$HashSet$get_count$R$frost$core$Int64(frost$collections$HashSet* param0) {

// line 31
frost$collections$HashMap** $tmp28 = &param0->contents;
frost$collections$HashMap* $tmp29 = *$tmp28;
ITable* $tmp30 = ((frost$collections$MapView*) $tmp29)->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$core$Int64 $tmp33 = $tmp31(((frost$collections$MapView*) $tmp29));
return $tmp33;

}
void frost$collections$HashSet$clear(frost$collections$HashSet* param0) {

// line 36
frost$collections$HashMap** $tmp34 = &param0->contents;
frost$collections$HashMap* $tmp35 = *$tmp34;
frost$collections$HashMap$clear($tmp35);
return;

}
frost$collections$Iterator* frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT(frost$collections$HashSet* param0) {

// line 41
frost$collections$HashMap** $tmp36 = &param0->contents;
frost$collections$HashMap* $tmp37 = *$tmp36;
ITable* $tmp38 = ((frost$collections$MapView*) $tmp37)->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[3];
frost$collections$Iterator* $tmp41 = $tmp39(((frost$collections$MapView*) $tmp37));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($6:frost.collections.Iterator<frost.collections.MapView.K>)
return $tmp41;

}
frost$core$Bit frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit(frost$collections$HashSet* param0, frost$collections$Key* param1) {

// line 45
frost$collections$HashMap** $tmp42 = &param0->contents;
frost$collections$HashMap* $tmp43 = *$tmp42;
frost$core$Bit $tmp44 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp43, param1);
return $tmp44;

}
frost$core$String* frost$collections$HashSet$convert$R$frost$core$String(frost$collections$HashSet* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$Key* local2 = NULL;
// line 50
frost$core$MutableString* $tmp45 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp45, &$s46);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$MutableString* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing REF($1:frost.core.MutableString)
// line 51
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s48));
frost$core$String* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local1) = &$s50;
// line 52
frost$collections$HashMap** $tmp51 = &param0->contents;
frost$collections$HashMap* $tmp52 = *$tmp51;
ITable* $tmp53 = ((frost$collections$MapView*) $tmp52)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[3];
frost$collections$Iterator* $tmp56 = $tmp54(((frost$collections$MapView*) $tmp52));
goto block1;
block1:;
ITable* $tmp57 = $tmp56->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Bit $tmp60 = $tmp58($tmp56);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$collections$Key*) NULL);
ITable* $tmp62 = $tmp56->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[1];
frost$core$Object* $tmp65 = $tmp63($tmp56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp65)));
frost$collections$Key* $tmp66 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local2) = ((frost$collections$Key*) $tmp65);
// line 53
frost$core$MutableString* $tmp67 = *(&local0);
frost$core$String* $tmp68 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp67, $tmp68);
// line 54
frost$collections$Key* $tmp69 = *(&local2);
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit(true);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block4; else goto block6;
block4:;
// line 55
frost$core$MutableString* $tmp72 = *(&local0);
frost$collections$Key* $tmp73 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp72, ((frost$core$Object*) $tmp73));
goto block5;
block6:;
// line 1
// line 58
frost$core$MutableString* $tmp74 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp74, &$s75);
goto block5;
block5:;
// line 60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s76));
frost$core$String* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = &$s78;
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
// unreffing REF($38:frost.collections.Iterator.T)
frost$collections$Key* $tmp79 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing v
*(&local2) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($27:frost.collections.Iterator<frost.collections.MapView.K>)
// line 62
frost$core$MutableString* $tmp80 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp80, &$s81);
// line 63
frost$core$MutableString* $tmp82 = *(&local0);
frost$core$String* $tmp83 = frost$core$MutableString$finish$R$frost$core$String($tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($90:frost.core.String)
frost$core$String* $tmp84 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp83;

}
void frost$collections$HashSet$cleanup(frost$collections$HashSet* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp86 = &param0->contents;
frost$collections$HashMap* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
return;

}





