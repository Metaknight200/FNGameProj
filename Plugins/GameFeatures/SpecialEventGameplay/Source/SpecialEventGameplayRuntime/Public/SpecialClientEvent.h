#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpecialClientEvent.generated.h"

class AFortPlayerControllerAthena;

USTRUCT(BlueprintType)
struct FSpecialClientEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    SPECIALEVENTGAMEPLAYRUNTIME_API FSpecialClientEvent();
};

