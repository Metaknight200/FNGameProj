#pragma once
#include "CoreMinimal.h"
#include "EInventoryContentSortType.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "FortItemFilterDefinition.h"
#include "AthenaItemListWidget.generated.h"

class UFortItemListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemListWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemFilterDefinition ItemFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemFilterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryContentSortType ItemSortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemListView* ItemListView;
    
public:
    UAthenaItemListWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInventoryUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryUpdated();
    
};

