#pragma once
#include "CoreMinimal.h"
#include "EFortNotificationEntryCompletionStatus.generated.h"

UENUM(BlueprintType)
enum class EFortNotificationEntryCompletionStatus : uint8 {
    New,
    Active,
    Completed,
    MAX,
};

