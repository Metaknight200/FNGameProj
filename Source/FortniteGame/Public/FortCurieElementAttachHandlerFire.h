#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortCurieElementAttachHandler.h"
#include "FortCurieElementAttachHandlerFire.generated.h"

UCLASS(Blueprintable)
class UFortCurieElementAttachHandlerFire : public UFortCurieElementAttachHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BurningRate;
    
public:
    UFortCurieElementAttachHandlerFire();

};

