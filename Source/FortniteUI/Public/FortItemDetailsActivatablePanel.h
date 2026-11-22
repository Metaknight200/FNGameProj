#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortItemDetailsActivatablePanel.generated.h"

class UCommonLoadGuard;
class UFortItem;
class UFortItemManagementScreen;
class UFortTooltipLoadingWrapper;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemDetailsActivatablePanel : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToCompareWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemManagementScreen> HostItemManagementScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipLoadingWrapper* ItemToDetailLoadingWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* ItemToDetailLoadGuard;
    
public:
    UFortItemDetailsActivatablePanel();

private:
    UFUNCTION(BlueprintCallable)
    void HandleItemToDetailTooltipAssetsLoaded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemToDetailSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemToCompareSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleConsumeItemProgressChangedBP();
    
};

