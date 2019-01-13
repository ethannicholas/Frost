#pragma once
#include "panda_c.h"
#include "InnerMethod_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$statements$InnerMethod org$pandalanguage$pandac$statements$InnerMethod;

void org$pandalanguage$pandac$statements$InnerMethod$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$FixedArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, org$pandalanguage$pandac$FixedArray* p_body);
void org$pandalanguage$pandac$statements$InnerMethod$init(org$pandalanguage$pandac$statements$InnerMethod* self);
void org$pandalanguage$pandac$statements$InnerMethod$cleanup(org$pandalanguage$pandac$statements$InnerMethod* self);

