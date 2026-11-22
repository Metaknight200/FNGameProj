#pragma once
#include "CoreMinimal.h"
#include "TagItemList.generated.h"

class UAthenaCosmeticItemDefinition;

USTRUCT(BlueprintType)
struct FTagItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> ItemList;
    
    FORTNITEGAME_API FTagItemList();
};

