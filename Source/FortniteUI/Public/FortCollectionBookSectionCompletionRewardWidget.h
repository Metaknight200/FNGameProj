#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookGenericRewardWidget.h"
#include "FortCollectionBookSectionCompletionRewardWidget.generated.h"

class UCommonActivatablePanelLegacy;
class UCommonButtonLegacy;
class UFortCollectionBookRewardModalWidget;
class UFortCollectionBookSection;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* RewardDetailsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModalTitle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSection* Section;
    
public:
    UFortCollectionBookSectionCompletionRewardWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleRewardDetailsModalWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel);
    
};

