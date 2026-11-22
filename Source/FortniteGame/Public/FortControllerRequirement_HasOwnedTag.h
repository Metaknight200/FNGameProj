#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_HasOwnedTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortControllerRequirement_HasOwnedTag : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OwnedTag;
    
    UFortControllerRequirement_HasOwnedTag();

};

