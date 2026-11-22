#pragma once
#include "CoreMinimal.h"
#include "DynamicHUDConstraintBase.h"
#include "EDynamicHUDComparison.h"
#include "EDynamicHUDOperator.h"
#include "EDynamicHUDSide.h"
#include "EDynamicHUDStrength.h"
#include "DynamicHUDConstraintEquation.generated.h"

class UUserWidget;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UDynamicHUDConstraintEquation : public UDynamicHUDConstraintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDSide Side;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> TargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetUniqueID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDSide TargetSide;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDComparison Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDStrength Strength;
    
public:
    UDynamicHUDConstraintEquation();

};

