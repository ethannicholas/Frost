#include "org/frostlang/frostc/statement/Assert.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Stack.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/io/File.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assert$class_type org$frostlang$frostc$statement$Assert$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assert$cleanup} };

typedef frost$core$Int64 (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn36)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn51)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn70)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn178)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn203)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn208)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn219)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn224)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn228)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 37, 6365785395817378313, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, -7137946713078462448, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -7137960722408632065, NULL };

void org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$Compiler$AutoUnrefs* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String$Index$nullable local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$ClassDecl* local6 = NULL;
org$frostlang$frostc$MethodDecl* local7 = NULL;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:20
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:21
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array* $tmp5 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local1) = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:22
frost$collections$Array* $tmp6 = *(&local1);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp7 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp8 = (frost$core$Int64) {40};
frost$collections$Stack** $tmp9 = &param0->currentClass;
frost$collections$Stack* $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Assert.frost:22:68
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 >= $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp18 = &$tmp10->contents;
frost$collections$Array* $tmp19 = *$tmp18;
ITable* $tmp20 = ((frost$collections$CollectionView*) $tmp19)->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Int64 $tmp23 = $tmp21(((frost$collections$CollectionView*) $tmp19));
int64_t $tmp24 = $tmp11.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 < $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp32 = &$tmp10->contents;
frost$collections$Array* $tmp33 = *$tmp32;
ITable* $tmp34 = ((frost$collections$CollectionView*) $tmp33)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$core$Int64 $tmp37 = $tmp35(((frost$collections$CollectionView*) $tmp33));
int64_t $tmp38 = $tmp37.value;
int64_t $tmp39 = $tmp11.value;
bool $tmp40 = $tmp38 > $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s44, $tmp43);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp45 = &$tmp10->contents;
frost$collections$Array* $tmp46 = *$tmp45;
frost$collections$Array** $tmp47 = &$tmp10->contents;
frost$collections$Array* $tmp48 = *$tmp47;
ITable* $tmp49 = ((frost$collections$CollectionView*) $tmp48)->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
frost$core$Int64 $tmp52 = $tmp50(((frost$collections$CollectionView*) $tmp48));
frost$core$Int64 $tmp53 = (frost$core$Int64) {1};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 - $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
int64_t $tmp58 = $tmp57.value;
int64_t $tmp59 = $tmp11.value;
int64_t $tmp60 = $tmp58 - $tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 >= $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block11; else goto block10;
block11:;
ITable* $tmp68 = ((frost$collections$CollectionView*) $tmp46)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$core$Int64 $tmp71 = $tmp69(((frost$collections$CollectionView*) $tmp46));
int64_t $tmp72 = $tmp61.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 < $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp80 = &$tmp46->data;
frost$core$Object** $tmp81 = *$tmp80;
int64_t $tmp82 = $tmp61.value;
frost$core$Object* $tmp83 = $tmp81[$tmp82];
frost$core$Frost$ref$frost$core$Object$Q($tmp83);
frost$core$Frost$ref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$io$File** $tmp84 = &((org$frostlang$frostc$ClassDecl*) $tmp83)->source;
frost$io$File* $tmp85 = *$tmp84;
// begin inline call to function frost.io.File.get_name():frost.core.String from Assert.frost:22:78
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:35
frost$core$String** $tmp86 = &$tmp85->path;
frost$core$String* $tmp87 = *$tmp86;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.stub:35:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp88 = frost$core$String$get_end$R$frost$core$String$Index($tmp87);
frost$core$String$Index$nullable $tmp89 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp87, &$s90, $tmp88);
*(&local3) = $tmp89;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:36
frost$core$String$Index$nullable $tmp91 = *(&local3);
frost$core$Bit $tmp92 = frost$core$Bit$init$builtin_bit($tmp91.nonnull);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:37
frost$core$String** $tmp94 = &$tmp85->path;
frost$core$String* $tmp95 = *$tmp94;
frost$core$String** $tmp96 = &$tmp85->path;
frost$core$String* $tmp97 = *$tmp96;
frost$core$String$Index$nullable $tmp98 = *(&local3);
frost$core$String$Index $tmp99 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp97, ((frost$core$String$Index) $tmp98.value));
frost$core$Bit $tmp100 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp101 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp99, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp100);
frost$core$String* $tmp102 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp95, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local2) = $tmp102;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
goto block12;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:40
frost$core$String** $tmp103 = &$tmp85->path;
frost$core$String* $tmp104 = *$tmp103;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local2) = $tmp104;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
goto block12;
block15:;
goto block12;
block12:;
frost$core$String* $tmp105 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp7, $tmp8, param1, $tmp105);
frost$collections$Array$add$frost$collections$Array$T($tmp6, ((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:23
frost$collections$Array* $tmp106 = *(&local1);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp107 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp108 = (frost$core$Int64) {25};
frost$core$Int64 $tmp109 = param1.line;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Assert.frost:23:57
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp110 = $tmp109.value;
frost$core$UInt64 $tmp111 = (frost$core$UInt64) {((uint64_t) $tmp110)};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp107, $tmp108, param1, $tmp111);
frost$collections$Array$add$frost$collections$Array$T($tmp106, ((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:24
// begin inline call to method org.frostlang.frostc.Type.Frost():org.frostlang.frostc.Type from Assert.frost:24:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:472
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp112 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:472:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp114 = &(&local5)->$rawValue;
*$tmp114 = $tmp113;
org$frostlang$frostc$Type$Kind $tmp115 = *(&local5);
*(&local4) = $tmp115;
org$frostlang$frostc$Type$Kind $tmp116 = *(&local4);
org$frostlang$frostc$Position $tmp117 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp112, &$s119, $tmp116, $tmp117, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
org$frostlang$frostc$ClassDecl* $tmp120 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp112);
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$ClassDecl* $tmp121 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local6) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:25
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:26
frost$core$Bit $tmp122 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:27
org$frostlang$frostc$ClassDecl* $tmp124 = *(&local6);
org$frostlang$frostc$SymbolTable* $tmp125 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp124);
org$frostlang$frostc$Symbol* $tmp126 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp125, &$s127);
org$frostlang$frostc$FixedArray** $tmp128 = &((org$frostlang$frostc$Methods*) $tmp126)->methods;
org$frostlang$frostc$FixedArray* $tmp129 = *$tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {0};
frost$core$Object* $tmp131 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp129, $tmp130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp131)));
org$frostlang$frostc$MethodDecl* $tmp132 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) $tmp131);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:28
frost$collections$Array* $tmp133 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp133, ((frost$core$Object*) param2));
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:31
org$frostlang$frostc$ClassDecl* $tmp134 = *(&local6);
org$frostlang$frostc$SymbolTable* $tmp135 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp134);
org$frostlang$frostc$Symbol* $tmp136 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp135, &$s137);
org$frostlang$frostc$FixedArray** $tmp138 = &((org$frostlang$frostc$Methods*) $tmp136)->methods;
org$frostlang$frostc$FixedArray* $tmp139 = *$tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {1};
frost$core$Object* $tmp141 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp139, $tmp140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp141)));
org$frostlang$frostc$MethodDecl* $tmp142 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) $tmp141);
frost$core$Frost$unref$frost$core$Object$Q($tmp141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:33
org$frostlang$frostc$MethodDecl* $tmp143 = *(&local7);
frost$core$Bit $tmp144 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp143);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assert.frost:33:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp145 = $tmp144.value;
bool $tmp146 = !$tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:34
org$frostlang$frostc$MethodDecl* $tmp149 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp150 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp151 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$Array* $tmp152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
return;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:36
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp154 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
// begin inline call to method org.frostlang.frostc.Type.Frost():org.frostlang.frostc.Type from Assert.frost:36:82
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:472
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp155 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp156 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:472:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp157 = &(&local9)->$rawValue;
*$tmp157 = $tmp156;
org$frostlang$frostc$Type$Kind $tmp158 = *(&local9);
*(&local8) = $tmp158;
org$frostlang$frostc$Type$Kind $tmp159 = *(&local8);
org$frostlang$frostc$Position $tmp160 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp161 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp155, &$s162, $tmp159, $tmp160, $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
org$frostlang$frostc$MethodDecl* $tmp163 = *(&local7);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp154, param0, $tmp155, $tmp163);
frost$collections$Array* $tmp164 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp165 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp166 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp165, $tmp166);
org$frostlang$frostc$IR$Value* $tmp167 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp154, ((frost$collections$ListView*) $tmp164), $tmp165);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
org$frostlang$frostc$MethodDecl* $tmp168 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp169 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$Array* $tmp171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:39
org$frostlang$frostc$IR** $tmp173 = &param0->ir;
org$frostlang$frostc$IR* $tmp174 = *$tmp173;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp175 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp176 = (frost$core$Int64) {28};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp175, $tmp176, param1);
$fn178 $tmp177 = ($fn178) $tmp174->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp179 = $tmp177($tmp174, $tmp175);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
return;

}
void org$frostlang$frostc$statement$Assert$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$IR$Block$ID local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:44
org$frostlang$frostc$IR** $tmp180 = &param0->ir;
org$frostlang$frostc$IR* $tmp181 = *$tmp180;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$IR* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local0) = $tmp181;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:45
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp183 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp184 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Assert.frost:45:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp185 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp187 = &(&local2)->$rawValue;
*$tmp187 = $tmp186;
org$frostlang$frostc$Type$Kind $tmp188 = *(&local2);
*(&local1) = $tmp188;
org$frostlang$frostc$Type$Kind $tmp189 = *(&local1);
org$frostlang$frostc$Position $tmp190 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp185, &$s192, $tmp189, $tmp190, $tmp191);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp183, $tmp184, $tmp185, $tmp193);
org$frostlang$frostc$IR$Value* $tmp194 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp183);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
org$frostlang$frostc$IR$Value* $tmp195 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local3) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:46
org$frostlang$frostc$IR$Value* $tmp196 = *(&local3);
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit($tmp196 == NULL);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:47
org$frostlang$frostc$IR$Value* $tmp199 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp200 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:49
org$frostlang$frostc$IR* $tmp201 = *(&local0);
$fn203 $tmp202 = ($fn203) $tmp201->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp204 = $tmp202($tmp201, &$s205);
*(&local4) = $tmp204;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:50
org$frostlang$frostc$IR* $tmp206 = *(&local0);
$fn208 $tmp207 = ($fn208) $tmp206->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp209 = $tmp207($tmp206, &$s210);
*(&local5) = $tmp209;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:51
org$frostlang$frostc$IR* $tmp211 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp212 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp213 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp214 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp215 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp214);
org$frostlang$frostc$IR$Block$ID $tmp216 = *(&local4);
org$frostlang$frostc$IR$Block$ID $tmp217 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp212, $tmp213, param1, $tmp215, $tmp216, $tmp217);
$fn219 $tmp218 = ($fn219) $tmp211->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp220 = $tmp218($tmp211, $tmp212);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:53
org$frostlang$frostc$IR* $tmp221 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp222 = *(&local5);
$fn224 $tmp223 = ($fn224) $tmp221->$class->vtable[4];
$tmp223($tmp221, $tmp222);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:54
org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, param3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:55
org$frostlang$frostc$IR* $tmp225 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp226 = *(&local4);
$fn228 $tmp227 = ($fn228) $tmp225->$class->vtable[4];
$tmp227($tmp225, $tmp226);
org$frostlang$frostc$IR$Value* $tmp229 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp230 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Assert$init(org$frostlang$frostc$statement$Assert* param0) {

return;

}
void org$frostlang$frostc$statement$Assert$cleanup(org$frostlang$frostc$statement$Assert* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

