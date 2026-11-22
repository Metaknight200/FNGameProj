#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioGameplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class AUDIOGAMEPLAY_API UAudioGameplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAudioGameplayComponent(const FObjectInitializer& ObjectInitializer);

};

