#include "FortGlobalUIContext.h"
#include "Templates/SubclassOf.h"

UFortGlobalUIContext::UFortGlobalUIContext() {
    this->bShouldSubgameSelectStartOnCampaignUpsell = false;
    this->AthenaMatchReadyNotificationWidget = NULL;
    this->ActiveContextSpecificHelpItem = NULL;
    this->bIsUIVisible = false;
    this->bShowRateWidget = false;
    this->bQuestMapTabRequested = false;
}

void UFortGlobalUIContext::UnregisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions) {
}

void UFortGlobalUIContext::UnregisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction) {
}

void UFortGlobalUIContext::UnregisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow) {
}

void UFortGlobalUIContext::UnbindToFeatureState(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate) {
}

void UFortGlobalUIContext::TetherChanged(bool bIsTethered) {
}

bool UFortGlobalUIContext::ShowWebURL(const FString& URL, const EFortUrlType URLType) {
    return false;
}

bool UFortGlobalUIContext::ShowVehicleHealthBarOnPlayerHUD() const {
    return false;
}

bool UFortGlobalUIContext::ShowCreativeContentDownloadDialog(const FCreativeDownloadDialogResult& OnSubGameContentReadyCallback, const FCreativeDownloadDialogResult& OnSubGameContentCanceledCallback) {
    return false;
}

void UFortGlobalUIContext::ShowConsoleAccountPicker(const int32 ControllerIndex, const FConsoleAccountPickerResult& CompletionDelegate) {
}

bool UFortGlobalUIContext::ShouldShowRateWidget() const {
    return false;
}

bool UFortGlobalUIContext::ShouldShowPhoenixDisplay() const {
    return false;
}

void UFortGlobalUIContext::SetRatingWidgetFeedbackTitle(const FText& Title) {
}

void UFortGlobalUIContext::SetInputMode(EFortInputMode InMode) {
}

void UFortGlobalUIContext::SetHideStwItemRefundHelp(bool bInHideHelp) {
}

void UFortGlobalUIContext::SetHidePerkRecombobulatorHelp(bool bInHideHelp) {
}

void UFortGlobalUIContext::SetCurrentInputPresetName(const FString& InputPresetName) {
}

void UFortGlobalUIContext::SetCurrentCustomInputTemplatePresetName(const FString& InputPresetName) {
}

void UFortGlobalUIContext::SetContextHelpItem(UFortHelpItem* ContextSpecificHelpItem) {
}

void UFortGlobalUIContext::SendLeaveZoneAnalytic() {
}

void UFortGlobalUIContext::SendExperienceRatingAnalytic(const FString& RatingType, const FString& FeedbackSentBy, const FText& RatingQuestion, const int32& StarCount, const FString& GameSessionId, const FString& Comment) {
}

void UFortGlobalUIContext::RunLauncherWithOptions(const FString& Options) {
}

void UFortGlobalUIContext::ReturnToSubGameSelect() {
}

void UFortGlobalUIContext::RegisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions) {
}

void UFortGlobalUIContext::RegisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction) {
}

void UFortGlobalUIContext::RegisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, int32 InFilterPriority) {
}

void UFortGlobalUIContext::RefreshHUDForRespawn() {
}

void UFortGlobalUIContext::QuitGame() {
}

void UFortGlobalUIContext::Logout() {
}

bool UFortGlobalUIContext::IsUsingGamepad() const {
    return false;
}

bool UFortGlobalUIContext::IsPendingLogout() const {
    return false;
}

bool UFortGlobalUIContext::IsMobileApp() const {
    return false;
}

bool UFortGlobalUIContext::IsInZone() const {
    return false;
}

bool UFortGlobalUIContext::IsInOutpostZone() const {
    return false;
}

bool UFortGlobalUIContext::IsGamepadAttached() const {
    return false;
}

bool UFortGlobalUIContext::IsDesktopPlatform() {
    return false;
}

bool UFortGlobalUIContext::IsCustomGamepadConfig(const int32 ConfigIndex) const {
    return false;
}

bool UFortGlobalUIContext::IsCurrentlyShowingLoadingScreen() const {
    return false;
}

bool UFortGlobalUIContext::IsCreativeModeAccessLimited() const {
    return false;
}

bool UFortGlobalUIContext::IsAllContentInstalled(const ESubGame SubGame) {
    return false;
}

void UFortGlobalUIContext::InputActionHoldStopped(FName InputActionName, bool bCompletedSuccessfully) {
}

void UFortGlobalUIContext::InputActionHoldStarted(FName InputActionName, float HoldDuration) {
}

void UFortGlobalUIContext::HideBang(EFortBangType Type) {
}

FName UFortGlobalUIContext::GetUseActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTrapPickerActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTrapHotbarActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTrapConfirmActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

void UFortGlobalUIContext::GetTopLevelHelpItems(TArray<UFortHelpItem*>& ActiveHelpEntries) {
}

FName UFortGlobalUIContext::GetToggleInventoryActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTargetActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetSwitchQuickBarActionName(ECommonInputType OverrideInputType) const {
    return NAME_None;
}

ESubGame UFortGlobalUIContext::GetSubGame() const {
    return ESubGame::Campaign;
}

FString UFortGlobalUIContext::GetSessionId() const {
    return TEXT("");
}

FString UFortGlobalUIContext::GetSessionConnectString() const {
    return TEXT("");
}

UFortUIScoreReport* UFortGlobalUIContext::GetScoreReport() {
    return NULL;
}

FName UFortGlobalUIContext::GetRotatePrimitiveClockwiseActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

UFortQuestManager* UFortGlobalUIContext::GetQuestManager(ESubGame SubGame) const {
    return NULL;
}

