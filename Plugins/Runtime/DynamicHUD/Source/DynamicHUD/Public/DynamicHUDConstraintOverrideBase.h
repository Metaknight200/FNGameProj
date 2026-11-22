#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DynamicHUDConstraintOverrideBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DYNAMICHUD_API UDynamicHUDConstraintOverrideBase : public UObject {
    GENERATED_BODY()
public:
    UDynamicHUDConstraintOverrideBase();

};

