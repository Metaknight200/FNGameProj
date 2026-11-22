#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleLobbyState_Countdown.generated.h"

UCLASS(Abstract, Blueprintable)
class UMoleLobbyState_Countdown : public UGameplayState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LobbyTransitionServerTime, meta=(AllowPrivateAccess=true))
    float LobbyTransitionServerTime;
    
public:
    UMoleLobbyState_Countdown();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyTransitionServerTime();
    
};

