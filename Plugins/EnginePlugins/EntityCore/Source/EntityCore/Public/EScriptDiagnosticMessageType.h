#pragma once
#include "CoreMinimal.h"
#include "EScriptDiagnosticMessageType.generated.h"

UENUM(BlueprintType)
namespace EScriptDiagnosticMessageType {
    enum Type {
        Debug,
        Verbose,
        Normal,
        Warning,
        Error,
        Fatal,
    };
}

