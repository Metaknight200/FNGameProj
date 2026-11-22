#pragma once
#include "CoreMinimal.h"
#include "FortWeaponRangedDualForVehicle.h"
#include "FortWeaponRangedDualFerret.generated.h"

class AFortAthenaFerretVehicle;

UCLASS(Blueprintable)
class AFortWeaponRangedDualFerret : public AFortWeaponRangedDualForVehicle {
    GENERATED_BODY()
public:
    AFortWeaponRangedDualFerret(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AFortAthenaFerretVehicle* GetCachedFerretVehicle();
    
};

