#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AthenaInventoryDropStackSizeRow.generated.h"

USTRUCT(BlueprintType)
struct FAthenaInventoryDropStackSizeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackSize;
    
    FORTNITEUI_API FAthenaInventoryDropStackSizeRow();
};

