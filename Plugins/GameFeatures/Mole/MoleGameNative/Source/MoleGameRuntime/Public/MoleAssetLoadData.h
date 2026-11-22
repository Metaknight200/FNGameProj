#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoleAssetLoadData.generated.h"

USTRUCT(BlueprintType)
struct MOLEGAMERUNTIME_API FMoleAssetLoadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType PrimaryAssetType;
    
    FMoleAssetLoadData();
};

