#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FoleySoundVariant.generated.h"

class USoundLibrary;

USTRUCT(BlueprintType)
struct FFoleySoundVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USoundLibrary>> LibrariesToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USoundLibrary>> LibrariesToRemove;
    
    FORTNITEGAME_API FFoleySoundVariant();
};

