#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortPotContentsPopup.generated.h"

class ACraftingObjectBGA;
class UCommonTextBlock;
class UCommonTileView;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPotContentsPopup : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* TileView_PotContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MoreItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_Popup;
    
public:
    UFortPotContentsPopup();

    UFUNCTION(BlueprintCallable)
    void SetOwningCraftingObject(ACraftingObjectBGA* InCraftingObject);
    
};

