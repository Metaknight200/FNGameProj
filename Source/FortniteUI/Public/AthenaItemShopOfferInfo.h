#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferInfo.h"
#include "AthenaItemShopOfferInfo.generated.h"

class UAthenaItemShopOfferDisplayData;

UCLASS(Blueprintable)
class UAthenaItemShopOfferInfo : public UFortStoreFrontOfferInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaItemShopOfferDisplayData* ItemShopDisplayAsset;
    
public:
    UAthenaItemShopOfferInfo();

};

