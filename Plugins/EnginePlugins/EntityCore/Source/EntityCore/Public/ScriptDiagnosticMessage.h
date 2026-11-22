#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EScriptDiagnosticMessageType.h"
#include "ScriptDiagnosticSourceLocation.h"
#include "ScriptDiagnosticMessage.generated.h"

USTRUCT(BlueprintType)
struct ENTITYCORE_API FScriptDiagnosticMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EScriptDiagnosticMessageType::Type> MessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptDiagnosticSourceLocation SourceLocation;
    
    FScriptDiagnosticMessage();
};

