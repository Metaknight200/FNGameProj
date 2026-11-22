#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "Templates/SubclassOf.h"
#include "MoleVotingState_Discussion.generated.h"

class UMoleQuickChatComponent;

UCLASS(Abstract, Blueprintable)
class UMoleVotingState_Discussion : public UGameplayState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoleQuickChatComponent> QuickChatComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DiscussionFinishServerTime, meta=(AllowPrivateAccess=true))
    float DiscussionFinishServerTime;
    
public:
    UMoleVotingState_Discussion();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DiscussionFinishServerTime();
    
};

