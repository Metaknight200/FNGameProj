#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "CreativeMoveToolTarget.h"
#include "FortCreativeDeviceProp.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortCreativeDeviceProp : public ABuildingProp, public ICreativeMoveToolTarget {
    GENERATED_BODY()
public:
    AFortCreativeDeviceProp(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

