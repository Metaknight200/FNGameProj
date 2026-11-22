#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "AthenaFortAIBotWeightedBuildingList.h"
#include "FortAthenaAIBotSkillSet.h"
#include "FortAthenaAIBotBuildingSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotBuildingSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefensiveBuildingDelayBetweenBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefensiveBuildingDelayDeviationBetweenBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBetweenBuildPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ForceEquipBuildToolDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaFortAIBotWeightedBuildingList> WeightedBuildingLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StealWallTurboBuildDetectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StealWallAfterNumberOfTurboBuiltWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StealWallEfficiency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StealWallBuildingTemplateWeights[5];
    
public:
    UFortAthenaAIBotBuildingSkillSet();

};

