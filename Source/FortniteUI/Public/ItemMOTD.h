#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "ItemMOTD.generated.h"

USTRUCT(BlueprintType)
struct FItemMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FItemMOTD();
};

