#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Panda.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$AutoScope$class_type org$pandalanguage$pandac$Compiler$AutoScope$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$AutoScope$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x53\x63\x6f\x70\x65", 43, -1263393671590745366, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };

void org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoScope* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 191
org$pandalanguage$pandac$SymbolTable* $tmp2 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
org$pandalanguage$pandac$SymbolTable** $tmp3 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp4 = *$tmp3;
org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp2, $tmp4);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(param0, param1, $tmp2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:org.pandalanguage.pandac.SymbolTable)
return;

}
void org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler$AutoScope* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$SymbolTable* param2) {

// line 195
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp5 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
org$pandalanguage$pandac$Compiler** $tmp7 = &param0->compiler;
*$tmp7 = param1;
// line 196
org$pandalanguage$pandac$SymbolTable** $tmp8 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp9 = *$tmp8;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
org$pandalanguage$pandac$SymbolTable** $tmp10 = &param0->oldSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
org$pandalanguage$pandac$SymbolTable** $tmp12 = &param0->oldSymbolTable;
*$tmp12 = $tmp9;
// line 197
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$SymbolTable** $tmp13 = &param0->newSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
org$pandalanguage$pandac$SymbolTable** $tmp15 = &param0->newSymbolTable;
*$tmp15 = param2;
// line 198
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$SymbolTable** $tmp16 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp17 = *$tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
org$pandalanguage$pandac$SymbolTable** $tmp18 = &param1->symbolTable;
*$tmp18 = param2;
// line 199
panda$collections$Stack** $tmp19 = &param1->enclosingContexts;
panda$collections$Stack* $tmp20 = *$tmp19;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp21 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp22 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64($tmp21, $tmp22);
panda$collections$Stack$push$panda$collections$Stack$T($tmp20, ((panda$core$Object*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($42:org.pandalanguage.pandac.Compiler.EnclosingContext)
return;

}
void org$pandalanguage$pandac$Compiler$AutoScope$cleanup(org$pandalanguage$pandac$Compiler$AutoScope* param0) {

org$pandalanguage$pandac$Compiler$EnclosingContext* local0 = NULL;
// line 204
goto block1;
block1:;
// line 205
org$pandalanguage$pandac$Compiler** $tmp23 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp24 = *$tmp23;
panda$collections$Stack** $tmp25 = &$tmp24->enclosingContexts;
panda$collections$Stack* $tmp26 = *$tmp25;
panda$core$Object* $tmp27 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp26);
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$EnclosingContext*) $tmp27)));
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp28 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) $tmp27);
panda$core$Panda$unref$panda$core$Object$Q($tmp27);
// unreffing REF($8:panda.collections.Stack.T)
// line 206
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp29 = *(&local0);
panda$core$Int64* $tmp30 = &$tmp29->$rawValue;
panda$core$Int64 $tmp31 = *$tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {1};
panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block4; else goto block5;
block4:;
// line 208
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp35 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing pop
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
goto block2;
block5:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {2};
panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp39 = (panda$core$Int64) {3};
panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block6; else goto block8;
block6:;
// line 211
org$pandalanguage$pandac$Compiler** $tmp42 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp43 = *$tmp42;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp44 = *(&local0);
org$pandalanguage$pandac$Compiler$leaveScope$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp43, $tmp44);
goto block3;
block8:;
// line 214
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit(false);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp47 = (panda$core$Int64) {214};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s48, $tmp47);
abort(); // unreachable
block9:;
goto block3;
block3:;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp49 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing pop
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
goto block1;
block2:;
// line 218
org$pandalanguage$pandac$Compiler** $tmp50 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp51 = *$tmp50;
org$pandalanguage$pandac$SymbolTable** $tmp52 = &$tmp51->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp53 = *$tmp52;
org$pandalanguage$pandac$SymbolTable** $tmp54 = &param0->newSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp55 = *$tmp54;
bool $tmp56 = $tmp53 == $tmp55;
panda$core$Bit $tmp57 = panda$core$Bit$init$builtin_bit($tmp56);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp59 = (panda$core$Int64) {218};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s60, $tmp59);
abort(); // unreachable
block11:;
// line 219
org$pandalanguage$pandac$Compiler** $tmp61 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp62 = *$tmp61;
org$pandalanguage$pandac$SymbolTable** $tmp63 = &param0->oldSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp64 = *$tmp63;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$SymbolTable** $tmp65 = &$tmp62->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
org$pandalanguage$pandac$SymbolTable** $tmp67 = &$tmp62->symbolTable;
*$tmp67 = $tmp64;
// line 203
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp68 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp69 = *$tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
org$pandalanguage$pandac$SymbolTable** $tmp70 = &param0->oldSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
org$pandalanguage$pandac$SymbolTable** $tmp72 = &param0->newSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp73 = *$tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
return;

}

