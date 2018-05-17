#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Annotations$Expression {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[8];
} org$pandalanguage$pandac$Annotations$Expression;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Annotations$Expression$class_type;
extern org$pandalanguage$pandac$Annotations$Expression$class_type org$pandalanguage$pandac$Annotations$Expression$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Annotations$Expression org$pandalanguage$pandac$Annotations$Expression;
#include "panda/core/Int64.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;

panda$core$String* org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations$Expression* self);
void org$pandalanguage$pandac$Annotations$Expression$cleanup(org$pandalanguage$pandac$Annotations$Expression* self);
void org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Annotations$Expression* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$ASTNode* p_f0);

#endif
