#pragma once
#include "CoreMinimal.h"
#include "DynamicHUDConstraintBase.h"
#include "EDynamicHUDAnchor.h"
#include "EDynamicHUDStrength.h"
#include "DynamicHUDConstraintWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UDynamicHUDConstraintWidget : public UDynamicHUDConstraintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDAnchor Anchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> TargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetUniqueID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDAnchor TargetAnchor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDStrength Strength;
    
public:
    UDynamicHUDConstraintWidget();

};

