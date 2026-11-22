#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ETimerDeviceState.h"
#include "EWidgetInterfaceTimerStatus.h"
#include "FortCreativeDeviceProp.h"
#include "FortTimeWidgetInterface.h"
#include "FortCreativeTimerDevice.generated.h"

class AController;
class AFortGameState;
class AFortVolume;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortCreativeTimerDevice : public AFortCreativeDeviceProp, public IFortTimeWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerDisplayUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortVolume* Volume;
    
public:
    AFortCreativeTimerDevice(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TimerStart(AController* TrackedPlayer, float Duration, float TimeUntilUrgency);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TimerSetState(AController* TrackedPlayer, ETimerDeviceState NewState, bool bLoadingFromSave);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TimerResume(AController* TrackedPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TimerPause(AController* TrackedPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TimerClearHandles(AController* TrackedPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerRequestDisplayUpdate(AController* TrackedPlayer, const TArray<AController*>& PlayersToUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerRequestClearDisplay(const TArray<AController*>& PlayersToUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveTrackedTimer(AController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnUrgencyTimeReached(AController* TrackedPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerStateChanged(AController* TrackedPlayer, const FTimerHandle& TimerHandle, ETimerDeviceState CurrentState, ETimerDeviceState PreviousState, bool bLoadingFromSave);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerCompleted(AController* TrackedPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnServerDisplayUpdateTimerCompleted(AController* TrackedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* GameState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetTrackedPlayers(TArray<AController*>& OutTrackedPlayers) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetTimerState(AController* TrackedPlayer, ETimerDeviceState& OutState) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetTimerRemaining(AController* TrackedPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayUpdate(uint8 CurrentState, float ServerTimeFinished);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CreateTrackedTimer(AController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTrackedTimers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearDisplay();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastUpdateToHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_IsHUDVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText BP_GetLabelText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName BP_GetDisplayTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BP_GetClientTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EWidgetInterfaceTimerStatus BP_GetClientCurrentStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTimerDeviceToVolume();
    

    // Fix for true pure virtual functions not being implemented
};

