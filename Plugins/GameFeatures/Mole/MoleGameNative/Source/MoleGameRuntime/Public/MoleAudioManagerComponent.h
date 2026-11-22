#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent.h"
#include "MoleAudioManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleAudioManagerComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
    UMoleAudioManagerComponent(const FObjectInitializer& ObjectInitializer);

};

