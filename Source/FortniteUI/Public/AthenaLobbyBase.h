#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortLobbyType.h"
#include "EFortPickerMode.h"
#include "FortLobbyWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaLobbyBase.generated.h"

class UAthenaChallengeInfoPanel;
class UAthenaMissionInfoPanel;
class UCatalogMessaging;
class UCommonBorder;
class UCommonButtonBase;
class UCommonWidgetSwitcherLegacy;
class UContentWidget;
class UEmergencyNoticeBase;
class UFortAthenaMOTDTeaserWidget;
class UFortAthenaMatchmakingWidgetLegacy;
class UFortDivisionLobbyPanel;
class UFortEmotePicker;
class UFortGlobalSeasonResourceWidget;
class UFortPlaylistAthena;
class UFortSquadSelectionMenu;
class UFortTournamentLobbyPanel;
class UStoreToastRequest;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaLobbyBase : public UFortLobbyWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentWidget* Content_MatchmakingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmergencyNoticeBase* Notice_Emergency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaMOTDTeaserWidget* FortAthenaMOTDTeaserWidget_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* LobbyDetails_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTournamentLobbyPanel* LobbyDetails_Tournament;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDivisionLobbyPanel* LobbyDetails_ShowdownDivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMissionInfoPanel* MissionInfo_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_LobbyDetailsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_GenericLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ShadowPlayHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGlobalSeasonResourceWidget* SeasonalResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortEmotePicker> NewEmotePicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatalogMessaging* CatalogMessaging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SquadFormationInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSquadSelectionMenu> SquadFormationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMatchmakingWidgetLegacy> DefaultMatchmakingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaMatchmakingWidgetLegacy* MatchmakingWidget;
    
public:
    UAthenaLobbyBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGenericLinkText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaylistChanged(EFortLobbyType LobbyType, const UFortPlaylistAthena* PlaylistData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingWidgetChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyChanged(const EFortLobbyType LobbyType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept);
    
    UFUNCTION(BlueprintCallable)
    void HandleActiveWidgetChanged(UWidget* NewActiveWidget, int32 WidgetIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayStoreUpdated(UStoreToastRequest* StoreUpdatedRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayGlyphQuestUpdated(int32 NewGlyphs);
    
};

