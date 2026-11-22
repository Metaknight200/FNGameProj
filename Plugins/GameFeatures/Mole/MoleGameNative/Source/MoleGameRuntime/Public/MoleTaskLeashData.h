#pragma once
#include "CoreMinimal.h"
#include "MoleTaskLeashData.generated.h"

class AActor;
class UMoleTaskDataAsset;

USTRUCT(BlueprintType)
struct FMoleTaskLeashData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoleTaskDataAsset* TaskDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LeashActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceSquared;
    
    MOLEGAMERUNTIME_API FMoleTaskLeashData();
};

