#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureAction.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class GAMEFEATURES_API UGameFeatureAction : public UObject {
    GENERATED_BODY()
public:
    UGameFeatureAction();

};

