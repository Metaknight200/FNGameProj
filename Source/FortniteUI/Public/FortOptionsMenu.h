#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "ESettingTab.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "FortActivatablePanel.h"
#include "FortTabButtonLabelInfo.h"
#include "Templates/SubclassOf.h"
#include "FortOptionsMenu.generated.h"

class UCommonBorder;
class UCommonBorderStyle;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UCommonWidgetSwitcherLegacy;
class UFortOptionsTab;
class UFortProgressModal;
class UFortTabListWidgetBase;
class UNamedSlot;
class USizeBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortOptionsMenu : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ApplyInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ApplyAndTestInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TestInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleModeInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ResetToDefaultInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InputsResetToDefaulInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackDataInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> VideoTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortOptionsTab> TabVideoOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> GameplayTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> HUDTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> TouchOptionsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> KeyboardMouseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> ControllerSensitivityTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortOptionsTab> ControllerSettingsOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> AudioOptionsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> InputTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortOptionsTab> TabInputOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> GamepadTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> GamepadTabClassV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortOptionsTab> TabGamepadOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortOptionsTab> TabGamepadOptionsV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortOptionsTab> AccountTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortOptionsTab> TabAccountOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> BorderBackgroundStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortProgressModal> ProgressModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonLegacy> IconTabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressModal* SavingModalInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TabIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTabButtonLabelInfo> TabLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortOptionsTab*> TabWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ResetVideoOptionsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush VideoBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush GameplayBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush GameUIBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TouchOptionsBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush KeyboardMouseBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ControllerSensitivityBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush AudioBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InputBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush GamepadOptionsBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush AccountPrivacyBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDHideOnMenuTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVideoTabSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyVisible;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_HeadingLeto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* SettingTabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* SavingLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* VideoSettingsAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* VideoSettingsCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_Background;
    
public:
    UFortOptionsMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateHeaderTextByTabId(FName TabId);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateBasedOnActiveWidget(UWidget* ActiveWidget, bool bShouldCenterOnTab);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllOptionTabs();
    
private:
    UFUNCTION(BlueprintCallable)
    bool ShowVideoOptions();
    
    UFUNCTION(BlueprintCallable)
    void ShowUnsavedConfirmation();
    
    UFUNCTION(BlueprintCallable)
    bool ShowTouchAndMotionOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowNewControllerSenseOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowInputOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowControllerOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowAccountOptions();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseNewControllerSettings() const;
    
    UFUNCTION(BlueprintCallable)
    void SetBackground();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetApplyOrTest(bool bShowApply);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetGameOptionsToDefault(UFortOptionsTab* OptionsTab);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetClientHUDSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionHandlerStates(bool bIsBackButtonDisabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestTab(FName TabId, const FString& SettingDevName);
    
    UFUNCTION(BlueprintCallable)
    void OpenSettingsIfSaved();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVideoCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoAccept();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleModeInternal(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnTest(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnTabSettingChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsTabListPopulated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRestoreToInitial();
    
    UFUNCTION(BlueprintCallable)
    void OnResetToDefaults(int32 PresetToSet);
    
    UFUNCTION(BlueprintCallable)
    void OnResetToDefaultInternal(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnReset();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputsResetToDefault();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInputResetToDefaultInternal(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnBackInternal(bool& PassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBack();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnApplySettingsInternal(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnApplyAndTest(bool& PassThrough);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyTabsOfActivationState(UFortOptionsTab* ActivatedTab);
    
private:
    UFUNCTION(BlueprintCallable)
    bool NeedsVideoChangeConfirmation();
    
    UFUNCTION(BlueprintCallable)
    bool NeedsLanguageChangeConfirmation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MenuInitialize();
    
    UFUNCTION(BlueprintCallable)
    void HandleTabSelected(FName TabId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTabGamepadConfigActionHandlerStates();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleResetAvailableActionHandlerStates();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleReset();
    
    UFUNCTION(BlueprintCallable)
    void HandleApply();
    
    UFUNCTION(BlueprintCallable)
    void HandleActiveWidgetChanged(UWidget* ActiveWidget, int32 ActiveWidgetIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExitIfTabSaved();
    
    UFUNCTION(BlueprintCallable)
    void ClearCachedEula();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CenterOnActiveTab();
    
private:
    UFUNCTION(BlueprintCallable)
    void ApplySettingss();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddTabs(TSubclassOf<UFortOptionsTab> WidgetClass, const FText& DisplayName, FName NameId, const FSlateBrush& Icon, ESettingTab TabType);
    
};

