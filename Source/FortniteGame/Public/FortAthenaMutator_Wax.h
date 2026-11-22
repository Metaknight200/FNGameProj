#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhase.h"
#include "EWaxState.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "WaxEventSignatureDelegate.h"
#include "WaxEventSignature_NoParamsDelegate.h"
#include "WaxNoStormZone.h"
#include "WaxPartOverrideData.h"
#include "WaxPlayerDataArray.h"
#include "WaxRespawnLogicData.h"
#include "WaxTokenFlashSignatureDelegate.h"
#include "WaxVisibilityModifiers.h"
#include "FortAthenaMutator_Wax.generated.h"

class AActor;
class AFortAthena_WaxToken;
class AFortGameModePickup_Wax;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class UAudioComponent;
class UFortQuestItemDefinition;
class UFortWorldItemDefinition;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Wax : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Leaders, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> TeamLeadersInOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PlayerLeadersInOrder;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature OnFlyingTokensApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature OnTokensAwarded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature OnTokensCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature_NoParams PodiumChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxTokenFlashSignature OnPendingFlashes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxEventSignature_NoParams AnyTokenChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RespawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GameEndMusicSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* GameEndMusicAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LeaderSpecialActorCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthena_WaxToken> TokenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameModePickup_Wax> TokenPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* PickupItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TokenSpawnBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensToStartWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokenPercentDropOnElim_Podium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokenPercentDropOnElim_Commoner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensAwardedPerEliminationOnKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowTeamFlashAt_One;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowTeamFlashAt_Two;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowTeamFlashAt_Three;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowEnemyFlashAt_One;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowEnemyFlashAt_Two;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThresholdShowEnemyFlashAt_Three;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BigTokenAmountForSingleElim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MediumTokenAmountForSingleElim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseLiteralTokenAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokensToMarkPermanentlyMaxTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DrawSecondGenTokensOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LivesToStartPlayerWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PodiumSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaxNoStormZone> NoStormZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EWaxState, FWaxVisibilityModifiers> VisibilityModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EWaxState, FScalableFloat> StateTokenCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DistanceConsideredNearbyForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VelocityConsideredMovingForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeConsideredRecentForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaxRespawnLogicData RespawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaxStateAboveWhichLeadersDrawSpecialStyleOnUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaxLeadersMaximumCompassDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MapLeaderboard_TeamBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AboutToWinPopup_TeamBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PodiumIcons_TeamBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> CompassBrushesByPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> SquadmateCompassBrushesByPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> MapBrushesByPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> SquadmateMapBrushesByPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseSquadPlacementIconsOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseSquadPlacementIconsOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SquadPlacementScaleOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SquadPlacementOffsetPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TokenThresholdAboveWhichToWarn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_EnemyToWinSoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_PlayerToWinSoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_PlayerTookWaxLead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_PlayerLostWaxLead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_WaxLeaderChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaGameMessageData> BusGameMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShowTextOnEnteringSpecialBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsToSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaxPartOverrideData> OverrideParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldSwapSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWaxPlayerDataArray PlayerData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AFortPlayerStateAthena>, int32> StatDataNumTokensCollectedByPlayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItemDefinition*> NumTokensCollectedStatTrackingQuestItemDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NumTokensCollectedStatTrackingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortGameModePickup_Wax*> WaxPickupsToDraw;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerStateAthena*, float> TimeSinceLastFireMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* LastEligibleLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PlayersAboveThresholdByPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, AFortPlayerStateAthena*> TopPlayerInSquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RegisteredWaxPickupActors;
    
public:
    AFortAthenaMutator_Wax(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeUI_Visible(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable)
    void SendTokenStats();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Leaders();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNewGamePhase(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTeamLeader(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerMovingOrShooting(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInPodium(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWaxUI_Info(float& MyPercent, float& Enemy1Pct, float& Enemy2Pct, float& Enemy3Pct, int32& MyRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTokensToWinBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTokensForPlayer(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTeamScore(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTeamPlacement(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerPlacement(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerLives(const AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWaxState GetCurrentWaxState(const AFortPlayerStateAthena* Player) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CommonDeadPawn(AFortPlayerPawnAthena* DeadPawn);
    
};

