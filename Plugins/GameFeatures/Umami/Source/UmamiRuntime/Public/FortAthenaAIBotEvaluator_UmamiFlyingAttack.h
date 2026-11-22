#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Attack.h"
#include "EFlyingEvasiveManeuversMode.h"
#include "EvasiveManeuver_Step.h"
#include "FortAthenaAIBotEvaluator_UmamiFlyingAttack.generated.h"

class UFortAthenaAIBotAimingDigestedSkillSet;
class UFortAthenaAIBotPerceptionDigestedSkillSet;
class UFortAthenaAIBotRangeAttackDigestedSkillSet;
class UFortAthenaUmamiFlyingAttackDigestedSkillSet;
class UFortAthenaUmamiFlyingVehicleDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_UmamiFlyingAttack : public UFortAthenaAIBotEvaluator_Attack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponFireName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTargetingName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AggressivenessName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HasLoSOnThreatName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementModeKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlyingEvasiveManeuversMode FlyingEvasiveManeuversModeWhenInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvasiveManeuver_Step> FlyingEvasiveManeuversConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotAimingDigestedSkillSet* CachedAimingDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotPerceptionDigestedSkillSet* CachedPerceptionDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaUmamiFlyingAttackDigestedSkillSet* CachedFlyingAttackDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaUmamiFlyingVehicleDigestedSkillSet* CachedFlyingVehicleDigestedSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_UmamiFlyingAttack();

};

