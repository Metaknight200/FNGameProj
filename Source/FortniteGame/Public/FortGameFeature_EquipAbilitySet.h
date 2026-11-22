#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_EquipAbilitySet.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_EquipAbilitySet : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_EquipAbilitySet();


    // Fix for true pure virtual functions not being implemented
};

