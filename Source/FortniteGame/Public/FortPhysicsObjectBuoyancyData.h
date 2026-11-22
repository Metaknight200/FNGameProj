#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BuoyancyTypes.h"
#include "FortPhysicsObjectBuoyancyData.generated.h"

UCLASS(Blueprintable)
class UFortPhysicsObjectBuoyancyData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPontoonRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeInWaterToSink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuoyancyData BuoyancyData;
    
    UFortPhysicsObjectBuoyancyData();

};

