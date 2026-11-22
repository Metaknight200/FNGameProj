#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MoleQuickChatCategoryData.h"
#include "MoleQuickChatData.generated.h"

USTRUCT(BlueprintType)
struct FMoleQuickChatData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoleQuickChatCategoryData> Categories;
    
    MOLEUI_API FMoleQuickChatData();
};

