#include "panda/collections/HashSet.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Key.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/MapView.h"
#include "panda/core/MutableString.h"

__attribute__((weak)) void panda$collections$HashSet$add$panda$collections$HashSet$T$shim(panda$collections$HashSet* p0, panda$core$Object* p1) {
    panda$collections$HashSet$add$panda$collections$HashSet$T(p0, ((panda$collections$Key*) p1));

}
__attribute__((weak)) void panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT$shim(panda$collections$HashSet* p0, panda$collections$CollectionView* p1) {
    panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(p0, p1);

}
__attribute__((weak)) panda$collections$Iterator* panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT$shim(panda$collections$HashSet* p0) {
    panda$collections$Iterator* result = panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$HashSet$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { panda$collections$HashSet$add$panda$collections$HashSet$T$shim, panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT$shim, panda$collections$HashSet$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$HashSet$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$HashSet$_panda$collections$CollectionWriter, { panda$collections$HashSet$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashSet$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$HashSet$_panda$collections$CollectionView, { panda$collections$HashSet$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashSet$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$HashSet$_panda$collections$Collection, { panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT$shim} };

static panda$core$String $s1;
panda$collections$HashSet$class_type panda$collections$HashSet$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashSet$_panda$collections$Iterable, { panda$collections$HashSet$convert$R$panda$core$String, panda$collections$HashSet$cleanup, panda$collections$HashSet$add$panda$collections$HashSet$T$shim, panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT$shim, panda$collections$HashSet$get_count$R$panda$core$Int64, panda$collections$HashSet$clear, panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT$shim, panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn14)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn18)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn32)(panda$collections$MapView*);
typedef panda$collections$Iterator* (*$fn40)(panda$collections$MapView*);
typedef panda$collections$Iterator* (*$fn55)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn59)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn64)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74", 25, -7657594595818096716, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void panda$collections$HashSet$init(panda$collections$HashSet* param0) {

