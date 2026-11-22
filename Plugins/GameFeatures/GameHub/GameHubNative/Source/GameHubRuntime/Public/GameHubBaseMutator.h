#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "GameHubBaseMutator.generated.h"

UCLASS(Blueprintable)
class GAMEHUBRUNTIME_API AGameHubBaseMutator : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    AGameHubBaseMutator(const FObjectInitializer& ObjectInitializer);

};

