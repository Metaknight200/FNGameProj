#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "FortWeaponFxComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortWeaponFxComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UFortWeaponFxComponent(const FObjectInitializer& ObjectInitializer);

};

