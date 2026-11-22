#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventMessageTag.h"
#include "GameplayMessageRouter.generated.h"

class AActor;
class AGameplayMessageReplicator;

UCLASS(Blueprintable)
class GAMEPLAYMESSAGES_API UGameplayMessageRouter : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameplayMessageReplicator* MessageReplicator;
    
public:
    UGameplayMessageRouter();

protected:
    UFUNCTION(BlueprintCallable)
    void K2_BroadcastMessage(FEventMessageTag Channel, const int32& Message, bool bSaveToChannel, AActor* ActorContext);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidSavedMessage(FEventMessageTag Channel) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSavedMessage(FEventMessageTag Channel);
    
};

