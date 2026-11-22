#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScalableFloat.h"
#include "FortLootGroupWeightData.h"
#include "FortLootGroupWeightedRollingData.generated.h"

UCLASS(Blueprintable)
class UFortLootGroupWeightedRollingData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinGroupsToPick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxGroupsToPick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortLootGroupWeightData> LootGroupWeightData;
    
public:
    UFortLootGroupWeightedRollingData();

};

