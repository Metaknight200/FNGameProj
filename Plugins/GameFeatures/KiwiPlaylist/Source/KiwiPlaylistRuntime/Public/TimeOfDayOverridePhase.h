#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "TimeOfDayOverridePhase.generated.h"

class AFortTimeOfDayManager;

USTRUCT(BlueprintType)
struct FTimeOfDayOverridePhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortTimeOfDayManager> ManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTimeOfDayManager* ManagerInstance;
    
    KIWIPLAYLISTRUNTIME_API FTimeOfDayOverridePhase();
};

