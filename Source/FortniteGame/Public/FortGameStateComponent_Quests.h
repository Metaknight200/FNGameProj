#pragma once
#include "CoreMinimal.h"
#include "FortGameStateComponent.h"
#include "FortGameStateComponent_Quests.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_Quests : public UFortGameStateComponent {
    GENERATED_BODY()
public:
    UFortGameStateComponent_Quests(const FObjectInitializer& ObjectInitializer);

};

