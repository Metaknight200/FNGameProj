#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortProgressiveItemDetailsWidget.generated.h"

class UAthenaRewardItemTypeRarityTag;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortProgressiveStageTags;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressiveItemDetailsWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CosmeticStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_UnlockCriteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_UnlockCriteriaContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaRewardItemTypeRarityTag* Widget_ItemTypeRarityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressiveStageTags* Widget_ProgressiveStageTags;
    
public:
    UFortProgressiveItemDetailsWidget();

};

