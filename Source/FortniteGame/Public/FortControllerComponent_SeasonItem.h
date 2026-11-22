#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EAthenaSeasonMapIconState.h"
#include "FortControllerComponent_SeasonItem.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_SeasonItem : public UActorComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_SeasonItem(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAthenaSeasonItemMapIconState(const FGameplayTag& ItemTag, const EAthenaSeasonMapIconState IconState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetAthenaSeasonItemMapIconState(const FGameplayTag& ItemTag, const EAthenaSeasonMapIconState IconState);
    
};

