#pragma once
#include "CoreMinimal.h"
#include "MeshRegionLockData_Tracker.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMeshRegionLockData_Tracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegionLockDatas;
    
    FMeshRegionLockData_Tracker();
};

