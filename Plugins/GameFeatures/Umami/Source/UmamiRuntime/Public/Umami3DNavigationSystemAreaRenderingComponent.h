#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "Umami3DNavigationSystemAreaRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUmami3DNavigationSystemAreaRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UUmami3DNavigationSystemAreaRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

