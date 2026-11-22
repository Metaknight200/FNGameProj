#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_WeaponAbility.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_WeaponAbility : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_WeaponAbility();

private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityTrigger(const FGameplayTag Tags, int32 Count);
    
};

