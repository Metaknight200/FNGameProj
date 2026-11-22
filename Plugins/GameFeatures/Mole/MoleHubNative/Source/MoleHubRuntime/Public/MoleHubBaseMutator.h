#pragma once
#include "CoreMinimal.h"
#include "GameHubBaseMutator.h"
#include "MoleHubBaseMutator.generated.h"

UCLASS(Blueprintable)
class AMoleHubBaseMutator : public AGameHubBaseMutator {
    GENERATED_BODY()
public:
    AMoleHubBaseMutator(const FObjectInitializer& ObjectInitializer);

};

