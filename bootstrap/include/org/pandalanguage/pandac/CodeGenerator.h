#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct org$pandalanguage$pandac$CodeGenerator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$CodeGenerator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[7]; } org$pandalanguage$pandac$CodeGenerator$class_type;
extern org$pandalanguage$pandac$CodeGenerator$class_type org$pandalanguage$pandac$CodeGenerator$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$CodeGenerator org$pandalanguage$pandac$CodeGenerator;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;

void org$pandalanguage$pandac$CodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$CodeGenerator$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$CodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$CodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body);
void org$pandalanguage$pandac$CodeGenerator$finish(org$pandalanguage$pandac$CodeGenerator* self);

#endif
