#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "CreativeMOTD.generated.h"

USTRUCT(BlueprintType)
struct FCreativeMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FCreativeMOTD();
};

