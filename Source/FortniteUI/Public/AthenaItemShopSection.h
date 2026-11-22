#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "AthenaItemShopSectionInterface.h"
#include "AthenaItemShopSection.generated.h"

class UAthenaScrollBox;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortEventDateTimeTextBlock;
class UFortStoreFrontOfferInfo;
class UHorizontalBox;
class UScaleBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSection : public UCommonActivatableWidget, public IAthenaItemShopSectionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> OfferIdToIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FIntPoint> Analytics_OfferIdToIndex2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> OffersToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_OfferEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaScrollBox* ScrollBox_Offers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* Text_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* CircleArrowButton_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* CircleArrowButton_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_Offers;
    
public:
    UAthenaItemShopSection();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedStateUpdated(bool bIsInSelectedState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float InCurrentScrollOffset);
    

    // Fix for true pure virtual functions not being implemented
};

