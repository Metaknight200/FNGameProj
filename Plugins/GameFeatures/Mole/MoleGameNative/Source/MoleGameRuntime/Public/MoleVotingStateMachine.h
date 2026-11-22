#pragma once
#include "CoreMinimal.h"
#include "GameplayStateMachine.h"
#include "MoleVote.h"
#include "MoleVotingStateMachine.generated.h"

UCLASS(Blueprintable)
class UMoleVotingStateMachine : public UGameplayStateMachine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrepareStateDelayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VoteList, meta=(AllowPrivateAccess=true))
    TArray<FMoleVote> VoteList;
    
public:
    UMoleVotingStateMachine();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VoteList();
    
};

