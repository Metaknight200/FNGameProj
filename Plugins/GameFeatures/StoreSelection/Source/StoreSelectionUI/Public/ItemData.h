#pragma once
#include "CoreMinimal.h"
#include "ItemData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    STORESELECTIONUI_API FItemData();
};

