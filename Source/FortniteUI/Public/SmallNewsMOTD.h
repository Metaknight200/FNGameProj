#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "SmallNewsMOTD.generated.h"

USTRUCT(BlueprintType)
struct FSmallNewsMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FSmallNewsMOTD();
};

