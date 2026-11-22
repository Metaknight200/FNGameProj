#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CraftingIngredientUIData.generated.h"

class UFortItemDefinition;
class UObject;

USTRUCT(BlueprintType)
struct FCraftingIngredientUIData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IngredientTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortItemDefinition>> ItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> Icons;
    
    CRAFTINGRUNTIME_API FCraftingIngredientUIData();
};

