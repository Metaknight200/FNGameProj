#pragma once
#include "CoreMinimal.h"
#include "DynamicHUDConstraintBase.h"
#include "EDynamicHUDComparison.h"
#include "EDynamicHUDSide.h"
#include "EDynamicHUDStrength.h"
#include "DynamicHUDConstraintComparison.generated.h"

class UUserWidget;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UDynamicHUDConstraintComparison : public UDynamicHUDConstraintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDSide Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDComparison Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> TargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetUniqueID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDSide TargetSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDStrength Strength;
    
public:
    UDynamicHUDConstraintComparison();

};

