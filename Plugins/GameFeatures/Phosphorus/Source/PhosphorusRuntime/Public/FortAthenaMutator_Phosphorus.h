#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "ScalableFloat.h"
#include "EPhosphorusPhase.h"
#include "PhosphorusNewSqaudMVPDelegate.h"
#include "PhosphorusPhaseChangedDelegate.h"
#include "PhosphorusRoundAdvancedDelegate.h"
#include "PhosphorusTeamData.h"
#include "FortAthenaMutator_Phosphorus.generated.h"

class AFortAthenaMutator_CustomStormMovement;
class AFortAthenaMutator_PlayerSpawnPod;
class AFortAthenaMutator_SafeZoneOrderOptimize;
class AFortAthenaSupplyDrop;
class AFortPlayerPawn;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class UFortAbilitySet;
class USoundBase;

UCLASS(Blueprintable)
class PHOSPHORUSRUNTIME_API AFortAthenaMutator_Phosphorus : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhosphorusPhaseChanged OnPhosphorusPhaseChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* EjectAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* LeaderAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bKeepWarmupLoadoutsInFirstRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bPutInStasisAtRoundEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PhosphorusPhase, meta=(AllowPrivateAccess=true))
    EPhosphorusPhase PhosphorusPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlayerEnteredStormSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_CustomStormMovement* StormMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SafeZoneOrderOptimize* SafeZoneOrderOptimizeMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPhosphorusTeamData> TeamDataArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InnerLandRadiusPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OuterLandRadiusPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TeamLandWedgeAngleRandPercent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_PlayerSpawnPod* PlayerSpawnPodMutator;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhosphorusRoundAdvanced OnRoundAdvanced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhosphorusNewSqaudMVP OnPhosphorusNewSquadMVP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxExpectedRoundsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AdvanceRoundDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndRoundUIDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PreFirstRoundFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentRound, meta=(AllowPrivateAccess=true))
    int32 CurrentRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndRoundTimeDilationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndRoundDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EmoteAudioFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FScalableFloat NumRoundsToWin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RoundWinningTeamNum;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DesiredSupplyDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropPercentSafeZoneRadiusToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropMinTimeUntilSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropMaxTimeUntilSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaSupplyDrop*> SupplyDrops;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatForcedStart;
    
public:
    AFortAthenaMutator_Phosphorus(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PhosphorusPhase();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRound();
    
    UFUNCTION(BlueprintCallable)
    void OnPrePodLaunch();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEjectedFromPod(AFortPlayerPawnAthena* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnAllPodsLaunched();
    
    UFUNCTION(BlueprintCallable)
    void OnAllPodsLanded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamValid(const uint8 TeamNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamAlive(const uint8 TeamNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnWinningTeam(const AFortPlayerPawnAthena* Pawn) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePawnStormStatusChanged(AFortPlayerPawn* PlayerPawn, bool bIsInSafeZone);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamSize(const uint8 TeamNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateAthena* GetTeamMVP(const uint8 TeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPhosphorusTeamData GetTeamDataCopy(const uint8 TeamNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamDataArray(TArray<FPhosphorusTeamData>& OutTeamDataArray, const bool bMustBeValid, const bool bMustBeAlive, const bool bSortByScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetRoundWinningTeamNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumValidTeams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAliveTeams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLeadingTeamNums(TArray<uint8>& LeadingTeamNums) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_CustomStormMovement* GetCachedStormMutator();
    
private:
    UFUNCTION(BlueprintCallable)
    void FadeToFirstRound();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AudioFadeChangeEvent(bool bFadeOut, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceRound();
    
};

