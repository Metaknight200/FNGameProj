#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMcpSubscriptionState.h"
#include "FortPrimaryContentInterface.h"
#include "FortSubscriptionContentInterface.h"
#include "FortSubscriptionScreenBase.h"
#include "FortSubscriptionManagementScreen.generated.h"

class UCommonAnimatedSwitcher;
class UCommonButtonBase;
class UCommonButtonLegacy;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortItemPairsInspectionScreen;
class UFortSubscriptionCancellationModal;
class UFortSubscriptionManagementButton;
class UFortSubscriptionPlatformModal;
class UImage;
class USubscriptionDetailsWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortSubscriptionManagementScreen : public UFortSubscriptionScreenBase, public IFortPrimaryContentInterface, public IFortSubscriptionContentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSubscriptionCancellationModal> CancellationInfoModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSubscriptionPlatformModal> LegalInfoModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSubscriptionPlatformModal> ResolveIssueModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSubscriptionPlatformModal> RejoinModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ExitMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CancellationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_LegalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_InspectPackItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSubscriptionManagementButton* Button_ResolveIssue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSubscriptionManagementButton* Button_Rejoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubscriptionDetailsWidget* Widget_SubscriptionRewardDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSubscriptionManagementButton* Button_PurchaseSubscription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_SubscriptionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CantRejoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SubscriptionDisclaimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BlockedBenefits_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Spinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonAnimatedSwitcher* CommonAnimatedSwitcher_ButtonStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortSubscriptionManagementButton* ActiveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortItemPairsInspectionScreen* ItemPairsInspectionScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* InspectScreenViewProgressButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* InspectScreenSubscribeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectItemsSubscribeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectItemsViewProgressAction;
    
public:
    UFortSubscriptionManagementScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenStateSet(EMcpSubscriptionState NewState);
    

    // Fix for true pure virtual functions not being implemented
};

