#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECreativeMannequinAnalyticsInteractType.h"
#include "MannequinAnalyticsComponent.generated.h"

class AFortPlayerController;
class UFortItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MANNEQUINRUNTIME_API UMannequinAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMannequinAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireMannequinAnalytics_Interact(AFortPlayerController* Controller, const ECreativeMannequinAnalyticsInteractType InteractType, const UFortItemDefinition* Character, const UFortItemDefinition* BackBling) const;
    
};

