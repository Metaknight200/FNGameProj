#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "AthenaPlaylistEntry.h"
#include "PlaylistFrontEndData.h"
#include "EFillDisableReason.h"
#include "EServerAccessSetting.h"
#include "ESpectatorQueueType.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMatchmakingOptions.generated.h"

class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortAthenaMatchmakingTile;
class UFortLoadingOnDemandContentModal;
class UHardcoreModifierSelectionScreen;
class UOverlay;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaMatchmakingOptions : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatablePanel> AthenaMatchmakingKnobsModalClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMatchmakingTile> TileItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLoadingOnDemandContentModal> LoadingContentModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHardcoreModifierSelectionScreen> HardcoreChallengesScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* MatchmakingTileGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaPlaylistEntry RepresentedPlaylistCMSEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlaylistFrontEndData RepresentedPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* StandardGameModeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* LTMGameModeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* LTMGameModeBox2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_LTMGameModeBox2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ModeDescriptionScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_HardcoreChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* TeamFillButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* SpectateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ServerPrivacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* MatchmakingKnobsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* MatchmakingWarningText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MatchmakingSmallPoolWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FillDisabledHardcoreModifiersWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_HardcoreModifiersDisabledForPlaylistWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_LimitedPoolsDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScheduleTime;
    
public:
    UFortAthenaMatchmakingOptions();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShowSupportAffiliateButton(bool bIsCreativeLTM);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMMButtonStatusBP(bool bPlaylistIsEnabled, EFillDisableReason FillDisableReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadFillText(const FText& TextToUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpectatorButtonText(ESpectatorQueueType InSpectatorQueueType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetServerAccessText(EServerAccessSetting InServerAccessSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHardcoreModiferButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RepresentedPlaylistChanged(const FPlaylistFrontEndData& NewRepresentedPlaylist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTileDoubleClicked(UCommonButtonLegacy* ButtonClicked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAffiliateUpdated(const FString& AffiliateName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAcceptedPlaylist();
    
    UFUNCTION(BlueprintCallable)
    bool IsLiveSpectateButtonEnabled();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInputTypeChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonGroupSelectionChanged(UCommonButtonLegacy* Button, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlaylistFrontEndData GetCurrentlyRepresentedData() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseMatchmakingOptions();
    
    UFUNCTION(BlueprintCallable)
    void CanceledPlaylist();
    
    UFUNCTION(BlueprintCallable)
    void AcceptedPlaylist();
    
};

