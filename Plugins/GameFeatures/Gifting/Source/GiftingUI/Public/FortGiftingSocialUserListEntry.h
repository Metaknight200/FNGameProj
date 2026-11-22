#pragma once
#include "CoreMinimal.h"
#include "SocialListEntryBase.h"
#include "ERecipientPresentationMode.h"
#include "FortGiftingSocialUserListEntry.generated.h"

class UAthenaGiftingPriceWidget;
class UCommonRichTextBlock;
class UFortSocialAvatarIcon;
class USocialNameTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGiftingSocialUserListEntry : public USocialListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* Avatar_MemberIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialNameTextBlock* Text_SocialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_EligibilityStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_OwnedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaGiftingPriceWidget* Widget_Price;
    
public:
    UFortGiftingSocialUserListEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPresentationMode(ERecipientPresentationMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserItemSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecipientStatusUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTouchSelectionConfirmed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation);
    
};

