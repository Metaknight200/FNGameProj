#pragma once
#include "CoreMinimal.h"
#include "VideoWidgetConfig.h"
#include "AthenaShopSpecialOffer.generated.h"

USTRUCT(BlueprintType)
struct FAthenaShopSpecialOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecialOfferEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVideoWidgetConfig SpecialOfferVideo;
    
    FORTNITEUI_API FAthenaShopSpecialOffer();
};

