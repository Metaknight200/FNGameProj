#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "SkyfireWidgetBase.generated.h"

class AFortAthenaMutator_Skyfire;
class AFortGameplayMutator;

UCLASS(Blueprintable, EditInlineNew)
class USkyfireWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Skyfire* CachedSkyfireMutator;
    
public:
    USkyfireWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMutatorAvailable(AFortGameplayMutator* MutatorActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MutatorReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnSecurityPointsChanged_BP(const float SecurityPointValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Skyfire* GetSkyfireMutator() const;
    
};

