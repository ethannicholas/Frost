#pragma once
#include "panda_c.h"
#include "Value_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
#include "panda/core/UInt64_types.h"
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
#include "panda/core/Real64_types.h"
#include "org/pandalanguage/pandac/IR/Statement/ID_types.h"
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IR$Value$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* self);
panda$core$String* org$pandalanguage$pandac$IR$Value$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Value* self);
void org$pandalanguage$pandac$IR$Value$cleanup(org$pandalanguage$pandac$IR$Value* self);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, panda$core$Bit p_f0);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$UInt64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, panda$core$UInt64 p_f0, org$pandalanguage$pandac$Type* p_f1);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0, org$pandalanguage$pandac$Type* p_f1);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$MethodDecl* p_f0, org$pandalanguage$pandac$Type* p_f1);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Type* p_f0);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Real64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0, org$pandalanguage$pandac$Type* p_f1);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IR$Statement$ID p_f0, org$pandalanguage$pandac$Type* p_f1);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, panda$core$String* p_f0);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IR$Value* p_f0, org$pandalanguage$pandac$MethodDecl* p_f1);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IR$Value* p_f0, org$pandalanguage$pandac$FixedArray* p_f1);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IR$Value* p_f0, org$pandalanguage$pandac$MethodDecl* p_f1, org$pandalanguage$pandac$FixedArray* p_f2);
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$MethodDecl$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$IR$Value* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IR$Value* p_f0, org$pandalanguage$pandac$FixedArray* p_f1, org$pandalanguage$pandac$FixedArray* p_f2);

