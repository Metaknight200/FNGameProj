#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ForwardingChannelFactory.h"
#include "ELiveStreamAnimationRole.h"
#include "Templates/SubclassOf.h"
#include "LiveStreamAnimationSubsystem.generated.h"

class ULiveStreamAnimationDataHandler;

UCLASS(Blueprintable, MinimalAPI, Transient, Config=Engine)
class ULiveStreamAnimationSubsystem : public UGameInstanceSubsystem, public IForwardingChannelFactory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULiveStreamAnimationDataHandler*> ConfiguredDataHandlers;
    
public:
    ULiveStreamAnimationSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetRole(const ELiveStreamAnimationRole NewRole);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELiveStreamAnimationRole GetRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULiveStreamAnimationDataHandler* GetDataHandler(TSubclassOf<ULiveStreamAnimationDataHandler> Type) const;
    

    // Fix for true pure virtual functions not being implemented
};

