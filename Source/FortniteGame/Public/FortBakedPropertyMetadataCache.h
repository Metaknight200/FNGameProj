#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BakedMetadataCacheContainer.h"
#include "BakedMetadataConfig.h"
#include "FortBakedPropertyMetadataCache.generated.h"

UCLASS(Blueprintable)
class UFortBakedPropertyMetadataCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FBakedMetadataConfig> StructsOrClassesToAutomaticallyBake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FBakedMetadataCacheContainer> MetadataAtRuntime;
    
    UFortBakedPropertyMetadataCache();

};

