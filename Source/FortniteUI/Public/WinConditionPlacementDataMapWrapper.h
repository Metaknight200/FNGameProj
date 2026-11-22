#pragma once
#include "CoreMinimal.h"
#include "EHUDMessagePlacement.h"
#include "WinConditionPlacementData.h"
#include "WinConditionPlacementDataMapWrapper.generated.h"

USTRUCT(BlueprintType)
struct FWinConditionPlacementDataMapWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHUDMessagePlacement, FWinConditionPlacementData> Data;
    
    FORTNITEUI_API FWinConditionPlacementDataMapWrapper();
};

