#pragma once
#include "CoreMinimal.h"
#include "EMoleNewTaskNotificationType.generated.h"

UENUM(BlueprintType)
enum class EMoleNewTaskNotificationType : uint8 {
    None,
    NewTaskOnly,
    TaskCompletionAndNewTask,
};

