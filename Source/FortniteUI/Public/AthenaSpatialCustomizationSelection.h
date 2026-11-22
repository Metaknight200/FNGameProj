#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaSpatialCustomizationSubscreenBase.h"
#include "ESpatialCustomizationCategoryState.h"
#include "AthenaSpatialCustomizationSelection.generated.h"

class UAthenaQuestProgression;
class UAthenaSpatialCustomizationCategoryEntry;
class UAthenaSpatialCustomizationChoice;
class UCommonButtonLegacy;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortColorPicker;
class UFortGameStateComponent_EventLevel;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialCustomizationSelection : public UAthenaSpatialCustomizationSubscreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* IntroChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CategoryTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CategoryDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SelectedChoiceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_LockedReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaQuestProgression* QuestProgress_ChallengeProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_PurchaseBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortColorPicker* ColorPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_FinalizeChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_PreviousCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NextCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_PreviousChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NextChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationChoice* Choice_SelectedChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationChoice* Choice_CustomizationChoicePrevious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationChoice* Choice_CustomizationChoiceNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationChoice* Choice_UnlockUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSpatialCustomizationCategoryEntry*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventGameStateComponent;
    
public:
    UAthenaSpatialCustomizationSelection();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateFinalizedText(const FText& InFinalizedChoiceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalizeChoiceStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalizeChoiceFinished(bool bSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChoiceCountUpdated(int32 ChoiceNum, int32 TotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryUpdated(ESpatialCustomizationCategoryState CategoryState, FLinearColor Color, bool bUseColorPicker);
    
};

