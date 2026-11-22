#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortControllerEffect.h"
#include "FortControllerEffect_GiveResource.generated.h"

class UFortResourceItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortControllerEffect_GiveResource : public UFortControllerEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortResourceItemDefinition* ResourceItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Quantity;
    
public:
    UFortControllerEffect_GiveResource();

};

