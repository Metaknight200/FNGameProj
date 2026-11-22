#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabInterface.h"
#include "Templates/SubclassOf.h"
#include "AthenaInventoryPanelContainer.generated.h"

class UAthenaInventoryItemInfo;
class UCommonButtonBase;
class UCommonWidgetSwitcherLegacy;
class UFortTabListWidgetBase;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAthenaInventoryPanelContainer : public UCommonActivatableWidget, public IFortTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonBase> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaInventoryItemInfo* ItemInfoWidget;
    
public:
    UAthenaInventoryPanelContainer();

private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryTabChanged(UWidget* NewActiveWidget, int32 WidgetIndex);
    

    // Fix for true pure virtual functions not being implemented
};

