#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoScope$class_type org$frostlang$frostc$Compiler$AutoScope$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoScope$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x53\x63\x6f\x70\x65", 39, 4840824290779275110, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$AutoScope* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:184
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
org$frostlang$frostc$SymbolTable* $tmp2 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable** $tmp3 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4 = *$tmp3;
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp2, $tmp4);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(param0, param1, $tmp2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$Compiler$AutoScope* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$SymbolTable* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp5 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler** $tmp7 = &param0->compiler;
*$tmp7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:189
org$frostlang$frostc$SymbolTable** $tmp8 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp9 = *$tmp8;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$SymbolTable** $tmp10 = &param0->oldSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlang$frostc$SymbolTable** $tmp12 = &param0->oldSymbolTable;
*$tmp12 = $tmp9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$SymbolTable** $tmp13 = &param0->newSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$SymbolTable** $tmp15 = &param0->newSymbolTable;
*$tmp15 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$SymbolTable** $tmp16 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlang$frostc$SymbolTable** $tmp18 = &param1->symbolTable;
*$tmp18 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:192
frost$collections$Stack** $tmp19 = &param1->enclosingContexts;
frost$collections$Stack* $tmp20 = *$tmp19;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp21 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp22 = (frost$core$Int) {2u};
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int($tmp21, $tmp22);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Compiler.frost:192:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp23 = &$tmp20->contents;
frost$collections$Array* $tmp24 = *$tmp23;
frost$collections$Array$add$frost$collections$Array$T($tmp24, ((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
return;

}
void org$frostlang$frostc$Compiler$AutoScope$cleanup(org$frostlang$frostc$Compiler$AutoScope* param0) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:197
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:198
org$frostlang$frostc$Compiler** $tmp25 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp26 = *$tmp25;
frost$collections$Stack** $tmp27 = &$tmp26->enclosingContexts;
frost$collections$Stack* $tmp28 = *$tmp27;
frost$core$Object* $tmp29 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp28);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp29)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp29);
frost$core$Frost$unref$frost$core$Object$Q($tmp29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:199
org$frostlang$frostc$Compiler$EnclosingContext* $tmp31 = *(&local0);
frost$core$Int* $tmp32 = &$tmp31->$rawValue;
frost$core$Int $tmp33 = *$tmp32;
frost$core$Int $tmp34 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:200:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 == $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:201
org$frostlang$frostc$Compiler$EnclosingContext* $tmp40 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block2;
block5:;
frost$core$Int $tmp41 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:203:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp42 = $tmp33.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 == $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:204
org$frostlang$frostc$Compiler$EnclosingContext* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block2;
block8:;
frost$core$Int $tmp48 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:206:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp49 = $tmp33.value;
int64_t $tmp50 = $tmp48.value;
bool $tmp51 = $tmp49 == $tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block10; else goto block11;
block11:;
frost$core$Int $tmp54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:206:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp55 = $tmp33.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 == $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block10; else goto block13;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:207
org$frostlang$frostc$Compiler** $tmp60 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp61 = *$tmp60;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp62 = *(&local0);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext($tmp61, $tmp62);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:210
frost$core$Int $tmp64 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s65, $tmp64);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:214
org$frostlang$frostc$Compiler** $tmp66 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp67 = *$tmp66;
org$frostlang$frostc$SymbolTable** $tmp68 = &$tmp67->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp69 = *$tmp68;
org$frostlang$frostc$SymbolTable** $tmp70 = &param0->newSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp71 = *$tmp70;
bool $tmp72 = $tmp69 == $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block15; else goto block16;
block16:;
frost$core$Int $tmp75 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s76, $tmp75);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:215
org$frostlang$frostc$Compiler** $tmp77 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp78 = *$tmp77;
org$frostlang$frostc$SymbolTable** $tmp79 = &param0->oldSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp80 = *$tmp79;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$SymbolTable** $tmp81 = &$tmp78->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$SymbolTable** $tmp83 = &$tmp78->symbolTable;
*$tmp83 = $tmp80;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:196
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp84 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp85 = *$tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$SymbolTable** $tmp86 = &param0->oldSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$SymbolTable** $tmp88 = &param0->newSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp89 = *$tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
return;

}

