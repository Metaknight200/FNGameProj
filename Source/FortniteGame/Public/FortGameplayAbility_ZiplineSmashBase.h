#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_ZiplineSmashBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFortGameplayAbility_ZiplineSmashBase : public UFortGameplayAbility {
    GENERATED_BODY()
public:
    UFortGameplayAbility_ZiplineSmashBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAsyncBreakNearbyStructuresOverlap(const TArray<AActor*>& OverlapActors);
    
    UFUNCTION(BlueprintCallable)
    void BeginAsyncBreakNearbyStructuresOverlap(const FVector BoxPos, const FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore);
    
};

