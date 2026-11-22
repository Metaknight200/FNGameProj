#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "FortDynamicHUDPlayerProxy.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortDynamicHUDPlayerProxy : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UFortDynamicHUDPlayerProxy();

};

