#pragma once
#include "CoreMinimal.h"
#include "FortBangWrapper_NUI.h"
#include "FortQuestMapNewBangWrapper.generated.h"

class UCommonWidgetSwitcherLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_Bangs;
    
public:
    UFortQuestMapNewBangWrapper();

};

