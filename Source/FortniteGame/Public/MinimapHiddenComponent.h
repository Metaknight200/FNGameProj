#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MinimapHiddenComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMinimapHiddenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMinimapHiddenComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PrepareForCapture();
    
};

