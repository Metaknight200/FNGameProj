#pragma once
#include "CoreMinimal.h"
#include "EMoleLightsMode.h"
#include "MoleLightingMode.generated.h"

USTRUCT(BlueprintType)
struct FMoleLightingMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoleLightsMode LightingMode;
    
    MOLEGAMERUNTIME_API FMoleLightingMode();
};

