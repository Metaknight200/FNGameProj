#pragma once
#include "CoreMinimal.h"
#include "FortRarityItemData.h"
#include "GameplayTagContainer.h"
#include "FortConversationOptionBrief.h"
#include "FortQuestBrief.generated.h"

class UCommonLazyImage;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestBrief : public UFortConversationOptionBrief {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ThisMatchOnlyQuestText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MoneyReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_XpReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_QuestProviderImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_QuestProvider;
    
public:
    UFortQuestBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestInformationRecieved(const FText& Objective, const FFortRarityItemData& RarityData, const FGameplayTag& CategoryTag, int32 XPReward, int32 MoneyReward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestExpirationTimeSet(const bool bDisplayExpirationTime);
    
};

