#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "FortGameplayCinematicHostWidget.generated.h"

class UAthenaLoadingScreenItemDefinition;
class UCommonActivatablePanelLegacy;

UCLASS(Blueprintable, EditInlineNew)
class SPECIALEVENTGAMEPLAYUI_API UFortGameplayCinematicHostWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatablePanelLegacy> IntroPanelWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatablePanelLegacy> OutroPanelWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition;
    
public:
    UFortGameplayCinematicHostWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPanelDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel);
    
};

