#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "FortItemListPreviewWidget.generated.h"

class UCommonButtonBase;
class UCommonButtonLegacy;
class UTileView;
class UVerticalBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemListPreviewWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTileView* TileView_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_PreviewVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_AdditionalButtons;
    
public:
    UFortItemListPreviewWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCommonButtonBase* AddAdditionalButton(const FText& ButtonText, const FDataTableRowHandle& TriggeringInputAction);
    
};

