#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EventMessageTag.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYMESSAGES_API FEventMessageTag : public FGameplayTag {
    GENERATED_BODY()
public:
    FEventMessageTag();
};

