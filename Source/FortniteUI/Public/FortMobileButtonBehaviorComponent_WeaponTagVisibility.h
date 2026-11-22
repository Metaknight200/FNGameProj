#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagVisibility.h"
#include "FortMobileButtonBehaviorComponent_WeaponTagVisibility.generated.h"

class AFortWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UFortMobileButtonBehaviorComponent_WeaponTagVisibility : public UFortMobileButtonBehaviorComponent_TagVisibility {
    GENERATED_BODY()
public:
    UFortMobileButtonBehaviorComponent_WeaponTagVisibility();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);
    
};

