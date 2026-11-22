#pragma once
#include "CoreMinimal.h"
#include "FortAnimInstance.h"
#include "FortValetMountedGunAnimInstance.generated.h"

class AFortDagwoodVehicle;
class AFortWeaponRangedForVehicle;

UCLASS(Blueprintable, NonTransient)
class UFortValetMountedGunAnimInstance : public UFortAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortDagwoodVehicle* VehicleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingMountedGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SeatIndexCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimingYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimingPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeaponRangedForVehicle* MountedWeapon;
    
    UFortValetMountedGunAnimInstance();

};

