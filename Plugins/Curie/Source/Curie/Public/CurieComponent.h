#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CurieComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CURIE_API UCurieComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCurieComponent(const FObjectInitializer& ObjectInitializer);

};

