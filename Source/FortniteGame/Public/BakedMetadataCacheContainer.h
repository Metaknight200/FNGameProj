#pragma once
#include "CoreMinimal.h"
#include "BakedMetadataCacheMember.h"
#include "BakedMetadataCacheContainer.generated.h"

USTRUCT(BlueprintType)
struct FBakedMetadataCacheContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBakedMetadataCacheMember> MetaDataToUseInBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAuthored;
    
    FORTNITEGAME_API FBakedMetadataCacheContainer();
};

