#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "ChallengeMOTD.generated.h"

USTRUCT(BlueprintType)
struct FChallengeMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FChallengeMOTD();
};

