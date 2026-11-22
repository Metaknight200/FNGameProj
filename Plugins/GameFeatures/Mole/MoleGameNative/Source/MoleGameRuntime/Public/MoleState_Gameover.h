#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleStateGameOverEventData.h"
#include "MoleState_Gameover.generated.h"

class APlayerState;

UCLASS(Abstract, Blueprintable)
class UMoleState_Gameover : public UGameplayState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MoleStateGameOverEventData, meta=(AllowPrivateAccess=true))
    FMoleStateGameOverEventData MoleStateGameOverEventData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ImposterPlayerStates, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> ImposterPlayerStates;
    
public:
    UMoleState_Gameover();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MoleStateGameOverEventData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ImposterPlayerStates();
    
};

