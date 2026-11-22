#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortQuestManagerComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UFortQuestManagerComponent : public UObject {
    GENERATED_BODY()
public:
    UFortQuestManagerComponent();

};

