#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PlayspaceComponent.h"
#include "MoleActiveTaskStateHandle.h"
#include "MoleTaskMappingElement.h"
#include "MoleTaskScoreEventData.h"
#include "MoleTaskTrackingData.h"
#include "MoleTaskManagerComponent.generated.h"

class AActor;
class UMoleTaskDataAsset;
class UMoleTaskLinkComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleTaskManagerComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoleTaskMappingElement> MoleTaskContentMappings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AvailableTaskList, meta=(AllowPrivateAccess=true))
    TArray<UMoleTaskDataAsset*> AvailableTaskList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleTaskTrackingData> TaskTrackingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FMoleActiveTaskStateHandle> UnpooledTaskAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMoleActiveTaskStateHandle, UMoleTaskDataAsset*> TaskPoolDependencyToTaskAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StartOfInUseTasksIdx;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumTasksPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumScoreRequiredPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldEnemiesReceiveTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreData, meta=(AllowPrivateAccess=true))
    FMoleTaskScoreEventData ScoreData;
    
public:
    UMoleTaskManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ScoreData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailableTaskList();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetTaskActorsMatchingGameplayTagContainer(const UObject* WorldContextObject, FGameplayTagContainer TaskTagContainer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetTaskActorsMatchingGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskRootTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetTaskActorForGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UMoleTaskLinkComponent*> GetTaskActorComponentsMatchingGameplayTagContainer(const UObject* WorldContextObject, FGameplayTagContainer TaskTagContainer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UMoleTaskLinkComponent*> GetTaskActorComponentsMatchingGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskRootTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMoleTaskLinkComponent* GetTaskActorComponentForGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetMoleScoreGoal(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetMoleCurrentScore(const UObject* WorldContextObject);
    
};

