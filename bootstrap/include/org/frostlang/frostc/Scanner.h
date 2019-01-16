#pragma once
#include "frost_c.h"
#include "Scanner_types.h"
typedef struct org$frostlang$frostc$Scanner org$frostlang$frostc$Scanner;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
#include "frost/core/Int64_types.h"
#include "org/frostlang/frostc/Position_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"
typedef struct frost$io$File frost$io$File;
typedef struct frost$collections$MapView frost$collections$MapView;
#include "org/frostlang/frostc/ClassDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$List frost$collections$List;

void org$frostlang$frostc$Scanner$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$Compiler* p_compiler);
org$frostlang$frostc$Type* org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$ASTNode* p_type);
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$Position p_position, frost$core$Int64 p_flags, frost$core$Int64 p_flag);
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* p_scanner, org$frostlang$frostc$Position p_position, frost$core$String* p_text, org$frostlang$frostc$ASTNode* p_expr);
org$frostlang$frostc$Annotations* org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$FixedArray* p_a);
void org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$ClassDecl* p_owner, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_rawDoccomment, org$frostlang$frostc$FixedArray* p_rawAnnotations, org$frostlang$frostc$ASTNode* p_varDecl);
frost$core$Int64 org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$ASTNode* p_node);
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$Annotations* p_annotations, frost$collections$ListView* p_statements);
org$frostlang$frostc$MethodDecl* org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$ClassDecl* p_owner, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_rawDoccomment, org$frostlang$frostc$FixedArray* p_rawAnnotations, org$frostlang$frostc$MethodDecl$Kind p_kind, frost$core$String* p_name, org$frostlang$frostc$FixedArray* p_rawGenerics, org$frostlang$frostc$FixedArray* p_rawParameters, org$frostlang$frostc$ASTNode* p_rawReturnType, org$frostlang$frostc$FixedArray* p_statements);
void org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$ClassDecl* p_cl, org$frostlang$frostc$ASTNode* p_node);
void org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$ClassDecl* p_cl, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_rawDoccomment, frost$core$String* p_name, org$frostlang$frostc$FixedArray* p_rawFields);
org$frostlang$frostc$ClassDecl* org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$Scanner* self, frost$io$File* p_source, frost$collections$MapView* p_aliases, frost$core$String* p_contextName, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_rawDoccomment, org$frostlang$frostc$FixedArray* p_rawAnnotations, org$frostlang$frostc$ClassDecl$Kind p_kind, frost$core$String* p_name, org$frostlang$frostc$FixedArray* p_generics, org$frostlang$frostc$FixedArray* p_rawSupertypes, org$frostlang$frostc$FixedArray* p_members);
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$ClassDecl* p_cl, frost$collections$Array* p_arr);
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* self, frost$io$File* p_source, frost$collections$MapView* p_aliases, frost$core$String* p_contextName, frost$collections$List* p_classes);
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* self, org$frostlang$frostc$Position p_position, frost$core$String* p_msg);
frost$collections$ListView* org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* self, frost$io$File* p_source, org$frostlang$frostc$ASTNode* p_file);
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* self);

