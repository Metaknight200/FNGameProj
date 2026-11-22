#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortStandaloneFrontend.h"
#include "StandaloneItemShopTabInfo.h"
#include "FortStandaloneItemShop.generated.h"

class UAthenaItemShopScreen;
class UCommonButtonBase;
class UCommonButtonGroupBase;
class UDynamicEntryBox;
class UFortMtxStoreRootBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortStandaloneItemShop : public UFortStandaloneFrontend {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_TabButtons;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* TabsGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStandaloneItemShopTabInfo> TabInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopScreen* ActivatableContent_ItemShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMtxStoreRootBase* ActivatableContent_MtxStore;
    
public:
    UFortStandaloneItemShop();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterTab(const FStandaloneItemShopTabInfo& TabInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabSelected(int32 TabIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeTabs();
    
    UFUNCTION(BlueprintCallable)
    void HandleSelectedTabButtonChanged(UCommonButtonBase* SelectedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void CreateTabs();
    
};

