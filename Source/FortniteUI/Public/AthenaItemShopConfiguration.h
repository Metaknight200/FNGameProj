#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaItemShopReloadMtxInfo.h"
#include "AthenaItemShopConfiguration.generated.h"

class UAthenaItemShopCarousel;
class UAthenaItemShopSection;
class UCatalogMessaging;

UCLASS(Blueprintable, Config=Game)
class UAthenaItemShopConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubscriptionOfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CrewBlingOfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LimitedTimeStorefrontNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaItemShopReloadMtxInfo ItemShopReloadMtxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattlePassSectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubscriptionSectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatalogMessaging* TileViolatorTextTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaItemShopSection> SectionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaItemShopCarousel> CarouselWidgetClass;
    
public:
    UAthenaItemShopConfiguration();

};

