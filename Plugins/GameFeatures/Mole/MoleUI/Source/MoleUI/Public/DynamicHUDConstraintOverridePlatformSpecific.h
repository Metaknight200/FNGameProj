#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "DynamicHUDConstraintOverrideBase.h"
#include "DynamicHUDConstraintOverridePlatformSpecific.generated.h"

class UDynamicHUDConstraintBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UDynamicHUDConstraintOverridePlatformSpecific : public UDynamicHUDConstraintOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UDynamicHUDConstraintBase*> PlatformVisibilityControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ECommonInputType, UDynamicHUDConstraintBase*> InputTypeVisibilityControls;
    
    UDynamicHUDConstraintOverridePlatformSpecific();

};

