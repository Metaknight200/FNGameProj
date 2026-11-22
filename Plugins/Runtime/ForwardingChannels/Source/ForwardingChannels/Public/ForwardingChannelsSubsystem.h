#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ForwardingChannelsSubsystem.generated.h"

class IForwardingChannelFactory;
class UForwardingChannelFactory;

UCLASS(Blueprintable, Transient)
class FORWARDINGCHANNELS_API UForwardingChannelsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IForwardingChannelFactory>> ForwardingChannelFactories;
    
public:
    UForwardingChannelsSubsystem();

};

