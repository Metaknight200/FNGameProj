#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MoleActiveTaskStateHandle.h"
#include "MoleTaskLogicPhase.h"
#include "MoleTaskLogic.generated.h"

class UMoleTaskDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UMoleTaskLogic : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ParentTaskAsset, meta=(AllowPrivateAccess=true))
    UMoleTaskDataAsset* ParentTaskAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleTaskLogicPhase> TaskPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ClientDelayedPendingPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ParentTaskHandle, meta=(AllowPrivateAccess=true))
    FMoleActiveTaskStateHandle ParentTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTaskPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPhaseChangeInProgress: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasBeenInitialized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPrimaryActiveTask: 1;
    
public:
    UMoleTaskLogic();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ParentTaskHandle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParentTaskAsset();
    
};

