#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MoleGameplayInputEventData.generated.h"

class AFortPlayerControllerGameplay;

USTRUCT(BlueprintType)
struct FMoleGameplayInputEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InputActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerGameplay* UserController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPressEvent;
    
    MOLEGAMERUNTIME_API FMoleGameplayInputEventData();
};

