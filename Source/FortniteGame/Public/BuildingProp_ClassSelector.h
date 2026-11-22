#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "BuildingProp_ClassSelector.generated.h"

UCLASS(Blueprintable)
class ABuildingProp_ClassSelector : public ABuildingProp {
    GENERATED_BODY()
public:
    ABuildingProp_ClassSelector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEditMode() const;
    
};

