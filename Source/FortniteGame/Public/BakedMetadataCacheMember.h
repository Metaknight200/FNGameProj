#pragma once
#include "CoreMinimal.h"
#include "BakedMetadataCacheMember.generated.h"

USTRUCT(BlueprintType)
struct FBakedMetadataCacheMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MetadataKeyValuePairs;
    
    FORTNITEGAME_API FBakedMetadataCacheMember();
};

