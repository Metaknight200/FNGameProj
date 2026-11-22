#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Types/SlateEnums.h"
#include "FortMultiFactorAuthWidget.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMultiFactorAuthWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditText_MultiFactorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Prompt;
    
public:
    UFortMultiFactorAuthWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

