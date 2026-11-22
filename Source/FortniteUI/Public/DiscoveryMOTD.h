#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "DiscoveryMOTD.generated.h"

USTRUCT(BlueprintType)
struct FDiscoveryMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FDiscoveryMOTD();
};

