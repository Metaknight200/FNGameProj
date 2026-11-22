#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "WebsiteMOTD.generated.h"

USTRUCT(BlueprintType)
struct FWebsiteMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FWebsiteMOTD();
};

