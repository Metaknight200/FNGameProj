#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MoleLocationData.generated.h"

USTRUCT(BlueprintType)
struct FMoleLocationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuickChatName;
    
    MOLEUI_API FMoleLocationData();
};

