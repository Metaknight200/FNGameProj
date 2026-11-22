#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "SpatialScreenMOTD.generated.h"

USTRUCT(BlueprintType)
struct FSpatialScreenMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FSpatialScreenMOTD();
};

