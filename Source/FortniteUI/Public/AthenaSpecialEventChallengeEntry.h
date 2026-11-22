#pragma once
#include "CoreMinimal.h"
#include "EPlayerBountyThreatLevel.h"
#include "UrgentQuestData.h"
#include "Components/SlateWrapperTypes.h"
#include "AthenaChallengeEntry.h"
#include "AthenaSpecialEventChallengeEntry.generated.h"

class UCommonTextBlock;
class UFortEventDateTimeTextBlock;
class UImage;
class UProgressBar;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpecialEventChallengeEntry : public UAthenaChallengeEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBarChallengeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* TextChallengeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WidgetTimerContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BountyDistanceFormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WidgetPriceAndDistanceContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_UrgentIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_UrgentAlertBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_UrgentIcon;
    
public:
    UAthenaSpecialEventChallengeEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateBountyThreatLevel(EPlayerBountyThreatLevel NewPlayerBountyThreatLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntrySetup(const FUrgentQuestData& UrgentQuestData, bool bUrgentQuestRecentlyStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBountyThreatInformationVisibilityChange(ESlateVisibility NewVisibilty);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerBountyThreatLevelUpdated(EPlayerBountyThreatLevel NewPlayerBountyThreatLeve);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerBountyThreatLevelEnded();
    
};

