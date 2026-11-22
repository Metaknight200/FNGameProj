#pragma once
#include "CoreMinimal.h"
#include "AIScalableFloat.h"
#include "FortAthenaAIBotSkillSet.h"
#include "ScalableFloat.h"
#include "FortAthenaUmamiFlyingAttackSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaUmamiFlyingAttackSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverriddenAttackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverriddenAttackDistanceAfterBeingInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumZOffsetWithTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EvasiveManeuverMinDotToKeepLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MoveInRangeBlacklistTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EvadeBlacklistTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIScalableFloat OverriddenDelayBetweenShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIScalableFloat OverriddenDelayDeviationTimeBetweenShots;
    
public:
    UFortAthenaUmamiFlyingAttackSkillSet();

};

