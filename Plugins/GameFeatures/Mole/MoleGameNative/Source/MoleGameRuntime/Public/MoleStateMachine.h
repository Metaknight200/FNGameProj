#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayStateMachine.h"
#include "MoleStateGameOverEventData.h"
#include "Templates/SubclassOf.h"
#include "MoleStateMachine.generated.h"

class APlayerState;
class UMolePlayerStateComponent;
class UObject;

UCLASS(Blueprintable)
class UMoleStateMachine : public UGameplayStateMachine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlayerCountToEnemyIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMolePlayerStateComponent> MolePlayerStateComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> EnemyPlayerStates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FMoleStateGameOverEventData MoleStateGameOverEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RemainingSaboteurs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 StartOfMatchPlayerCount;
    
public:
    UMoleStateMachine();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMoleStartOfMatchPlayerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetMoleRemainingSaboteurCount(UObject* WorldContextObject);
    
};

