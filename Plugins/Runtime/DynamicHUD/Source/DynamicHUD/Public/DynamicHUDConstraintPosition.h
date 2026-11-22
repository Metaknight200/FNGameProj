#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DynamicHUDConstraintBase.h"
#include "EDynamicHUDAnchor.h"
#include "DynamicHUDConstraintPosition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UDynamicHUDConstraintPosition : public UDynamicHUDConstraintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicHUDAnchor Anchor;
    
public:
    UDynamicHUDConstraintPosition();

};

