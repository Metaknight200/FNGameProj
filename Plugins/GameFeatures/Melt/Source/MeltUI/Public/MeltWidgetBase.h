#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "MeltWidgetBase.generated.h"

class AFortAthenaMutator_Fill;

UCLASS(Blueprintable, EditInlineNew)
class UMeltWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Fill* CachedFillMutator;
    
public:
    UMeltWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MutatorReady(const AFortAthenaMutator_Fill* MutatorActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Fill* GetFillMutator() const;
    
    UFUNCTION(BlueprintCallable)
    float CacheAndGetSeaLevel();
    
};

