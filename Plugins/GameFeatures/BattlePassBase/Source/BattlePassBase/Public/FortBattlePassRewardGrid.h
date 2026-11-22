#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "FortNavigatablePage.h"
#include "Templates/SubclassOf.h"
#include "FortBattlePassRewardGrid.generated.h"

class UCommonButtonBase;
class UFortBattlePassRewardGridHeader;
class UFortBattlePassTileBase;
class UGridPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UFortBattlePassRewardGrid : public UCommonActivatableWidget, public IFortNavigatablePage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBattlePassTileBase> GridTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBattlePassTileBase> GridEmptyTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GridCellPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassRewardGridHeader* PageHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* GridPanel_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortBattlePassTileBase* TopLeftTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCommonButtonBase> LastFocusedTile;
    
public:
    UFortBattlePassRewardGrid();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageUnselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageSelected();
    

    // Fix for true pure virtual functions not being implemented
};

