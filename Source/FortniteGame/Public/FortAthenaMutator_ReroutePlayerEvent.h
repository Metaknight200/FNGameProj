#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "ReroutePlayerEventDefinition.h"
#include "FortAthenaMutator_ReroutePlayerEvent.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_ReroutePlayerEvent : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReroutePlayerEventDefinition> RerouteDefinitions;
    
public:
    AFortAthenaMutator_ReroutePlayerEvent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void FlushEventQueue();
    
};

