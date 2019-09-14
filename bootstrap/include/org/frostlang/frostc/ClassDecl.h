#pragma once
#include "frost_c.h"
#include "ClassDecl_types.h"
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct frost$io$File frost$io$File;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$collections$MapView frost$collections$MapView;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "org/frostlang/frostc/ClassDecl/Kind_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlang$frostc$SymbolTable org$frostlang$frostc$SymbolTable;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(void* rawSelf, frost$io$File* p_source, org$frostlang$frostc$Position p_position, frost$collections$MapView* p_aliases, frost$core$String* p_doccomment, org$frostlang$frostc$Annotations* p_annotations, org$frostlang$frostc$ClassDecl$Kind p_kind, org$frostlang$frostc$Type* p_type, frost$collections$ListView* p_declaredSupers, frost$collections$Array* p_parameters, org$frostlang$frostc$SymbolTable* p_parent);
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(void* rawSelf, frost$io$File* p_source, org$frostlang$frostc$Position p_position, frost$collections$MapView* p_aliases, frost$core$String* p_doccomment, org$frostlang$frostc$Annotations* p_annotations, org$frostlang$frostc$ClassDecl$Kind p_kind, frost$core$String* p_name, frost$collections$ListView* p_declaredSupers, frost$collections$Array* p_parameters, org$frostlang$frostc$SymbolTable* p_parent);
frost$core$String* org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(void* rawSelf);
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(void* rawSelf);
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(void* rawSelf);
frost$core$String* org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$ClassDecl$cleanup(void* rawSelf);

