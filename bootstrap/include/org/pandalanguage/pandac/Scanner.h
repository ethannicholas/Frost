#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;

typedef struct org$pandalanguage$pandac$Scanner {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler* compiler;
} org$pandalanguage$pandac$Scanner;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[13]; } org$pandalanguage$pandac$Scanner$class_type;
extern org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Scanner org$pandalanguage$pandac$Scanner;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$MapView panda$collections$MapView;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$collections$ListView panda$collections$ListView;

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type);
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_a);
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f);
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_i);
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node);
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body);
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m);
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl);
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf);
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr);
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file);

#endif
