#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonActionCommitedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortBangType.h"
#include "EFortInputActionGroup.h"
#include "EFortPickerMode.h"
#include "ESubGame.h"
#include "FortLocalPlayerSubsystem.h"
#include "GameSummaryInfo.h"
#include "OnEnterVehicleDriverDelegate.h"
#include "OnEnterVehiclePassengerDelegate.h"
#include "OnExitVehicleDelegate.h"
#include "OnInputActionHoldStartedDelegate.h"
#include "OnInputActionHoldStoppedDelegate.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "ConsoleAccountPickerResultDelegate.h"
#include "CreativeDownloadDialogResultDelegate.h"
#include "EFlagStatus.h"
#include "EFortInputMode.h"
#include "EFortUIFeature.h"
#include "EFortUIFeatureState.h"
#include "EFortUIFeatureStateReason.h"
#include "EFortUrlType.h"
#include "EInputPriority.h"
#include "FortBackendVersion.h"
#include "FortUIFeatureStruct.h"
#include "OnKeybindsChangedDelegateDelegate.h"
#include "OnRefreshHUDForRespawnDelegate.h"
#include "OnScoreReportChangedDelegate.h"
#include "OnSubGameChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "UIFeatureStateChangedListenerDelegate.h"
#include "FortGlobalUIContext.generated.h"

class AFortScriptedAction;
class UAthenaMatchReadyDesktopPopup;
class UFortCollectionBookManager;
class UFortHelpItem;
class UFortQuestManager;
class UFortUIMessageManager;
class UFortUIRewardReport;
class UFortUIScoreReport;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UFortGlobalUIContext : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryFortBackendVersionDelegate, FFortBackendVersion, FortBackendVersion);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalPlayerControllerConnectionChangedDelegate, bool, bConnected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadingScreenVisibilityChangedDelegate, bool, IsVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubGameChanged SubGameChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSubgameSelectStartOnCampaignUpsell;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeybindsChangedDelegate OnKeybindsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionHoldStarted OnInputActionHoldStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionHoldStopped OnInputActionHoldStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRefreshHUDForRespawn OnRefreshHUDForRespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterVehicleDriver OnEnterVehicleDriver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterVehiclePassenger OnEnterVehiclePassenger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitVehicle OnExitVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreReportChanged OnScoreReportChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenVisibilityChangedDelegate OnLoadingScreenVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerControllerConnectionChangedDelegate OnLocalPlayerControllerConnectionChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFortUIMessageManager*> MessageManagersByName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFortUIFeature, FFortUIFeatureStruct> Features;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaMatchReadyDesktopPopup* AthenaMatchReadyNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHelpItem* ActiveContextSpecificHelpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUIVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowRateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESubGame, bool> IsAllContentInstalledCacheMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText FeedbackTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime FirstLoginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AddictionMsgTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl CurrentLocalPlayerUniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuestMapTabRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag QuestMapChallengeTabRequested;
    
