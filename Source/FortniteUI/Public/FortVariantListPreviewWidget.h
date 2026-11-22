#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortVariantListPreviewWidget.generated.h"

class UCommonTextBlock;
class UFortVariantPicker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVariantListPreviewWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantPicker* Picker_VariantSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StyleDisclaimer;
    
public:
    UFortVariantListPreviewWidget();

};

