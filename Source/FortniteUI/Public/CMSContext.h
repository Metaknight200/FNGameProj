#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "CmsJsonMessages.h"
#include "CreativeAdSource.h"
#include "DynamicBackgroundsSource.h"
#include "KoreanCafeSource.h"
#include "SubgameScreenSource.h"
#include "CMSContext.generated.h"

class UFortPlayerSurveyCMSSurveyDataSource;
class UFortPlayerSurveyInterpreter;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UCMSContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCmsJsonMessages CachedCmsMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSSurveyDataSource* CMSSurveyDataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyInterpreter* PlayerSurveyInterpreter;
    
public:
    UCMSContext();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoOpenNews() const;
    
    UFUNCTION(BlueprintCallable)
    void MarkPlaylistInformationAsViewed();
    
    UFUNCTION(BlueprintCallable)
    void MarkNewsAsShown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewPlaylistInformationAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSurvivalCMSText(FText& Title, FText& Body) const;
    
    UFUNCTION(BlueprintCallable)
    FSubgameScreenSource GetLatestSubgameInfo();
    
    UFUNCTION(BlueprintCallable)
    FKoreanCafeSource GetLatestPCBInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDynamicBackgroundsSource GetLatestDynamicBackgrounds() const;
    
    UFUNCTION(BlueprintCallable)
    FCreativeAdSource GetLatestCreativeAds();
    
};

