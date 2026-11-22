#pragma once
#include "CoreMinimal.h"
#include "ItemPresentationRestrictionData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FItemPresentationRestrictionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Icon;
    
    FORTNITEUI_API FItemPresentationRestrictionData();
};

