#pragma once
#include "panda_c.h"
#include "Match_types.h"
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$ChoiceCase org$pandalanguage$pandac$ChoiceCase;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$statement$Match org$pandalanguage$pandac$statement$Match;

panda$core$Bit org$pandalanguage$pandac$statement$Match$checkChoiceMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceCase$Q$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ChoiceCase* p_cc, org$pandalanguage$pandac$ClassDecl* p_choiceClass, org$pandalanguage$pandac$IR$Value* p_value);
void org$pandalanguage$pandac$statement$Match$compileChainedIfMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IR$Value* p_value, org$pandalanguage$pandac$ClassDecl* p_choiceClass, org$pandalanguage$pandac$IR$Value* p_choiceRawValue, org$pandalanguage$pandac$FixedArray* p_whens, org$pandalanguage$pandac$FixedArray* p_other);
void org$pandalanguage$pandac$statement$Match$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_value, org$pandalanguage$pandac$FixedArray* p_whens, org$pandalanguage$pandac$FixedArray* p_other);
void org$pandalanguage$pandac$statement$Match$init(org$pandalanguage$pandac$statement$Match* self);
void org$pandalanguage$pandac$statement$Match$cleanup(org$pandalanguage$pandac$statement$Match* self);

