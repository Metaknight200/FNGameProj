#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TargetingRequestDynamicDelegateDelegate.h"
#include "TargetingRequestHandle.h"
#include "TargetingSourceContext.h"
#include "TargetingSubsystem.generated.h"

class AActor;
class UTargetingPreset;

UCLASS(Blueprintable, MinimalAPI)
class UTargetingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTargetingRequestHandle> AsyncTargetingRequests;
    
public:
    UTargetingSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartAsyncTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate);
    
    UFUNCTION(BlueprintCallable)
    static FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<AActor*>& Targets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExecuteTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate) const;
    
};

