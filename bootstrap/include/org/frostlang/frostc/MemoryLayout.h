#pragma once
#include "frost_c.h"
#include "MemoryLayout_types.h"
typedef struct org$frostlang$frostc$MemoryLayout org$frostlang$frostc$MemoryLayout;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;

void org$frostlang$frostc$MemoryLayout$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
frost$core$Int org$frostlang$frostc$MemoryLayout$get_intSize$R$frost$core$Int(void* rawSelf);
frost$core$Int org$frostlang$frostc$MemoryLayout$get_pointerSize$R$frost$core$Int(void* rawSelf);
frost$core$Int org$frostlang$frostc$MemoryLayout$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$Int org$frostlang$frostc$MemoryLayout$alignment$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* p_t);
void org$frostlang$frostc$MemoryLayout$computeLayout$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$Int org$frostlang$frostc$MemoryLayout$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$Int org$frostlang$frostc$MemoryLayout$stride$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$Int org$frostlang$frostc$MemoryLayout$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* p_t);
frost$core$Int org$frostlang$frostc$MemoryLayout$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$Int org$frostlang$frostc$MemoryLayout$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$ChoiceCase* p_e, frost$core$Int p_index);
void org$frostlang$frostc$MemoryLayout$cleanup(void* rawSelf);

