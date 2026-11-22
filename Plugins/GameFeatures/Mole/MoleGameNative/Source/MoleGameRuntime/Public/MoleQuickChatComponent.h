#pragma once
#include "CoreMinimal.h"
#include "PlayerStateComponent.h"
#include "MoleQuickChatMessageInfo.h"
#include "MoleQuickChatComponent.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleQuickChatComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenSend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MessageInfo, meta=(AllowPrivateAccess=true))
    FMoleQuickChatMessageInfo MessageInfo;
    
public:
    UMoleQuickChatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendMessage(const FMoleQuickChatMessageInfo& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MessageInfo();
    
};

