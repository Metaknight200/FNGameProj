#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "FortPlayerStartWarmup.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerStartWarmup : public APlayerStart {
    GENERATED_BODY()
public:
    AFortPlayerStartWarmup(const FObjectInitializer& ObjectInitializer);

};

