#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "SettingsMOTD.generated.h"

USTRUCT(BlueprintType)
struct FSettingsMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FSettingsMOTD();
};

