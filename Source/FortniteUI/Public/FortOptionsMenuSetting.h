#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/EngineTypes.h"
#include "ESettingType.h"
#include "SettingValueChangedDelegate.h"
#include "FortOptionsMenuSetting.generated.h"

class UAnalogSlider;
class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortOptionsMenuSetting : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingValueChanged SettingValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TabTooltipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HoverText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TooltipTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinIntegralDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIntegralDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSensitivityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSensitivityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousSettingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayRenderScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideLabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideSpaceRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* Slider_Menu;
    
public:
    UFortOptionsMenuSetting();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSetting(UCommonTextBlock* TooltipTextBlock);
    
    UFUNCTION(BlueprintCallable)
    void HandleCaptureEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleAnalogCaptureEnd(float Value);
    
    UFUNCTION(BlueprintCallable)
    void CenterOnWidget();
    
};

