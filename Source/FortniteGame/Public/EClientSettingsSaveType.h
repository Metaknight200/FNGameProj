#pragma once
#include "CoreMinimal.h"
#include "EClientSettingsSaveType.generated.h"

UENUM(BlueprintType)
enum class EClientSettingsSaveType : uint8 {
    Unknown,
    LocalDisk,
    CloudStorage,
};

