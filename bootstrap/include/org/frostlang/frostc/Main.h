#pragma once
#include "frost_c.h"
#include "Main_types.h"
typedef struct org$frostlang$frostc$Main org$frostlang$frostc$Main;
typedef struct frost$io$File frost$io$File;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$collections$ListView frost$collections$ListView;

void org$frostlang$frostc$Main$init(void* rawSelf);
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(void* rawSelf, frost$io$File* p_llvm, frost$io$File* p_dest, frost$core$Bit p_preserveTemporaries);
frost$core$String* org$frostlang$frostc$Main$$anonymous1$frost$io$File$R$frost$core$String(frost$io$File* p_p);
frost$core$String* org$frostlang$frostc$Main$$anonymous2$frost$core$String$R$frost$core$String(frost$core$String* p_l);
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(void* rawSelf, frost$collections$Array* p_libraryPaths, frost$collections$Array* p_libraries, frost$io$File* p_llvm, frost$io$File* p_dest, frost$core$Bit p_preserveTemporaries);
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(void* rawSelf, frost$io$OutputStream* p_out);
void org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(void* rawSelf, frost$collections$ListView* p_rawArgs);
void frostMain(frost$collections$ListView* p_args);
void org$frostlang$frostc$Main$cleanup(void* rawSelf);

