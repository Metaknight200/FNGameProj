#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventMessageTag.h"
#include "ReplicatedMessage.h"
#include "GameplayMessageReplicator.generated.h"

UCLASS(Blueprintable)
class AGameplayMessageReplicator : public AActor {
    GENERATED_BODY()
public:
    AGameplayMessageReplicator(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ServerMessageTriggered(FEventMessageTag Channel, const FReplicatedMessage& MessageData);
    
};

