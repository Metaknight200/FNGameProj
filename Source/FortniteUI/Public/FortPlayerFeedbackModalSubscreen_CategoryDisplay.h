#pragma once
#include "CoreMinimal.h"
#include "FortPlayerFeedbackModalSubscreenBase.h"
#include "FortPlayerFeedbackModalSubscreen_CategoryDisplay.generated.h"

class UCommonButtonGroupBase;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalSubscreen_CategoryDisplay : public UFortPlayerFeedbackModalSubscreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* CategoryButtons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* Buttons_DropdownCategories;
    
public:
    UFortPlayerFeedbackModalSubscreen_CategoryDisplay();

};