FName UFortGlobalUIContext::GetPickerConfirmActionName(EFortPickerMode PickerMode) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetPickerCancelActionName(EFortPickerMode PickerMode) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetPerformBuildingImprovementInteractionActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetPerformBuildingEditInteractionActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

UFortUIMessageManager* UFortGlobalUIContext::GetMessageManager(FName ManagerName, bool& bCreatedNew) {
    return NULL;
}

UFortUIRewardReport* UFortGlobalUIContext::GetLastMissionRewardReport() {
    return NULL;
}

FGameSummaryInfo UFortGlobalUIContext::GetLastGameSummaryInfo() const {
    return FGameSummaryInfo{};
}

FKey UFortGlobalUIContext::GetKeyForAction(FName Action, const bool bForceGamepadKey, FName PresetNameOverride) const {
    return FKey{};
}

void UFortGlobalUIContext::GetKBMPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const {
}

void UFortGlobalUIContext::GetKBMPlayerInputPresetDescriptionForSubGame(ESubGame SubGame, int32 CurrentPreset, FText& InputPresetDescription, FText& InputPresetSubDescription) const {
}

FName UFortGlobalUIContext::GetJumpActionName() const {
    return NAME_None;
}

UTexture2D* UFortGlobalUIContext::GetInputTypeIcon(ECommonInputType InputType) {
    return NULL;
}

int32 UFortGlobalUIContext::GetInputPriority(EInputPriority Priority) const {
    return 0;
}

bool UFortGlobalUIContext::GetInputActionGroup(const FName& ActionName, EFortInputActionGroup& OutInputActionGroup) const {
    return false;
}

FName UFortGlobalUIContext::GetHoagieBoostName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

bool UFortGlobalUIContext::GetHideStwItemRefundHelp() const {
    return false;
}

bool UFortGlobalUIContext::GetHidePerkRecombobulatorHelp() const {
    return false;
}

FName UFortGlobalUIContext::GetFireActionName() const {
    return NAME_None;
}

FText UFortGlobalUIContext::GetFeedbackTitle() const {
    return FText::GetEmpty();
}

void UFortGlobalUIContext::GetFeatureState(const EFortUIFeature Feature, EFortUIFeatureState& OutFeatureState, EFortUIFeatureStateReason& OutReason) {
}

FString UFortGlobalUIContext::GetCustomGamepadInputPresetName() const {
    return TEXT("");
}

FString UFortGlobalUIContext::GetCurrentInputPresetName() const {
    return TEXT("");
}

FName UFortGlobalUIContext::GetCreativeToggleInvulnerablityName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeToggleHeatmapName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeToggleGhostName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeQuickbarActivateClutchName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolMultiSelectName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolEquippedGrabOrLetGoName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolEquippedDeleteName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolEquippedCopyGrabOrDuplicateName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelySwitchAxisName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyRotateCounterclockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyRotateClockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyPushName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyPullName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyExitName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyDuplicateName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyDropToFloorName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyChangePrecisionLevelName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridRotateClockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridMirrorName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridExitName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridDuplicateName() const {
    return NAME_None;
}

FDateTime UFortGlobalUIContext::GetCreativeModeLimitedAccessEndTime() const {
    return FDateTime{};
}

FName UFortGlobalUIContext::GetCreativeFlyUpActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeFlyDownActionName() const {
    return NAME_None;
}

UFortCollectionBookManager* UFortGlobalUIContext::GetCollectionBookManager() const {
    return NULL;
}

FName UFortGlobalUIContext::GetChangeMaterialActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBuildConfirmActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

bool UFortGlobalUIContext::GetBrushForKey(FKey Key, FSlateBrush& Brush) const {
    return false;
}

FName UFortGlobalUIContext::GetAltInteractionActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

void UFortGlobalUIContext::GetAllPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const {
}

FName UFortGlobalUIContext::GetActionForKey(const FName PresetName, const FKey Key, const EFortInputActionGroup InputActionGroup, const bool bIsUsingGamepad) const {
    return NAME_None;
}

void UFortGlobalUIContext::ForceSetFeatureState(EFortUIFeature Feature, EFortUIFeatureState ForcedState, EFortUIFeatureStateReason Reason) {
}

void UFortGlobalUIContext::ExitVehicle() {
}

void UFortGlobalUIContext::EnterVehiclePassenger() {
}

void UFortGlobalUIContext::EnterVehicleDriver() {
}

void UFortGlobalUIContext::DrawAttention(UWidget* BaseWidget) {
}

void UFortGlobalUIContext::DisplayStateContent(bool bDisplay) {
}

void UFortGlobalUIContext::CopyToClipboard(const FString& ClipboardText) {
}

float UFortGlobalUIContext::ContentInstallationProgress(const ESubGame SubGame) const {
    return 0.0f;
}

void UFortGlobalUIContext::ClearRatingWidgetInfo() {
}

void UFortGlobalUIContext::ClearLastMissionReports() {
}

void UFortGlobalUIContext::ClearLastGameSummaryInfo() const {
}

void UFortGlobalUIContext::CheckFlag(const FString& FlagName, EFlagStatus& OutStatus) {
}

bool UFortGlobalUIContext::CanPlay(ESubGame SubGame, FText& DenialReason) const {
    return false;
}

bool UFortGlobalUIContext::CanMatchmake(ESubGame SubGame, FText& DenialReason) {
    return false;
}

void UFortGlobalUIContext::BindToFeatureStateAndInitialize(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate) {
}

bool UFortGlobalUIContext::AllowQuit() const {
    return false;
}

bool UFortGlobalUIContext::AllowLogout() const {
    return false;
}


