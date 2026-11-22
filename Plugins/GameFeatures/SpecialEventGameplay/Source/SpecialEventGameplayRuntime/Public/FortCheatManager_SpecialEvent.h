#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_SpecialEvent.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_SpecialEvent();

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleDisableParachutes(bool bIsDisabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TeleportAllPlayers(int32 SafeZoneIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void StartEventScript(int32 InStartingIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpecialEventClearAdditionalViewpoint();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ShrinkSafeZone();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetMatchTime(int32 NewMatchTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetIsSimulatingDamage(bool bIsSimulating);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SendToNightNight();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ResumeWinCondition();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ResetWinConditionProgressToZero();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ResetWinCondition();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ResetSpecialEventAircraft();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ResetMatchTimeToPrevious();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PlacePlayersInAircraft();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PauseWinCondition(bool bLockScores);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void CloseParachutes();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ChangeWinCondition(float NewGoalScore);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AutobalanceTargetScore();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AddCSVEvent(const FString& CSVEventName);
    
};

