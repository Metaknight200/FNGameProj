#pragma once
#include "CoreMinimal.h"
#include "MeshRegionLockData_Base.h"
#include "MeshRegionLockData_Float.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMeshRegionLockData_Float : public FMeshRegionLockData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Data;
    
    FMeshRegionLockData_Float();
};

