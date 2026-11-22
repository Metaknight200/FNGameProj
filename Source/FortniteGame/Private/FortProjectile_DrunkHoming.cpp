#include "FortProjectile_DrunkHoming.h"
#include "FortProjectileMoveComp_Drunk.h"

AFortProjectile_DrunkHoming::AFortProjectile_DrunkHoming(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortProjectileMoveComp_Drunk>(TEXT("ProjectileComp0"))) {
}


