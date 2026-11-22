#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "HotfixableUmami3DAgentConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FHotfixableUmami3DAgentConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ProjectionExtentsX;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ProjectionExtentsY;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ProjectionExtentsZ;
    
    UMAMIRUNTIME_API FHotfixableUmami3DAgentConfiguration();
};

