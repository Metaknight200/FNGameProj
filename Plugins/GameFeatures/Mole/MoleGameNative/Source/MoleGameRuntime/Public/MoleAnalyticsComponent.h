#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent.h"
#include "MoleAnalyticsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleAnalyticsComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
    UMoleAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

};

