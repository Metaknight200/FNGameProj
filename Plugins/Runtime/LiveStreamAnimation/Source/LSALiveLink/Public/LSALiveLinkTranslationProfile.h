#pragma once
#include "CoreMinimal.h"
#include "LSALiveLinkTranslationProfile.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct LSALIVELINK_API FLSALiveLinkTranslationProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeleton> Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> BoneRemappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesToUse;
    
    FLSALiveLinkTranslationProfile();
};

