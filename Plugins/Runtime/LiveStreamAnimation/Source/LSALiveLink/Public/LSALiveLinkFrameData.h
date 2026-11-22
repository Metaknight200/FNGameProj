#pragma once
#include "CoreMinimal.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "LSALiveLinkFrameData.generated.h"

USTRUCT(BlueprintType)
struct LSALIVELINK_API FLSALiveLinkFrameData : public FLiveLinkAnimationFrameData {
    GENERATED_BODY()
public:
    FLSALiveLinkFrameData();
};

