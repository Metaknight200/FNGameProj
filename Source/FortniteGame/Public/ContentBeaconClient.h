#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "ContentMessageArray.h"
#include "EClientContentReadiness.h"
#include "ReplicatedVkResolvedModule.h"
#include "ContentBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AContentBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FContentMessageArray ContentMessagesArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestConnectionInfoString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EClientContentReadiness ClientContentReadiness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ClientAdditionalContentBundles, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedVkResolvedModule> ClientContentModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HostActivatedContent, meta=(AllowPrivateAccess=true))
    bool bHostActivatedContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ShouldErrorOnAdditionalContentFailure, meta=(AllowPrivateAccess=true))
    bool bShouldErrorOnAdditionalContentFailure;
    
public:
    AContentBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnloadManifestContentComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartingContentUnload(const FString& PluginURL);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFinishedActivatingContent(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFinishDisconnect();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheckAdditionalContentIsRequired(const FString& ClientConsumerFilterPlatform);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldErrorOnAdditionalContentFailure();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HostActivatedContent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientAdditionalContentBundles();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnloadManifestContent(const TArray<FString>& PluginURls);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyDisconnect();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdditionalConentIsRequiredCheckComplete(bool bAdditionalContentRequired);
    
};

