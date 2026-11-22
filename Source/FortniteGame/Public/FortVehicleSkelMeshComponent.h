#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "FortVehicleSkelMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortVehicleSkelMeshComponent : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
    UFortVehicleSkelMeshComponent(const FObjectInitializer& ObjectInitializer);

};

