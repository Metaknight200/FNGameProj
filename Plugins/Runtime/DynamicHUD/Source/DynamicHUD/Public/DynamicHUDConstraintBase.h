#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DynamicHUDConstraintBase.generated.h"

class UDynamicHUDConstraintOverrideBase;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UDynamicHUDConstraintBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicHUDConstraintOverrideBase* ConstraintOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseOverride: 1;
    
public:
    UDynamicHUDConstraintBase();

};

