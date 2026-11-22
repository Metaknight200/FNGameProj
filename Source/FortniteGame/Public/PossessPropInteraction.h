#pragma once
#include "CoreMinimal.h"
#include "ObjectInteractionBehavior.h"
#include "PossessPropInteraction.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPossessPropInteraction : public UObjectInteractionBehavior {
    GENERATED_BODY()
public:
    UPossessPropInteraction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteract();
    
};

