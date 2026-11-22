#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "FortPrimaryContentInterface.h"
#include "PrimaryContentSetup.h"
#include "SubscriptionContentTabData.h"
#include "FortSubscriptionContentContainer.generated.h"

class UCommonActivatableWidgetSwitcher;
class UCommonButtonGroupBase;
class UDynamicEntryBox;
class UFortSubscriptionManagementScreen;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortSubscriptionContentContainer : public UCommonActivatableWidget, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubscriptionContentTabData> TabsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* ButtonGroup_Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSubscriptionManagementScreen* SubscriptionManagementScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_TabsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryContentSetup ContentSetup;
    
public:
    UFortSubscriptionContentContainer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabSelected(int32 TabIndex);
    

    // Fix for true pure virtual functions not being implemented
};

