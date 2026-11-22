#pragma once
#include "CoreMinimal.h"
#include "EPresentationMode.h"
#include "FortItemPreviewScreen.h"
#include "FortItemPairsInspectionScreen.generated.h"

class UAthenaCosmeticUnlockingInfo;
class UCommonActivatableWidgetSwitcher;
class UCommonButtonLegacy;
class UFortItemBaseWidget;
class UFortItemDefinition;
class UFortItemListPreviewWidget;
class UFortStoreSkinDetailsPopup;
class UFortVariantListPreviewWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortItemPairsInspectionScreen : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_PresentationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemListPreviewWidget* Widget_ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantListPreviewWidget* Widget_VariantList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* Widget_ItemInfoHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortStoreSkinDetailsPopup* ItemPopup_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticUnlockingInfo* UnlockingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVariantCyclingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* PresentedItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPresentationMode PresentationMode;
    
public:
    UFortItemPairsInspectionScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupInfoHeader(bool bShouldShowCard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntroAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemBaseWidget* GetItemInfoHeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdatePresentationMode(EPresentationMode NewMode);
    
};

