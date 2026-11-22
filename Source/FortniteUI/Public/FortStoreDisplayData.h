#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortStoreDisplayData.generated.h"

class UCommonActivatableWidget;
class UFortPlatformPurchaseErrorCodeModal;

UCLASS(Blueprintable)
class UFortStoreDisplayData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AthenaRMTStorefrontNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CampaignRMTStorefrontNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredTokenOfferMetaKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GiftableOfferStorefront;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> StandaloneMTXStoreClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortPlatformPurchaseErrorCodeModal> PlatformPurchaseErrorCodeModalClass;
    
public:
    UFortStoreDisplayData();

};

