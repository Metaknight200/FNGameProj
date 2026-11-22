#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_CosmeticBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_CosmeticBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFallbackTag(FGameplayTag& OutFallbackTag);
    
};

