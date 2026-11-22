#pragma once
#include "CoreMinimal.h"
#include "TickableAttributeSetInterface.h"
#include "FortAttributeFuelInterface.h"
#include "FortAttributeSet.h"
#include "FortChargingSet_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortChargingSet_Base : public UFortAttributeSet, public IFortAttributeFuelInterface, public ITickableAttributeSetInterface {
    GENERATED_BODY()
public:
    UFortChargingSet_Base();


    // Fix for true pure virtual functions not being implemented
public:
    virtual void Tick(float DeltaTime) override {}
    virtual bool ShouldTick() const override { return false; }
};

