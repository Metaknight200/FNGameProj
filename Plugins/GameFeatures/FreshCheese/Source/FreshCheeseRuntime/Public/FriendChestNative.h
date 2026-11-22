#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BuildingContainer.h"
#include "XPEventInfo.h"
#include "ScalableFloat.h"
#include "Styling/SlateBrush.h"
#include "FriendChestPlayerActivationPair.h"
#include "FriendChestRoundPacing.h"
#include "FriendChestNative.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class AGameModeBase;
class UFortSimpleMiniMapIndicator;
class UFriendChestAnalytics;
class UInstancedStaticMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFriendChestNative : public ABuildingContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 AssociatedSquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TrigerActivationDelayCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSimpleMiniMapIndicator* MinimapIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstancedLootTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LootTierGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendChestRoundPacing> RoundPacingForSquadSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FFriendChestPlayerActivationPair> ActivationTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFriendChestAnalytics* Analytics;
    
public:
    AFriendChestNative(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SimulateDisconnect(const TArray<FString>& SquadUserIds);
    
public:
    UFUNCTION(BlueprintCallable)
    void RollInstancedLootForSquadMembers(AGameModeBase* GameMode, const uint8 SquadId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetLootTierForAssociatedSquad(bool bOnlyAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshChestState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerRemoved(AFortPlayerPawnAthena* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerAdded(AFortPlayerPawnAthena* Player);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnXpEvent(const FXPEventInfo& XPEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTriggerComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTimeout(const AFortPlayerStateAthena* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPawnDied(AFortPlayerPawn* DeadPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeave(const AFortPlayerStateAthena* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHit(const AFortPlayerStateAthena* Player, const bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnter(const AFortPlayerStateAthena* Player);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerDeadStateChanged(AFortPlayerStateAthena* PlayerState, bool bIsDead);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FTransform GetWeakpointTransformForButtonID(const UInstancedStaticMeshComponent* InstancedStaticMesh, const int32 InstanceIndex, const FVector& WeakpointOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTargetsForNextRound(const int32 SquadSize, const int32 RemainingTargets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAssociatedSquadMembers(bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, TArray<AFortPlayerStateAthena*>& OutSquadMembers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAssociatedSquadID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void CreateIndicators();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearSimulatedDisconnects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float CalculatePlayerChangedAlpha(const int32 NumberInPosition, const int32 Delta, const float Alpha) const;
    
};

