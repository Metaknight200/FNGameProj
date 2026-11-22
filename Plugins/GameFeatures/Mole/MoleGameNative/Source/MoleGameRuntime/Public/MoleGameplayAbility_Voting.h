#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "TargetingRequestHandle.h"
#include "MoleGameplayAbility_Voting.generated.h"

class AActor;
class UTargetingPreset;

UCLASS(Abstract, Blueprintable)
class UMoleGameplayAbility_Voting : public UFortGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTargetingPreset* VotingTargetingPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTargetingRequestHandle AsyncTargetingHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BestVotingTarget;
    
public:
    UMoleGameplayAbility_Voting();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVotingTargetChanged(AActor* Target);
    
};

