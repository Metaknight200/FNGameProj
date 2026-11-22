#pragma once
#include "CoreMinimal.h"
#include "EFortStoreState.h"
#include "FortDirectAcquisitionWidgetBase.h"
#include "OfferGroup.h"
#include "FortLlamaStoreBase.generated.h"

class UCommonActivatablePanelLegacy;
class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UDynamicEntryBox;
class UFortAccountItemDefinition;
class UFortLlamaStoreData;
class UFortLlamaStoreDetailsBase;
class UFortLlamaStoreOfferInfo;
class UFortProgressModal;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOfferGroup> OfferCategoriesToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* OfferEntryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* OfferButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLlamaStoreDetailsBase* OfferDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLlamaStoreData* StoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_UnopenedLlamas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressModal* ProgressModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLlamaStoreOfferInfo* PendingPurchaseOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatablePanelLegacy* StoreOpeningCardPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideSoldOffers;
    
public:
    UFortLlamaStoreBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwapToCardEnterState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowXRayTickets(const UFortAccountItemDefinition* XRayCurrencyDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    void SetupFocus();
    
    UFUNCTION(BlueprintCallable)
    void OnStoreStateChanged(EFortStoreState NewStoreState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStorePurchaseCompleted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateTencentPuchaseOpenModal();
    
};

