#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "EMcpSubscriptionState.h"
#include "ESubscriptionDisclaimerState.h"
#include "SubscriptionBulletPoint.h"
#include "SubscriptionDetailsWidget.generated.h"

class UCommonLoadGuard;
class UCommonTextBlock;
class UOverlay;
class UTexture2D;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USubscriptionDetailsWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SkinTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SkinDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BattlepassTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BattlepassDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VBucksTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VBucksDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuard_SkinPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuard_BattlepassPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Vbucks_Reimbursement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Vbucks_Reimbursement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_RightSideInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ExternalSubscriptionTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ExternalBattlepassTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MonthNames;
    
public:
    USubscriptionDetailsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVbucksDisclaimerStateUpdated(ESubscriptionDisclaimerState DisclaimerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkinImageTakeOver(bool bTakeOver);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkinImageLoaded(UTexture2D* SkinImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkinDisclaimerStateUpdated(ESubscriptionDisclaimerState DisclaimerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenStateSet(EMcpSubscriptionState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlepassImageLoaded(UTexture2D* SkinImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlepassDisclaimerStateUpdated(ESubscriptionDisclaimerState DisclaimerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearBulletPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddBulletPoint(const FSubscriptionBulletPoint& BulletPointInfo);
    
};

