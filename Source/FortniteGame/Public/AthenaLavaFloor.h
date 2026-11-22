#pragma once
#include "CoreMinimal.h"
#include "AthenaFillFloor.h"
#include "AthenaLavaFloor.generated.h"

UCLASS(Blueprintable)
class AAthenaLavaFloor : public AAthenaFillFloor {
    GENERATED_BODY()
public:
    AAthenaLavaFloor(const FObjectInitializer& ObjectInitializer);

};

