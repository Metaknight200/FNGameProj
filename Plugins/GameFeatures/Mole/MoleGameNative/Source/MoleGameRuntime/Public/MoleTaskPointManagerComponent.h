#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "MoleTaskPointManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleTaskPointManagerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UMoleTaskPointManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetTaskPointManager();
    
};

