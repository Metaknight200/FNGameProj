#pragma once
#include "CoreMinimal.h"
#include "EventMessageTag.h"
#include "Components/SlateWrapperTypes.h"
#include "GameplayMessageVisibility.generated.h"

USTRUCT(BlueprintType)
struct FGameplayMessageVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag EventMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility MessageReceivedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility MessageStateClearedVisibility;
    
    FORTNITEUI_API FGameplayMessageVisibility();
};

