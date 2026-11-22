#pragma once
#include "CoreMinimal.h"
#include "EBattlePassLandingPageSpecialEntryType.generated.h"

UENUM(BlueprintType)
enum class EBattlePassLandingPageSpecialEntryType : uint8 {
    None,
    Subscription,
    CharacterCustomizer,
    SpecialCharacter,
    COUNT,
};

