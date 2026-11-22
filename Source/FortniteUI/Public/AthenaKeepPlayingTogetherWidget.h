#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "AthenaKeepPlayingTogetherWidget.generated.h"

class UAthenaIGMSquadDisplayWidget;
class UCommonActivatableWidgetSwitcher;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UPanelWidget;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaKeepPlayingTogetherWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToLobbyDelayOnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaIGMSquadDisplayWidget* SquadDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_OptIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_OptInCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_MatchmakingStatus;
    
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
    
public:
    UAthenaKeepPlayingTogetherWidget();

protected:
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
    void OnExitToLobbyCountdownProgressed(float CountdownValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSkipClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOptInClicked();
    
};

