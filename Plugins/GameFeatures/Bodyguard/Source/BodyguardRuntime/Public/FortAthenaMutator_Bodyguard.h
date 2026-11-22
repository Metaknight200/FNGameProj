#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaCompassIcon.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "ItemAndCount.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "BodyGuardPartOverrideData.h"
#include "BodyguardVIPDeathState.h"
#include "BodyguardVIPPlayerData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Bodyguard.generated.h"

class AActor;
class ABodyguardSoundActor;
class AFortGameplayMutator;
class AFortPlayerStateAthena;
class UCustomCharacterPart;
class UFortItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Bodyguard : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VIPKillAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VIPMultiKillAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BodyguardReviveAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VIPReviveAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VIPSurviveAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VIPMultikillAccoladeThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABodyguardSoundActor* BodyguardSoundPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VIPLostDeathReasonTagContainter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> VIPItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> BodyguardItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortItemDefinition*, int32> ItemToDesiredQuickBarSlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VIPProhibitedItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BodyguardProhibitedItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnZLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VIPBlockedItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush VIPMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinimapPositionShiftPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MiniMapIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon VIPCompassIconBackDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon VIPCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> VIPBlockInteractClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VIPEliminatedEndGameScreenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase StartingVIPPlayerStateChangeTrackingGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UpdateIntervalMonitorVIPPlayerStateChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HideDBNOVIPPlayerIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBodyGuardPartOverrideData> PartOverrideCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartsToSwapInToRemoveExtras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldSwapSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsToSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpecialTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExtraSpecialTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EnemyVIPsRemainingUIDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VIPPlayerDataList, meta=(AllowPrivateAccess=true))
    TArray<FBodyguardVIPPlayerData> VIPPlayerDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VIPDeathStateList, meta=(AllowPrivateAccess=true))
    TArray<FBodyguardVIPDeathState> VIPDeathStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyguardVIPPlayerData PreviousTeamVIPPlayerData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameplayMutator> MutatorClassToWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGameplayMutator* CustomCharacterPartsMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RevealPlayerRole, meta=(AllowPrivateAccess=true))
    uint8 RevealPlayerRole;
    
public:
    AFortAthenaMutator_Bodyguard(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSquadmatesIsReviving(uint8 VIPTeam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShutOffAnyDBNOSounds(const bool bIsDead);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VIPPlayerDataList();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VIPDeathStateList();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RevealPlayerRole();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyVIPOnTeammateDBNO(uint8 VIPTeam);
    
    UFUNCTION(BlueprintCallable)
    void NotifySquadmatesOnVIPTookDamage(uint8 VIPTeam);
    
    UFUNCTION(BlueprintCallable)
    bool IsReviving(const AFortPlayerStateAthena* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTeamVIPPlayerData(const uint8 TeamNum, FBodyguardVIPPlayerData& OutVIPPlayerData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyVIPsRemainingUIDelay() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndGameShutOffAnyDBNOSounds();
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerRolesForSquads();
    
};

