#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortActivityDetailsSettingsWidget.generated.h"

class UCommonButtonBase;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsSettingsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ToggleSetting;
    
public:
    UFortActivityDetailsSettingsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingChanged(bool NewValue);
    
};

