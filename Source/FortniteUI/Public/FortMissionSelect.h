#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Types/SlateEnums.h"
#include "MissionSelectNavigationDelegateDelegate.h"
#include "FortMissionSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortMissionSelect : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionSelectNavigationDelegate OnNavigation;
    
    UFortMissionSelect();

    UFUNCTION(BlueprintCallable)
    bool NavigateMissionTiles(EUINavigation Direction);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanCaptureAcceptInput();
    
};

