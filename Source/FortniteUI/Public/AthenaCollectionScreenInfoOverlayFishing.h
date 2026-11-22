#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionScreenInfoOverlay.h"
#include "AthenaCollectionScreenInfoOverlayFishing.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionScreenInfoOverlayFishing : public UAthenaCollectionScreenInfoOverlay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsProFishingRod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoneText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_PersonalBest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScaleRangeTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ScaleRange;
    
public:
    UAthenaCollectionScreenInfoOverlayFishing();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStarRatingSet(int32 NumStars);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNormalizedLengthSet(float NormalizedLength, float NormalizedMinLength, float NormalizedMaxLength);
    
};

