#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "EFortUIFeature.h"
#include "EFortUIFeatureState.h"
#include "EFortUIFeatureStateReason.h"
#include "Templates/SubclassOf.h"
#include "FortMainTabsScreenBase.generated.h"

class UCommonButtonBase;
class UFortTabListWidgetBase;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMainTabsScreenBase : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortUIFeature, FName> FeaturesTabsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* TopTabContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TopTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTabListWidgetBase> MainTabSet;
    
public:
    UFortMainTabsScreenBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMainTabSelected(FName TabNameID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMainTabCreated(FName TabNameID, UCommonButtonBase* TabButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandleFeatureNavigateRequest(EFortUIFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    void ConstructTabs();
    
};

