#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseControllerData.h"
#include "FortInputControllerData.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortInputControllerData : public UCommonInputBaseControllerData {
    GENERATED_BODY()
public:
    UFortInputControllerData();

};