public:
    UFortGlobalUIContext();

    UFUNCTION(BlueprintCallable)
    void UnregisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void UnbindToFeatureState(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate);
    
    UFUNCTION(BlueprintCallable)
    void TetherChanged(bool bIsTethered);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWebURL(const FString& URL, const EFortUrlType URLType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowVehicleHealthBarOnPlayerHUD() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShowCreativeContentDownloadDialog(const FCreativeDownloadDialogResult& OnSubGameContentReadyCallback, const FCreativeDownloadDialogResult& OnSubGameContentCanceledCallback);
    
    UFUNCTION(BlueprintCallable)
    void ShowConsoleAccountPicker(const int32 ControllerIndex, const FConsoleAccountPickerResult& CompletionDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRateWidget() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPhoenixDisplay() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRatingWidgetFeedbackTitle(const FText& Title);
    
    UFUNCTION(BlueprintCallable)
    void SetInputMode(EFortInputMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetHideStwItemRefundHelp(bool bInHideHelp);
    
    UFUNCTION(BlueprintCallable)
    void SetHidePerkRecombobulatorHelp(bool bInHideHelp);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInputPresetName(const FString& InputPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCustomInputTemplatePresetName(const FString& InputPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetContextHelpItem(UFortHelpItem* ContextSpecificHelpItem);
    
    UFUNCTION(BlueprintCallable)
    void SendLeaveZoneAnalytic();
    
    UFUNCTION(BlueprintCallable)
    void SendExperienceRatingAnalytic(const FString& RatingType, const FString& FeedbackSentBy, const FText& RatingQuestion, const int32& StarCount, const FString& GameSessionId, const FString& Comment);
    
    UFUNCTION(BlueprintCallable)
    void RunLauncherWithOptions(const FString& Options);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToSubGameSelect();
    
    UFUNCTION(BlueprintCallable)
    void RegisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, int32 InFilterPriority);
    
    UFUNCTION(BlueprintCallable)
    void RefreshHUDForRespawn();
    
    UFUNCTION(BlueprintCallable)
    void QuitGame();
    
    UFUNCTION(BlueprintCallable)
    void Logout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingLogout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMobileApp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOutpostZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadAttached() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDesktopPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomGamepadConfig(const int32 ConfigIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyShowingLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeModeAccessLimited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllContentInstalled(const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable)
    void InputActionHoldStopped(FName InputActionName, bool bCompletedSuccessfully);
    
    UFUNCTION(BlueprintCallable)
    void InputActionHoldStarted(FName InputActionName, float HoldDuration);
    
    UFUNCTION(BlueprintCallable)
    void HideBang(EFortBangType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUseActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrapPickerActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrapHotbarActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrapConfirmActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTopLevelHelpItems(TArray<UFortHelpItem*>& ActiveHelpEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetToggleInventoryActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTargetActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSwitchQuickBarActionName(ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubGame GetSubGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionConnectString() const;
    
    UFUNCTION(BlueprintCallable)
    UFortUIScoreReport* GetScoreReport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRotatePrimitiveClockwiseActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestManager* GetQuestManager(ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPickerConfirmActionName(EFortPickerMode PickerMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPickerCancelActionName(EFortPickerMode PickerMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPerformBuildingImprovementInteractionActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPerformBuildingEditInteractionActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable)
    UFortUIMessageManager* GetMessageManager(FName ManagerName, bool& bCreatedNew);
    
    UFUNCTION(BlueprintCallable)
    UFortUIRewardReport* GetLastMissionRewardReport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameSummaryInfo GetLastGameSummaryInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FKey GetKeyForAction(FName Action, const bool bForceGamepadKey, FName PresetNameOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKBMPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKBMPlayerInputPresetDescriptionForSubGame(ESubGame SubGame, int32 CurrentPreset, FText& InputPresetDescription, FText& InputPresetSubDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetJumpActionName() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetInputTypeIcon(ECommonInputType InputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputPriority(EInputPriority Priority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool GetInputActionGroup(const FName& ActionName, EFortInputActionGroup& OutInputActionGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHoagieBoostName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideStwItemRefundHelp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHidePerkRecombobulatorHelp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFireActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFeedbackTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFeatureState(const EFortUIFeature Feature, EFortUIFeatureState& OutFeatureState, EFortUIFeatureStateReason& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCustomGamepadInputPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentInputPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeToggleInvulnerablityName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeToggleHeatmapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeToggleGhostName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeQuickbarActivateClutchName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolMultiSelectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolEquippedGrabOrLetGoName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolEquippedDeleteName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolEquippedCopyGrabOrDuplicateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelySwitchAxisName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyRotateCounterclockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyRotateClockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyPushName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyPullName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyExitName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyDuplicateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyDropToFloorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyChangePrecisionLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridRotateClockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridMirrorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridExitName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridDuplicateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCreativeModeLimitedAccessEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeFlyUpActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeFlyDownActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCollectionBookManager* GetCollectionBookManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetChangeMaterialActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBuildConfirmActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool GetBrushForKey(FKey Key, FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAltInteractionActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FName GetActionForKey(const FName PresetName, const FKey Key, const EFortInputActionGroup InputActionGroup, const bool bIsUsingGamepad) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetFeatureState(EFortUIFeature Feature, EFortUIFeatureState ForcedState, EFortUIFeatureStateReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void EnterVehiclePassenger();
    
    UFUNCTION(BlueprintCallable)
    void EnterVehicleDriver();
    
    UFUNCTION(BlueprintCallable)
    static void DrawAttention(UWidget* BaseWidget);
    
    UFUNCTION(BlueprintCallable)
    void DisplayStateContent(bool bDisplay);
    
    UFUNCTION(BlueprintCallable)
    void CopyToClipboard(const FString& ClipboardText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ContentInstallationProgress(const ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRatingWidgetInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearLastMissionReports();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearLastGameSummaryInfo() const;
    
    UFUNCTION(BlueprintCallable)
    static void CheckFlag(const FString& FlagName, EFlagStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlay(ESubGame SubGame, FText& DenialReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMatchmake(ESubGame SubGame, FText& DenialReason);
    
    UFUNCTION(BlueprintCallable)
    void BindToFeatureStateAndInitialize(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowQuit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowLogout() const;
    
};

