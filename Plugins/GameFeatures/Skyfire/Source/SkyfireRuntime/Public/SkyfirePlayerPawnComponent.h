#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "FortItemEntry.h"
#include "FortPawnComponent.h"
#include "SkyfireInMothershipChangedDelegate.h"
#include "SkyfireOnPawnEarnedLootRarityChangedDelegate.h"
#include "SkyfireOnPawnEnteredLootRoomDelegate.h"
#include "SkyfireOnPawnExitInitialPrisonTimeChangedDelegate.h"
#include "SkyfireOnPawnExitLootRoomTimeChangedDelegate.h"
#include "SkyfireOnPawnTeleportToLootRoomTimeChangedDelegate.h"
#include "SkyfireOnTimeUntilTeleportToLootRoomReachedCapDelegate.h"
#include "SkyfirePlayerPawnComponent.generated.h"

class AActor;
class ABuildingContainer;
class AFortAthenaMutator_Skyfire;
class AFortPlayerPawnAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SKYFIRERUNTIME_API USkyfirePlayerPawnComponent : public UFortPawnComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnPawnEnteredLootRoom OnPlayerEnteredLootRoom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnPawnTeleportToLootRoomTimeChanged OnTeleportToLootRoomTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnPawnEarnedLootRarityChanged OnEarnedLootRarityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnTimeUntilTeleportToLootRoomReachedCap OnTimeUntilTeleportToLootRoomReachedCap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnPawnExitLootRoomTimeChanged OnExitLootRoomTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnPawnExitInitialPrisonTimeChanged OnExitInitialPrisonTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireInMothershipChanged OnInMothershipChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Skyfire* CachedSkyfireMutator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeleportToLootRoomTime, meta=(AllowPrivateAccess=true))
    float TeleportToLootRoomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EarnedLootRarity, meta=(AllowPrivateAccess=true))
    EFortRarity EarnedLootRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bInMothership, meta=(AllowPrivateAccess=true))
    bool bInMothership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimeUntilTeleportToLootRoomReachedCapCounter, meta=(AllowPrivateAccess=true))
    uint8 TimeUntilTeleportToLootRoomReachedCapCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExitLootRoomTime, meta=(AllowPrivateAccess=true))
    float ExitLootRoomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExitInitialPrisonTime, meta=(AllowPrivateAccess=true))
    float ExitInitialPrisonTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AbductionTeleportStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> RecordedItemEntries;
    
public:
    USkyfirePlayerPawnComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnQuickBarDataRecorded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveAllPlayspaceActorMarkersOnClient();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeUntilTeleportToLootRoomReachedCapCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeleportToLootRoomTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExitLootRoomTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExitInitialPrisonTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EarnedLootRarity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bInMothership();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLootedContainer(AFortPlayerPawnAthena* FortPlayerPawnAthena, ABuildingContainer* LootedContainer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void MarkPlayspaceActorOnClient(AActor* ActorToBeMarked, const bool bUseHoveredMarkerDetail);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMothership() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeUntilTeleportToLootRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportToLootRoomTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsUntil(const float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExitLootRoomTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExitInitialPrisonTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetEarnedLootRarity() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecordQuickBarData();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerKnockedOutPenaltyComplete();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerKnockedOutOfPlayspace();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerExitingPlayspace(const bool bFromWarpTunnel);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerEnteringPlayspace();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerEnteringMainMap(const AFortPlayerPawnAthena* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerEnteringLootRoom();
    
};

