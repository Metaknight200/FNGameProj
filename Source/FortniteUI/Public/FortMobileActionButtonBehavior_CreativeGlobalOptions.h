#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_CreativeGlobalOptions.generated.h"

UCLASS(Blueprintable)
class UFortMobileActionButtonBehavior_CreativeGlobalOptions : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCreativeQuickMenuDisplayed;
    
public:
    UFortMobileActionButtonBehavior_CreativeGlobalOptions();

private:
    UFUNCTION(BlueprintCallable)
    void HandleCreativeQuickMenuDisplayedChanged(bool bIsDisplayed);
    
};

