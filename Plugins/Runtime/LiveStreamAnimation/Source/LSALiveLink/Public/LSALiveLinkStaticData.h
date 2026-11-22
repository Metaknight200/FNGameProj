#pragma once
#include "CoreMinimal.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "LSALiveLinkStaticData.generated.h"

USTRUCT(BlueprintType)
struct LSALIVELINK_API FLSALiveLinkStaticData : public FLiveLinkSkeletonStaticData {
    GENERATED_BODY()
public:
    FLSALiveLinkStaticData();
};

