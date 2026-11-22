#pragma once
#include "CoreMinimal.h"
#include "FortPawnComponent.h"
#include "DespawnExpiredPawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UDespawnExpiredPawnComponent : public UFortPawnComponent {
    GENERATED_BODY()
public:
    UDespawnExpiredPawnComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DespawnExpired();
    
};

