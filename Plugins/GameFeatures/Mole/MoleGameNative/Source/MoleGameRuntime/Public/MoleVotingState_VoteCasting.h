#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GameplayState.h"
#include "Templates/SubclassOf.h"
#include "MoleVotingState_VoteCasting.generated.h"

class APlayerState;
class UGameplayAbility;
class UMoleVotingComponent;

UCLASS(Abstract, Blueprintable)
class UMoleVotingState_VoteCasting : public UGameplayState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> VotingAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, FGameplayAbilitySpecHandle> PlayerStateToVoteAbilityHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoleVotingComponent> VotingComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerFinishTime, meta=(AllowPrivateAccess=true))
    float ServerFinishTime;
    
public:
    UMoleVotingState_VoteCasting();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerFinishTime();
    
};

