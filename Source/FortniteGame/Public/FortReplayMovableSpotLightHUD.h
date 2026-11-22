#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FortReplayMovableSpotLightHUD.generated.h"

UCLASS(Blueprintable, HideDropdown, NonTransient)
class AFortReplayMovableSpotLightHUD : public AHUD {
    GENERATED_BODY()
public:
    AFortReplayMovableSpotLightHUD(const FObjectInitializer& ObjectInitializer);

};

