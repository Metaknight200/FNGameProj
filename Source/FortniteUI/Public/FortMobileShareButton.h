#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "EFortFortMobileShareButtonOS.h"
#include "FortMobileShareButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMobileShareButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UFortMobileShareButton();

    UFUNCTION(BlueprintCallable)
    void SetShareParams(const FString& URL, const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOSImageEnumSet(EFortFortMobileShareButtonOS OSType);
    
};

