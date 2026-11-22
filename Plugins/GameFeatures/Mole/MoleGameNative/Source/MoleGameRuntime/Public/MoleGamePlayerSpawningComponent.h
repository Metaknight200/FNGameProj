#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent_PlayerSpawning.h"
#include "MoleGamePlayerSpawningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleGamePlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning {
    GENERATED_BODY()
public:
    UMoleGamePlayerSpawningComponent(const FObjectInitializer& ObjectInitializer);

};

