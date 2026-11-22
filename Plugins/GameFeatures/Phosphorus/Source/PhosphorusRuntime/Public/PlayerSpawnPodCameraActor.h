#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "PlayerSpawnPodCameraActor.generated.h"

UCLASS(Blueprintable)
class APlayerSpawnPodCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    APlayerSpawnPodCameraActor(const FObjectInitializer& ObjectInitializer);

};

