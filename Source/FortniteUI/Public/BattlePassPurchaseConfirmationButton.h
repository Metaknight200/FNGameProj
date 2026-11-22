#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "BattlePassPurchaseConfirmationButton.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UBattlePassPurchaseConfirmationButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FinalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PurchaseTitle;
    
public:
    UBattlePassPurchaseConfirmationButton();

};

