#pragma once
#include "CoreMinimal.h"
#include "MoleQuickChatMessageSummary.generated.h"

class AFortPlayerController;

USTRUCT(BlueprintType)
struct FMoleQuickChatMessageSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* SenderController;
    
    MOLEGAMERUNTIME_API FMoleQuickChatMessageSummary();
};

