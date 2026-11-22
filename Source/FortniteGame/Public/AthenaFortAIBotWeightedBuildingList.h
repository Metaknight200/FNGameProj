#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortAthenaAIBotBuildDescriptor.h"
#include "AthenaFortAIBotWeightedBuildingList.generated.h"

USTRUCT(BlueprintType)
struct FAthenaFortAIBotWeightedBuildingList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaAIBotBuildDescriptor> BuildDescriptors;
    
    FORTNITEGAME_API FAthenaFortAIBotWeightedBuildingList();
};

