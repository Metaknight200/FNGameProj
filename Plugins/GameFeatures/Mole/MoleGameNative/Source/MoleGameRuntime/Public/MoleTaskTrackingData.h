#pragma once
#include "CoreMinimal.h"
#include "MoleTaskTrackingData.generated.h"

class UMoleTaskDataAsset;

USTRUCT(BlueprintType)
struct FMoleTaskTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoleTaskDataAsset* TaskAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 DistributionCountRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasBeenGrantedBefore: 1;
    
    MOLEGAMERUNTIME_API FMoleTaskTrackingData();
};

