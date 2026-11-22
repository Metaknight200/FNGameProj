#pragma once
#include "CoreMinimal.h"
#include "GameHubPlayspace.h"
#include "MoleHubPlayspace.generated.h"

UCLASS(Blueprintable)
class AMoleHubPlayspace : public AGameHubPlayspace {
    GENERATED_BODY()
public:
    AMoleHubPlayspace(const FObjectInitializer& ObjectInitializer);

};

