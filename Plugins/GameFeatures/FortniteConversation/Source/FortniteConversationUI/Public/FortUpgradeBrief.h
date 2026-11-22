#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponUpgradeInteractionResult.h"
#include "FortItemTransactionBrief.h"
#include "FortUpgradeBrief.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUpgradeBrief : public UFortItemTransactionBrief {
    GENERATED_BODY()
public:
    UFortUpgradeBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeInfoReceived(UFortItem* CurrentWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnableToUpgrade(EFortWeaponUpgradeInteractionResult CannotUpgradeCause);
    
};

