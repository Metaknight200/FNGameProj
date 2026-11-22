#pragma once
#include "CoreMinimal.h"
#include "BakedMetadataConfig.generated.h"

USTRUCT(BlueprintType)
struct FBakedMetadataConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MetaDataKeysToCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeMembersOfMembers;
    
    FORTNITEGAME_API FBakedMetadataConfig();
};

