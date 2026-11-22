#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SharedQuestRow.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FSharedQuestRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Bucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FORTNITEGAME_API FSharedQuestRow();
};

