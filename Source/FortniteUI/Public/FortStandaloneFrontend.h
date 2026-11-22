#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FortAthenaLoadout.h"
#include "ActivatableScreenClosedEventDelegate.h"
#include "FortHUDShutdownTimerInterface.h"
#include "FortPrimaryContentInterface.h"
#include "PrimaryContentSetup.h"
#include "FortStandaloneFrontend.generated.h"

class AFortPlayerPawn;
class UCommonButtonBase;
class UCommonWidgetSwitcherLegacy;
class UFortPocketLevel;
class UPocketLevelInstance;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStandaloneFrontend : public UCommonActivatableWidget, public IFortPrimaryContentInterface, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCosmeticRefreshOnClose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPocketLevel* PocketLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPocketLevelInstance* PocketLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLevelLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_TabContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content_LoadingIndicator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout InitialLoadoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_CloseMobile;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivatableScreenClosedEvent OnMenuClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryContentSetup PrimaryContentSetup;
    
public:
    UFortStandaloneFrontend();

protected:
    UFUNCTION(BlueprintCallable)
    static void TriggerIncrementalGC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingIndicatorShown(bool bShown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraLevelLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginLoadingCameraLevel();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCloseRefreshComplete(AFortPlayerPawn* FortPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCloseAction();
    

    // Fix for true pure virtual functions not being implemented
};

