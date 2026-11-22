#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayCueInterface.h"
#include "EventMessageTag.h"
#include "ControllerComponent.h"
#include "TargetingRequestHandle.h"
#include "EMoleTaskInterruptionType.h"
#include "MoleActiveTaskStateArray.h"
#include "MoleActiveTaskStateHandle.h"
#include "MoleCompletedTask.h"
#include "MoleCompletedTaskArray.h"
#include "MoleTaskLeashData.h"
#include "TaskGenericPayload.h"
#include "MolePlayerTaskManagementComponent.generated.h"

class AActor;
class AController;
class UGameplayState;
class UInputComponent;
class UMoleTaskDataAsset;
class UMoleTaskLogic;
class UTargetingPreset;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMolePlayerTaskManagementComponent : public UControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMoleActiveTaskStateArray MoleActiveTaskStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMoleCompletedTaskArray MoleCompletedTaskArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleTaskLeashData> MoleCollisionLeashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleTaskLeashData> MoleDistanceLeashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle LeashTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMoleActiveTaskStateHandle PrimaryActiveTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* ActiveTaskInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CancelPrimaryTaskTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueTag TaskCompletionGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueTag TaskInterruptionGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTasksDisabledBySabotage: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTargetingPreset* EnemyTrackingTargetingPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTargetingRequestHandle AsyncTargetingHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BestEnemyTarget;
    
public:
    UMolePlayerTaskManagementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTaskObjectInteractEvent(FEventMessageTag EventMessageTag, const FTaskGenericPayload& Payload);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestCancelPrimaryActiveTask();
    
    UFUNCTION(BlueprintCallable)
    void OnLeashActorEndOverlap(AActor* OriginatingActor, AActor* ActorEndingOverlap);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedTaskAdded(const FMoleCompletedTask& InAddedCompletedTask);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCompletedTasks() const;
    
    UFUNCTION(BlueprintCallable)
    static void CompleteTaskForGameplayState(UGameplayState* State);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTasksInterrupted(const TArray<UMoleTaskDataAsset*>& TasksInterrupted, EMoleTaskInterruptionType InterruptionType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPrimaryActiveTask(FMoleActiveTaskStateHandle NewPrimaryHandle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllTasksInterrupted(EMoleTaskInterruptionType InterruptionType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllTasksEnabled();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdvanceLogicThroughPhases(UMoleTaskLogic* Logic, const TArray<int32>& AdvancedPhases);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool BlueprintServerTaskObjectInteractEvent(AController* User, FEventMessageTag EventMessageTag, const FTaskGenericPayload& Payload);
    
};

