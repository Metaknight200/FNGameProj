#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortCosmeticLoadoutCardButton.generated.h"

class UFortCosmeticLoadoutCard;

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticLoadoutCardButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutCard* Card_Loadout;
    
    UFortCosmeticLoadoutCardButton();

};

