#pragma once
#include "CoreMinimal.h"
#include "AIScalableFloat.h"
#include "FortAthenaAIBotDigestedSkillSet.h"
#include "FortAthenaUmamiFlyingAttackDigestedSkillSet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaUmamiFlyingAttackDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OverriddenAttackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OverriddenAttackDistanceAfterBeingInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinimumZOffsetWithTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EvasiveManeuverMinDotToKeepLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveInRangeBlacklistTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EvadeBlacklistTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIScalableFloat OverriddenDelayBetweenShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIScalableFloat OverriddenDelayDeviationTimeBetweenShots;
    
public:
    UFortAthenaUmamiFlyingAttackDigestedSkillSet();

};

