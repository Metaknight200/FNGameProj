#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "AthenaKeepPlayingTogetherScreenOverlay.generated.h"

class UAthenaIGMSquadDisplayWidget;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UCommonWidgetSwitcherLegacy;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaKeepPlayingTogetherScreenOverlay : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToLobbyDelayOnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_MatchmakingStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Container_CountdownStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Container_FindingMatchStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Container_Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Container_Waiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MatchmakingElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CountdownCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CountdownNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_WaitingForSquadCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaIGMSquadDisplayWidget* LocalPlayerSquadDisplayWidget;
    
public:
    UAthenaKeepPlayingTogetherScreenOverlay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingForSquadMemberVotesCountdownStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingForSquadMemberVotesCountdownProgressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreMatchmakingCountdownStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreMatchmakingCountdownProgressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingUpdate(FTimespan ElapsedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingFinished(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingErrorMessage(const FText& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeepPlayingTogetherScreenOverlayDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeepPlayingTogetherScreenOverlayActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitToLobbyCountdownProgressed(float CountdownValue);
    
};

