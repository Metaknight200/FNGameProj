#pragma once
#include "CoreMinimal.h"
#include "EventMessageTag.h"
#include "GameplayMessageReceiverHandle.generated.h"

class UGameplayMessageRouter;

USTRUCT(BlueprintType)
struct GAMEPLAYMESSAGES_API FGameplayMessageReceiverHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameplayMessageRouter> Subsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEventMessageTag Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
public:
    FGameplayMessageReceiverHandle();
};

