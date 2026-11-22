#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattlePassPurchaseScreenBase.h"
#include "AthenaPassPurchaseScreen.generated.h"

class UAthenaPassSelectionButton;
class UBattlePassPurchaseConfirmationButton;
class UCommonActivatableWidget;
class UCommonButtonBase;
class UCommonButtonLegacy;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortActivatableMovieWidget;
class UFortItemPairsInspectionScreen;
class UFortSimpleFeaturedYellowButton;
class UFortStreamMediaSource;
class UFortSubscriptionPlatformModal;
class UImage;
class UOverlay;
class USubscriptionDetailsWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPassPurchaseScreen : public UBattlePassPurchaseScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelaySubscriptionIntroLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortActivatableMovieWidget> SeasonMovieWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSubscriptionPlatformModal> ResolveSubscriptionIssueModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> LegalInfoModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_LegalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_InspectPackItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileInspectPackItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* MTXButton_PurchaseScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SubscriptionDisclaimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_PurchasesButtonDisclaimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPassSelectionButton* Button_PurchaseBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPassSelectionButton* Button_PurchaseSubscription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSimpleFeaturedYellowButton* Button_MobileConfirmSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassPurchaseConfirmationButton* Button_PurchaseBattlePassConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassPurchaseConfirmationButton* Button_PurchaseBattlePassBundleConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubscriptionDetailsWidget* Widget_SubscriptionRewardDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_SafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_White;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* VideoStream_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortItemPairsInspectionScreen* ItemPairsInspectionScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* ProgressiveItemScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* InspectScreenViewProgressButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* InspectScreenSubscribeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectItemsSubscribeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectItemsViewProgressAction;
    
public:
    UAthenaPassPurchaseScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSafeZoneOverlayVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBattlePassIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubscriptionSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassSelected();
    
};

