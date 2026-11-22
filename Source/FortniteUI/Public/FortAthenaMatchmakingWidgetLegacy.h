#pragma once
#include "CoreMinimal.h"
#include "EFortLobbyType.h"
#include "EFortMatchmakingViolatorStyle.h"
#include "PlaylistFrontEndData.h"
#include "FortMatchmakingWidgetBase.h"
#include "FortAthenaMatchmakingWidgetLegacy.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortActivatablePanel;
class UFortPlaylistAthena;
class UFortTextButton;
class UProgressBar;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortAthenaMatchmakingWidgetLegacy : public UFortMatchmakingWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMatchmakingViolatorStyle NewModeStyleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HighPriorityEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HighPriorityTournamentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionLockTitle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortActivatablePanel> MatchmakingOptionsClassRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaylistHasSquadFillOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlaylistPrivateMatchOption;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_StartMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CancelContentDownload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MatchmakingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ContentBeaconDownloadContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ContentDownloadProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_MatchmakingHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_MatchmakingMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_PartySizeWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* OptionalTextBlock_BlackoutCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FillStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PrivateMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTextButton* Button_SquadFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTextButton* Button_PrivateMatch;
    
public:
    UFortAthenaMatchmakingWidgetLegacy();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCustomViolatorText(const FText& ModeName, const FText& SubText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShouldShowMatchmakingDetails(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaylistChanged(const FPlaylistFrontEndData& NewPlaylist, const FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaylistActivityChanged(const FPlaylistFrontEndData& NewPlaylist, const FText& ActivityName, EFortLobbyType LobbyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadFillButtonEnabledStateUpdated(const bool bIsLocalPlayerPartyLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayButtonText(const FText& PlayButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCancelButtonText(const FText& CancelButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrivateMatchButtonEnabledStateUpdated(const bool bIsLocalPlayerPartyLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewModeViolatorUpdated(bool bShouldShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingFinishedBlueprint(bool bSuccess, const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAvailablePlaylistsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadFillEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrivateMatchEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetButtonPublicMatchText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetButtonPrivateMatchText() const;
    
};

