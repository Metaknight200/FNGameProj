#pragma once
#include "CoreMinimal.h"
#include "FortPlayspaceComponent.h"
#include "PlayspaceComponent_SpatialGameplay.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayspaceComponent_SpatialGameplay : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
    UPlayspaceComponent_SpatialGameplay(const FObjectInitializer& ObjectInitializer);

};

