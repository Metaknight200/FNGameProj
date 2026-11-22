#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "UObject/NoExportTypes.h"
#include "FortColorPalette.h"
#include "FortPrivateAccountInfo.h"
#include "EItemShopCurrency.h"
#include "EItemShopTileSize.h"
#include "EViolatorIntensity.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemShopTile.generated.h"

class AFortItemCaptureActor;
class UAthenaItemShopReactiveTileText;
class UAthenaItemShopTagRotator;
class UAthenaItemShopTileImage;
class UCommonLazyImage;
class UCommonLoadGuard;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UFortItemThumbnailRenderer;
class UFortMtxOfferData;
class UImage;
class UMaterialInterface;
class UTexture2D;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopTile : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemThumbnailRenderer* ThumbnailRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Presentations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemThumbnailRenderer> ThumbnailRendererClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortItemCaptureActor> ItemCaptureActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CaptureActorStartingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureActorZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenPresentationSwaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubInactiveStatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubActiveStatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubPaymentErrorStatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopReactiveTileText* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PreviousPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SubInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_SalePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_RarityStripe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_OwningStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TileState_Owned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TileState_NotOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TileState_SubInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_Violator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopTagRotator* TagRotator_ItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuard_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopTileImage* Image_Offer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopTileImage* Image_NextOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_AnimatedWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialBacking_Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialBacking_NoRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ExternalSubscriptionTexture;
    
public:
    UAthenaItemShopTile();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowNextPresentation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateViolator(EViolatorIntensity ViolatorIntensity, const FText& ViolatorText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTileSize(EItemShopTileSize TileSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSeriesOrRarityColors(const FFortColorPalette& ColorPalette);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemLivePreview(EItemShopTileSize TileSize, UFortItemThumbnailRenderer* ThumbnailRendererPtr, AFortItemCaptureActor* CaptureActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrePresentationSwap();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeekStateChanged(bool bIsInPeekState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayAssetImageLoaded(UTexture2D* OfferImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefaultBackgroundRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrencySet(EItemShopCurrency Currency);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStateChanged(bool bIsActiveState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingLargeLayout() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLocalAccountInfoChanged(FFortPrivateAccountInfo NewInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMtxOfferData* GetLegacyDisplayAsset() const;
    
};

