#pragma once
#include "CoreMinimal.h"
#include "MeshRegionLockData_Base.h"
#include "MeshRegionLockData_Int64.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMeshRegionLockData_Int64 : public FMeshRegionLockData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Data;
    
    FMeshRegionLockData_Int64();
};

