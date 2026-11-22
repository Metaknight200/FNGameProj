#include "FortOptionsMenu.h"
#include "Templates/SubclassOf.h"

UFortOptionsMenu::UFortOptionsMenu() {
    this->VideoTabClass = NULL;
    this->GameplayTabClass = NULL;
    this->HUDTabClass = NULL;
    this->TouchOptionsClass = NULL;
    this->KeyboardMouseClass = NULL;
    this->ControllerSensitivityTabClass = NULL;
    this->AudioOptionsClass = NULL;
    this->InputTabClass = NULL;
    this->GamepadTabClass = NULL;
    this->GamepadTabClassV2 = NULL;
    this->AccountTabClass = NULL;
    this->BorderBackgroundStyle = NULL;
    this->ProgressModalClass = NULL;
    this->IconTabButtonClass = NULL;
    this->SavingModalInstance = NULL;
    this->bVideoTabSelected = false;
    this->bApplyVisible = false;
    this->SizeBox_HeadingLeto = NULL;
    this->TabList_Categories = NULL;
    this->SettingTabSwitcher = NULL;
    this->Text_Title = NULL;
    this->SavingLayer = NULL;
    this->Message = NULL;
    this->Button_Close = NULL;
    this->VideoSettingsAccept = NULL;
    this->VideoSettingsCancel = NULL;
    this->Border_Background = NULL;
}

void UFortOptionsMenu::UpdateHeaderTextByTabId(FName TabId) {
}

void UFortOptionsMenu::UpdateBasedOnActiveWidget(UWidget* ActiveWidget, bool bShouldCenterOnTab) {
}

void UFortOptionsMenu::UpdateAllOptionTabs() {
}

bool UFortOptionsMenu::ShowVideoOptions() {
    return false;
}

void UFortOptionsMenu::ShowUnsavedConfirmation() {
}

bool UFortOptionsMenu::ShowTouchAndMotionOptions() {
    return false;
}

bool UFortOptionsMenu::ShowNewControllerSenseOptions() {
    return false;
}

bool UFortOptionsMenu::ShowInputOptions() {
    return false;
}

bool UFortOptionsMenu::ShowControllerOptions() {
    return false;
}

bool UFortOptionsMenu::ShowAccountOptions() {
    return false;
}

bool UFortOptionsMenu::ShouldUseNewControllerSettings() const {
    return false;
}

void UFortOptionsMenu::SetBackground() {
}

void UFortOptionsMenu::SetApplyOrTest(bool bShowApply) {
}

void UFortOptionsMenu::ResetGameOptionsToDefault(UFortOptionsTab* OptionsTab) {
}

void UFortOptionsMenu::ResetClientHUDSettings() {
}

void UFortOptionsMenu::ResetActionHandlerStates(bool bIsBackButtonDisabled) {
}

void UFortOptionsMenu::RequestTab(FName TabId, const FString& SettingDevName) {
}

void UFortOptionsMenu::OpenSettingsIfSaved() {
}

void UFortOptionsMenu::OnVideoCancel() {
}

void UFortOptionsMenu::OnVideoAccept() {
}

void UFortOptionsMenu::OnToggleModeInternal(bool& PassThrough) {
}

void UFortOptionsMenu::OnTest(bool& PassThrough) {
}

void UFortOptionsMenu::OnTabSettingChanged() {
}


void UFortOptionsMenu::OnRestoreToInitial() {
}

void UFortOptionsMenu::OnResetToDefaults(int32 PresetToSet) {
}

void UFortOptionsMenu::OnResetToDefaultInternal(bool& PassThrough) {
}

void UFortOptionsMenu::OnReset() {
}


void UFortOptionsMenu::OnInputResetToDefaultInternal(bool& PassThrough) {
}

void UFortOptionsMenu::OnBackInternal(bool& PassThrough) {
}


void UFortOptionsMenu::OnApplySettingsInternal(bool& PassThrough) {
}

void UFortOptionsMenu::OnApplyAndTest(bool& PassThrough) {
}

void UFortOptionsMenu::NotifyTabsOfActivationState(UFortOptionsTab* ActivatedTab) {
}

bool UFortOptionsMenu::NeedsVideoChangeConfirmation() {
    return false;
}

bool UFortOptionsMenu::NeedsLanguageChangeConfirmation() {
    return false;
}

void UFortOptionsMenu::MenuInitialize() {
}

void UFortOptionsMenu::HandleTabSelected(FName TabId) {
}


void UFortOptionsMenu::HandleResetAvailableActionHandlerStates() {
}

void UFortOptionsMenu::HandleReset() {
}

void UFortOptionsMenu::HandleApply() {
}

void UFortOptionsMenu::HandleActiveWidgetChanged(UWidget* ActiveWidget, int32 ActiveWidgetIndex) {
}

void UFortOptionsMenu::ExitIfTabSaved() {
}

void UFortOptionsMenu::ClearCachedEula() {
}

void UFortOptionsMenu::CenterOnActiveTab() {
}

void UFortOptionsMenu::ApplySettingss() {
}

void UFortOptionsMenu::AddTabs(TSubclassOf<UFortOptionsTab> WidgetClass, const FText& DisplayName, FName NameId, const FSlateBrush& Icon, ESettingTab TabType) {
}


