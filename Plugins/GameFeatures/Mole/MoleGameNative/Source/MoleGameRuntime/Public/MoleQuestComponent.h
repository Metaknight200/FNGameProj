#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent.h"
#include "MoleQuestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleQuestComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
    UMoleQuestComponent(const FObjectInitializer& ObjectInitializer);

};

