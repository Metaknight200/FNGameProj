#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ControllerRequirementTestContext.h"
#include "FortControllerRequirement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortControllerRequirement : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverseCondition;
    
public:
    UFortControllerRequirement();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRequirementMetInternal(const FControllerRequirementTestContext& RequestContext) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequirementMet(const FControllerRequirementTestContext& RequestContext) const;
    
};

