#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "GameplayTagContainer.h"
#include "AthenaSpatialNavigationButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialNavigationButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraTagToNavigateTo;
    
public:
    UAthenaSpatialNavigationButton();

};

