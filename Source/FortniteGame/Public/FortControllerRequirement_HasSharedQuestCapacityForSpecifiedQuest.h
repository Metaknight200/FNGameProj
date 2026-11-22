#pragma once
#include "CoreMinimal.h"
#include "EQuestSpecificationMethod.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_HasSharedQuestCapacityForSpecifiedQuest.generated.h"

class UFortQuestItemDefinition;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortControllerRequirement_HasSharedQuestCapacityForSpecifiedQuest : public UFortControllerRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestSpecificationMethod QuestSpecificationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> StaticQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlottedQuestIndex;
    
public:
    UFortControllerRequirement_HasSharedQuestCapacityForSpecifiedQuest();

};

