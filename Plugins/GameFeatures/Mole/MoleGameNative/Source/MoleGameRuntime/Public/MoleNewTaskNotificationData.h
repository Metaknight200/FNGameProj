#pragma once
#include "CoreMinimal.h"
#include "EMoleNewTaskNotificationType.h"
#include "MoleNewTaskNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FMoleNewTaskNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoleNewTaskNotificationType NotificationType;
    
    MOLEGAMERUNTIME_API FMoleNewTaskNotificationData();
};

