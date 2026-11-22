#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PlayerSpawnPodData.h"
#include "PlayerSpawnPodOnPawnEjectedFromPodDelegate.h"
#include "PlayerSpawnPodOnPodLandedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_PlayerSpawnPod.generated.h"

class AActor;
class AFortAthenaMutator_SynchronizedTeleport;
class AFortPlayerControllerAthena;
class AFortPlayerStateAthena;
class UActorComponent;
class UFortAbilitySystemComponent;
class UFortCameraMode;
class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_PlayerSpawnPod : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnPodOnPawnEjectedFromPod OnPawnEjectedFromPod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnPodOnPodLanded OnPodLanded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowNativeActionsInPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DuringStasisEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EjectedFromSpawnPodEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockAbilityTagsInStasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementsToHideWhileInPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PreLaunchDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FallDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RouteYawCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RouteYawDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RouteMinXYDistancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RouteMaxXYDistancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StartAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StartAltitudeDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndLocationUpperTraceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndLocationLowerTraceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EjectPawnYawSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EjectPawnPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EjectPawnImpulseMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CanToggleCursorModeInStasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseDropPodsForRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bHidePlayerIndicatorsOfPlayersInPods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bReloadWeaponsOnLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionsToAllowToggleCursorModeInStasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PodLandedGameplayEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bForceBlackScreenOnPodTeleport;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PodDataArray, meta=(AllowPrivateAccess=true))
    TArray<FPlayerSpawnPodData> PodDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_BlockedAbilitySystemComponents, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySystemComponent*> BlockedAbilitySystemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySystemComponent*> PreviousBlockedAbilitySystemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldLaunchIndividualPods;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData TeamTeleportLogicData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ViewTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> PawnFallingCameraMode;
    
public:
    AFortAthenaMutator_PlayerSpawnPod(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetViewTarget(AFortPlayerControllerAthena* Controller, AActor* ViewTarget, const FViewTargetTransitionParams& ViewTargetTransitionParams, const bool bDestroyOldViewTarget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSingleTeleportComplete(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PodDataArray(TArray<FPlayerSpawnPodData>& OldPodDataArray);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BlockedAbilitySystemComponents();
    
    UFUNCTION(BlueprintCallable)
    void OnPodDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnAllTeleportComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandlePodLanded(UActorComponent* InComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPodDataForID(const int32 ID, FPlayerSpawnPodData& OutPodData, const FString& ContextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPodDataForActor(const AActor* Actor, FPlayerSpawnPodData& OutPodData, const FString& ContextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallDuration() const;
    
};

