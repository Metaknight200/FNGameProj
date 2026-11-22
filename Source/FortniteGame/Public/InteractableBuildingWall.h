#pragma once
#include "CoreMinimal.h"
#include "BuildingWall.h"
#include "InteractableBuildingWall.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AInteractableBuildingWall : public ABuildingWall {
    GENERATED_BODY()
public:
    AInteractableBuildingWall(const FObjectInitializer& ObjectInitializer);

};

