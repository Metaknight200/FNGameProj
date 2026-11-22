#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_HasMetaTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortControllerRequirement_HasMetaTag : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MetaTag;
    
    UFortControllerRequirement_HasMetaTag();

};

