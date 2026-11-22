#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ModInteractCategory.generated.h"

USTRUCT(BlueprintType)
struct VALETMODSRUNTIME_API FModInteractCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InteractSockets;
    
    FModInteractCategory();
};

