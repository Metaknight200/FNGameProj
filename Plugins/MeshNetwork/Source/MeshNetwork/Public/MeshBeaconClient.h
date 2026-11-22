#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "OnlineBeaconClient.h"
#include "MeshBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API AMeshBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ConnectedToRoot, meta=(AllowPrivateAccess=true))
    bool bConnectedToRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshPingTime, meta=(AllowPrivateAccess=true))
    FDateTime MeshPingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParentIds, meta=(AllowPrivateAccess=true))
    TArray<FString> ParentIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientId;
    
public:
    AMeshBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateMultipleLevelsVisibility(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateLevelVisibility(const FUpdateLevelVisibilityLevelInfo& LevelVisibility);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetClientId(const FString& NewClientId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ParentIds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshPingTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConnectedToRoot();
    
};

