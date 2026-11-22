#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "BaseUrlContext.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "McpProfile.generated.h"

class UMcpProfileGroup;

UCLASS(Blueprintable, Config=Engine)
class MCPPROFILESYS_API UMcpProfile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSubscriptionToNotificationsService;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileLockOperationPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileUnlockOperationPending;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMocks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcpProfileGroup* ProfileGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ProfileRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullProfileQueryQueued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileWriteLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ProfileWriteLockExpireTime;
    
public:
    UMcpProfile();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnlockProfileForWrite(const FString& Code, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryPublicProfile(UPARAM(ref) FBaseUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryProfile(UPARAM(ref) FBaseUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LockProfileForWrite(const FString& Code, int32 Timeout, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeleteProfile(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeleteAllProfiles(UPARAM(ref) FClientUrlContext& Context);
    
};

