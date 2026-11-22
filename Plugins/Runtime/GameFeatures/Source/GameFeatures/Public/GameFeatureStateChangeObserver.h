#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameFeatureStateChangeObserver.generated.h"

UINTERFACE(MinimalAPI)
class UGameFeatureStateChangeObserver : public UInterface {
    GENERATED_BODY()
};

class IGameFeatureStateChangeObserver : public IInterface {
    GENERATED_BODY()
public:
};

