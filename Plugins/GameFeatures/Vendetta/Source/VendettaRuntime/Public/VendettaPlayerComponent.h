#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortRarity.h"
#include "FortControllerComponent.h"
#include "EVendettaHuntedStatus.h"
#include "OnVendettaActiveBountyPuckGuidChangedDelegate.h"
#include "VendettaActiveBountyTargetDataArray.h"
#include "VendettaAllyTeamCloseToWinningDelegate.h"
#include "VendettaCollectedTeammateBountyDelegate.h"
#include "VendettaEnemyTeamCloseToWinningDelegate.h"
#include "VendettaHunterNearbyDelegate.h"
#include "VendettaHunterStatusChangedDelegate.h"
#include "VendettaHuntersSpawnedDelegate.h"
#include "VendettaLostLeadDelegate.h"
#include "VendettaMasterHunterEliminatedDelegate.h"
#include "VendettaMasterHunterHuntingYouDelegate.h"
#include "VendettaMasterHunterNearbyDelegate.h"
#include "VendettaMasterHunterSpawnedDelegate.h"
#include "VendettaNonTargetEliminatedDelegate.h"
#include "VendettaOnRespawnDelegate.h"
#include "VendettaOwnBountyCollectedByTeammateDelegate.h"
#include "VendettaPickedUpCreditsDelegate.h"
#include "VendettaPlayerHuntedStatusArray.h"
#include "VendettaTargetEliminatedDelegate.h"
#include "VendettaTargetMarkedStatusData.h"
#include "VendettaTargetNearbyDelegate.h"
#include "VendettaTookLeadDelegate.h"
#include "VendettaPlayerComponent.generated.h"

class AFortAthenaMutator_Vendetta;
class AFortPlayerControllerZone;
class AFortPlayerStateAthena;
class UGenericMessageQueue;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVendettaPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetMarkedStatusData, meta=(AllowPrivateAccess=true))
    FVendettaTargetMarkedStatusData TargetMarkedStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVendettaHuntedStatus HuntedStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVendettaHuntedStatus MasterHunterHuntedStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HunterStatus, meta=(AllowPrivateAccess=true))
    EVendettaHuntedStatus HunterStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVendettaActiveBountyPuckGuidChanged OnVendettaActiveBountyPuckGuidChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaTargetEliminated OnTargetEliminated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaNonTargetEliminated OnNonTargetEliminated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaOwnBountyCollectedByTeammate OnOwnBountyCollectedByTeammate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaCollectedTeammateBounty OnCollectedTeammateBounty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaTargetNearby OnTargetNearby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaHunterNearby OnHunterNearby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaHuntersSpawned OnHuntersSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaMasterHunterSpawned OnMasterHunterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaMasterHunterHuntingYou OnMasterHunterHuntingYou;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaMasterHunterEliminated OnMasterHunterEliminated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaMasterHunterNearby OnMasterHunterNearby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaOnRespawn OnRespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaTookLead OnTookLead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaLostLead OnLostLead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaHunterStatusChanged OnHunterStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEnemyTeamCloseToWinning OnEnemyTeamCloseToWinning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaAllyTeamCloseToWinning OnAllyTeamCloseToWinning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaPickedUpCredits OnPickedUpCredits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericMessageQueue* TopUIMessageQueue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SquadmateHuntedStatuses, meta=(AllowPrivateAccess=true))
    FVendettaPlayerHuntedStatusArray SquadmateHuntedStatuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ManagingMutator, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Vendetta* ManagingMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveBountyPuckGuid, meta=(AllowPrivateAccess=true))
    FGuid ActiveBountyPuckGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVendettaActiveBountyTargetDataArray ActiveBountyTargetDataArray;
    
public:
    UVendettaPlayerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveBountyPuckGuid(FGuid InBountyPuckGuid, bool bPreviousBountyWasCompleted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetMarkedStatusData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadmateHuntedStatuses();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ManagingMutator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HunterStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveBountyPuckGuid();
    
    UFUNCTION(BlueprintCallable)
    void HandleCreditsPickedUp(AFortPlayerStateAthena* Player, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void HandleClientStartedRespawn(AFortPlayerControllerZone* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void HandleClientLandedFromBus(AFortPlayerControllerZone* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void HandleBountyPuckRarityChanged(FGuid TrackerGuid, EFortRarity NewRarity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMasterHunterCurrentTokens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Vendetta* GetManagingMutator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateAthena* GetActiveBountyPuckTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetActiveBountyPuckGuid() const;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayDeathMusic(USoundBase* DeathMusic);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnKilledNonTarget(const AFortPlayerStateAthena* VictimPlayerState, const int32 VictimRewardValue);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnBountyPuckTargetDied(const AFortPlayerStateAthena* VictimPlayerState, const AFortPlayerStateAthena* KillerPlayerState, const AFortPlayerStateAthena* NewTargetPlayerState, const int32 VictimRewardValue, const int32 VictimBonusValue);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnBountyPuckReceivedByAlly(const AFortPlayerStateAthena* BountyPuckTargetPlayerState, const AFortPlayerStateAthena* ReceiverPlayerState, int32 BonusRewardValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearActiveBountyPuckGuid();
    
};

