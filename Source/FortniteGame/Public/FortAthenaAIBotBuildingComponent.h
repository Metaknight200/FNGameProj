#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortAthenaAIBotBuildingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaAIBotBuildingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortAthenaAIBotBuildingComponent(const FObjectInitializer& ObjectInitializer);

};

