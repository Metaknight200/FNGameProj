#pragma once
#include "CoreMinimal.h"
#include "MoleQuickChatSelection.h"
#include "MoleQuickChatRawMessage.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleQuickChatRawMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText RawMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMoleQuickChatSelection Selection;
    
    MOLEUI_API FMoleQuickChatRawMessage();
};

