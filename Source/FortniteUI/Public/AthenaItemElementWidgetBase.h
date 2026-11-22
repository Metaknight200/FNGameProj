#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortRarity.h"
#include "FortRarityItemData.h"
#include "AthenaItemElementWidgetBase.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemElementWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaItemElementWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* ItemToRepresent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreItemToRepresentChanged(const UFortItem* ItemToRepresent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostItemToRepresentChanged(const UFortItem* ItemToRepresent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRarityUpdated(const EFortRarity ItemRarity, const FFortRarityItemData RarityItemData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemToRepresent() const;
    
};

