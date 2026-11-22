#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortniteUIEditorDelegateStubs.h"
#include "SpatialFactionChoiceScreen.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionChoiceScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFactionChosenDynamic BP_OnFactionChosen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_FactionChoice1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_FactionChoice2;
    
public:
    USpatialFactionChoiceScreen();

};

