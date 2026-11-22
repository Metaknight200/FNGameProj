#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Attack.h"
#include "GameplayTagContainer.h"
#include "DestroyBlockerOffsetConfiguration.h"
#include "FortAthenaNpcEvaluator_FlyingDestroyBlocker.generated.h"

class UFortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaNpcEvaluator_FlyingDestroyBlocker : public UFortAthenaAIBotEvaluator_Attack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnstuckLastBlockedByActorLocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestroyBlockerExecutionStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestroyBlockerMovementStateKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestroyBlockerDestinationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestroyBlockerTargetKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponFireStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FocusActorName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FocalPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDestroyBlockerOffsetConfiguration> OffsetConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WhitelistBuildingTypesToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet* CachedFlyingDestroyBlockerDigestedSkillSet;
    
public:
    UFortAthenaNpcEvaluator_FlyingDestroyBlocker();

};

