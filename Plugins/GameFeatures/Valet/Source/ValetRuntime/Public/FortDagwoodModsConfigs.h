#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MountedGun.h"
#include "FortDagwoodModsConfigs.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortDagwoodModsConfigs : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMountedGun MountedGunData;
    
    UFortDagwoodModsConfigs();

};

