#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "AthenaCoupledWidgetInterface.h"
#include "FortCookingScreen.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortSlottedRadialMenu;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCookingScreen : public UCommonActivatableWidget, public IAthenaCoupledWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_EjectAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RecipeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RecipeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Recipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSlottedRadialMenu* RadialMenu_Recipes;
    
public:
    UFortCookingScreen();


    // Fix for true pure virtual functions not being implemented
};

