#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttachToComponentParams.generated.h"

USTRUCT(BlueprintType)
struct FAttachToComponentParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule LocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule RotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule ScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeldSimulatedBodies;
    
    FORTNITEGAME_API FAttachToComponentParams();
};

