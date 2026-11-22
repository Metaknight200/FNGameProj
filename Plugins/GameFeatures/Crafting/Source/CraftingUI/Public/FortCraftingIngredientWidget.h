#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCraftingIngredientWidget.generated.h"

class UAthenaItemIcon;
class UCommonLazyImage;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCraftingIngredientWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NumAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NumRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemIcon* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Icon;
    
public:
    UFortCraftingIngredientWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIngredientWidgetUpdated(const int32 NumAvailable, const int32 NumRequired, const bool bIsPrimaryIngredient, const bool bIsLastIngredient);
    
};

