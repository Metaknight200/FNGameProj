#pragma once
#include "CoreMinimal.h"
#include "MoleAssetManagerComponent.h"
#include "MoleUIAssetManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleUIAssetManagerComponent : public UMoleAssetManagerComponent {
    GENERATED_BODY()
public:
    UMoleUIAssetManagerComponent(const FObjectInitializer& ObjectInitializer);

};

