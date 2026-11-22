#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "EventMOTD.generated.h"

USTRUCT(BlueprintType)
struct FEventMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FEventMOTD();
};

