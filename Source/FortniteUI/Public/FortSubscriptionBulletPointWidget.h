#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "SubscriptionBulletPoint.h"
#include "FortSubscriptionBulletPointWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSubscriptionBulletPointWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideC;
    
public:
    UFortSubscriptionBulletPointWidget();

    UFUNCTION(BlueprintCallable)
    void SetBulletPointInfo(const FSubscriptionBulletPoint& BulletPointInfo, const FColor& ColorA, const FColor& ColorB, const FColor& ColorC);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBulletPointInfoSet();
    
};

