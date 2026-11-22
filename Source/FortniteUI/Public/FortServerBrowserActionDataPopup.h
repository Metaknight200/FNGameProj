#pragma once
#include "CoreMinimal.h"
#include "FortServerBrowserActionData.h"
#include "FortServerBrowserActionDataPopup.generated.h"

class UCommonActivatableWidget;

UCLASS(Blueprintable)
class UFortServerBrowserActionDataPopup : public UFortServerBrowserActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> PopupClass;
    
    UFortServerBrowserActionDataPopup();

};

