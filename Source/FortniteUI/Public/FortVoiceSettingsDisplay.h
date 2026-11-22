#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortVoiceSettingsDisplay.generated.h"

class UCommonButtonLegacy;
class UCommonRichTextBlock;
class UCommonWidgetSwitcherLegacy;
class UFortSettingsListView;
class UHorizontalBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVoiceSettingsDisplay : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_PTTOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_InputDeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_OutputDeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_VoiceEnabledView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* VoiceEnabledView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* VoiceDisabledView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_PTTKeybind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_OpenSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_EnableVoiceChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingsListView* ListView_VoiceSettings;
    
public:
    UFortVoiceSettingsDisplay();

};

