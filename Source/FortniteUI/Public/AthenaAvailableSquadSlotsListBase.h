#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortMinigameState.h"
#include "FortHUDElementWidget.h"
#include "AthenaAvailableSquadSlotsListBase.generated.h"

class AFortMinigame;
class AFortPlayerStateAthena;
class AFortVolume;
class APlayerState;
class UAthenaPlayerViewModel;
class UDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaAvailableSquadSlotsListBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfAvailableSquadSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysDisplayTopEntryAsDetailed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_AvailableSlotsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* CachedPlayerVM;
    
public:
    UAthenaAvailableSquadSlotsListBase();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSquadFromMinigameOptionChange();
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsTeamMiniGameOnMinigameVolumeChanged(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsTeamMiniGameOnGameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadMemberDisconnected(const AFortPlayerStateAthena* Player);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerUniqueIdReplicated(const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerExitVolume(APlayerState* ClientPlayerState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnterVolume(APlayerState* ClientPlayerState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameMemberChanged(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS);
    
};

