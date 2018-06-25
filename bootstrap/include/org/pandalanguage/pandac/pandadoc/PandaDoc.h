#pragma once
#include "panda_c.h"
#include "PandaDoc_types.h"
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
typedef struct panda$core$Object panda$core$Object;
typedef struct org$pandalanguage$pandac$pandadoc$PandaDoc org$pandalanguage$pandac$pandadoc$PandaDoc;
typedef struct panda$io$File panda$io$File;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct org$pandalanguage$pandac$pandadoc$Markdown org$pandalanguage$pandac$pandadoc$Markdown;
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$FieldDecl org$pandalanguage$pandac$FieldDecl;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$collections$HashSet panda$collections$HashSet;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;

void panda$core$MutableMethod$$shim1$panda$collections$Iterator$T(panda$core$MutableMethod* self, panda$core$Object* p_p0);
void org$pandalanguage$pandac$pandadoc$PandaDoc$init$panda$io$File$panda$io$File$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$io$File* p_outDir, panda$io$File* p_classListPath);
void org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Compiler* p_compiler);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension);
panda$io$File* org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s);
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t);
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Annotations* p_a);
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$PandaDoc$splitDoc$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Cpanda$core$String$GT$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_text);
org$pandalanguage$pandac$pandadoc$Markdown* org$pandalanguage$pandac$pandadoc$PandaDoc$getMarkdown$R$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$PandaDoc* self);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_doccomment);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeSee$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s);
void org$pandalanguage$pandac$pandadoc$PandaDoc$finishSees(org$pandalanguage$pandac$pandadoc$PandaDoc* self);
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f);
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f);
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$stripParagraph$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$pandadoc$PandaDoc$addInheritedMethods$org$pandalanguage$pandac$Type$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$HashSet$LTpanda$core$String$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t, panda$collections$Array* p_methods, panda$collections$HashSet* p_overridden);
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$simpleSignature$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0);
void panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0);
void panda$core$MutableMethod$$shim4$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0);
void panda$core$MutableMethod$$shim5$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0);
void org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body);
void org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl);
void org$pandalanguage$pandac$pandadoc$PandaDoc$finish(org$pandalanguage$pandac$pandadoc$PandaDoc* self);
void org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup(org$pandalanguage$pandac$pandadoc$PandaDoc* self);

