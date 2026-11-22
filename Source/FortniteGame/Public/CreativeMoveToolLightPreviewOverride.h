#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreativeMoveToolLightPreviewOverride.generated.h"

UINTERFACE(Blueprintable)
class UCreativeMoveToolLightPreviewOverride : public UInterface {
    GENERATED_BODY()
};

class ICreativeMoveToolLightPreviewOverride : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOverrideMoveToolLightPreviewVisibility();
    
};

