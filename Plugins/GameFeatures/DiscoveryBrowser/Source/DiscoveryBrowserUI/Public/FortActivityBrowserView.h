#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabInterface.h"
#include "FortActivityView.h"
#include "FortActivityBrowserView.generated.h"

class UFortActivityBrowserListView;
class UFortActivityDetailsDisplay;
class UFortCreativeDiscoveryActivityProvider;
class UFortCreativeDiscoverySurfaceManager;
class UFortSwipePanel;
class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityBrowserView : public UFortActivityView, public IFortTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ShowActivityDescriptionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSwipePanel* SwipePanel_Navigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityDetailsDisplay* DetailsDisplay_SelectedActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityBrowserListView* BrowserList_Activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeDiscoverySurfaceManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeDiscoveryActivityProvider*> CachedSurfaceActivityProviders;
    
public:
    UFortActivityBrowserView();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryActivitiesFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewImageChanged(const bool bIsLoading, const UTexture* Texture);
    

    // Fix for true pure virtual functions not being implemented
};

