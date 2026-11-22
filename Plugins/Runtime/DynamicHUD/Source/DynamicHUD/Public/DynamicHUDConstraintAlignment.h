#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "DynamicHUDConstraintBase.h"
#include "EDynamicHUDAnchor.h"
#include "DynamicHUDConstraintAlignment.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UDynamicHUDConstraintAlignment : public UDynamicHUDConstraintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDAnchor Anchor;
    
public:
    UDynamicHUDConstraintAlignment();

};

