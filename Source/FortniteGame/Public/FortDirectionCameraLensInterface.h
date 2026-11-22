#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FortDirectionCameraLensInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortDirectionCameraLensInterface : public UInterface {
    GENERATED_BODY()
};

class IFortDirectionCameraLensInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetTint(const FLinearColor& Color) PURE_VIRTUAL(SetTint,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetStrength(float InStrength) PURE_VIRTUAL(SetStrength,);
    
};

