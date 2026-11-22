#pragma once
#include "CoreMinimal.h"
#include "FortEntitlementComponent.h"
#include "FortCreativeEntitlementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCreativeEntitlementComponent : public UFortEntitlementComponent {
    GENERATED_BODY()
public:
    UFortCreativeEntitlementComponent(const FObjectInitializer& ObjectInitializer);

};

