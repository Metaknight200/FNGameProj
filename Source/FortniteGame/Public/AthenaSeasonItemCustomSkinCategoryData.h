#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemCustomSkinCategoryData.generated.h"

class UAthenaSeasonItemEntryReward;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaSeasonItemCustomSkinCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSeasonItemEntryReward*> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRewardsToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    FAthenaSeasonItemCustomSkinCategoryData();
};

