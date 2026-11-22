#include "ScriptDiagnosticMessage.h"

FScriptDiagnosticMessage::FScriptDiagnosticMessage() {
    // Initialize reflected value fields omitted by the dump.
    this->Timestamp = FDateTime(0);
    this->MessageType = EScriptDiagnosticMessageType::Debug;
}

