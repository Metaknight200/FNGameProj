#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleVoteResolutionData.h"
#include "MoleVotingState_ResultDisplay.generated.h"

class AMolePlayerStart;
class APlayerState;

UCLASS(Abstract, Blueprintable)
class UMoleVotingState_ResultDisplay : public UGameplayState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VotingResolutionData, meta=(AllowPrivateAccess=true))
    FMoleVoteResolutionData VotingResolutionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, AMolePlayerStart*> PlayerToPlayerStart;
    
public:
    UMoleVotingState_ResultDisplay();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VotingResolutionData();
    
};