// line 8
panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap** $tmp3 = &param0->contents;
panda$collections$HashMap* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$HashMap** $tmp5 = &param0->contents;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($2:panda.collections.HashMap<panda.collections.HashSet.T, panda.collections.HashSet.T>)
return;

}
void panda$collections$HashSet$init$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* param0, panda$collections$CollectionView* param1) {

// line 8
panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$HashMap** $tmp7 = &param0->contents;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$collections$HashMap** $tmp9 = &param0->contents;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($2:panda.collections.HashMap<panda.collections.HashSet.T, panda.collections.HashSet.T>)
// line 14
panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(param0, param1);
return;

}
void panda$collections$HashSet$add$panda$collections$HashSet$T(panda$collections$HashSet* param0, panda$collections$Key* param1) {

// line 19
panda$collections$HashMap** $tmp10 = &param0->contents;
panda$collections$HashMap* $tmp11 = *$tmp10;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp11, param1, ((panda$core$Object*) param1));
return;

}
void panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* param0, panda$collections$CollectionView* param1) {

panda$collections$Key* local0 = NULL;
// line 24
ITable* $tmp12 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$collections$Iterator* $tmp15 = $tmp13(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp16 = $tmp15->$class->itable;
while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
panda$core$Bit $tmp19 = $tmp17($tmp15);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$collections$Key*) NULL);
ITable* $tmp21 = $tmp15->$class->itable;
while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[1];
panda$core$Object* $tmp24 = $tmp22($tmp15);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp24)));
panda$collections$Key* $tmp25 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
*(&local0) = ((panda$collections$Key*) $tmp24);
// line 25
panda$collections$Key* $tmp26 = *(&local0);
panda$collections$HashSet$add$panda$collections$HashSet$T(param0, $tmp26);
panda$core$Panda$unref$panda$core$Object$Q($tmp24);
// unreffing REF($15:panda.collections.Iterator.T)
panda$collections$Key* $tmp27 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing v
*(&local0) = ((panda$collections$Key*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($4:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
panda$core$Int64 panda$collections$HashSet$get_count$R$panda$core$Int64(panda$collections$HashSet* param0) {

// line 31
panda$collections$HashMap** $tmp28 = &param0->contents;
panda$collections$HashMap* $tmp29 = *$tmp28;
ITable* $tmp30 = ((panda$collections$MapView*) $tmp29)->$class->itable;
while ($tmp30->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
panda$core$Int64 $tmp33 = $tmp31(((panda$collections$MapView*) $tmp29));
return $tmp33;

}
void panda$collections$HashSet$clear(panda$collections$HashSet* param0) {

// line 36
panda$collections$HashMap** $tmp34 = &param0->contents;
panda$collections$HashMap* $tmp35 = *$tmp34;
panda$collections$HashMap$clear($tmp35);
return;

}
panda$collections$Iterator* panda$collections$HashSet$iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* param0) {

// line 41
panda$collections$HashMap** $tmp36 = &param0->contents;
panda$collections$HashMap* $tmp37 = *$tmp36;
ITable* $tmp38 = ((panda$collections$MapView*) $tmp37)->$class->itable;
while ($tmp38->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[3];
panda$collections$Iterator* $tmp41 = $tmp39(((panda$collections$MapView*) $tmp37));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($6:panda.collections.Iterator<panda.collections.MapView.K>)
return $tmp41;

}
panda$core$Bit panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(panda$collections$HashSet* param0, panda$collections$Key* param1) {

// line 45
panda$collections$HashMap** $tmp42 = &param0->contents;
panda$collections$HashMap* $tmp43 = *$tmp42;
panda$core$Bit $tmp44 = panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit($tmp43, param1);
return $tmp44;

}
panda$core$String* panda$collections$HashSet$convert$R$panda$core$String(panda$collections$HashSet* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
panda$collections$Key* local2 = NULL;
// line 50
panda$core$MutableString* $tmp45 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp45, &$s46);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$core$MutableString* $tmp47 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
*(&local0) = $tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($1:panda.core.MutableString)
// line 51
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s48));
panda$core$String* $tmp49 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
*(&local1) = &$s50;
// line 52
panda$collections$HashMap** $tmp51 = &param0->contents;
panda$collections$HashMap* $tmp52 = *$tmp51;
ITable* $tmp53 = ((panda$collections$MapView*) $tmp52)->$class->itable;
while ($tmp53->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[3];
panda$collections$Iterator* $tmp56 = $tmp54(((panda$collections$MapView*) $tmp52));
goto block1;
block1:;
ITable* $tmp57 = $tmp56->$class->itable;
while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
panda$core$Bit $tmp60 = $tmp58($tmp56);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block3; else goto block2;
block2:;
*(&local2) = ((panda$collections$Key*) NULL);
ITable* $tmp62 = $tmp56->$class->itable;
while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[1];
panda$core$Object* $tmp65 = $tmp63($tmp56);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp65)));
panda$collections$Key* $tmp66 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
*(&local2) = ((panda$collections$Key*) $tmp65);
// line 53
panda$core$MutableString* $tmp67 = *(&local0);
panda$core$String* $tmp68 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp67, $tmp68);
// line 54
panda$collections$Key* $tmp69 = *(&local2);
panda$core$Bit $tmp70 = panda$core$Bit$init$builtin_bit(true);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block4; else goto block6;
block4:;
// line 55
panda$core$MutableString* $tmp72 = *(&local0);
panda$collections$Key* $tmp73 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp72, ((panda$core$Object*) $tmp73));
goto block5;
block6:;
// line 1
// line 58
panda$core$MutableString* $tmp74 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp74, &$s75);
goto block5;
block5:;
// line 60
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s76));
panda$core$String* $tmp77 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
*(&local1) = &$s78;
panda$core$Panda$unref$panda$core$Object$Q($tmp65);
// unreffing REF($38:panda.collections.Iterator.T)
panda$collections$Key* $tmp79 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing v
*(&local2) = ((panda$collections$Key*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($27:panda.collections.Iterator<panda.collections.MapView.K>)
// line 62
panda$core$MutableString* $tmp80 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp80, &$s81);
// line 63
panda$core$MutableString* $tmp82 = *(&local0);
panda$core$String* $tmp83 = panda$core$MutableString$finish$R$panda$core$String($tmp82);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($90:panda.core.String)
panda$core$String* $tmp84 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp85 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp83;

}
void panda$collections$HashSet$cleanup(panda$collections$HashSet* param0) {

// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp86 = &param0->contents;
panda$collections$HashMap* $tmp87 = *$tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
return;

}






