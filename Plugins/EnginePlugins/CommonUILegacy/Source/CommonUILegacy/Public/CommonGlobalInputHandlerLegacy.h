#pragma once
#include "CoreMinimal.h"
#include "CommonActionHandlerInterface.h"
#include "UObject/Object.h"
#include "CommonGlobalInputHandlerLegacy.generated.h"

UCLASS(Blueprintable)
class COMMONUILEGACY_API UCommonGlobalInputHandlerLegacy : public UObject, public ICommonActionHandlerInterface {
    GENERATED_BODY()
public:
    UCommonGlobalInputHandlerLegacy();


    // Fix for true pure virtual functions not being implemented
};

