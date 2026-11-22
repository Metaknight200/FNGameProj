#pragma once
#include "CoreMinimal.h"
#include "GameHubPlayerSpawningComponent.h"
#include "MoleHubPlayerSpawningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleHubPlayerSpawningComponent : public UGameHubPlayerSpawningComponent {
    GENERATED_BODY()
public:
    UMoleHubPlayerSpawningComponent(const FObjectInitializer& ObjectInitializer);

};

