#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent.h"
#include "MolePerformanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMolePerformanceComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
    UMolePerformanceComponent(const FObjectInitializer& ObjectInitializer);

};

