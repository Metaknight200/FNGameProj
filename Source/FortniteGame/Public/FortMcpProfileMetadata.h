#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "FortMcpProfile.h"
#include "FortOutpostCoreInfo.h"
#include "FortMcpProfileMetadata.generated.h"

UCLASS(Blueprintable)
class UFortMcpProfileMetadata : public UFortMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfileMetadata();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOutpostCore(const FString& CoreId, const FFortOutpostCoreInfo& CoreInfo, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDeployableBaseTierProgression(const FString& DeployableBaseItemId, const FString& ProgressionLayoutGuid, int32 TierDefeated, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateOrUpgradeOutpostItem(const FString& TemplateId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateDeployableBaseItem(const FString& TemplateId, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
};

