#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortDisplayNameWidget.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDisplayNameWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonDisableReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameTakenText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameInvalidFormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameTooShortText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Enter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditText_DisplayName;
    
public:
    UFortDisplayNameWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    
};

