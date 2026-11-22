#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "EFortUIFeature.h"
#include "FortAthenaTabsScreenBase.generated.h"

class UCommonWidgetSwitcherLegacy;
class UFortMtxStoreRootBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaTabsScreenBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortUIFeature> TabsUIFeature;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* TabContentSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMtxStoreRootBase* StoreMain_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SeasonTrailerAutoplayEndingCamera;
    
public:
    UFortAthenaTabsScreenBase();

};

