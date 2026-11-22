#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaGiftingWrapOptionsPanel.generated.h"

class UCommonButtonLegacy;
class UFortGiftBoxItemDefinition;
class UTileView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortGiftBoxItemDefinition>> GiftBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGiftBoxItemDefinition*> GiftBoxItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ConfirmWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTileView* TileView_WrapOptions;
    
public:
    UAthenaGiftingWrapOptionsPanel();

};

