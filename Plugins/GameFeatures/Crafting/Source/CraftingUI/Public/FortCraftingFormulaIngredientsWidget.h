#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCraftingFormulaIngredientsWidget.generated.h"

class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Ingredients;
    
public:
    UFortCraftingFormulaIngredientsWidget();

};

