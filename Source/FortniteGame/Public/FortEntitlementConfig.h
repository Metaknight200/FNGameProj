#pragma once
#include "CoreMinimal.h"
#include "FortEntitlementNameAndTag.h"
#include "FortEntitlementConfig.generated.h"

USTRUCT(BlueprintType)
struct FFortEntitlementConfig : public FFortEntitlementNameAndTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProdId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameDevId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    FORTNITEGAME_API FFortEntitlementConfig();
};

