#pragma once
#include "panda_c.h"
#include "For_types.h"
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$statement$For org$pandalanguage$pandac$statement$For;

panda$core$Bit org$pandalanguage$pandac$statement$For$checkSteppedRangeTypes$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$statement$For$signed$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_type);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_type);
panda$collections$ListView* org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$IR$Value* p_a);
void org$pandalanguage$pandac$statement$For$compileSimpleRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$Variable* p_index, org$pandalanguage$pandac$IR$Value* p_range, panda$collections$ListView* p_statements);
void org$pandalanguage$pandac$statement$For$compileSteppedRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$Variable* p_index, org$pandalanguage$pandac$IR$Value* p_range, panda$collections$ListView* p_statements);
void org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IR$Value* p_list, panda$collections$ListView* p_statements);
void org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$ASTNode* p_rawList, panda$collections$ListView* p_statements);
void org$pandalanguage$pandac$statement$For$compileIteratorFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_target, org$pandalanguage$pandac$IR$Value* p_iterator, panda$collections$ListView* p_statements);
void org$pandalanguage$pandac$statement$For$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_rawTarget, org$pandalanguage$pandac$ASTNode* p_rawList, panda$collections$ListView* p_statements);
void org$pandalanguage$pandac$statement$For$init(org$pandalanguage$pandac$statement$For* self);
void org$pandalanguage$pandac$statement$For$cleanup(org$pandalanguage$pandac$statement$For* self);

